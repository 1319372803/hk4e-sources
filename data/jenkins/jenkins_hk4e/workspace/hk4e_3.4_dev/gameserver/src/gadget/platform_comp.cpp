// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/platform_comp.cpp

// Line 36: range 0000000014518CCE-0000000014519270
std::string *__cdecl PlatformComp::getDesc[abi:cxx11](std::string *retstr, const PlatformComp *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v16; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v17; // r14
  const Vector3 *Rotation; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v19; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v20; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v21; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v22; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v23; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v24; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v25; // rax
  std::string v; // [rsp+10h] [rbp-D0h] BYREF
  std::string v28; // [rsp+30h] [rbp-B0h] BYREF
  std::string v29; // [rsp+50h] [rbp-90h] BYREF
  char v30[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 os:37";
  *(_QWORD *)(v2 + 16) = PlatformComp::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[is_started:");
  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_started_);
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->is_started_);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, " start_scene_time:");
  if ( *(_BYTE *)(((unsigned __int64)&this->start_scene_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->start_scene_time_);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, " route_index:");
  if ( *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, this->route_index_);
  v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, " route_time:");
  if ( *(_BYTE *)(((unsigned __int64)&this->route_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->route_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, this->route_time_);
  v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, " point_array_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->point_array_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_array_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, this->point_array_id_);
  v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, " point_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v16 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v15, this->point_id_);
  v17 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v16, " rotation:");
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Rotation = Entity::getRotation((const Entity *const)this->gadget_);
  Vector3::toString[abi:cxx11](&v, Rotation);
  v19 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v17, &v);
  v20 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v19, " start_pos:");
  Vector3::toString[abi:cxx11](&v28, &this->start_transform_.position);
  v21 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v20, &v28);
  v22 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v21, " start_rot:");
  Vector3::toString[abi:cxx11](&v29, &this->start_transform_.rotation);
  v23 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v22, &v29);
  v24 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v23, " route_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v25 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v24, this->route_id_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v25, "]");
  std::string::~string(&v29);
  std::string::~string(&v28);
  std::string::~string(&v);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 52: range 0000000014519272-0000000014519B18
void __cdecl PlatformComp::PlatformComp(PlatformComp *const this, Gadget *gadget, const PlatformParam *platform_param)
{
  int (**v3)(...); // rdx
  proto::MovingPlatformType moving_platform_type; // ecx
  uint32_t route_id; // ecx
  bool is_start_route; // cl
  __int64 v7; // rdx
  bool is_use_last_index; // cl
  bool is_started; // cl
  int32_t route_index; // edi

  GadgetCompBase::GadgetCompBase(this, gadget);
  v3 = (int (**)(...))(&`vtable for'PlatformComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  if ( *(char *)(((unsigned __int64)&this->is_open_log_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_open_log_);
  this->is_open_log_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)platform_param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)platform_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)platform_param >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  moving_platform_type = platform_param->moving_platform_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->moving_platform_type_);
  }
  this->moving_platform_type_ = moving_platform_type;
  if ( *(_BYTE *)(((unsigned __int64)&platform_param->route_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)platform_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&platform_param->route_id >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  route_id = platform_param->route_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->route_id_);
  }
  this->route_id_ = route_id;
  if ( *(_BYTE *)(((unsigned __int64)&platform_param->is_start_route >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)platform_param + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&platform_param->is_start_route >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load1(&platform_param->is_start_route);
  }
  is_start_route = platform_param->is_start_route;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_start_route_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_start_route_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_start_route_);
  }
  this->is_start_route_ = is_start_route;
  if ( *(_WORD *)(((unsigned __int64)&this->rot_offset_ >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->rot_offset_);
  if ( (((unsigned __int8)platform_param + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&platform_param->rot_offset >> 3)
                                                                + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&platform_param->rot_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&platform_param->rot_offset.w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)platform_param + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&platform_param->rot_offset.w + 3) >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load_n(&platform_param->rot_offset, 16LL);
  }
  v7 = *(_QWORD *)&platform_param->rot_offset.z;
  *(_QWORD *)&this->rot_offset_.x = *(_QWORD *)&platform_param->rot_offset.x;
  *(_QWORD *)&this->rot_offset_.z = v7;
  if ( *(char *)(((unsigned __int64)&this->pos_offset_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->pos_offset_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 59) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos_offset_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos_offset_, 12LL);
  }
  if ( (((unsigned __int8)platform_param + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&platform_param->pos_offset >> 3)
                                                                + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&platform_param->pos_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&platform_param->pos_offset.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)platform_param + 39) & 7) >= *(_BYTE *)((((unsigned __int64)&platform_param->pos_offset.z + 3) >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load_n(&platform_param->pos_offset, 12LL);
  }
  this->pos_offset_ = platform_param->pos_offset;
  std::shared_ptr<PlatformRoute>::shared_ptr(&this->route_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->point_array_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->point_array_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->point_array_id_);
  }
  this->point_array_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->point_id_);
  }
  this->point_id_ = 0;
  if ( *(char *)(((unsigned __int64)&this->has_entered_sight_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_entered_sight_);
  this->has_entered_sight_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&platform_param->is_use_last_index >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)platform_param + 45) & 7) >= *(_BYTE *)(((unsigned __int64)&platform_param->is_use_last_index >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load1(&platform_param->is_use_last_index);
  }
  is_use_last_index = platform_param->is_use_last_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_use_last_index_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 89) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_use_last_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_use_last_index_);
  }
  this->is_use_last_index_ = is_use_last_index;
  std::shared_ptr<SceneTimer>::shared_ptr(&this->event_timer_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&platform_param->is_started >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)platform_param + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&platform_param->is_started >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load1(&platform_param->is_started);
  }
  is_started = platform_param->is_started;
  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_started_);
  this->is_started_ = is_started;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_update_time_);
  }
  this->last_update_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_scene_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_scene_time_);
  }
  this->start_scene_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->temp_start_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->temp_start_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->temp_start_time_);
  }
  this->temp_start_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->route_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->route_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->route_time_);
  }
  this->route_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&platform_param->route_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)platform_param + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&platform_param->route_index >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  route_index = platform_param->route_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) )
  {
    route_index = (_DWORD)this + 132;
    __asan_report_store4(&this->route_index_);
  }
  this->route_index_ = route_index;
  Transform::Transform(&this->platform_transform_);
  Transform::Transform(&this->start_transform_);
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_scene_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stop_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stop_scene_time_);
  }
  this->stop_scene_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_active_);
  }
  this->is_active_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_updating_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 67) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_updating_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_updating_);
  }
  this->is_updating_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_first_trigger_remains_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 66) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_first_trigger_remains_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_first_trigger_remains_);
  }
  this->is_first_trigger_remains_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  this->is_active_ = this->moving_platform_type_ != MOVING_PLATFORM_ABILITY;
};

// Line 68: range 0000000014519B1A-0000000014519F21
int32_t __cdecl PlatformComp::toBin(const PlatformComp *const this, proto::GroupGadgetBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  uint32_t PointIdToSave; // edx
  int32_t result; // eax
  uint32_t scene_time; // [rsp+1Ch] [rbp-D4h]
  proto::GadgetPlatformBin *platform_bin; // [rsp+20h] [rbp-D0h]
  proto::GadgetPlatformBin *platform_bin_0; // [rsp+28h] [rbp-C8h]
  char v12[192]; // [rsp+30h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 9 result:74";
  *(_QWORD *)(v2 + 16) = PlatformComp::toBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  platform_bin = proto::GroupGadgetBin::mutable_platform(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GadgetPlatformBin::set_moving_platform_type(platform_bin, this->moving_platform_type_);
  if ( *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->moving_platform_type_ == MOVING_PLATFORM_USE_CONFIG )
  {
    scene_time = PlatformComp::getSceneTime(this);
    PlatformSimulateResult::PlatformSimulateResult((PlatformSimulateResult *const)(v2 + 32));
    if ( !PlatformComp::simulatePlatformFromStartTime(this, scene_time, (PlatformSimulateResult *)(v2 + 32))
      && !*(_DWORD *)(v2 + 56)
      && *(_DWORD *)(v2 + 64) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::GadgetPlatformBin::set_route_id(platform_bin, this->route_id_);
      proto::GadgetPlatformBin::set_point_index(platform_bin, *(_DWORD *)(v2 + 64));
      if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_started_);
      proto::GadgetPlatformBin::set_is_started(platform_bin, this->is_started_);
    }
    PlatformSimulateResult::~PlatformSimulateResult((PlatformSimulateResult *const)(v2 + 32));
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->moving_platform_type_ == MOVING_PLATFORM_ROUTE )
    {
      platform_bin_0 = proto::GroupGadgetBin::mutable_platform(bin);
      if ( std::operator!=<PlatformRoute>(0LL, &this->route_ptr_) )
      {
        v6 = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->route_ptr_);
        if ( *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        PointIdToSave = PlatformRoute::getPointIdToSave(v6, this->point_id_);
        proto::GadgetPlatformBin::set_point_id(platform_bin_0, PointIdToSave);
      }
    }
  }
  result = 0;
  if ( v12 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 95: range 0000000014519F22-000000001451A140
int32_t __cdecl PlatformComp::fromBin(PlatformComp *const this, const proto::GroupGadgetBin *bin)
{
  uint32_t v2; // ecx
  google::protobuf::uint32 v3; // edi
  uint32_t v4; // edx
  int32_t v5; // ecx
  bool is_started; // dl
  const proto::GadgetPlatformBin *platform_bin; // [rsp+18h] [rbp-8h]

  platform_bin = proto::GroupGadgetBin::platform(bin);
  v2 = proto::GadgetPlatformBin::point_id(platform_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->point_id_);
  }
  this->point_id_ = v2;
  v3 = proto::GadgetPlatformBin::moving_platform_type(platform_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    v3 = (_DWORD)this + 20;
    __asan_report_store4(&this->moving_platform_type_);
  }
  this->moving_platform_type_ = v3;
  if ( this->moving_platform_type_ == MOVING_PLATFORM_NONE )
    this->moving_platform_type_ = MOVING_PLATFORM_USE_CONFIG;
  if ( proto::GadgetPlatformBin::route_id(platform_bin) )
  {
    v4 = proto::GadgetPlatformBin::route_id(platform_bin);
    if ( *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->route_id_);
    }
    this->route_id_ = v4;
    v5 = proto::GadgetPlatformBin::point_index(platform_bin);
    if ( *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->route_index_);
    }
    this->route_index_ = v5;
    is_started = proto::GadgetPlatformBin::is_started(platform_bin);
    if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_started_);
    this->is_started_ = is_started;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_use_last_index_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 89) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_use_last_index_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_use_last_index_);
    }
    this->is_use_last_index_ = 1;
  }
  return 0;
};

// Line 115: range 000000001451A142-000000001451A17B
int32_t __cdecl PlatformComp::toClient(const PlatformComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  proto::PlatformInfo *v2; // rdx

  v2 = proto::SceneGadgetInfo::mutable_platform(gadget_info);
  PlatformComp::getPlatformInfo(this, v2);
  return 0;
};

// Line 123: range 000000001451A17C-000000001451A844
int32_t __cdecl PlatformComp::init(PlatformComp *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  proto::MovingPlatformType moving_platform_type; // eax
  common::milog::MiLogStream *v6; // rcx
  _BOOL4 v7; // r15d
  common::milog::MiLogStream *v8; // rcx
  int v9; // r15d
  std::__shared_ptr_access<data::ConfigPlatformMove,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // [rsp+10h] [rbp-F0h]
  std::shared_ptr<PlatformRoute> __r; // [rsp+20h] [rbp-E0h] BYREF
  Transform current_transform; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 21 config_gadget_ptr:136 64 16 19 config_move_ptr:142";
  *(_QWORD *)(v2 + 16) = PlatformComp::init;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  moving_platform_type = this->moving_platform_type_;
  if ( moving_platform_type == MOVING_PLATFORM_ROUTE )
    goto LABEL_38;
  if ( moving_platform_type > MOVING_PLATFORM_ROUTE )
  {
LABEL_35:
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gadget/platform_comp.cpp",
      "init",
      162);
    v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v18,
            (const char (*)[30])"unknown moving platform type:");
    v13 = common::milog::MiLogStream::operator<<<proto::MovingPlatformType,(proto::MovingPlatformType*)0>(
            v12,
            &this->moving_platform_type_);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v13, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v1 = -1;
    goto LABEL_39;
  }
  if ( moving_platform_type == MOVING_PLATFORM_USE_CONFIG )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->route_id_ )
      PlatformComp::initRouteState(this);
    goto LABEL_38;
  }
  if ( moving_platform_type != MOVING_PLATFORM_ABILITY )
    goto LABEL_35;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Gadget::getJsonConfig((const Gadget *const)(v2 + 32));
  if ( std::operator==<data::ConfigGadget>(0LL, (const std::shared_ptr<data::ConfigGadget> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/platform_comp.cpp",
      "init",
      139);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v18,
           (const char (*)[28])"getJsonConfig fail, gadget:");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v6, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v1 = -1;
    v7 = 0;
  }
  else
  {
    std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    std::dynamic_pointer_cast<data::ConfigPlatformMove,data::ConfigMove>((const std::shared_ptr<data::ConfigMove> *)(v2 + 64));
    if ( std::operator==<data::ConfigPlatformMove>(0LL, (const std::shared_ptr<data::ConfigPlatformMove> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/platform_comp.cpp",
        "init",
        145);
      v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(&v18, (const char (*)[37])off_253F1BA0);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v8, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v18);
      v1 = -1;
      v9 = 0;
    }
    else
    {
      common::tools::perf::make_shared<PlatformRoute>();
      std::shared_ptr<PlatformRoute>::operator=(&this->route_ptr_, &__r);
      std::shared_ptr<PlatformRoute>::~shared_ptr(&__r);
      v15 = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->route_ptr_);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Entity::getTransform(&current_transform, (Entity *const)this->gadget_);
      v10 = std::__shared_ptr_access<data::ConfigPlatformMove,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigPlatformMove,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( PlatformRoute::init(v15, &v10->route, &this->rot_offset_, &this->pos_offset_, &current_transform) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/platform_comp.cpp",
          "init",
          151);
        v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v18,
                (const char (*)[20])"init fails, gadget:");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v11, this->gadget_);
        common::milog::MiLogStream::~MiLogStream(&v18);
        v1 = -1;
        v9 = 0;
      }
      else
      {
        v9 = 1;
      }
    }
    std::shared_ptr<data::ConfigPlatformMove>::~shared_ptr((std::shared_ptr<data::ConfigPlatformMove> *const)(v2 + 64));
    v7 = v9 != 0;
  }
  std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 32));
  if ( v7 )
LABEL_38:
    v1 = 0;
LABEL_39:
  result = v1;
  if ( v19 == (char *)v2 )
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

// Line 169: range 000000001451A846-000000001451A854
int32_t __cdecl PlatformComp::start(PlatformComp *const this)
{
  return 0;
};

// Line 175: range 000000001451A856-000000001451AD92
void __cdecl PlatformComp::getPlatformInfo(const PlatformComp *const this, proto::PlatformInfo *platform_info)
{
  std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t RouteId; // edx
  google::protobuf::uint32 *v4; // rdx
  uint32_t last_update_time; // ecx
  Transform *p_platform_transform; // rax
  proto::MathQuaternion *started; // rax
  proto::Vector *v8; // rax
  proto::MathQuaternion *v9; // rax
  std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rbx
  proto::Route *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rbx
  Quaternion v16; // [rsp+10h] [rbp-60h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-50h] BYREF
  std::string val; // [rsp+40h] [rbp-30h] BYREF

  if ( std::operator!=<PlatformRoute>(&this->route_ptr_, 0LL) )
  {
    v2 = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->route_ptr_);
    RouteId = PlatformRoute::getRouteId(v2);
    proto::PlatformInfo::set_route_id(platform_info, RouteId);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::PlatformInfo::set_start_index(platform_info, this->route_index_);
  if ( *(_BYTE *)(((unsigned __int64)&this->route_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->route_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::PlatformInfo::set_start_route_time(platform_info, this->route_time_);
  v4 = (google::protobuf::uint32 *)std::max<unsigned int>(&this->start_scene_time_, &this->last_update_time_);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::PlatformInfo::set_start_scene_time(platform_info, *v4);
  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_started_);
  proto::PlatformInfo::set_is_started(platform_info, this->is_started_);
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_scene_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stop_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::PlatformInfo::set_stop_scene_time(platform_info, this->stop_scene_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  last_update_time = this->last_update_time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_scene_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( last_update_time > this->start_scene_time_ )
    p_platform_transform = &this->platform_transform_;
  else
    p_platform_transform = &this->start_transform_;
  v16 = Quaternion::fromRotation(&p_platform_transform->rotation);
  started = proto::PlatformInfo::mutable_start_rot(platform_info);
  Quaternion::toClient(&v16, started);
  v8 = proto::PlatformInfo::mutable_pos_offset(platform_info);
  Vector3::toClient(&this->pos_offset_, v8);
  v9 = proto::PlatformInfo::mutable_rot_offset(platform_info);
  Quaternion::toClient(&this->rot_offset_, v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::PlatformInfo::set_moving_platform_type(platform_info, this->moving_platform_type_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_active_);
  }
  proto::PlatformInfo::set_is_active(platform_info, this->is_active_);
  if ( *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->moving_platform_type_ == MOVING_PLATFORM_ROUTE && std::operator!=<PlatformRoute>(&this->route_ptr_, 0LL) )
  {
    v11 = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->route_ptr_);
    v12 = proto::PlatformInfo::mutable_route(platform_info);
    PlatformRoute::toClient(v11, v12);
  }
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/platform_comp.cpp",
    "getPlatformInfo",
    195);
  v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v17, (const char (*)[8])"gadget:");
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v14 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v13, this->gadget_);
  v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v14, (const char (*)[16])" platform_info:");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, platform_info);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v17);
};

// Line 201: range 000000001451AD94-000000001451ADB2
void __cdecl PlatformComp::onUpdateTimer(PlatformComp *const this, uint64_t now_ms)
{
  PlatformComp::update(this);
};

// Line 207: range 000000001451ADB4-000000001451AF9D
int32_t __cdecl PlatformComp::onEnterPlayerView(PlatformComp *const this, Player *player)
{
  char v2; // al
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rcx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->has_entered_sight_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->has_entered_sight_);
  if ( !this->has_entered_sight_ )
  {
    if ( !std::operator!=<PlatformRoute>(&this->route_ptr_, 0LL) )
      goto LABEL_10;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_start_route_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_start_route_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_start_route_);
    }
    if ( this->is_start_route_ && PlatformComp::startMove(this, OnEnterPlayerSight) )
      v2 = 1;
    else
LABEL_10:
      v2 = 0;
    if ( v2 )
    {
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/platform_comp.cpp",
        "onEnterPlayerView",
        212);
      v3 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v6,
             (const char (*)[23])"start fails, route_id:");
      v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->route_id_);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v4, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v6);
    }
    if ( *(char *)(((unsigned __int64)&this->has_entered_sight_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->has_entered_sight_);
    this->has_entered_sight_ = 1;
  }
  PlatformComp::update(this);
  return 0;
};

// Line 222: range 000000001451AF9E-000000001451AFF9
int32_t __cdecl PlatformComp::onExitPlayerView(PlatformComp *const this, Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Entity::isOnScene((const Entity *const)this->gadget_) )
    PlatformComp::update(this);
  return 0;
};

// Line 231: range 000000001451AFFA-000000001451BF7B
int32_t __cdecl PlatformComp::startMove(PlatformComp *const this, PlatformStartMoveType start_move_type)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rcx
  Scene *v8; // rax
  uint32_t v9; // ecx
  Entity *gadget; // rdi
  PlatformComp *v11; // r14
  __int64 v12; // rdx
  const PlatformRoute *p_route_index; // rdi
  Transform *p_start_transform; // r9
  Transform *p_platform_transform; // rsi
  uint32_t v16; // ecx
  uint32_t v17; // ecx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  uint32_t EntityId; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v29; // r14
  unsigned int SceneTime; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v31; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v32; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v33; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v34; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v35; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v36; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v37; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v38; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v39; // r14
  const Vector3 *Position; // rax
  Player *v41; // rax
  PlayerEventComp *EventComp; // r14
  int32_t result; // eax
  Transform v44; // [rsp+0h] [rbp-240h] BYREF
  PlatformStartMoveType start_move_typea; // [rsp+24h] [rbp-21Ch]
  PlatformComp *thisa; // [rsp+28h] [rbp-218h]
  int val; // [rsp+34h] [rbp-20Ch] BYREF
  proto::PlatformInfo *platform_info; // [rsp+38h] [rbp-208h]
  std::shared_ptr<PlatformStartMoveEvent> __r; // [rsp+40h] [rbp-200h] BYREF
  common::milog::MiLogStream v50; // [rsp+50h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v51; // [rsp+70h] [rbp-1D0h] BYREF
  char v52[432]; // [rsp+90h] [rbp-1B0h] BYREF

  thisa = this;
  start_move_typea = start_move_type;
  v2 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 14 scene_time:256 64 4 17 delta_time_ms:260 80 16 13 scene_ptr:232 112 16 14 player_ptr:2"
                        "90 144 16 6 os:282 176 40 10 notify:274 256 96 10 result:283";
  *(_QWORD *)(v2 + 16) = PlatformComp::startMove;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862731] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v2 + 80));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 80), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/platform_comp.cpp",
      "startMove",
      235);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v51, (const char (*)[18])"scene_ptr is null");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v5, thisa->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v51);
    v6 = -1;
    goto LABEL_63;
  }
  if ( std::operator==<PlatformRoute>(&thisa->route_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/platform_comp.cpp",
      "startMove",
      240);
    v5 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v51, (const char (*)[14])"route is null");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  if ( *(char *)(((unsigned __int64)&thisa->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&thisa->is_started_);
  if ( !thisa->is_started_ || start_move_typea == OnChangeRoute || start_move_typea == OnSetupPointArrayRoute )
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    *(_DWORD *)(v2 + 48) = Scene::getSceneTimeMs(v8);
    v9 = *(_DWORD *)(v2 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->temp_start_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->temp_start_time_ >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_store4(&thisa->temp_start_time_);
    }
    thisa->temp_start_time_ = v9;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    gadget = (Entity *)thisa->gadget_;
    if ( *(char *)(((unsigned __int64)&thisa->platform_transform_ >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&thisa->platform_transform_.rotation.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)thisa - 97) & 7) >= *(_BYTE *)((((unsigned __int64)&thisa->platform_transform_.rotation.z + 3) >> 3)
                                                         + 0x7FFF8000) )
    {
      gadget = (Entity *)&thisa->platform_transform_;
      __asan_report_store_n(&thisa->platform_transform_, 24LL);
    }
    v11 = thisa;
    Entity::getTransform(&v44, gadget);
    v12 = *(_QWORD *)&v44.position.z;
    *(_QWORD *)&v11->platform_transform_.position.x = *(_QWORD *)&v44.position.x;
    *(_QWORD *)&v11->platform_transform_.position.z = v12;
    *(_QWORD *)&v11->platform_transform_.rotation.y = *(_QWORD *)&v44.rotation.y;
    *(_DWORD *)(v2 + 64) = 0;
    p_route_index = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thisa->route_ptr_);
    p_start_transform = &thisa->start_transform_;
    p_platform_transform = &thisa->platform_transform_;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->route_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->route_index_ >> 3) + 0x7FFF8000) )
    {
      p_route_index = (const PlatformRoute *)&thisa->route_index_;
      __asan_report_load4();
    }
    PlatformRoute::simulateTowardsPointByPositionAndRotation(
      p_route_index,
      thisa->route_index_,
      p_platform_transform,
      (uint32_t *)(v2 + 64),
      p_start_transform);
    v16 = *(_DWORD *)(v2 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->last_update_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->last_update_time_ >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_store4(&thisa->last_update_time_);
    }
    thisa->last_update_time_ = v16;
    v17 = *(_DWORD *)(v2 + 48) + *(_DWORD *)(v2 + 64);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->start_scene_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->start_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&thisa->start_scene_time_);
    }
    thisa->start_scene_time_ = v17;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->stop_scene_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->stop_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&thisa->stop_scene_time_);
    }
    thisa->stop_scene_time_ = 0;
    if ( *(char *)(((unsigned __int64)&thisa->is_started_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&thisa->is_started_);
    thisa->is_started_ = 1;
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/platform_comp.cpp",
      "startMove",
      267);
    v18 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v50,
            (const char (*)[25])"[ROUTE] start_move_type:");
    val = start_move_typea;
    v19 = common::milog::MiLogStream::operator<<<int,(int *)0>(v18, &val);
    v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v19, (const char (*)[17])" cur_scene_time:");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 48));
    v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v21, (const char (*)[16])" delta_time_ms:");
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 64));
    v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" gadget:");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v25 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v24, thisa->gadget_);
    v26 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v25,
            (const char (*)[22])" platform_transform_:");
    v27 = operator<<(v26, &thisa->platform_transform_);
    PlatformComp::getDesc[abi:cxx11]((std::string *)&v51, thisa);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, (const std::string *)&v51);
    std::string::~string(&v51);
    common::milog::MiLogStream::~MiLogStream(&v50);
    if ( start_move_typea != OnChangeRoute )
    {
      proto::PlatformStartRouteNotify::PlatformStartRouteNotify((proto::PlatformStartRouteNotify *const)(v2 + 176));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EntityId = Entity::getEntityId((const Entity *const)thisa->gadget_);
      proto::PlatformStartRouteNotify::set_entity_id((proto::PlatformStartRouteNotify *const)(v2 + 176), EntityId);
      platform_info = proto::PlatformStartRouteNotify::mutable_platform((proto::PlatformStartRouteNotify *const)(v2 + 176));
      PlatformComp::getPlatformInfo(thisa, platform_info);
      proto::PlatformStartRouteNotify::set_scene_time(
        (proto::PlatformStartRouteNotify *const)(v2 + 176),
        *(_DWORD *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Entity::notifyViewingPlayers<proto::PlatformStartRouteNotify>(
        (Entity *const)thisa->gadget_,
        (proto::PlatformStartRouteNotify *)(v2 + 176),
        0);
      proto::PlatformStartRouteNotify::~PlatformStartRouteNotify((proto::PlatformStartRouteNotify *const)(v2 + 176));
    }
    if ( *(char *)(((unsigned __int64)&thisa->is_open_log_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&thisa->is_open_log_);
    if ( thisa->is_open_log_ )
    {
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 144));
      v29 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 144),
              "[ROUTE][scene_time:");
      SceneTime = PlatformComp::getSceneTime(thisa);
      v31 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v29, SceneTime);
      v32 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v31, "][type:");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->moving_platform_type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->moving_platform_type_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v33 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v32, thisa->moving_platform_type_);
      v34 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v33, " route_id:");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->route_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->route_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v35 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v34, thisa->route_id_);
      v36 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v35, "]");
      v37 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v36, "start, state_info:");
      PlatformComp::getDesc[abi:cxx11]((std::string *)&v50, thisa);
      v38 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v37, (const std::string *)&v50);
      v39 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v38, ", pos:");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Position = Entity::getPosition((const Entity *const)thisa->gadget_);
      Vector3::toString[abi:cxx11]((std::string *)&v51, Position);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v39, (const std::string *)&v51);
      std::string::~string(&v51);
      std::string::~string(&v50);
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/platform_comp.cpp",
        "startMove",
        282);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
        (std::string *)&v51,
        (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 144));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v50, (const std::string *)&v51);
      std::string::~string(&v51);
      common::milog::MiLogStream::~MiLogStream(&v50);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 144));
    }
    PlatformSimulateResult::PlatformSimulateResult((PlatformSimulateResult *const)(v2 + 256));
    PlatformComp::update(thisa, (PlatformSimulateResult *)(v2 + 256));
    PlatformComp::checkReachTriggerAndCheckStop(thisa, (const PlatformSimulateResult *)(v2 + 256), 0);
    if ( start_move_typea == ByScriptLib )
    {
      std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      Scene::getOwnPlayer((const Scene *const)(v2 + 112));
      if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 112)) )
      {
        v41 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        EventComp = Player::getEventComp(v41);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Gadget::getGadgetId(thisa->gadget_);
        common::tools::perf::make_shared<PlatformStartMoveEvent,unsigned int>(
          (unsigned int *)&__r,
          (unsigned int *)&val);
        std::shared_ptr<BaseEvent>::shared_ptr<PlatformStartMoveEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v2 + 144),
          &__r);
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v2 + 144));
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 144));
        std::shared_ptr<PlatformStartMoveEvent>::~shared_ptr(&__r);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 112));
    }
    v6 = 0;
    PlatformSimulateResult::~PlatformSimulateResult((PlatformSimulateResult *const)(v2 + 256));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v51,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/platform_comp.cpp",
      "startMove",
      251);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v51,
           (const char (*)[29])"platform has already started");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, thisa->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v51);
    v6 = 0;
  }
LABEL_63:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 80));
  result = v6;
  if ( v52 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 300: range 000000001451BF7C-000000001451CE66
int32_t __cdecl PlatformComp::stopMove(PlatformComp *const this, bool is_reach_stop)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rcx
  Scene *v9; // rax
  uint32_t v10; // ecx
  uint32_t v11; // ecx
  uint32_t v12; // ecx
  int32_t v13; // ecx
  uint32_t v14; // ecx
  const Vector3 *Position; // rax
  Scene *v16; // rcx
  uint32_t v17; // ecx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rcx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v26; // r14
  unsigned int SceneTime; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v28; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v29; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v30; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v31; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v32; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v33; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v34; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v35; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v36; // r14
  const Vector3 *v37; // rax
  uint32_t EntityId; // eax
  proto::PlatformInfo *v39; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v41; // [rsp+10h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v42; // [rsp+30h] [rbp-190h] BYREF
  char v43[368]; // [rsp+50h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 14 scene_time:317 48 16 13 scene_ptr:306 80 16 6 os:341 112 40 10 notify:343 192 96 10 result:318";
  *(_QWORD *)(v2 + 16) = PlatformComp::stopMove;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862729] = -202116109;
  if ( std::operator==<PlatformRoute>(&this->route_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/platform_comp.cpp",
      "stopMove",
      303);
    v5 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v42, (const char (*)[14])"route is null");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v5, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v42);
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getScene((const Entity *const)(v2 + 48));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/platform_comp.cpp",
        "stopMove",
        309);
      v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v42,
             (const char (*)[18])"scene_ptr is null");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v42);
      v6 = -1;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_started_);
      if ( !this->is_started_ )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/platform_comp.cpp",
          "stopMove",
          314);
        v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
               &v42,
               (const char (*)[29])"platform has already stopped");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v8, this->gadget_);
        common::milog::MiLogStream::~MiLogStream(&v42);
        v6 = 0;
      }
      else
      {
        v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        *(_DWORD *)(v2 + 32) = Scene::getSceneTimeMs(v9);
        PlatformSimulateResult::PlatformSimulateResult((PlatformSimulateResult *const)(v2 + 192));
        if ( !PlatformComp::simulatePlatformFromStartTime(
                this,
                *(_DWORD *)(v2 + 32),
                (PlatformSimulateResult *)(v2 + 192)) )
        {
          v10 = *(_DWORD *)(v2 + 32);
          if ( *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_store4(&this->last_update_time_);
          }
          this->last_update_time_ = v10;
          v11 = *(_DWORD *)(v2 + 32);
          if ( *(_BYTE *)(((unsigned __int64)&this->start_scene_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->start_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->start_scene_time_);
          }
          this->start_scene_time_ = v11;
          v12 = *(_DWORD *)(v2 + 32);
          if ( *(_BYTE *)(((unsigned __int64)&this->stop_scene_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->stop_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->stop_scene_time_);
          }
          this->stop_scene_time_ = v12;
          if ( *(char *)(((unsigned __int64)&this->start_transform_ >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&this->start_transform_.position.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this - 85) & 7) >= *(_BYTE *)((((unsigned __int64)&this->start_transform_.position.z
                                                                + 3) >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_store_n(&this->start_transform_, 12LL);
          }
          *(_QWORD *)&this->start_transform_.position.x = *(_QWORD *)(v2 + 192);
          this->start_transform_.position.z = *(float *)(v2 + 200);
          if ( (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->start_transform_.rotation >> 3)
                                                              + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&this->start_transform_.rotation >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&this->start_transform_.rotation.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this - 73) & 7) >= *(_BYTE *)((((unsigned __int64)&this->start_transform_.rotation.z
                                                                + 3) >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_store_n(&this->start_transform_.rotation, 12LL);
          }
          this->start_transform_.rotation = *(Vector3 *)(v2 + 204);
          v13 = *(_DWORD *)(v2 + 224);
          if ( *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_store4(&this->route_index_);
          }
          this->route_index_ = v13;
          v14 = *(_DWORD *)(v2 + 220);
          if ( *(_BYTE *)(((unsigned __int64)&this->route_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->route_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->route_time_);
          }
          this->route_time_ = v14;
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Position = Entity::getPosition((const Entity *const)this->gadget_);
          if ( operator!=(Position, (const Vector3 *)(v2 + 192)) )
          {
            v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Scene::entityMoveTo(v16, (Entity *)this->gadget_, (const Vector3 *)(v2 + 192));
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Entity::setRotation((Entity *const)this->gadget_, (const Vector3 *)(v2 + 204));
          v17 = *(_DWORD *)(v2 + 252);
          if ( *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(&this->point_id_);
          }
          this->point_id_ = v17;
        }
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/platform_comp.cpp",
          "stopMove",
          335);
        v18 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v41,
                (const char (*)[26])"stop move, is_reach_stop:");
        v19 = common::milog::MiLogStream::operator<<(v18, is_reach_stop);
        v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])" scene_time:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v2 + 32));
        v22 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" gadget:");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v23 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v22, this->gadget_);
        v24 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v23, (const char (*)[2])" ");
        PlatformComp::getDesc[abi:cxx11]((std::string *)&v42, this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, (const std::string *)&v42);
        std::string::~string(&v42);
        common::milog::MiLogStream::~MiLogStream(&v41);
        if ( std::operator!=<SceneTimer>(&this->event_timer_ptr_, 0LL) )
        {
          v25 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->event_timer_ptr_);
          common::tools::MiTimer::cancel(v25);
        }
        PlatformComp::checkReachTrigger(this, (const PlatformSimulateResult *)(v2 + 192), 1);
        if ( *(char *)(((unsigned __int64)&this->is_open_log_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_open_log_);
        if ( this->is_open_log_ )
        {
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 80));
          v26 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                  (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 80),
                  "[ROUTE][scene_time:");
          SceneTime = PlatformComp::getSceneTime(this);
          v28 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v26, SceneTime);
          v29 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v28, "][type:");
          if ( *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v30 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                  v29,
                  this->moving_platform_type_);
          v31 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v30, " route_id:");
          if ( *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          v32 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v31, this->route_id_);
          v33 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v32, "]");
          v34 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v33, "stop, state_info:");
          PlatformComp::getDesc[abi:cxx11]((std::string *)&v41, this);
          v35 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                  v34,
                  (const std::string *)&v41);
          v36 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v35, ", pos:");
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v37 = Entity::getPosition((const Entity *const)this->gadget_);
          Vector3::toString[abi:cxx11]((std::string *)&v42, v37);
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v36, (const std::string *)&v42);
          std::string::~string(&v42);
          std::string::~string(&v41);
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/gadget/platform_comp.cpp",
            "stopMove",
            341);
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
            (std::string *)&v42,
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 80));
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v41, (const std::string *)&v42);
          std::string::~string(&v42);
          common::milog::MiLogStream::~MiLogStream(&v41);
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 80));
        }
        if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_started_);
        this->is_started_ = 0;
        proto::PlatformStopRouteNotify::PlatformStopRouteNotify((proto::PlatformStopRouteNotify *const)(v2 + 112));
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
        proto::PlatformStopRouteNotify::set_entity_id((proto::PlatformStopRouteNotify *const)(v2 + 112), EntityId);
        proto::PlatformStopRouteNotify::set_scene_time(
          (proto::PlatformStopRouteNotify *const)(v2 + 112),
          *(_DWORD *)(v2 + 32));
        v39 = proto::PlatformStopRouteNotify::mutable_platform((proto::PlatformStopRouteNotify *const)(v2 + 112));
        PlatformComp::getPlatformInfo(this, v39);
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v6 = Entity::notifyViewingPlayers<proto::PlatformStopRouteNotify>(
               (Entity *const)this->gadget_,
               (proto::PlatformStopRouteNotify *)(v2 + 112),
               0);
        proto::PlatformStopRouteNotify::~PlatformStopRouteNotify((proto::PlatformStopRouteNotify *const)(v2 + 112));
        PlatformSimulateResult::~PlatformSimulateResult((PlatformSimulateResult *const)(v2 + 192));
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 48));
  }
  result = v6;
  if ( v43 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 352: range 000000001451CE68-000000001451CF1B
int32_t __cdecl PlatformComp::active(PlatformComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_active_);
  }
  if ( this->is_active_ )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_active_);
  }
  this->is_active_ = 1;
  return PlatformComp::startMove(this, OnActive);
};

// Line 362: range 000000001451CF1C-000000001451D353
int32_t __cdecl PlatformComp::deactive(PlatformComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int32_t v4; // r14d
  common::milog::MiLogStream *v5; // rcx
  Scene *v6; // rax
  uint32_t SceneTimeMs; // esi
  uint32_t start_scene_time; // ecx
  int32_t result; // eax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-90h] BYREF
  char v11[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 scene_ptr:367";
  *(_QWORD *)(v1 + 16) = PlatformComp::deactive;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_active_);
  }
  if ( !this->is_active_ )
  {
    v4 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getScene((const Entity *const)(v1 + 32));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/platform_comp.cpp",
        "deactive",
        370);
      v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v10,
             (const char (*)[18])"scene_ptr is null");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v5, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v10);
      v4 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_active_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_active_);
      }
      this->is_active_ = 0;
      v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      SceneTimeMs = Scene::getSceneTimeMs(v6);
      if ( *(_BYTE *)(((unsigned __int64)&this->start_scene_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->start_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->start_scene_time_);
      }
      this->start_scene_time_ = SceneTimeMs;
      start_scene_time = this->start_scene_time_;
      if ( *(_BYTE *)(((unsigned __int64)&this->stop_scene_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->stop_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->stop_scene_time_);
      }
      this->stop_scene_time_ = start_scene_time;
      if ( *(_BYTE *)(((unsigned __int64)&this->route_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->route_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->route_time_);
      }
      this->route_time_ = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->route_index_);
      }
      this->route_index_ = 0;
      if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_started_);
      this->is_started_ = 1;
      v4 = PlatformComp::stopMove(this, 0);
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  }
  result = v4;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 383: range 000000001451D354-000000001451D4C5
int32_t __cdecl PlatformComp::update(PlatformComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int32_t v4; // r14d
  int32_t result; // eax
  char v6[208]; // [rsp+10h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 96 10 result:384";
  *(_QWORD *)(v1 + 16) = PlatformComp::update;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450896) = -202116109;
  PlatformSimulateResult::PlatformSimulateResult((PlatformSimulateResult *const)(v1 + 32));
  if ( PlatformComp::update(this, (PlatformSimulateResult *)(v1 + 32)) )
  {
    v4 = -1;
  }
  else
  {
    PlatformComp::checkReachTriggerAndCheckStop(this, (const PlatformSimulateResult *)(v1 + 32), 1);
    v4 = 0;
  }
  PlatformSimulateResult::~PlatformSimulateResult((PlatformSimulateResult *const)(v1 + 32));
  result = v4;
  if ( v6 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 394: range 000000001451D4C6-000000001451E1DA
int32_t __cdecl PlatformComp::update(PlatformComp *const this, PlatformSimulateResult *result)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rcx
  Scene *v7; // rax
  int32_t route_index; // ecx
  uint32_t route_time; // ecx
  __int64 v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *p_rotation; // rdi
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  const Vector3 *Position; // rax
  Scene *p_gadget; // rdi
  const Vector3 *p_position; // rax
  uint32_t point_id; // ecx
  int32_t v26; // eax
  __int64 v28; // [rsp+18h] [rbp-128h]
  float z; // [rsp+20h] [rbp-120h]
  Vector3 rotation; // [rsp+24h] [rbp-11Ch]
  Transform platform_transform; // [rsp+30h] [rbp-110h] BYREF
  Transform v32; // [rsp+50h] [rbp-F0h] BYREF
  common::milog::MiLogStream v33; // [rsp+70h] [rbp-D0h] BYREF
  common::milog::MiLogStream v34; // [rsp+90h] [rbp-B0h] BYREF
  char v35[144]; // [rsp+B0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 14 scene_time:410 48 4 20 last_update_time:413 64 16 13 scene_ptr:399";
  *(_QWORD *)(v2 + 16) = PlatformComp::update;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  if ( std::operator==<PlatformRoute>(&this->route_ptr_, 0LL) )
  {
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getScene((const Entity *const)(v2 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/platform_comp.cpp",
        "update",
        402);
      v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v34,
             (const char (*)[18])"scene_ptr is null");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v6, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v34);
      v5 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->is_updating_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 67) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_updating_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_updating_);
      }
      if ( this->is_updating_ )
      {
        v5 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->is_updating_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this - 67) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_updating_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&this->is_updating_);
        }
        this->is_updating_ = 1;
        v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        *(_DWORD *)(v2 + 32) = Scene::getSceneTimeMs(v7);
        if ( !PlatformComp::simulatePlatformFromStartTime(this, *(_DWORD *)(v2 + 32), result) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 48) = this->last_update_time_;
          this->last_update_time_ = *(_DWORD *)(v2 + 32);
          if ( *(_BYTE *)(((unsigned __int64)&result->route_index >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&result->route_index >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          route_index = result->route_index;
          if ( *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_store4(&this->route_index_);
          }
          this->route_index_ = route_index;
          if ( *(_BYTE *)(((unsigned __int64)&result->route_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)result + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->route_time >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          route_time = result->route_time;
          if ( *(_BYTE *)(((unsigned __int64)&this->route_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->route_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->route_time_);
          }
          this->route_time_ = route_time;
          if ( *(_BYTE *)(((unsigned __int64)&result->left_temp_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&result->left_temp_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( result->left_temp_time )
          {
            if ( *(char *)(((unsigned __int64)result >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&result->position.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)result + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&result->position.z + 3) >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load_n(result, 12LL);
            }
            v28 = *(_QWORD *)&result->position.x;
            z = result->position.z;
            if ( (((unsigned __int8)result + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&result->rotation >> 3)
                                                                  + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)&result->rotation >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&result->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)result + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&result->rotation.z + 3) >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load_n(&result->rotation, 12LL);
            }
            rotation = result->rotation;
            if ( *(char *)(((unsigned __int64)&this->platform_transform_ >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&this->platform_transform_.position.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)this - 109) & 7) >= *(_BYTE *)((((unsigned __int64)&this->platform_transform_.position.z
                                                                   + 3) >> 3)
                                                                 + 0x7FFF8000) )
            {
              __asan_report_store_n(&this->platform_transform_, 12LL);
            }
            *(_QWORD *)&this->platform_transform_.position.x = v28;
            this->platform_transform_.position.z = z;
            if ( (((unsigned __int8)this - 108) & 7) >= *(_BYTE *)(((unsigned __int64)&this->platform_transform_.rotation >> 3)
                                                                 + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)&this->platform_transform_.rotation >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&this->platform_transform_.rotation.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)this - 97) & 7) >= *(_BYTE *)((((unsigned __int64)&this->platform_transform_.rotation.z
                                                                  + 3) >> 3)
                                                                + 0x7FFF8000) )
            {
              __asan_report_store_n(&this->platform_transform_.rotation, 12LL);
            }
            this->platform_transform_.rotation = rotation;
          }
          else
          {
            if ( *(char *)(((unsigned __int64)&this->platform_transform_ >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&this->platform_transform_.rotation.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)this - 97) & 7) >= *(_BYTE *)((((unsigned __int64)&this->platform_transform_.rotation.z
                                                                  + 3) >> 3)
                                                                + 0x7FFF8000) )
            {
              __asan_report_store_n(&this->platform_transform_, 24LL);
            }
            if ( (((unsigned __int8)result + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&result->platform_transform >> 3)
                                                                  + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)&result->platform_transform >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&result->platform_transform.rotation.z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)result + 59) & 7) >= *(_BYTE *)((((unsigned __int64)&result->platform_transform.rotation.z
                                                                    + 3) >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load_n(&result->platform_transform, 24LL);
            }
            v10 = *(_QWORD *)&result->platform_transform.position.z;
            *(_QWORD *)&this->platform_transform_.position.x = *(_QWORD *)&result->platform_transform.position.x;
            *(_QWORD *)&this->platform_transform_.position.z = v10;
            *(_QWORD *)&this->platform_transform_.rotation.y = *(_QWORD *)&result->platform_transform.rotation.y;
          }
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/gadget/platform_comp.cpp",
            "update",
            425);
          v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  &v33,
                  (const char (*)[18])"last_update_time:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v2 + 48));
          v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" scene_time:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v2 + 32));
          v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" from:");
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Entity::getTransform(&platform_transform, (Entity *const)this->gadget_);
          v16 = operator<<(v15, &platform_transform);
          p_rotation = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v16, (const char (*)[5])" to:");
          if ( *(char *)(((unsigned __int64)result >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&result->position.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)result + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&result->position.z + 3) >> 3)
                                                                + 0x7FFF8000) )
          {
            p_rotation = (common::milog::MiLogStream *)result;
            __asan_report_load_n(result, 12LL);
          }
          *(_QWORD *)&v32.position.x = *(_QWORD *)&result->position.x;
          v32.position.z = result->position.z;
          if ( (((unsigned __int8)result + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&result->rotation >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&result->rotation >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&result->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)result + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&result->rotation.z + 3) >> 3)
                                                                + 0x7FFF8000) )
          {
            p_rotation = (common::milog::MiLogStream *)&result->rotation;
            __asan_report_load_n(&result->rotation, 12LL);
          }
          v32.rotation = result->rotation;
          v18 = operator<<(p_rotation, &v32);
          v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])" gadget:");
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v20 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v19, this->gadget_);
          v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" platform:");
          PlatformComp::getDesc[abi:cxx11]((std::string *)&v34, this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, (const std::string *)&v34);
          std::string::~string(&v34);
          common::milog::MiLogStream::~MiLogStream(&v33);
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Position = Entity::getPosition((const Entity *const)this->gadget_);
          if ( operator!=(Position, &result->position) )
          {
            p_gadget = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            p_position = &result->position;
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            {
              p_gadget = (Scene *)&this->gadget_;
              p_position = (const Vector3 *)__asan_report_load8();
            }
            Scene::entityMoveTo(p_gadget, (Entity *)this->gadget_, p_position);
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Entity::setRotation((Entity *const)this->gadget_, &result->rotation);
          if ( *(_BYTE *)(((unsigned __int64)&result->point_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)result + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->point_id >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          point_id = result->point_id;
          if ( *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(&this->point_id_);
          }
          this->point_id_ = point_id;
          PlatformComp::checkNextReachTriggerPoint(this, result);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->is_updating_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this - 67) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_updating_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&this->is_updating_);
        }
        this->is_updating_ = 0;
        v5 = 0;
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  v26 = v5;
  if ( v35 == (char *)v2 )
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
  return v26;
};

// Line 441: range 000000001451E1DC-000000001451F127
int32_t __cdecl PlatformComp::initRouteState(PlatformComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  JsonConfigMgr *p_json_config_mgr; // r15
  uint32_t route_id; // r14d
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t SceneId; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  PlatformRoute *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v17; // r14
  unsigned int SceneTime; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v19; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v20; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v21; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v22; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v23; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v24; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v25; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v26; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v27; // r14
  const Vector3 *Position; // rax
  PlatformRoute *p_route_index; // rdi
  unsigned __int64 gadget; // rdi
  _QWORD *v31; // rax
  unsigned __int64 v32; // rax
  std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  Entity *p_platform_transform; // rdi
  PlatformComp *v35; // r14
  __int64 v36; // rdx
  Transform *v37; // rdx
  PlatformComp *v38; // rax
  __int64 v39; // rdi
  int32_t result; // eax
  Transform v41; // [rsp+10h] [rbp-170h] BYREF
  PlatformComp *thisa; // [rsp+38h] [rbp-148h]
  const data::ConfigRoute *config_route_ptr; // [rsp+48h] [rbp-138h]
  Transform current_transform; // [rsp+50h] [rbp-130h] BYREF
  common::milog::MiLogStream v45; // [rsp+70h] [rbp-110h] BYREF
  std::string val; // [rsp+90h] [rbp-F0h] BYREF
  char v47[208]; // [rsp+B0h] [rbp-D0h] BYREF

  thisa = this;
  v1 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 12 7 pos:469 64 12 7 rot:469 96 16 13 group_ptr:442 128 16 6 os:466";
  *(_QWORD *)(v1 + 16) = PlatformComp::initRouteState;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219020288;
  v3[536862722] = -219020288;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getGroup((const Entity *const)(v1 + 96));
  if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v1 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/platform_comp.cpp",
      "initRouteState",
      445);
    v4 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v45,
           (const char (*)[23])"group is null, gadget:");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v4, thisa->gadget_);
    v6 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])" ");
    PlatformComp::getDesc[abi:cxx11](&val, thisa);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v45);
    v7 = -1;
    goto LABEL_74;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 128));
  p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128))->design_config.json_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->route_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->route_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  route_id = thisa->route_id_;
  v10 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
  SceneId = Group::getSceneId(v10);
  config_route_ptr = JsonConfigMgr::findSceneRouteConfig(p_json_config_mgr, SceneId, route_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 128));
  if ( !config_route_ptr )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/platform_comp.cpp",
      "initRouteState",
      451);
    v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            (common::milog::MiLogStream *const)&val,
            (const char (*)[21])off_253F2660);
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &thisa->route_id_);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v13, thisa->gadget_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    v7 = -1;
    goto LABEL_74;
  }
  common::tools::perf::make_shared<PlatformRoute,unsigned int &>((unsigned int *)(v1 + 128), &thisa->route_id_);
  std::shared_ptr<PlatformRoute>::operator=(&thisa->route_ptr_, (std::shared_ptr<PlatformRoute> *)(v1 + 128));
  std::shared_ptr<PlatformRoute>::~shared_ptr((std::shared_ptr<PlatformRoute> *const)(v1 + 128));
  v14 = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thisa->route_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getTransform(&current_transform, (Entity *const)thisa->gadget_);
  if ( PlatformRoute::init(v14, config_route_ptr, &Quaternion::identity, &Vector3::zero, &current_transform) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/platform_comp.cpp",
      "initRouteState",
      457);
    v15 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            (common::milog::MiLogStream *const)&val,
            (const char (*)[22])"init fails, route_id:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &thisa->route_id_);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_21:
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v16, thisa->gadget_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    v7 = -1;
    goto LABEL_74;
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->is_use_last_index_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)thisa + 89) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->is_use_last_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&thisa->is_use_last_index_);
  }
  if ( !thisa->is_use_last_index_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->route_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->route_index_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&thisa->route_index_);
    }
    thisa->route_index_ = 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->route_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->route_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&thisa->route_time_);
  }
  thisa->route_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->stop_scene_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->stop_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&thisa->stop_scene_time_);
  }
  thisa->stop_scene_time_ = 0;
  if ( *(char *)(((unsigned __int64)&thisa->is_open_log_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&thisa->is_open_log_);
  if ( thisa->is_open_log_ )
  {
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 128));
    v17 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 128),
            "[ROUTE][scene_time:");
    SceneTime = PlatformComp::getSceneTime(thisa);
    v19 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v17, SceneTime);
    v20 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v19, "][type:");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->moving_platform_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->moving_platform_type_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v21 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v20, thisa->moving_platform_type_);
    v22 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v21, " route_id:");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->route_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->route_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v23 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v22, thisa->route_id_);
    v24 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v23, "]");
    v25 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            v24,
            "init route state, start_route_index:");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->route_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->route_index_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v26 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v25, thisa->route_index_);
    v27 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v26, ", pos:");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Position = Entity::getPosition((const Entity *const)thisa->gadget_);
    Vector3::toString[abi:cxx11](&val, Position);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v27, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/platform_comp.cpp",
      "initRouteState",
      466);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
      &val,
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 128));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v45, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v45);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v1 + 128));
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->is_use_last_index_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)thisa + 89) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->is_use_last_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&thisa->is_use_last_index_);
  }
  if ( thisa->is_use_last_index_ )
  {
    Vector3::Vector3((Vector3 *const)(v1 + 32), 0.0, 0.0, 0.0);
    Vector3::Vector3((Vector3 *const)(v1 + 64), 0.0, 0.0, 0.0);
    p_route_index = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thisa->route_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->route_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->route_index_ >> 3) + 0x7FFF8000) )
    {
      p_route_index = (PlatformRoute *)&thisa->route_index_;
      __asan_report_load4();
    }
    if ( PlatformRoute::getPositionAndRotationByIndex(
           p_route_index,
           thisa->route_index_,
           (Vector3 *)(v1 + 32),
           (Vector3 *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/platform_comp.cpp",
        "initRouteState",
        472);
      v16 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[36])"getPositionAndRotationByIndex fails");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_21;
    }
    if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    gadget = (unsigned __int64)thisa->gadget_;
    v31 = (_QWORD *)gadget;
    if ( *(_BYTE *)((gadget >> 3) + 0x7FFF8000) )
    {
      gadget = (unsigned __int64)thisa->gadget_;
      v31 = (_QWORD *)__asan_report_load8();
    }
    v32 = *v31 + 80LL;
    if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
    {
      gadget = v32;
      v32 = __asan_report_load8();
    }
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v32)(gadget, v1 + 32);
    v33 = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)&thisa->route_ptr_);
    if ( PlatformRoute::getRotType(v33) == ROT_ROUND )
    {
      if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Entity::setRotation((Entity *const)thisa->gadget_, (const Vector3 *)(v1 + 64));
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_platform_transform = (Entity *)thisa->gadget_;
  if ( *(char *)(((unsigned __int64)&thisa->platform_transform_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&thisa->platform_transform_.rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)thisa - 97) & 7) >= *(_BYTE *)((((unsigned __int64)&thisa->platform_transform_.rotation.z + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    p_platform_transform = (Entity *)&thisa->platform_transform_;
    __asan_report_store_n(&thisa->platform_transform_, 24LL);
  }
  v35 = thisa;
  Entity::getTransform(&v41, p_platform_transform);
  v36 = *(_QWORD *)&v41.position.z;
  *(_QWORD *)&v35->platform_transform_.position.x = *(_QWORD *)&v41.position.x;
  *(_QWORD *)&v35->platform_transform_.position.z = v36;
  *(_QWORD *)&v35->platform_transform_.rotation.y = *(_QWORD *)&v41.rotation.y;
  v37 = &thisa->platform_transform_;
  if ( *(char *)(((unsigned __int64)&thisa->start_transform_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&thisa->start_transform_.rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)thisa - 73) & 7) >= *(_BYTE *)((((unsigned __int64)&thisa->start_transform_.rotation.z + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&thisa->start_transform_, 24LL);
  }
  if ( ((unsigned __int8)v37 & 7) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v37->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v37 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&v37->rotation.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v37, 24LL);
  }
  v38 = thisa;
  v39 = *(_QWORD *)&v37->position.z;
  *(_QWORD *)&thisa->start_transform_.position.x = *(_QWORD *)&v37->position.x;
  *(_QWORD *)&v38->start_transform_.position.z = v39;
  *(_QWORD *)&v38->start_transform_.rotation.y = *(_QWORD *)&v37->rotation.y;
  if ( *(_BYTE *)(((unsigned __int64)&thisa->is_use_last_index_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)thisa + 89) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->is_use_last_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&thisa->is_use_last_index_);
  }
  thisa->is_use_last_index_ = 0;
  v7 = 0;
LABEL_74:
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 96));
  result = v7;
  if ( v47 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 488: range 000000001451F128-000000001451F6CD
__int64 __fastcall PlatformComp::changeRouteId(PlatformComp *const this, uint32_t route_id, bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  __int64 result; // rax
  uint32_t v12; // ecx
  uint32_t EntityId; // eax
  proto::PlatformInfo *v14; // rax
  uint32_t SceneTime; // eax
  std::shared_ptr<PlatformRoute> __r; // [rsp+10h] [rbp-D0h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-C0h] BYREF
  char v19[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 4 12 route_id:487 48 40 10 notify:513";
  *(_QWORD *)(v3 + 16) = PlatformComp::changeRouteId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 32) = route_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->moving_platform_type_ == MOVING_PLATFORM_USE_CONFIG )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->route_id_ == *(_DWORD *)(v3 + 32) )
    {
      result = 0LL;
    }
    else
    {
      PlatformComp::update(this);
      v12 = *(_DWORD *)(v3 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->route_id_);
      }
      this->route_id_ = v12;
      std::shared_ptr<PlatformRoute>::shared_ptr(&__r, 0LL);
      std::shared_ptr<PlatformRoute>::operator=(&this->route_ptr_, &__r);
      std::shared_ptr<PlatformRoute>::~shared_ptr(&__r);
      if ( PlatformComp::initRouteState(this) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/platform_comp.cpp",
          "changeRouteId",
          503);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          &v18,
          (const char (*)[21])"initRouteState fails");
        common::milog::MiLogStream::~MiLogStream(&v18);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->is_first_trigger_remains_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this - 66) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_first_trigger_remains_ >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_store1(&this->is_first_trigger_remains_);
        }
        this->is_first_trigger_remains_ = 1;
        if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->is_started_);
        if ( this->is_started_ )
          PlatformComp::startMove(this, OnChangeRoute);
        if ( is_notify )
        {
          proto::PlatformChangeRouteNotify::PlatformChangeRouteNotify((proto::PlatformChangeRouteNotify *const)(v3 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
          proto::PlatformChangeRouteNotify::set_entity_id((proto::PlatformChangeRouteNotify *const)(v3 + 48), EntityId);
          v14 = proto::PlatformChangeRouteNotify::mutable_platform((proto::PlatformChangeRouteNotify *const)(v3 + 48));
          PlatformComp::getPlatformInfo(this, v14);
          SceneTime = PlatformComp::getSceneTime(this);
          proto::PlatformChangeRouteNotify::set_scene_time(
            (proto::PlatformChangeRouteNotify *const)(v3 + 48),
            SceneTime);
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Entity::notifyViewingPlayers<proto::PlatformChangeRouteNotify>(
            (Entity *const)this->gadget_,
            (proto::PlatformChangeRouteNotify *)(v3 + 48),
            0);
          proto::PlatformChangeRouteNotify::~PlatformChangeRouteNotify((proto::PlatformChangeRouteNotify *const)(v3 + 48));
        }
        result = 0LL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/platform_comp.cpp",
      "changeRouteId",
      491);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v18,
           (const char (*)[51])"cannot change OffsetPlatform's route id, route_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" route_id_:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->route_id_);
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" gadget:");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v10, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 524: range 000000001451F6CE-0000000014520F68
__int64 __fastcall PlatformComp::simulatePlatformFromStartTime(
        const PlatformComp *const this,
        const uint32_t scene_time,
        PlatformSimulateResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rax
  unsigned __int64 Position; // rax
  unsigned __int64 Rotation; // rax
  uint32_t route_time; // ecx
  int32_t route_index; // ecx
  __int64 v11; // rdx
  uint32_t point_id; // ecx
  const unsigned int *v13; // rdx
  uint32_t v14; // ecx
  uint32_t v15; // ecx
  bool v16; // si
  std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  const unsigned int *v18; // rdx
  uint32_t v19; // ecx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v20; // r14
  unsigned int SceneTime; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v22; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v23; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v24; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v25; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v26; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v27; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v28; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v29; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v30; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v31; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v32; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v33; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v34; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v35; // r14
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rbx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rcx
  uint32_t v41; // ecx
  __int64 v42; // rdx
  PlatformRoute *v43; // r14
  int v44; // r15d
  const unsigned int *v45; // rdx
  uint32_t v46; // esi
  int32_t v47; // edx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v48; // r14
  unsigned int v49; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v50; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v51; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v52; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v53; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v54; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v55; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v56; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v57; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v58; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v59; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v60; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v61; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v62; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v63; // r14
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rbx
  common::milog::MiLogStream *v67; // rax
  unsigned int ret; // [rsp+24h] [rbp-12Ch]
  __int64 v70; // [rsp+28h] [rbp-128h]
  float z; // [rsp+30h] [rbp-120h]
  __int64 v72; // [rsp+34h] [rbp-11Ch]
  float v73; // [rsp+3Ch] [rbp-114h]
  std::string v; // [rsp+40h] [rbp-110h] BYREF
  std::string val; // [rsp+60h] [rbp-F0h] BYREF
  char v76[208]; // [rsp+80h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 20 last_update_time:542 48 4 14 scene_time:523 64 16 6 os:570 96 24 26 formal_start_transform:543";
  *(_QWORD *)(v3 + 16) = PlatformComp::simulatePlatformFromStartTime;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = scene_time;
  if ( std::operator==<PlatformRoute>(&this->route_ptr_, 0LL) )
  {
    v6 = 0xFFFFFFFFLL;
    goto LABEL_121;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Position = (unsigned __int64)Entity::getPosition((const Entity *const)this->gadget_);
  if ( *(char *)(((unsigned __int64)result >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&result->position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)result + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&result->position.z + 3) >> 3) + 0x7FFF8000) )
  {
    Position = __asan_report_store_n(result, 12LL);
  }
  if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000) && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
  {
    Position = __asan_report_load_n(Position, 12LL);
  }
  *(_QWORD *)&result->position.x = *(_QWORD *)Position;
  result->position.z = *(float *)(Position + 8);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Rotation = (unsigned __int64)Entity::getRotation((const Entity *const)this->gadget_);
  if ( (((unsigned __int8)result + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&result->rotation >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&result->rotation >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&result->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)result + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&result->rotation.z + 3) >> 3) + 0x7FFF8000) )
  {
    Rotation = __asan_report_store_n(&result->rotation, 12LL);
  }
  if ( (char)(Rotation & 7) >= *(_BYTE *)((Rotation >> 3) + 0x7FFF8000) && *(_BYTE *)((Rotation >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((Rotation + 11) & 7) >= *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) )
  {
    Rotation = __asan_report_load_n(Rotation, 12LL);
  }
  *(_QWORD *)&result->rotation.x = *(_QWORD *)Rotation;
  result->rotation.z = *(float *)(Rotation + 8);
  if ( *(_BYTE *)(((unsigned __int64)&this->route_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->route_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  route_time = this->route_time_;
  if ( *(_BYTE *)(((unsigned __int64)&result->route_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)result + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->route_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&result->route_time);
  }
  result->route_time = route_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  route_index = this->route_index_;
  if ( *(_BYTE *)(((unsigned __int64)&result->route_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&result->route_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&result->route_index);
  }
  result->route_index = route_index;
  if ( (((unsigned __int8)result + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&result->platform_transform >> 3)
                                                        + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&result->platform_transform >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&result->platform_transform.rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)result + 59) & 7) >= *(_BYTE *)((((unsigned __int64)&result->platform_transform.rotation.z + 3) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(&result->platform_transform, 24LL);
  }
  if ( *(char *)(((unsigned __int64)&this->platform_transform_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->platform_transform_.rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 97) & 7) >= *(_BYTE *)((((unsigned __int64)&this->platform_transform_.rotation.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->platform_transform_, 24LL);
  }
  v11 = *(_QWORD *)&this->platform_transform_.position.z;
  *(_QWORD *)&result->platform_transform.position.x = *(_QWORD *)&this->platform_transform_.position.x;
  *(_QWORD *)&result->platform_transform.position.z = v11;
  *(_QWORD *)&result->platform_transform.rotation.y = *(_QWORD *)&this->platform_transform_.rotation.y;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  point_id = this->point_id_;
  if ( *(_BYTE *)(((unsigned __int64)&result->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)result + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&result->point_id);
  }
  result->point_id = point_id;
  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_started_);
  if ( !this->is_started_ )
  {
    v6 = 0LL;
    goto LABEL_121;
  }
  v13 = std::min<unsigned int>(&this->last_update_time_, (const unsigned int *)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v3 + 32) = *v13;
  Transform::Transform((Transform *const)(v3 + 96));
  ret = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_scene_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->start_scene_time_ < *(_DWORD *)(v3 + 32) )
  {
    if ( *(char *)(((unsigned __int64)&this->platform_transform_ >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&this->platform_transform_.rotation.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 97) & 7) >= *(_BYTE *)((((unsigned __int64)&this->platform_transform_.rotation.z + 3) >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load_n(&this->platform_transform_, 24LL);
    }
    v42 = *(_QWORD *)&this->platform_transform_.position.z;
    *(_QWORD *)(v3 + 96) = *(_QWORD *)&this->platform_transform_.position.x;
    *(_QWORD *)(v3 + 104) = v42;
    *(_QWORD *)(v3 + 112) = *(_QWORD *)&this->platform_transform_.rotation.y;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->temp_start_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->temp_start_time_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->temp_start_time_ > *(_DWORD *)(v3 + 32) )
      v14 = 0;
    else
      v14 = *(_DWORD *)(v3 + 32) - this->temp_start_time_;
    if ( *(_BYTE *)(((unsigned __int64)&result->route_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)result + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->route_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&result->route_time);
    }
    result->route_time = v14;
    if ( *(_BYTE *)(((unsigned __int64)&this->start_scene_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->start_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->start_scene_time_ <= *(_DWORD *)(v3 + 48) )
      v15 = 0;
    else
      v15 = this->start_scene_time_ - *(_DWORD *)(v3 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&result->left_temp_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&result->left_temp_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&result->left_temp_time);
    }
    result->left_temp_time = v15;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_first_trigger_remains_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 66) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_first_trigger_remains_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_first_trigger_remains_);
    }
    v16 = !this->is_first_trigger_remains_;
    if ( *(_BYTE *)(((unsigned __int64)&result->is_ignore_reach_point >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)result + 89) & 7) >= *(_BYTE *)(((unsigned __int64)&result->is_ignore_reach_point >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store1(&result->is_ignore_reach_point);
    }
    result->is_ignore_reach_point = v16;
    v17 = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->route_ptr_);
    v18 = std::min<unsigned int>((const unsigned int *)(v3 + 48), &this->start_scene_time_);
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v19 = *v18 - *(_DWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ret = PlatformRoute::simulateTowardsPointForTempRoute(
            v17,
            this->route_index_,
            &this->platform_transform_,
            v19,
            result);
    if ( *(char *)(((unsigned __int64)&this->is_open_log_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_open_log_);
    if ( this->is_open_log_ )
    {
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64));
      v20 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64),
              "[ROUTE][scene_time:");
      SceneTime = PlatformComp::getSceneTime(this);
      v22 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v20, SceneTime);
      v23 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v22, "][type:");
      if ( *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v24 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v23, this->moving_platform_type_);
      v25 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v24, " route_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v26 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v25, this->route_id_);
      v27 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v26, "]");
      v28 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v27, "ret:");
      v29 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v28, ret);
      v30 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v29, ". in temp route, pos:");
      Vector3::toString[abi:cxx11](&v, &result->position);
      v31 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v30, &v);
      v32 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v31, ", cur route_index:");
      if ( *(_BYTE *)(((unsigned __int64)&result->route_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&result->route_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v33 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v32, result->route_index);
      v34 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v33, ", cur route_time:");
      if ( *(_BYTE *)(((unsigned __int64)&result->route_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)result + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->route_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v35 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v34, result->route_time);
      PlatformComp::getDesc[abi:cxx11](&val, this);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v35, &val);
      std::string::~string(&val);
      std::string::~string(&v);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/platform_comp.cpp",
        "simulatePlatformFromStartTime",
        552);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
        &val,
        (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>((common::milog::MiLogStream *const)&v, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64));
    }
    if ( ret )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/platform_comp.cpp",
        "simulatePlatformFromStartTime",
        555);
      v36 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              (common::milog::MiLogStream *const)&v,
              (const char (*)[51])"simulateTowardsPointForTempRoute fail, scene_time:");
      v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v3 + 48));
      v38 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v37, (const char (*)[11])" platform:");
      PlatformComp::getDesc[abi:cxx11](&val, this);
      v39 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v38, &val);
      v40 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v39, (const char (*)[9])" gadget:");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_80:
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v40, this->gadget_);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v);
      v6 = ret;
      goto LABEL_121;
    }
    if ( *(char *)(((unsigned __int64)result >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&result->position.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)result + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&result->position.z + 3) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load_n(result, 12LL);
    }
    v70 = *(_QWORD *)&result->position.x;
    z = result->position.z;
    if ( (((unsigned __int8)result + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&result->rotation >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&result->rotation >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&result->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)result + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&result->rotation.z + 3) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load_n(&result->rotation, 12LL);
    }
    v72 = *(_QWORD *)&result->rotation.x;
    v73 = result->rotation.z;
    *(_QWORD *)(v3 + 96) = v70;
    *(float *)(v3 + 104) = z;
    *(_QWORD *)(v3 + 108) = v72;
    *(float *)(v3 + 116) = v73;
    if ( *(_BYTE *)(((unsigned __int64)&this->route_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->route_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v41 = this->route_time_;
    if ( *(_BYTE *)(((unsigned __int64)&result->route_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)result + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->route_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&result->route_time);
    }
    result->route_time = v41;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->start_scene_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->start_scene_time_ <= *(_DWORD *)(v3 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&result->is_ignore_reach_point >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)result + 89) & 7) >= *(_BYTE *)(((unsigned __int64)&result->is_ignore_reach_point >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store1(&result->is_ignore_reach_point);
    }
    result->is_ignore_reach_point = 0;
    v43 = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->route_ptr_);
    v44 = *(_DWORD *)(v3 + 48);
    v45 = std::max<unsigned int>(&this->start_scene_time_, (const unsigned int *)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v46 = v44 - *v45;
    if ( *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v47 = this->route_index_;
    if ( *(_BYTE *)(((unsigned __int64)&this->route_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->route_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    ret = PlatformRoute::simulateRoute(v43, *(Transform *)(v3 + 96), this->route_time_, v47, v46, result);
    if ( *(char *)(((unsigned __int64)&this->is_open_log_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_open_log_);
    if ( this->is_open_log_ )
    {
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64));
      v48 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64),
              "[ROUTE][scene_time:");
      v49 = PlatformComp::getSceneTime(this);
      v50 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v48, v49);
      v51 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v50, "][type:");
      if ( *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v52 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v51, this->moving_platform_type_);
      v53 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v52, " route_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->route_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v54 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v53, this->route_id_);
      v55 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v54, "]");
      v56 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v55, "ret:");
      v57 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v56, ret);
      v58 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v57, ". in formal route, pos:");
      Vector3::toString[abi:cxx11](&v, &result->position);
      v59 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v58, &v);
      v60 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v59, ", cur route_index:");
      if ( *(_BYTE *)(((unsigned __int64)&result->route_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&result->route_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v61 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v60, result->route_index);
      v62 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v61, ", cur route_time:");
      if ( *(_BYTE *)(((unsigned __int64)&result->route_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)result + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->route_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v63 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v62, result->route_time);
      PlatformComp::getDesc[abi:cxx11](&val, this);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v63, &val);
      std::string::~string(&val);
      std::string::~string(&v);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/platform_comp.cpp",
        "simulatePlatformFromStartTime",
        570);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
        &val,
        (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>((common::milog::MiLogStream *const)&v, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v);
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64));
    }
    if ( ret )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/platform_comp.cpp",
        "simulatePlatformFromStartTime",
        573);
      v64 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)&v,
              (const char (*)[32])"simulateRoute fail, scene_time:");
      v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, (const unsigned int *)(v3 + 48));
      v66 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v65, (const char (*)[11])" platform:");
      PlatformComp::getDesc[abi:cxx11](&val, this);
      v67 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v66, &val);
      v40 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v67, (const char (*)[9])" gadget:");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_80;
    }
  }
  v6 = ret;
LABEL_121:
  if ( v76 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v6;
};

// Line 583: range 0000000014520F6A-0000000014521177
uint32_t __cdecl PlatformComp::getSceneTime(const PlatformComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rcx
  uint32_t SceneTimeMs; // r14d
  Scene *v6; // rax
  uint32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-90h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 scene_ptr:584";
  *(_QWORD *)(v1 + 16) = PlatformComp::getSceneTime;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/platform_comp.cpp",
      "getSceneTime",
      587);
    v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v8, (const char (*)[18])"scene_ptr is null");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v4, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v8);
    SceneTimeMs = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    SceneTimeMs = Scene::getSceneTimeMs(v6);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = SceneTimeMs;
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 595: range 00000000145213C8-0000000014522242
void __cdecl PlatformComp::checkNextReachTriggerPoint(PlatformComp *const this, const PlatformSimulateResult *result)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  uint32_t v9; // ecx
  uint32_t v10; // ecx
  common::milog::MiLogStream *v12; // rax
  int v13; // r14d
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t time_to_next_point; // r14d
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  uint32_t v17; // ecx
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  uint32_t wait_time; // r14d
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t v21; // ecx
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  PlatformRoute *v26; // rcx
  common::milog::MiLogStream *v27; // rcx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  const unsigned int *v31; // rdx
  SceneTimer *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rcx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rcx
  unsigned int __a; // [rsp+1Ch] [rbp-134h] BYREF
  common::milog::MiLogStream v49; // [rsp+20h] [rbp-130h] BYREF
  common::milog::MiLogStream v50; // [rsp+40h] [rbp-110h] BYREF
  char v51[240]; // [rsp+60h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 16 left_time_ms:619 48 4 12 interval:660 64 16 13 scene_ptr:613 96 16 14 gadget_wtr:654 1"
                        "28 16 19 route_point_ptr:626 160 16 18 next_point_ptr:627";
  *(_QWORD *)(v2 + 16) = PlatformComp::checkNextReachTriggerPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_started_);
  if ( this->is_started_ )
  {
    if ( !std::operator!=<SceneTimer>(&this->event_timer_ptr_, 0LL)
      || (v5 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->event_timer_ptr_),
          !common::tools::MiTimer::isActive(v5)) )
    {
      if ( std::operator==<PlatformRoute>(&this->route_ptr_, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v50,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/platform_comp.cpp",
          "checkNextReachTriggerPoint",
          606);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          &v50,
          (const char (*)[27])"[ROUTE] route_ptr_ is null");
        common::milog::MiLogStream::~MiLogStream(&v50);
        goto LABEL_75;
      }
      v7 = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->route_ptr_);
      if ( PlatformRoute::getHasReachTrigger(v7) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Entity::getScene((const Entity *const)(v2 + 64));
        if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/platform_comp.cpp",
            "checkNextReachTriggerPoint",
            616);
          v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                 &v50,
                 (const char (*)[26])"[ROUTE] scene_ptr is null");
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v8, this->gadget_);
          common::milog::MiLogStream::~MiLogStream(&v50);
        }
        else
        {
          *(_DWORD *)(v2 + 32) = 0;
          if ( *(_BYTE *)(((unsigned __int64)&result->left_temp_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&result->left_temp_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( result->left_temp_time )
          {
            *(_DWORD *)(v2 + 32) = result->left_temp_time;
          }
          else
          {
            v9 = (unsigned int)std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->route_ptr_);
            if ( *(_BYTE *)(((unsigned __int64)&result->route_index >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&result->route_index >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            PlatformRoute::getPoint((const PlatformRoute *const)(v2 + 128), v9);
            v10 = (unsigned int)std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->route_ptr_);
            if ( *(_BYTE *)(((unsigned __int64)&result->route_index >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&result->route_index >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            PlatformRoute::getNextPoint((const PlatformRoute *const)(v2 + 160), v10);
            if ( std::operator==<RoutePoint>((const std::shared_ptr<RoutePoint> *)(v2 + 128), 0LL)
              || std::operator==<RoutePoint>((const std::shared_ptr<RoutePoint> *)(v2 + 160), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v50,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/gadget/platform_comp.cpp",
                "checkNextReachTriggerPoint",
                630);
              v12 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                      &v50,
                      (const char (*)[60])"[ROUTE] getPoint or getNextPoint fails, result.route_index:");
              common::milog::MiLogStream::operator<<<int,(int *)0>(v12, &result->route_index);
              common::milog::MiLogStream::~MiLogStream(&v50);
              v13 = 0;
            }
            else
            {
              v14 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              if ( *(_BYTE *)(((unsigned __int64)&v14->time_to_next_point >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v14->time_to_next_point >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              time_to_next_point = v14->time_to_next_point;
              v16 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
              if ( *(_BYTE *)(((unsigned __int64)&v16->wait_time >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)v16 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->wait_time >> 3)
                                                                   + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v17 = time_to_next_point + v16->wait_time;
              if ( *(_BYTE *)(((unsigned __int64)&result->route_time >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)result + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->route_time >> 3)
                                                                      + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( v17 < result->route_time )
              {
                common::milog::MiLogStream::create(
                  &v50,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/gadget/platform_comp.cpp",
                  "checkNextReachTriggerPoint",
                  639);
                v22 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        &v50,
                        (const char (*)[36])"[ROUTE] invalid time_to_next_point:");
                v23 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v22,
                        &v23->time_to_next_point);
                v25 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v24,
                        (const char (*)[14])", route_time:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &result->route_time);
                common::milog::MiLogStream::~MiLogStream(&v50);
              }
              else
              {
                v18 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&v18->wait_time >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->wait_time >> 3)
                                                                     + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                wait_time = v18->wait_time;
                v20 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&v20->time_to_next_point >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v20->time_to_next_point >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                v21 = wait_time + v20->time_to_next_point;
                if ( *(_BYTE *)(((unsigned __int64)&result->route_time >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)result + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->route_time >> 3)
                                                                        + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v2 + 32) = v21 - result->route_time;
              }
              v26 = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->route_ptr_);
              if ( *(_BYTE *)(((unsigned __int64)&result->route_index >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&result->route_index >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              if ( PlatformRoute::isInOneWayEnd(v26, result->route_index) )
              {
                common::milog::MiLogStream::create(
                  &v49,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/gadget/platform_comp.cpp",
                  "checkNextReachTriggerPoint",
                  643);
                v27 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                        &v49,
                        (const char (*)[32])"reached oneway end, stop timer:");
                if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v28 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v27, this->gadget_);
                v29 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v28, (const char (*)[2])" ");
                PlatformComp::getDesc[abi:cxx11]((std::string *)&v50, this);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, (const std::string *)&v50);
                std::string::~string(&v50);
                common::milog::MiLogStream::~MiLogStream(&v49);
                v13 = 0;
              }
              else
              {
                if ( !*(_DWORD *)(v2 + 32) )
                  *(_DWORD *)(v2 + 32) = 1;
                v13 = 1;
              }
            }
            std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)(v2 + 160));
            std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)(v2 + 128));
            if ( v13 != 1 )
              goto LABEL_74;
          }
          if ( std::operator==<SceneTimer>(&this->event_timer_ptr_, 0LL) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            toThisPtr<Gadget>((Gadget *)(v2 + 128));
            std::weak_ptr<Gadget>::weak_ptr<Gadget,void>(
              (std::weak_ptr<Gadget> *const)(v2 + 96),
              (const std::shared_ptr<Gadget> *)(v2 + 128));
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 128));
            std::weak_ptr<Gadget>::weak_ptr(
              (std::weak_ptr<Gadget> *const)(v2 + 128),
              (const std::weak_ptr<Gadget> *)(v2 + 96));
            common::tools::perf::make_shared<SceneTimer,std::shared_ptr<Scene> &,PlatformComp::checkNextReachTriggerPoint(PlatformSimulateResult const&)::{lambda(unsigned long)#1}>(
              (std::shared_ptr<Scene> *)(v2 + 160),
              (PlatformComp::checkNextReachTriggerPoint::<lambda(uint64_t)> *)(v2 + 64),
              (std::shared_ptr<Scene> *)(v2 + 128),
              (PlatformComp::checkNextReachTriggerPoint::<lambda(uint64_t)> *)(v2 + 64));
            std::shared_ptr<SceneTimer>::operator=(&this->event_timer_ptr_, (std::shared_ptr<SceneTimer> *)(v2 + 160));
            std::shared_ptr<SceneTimer>::~shared_ptr((std::shared_ptr<SceneTimer> *const)(v2 + 160));
            PlatformComp::checkNextReachTriggerPoint(PlatformSimulateResult const&)::{lambda(unsigned long)#1}::~PlatformSimulateResult((PlatformComp::checkNextReachTriggerPoint::<lambda(uint64_t)> *const)(v2 + 128));
            std::weak_ptr<Gadget>::~weak_ptr((std::weak_ptr<Gadget> *const)(v2 + 96));
          }
          if ( *(_DWORD *)(v2 + 32) )
          {
            v30 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->event_timer_ptr_);
            common::tools::MiTimer::cancel(v30);
            __a = 10000;
            v31 = std::min<unsigned int>(&__a, (const unsigned int *)(v2 + 32));
            if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v2 + 48) = *v31;
            v32 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->event_timer_ptr_);
            if ( SceneTimer::startMS(
                   v32,
                   *(_DWORD *)(v2 + 48),
                   0,
                   "./src/gadget/platform_comp.cpp",
                   "checkNextReachTriggerPoint",
                   661) )
            {
              common::milog::MiLogStream::create(
                &v50,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/gadget/platform_comp.cpp",
                "checkNextReachTriggerPoint",
                664);
              v33 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      &v50,
                      (const char (*)[37])"[ROUTE] startMS fails, left_time_ms:");
              v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v33,
                      (const unsigned int *)(v2 + 32));
              v35 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v34,
                      (const char (*)[11])" interval:");
              v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v35,
                      (const unsigned int *)(v2 + 48));
              v37 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v36, (const char (*)[9])" gadget:");
              if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v37, this->gadget_);
              common::milog::MiLogStream::~MiLogStream(&v50);
            }
            common::milog::MiLogStream::create(
              &v50,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/gadget/platform_comp.cpp",
              "checkNextReachTriggerPoint",
              666);
            v38 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v50,
                    (const char (*)[31])"[ROUTE] start timer, interval:");
            v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v38,
                    (const unsigned int *)(v2 + 48));
            v40 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v39,
                    (const char (*)[12])", route_id:");
            v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &this->route_id_);
            v42 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    v41,
                    (const char (*)[20])", resu.route_index:");
            v43 = common::milog::MiLogStream::operator<<<int,(int *)0>(v42, &result->route_index);
            v44 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v43,
                    (const char (*)[14])", route time:");
            v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &result->route_time);
            v46 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v45,
                    (const char (*)[18])", left_temp_time:");
            v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &result->left_temp_time);
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v47, this->gadget_);
            common::milog::MiLogStream::~MiLogStream(&v50);
          }
        }
LABEL_74:
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
      }
    }
  }
LABEL_75:
  if ( v51 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 654: range 00000000145F3F90-00000000145F3FB5
void __cdecl PlatformComp::checkNextReachTriggerPoint(PlatformSimulateResult const&)::{lambda(unsigned long)#1}::PlatformSimulateResult(
        PlatformComp::checkNextReachTriggerPoint::<lambda(uint64_t)> *const this,
        PlatformComp::checkNextReachTriggerPoint::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 654: range 00000000145F60AA-00000000145F60CF
void __cdecl PlatformComp::checkNextReachTriggerPoint(PlatformSimulateResult const&)::{lambda(unsigned long)#1}::PlatformSimulateResult(
        PlatformComp::checkNextReachTriggerPoint::<lambda(uint64_t)> *const this,
        const PlatformComp::checkNextReachTriggerPoint::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 654: range 0000000014521178-00000000145213AB
void __cdecl PlatformComp::checkNextReachTriggerPoint(PlatformSimulateResult const&)::{lambda(unsigned long)#1}::operator()(
        const PlatformComp::checkNextReachTriggerPoint::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlatformComp *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-B0h] BYREF
  char v7[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 gadget_ptr:654 64 16 11 obj_ptr:654";
  *(_QWORD *)(v2 + 16) = PlatformComp::checkNextReachTriggerPoint(PlatformSimulateResult const&)::{lambda(unsigned long)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v2 + 32));
  if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/platform_comp.cpp",
      "operator()",
      654);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v6,
      (const char (*)[36])"gadget is null when timer call back");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<PlatformComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 64));
    if ( std::operator!=<PlatformComp>((const std::shared_ptr<PlatformComp> *)(v2 + 64), 0LL) )
    {
      v5 = std::__shared_ptr_access<PlatformComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      PlatformComp::onReachTriggerTimer(v5, now_ms);
    }
    std::shared_ptr<PlatformComp>::~shared_ptr((std::shared_ptr<PlatformComp> *const)(v2 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
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
};

// Line 654: range 00000000145213AC-00000000145213C6
void __cdecl PlatformComp::checkNextReachTriggerPoint(PlatformSimulateResult const&)::{lambda(unsigned long)#1}::~PlatformSimulateResult(
        PlatformComp::checkNextReachTriggerPoint::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<Gadget>::~weak_ptr(&this->__gadget_wtr);
};

// Line 673: range 0000000014522244-00000000145223D6
void __cdecl PlatformComp::onReachTriggerTimer(PlatformComp *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  char v6[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 10 result:678";
  *(_QWORD *)(v2 + 16) = PlatformComp::onReachTriggerTimer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::operator!=<SceneTimer>(&this->event_timer_ptr_, 0LL) )
  {
    v5 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->event_timer_ptr_);
    common::tools::MiTimer::cancel(v5);
  }
  PlatformSimulateResult::PlatformSimulateResult((PlatformSimulateResult *const)(v2 + 32));
  PlatformComp::update(this, (PlatformSimulateResult *)(v2 + 32));
  PlatformComp::checkReachTriggerAndCheckStop(this, (const PlatformSimulateResult *)(v2 + 32), 0);
  PlatformSimulateResult::~PlatformSimulateResult((PlatformSimulateResult *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 684: range 00000000145223D8-0000000014522A99
int32_t __cdecl PlatformComp::checkReachTrigger(
        PlatformComp *const this,
        const PlatformSimulateResult *result,
        bool is_only_trigger_arrival_event)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v6; // si
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v9; // rdx
  uint32_t v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  RoutePoint *v16; // r15
  PlatformRoute *v17; // r14
  Group *v18; // rsi
  RoutePoint *v19; // r15
  PlatformRoute *v20; // r14
  Group *v21; // rsi
  int32_t v22; // eax
  uint32_t route_index; // [rsp+8h] [rbp-148h]
  uint32_t route_indexa; // [rsp+8h] [rbp-148h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-118h]
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-110h] BYREF
  common::milog::MiLogStream v31; // [rsp+60h] [rbp-F0h] BYREF
  char v32[208]; // [rsp+80h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 15 route_index:695 64 16 13 route_ptr:686 96 16 13 group_ptr:692 128 16 19 route_point_ptr:697";
  *(_QWORD *)(v3 + 16) = PlatformComp::checkReachTrigger;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  if ( !std::vector<unsigned int>::empty(&result->triggerable_route_index_vec) )
    goto LABEL_9;
  if ( *(char *)(((unsigned __int64)&result->is_stop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&result->is_stop);
  if ( !result->is_stop )
    v6 = 1;
  else
LABEL_9:
    v6 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_first_trigger_remains_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 66) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_first_trigger_remains_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_first_trigger_remains_);
  }
  this->is_first_trigger_remains_ = (this->is_first_trigger_remains_ & v6) != 0;
  std::shared_ptr<PlatformRoute>::shared_ptr((std::shared_ptr<PlatformRoute> *const)(v3 + 64), &this->route_ptr_);
  if ( std::operator==<PlatformRoute>((const std::shared_ptr<PlatformRoute> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/platform_comp.cpp",
      "checkReachTrigger",
      689);
    v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v31,
           (const char (*)[23])"route is null, gadget:");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v8 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getGroup((const Entity *const)(v3 + 96));
    if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v3 + 96), 0LL) )
    {
      __for_range = &result->triggerable_route_index_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(&result->triggerable_route_index_vec)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&result->triggerable_route_index_vec)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v9 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 48) = *v9;
        v10 = (unsigned int)std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        PlatformRoute::getPoint((const PlatformRoute *const)(v3 + 128), v10);
        if ( std::operator==<RoutePoint>((const std::shared_ptr<RoutePoint> *)(v3 + 128), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/platform_comp.cpp",
            "checkReachTrigger",
            700);
          v11 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  &v30,
                  (const char (*)[37])"[ROUTE] getPoint fails, route_index:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v3 + 48));
          v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" gadget:");
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v14 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v13, this->gadget_);
          v15 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v14, (const char (*)[2])" ");
          PlatformComp::getDesc[abi:cxx11]((std::string *)&v31, this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)&v31);
          std::string::~string(&v31);
          common::milog::MiLogStream::~MiLogStream(&v30);
        }
        else
        {
          if ( !is_only_trigger_arrival_event )
          {
            route_index = *(_DWORD *)(v3 + 48);
            v16 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            v17 = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v18 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            PlatformComp::triggerReachEvent(this, v18, v17, v16, route_index, EVENT_PLATFORM_REACH_POINT);
          }
          route_indexa = *(_DWORD *)(v3 + 48);
          v19 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          v20 = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          v21 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          PlatformComp::triggerReachEvent(this, v21, v20, v19, route_indexa, EVENT_PLATFORM_ARRIVAL);
        }
        std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)(v3 + 128));
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
    v8 = 0;
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 96));
  }
  std::shared_ptr<PlatformRoute>::~shared_ptr((std::shared_ptr<PlatformRoute> *const)(v3 + 64));
  v22 = v8;
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v22;
};

// Line 715: range 0000000014522A9A-0000000014522BB2
void __cdecl PlatformComp::checkReachTriggerAndCheckStop(
        PlatformComp *const this,
        const PlatformSimulateResult *result,
        bool is_only_trigger_arrival_event)
{
  char v3; // r12
  char v4; // bl
  std::shared_ptr<Scene> __a; // [rsp+20h] [rbp-20h] BYREF

  if ( !PlatformComp::checkReachTrigger(this, result, is_only_trigger_arrival_event) )
  {
    v3 = 0;
    if ( *(char *)(((unsigned __int64)&result->is_stop >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&result->is_stop);
    if ( !result->is_stop )
      goto LABEL_9;
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getScene((const Entity *const)&__a);
    v3 = 1;
    if ( std::operator!=<Scene>(0LL, &__a) )
      v4 = 1;
    else
LABEL_9:
      v4 = 0;
    if ( v3 )
      std::shared_ptr<Scene>::~shared_ptr(&__a);
    if ( v4 )
      PlatformComp::stopMove(this, 1);
  }
};

// Line 729: range 0000000014522BB4-000000001452378B
void __fastcall PlatformComp::triggerReachEvent(
        PlatformComp *const this,
        Group *group,
        PlatformRoute *route,
        unsigned __int64 route_point,
        uint32_t route_index,
        unsigned int event_type)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v21; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v22; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v23; // r14
  Scene *v24; // rax
  unsigned __int64 SceneTimeMs; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v26; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v27; // r14
  unsigned int EntityId; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v29; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v30; // r14
  unsigned int ConfigId; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v32; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v33; // r14
  unsigned int v34; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v35; // r14
  unsigned int PointArrayId; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v37; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v38; // r14
  unsigned __int64 v39; // rax
  unsigned int v40; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v41; // r14
  unsigned int RouteId; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v43; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v44; // rax
  Player *v45; // r14
  uint32_t v46; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rdx
  uint32_t *p_source_entity_id; // rax
  unsigned int v49; // eax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  uint32_t v51; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rdx
  int32_t *p_param1; // rax
  uint32_t v54; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  unsigned __int64 v56; // rax
  int32_t v57; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rdx
  int32_t *p_param3; // rax
  uint32_t v60; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // rax
  int32_t v62; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v63; // rdx
  int32_t *v64; // rax
  unsigned int v69; // [rsp+3Ch] [rbp-134h] BYREF
  common::milog::MiLogStream v70; // [rsp+40h] [rbp-130h] BYREF
  std::string val; // [rsp+60h] [rbp-110h] BYREF
  char v72[240]; // [rsp+80h] [rbp-F0h] BYREF

  v6 = (unsigned __int64)v72;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 48 4 15 route_index:728 64 16 13 event_ptr:730 96 16 14 player_ptr:739 128 16 14 log_stream:74"
                        "2 160 16 13 scene_ptr:743";
  *(_QWORD *)(v6 + 16) = PlatformComp::triggerReachEvent;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -219021312;
  v8[536862723] = -219021312;
  v8[536862724] = -219021312;
  v8[536862725] = -202178560;
  *(_DWORD *)(v6 + 48) = route_index;
  EventUtil::createEvent((data::EventType)(v6 + 64));
  if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v6 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v70,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/platform_comp.cpp",
      "triggerReachEvent",
      733);
    v9 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v70,
           (const char (*)[59])"createEvent EVENT_PLATFORM_REACH_POINT fails, route_index:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v6 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" gadget:");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v11, this->gadget_);
    v13 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v12, (const char (*)[2])" ");
    PlatformComp::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v70);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v70,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/platform_comp.cpp",
      "triggerReachEvent",
      736);
    v14 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v70,
            (const char (*)[40])"trigger reach point event, route_index:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v6 + 48));
    v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])" event_type:");
    v69 = event_type;
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &v69);
    v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" gadget:");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v19 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v18, this->gadget_);
    v20 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v19, (const char (*)[2])" ");
    PlatformComp::getDesc[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v70);
    Group::getOwnerPlayer((const Group *const)(v6 + 96));
    if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v6 + 96)) )
    {
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 128));
      Group::getScene((const Group *const)(v6 + 160));
      if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v6 + 160)) )
      {
        v21 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 128),
                "event_type:");
        v22 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v21, event_type);
        v23 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v22, " scene_time_ms:");
        v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
        SceneTimeMs = Scene::getSceneTimeMs(v24);
        v26 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v23, SceneTimeMs);
        v27 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v26, " source_entity_id:");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
        v29 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v27, EntityId);
        v30 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v29, " source_name:");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ConfigId = Entity::getConfigId((const Entity *const)this->gadget_);
        v32 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v30, ConfigId);
        v33 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v32, " param1:");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v34 = Entity::getConfigId((const Entity *const)this->gadget_);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v33, v34);
        if ( *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( this->moving_platform_type_ == MOVING_PLATFORM_ROUTE )
        {
          v35 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                  (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 128),
                  " param2:");
          PointArrayId = PlatformRoute::getPointArrayId(route);
          v37 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v35, PointArrayId);
          v38 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v37, " param3:");
          if ( *(_BYTE *)((route_point >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v39 = *(_QWORD *)route_point + 32LL;
          if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
            v39 = __asan_report_load8();
          v40 = (*(__int64 (__fastcall **)(unsigned __int64))v39)(route_point);
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v38, v40);
        }
        else
        {
          v41 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                  (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 128),
                  " param2:");
          RouteId = PlatformRoute::getRouteId(route);
          v43 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v41, RouteId);
          v44 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v43, " param3:");
          common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v44, *(_DWORD *)(v6 + 48));
        }
        v45 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
          &val,
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 128));
        Player::notifyServerLog(v45, SERVER_LOG_LEVEL, LOG_LEVEL_DEBUG_0, &val);
        std::string::~string(&val);
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v6 + 160));
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 128));
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v46 = Entity::getEntityId((const Entity *const)this->gadget_);
    v47 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
    p_source_entity_id = &v47->source_entity_id;
    if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_store4(p_source_entity_id);
    }
    v47->source_entity_id = v46;
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v49 = Entity::getConfigId((const Entity *const)this->gadget_);
    std::to_string(&val, v49);
    v50 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
    std::string::operator=(&v50->source_name, &val);
    std::string::~string(&val);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v51 = Entity::getConfigId((const Entity *const)this->gadget_);
    v52 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
    p_param1 = &v52->param1;
    if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_param1);
    }
    v52->param1 = v51;
    if ( *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->moving_platform_type_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->moving_platform_type_ == MOVING_PLATFORM_ROUTE )
    {
      v54 = PlatformRoute::getPointArrayId(route);
      v55 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v55->param2 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v55->param2 >> 3) + 0x7FFF8000) <= 3 )
      {
        v55 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v55->param2);
      }
      v55->param2 = v54;
      if ( *(_BYTE *)((route_point >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v56 = *(_QWORD *)route_point + 32LL;
      if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
        v56 = __asan_report_load8();
      v57 = (*(__int64 (__fastcall **)(unsigned __int64))v56)(route_point);
      v58 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      p_param3 = &v58->param3;
      if ( *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_param3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_param3);
      }
      v58->param3 = v57;
    }
    else
    {
      v60 = PlatformRoute::getRouteId(route);
      v61 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v61->param2 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v61->param2 >> 3) + 0x7FFF8000) <= 3 )
      {
        v61 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v61->param2);
      }
      v61->param2 = v60;
      v62 = *(_DWORD *)(v6 + 48);
      v63 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      v64 = &v63->param3;
      if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v64 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v64);
      }
      v63->param3 = v62;
    }
    Group::handleEvent(group, (EventPtr *)(v6 + 64));
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v6 + 96));
  }
  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v6 + 64));
  if ( v72 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 783: range 000000001452378C-0000000014523F13
int32_t __cdecl PlatformComp::setupRouteAndStartMove(PlatformComp *const this, PlatformRouteParam *param)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t started; // r14d
  Entity *gadget; // rdi
  PlatformRouteParam *v8; // r14
  __int64 v9; // rdx
  PlatformRoute *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  uint32_t point_array_id; // ecx
  std::shared_ptr<PlatformRoute> *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rcx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  int32_t result; // eax
  Transform v26; // [rsp+0h] [rbp-D0h] BYREF
  PlatformRouteParam *parama; // [rsp+20h] [rbp-B0h]
  PlatformComp *thisa; // [rsp+28h] [rbp-A8h]
  int val; // [rsp+34h] [rbp-9Ch] BYREF
  int is_turn_mode; // [rsp+38h] [rbp-98h] BYREF
  int record_mode; // [rsp+3Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v32; // [rsp+40h] [rbp-90h] BYREF
  char v33[112]; // [rsp+60h] [rbp-70h] BYREF

  thisa = this;
  parama = param;
  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 route_ptr:792";
  *(_QWORD *)(v2 + 16) = PlatformComp::setupRouteAndStartMove;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(char *)(((unsigned __int64)&thisa->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&thisa->is_started_);
  if ( thisa->is_started_ && PlatformComp::update(thisa) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/platform_comp.cpp",
      "setupRouteAndStartMove",
      786);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v32, (const char (*)[12])"update fail");
    common::milog::MiLogStream::~MiLogStream(&v32);
    started = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    gadget = (Entity *)thisa->gadget_;
    if ( *(char *)(((unsigned __int64)&parama->current_transform >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&parama->current_transform.rotation.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)parama + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&parama->current_transform.rotation.z + 3) >> 3)
                                                          + 0x7FFF8000) )
    {
      gadget = (Entity *)&parama->current_transform;
      __asan_report_store_n(&parama->current_transform, 24LL);
    }
    v8 = parama;
    Entity::getTransform(&v26, gadget);
    v9 = *(_QWORD *)&v26.position.z;
    *(_QWORD *)&v8->current_transform.position.x = *(_QWORD *)&v26.position.x;
    *(_QWORD *)&v8->current_transform.position.z = v9;
    *(_QWORD *)&v8->current_transform.rotation.y = *(_QWORD *)&v26.rotation.y;
    common::tools::perf::make_shared<PlatformRoute>();
    v10 = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( PlatformRoute::initByPointArray(v10, parama) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/platform_comp.cpp",
        "setupRouteAndStartMove",
        795);
      v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v32,
              (const char (*)[31])"initByPointArray fail, gadget:");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v11, thisa->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v32);
      started = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)parama >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)parama >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      point_array_id = parama->point_array_id;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->point_array_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->point_array_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&thisa->point_array_id_);
      }
      thisa->point_array_id_ = point_array_id;
      v13 = std::move<std::shared_ptr<PlatformRoute> &>((std::shared_ptr<PlatformRoute> *)(v2 + 32));
      std::shared_ptr<PlatformRoute>::operator=(&thisa->route_ptr_, v13);
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/platform_comp.cpp",
        "setupRouteAndStartMove",
        801);
      v14 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v32, (const char (*)[8])"gadget:");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v15 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v14, thisa->gadget_);
      v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v15, (const char (*)[17])" point_array_id:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &thisa->point_array_id_);
      v18 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v17,
              (const char (*)[20])" current_transform:");
      v19 = operator<<(v18, &parama->current_transform);
      v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])" route_type:");
      if ( *(_BYTE *)(((unsigned __int64)&parama->route_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&parama->route_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      val = parama->route_type;
      v21 = common::milog::MiLogStream::operator<<<int,(int *)0>(v20, &val);
      v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v21, (const char (*)[15])" is_turn_mode:");
      if ( *(_BYTE *)(((unsigned __int64)&parama->is_turn_mode >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)parama + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&parama->is_turn_mode >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&parama->is_turn_mode);
      }
      is_turn_mode = parama->is_turn_mode;
      v23 = common::milog::MiLogStream::operator<<<int,(int *)0>(v22, &is_turn_mode);
      v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v23, (const char (*)[14])" record_mode:");
      if ( *(_BYTE *)(((unsigned __int64)&parama->record_mode >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&parama->record_mode >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      record_mode = parama->record_mode;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v24, &record_mode);
      common::milog::MiLogStream::~MiLogStream(&v32);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->route_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->route_index_ >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_store4(&thisa->route_index_);
      }
      thisa->route_index_ = 0;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->route_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->route_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&thisa->route_time_);
      }
      thisa->route_time_ = 0;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->is_first_trigger_remains_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)thisa - 66) & 7) >= *(_BYTE *)(((unsigned __int64)&thisa->is_first_trigger_remains_ >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_store1(&thisa->is_first_trigger_remains_);
      }
      thisa->is_first_trigger_remains_ = 1;
      started = PlatformComp::startMove(thisa, OnSetupPointArrayRoute);
    }
    std::shared_ptr<PlatformRoute>::~shared_ptr((std::shared_ptr<PlatformRoute> *const)(v2 + 32));
  }
  result = started;
  if ( v33 == (char *)v2 )
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

// Line 812: range 0000000014523F14-00000000145242B2
int32_t __cdecl PlatformComp::rotateBySpeedAndAngle(PlatformComp *const this, float rot_speed, float angle)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const Vector3 *Rotation; // rdx
  const Vector3 *v7; // rdx
  __m128i y_low; // xmm0
  int v9; // r14d
  const Vector3 *v10; // rdx
  float z; // xmm0_4
  int32_t started; // r14d
  int32_t result; // eax
  float x; // [rsp+Ch] [rbp-144h]
  char v16[304]; // [rsp+20h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 76 16 config_point:816 144 80 9 param:813";
  *(_QWORD *)(v3 + 16) = PlatformComp::rotateBySpeedAndAngle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862723] = -219020288;
  v5[536862724] = 62194;
  v5[536862727] = -202116109;
  PlatformRouteParam::PlatformRouteParam((PlatformRouteParam *const)(v3 + 144));
  *(_BYTE *)(v3 + 204) = 1;
  memset((void *)(v3 + 32), 0, 0x48uLL);
  *(_DWORD *)(v3 + 104) = 0;
  *(_DWORD *)(v3 + 100) = 0x40000000;
  *(_DWORD *)(v3 + 32) = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Rotation = Entity::getRotation((const Entity *const)this->gadget_);
  if ( *(_BYTE *)(((unsigned __int64)Rotation >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)Rotation & 7) + 3) >= *(_BYTE *)(((unsigned __int64)Rotation >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  x = Rotation->x;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = Entity::getRotation((const Entity *const)this->gadget_);
  if ( *(_BYTE *)(((unsigned __int64)&v7->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  y_low = (__m128i)LODWORD(v7->y);
  *(float *)y_low.m128i_i32 = std::fmod(*(float *)y_low.m128i_i32 + angle, 360.0);
  v9 = _mm_cvtsi128_si32(y_low);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v10 = Entity::getRotation((const Entity *const)this->gadget_);
  if ( *(_BYTE *)(((unsigned __int64)&v10->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  z = v10->z;
  *(float *)(v3 + 52) = x;
  *(_DWORD *)(v3 + 56) = v9;
  *(float *)(v3 + 60) = z;
  *(_BYTE *)(v3 + 64) = 0;
  *(float *)(v3 + 96) = rot_speed;
  std::vector<data::ConfigPoint>::push_back(
    (std::vector<data::ConfigPoint> *const)(v3 + 152),
    (const std::vector<data::ConfigPoint>::value_type *)(v3 + 32));
  started = PlatformComp::setupRouteAndStartMove(this, (PlatformRouteParam *)(v3 + 144));
  PlatformRouteParam::~PlatformRouteParam((PlatformRouteParam *const)(v3 + 144));
  result = started;
  if ( v16 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 827: range 00000000145242B4-00000000145243A1
bool __cdecl PlatformComp::isMoving(PlatformComp *const this)
{
  PlatformRoute *v2; // rcx

  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_started_);
  if ( !this->is_started_ )
    return 0;
  if ( std::operator==<PlatformRoute>(0LL, &this->route_ptr_) )
    return 0;
  PlatformComp::update(this);
  v2 = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->route_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return !PlatformRoute::isInOneWayEnd(v2, this->route_index_);
};

// Line 841: range 00000000145243A2-00000000145249BE
int32_t __cdecl PlatformComp::setRouteIndexToNext(PlatformComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rcx
  int32_t v5; // r14d
  uint32_t v6; // ecx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int32_t route_index; // edi
  int32_t result; // eax
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 scene_ptr:842 64 16 18 next_point_ptr:859";
  *(_QWORD *)(v1 + 16) = PlatformComp::setRouteIndexToNext;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/platform_comp.cpp",
      "setRouteIndexToNext",
      845);
    v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v14, (const char (*)[18])"scene_ptr is null");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_19:
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v4, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v5 = -1;
    goto LABEL_32;
  }
  if ( std::operator==<PlatformRoute>(&this->route_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/platform_comp.cpp",
      "setRouteIndexToNext",
      850);
    v4 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v14, (const char (*)[14])"route is null");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_19;
  }
  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_started_);
  if ( this->is_started_ )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/platform_comp.cpp",
      "setRouteIndexToNext",
      856);
    v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v14,
           (const char (*)[29])"platform has already started");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_19;
  }
  v6 = (unsigned int)std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->route_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  PlatformRoute::getNextPoint((const PlatformRoute *const)(v1 + 64), v6);
  if ( std::operator==<RoutePoint>((const std::shared_ptr<RoutePoint> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/platform_comp.cpp",
      "setRouteIndexToNext",
      862);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v14,
           (const char (*)[37])"next point is nullptr, route_index: ");
    v8 = common::milog::MiLogStream::operator<<<int,(int *)0>(v7, &this->route_index_);
    v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])", gadget: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v9, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v5 = -1;
  }
  else
  {
    v10 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v10->route_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10->route_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    route_index = v10->route_index;
    if ( *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_index_ >> 3) + 0x7FFF8000) )
    {
      route_index = (_DWORD)this + 132;
      __asan_report_store4(&this->route_index_);
    }
    this->route_index_ = route_index;
    v5 = 0;
  }
  std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)(v1 + 64));
LABEL_32:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = v5;
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 871: range 00000000145249C0-00000000145249E9
void __cdecl PlatformComp::setPlatformRouteByGm(PlatformComp *const this, PlatformRoutePtr *p_route_ptr)
{
  std::shared_ptr<PlatformRoute>::operator=(&this->route_ptr_, p_route_ptr);
};
