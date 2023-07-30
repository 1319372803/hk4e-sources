// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/platform_route.cpp

// Line 17: range 000000001317FD04-00000000131804D3
void __cdecl RoutePoint::fromOtherPoint(RoutePoint *const this, std::shared_ptr<RoutePoint> *p_point_ptr)
{
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *n; // rax
  __int64 v3; // rsi
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  char v5; // dl
  float target_velocity; // xmm0_4
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  uint32_t *p_wait_time; // rax
  uint32_t wait_time; // ecx
  char v10; // dl
  bool v11; // dl
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  __int64 v14; // rsi
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  char v16; // dl
  float rot_angle_wait_speed; // xmm0_4
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  float *p_rot_angle_move_speed; // rax
  float rot_angle_move_speed; // xmm0_4
  __int64 v21; // rsi
  bool v22; // dl
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  bool *p_rot_angle_same_stop; // rax
  bool rot_angle_same_stop; // cl
  char v26; // dl
  __int64 v27; // rdx
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rdx
  int *p_rot_round_reach_rounds; // rax
  int rot_round_reach_rounds; // ecx
  char v31; // dl
  bool v32; // dl
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  int rot_round_wait_rounds; // ecx
  char v35; // al
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rdx
  bool *p_has_reach_event; // rax
  bool has_reach_event; // cl
  char v39; // dl
  __int64 v40; // rdx
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  bool is_reach_stop; // cl
  char v43; // al

  if ( !std::operator==<RoutePoint>(p_point_ptr, 0LL) )
  {
    n = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_point_ptr);
    if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->position.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->position.z + 3) >> 3) + 0x7FFF8000) )
    {
      n = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&this->position, 12LL);
    }
    v3 = ((_DWORD)n + 23) & 7;
    if ( (((unsigned __int8)n + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&n->position >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&n->position >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&n->position.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)n + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&n->position.z + 3) >> 3) + 0x7FFF8000) )
    {
      v3 = 12LL;
      n = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load_n(&n->position, 12LL);
    }
    this->position = n->position;
    v4 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_point_ptr);
    v5 = *(_BYTE *)(((unsigned __int64)&v4->target_velocity >> 3) + 0x7FFF8000);
    LOBYTE(v3) = v5 != 0;
    if ( v5 != 0 && v5 <= 3 )
      v4 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v4->target_velocity);
    target_velocity = v4->target_velocity;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_velocity >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->target_velocity >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->target_velocity, v3, (_BYTE)this + 24);
    }
    this->target_velocity = target_velocity;
    v7 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_point_ptr);
    p_wait_time = &v7->wait_time;
    if ( *(_BYTE *)(((unsigned __int64)p_wait_time >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_wait_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_wait_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_wait_time);
    }
    wait_time = v7->wait_time;
    v10 = *(_BYTE *)(((unsigned __int64)&this->wait_time >> 3) + 0x7FFF8000);
    LOBYTE(v3) = v10 != 0;
    v11 = v10 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v10;
    if ( v11 )
      __asan_report_store4(&this->wait_time, v3, v11);
    this->wait_time = wait_time;
    v12 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_point_ptr);
    if ( *(char *)(((unsigned __int64)&this->rotation >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&this->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rotation.z + 3) >> 3) + 0x7FFF8000) )
    {
      v12 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&this->rotation, 12LL);
    }
    if ( *(char *)(((unsigned __int64)&v12->rotation >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v12->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v12 + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&v12->rotation.z + 3) >> 3) + 0x7FFF8000) )
    {
      v12 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load_n(&v12->rotation, 12LL);
    }
    this->rotation = v12->rotation;
    v13 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_point_ptr);
    if ( (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->dir_leave_the_point >> 3)
                                                        + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&this->dir_leave_the_point >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->dir_leave_the_point.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&this->dir_leave_the_point.z + 3) >> 3)
                                                        + 0x7FFF8000) )
    {
      v13 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&this->dir_leave_the_point, 12LL);
    }
    v14 = ((_DWORD)v13 + 63) & 7;
    if ( (((unsigned __int8)v13 + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&v13->dir_leave_the_point >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&v13->dir_leave_the_point >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v13->dir_leave_the_point.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v13 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v13->dir_leave_the_point.z + 3) >> 3)
                                                       + 0x7FFF8000) )
    {
      v14 = 12LL;
      v13 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load_n(&v13->dir_leave_the_point, 12LL);
    }
    this->dir_leave_the_point = v13->dir_leave_the_point;
    v15 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_point_ptr);
    v16 = *(_BYTE *)(((unsigned __int64)&v15->rot_angle_wait_speed >> 3) + 0x7FFF8000);
    LOBYTE(v14) = v16 != 0;
    if ( v16 != 0 && v16 <= 3 )
      v15 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v15->rot_angle_wait_speed);
    rot_angle_wait_speed = v15->rot_angle_wait_speed;
    if ( *(_BYTE *)(((unsigned __int64)&this->rot_angle_wait_speed >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->rot_angle_wait_speed >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->rot_angle_wait_speed, v14, (_BYTE)this + 72);
    }
    this->rot_angle_wait_speed = rot_angle_wait_speed;
    v18 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_point_ptr);
    p_rot_angle_move_speed = &v18->rot_angle_move_speed;
    if ( *(_BYTE *)(((unsigned __int64)p_rot_angle_move_speed >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_rot_angle_move_speed & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_rot_angle_move_speed >> 3)
                                                                               + 0x7FFF8000) )
    {
      __asan_report_load4(p_rot_angle_move_speed);
    }
    rot_angle_move_speed = v18->rot_angle_move_speed;
    v21 = (((_BYTE)this + 68) & 7u) + 3;
    v22 = *(_BYTE *)(((unsigned __int64)&this->rot_angle_move_speed >> 3) + 0x7FFF8000) != 0
       && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rot_angle_move_speed >> 3)
                                                           + 0x7FFF8000);
    if ( v22 )
      __asan_report_store4(&this->rot_angle_move_speed, v21, v22);
    this->rot_angle_move_speed = rot_angle_move_speed;
    v23 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_point_ptr);
    p_rot_angle_same_stop = &v23->rot_angle_same_stop;
    if ( *(_BYTE *)(((unsigned __int64)p_rot_angle_same_stop >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_rot_angle_same_stop & 7) >= *(_BYTE *)(((unsigned __int64)p_rot_angle_same_stop >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load1(p_rot_angle_same_stop);
    }
    rot_angle_same_stop = v23->rot_angle_same_stop;
    v26 = *(_BYTE *)(((unsigned __int64)&this->rot_angle_same_stop >> 3) + 0x7FFF8000);
    LOBYTE(v21) = v26 != 0;
    v27 = (v26 != 0) & (unsigned __int8)((((unsigned __int8)this + 65) & 7) >= v26);
    if ( (_BYTE)v27 )
      __asan_report_store1(&this->rot_angle_same_stop, v21, v27);
    this->rot_angle_same_stop = rot_angle_same_stop;
    v28 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_point_ptr);
    p_rot_round_reach_rounds = &v28->rot_round_reach_rounds;
    if ( *(_BYTE *)(((unsigned __int64)p_rot_round_reach_rounds >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_rot_round_reach_rounds & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_rot_round_reach_rounds >> 3)
                                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(p_rot_round_reach_rounds);
    }
    rot_round_reach_rounds = v28->rot_round_reach_rounds;
    v31 = *(_BYTE *)(((unsigned __int64)&this->rot_round_reach_rounds >> 3) + 0x7FFF8000);
    LOBYTE(v21) = v31 != 0;
    v32 = v31 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v31;
    if ( v32 )
      __asan_report_store4(&this->rot_round_reach_rounds, v21, v32);
    this->rot_round_reach_rounds = rot_round_reach_rounds;
    v33 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_point_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&v33->rot_round_wait_rounds >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v33->rot_round_wait_rounds >> 3) + 0x7FFF8000) <= 3 )
    {
      v33 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v33->rot_round_wait_rounds);
    }
    rot_round_wait_rounds = v33->rot_round_wait_rounds;
    v35 = *(_BYTE *)(((unsigned __int64)&this->rot_round_wait_rounds >> 3) + 0x7FFF8000);
    if ( v35 != 0 && v35 <= 3 )
    {
      LOBYTE(v21) = v35 != 0;
      __asan_report_store4(&this->rot_round_wait_rounds, v21, (_BYTE)this + 80);
    }
    this->rot_round_wait_rounds = rot_round_wait_rounds;
    v36 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_point_ptr);
    p_has_reach_event = &v36->has_reach_event;
    if ( *(_BYTE *)(((unsigned __int64)p_has_reach_event >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_has_reach_event & 7) >= *(_BYTE *)(((unsigned __int64)p_has_reach_event >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_has_reach_event);
    }
    has_reach_event = v36->has_reach_event;
    v39 = *(_BYTE *)(((unsigned __int64)&this->has_reach_event >> 3) + 0x7FFF8000);
    LOBYTE(v21) = v39 != 0;
    v40 = (v39 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v39);
    if ( (_BYTE)v40 )
      __asan_report_store1(&this->has_reach_event, v21, v40);
    this->has_reach_event = has_reach_event;
    v41 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_point_ptr);
    if ( *(char *)(((unsigned __int64)&v41->is_reach_stop >> 3) + 0x7FFF8000) < 0 )
      v41 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v41->is_reach_stop);
    is_reach_stop = v41->is_reach_stop;
    v43 = *(_BYTE *)(((unsigned __int64)&this->is_reach_stop >> 3) + 0x7FFF8000);
    if ( v43 < 0 )
    {
      LOBYTE(v21) = v43 != 0;
      __asan_report_store1(&this->is_reach_stop, v21, &this->is_reach_stop);
    }
    this->is_reach_stop = is_reach_stop;
  }
};

// Line 37: range 00000000131804D4-00000000131805C8
Vector3 __cdecl RoutePoint::getAxisByRotAngleType(data::RotAngleType type)
{
  float z; // xmm1_4
  __int64 v2; // xmm0_8
  Vector3 v3; // [rsp+38h] [rbp-18h] BYREF
  Vector3 v4; // [rsp+44h] [rbp-Ch]
  Vector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  if ( type == ROT_ANGLE_Z )
  {
    Vector3::Vector3(&v3, 0.0, 0.0, 1.0);
    v4 = v3;
  }
  else
  {
    if ( type )
      Vector3::Vector3(&v3, 0.0, 1.0, 0.0);
    else
      Vector3::Vector3(&v3, 1.0, 0.0, 0.0);
    v4 = v3;
  }
  z = v4.z;
  v2 = *(_QWORD *)&v4.x;
  result.x = *(float *)&v2;
  result.y = *((float *)&v2 + 1);
  result.z = z;
  return result;
};

// Line 53: range 00000000131805CA-000000001318088C
RouteAxisAngle __cdecl RoutePoint::calcAxisAngleWait(
        RoutePointPtr *p_point_ptr,
        data::RotType rot_type,
        data::RotAngleType rot_angle_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rdx
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  uint32_t *p_wait_time; // rax
  uint32_t wait_time; // r13d
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  int32_t rot_round_wait_rounds; // r13d
  Vector3 *p_dir_leave_the_point; // r14
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // xmm0_8
  __int64 v18; // xmm1_8
  __int64 v19; // [rsp+8h] [rbp-A8h]
  data::RotAngleType rot_angle_typea; // [rsp+20h] [rbp-90h]
  data::RotType rot_typea; // [rsp+24h] [rbp-8Ch]
  RoutePointPtr *p_point_ptra; // [rsp+28h] [rbp-88h]
  RouteAxisAngle v23; // [rsp+30h] [rbp-80h]
  char v24[112]; // [rsp+40h] [rbp-70h] BYREF
  RouteAxisAngle result; // 0:xmm0_8.8,8:xmm1_8.8

  p_point_ptra = p_point_ptr;
  rot_typea = rot_type;
  rot_angle_typea = rot_angle_type;
  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 6 ret:54";
  *(_QWORD *)(v3 + 16) = RoutePoint::calcAxisAngleWait;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  RouteAxisAngle::RouteAxisAngle((RouteAxisAngle *const)(v3 + 32));
  if ( std::operator==<RoutePoint>(p_point_ptra, 0LL) )
  {
    v6 = *(_QWORD *)(v3 + 40);
    *(_QWORD *)&v23.axis.x = *(_QWORD *)(v3 + 32);
    *(_QWORD *)&v23.axis.z = v6;
    goto LABEL_21;
  }
  if ( rot_typea == ROT_ROUND )
  {
    v12 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_point_ptra);
    if ( *(_BYTE *)(((unsigned __int64)&v12->rot_round_wait_rounds >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v12->rot_round_wait_rounds >> 3) + 0x7FFF8000) <= 3 )
    {
      v12 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v12->rot_round_wait_rounds);
    }
    rot_round_wait_rounds = v12->rot_round_wait_rounds;
    p_dir_leave_the_point = &std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_point_ptra)->dir_leave_the_point;
    v15 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_point_ptra);
    v23 = RoutePoint::calcAxisAngle(&v15->rotation, p_dir_leave_the_point, rot_round_wait_rounds);
  }
  else
  {
    if ( rot_typea > ROT_ROUND )
      goto LABEL_20;
    if ( rot_typea == ROT_NONE )
    {
      v7 = *(_QWORD *)(v3 + 40);
      *(_QWORD *)&v23.axis.x = *(_QWORD *)(v3 + 32);
      *(_QWORD *)&v23.axis.z = v7;
      goto LABEL_21;
    }
    if ( rot_typea == ROT_ANGLE )
    {
      v8 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_point_ptra);
      p_wait_time = &v8->wait_time;
      if ( *(_BYTE *)(((unsigned __int64)p_wait_time >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_wait_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_wait_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_wait_time);
      }
      wait_time = v8->wait_time;
      v11 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_point_ptra);
      if ( *(_BYTE *)(((unsigned __int64)&v11->rot_angle_wait_speed >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v11->rot_angle_wait_speed >> 3) + 0x7FFF8000) <= 3 )
      {
        v11 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v11->rot_angle_wait_speed);
      }
      v23 = RoutePoint::calcAxisAngle(rot_angle_typea, v11->rot_angle_wait_speed, wait_time);
    }
    else
    {
LABEL_20:
      v16 = *(_QWORD *)(v3 + 40);
      *(_QWORD *)&v23.axis.x = *(_QWORD *)(v3 + 32);
      *(_QWORD *)&v23.axis.z = v16;
    }
  }
LABEL_21:
  v17 = *(_QWORD *)&v23.axis.x;
  v19 = *(_QWORD *)&v23.axis.z;
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v18 = v19;
  *(_QWORD *)&result.axis.z = v18;
  *(_QWORD *)&result.axis.x = v17;
  return result;
};

// Line 74: range 000000001318088E-0000000013180B88
RouteAxisAngle __cdecl RoutePoint::calcAxisAngleMove(
        RoutePointPtr *p_from_point_ptr,
        RoutePointPtr *p_to_point_ptr,
        data::RotType rot_type,
        data::RotAngleType rot_angle_type)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  __int64 v8; // rdx
  __int64 v9; // rdx
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t time_to_next_point; // r13d
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  float *p_rot_angle_move_speed; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  int *p_rot_round_reach_rounds; // rax
  int32_t rot_round_reach_rounds; // r13d
  Vector3 *p_rotation; // r14
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // xmm0_8
  __int64 v21; // xmm1_8
  __int64 v22; // [rsp+8h] [rbp-B8h]
  data::RotAngleType rot_angle_typea; // [rsp+28h] [rbp-98h]
  data::RotType rot_typea; // [rsp+2Ch] [rbp-94h]
  RoutePointPtr *p_to_point_ptra; // [rsp+30h] [rbp-90h]
  RoutePointPtr *p_from_point_ptra; // [rsp+38h] [rbp-88h]
  RouteAxisAngle v27; // [rsp+40h] [rbp-80h]
  char v28[112]; // [rsp+50h] [rbp-70h] BYREF
  RouteAxisAngle result; // 0:xmm0_8.8,8:xmm1_8.8

  p_from_point_ptra = p_from_point_ptr;
  p_to_point_ptra = p_to_point_ptr;
  rot_typea = rot_type;
  rot_angle_typea = rot_angle_type;
  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 6 ret:75";
  *(_QWORD *)(v4 + 16) = RoutePoint::calcAxisAngleMove;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  RouteAxisAngle::RouteAxisAngle((RouteAxisAngle *const)(v4 + 32));
  if ( std::operator==<RoutePoint>(p_from_point_ptra, 0LL) || std::operator==<RoutePoint>(p_to_point_ptra, 0LL) )
  {
    v8 = *(_QWORD *)(v4 + 40);
    *(_QWORD *)&v27.axis.x = *(_QWORD *)(v4 + 32);
    *(_QWORD *)&v27.axis.z = v8;
    goto LABEL_25;
  }
  if ( rot_typea == ROT_ROUND )
  {
    v14 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_to_point_ptra);
    p_rot_round_reach_rounds = &v14->rot_round_reach_rounds;
    if ( *(_BYTE *)(((unsigned __int64)p_rot_round_reach_rounds >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_rot_round_reach_rounds & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_rot_round_reach_rounds >> 3)
                                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(p_rot_round_reach_rounds);
    }
    rot_round_reach_rounds = v14->rot_round_reach_rounds;
    p_rotation = &std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_to_point_ptra)->rotation;
    v18 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_from_point_ptra);
    v27 = RoutePoint::calcAxisAngle(&v18->dir_leave_the_point, p_rotation, rot_round_reach_rounds);
  }
  else
  {
    if ( rot_typea > ROT_ROUND )
      goto LABEL_24;
    if ( rot_typea == ROT_NONE )
    {
      v9 = *(_QWORD *)(v4 + 40);
      *(_QWORD *)&v27.axis.x = *(_QWORD *)(v4 + 32);
      *(_QWORD *)&v27.axis.z = v9;
      goto LABEL_25;
    }
    if ( rot_typea == ROT_ANGLE )
    {
      v10 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_from_point_ptra);
      if ( *(_BYTE *)(((unsigned __int64)&v10->time_to_next_point >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->time_to_next_point >> 3) + 0x7FFF8000) <= 3 )
      {
        v10 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v10->time_to_next_point);
      }
      time_to_next_point = v10->time_to_next_point;
      v12 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_to_point_ptra);
      p_rot_angle_move_speed = &v12->rot_angle_move_speed;
      if ( *(_BYTE *)(((unsigned __int64)p_rot_angle_move_speed >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_rot_angle_move_speed & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_rot_angle_move_speed >> 3)
                                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(p_rot_angle_move_speed);
      }
      v27 = RoutePoint::calcAxisAngle(rot_angle_typea, v12->rot_angle_move_speed, time_to_next_point);
    }
    else
    {
LABEL_24:
      v19 = *(_QWORD *)(v4 + 40);
      *(_QWORD *)&v27.axis.x = *(_QWORD *)(v4 + 32);
      *(_QWORD *)&v27.axis.z = v19;
    }
  }
LABEL_25:
  v20 = *(_QWORD *)&v27.axis.x;
  v22 = *(_QWORD *)&v27.axis.z;
  if ( v28 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v21 = v22;
  *(_QWORD *)&result.axis.z = v21;
  *(_QWORD *)&result.axis.x = v20;
  return result;
};

// Line 95: range 0000000013180B8A-0000000013180ECD
RouteAxisAngle __cdecl RoutePoint::calcAxisAngle(const Vector3 *from_dir, const Vector3 *to_dir, int32_t round_n)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  __int64 v9; // rdx
  __int64 v10; // xmm0_8
  __int64 v11; // xmm1_8
  Quaternion lhs; // [rsp+40h] [rbp-D0h] BYREF
  char v14[192]; // [rsp+50h] [rbp-C0h] BYREF
  RouteAxisAngle result; // 0:xmm0_8.8,8:xmm1_8.8

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 16 6 ret:96 64 16 11 from_rot:97 96 16 9 to_rot:99 128 16 9 delta:101";
  *(_QWORD *)(v3 + 16) = RoutePoint::calcAxisAngle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  RouteAxisAngle::RouteAxisAngle((RouteAxisAngle *const)(v3 + 32));
  Quaternion::Quaternion((Quaternion *const)(v3 + 64));
  Quaternion::fromEuler((Quaternion *const)(v3 + 64), from_dir);
  Quaternion::Quaternion((Quaternion *const)(v3 + 96));
  Quaternion::fromEuler((Quaternion *const)(v3 + 96), to_dir);
  lhs = Quaternion::inverse((Quaternion *const)(v3 + 64));
  *(Quaternion *)(v3 + 128) = operator*(&lhs, (const Quaternion *)(v3 + 96));
  Quaternion::toAxisAngle((Quaternion *const)(v3 + 128), (Vector3 *)(v3 + 32), (float *)(v3 + 44));
  v6 = std::fmod<float,double>(*(float *)(v3 + 44), 360.0);
  *(float *)(v3 + 44) = v6;
  if ( *(float *)(v3 + 44) < 0.0 )
  {
    *(float *)(v3 + 44) = -*(float *)(v3 + 44);
    *(Vector3 *)(v3 + 32) = Vector3::operator-((const Vector3 *const)(v3 + 32));
  }
  if ( *(float *)(v3 + 44) > 180.0 )
  {
    *(float *)(v3 + 44) = 360.0 - *(float *)(v3 + 44);
    *(Vector3 *)(v3 + 32) = Vector3::operator-((const Vector3 *const)(v3 + 32));
  }
  if ( round_n <= 0 )
  {
    if ( round_n < 0 )
    {
      *(float *)(v3 + 44) = *(float *)(v3 + 44) - 360.0;
      v8 = *(float *)(v3 + 44) - 360.0 * (double)~round_n;
      *(float *)(v3 + 44) = v8;
    }
  }
  else
  {
    v7 = 360.0 * (double)(round_n - 1) + *(float *)(v3 + 44);
    *(float *)(v3 + 44) = v7;
  }
  v9 = *(_QWORD *)(v3 + 40);
  *(_QWORD *)&lhs.x = *(_QWORD *)(v3 + 32);
  *(_QWORD *)&lhs.z = v9;
  v10 = *(_QWORD *)&lhs.x;
  if ( v14 == (char *)v3 )
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
  v11 = v9;
  *(_QWORD *)&result.axis.z = v11;
  *(_QWORD *)&result.axis.x = v10;
  return result;
};

// Line 127: range 0000000013180ECE-0000000013181019
RouteAxisAngle __cdecl RoutePoint::calcAxisAngle(data::RotAngleType angle_type, float angle, uint32_t time_n)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // xmm0_8
  __int64 v8; // xmm1_8
  __int64 v9; // [rsp+8h] [rbp-98h]
  uint32_t time_na; // [rsp+24h] [rbp-7Ch]
  float anglea; // [rsp+28h] [rbp-78h]
  data::RotAngleType angle_typea; // [rsp+2Ch] [rbp-74h]
  __int64 v13; // [rsp+30h] [rbp-70h]
  __int64 v14; // [rsp+38h] [rbp-68h]
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF
  RouteAxisAngle result; // 0:xmm0_8.8,8:xmm1_8.8

  angle_typea = angle_type;
  anglea = angle;
  time_na = time_n;
  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 7 ret:128";
  *(_QWORD *)(v3 + 16) = RoutePoint::calcAxisAngle;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  RouteAxisAngle::RouteAxisAngle((RouteAxisAngle *const)(v3 + 32));
  *(Vector3 *)(v3 + 32) = RoutePoint::getAxisByRotAngleType(angle_typea);
  *(float *)(v3 + 44) = (float)((float)(int)time_na * anglea) / 1000.0;
  v6 = *(_QWORD *)(v3 + 40);
  v13 = *(_QWORD *)(v3 + 32);
  v14 = v6;
  v7 = v13;
  v9 = v6;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v8 = v9;
  *(_QWORD *)&result.axis.z = v8;
  *(_QWORD *)&result.axis.x = v7;
  return result;
};

// Line 135: range 000000001318101A-0000000013181379
unsigned __int64 __fastcall RoutePoint::calcQuaternion(const Quaternion *fromRot, const Quaternion *toRot, float pro)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const float *v6; // rax
  _DWORD *v7; // rdx
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  float __lo; // [rsp+28h] [rbp-C8h] BYREF
  float __hi; // [rsp+2Ch] [rbp-C4h] BYREF
  char v12[192]; // [rsp+30h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 7 pro:134 64 16 7 ret:137 96 16 9 delta:138 128 16 7 tmp:139";
  *(_QWORD *)(v3 + 16) = RoutePoint::calcQuaternion;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(float *)(v3 + 48) = pro;
  __hi = 1.0;
  __lo = 0.0;
  v6 = std::clamp<float>((const float *)(v3 + 48), &__lo, &__hi);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  *(_DWORD *)(v3 + 48) = *v7;
  if ( ((unsigned __int8)fromRot & 7) >= *(_BYTE *)(((unsigned __int64)fromRot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)fromRot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&fromRot->w + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)fromRot + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&fromRot->w + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(fromRot, 16LL);
  }
  v8 = *(_QWORD *)&fromRot->z;
  *(_QWORD *)(v3 + 64) = *(_QWORD *)&fromRot->x;
  *(_QWORD *)(v3 + 72) = v8;
  *(Quaternion *)(v3 + 128) = Quaternion::inverse((Quaternion *const)(v3 + 64));
  *(Quaternion *)(v3 + 96) = operator*((const Quaternion *)(v3 + 128), toRot);
  RouteAxisAngle::RouteAxisAngle((RouteAxisAngle *const)(v3 + 128));
  Quaternion::toAxisAngle((Quaternion *const)(v3 + 96), (Vector3 *)(v3 + 128), (float *)(v3 + 140));
  if ( *(float *)(v3 + 140) > 180.0 )
  {
    *(float *)(v3 + 140) = 360.0 - *(float *)(v3 + 140);
    *(Vector3 *)(v3 + 128) = Vector3::operator-((const Vector3 *const)(v3 + 128));
  }
  *(float *)(v3 + 140) = *(float *)(v3 + 48) * *(float *)(v3 + 140);
  Quaternion::fromAxisAngle((Quaternion *const)(v3 + 64), (const Vector3 *)(v3 + 128), *(float *)(v3 + 140));
  *(Quaternion *)(v3 + 64) = operator*(fromRot, (const Quaternion *)(v3 + 64));
  result = *(_QWORD *)(v3 + 64);
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    result = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 153: range 000000001318137A-00000000131814B1
Quaternion __cdecl RoutePoint::calcQuaternion(const Quaternion *rot, data::RotAngleType rot_angle_type, float angle)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 v6; // xmm0_8
  Quaternion v7; // kr00_16
  __int64 v8; // xmm1_8
  Vector3 axis; // [rsp+24h] [rbp-6Ch] BYREF
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF
  Quaternion result; // 0:xmm0_8.8,8:xmm1_8.8

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 7 tmp:154";
  *(_QWORD *)(v3 + 16) = RoutePoint::calcQuaternion;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Quaternion::Quaternion((Quaternion *const)(v3 + 32));
  axis = RoutePoint::getAxisByRotAngleType(rot_angle_type);
  Quaternion::fromAxisAngle((Quaternion *const)(v3 + 32), &axis, angle);
  v7 = operator*(rot, (const Quaternion *)(v3 + 32));
  v6 = *(_QWORD *)&v7.x;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v8 = *(_QWORD *)&v7.z;
  result.z = *(float *)&v8;
  result.w = *((float *)&v8 + 1);
  result.x = *(float *)&v6;
  result.y = *((float *)&v6 + 1);
  return result;
};

// Line 161: range 00000000131814B2-0000000013181944
int32_t __cdecl RoutePoint::simulateTowardsThisPointByPositionAndRotation(
        const RoutePoint *const this,
        const PlatformRoute *route,
        const Transform *prev_transform,
        uint32_t *time_ms,
        Transform *result_transform)
{
  float v5; // xmm0_4
  uint32_t v6; // edi
  bool v7; // dl
  uint32_t v8; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->target_velocity >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_velocity >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->target_velocity);
  }
  if ( this->target_velocity != 0.0 )
  {
    v5 = getDistance(&prev_transform->position, &this->position) * 1000.0;
    if ( *(_BYTE *)(((unsigned __int64)&this->target_velocity >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->target_velocity >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->target_velocity);
    }
    v6 = (int)(float)(v5 / this->target_velocity);
    v7 = *(_BYTE *)(((unsigned __int64)time_ms >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)time_ms & 7) + 3) >= *(_BYTE *)(((unsigned __int64)time_ms >> 3) + 0x7FFF8000);
    if ( v7 )
    {
      v6 = (unsigned int)time_ms;
      __asan_report_store4(time_ms, ((unsigned __int8)time_ms & 7u) + 3, v7);
    }
    *time_ms = v6;
  }
  if ( *(_BYTE *)(((unsigned __int64)time_ms >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)time_ms & 7) + 3) >= *(_BYTE *)(((unsigned __int64)time_ms >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(time_ms);
  }
  v8 = *time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->wait_time);
  }
  *time_ms = v8 + this->wait_time;
  if ( ((unsigned __int8)result_transform & 7) >= *(_BYTE *)(((unsigned __int64)result_transform >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)result_transform >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&result_transform->position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)result_transform + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&result_transform->position.z + 3) >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_store_n(result_transform, 12LL);
  }
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->position, 12LL);
  }
  *(_QWORD *)&result_transform->position.x = *(_QWORD *)&this->position.x;
  result_transform->position.z = this->position.z;
  if ( (unsigned int)(PlatformRoute::getRotType(route) - 1) > 1 )
  {
    if ( (((unsigned __int8)result_transform + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&result_transform->rotation >> 3)
                                                                    + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&result_transform->rotation >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&result_transform->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)result_transform + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&result_transform->rotation.z
                                                                      + 3) >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_store_n(&result_transform->rotation, 12LL);
    }
    if ( (((unsigned __int8)prev_transform + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&prev_transform->rotation >> 3)
                                                                  + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&prev_transform->rotation >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&prev_transform->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)prev_transform + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&prev_transform->rotation.z + 3) >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load_n(&prev_transform->rotation, 12LL);
    }
    *(_QWORD *)&result_transform->rotation.x = *(_QWORD *)&prev_transform->rotation.x;
    result_transform->rotation.z = prev_transform->rotation.z;
  }
  else
  {
    if ( (((unsigned __int8)result_transform + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&result_transform->rotation >> 3)
                                                                    + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&result_transform->rotation >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&result_transform->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)result_transform + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&result_transform->rotation.z
                                                                      + 3) >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_store_n(&result_transform->rotation, 12LL);
    }
    if ( *(char *)(((unsigned __int64)&this->rotation >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&this->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rotation.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(&this->rotation, 12LL);
    }
    *(_QWORD *)&result_transform->rotation.x = *(_QWORD *)&this->rotation.x;
    result_transform->rotation.z = this->rotation.z;
  }
  return 0;
};

// Line 183: range 0000000013181946-0000000013181D39
void __cdecl RoutePoint::onReachThisPoint(
        const RoutePoint *const this,
        PlatformSimulateResult *result,
        uint32_t route_id)
{
  __int64 route_index; // rsi
  bool v4; // dl
  bool is_stop; // si
  __int64 v7; // [rsp+28h] [rbp-18h]
  float z; // [rsp+30h] [rbp-10h]
  __int64 v9; // [rsp+34h] [rbp-Ch]
  float v10; // [rsp+3Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->route_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->route_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->route_index);
  }
  route_index = this->route_index;
  if ( *(_BYTE *)(((unsigned __int64)&result->route_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&result->route_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&result->route_index, route_index, (_BYTE)result + 32);
  }
  result->route_index = route_index;
  v4 = *(_BYTE *)(((unsigned __int64)&result->route_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)result + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->route_time >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&result->route_time, (((_BYTE)result + 28) & 7u) + 3, v4);
  result->route_time = 0;
  if ( *(char *)(((unsigned __int64)result >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&result->position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)result + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&result->position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(result, 12LL);
  }
  v7 = *(_QWORD *)&result->position.x;
  z = result->position.z;
  if ( (((unsigned __int8)result + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&result->rotation >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&result->rotation >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&result->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)result + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&result->rotation.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&result->rotation, 12LL);
  }
  v9 = *(_QWORD *)&result->rotation.x;
  v10 = result->rotation.z;
  if ( (((unsigned __int8)result + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&result->platform_transform >> 3)
                                                        + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&result->platform_transform >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&result->platform_transform.position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)result + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&result->platform_transform.position.z + 3) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(&result->platform_transform, 12LL);
  }
  *(_QWORD *)&result->platform_transform.position.x = v7;
  result->platform_transform.position.z = z;
  if ( *(char *)(((unsigned __int64)&result->platform_transform.rotation >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&result->platform_transform.rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)result + 59) & 7) >= *(_BYTE *)((((unsigned __int64)&result->platform_transform.rotation.z + 3) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(&result->platform_transform.rotation, 12LL);
  }
  *(_QWORD *)&result->platform_transform.rotation.x = v9;
  result->platform_transform.rotation.z = v10;
  if ( *(_BYTE *)(((unsigned __int64)&result->is_ignore_reach_point >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)result + 89) & 7) >= *(_BYTE *)(((unsigned __int64)&result->is_ignore_reach_point >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load1(&result->is_ignore_reach_point);
  }
  if ( !result->is_ignore_reach_point )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->has_reach_event >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_reach_event >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->has_reach_event);
    }
    if ( this->has_reach_event )
      std::vector<unsigned int>::push_back(&result->triggerable_route_index_vec, &this->route_index);
    if ( *(char *)(((unsigned __int64)&result->is_stop >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&result->is_stop);
    is_stop = result->is_stop;
    if ( *(char *)(((unsigned __int64)&this->is_reach_stop >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_reach_stop);
    result->is_stop = is_stop || this->is_reach_stop;
  }
};

// Line 199: range 0000000013181D3A-00000000131831D3
__int64 __fastcall RoutePoint::simulateTowardsThisPointByTime(
        const RoutePoint *const this,
        const PlatformRoute *route,
        PlatformSimulateResult *prev_transform,
        const uint32_t time_ms,
        unsigned __int64 result,
        bool is_temp_route)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  float v10; // xmm0_4
  unsigned int *v11; // rax
  int *v12; // rdx
  float v13; // xmm0_4
  data::RotType v14; // eax
  data::RotAngleType v15; // r14d
  unsigned int *p_b; // rsi
  uint32_t *v17; // rax
  uint32_t *v18; // rdx
  uint32_t v19; // ecx
  char v20; // dl
  bool v21; // dl
  uint32_t v22; // ecx
  unsigned __int64 v23; // rax
  void (__fastcall *v24)(const RoutePoint *const, unsigned __int64, _QWORD); // r14
  uint32_t RouteId; // eax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rbx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  __int64 v41; // rax
  const float *v42; // rax
  _DWORD *v43; // rdx
  int v44; // esi
  Vector3 *p_position; // r8
  PlatformSimulateResult *v46; // rdi
  char *v47; // rsi
  uint32_t *v48; // rax
  uint32_t *v49; // rdx
  uint32_t v50; // ecx
  char v51; // dl
  bool v52; // dl
  __int64 v53; // rdx
  common::milog::MiLogStream *v54; // r14
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // r14
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  data::RotType RotType; // eax
  float v70; // xmm1_4
  data::RotAngleType RotAngleType; // r14d
  float angle; // [rsp+4h] [rbp-15Ch]
  float anglea; // [rsp+4h] [rbp-15Ch]
  float __a; // [rsp+34h] [rbp-12Ch] BYREF
  unsigned int __b; // [rsp+38h] [rbp-128h] BYREF
  float pro; // [rsp+3Ch] [rbp-124h]
  Quaternion v83; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v84; // [rsp+50h] [rbp-110h] BYREF
  std::string val; // [rsp+70h] [rbp-F0h] BYREF
  char v86[208]; // [rsp+90h] [rbp-D0h] BYREF

  v6 = (unsigned __int64)v86;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 48 4 21 cur_route_time_ms:200 64 4 7 pro:252 80 4 11 time_ms:198 96 16 8 tmp1:268 128 16 8 tmp2:223";
  *(_QWORD *)(v6 + 16) = RoutePoint::simulateTowardsThisPointByTime;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -234556924;
  v8[536862723] = -219021312;
  v8[536862724] = -202178560;
  *(_DWORD *)(v6 + 80) = time_ms;
  *(_DWORD *)(v6 + 48) = 0;
  if ( is_temp_route && PlatformRoute::getIsSimulateTempRouteByTime(route) )
  {
    if ( *(_BYTE *)(((result + 24) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((result + 24) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(result + 24);
    *(_DWORD *)(v6 + 48) = *(_DWORD *)(result + 24) + *(_DWORD *)(v6 + 80);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->target_velocity >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->target_velocity >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->target_velocity);
    }
    if ( this->target_velocity != 0.0 )
    {
      v10 = getDistance(&prev_transform->position, &this->position) * 1000.0;
      if ( *(_BYTE *)(((unsigned __int64)&this->target_velocity >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->target_velocity >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->target_velocity);
      }
      *(_DWORD *)(v6 + 48) = (int)(float)(v10 / this->target_velocity);
    }
  }
  if ( *(_DWORD *)(v6 + 80) < *(_DWORD *)(v6 + 48) )
  {
    *(_DWORD *)(v6 + 64) = 1065353216;
    if ( *(_DWORD *)(v6 + 48) )
    {
      *(float *)&__b = (float)*(int *)(v6 + 80) / (float)*(int *)(v6 + 48);
      __a = 1.0;
      v42 = std::min<float>(&__a, (const float *)&__b);
      v43 = v42;
      if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v42);
      }
      *(_DWORD *)(v6 + 64) = *v43;
    }
    v44 = *(_DWORD *)(v6 + 64);
    p_position = &this->position;
    v46 = prev_transform;
    if ( *(char *)((result >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((result + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((result + 11) & 7) >= *(_BYTE *)(((result + 11) >> 3) + 0x7FFF8000) )
    {
      v44 = 12;
      v46 = (PlatformSimulateResult *)result;
      __asan_report_store_n(result, 12LL);
    }
    *(Vector3 *)result = interpolate(&v46->position, p_position, *(float *)&v44);
    v47 = (char *)(v6 + 48);
    v48 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v6 + 80), (const unsigned int *)(v6 + 48));
    v49 = v48;
    if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v48);
    }
    v50 = *v49;
    v51 = *(_BYTE *)(((result + 28) >> 3) + 0x7FFF8000);
    LOBYTE(v47) = v51 != 0;
    v52 = v51 != 0 && (char)(((result + 28) & 7) + 3) >= v51;
    if ( v52 )
      __asan_report_store4(result + 28, v47, v52);
    *(_DWORD *)(result + 28) = v50;
    if ( (char)((result + 36) & 7) >= *(_BYTE *)(((result + 36) >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((result + 36) >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((result + 59) >> 3) + 0x7FFF8000) != 0
      && (char)((result + 59) & 7) >= *(_BYTE *)(((result + 59) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(result + 36, 24LL);
    }
    if ( ((unsigned __int8)prev_transform & 7) >= *(_BYTE *)(((unsigned __int64)prev_transform >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)prev_transform >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&prev_transform->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)prev_transform + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&prev_transform->rotation.z + 3) >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load_n(prev_transform, 24LL);
    }
    v53 = *(_QWORD *)&prev_transform->position.z;
    *(_QWORD *)(result + 36) = *(_QWORD *)&prev_transform->position.x;
    *(_QWORD *)(result + 44) = v53;
    *(_QWORD *)(result + 52) = *(_QWORD *)&prev_transform->rotation.y;
    common::milog::MiLogStream::create(
      &v84,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/platform_route.cpp",
      "simulateTowardsThisPointByTime",
      261);
    v54 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v84, (const char (*)[10])"route_id:");
    *(float *)&__b = COERCE_FLOAT(PlatformRoute::getRouteId(route));
    v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &__b);
    v56 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v55, (const char (*)[14])" route_index:");
    v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, &this->route_index);
    v58 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v57,
            (const char (*)[20])" cur_route_time_ms:");
    v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, (const unsigned int *)(v6 + 48));
    v60 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v59, (const char (*)[11])" position:");
    Vector3::toString[abi:cxx11](&val, (const Vector3 *const)result);
    v61 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v60, &val);
    v62 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v61, (const char (*)[13])" route_time:");
    v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v62,
            (const unsigned int *)(result + 28));
    v64 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v63, (const char (*)[6])" pro:");
    v65 = common::milog::MiLogStream::operator<<<float,(float *)0>(v64, (const float *)(v6 + 64));
    v66 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v65, (const char (*)[7])" prev:");
    v67 = operator<<(v66, (const Transform *)prev_transform);
    v68 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v67, (const char (*)[8])" trans:");
    operator<<(v68, (const Transform *)(result + 36));
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v84);
    RotType = PlatformRoute::getRotType(route);
    if ( RotType == ROT_ANGLE )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->axis_angle_wait_the_point.angle >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->axis_angle_wait_the_point.angle >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->axis_angle_wait_the_point.angle);
      }
      v70 = this->axis_angle_wait_the_point.angle;
      if ( *(_BYTE *)(((unsigned __int64)&this->axis_angle_to_next_point.angle >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->axis_angle_to_next_point.angle >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->axis_angle_to_next_point.angle);
      }
      anglea = v70 + (float)(*(float *)(v6 + 64) * this->axis_angle_to_next_point.angle);
      RotAngleType = PlatformRoute::getRotAngleType(route);
      *(Quaternion *)(v6 + 128) = Quaternion::fromRotation(&this->rotation);
      v83 = RoutePoint::calcQuaternion((const Quaternion *)(v6 + 128), RotAngleType, anglea);
      Quaternion::toEuler(&v83, (Vector3 *)(result + 12));
    }
    else if ( RotType == ROT_ROUND )
    {
      Quaternion::Quaternion((Quaternion *const)(v6 + 96));
      Quaternion::Quaternion((Quaternion *const)(v6 + 128));
      Quaternion::fromEuler((Quaternion *const)(v6 + 96), &this->dir_leave_the_point);
      if ( *(_BYTE *)(((unsigned __int64)&this->axis_angle_to_next_point.angle >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->axis_angle_to_next_point.angle >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->axis_angle_to_next_point.angle);
      }
      Quaternion::fromAxisAngle(
        (Quaternion *const)(v6 + 128),
        &this->axis_angle_to_next_point.axis,
        *(float *)(v6 + 64) * this->axis_angle_to_next_point.angle);
      v83 = operator*((const Quaternion *)(v6 + 96), (const Quaternion *)(v6 + 128));
      Quaternion::toEuler(&v83, (Vector3 *)(result + 12));
    }
    else
    {
      if ( (char)((result + 12) & 7) >= *(_BYTE *)(((result + 12) >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((result + 12) >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((result + 23) >> 3) + 0x7FFF8000) != 0
        && (char)((result + 23) & 7) >= *(_BYTE *)(((result + 23) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(result + 12, 12LL);
      }
      if ( (((unsigned __int8)prev_transform + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&prev_transform->rotation >> 3)
                                                                    + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&prev_transform->rotation >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&prev_transform->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)prev_transform + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&prev_transform->rotation.z + 3) >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load_n(&prev_transform->rotation, 12LL);
      }
      *(_QWORD *)(result + 12) = *(_QWORD *)&prev_transform->rotation.x;
      *(float *)(result + 20) = prev_transform->rotation.z;
    }
    v41 = 0LL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->wait_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->wait_time);
    }
    if ( this->wait_time )
    {
      v11 = (unsigned int *)std::min<unsigned int>((const unsigned int *)(v6 + 80), &this->wait_time);
      v12 = (int *)v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v13 = (float)*v12;
      if ( *(_BYTE *)(((unsigned __int64)&this->wait_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->wait_time);
      }
      pro = v13 / (float)(int)this->wait_time;
      v14 = PlatformRoute::getRotType(route);
      if ( v14 == ROT_ANGLE )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->axis_angle_wait_the_point.angle >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->axis_angle_wait_the_point.angle >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->axis_angle_wait_the_point.angle);
        }
        angle = this->axis_angle_wait_the_point.angle * pro;
        v15 = PlatformRoute::getRotAngleType(route);
        *(Quaternion *)(v6 + 128) = Quaternion::fromRotation(&this->rotation);
        v83 = RoutePoint::calcQuaternion((const Quaternion *)(v6 + 128), v15, angle);
        Quaternion::toEuler(&v83, (Vector3 *)(result + 12));
      }
      else if ( v14 == ROT_ROUND )
      {
        Quaternion::Quaternion((Quaternion *const)(v6 + 96));
        Quaternion::Quaternion((Quaternion *const)(v6 + 128));
        Quaternion::fromEuler((Quaternion *const)(v6 + 96), &this->rotation);
        if ( *(_BYTE *)(((unsigned __int64)&this->axis_angle_wait_the_point.angle >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->axis_angle_wait_the_point.angle >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->axis_angle_wait_the_point.angle);
        }
        Quaternion::fromAxisAngle(
          (Quaternion *const)(v6 + 128),
          &this->axis_angle_wait_the_point.axis,
          this->axis_angle_wait_the_point.angle * pro);
        v83 = operator*((const Quaternion *)(v6 + 96), (const Quaternion *)(v6 + 128));
        Quaternion::toEuler(&v83, (Vector3 *)(result + 12));
      }
      else
      {
        if ( (char)((result + 12) & 7) >= *(_BYTE *)(((result + 12) >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((result + 12) >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((result + 23) >> 3) + 0x7FFF8000) != 0
          && (char)((result + 23) & 7) >= *(_BYTE *)(((result + 23) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(result + 12, 12LL);
        }
        if ( (((unsigned __int8)prev_transform + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&prev_transform->rotation >> 3)
                                                                      + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&prev_transform->rotation >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&prev_transform->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)prev_transform + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&prev_transform->rotation.z
                                                                        + 3) >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load_n(&prev_transform->rotation, 12LL);
        }
        *(_QWORD *)(result + 12) = *(_QWORD *)&prev_transform->rotation.x;
        *(float *)(result + 20) = prev_transform->rotation.z;
      }
    }
    else
    {
      if ( (char)((result + 12) & 7) >= *(_BYTE *)(((result + 12) >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((result + 12) >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((result + 23) >> 3) + 0x7FFF8000) != 0
        && (char)((result + 23) & 7) >= *(_BYTE *)(((result + 23) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(result + 12, 12LL);
      }
      if ( *(char *)(((unsigned __int64)&this->rotation >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&this->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rotation.z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(&this->rotation, 12LL);
      }
      *(Vector3 *)(result + 12) = this->rotation;
    }
    if ( *(char *)((result >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((result + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((result + 11) & 7) >= *(_BYTE *)(((result + 11) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(result, 12LL);
    }
    if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->position.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->position.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(&this->position, 12LL);
    }
    *(Vector3 *)result = this->position;
    if ( *(_BYTE *)(((unsigned __int64)&this->wait_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->wait_time);
    }
    __b = this->wait_time + *(_DWORD *)(v6 + 48);
    p_b = &__b;
    v17 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v6 + 80), &__b);
    v18 = v17;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v17);
    }
    v19 = *v18;
    v20 = *(_BYTE *)(((result + 28) >> 3) + 0x7FFF8000);
    LOBYTE(p_b) = v20 != 0;
    v21 = v20 != 0 && (char)(((result + 28) & 7) + 3) >= v20;
    if ( v21 )
      __asan_report_store4(result + 28, p_b, v21);
    *(_DWORD *)(result + 28) = v19;
    v22 = *(_DWORD *)(result + 28);
    if ( *(_BYTE *)(((unsigned __int64)&this->wait_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->wait_time >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->wait_time);
    }
    if ( v22 >= this->wait_time + *(_DWORD *)(v6 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v23 = (unsigned __int64)(this->_vptr_RoutePoint + 7);
      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        v23 = __asan_report_load8();
      v24 = *(void (__fastcall **)(const RoutePoint *const, unsigned __int64, _QWORD))v23;
      RouteId = PlatformRoute::getRouteId(route);
      v24(this, result, RouteId);
    }
    common::milog::MiLogStream::create(
      &v84,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/platform_route.cpp",
      "simulateTowardsThisPointByTime",
      246);
    v26 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v84, (const char (*)[10])"route_id:");
    *(float *)&__b = COERCE_FLOAT(PlatformRoute::getRouteId(route));
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &__b);
    v28 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v27, (const char (*)[14])" route_index:");
    v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &this->route_index);
    v30 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v29,
            (const char (*)[21])" result.route_index:");
    v31 = common::milog::MiLogStream::operator<<<int,(int *)0>(v30, (const int *)(result + 32));
    v32 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v31,
            (const char (*)[20])" cur_route_time_ms:");
    v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v6 + 48));
    v34 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v33, (const char (*)[11])" position:");
    Vector3::toString[abi:cxx11](&val, &this->position);
    v35 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, &val);
    v36 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v35, (const char (*)[13])" route_time:");
    v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v36,
            (const unsigned int *)(result + 28));
    v38 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v37, (const char (*)[7])" prev:");
    v39 = operator<<(v38, (const Transform *)prev_transform);
    v40 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v39, (const char (*)[8])" trans:");
    operator<<(v40, (const Transform *)(result + 36));
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v84);
    v41 = 0LL;
  }
  if ( v86 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v41;
};

// Line 287: range 00000000131831D4-00000000131836E7
void __cdecl ArrayRoutePoint::toClient(const ArrayRoutePoint *const this, proto::RoutePoint *proto_route_point)
{
  proto::Vector *v2; // rax
  std::variant_alternative_t_6 *v3; // rax
  float *v4; // rdx
  std::variant_alternative_t_5 *v5; // rax
  float *v6; // rdx
  const Vector3 *v7; // rbx
  proto::Vector *v8; // rax
  float v9; // xmm0_4
  float v10; // xmm0_4
  const RouteAxisAngle *axis_angle_0; // [rsp+10h] [rbp-30h]
  proto::MathQuaternion *proto_axis_speed; // [rsp+18h] [rbp-28h]
  const RouteAxisAngle *axis_angle; // [rsp+20h] [rbp-20h]
  proto::MathQuaternion *proto_rotation_speed; // [rsp+28h] [rbp-18h]

  v2 = proto::RoutePoint::mutable_position(proto_route_point);
  Vector3::toClient(&this->position, v2);
  if ( *(_BYTE *)(((unsigned __int64)&this->arrive_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->arrive_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->arrive_range);
  }
  proto::RoutePoint::set_arrive_range(proto_route_point, this->arrive_range);
  if ( std::variant<float,float,bool>::index(&this->move_params) )
  {
    if ( std::variant<float,float,bool>::index(&this->move_params) == 1 )
    {
      v5 = (std::variant_alternative_t_5 *)std::get<1ul,float,float,bool>(&this->move_params);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      proto::RoutePoint::set_time(proto_route_point, *v6);
    }
  }
  else
  {
    v3 = (std::variant_alternative_t_6 *)std::get<0ul,float,float,bool>(&this->move_params);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    proto::RoutePoint::set_velocity(proto_route_point, *v4);
  }
  if ( std::variant<Vector3,RouteAxisAngle,RouteAxisAngle>::index(&this->rotate_params) )
  {
    if ( std::variant<Vector3,RouteAxisAngle,RouteAxisAngle>::index(&this->rotate_params) == 1 )
    {
      axis_angle = std::get<1ul,Vector3,RouteAxisAngle,RouteAxisAngle>(&this->rotate_params);
      proto_rotation_speed = proto::RoutePoint::mutable_rotation_speed(proto_route_point);
      if ( *(_BYTE *)(((unsigned __int64)axis_angle >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)axis_angle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)axis_angle >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(axis_angle);
      }
      proto::MathQuaternion::set_x(proto_rotation_speed, axis_angle->axis.x);
      if ( *(_BYTE *)(((unsigned __int64)&axis_angle->axis.y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)axis_angle + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&axis_angle->axis.y >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&axis_angle->axis.y);
      }
      proto::MathQuaternion::set_y(proto_rotation_speed, axis_angle->axis.y);
      if ( *(_BYTE *)(((unsigned __int64)&axis_angle->axis.z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)axis_angle + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&axis_angle->axis.z >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&axis_angle->axis.z);
      }
      proto::MathQuaternion::set_z(proto_rotation_speed, axis_angle->axis.z);
      if ( *(_BYTE *)(((unsigned __int64)&axis_angle->angle >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)axis_angle + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&axis_angle->angle >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&axis_angle->angle);
      }
      v9 = 3.141592653589793 * (float)(axis_angle->angle / 180.0);
      proto::MathQuaternion::set_w(proto_rotation_speed, v9);
    }
    else if ( std::variant<Vector3,RouteAxisAngle,RouteAxisAngle>::index(&this->rotate_params) == 2 )
    {
      axis_angle_0 = std::get<2ul,Vector3,RouteAxisAngle,RouteAxisAngle>(&this->rotate_params);
      proto_axis_speed = proto::RoutePoint::mutable_axis_speed(proto_route_point);
      if ( *(_BYTE *)(((unsigned __int64)axis_angle_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)axis_angle_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)axis_angle_0 >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(axis_angle_0);
      }
      proto::MathQuaternion::set_x(proto_axis_speed, axis_angle_0->axis.x);
      if ( *(_BYTE *)(((unsigned __int64)&axis_angle_0->axis.y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)axis_angle_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&axis_angle_0->axis.y >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&axis_angle_0->axis.y);
      }
      proto::MathQuaternion::set_y(proto_axis_speed, axis_angle_0->axis.y);
      if ( *(_BYTE *)(((unsigned __int64)&axis_angle_0->axis.z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)axis_angle_0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&axis_angle_0->axis.z >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&axis_angle_0->axis.z);
      }
      proto::MathQuaternion::set_z(proto_axis_speed, axis_angle_0->axis.z);
      if ( *(_BYTE *)(((unsigned __int64)&axis_angle_0->angle >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)axis_angle_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&axis_angle_0->angle >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&axis_angle_0->angle);
      }
      v10 = 3.141592653589793 * (float)(axis_angle_0->angle / 180.0);
      proto::MathQuaternion::set_w(proto_axis_speed, v10);
    }
  }
  else
  {
    v7 = std::get<0ul,Vector3,RouteAxisAngle,RouteAxisAngle>(&this->rotate_params);
    v8 = proto::RoutePoint::mutable_rotation(proto_route_point);
    Vector3::toClient(v7, v8);
  }
};

// Line 323: range 00000000131836E8-00000000131837AA
void __cdecl ArrayRoutePoint::toMonsterRoutePoint(
        const ArrayRoutePoint *const this,
        proto::RoutePoint *proto_route_point)
{
  unsigned __int64 v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(this->_vptr_RoutePoint + 2);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  (*(void (__fastcall **)(const ArrayRoutePoint *const, proto::RoutePoint *))v2)(this, proto_route_point);
  if ( *(_BYTE *)(((unsigned __int64)&this->has_reach_event >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_reach_event >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->has_reach_event);
  }
  proto::RoutePoint::set_has_reach_event(proto_route_point, this->has_reach_event);
};

// Line 329: range 00000000131837AC-000000001318424D
int32_t __cdecl ArrayRoutePoint::simulateTowardsThisPointByPositionAndRotation(
        const ArrayRoutePoint *const this,
        const PlatformRoute *route,
        const Transform *prev_transform,
        uint32_t *time_ms,
        Transform *result_transform)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::variant_alternative_t_6 *v8; // rax
  float *v9; // rdx
  uint32_t v10; // edi
  bool v11; // dl
  std::variant_alternative_t_5 *v12; // rax
  float *v13; // rdx
  uint32_t v14; // edi
  bool v15; // dl
  bool v16; // dl
  unsigned __int64 n; // rax
  __m128i angle_low; // xmm0
  uint32_t v19; // edi
  bool v20; // dl
  std::variant_alternative_t_2 *v21; // rax
  __int64 *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  float v25; // xmm1_4
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  int32_t result; // eax
  float velocity; // [rsp+3Ch] [rbp-F4h]
  float speed; // [rsp+40h] [rbp-F0h]
  float delta_angle; // [rsp+44h] [rbp-ECh]
  const RouteAxisAngle *axis_angle; // [rsp+48h] [rbp-E8h]
  common::milog::MiLogStream v42; // [rsp+50h] [rbp-E0h] BYREF
  char v43[192]; // [rsp+70h] [rbp-C0h] BYREF

  v5 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 32 16 14 axis_angle:364 64 16 6 q1:366 96 16 6 q2:367 128 16 5 q:368";
  *(_QWORD *)(v5 + 16) = ArrayRoutePoint::simulateTowardsThisPointByPositionAndRotation;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862722] = -219021312;
  v7[536862723] = -219021312;
  v7[536862724] = -202178560;
  if ( ((unsigned __int8)result_transform & 7) >= *(_BYTE *)(((unsigned __int64)result_transform >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)result_transform >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&result_transform->position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)result_transform + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&result_transform->position.z + 3) >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_store_n(result_transform, 12LL);
  }
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->position >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->position, 12LL);
  }
  result_transform->position = this->position;
  if ( std::variant<float,float,bool>::index(&this->move_params) )
  {
    if ( std::variant<float,float,bool>::index(&this->move_params) == 1 )
    {
      v12 = (std::variant_alternative_t_5 *)std::get<1ul,float,float,bool>(&this->move_params);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      v14 = (int)(float)(1000.0 * *v13);
      v15 = *(_BYTE *)(((unsigned __int64)time_ms >> 3) + 0x7FFF8000) != 0
         && (char)(((unsigned __int8)time_ms & 7) + 3) >= *(_BYTE *)(((unsigned __int64)time_ms >> 3) + 0x7FFF8000);
      if ( v15 )
      {
        v14 = (unsigned int)time_ms;
        __asan_report_store4(time_ms, ((unsigned __int8)time_ms & 7u) + 3, v15);
      }
      *time_ms = v14;
    }
    else
    {
      v16 = *(_BYTE *)(((unsigned __int64)time_ms >> 3) + 0x7FFF8000) != 0
         && (char)(((unsigned __int8)time_ms & 7) + 3) >= *(_BYTE *)(((unsigned __int64)time_ms >> 3) + 0x7FFF8000);
      if ( v16 )
        __asan_report_store4(time_ms, ((unsigned __int8)time_ms & 7u) + 3, v16);
      *time_ms = 0;
    }
  }
  else
  {
    v8 = (std::variant_alternative_t_6 *)std::get<0ul,float,float,bool>(&this->move_params);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    if ( *v9 != 0.0 )
    {
      velocity = *v9;
      v10 = (int)(float)((float)(getDistance(&prev_transform->position, &this->position) * 1000.0) / velocity);
      v11 = *(_BYTE *)(((unsigned __int64)time_ms >> 3) + 0x7FFF8000) != 0
         && (char)(((unsigned __int8)time_ms & 7) + 3) >= *(_BYTE *)(((unsigned __int64)time_ms >> 3) + 0x7FFF8000);
      if ( v11 )
      {
        v10 = (unsigned int)time_ms;
        __asan_report_store4(time_ms, ((unsigned __int8)time_ms & 7u) + 3, v11);
      }
      *time_ms = v10;
    }
  }
  if ( std::variant<Vector3,RouteAxisAngle,RouteAxisAngle>::index(&this->rotate_params) )
  {
    if ( std::variant<Vector3,RouteAxisAngle,RouteAxisAngle>::index(&this->rotate_params) == 1 )
    {
      axis_angle = std::get<1ul,Vector3,RouteAxisAngle,RouteAxisAngle>(&this->rotate_params);
      if ( (((unsigned __int8)result_transform + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&result_transform->rotation >> 3)
                                                                      + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&result_transform->rotation >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&result_transform->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)result_transform + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&result_transform->rotation.z
                                                                        + 3) >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_store_n(&result_transform->rotation, 12LL);
      }
      if ( ((unsigned __int8)axis_angle & 7) >= *(_BYTE *)(((unsigned __int64)axis_angle >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)axis_angle >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&axis_angle->axis.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)axis_angle + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&axis_angle->axis.z + 3) >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load_n(axis_angle, 12LL);
      }
      *(_QWORD *)&result_transform->rotation.x = *(_QWORD *)&axis_angle->axis.x;
      result_transform->rotation.z = axis_angle->axis.z;
      if ( *(_BYTE *)(((unsigned __int64)&axis_angle->angle >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)axis_angle + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&axis_angle->angle >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&axis_angle->angle);
      }
      angle_low = (__m128i)LODWORD(axis_angle->angle);
      speed = axis_angle->angle;
      *(float *)angle_low.m128i_i32 = Quaternion::calcDeltaRotation(
                                        &prev_transform->rotation,
                                        &result_transform->rotation);
      delta_angle = COERCE_FLOAT(_mm_cvtsi128_si32(angle_low));
      if ( speed != 0.0 )
      {
        v19 = (int)(float)((float)(1000.0 * delta_angle) / speed);
        v20 = *(_BYTE *)(((unsigned __int64)time_ms >> 3) + 0x7FFF8000) != 0
           && (char)(((unsigned __int8)time_ms & 7) + 3) >= *(_BYTE *)(((unsigned __int64)time_ms >> 3) + 0x7FFF8000);
        if ( v20 )
        {
          v19 = (unsigned int)time_ms;
          __asan_report_store4(time_ms, ((unsigned __int8)time_ms & 7u) + 3, v20);
        }
        *time_ms = v19;
      }
    }
    else if ( std::variant<Vector3,RouteAxisAngle,RouteAxisAngle>::index(&this->rotate_params) == 2 )
    {
      v21 = (std::variant_alternative_t_2 *)std::get<2ul,Vector3,RouteAxisAngle,RouteAxisAngle>(&this->rotate_params);
      v22 = (__int64 *)v21;
      if ( ((unsigned __int8)v21 & 7) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v21->angle + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v21 + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&v21->angle + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v21, 16LL);
      }
      v23 = *v22;
      v24 = v22[1];
      *(_QWORD *)(v5 + 32) = v23;
      *(_QWORD *)(v5 + 40) = v24;
      v25 = *(float *)(v5 + 44) * 0.001;
      if ( *(_BYTE *)(((unsigned __int64)time_ms >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)time_ms & 7) + 3) >= *(_BYTE *)(((unsigned __int64)time_ms >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(time_ms);
      }
      *(float *)(v5 + 44) = (float)(int)*time_ms * v25;
      *(Quaternion *)(v5 + 64) = Quaternion::fromRotation(&prev_transform->rotation);
      *(RouteAxisAngle *)(v5 + 128) = RouteAxisAngle::canonicalize((const RouteAxisAngle *const)(v5 + 32));
      *(Quaternion *)(v5 + 96) = Quaternion::fromAxisAngle((const RouteAxisAngle *)(v5 + 128));
      *(Quaternion *)(v5 + 128) = operator*((const Quaternion *)(v5 + 64), (const Quaternion *)(v5 + 96));
      Quaternion::toEuler((const Quaternion *const)(v5 + 128), &result_transform->rotation);
    }
  }
  else
  {
    n = (unsigned __int64)std::get<0ul,Vector3,RouteAxisAngle,RouteAxisAngle>(&this->rotate_params);
    if ( (((unsigned __int8)result_transform + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&result_transform->rotation >> 3)
                                                                    + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&result_transform->rotation >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&result_transform->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)result_transform + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&result_transform->rotation.z
                                                                      + 3) >> 3)
                                                                    + 0x7FFF8000) )
    {
      n = __asan_report_store_n(&result_transform->rotation, 12LL);
    }
    if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_load_n(n, 12LL);
    }
    *(_QWORD *)&result_transform->rotation.x = *(_QWORD *)n;
    result_transform->rotation.z = *(float *)(n + 8);
  }
  common::milog::MiLogStream::create(
    &v42,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/platform_route.cpp",
    "simulateTowardsThisPointByPositionAndRotation",
    372);
  v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v42, (const char (*)[13])"route_index:");
  v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &this->route_index);
  v28 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v27, (const char (*)[7])" prev:");
  v29 = operator<<(v28, prev_transform);
  v30 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v29, (const char (*)[10])" time_ms:");
  v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, time_ms);
  v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, (const char (*)[9])" result:");
  operator<<(v32, result_transform);
  common::milog::MiLogStream::~MiLogStream(&v42);
  result = 0;
  if ( v43 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 379: range 000000001318424E-00000000131851D7
__int64 __fastcall ArrayRoutePoint::simulateTowardsThisPointByTime(
        const ArrayRoutePoint *const this,
        const PlatformRoute *route,
        PlatformSimulateResult *prev_transform,
        const uint32_t time_ms,
        unsigned __int64 result,
        bool is_temp_route)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  uint32_t v10; // ecx
  float *p_angle; // rax
  std::variant_alternative_t_6 *v12; // rax
  float *v13; // rdx
  std::variant_alternative_t_5 *v14; // rax
  float *v15; // rdx
  char *v16; // rsi
  uint32_t *v17; // rax
  uint32_t *v18; // rdx
  uint32_t v19; // ecx
  char v20; // dl
  bool v21; // dl
  uint32_t v22; // eax
  float *v23; // rax
  float *v24; // rdx
  const Vector3 *v25; // rax
  Quaternion v26; // kr10_16
  unsigned __int64 v27; // xmm0_8
  const std::variant_alternative_t_3 *v28; // rax
  Quaternion v29; // kr30_16
  unsigned __int64 v30; // xmm0_8
  std::variant_alternative_t_2 *v31; // rax
  __int64 *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  uint32_t v35; // r14d
  const unsigned int *v36; // rax
  _DWORD *v37; // rdx
  __m128i v38; // xmm0
  Vector3 *p_position; // rsi
  PlatformSimulateResult *v40; // rdi
  __int64 v41; // rsi
  uint32_t point_id; // ecx
  char v43; // dl
  bool v44; // dl
  unsigned __int64 v45; // rax
  void (__fastcall *v46)(const ArrayRoutePoint *const, unsigned __int64, _QWORD); // r15
  uint32_t RouteId; // eax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  __int64 v59; // rax
  float __val; // [rsp+38h] [rbp-158h] BYREF
  float __lo; // [rsp+3Ch] [rbp-154h] BYREF
  unsigned int __a; // [rsp+40h] [rbp-150h] BYREF
  float pro; // [rsp+44h] [rbp-14Ch]
  float velocity; // [rsp+48h] [rbp-148h]
  float speed; // [rsp+4Ch] [rbp-144h]
  uint32_t rest_route_time; // [rsp+50h] [rbp-140h]
  float delta_time_ms; // [rsp+54h] [rbp-13Ch]
  const RouteAxisAngle *axis_angle; // [rsp+58h] [rbp-138h]
  common::milog::MiLogStream v75; // [rsp+60h] [rbp-130h] BYREF
  char v76[272]; // [rsp+80h] [rbp-110h] BYREF

  v6 = (unsigned __int64)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(224LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "7 48 4 21 cur_route_time_ms:380 64 4 18 old_route_time:406 80 4 11 time_ms:378 96 16 14 axis_ang"
                        "le:426 128 16 6 q1:429 160 16 6 q2:430 192 16 5 q:431";
  *(_QWORD *)(v6 + 16) = ArrayRoutePoint::simulateTowardsThisPointByTime;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -234556924;
  v8[536862723] = -219021312;
  v8[536862724] = -219021312;
  v8[536862725] = -219021312;
  v8[536862726] = -202178560;
  *(_DWORD *)(v6 + 80) = time_ms;
  if ( *(_BYTE *)(((result + 28) >> 3) + 0x7FFF8000) != 0
    && (char)(((result + 28) & 7) + 3) >= *(_BYTE *)(((result + 28) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(result + 28);
  }
  *(_DWORD *)(v6 + 48) = *(_DWORD *)(result + 28);
  if ( is_temp_route && PlatformRoute::getIsSimulateTempRouteByTime(route) )
  {
    if ( *(_BYTE *)(((result + 28) >> 3) + 0x7FFF8000) != 0
      && (char)(((result + 28) & 7) + 3) >= *(_BYTE *)(((result + 28) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(result + 28);
    }
    v10 = *(_DWORD *)(result + 28) + *(_DWORD *)(v6 + 80);
    if ( *(_BYTE *)(((result + 24) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((result + 24) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(result + 24);
    *(_DWORD *)(v6 + 48) = v10 + *(_DWORD *)(result + 24);
  }
  else if ( std::variant<Vector3,RouteAxisAngle,RouteAxisAngle>::index(&this->rotate_params) == 1 )
  {
    axis_angle = std::get<1ul,Vector3,RouteAxisAngle,RouteAxisAngle>(&this->rotate_params);
    p_angle = &axis_angle->angle;
    if ( *(_BYTE *)(((unsigned __int64)p_angle >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_angle & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_angle >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_angle);
    }
    speed = axis_angle->angle;
    if ( speed != 0.0 )
      *(_DWORD *)(v6 + 48) = (int)(float)((float)*(int *)(v6 + 48)
                                        + (float)((float)(Quaternion::calcDeltaRotation(
                                                            &prev_transform->rotation,
                                                            &axis_angle->axis)
                                                        * 1000.0)
                                                / speed));
  }
  else if ( std::variant<float,float,bool>::index(&this->move_params) )
  {
    if ( std::variant<float,float,bool>::index(&this->move_params) == 1 )
    {
      v14 = (std::variant_alternative_t_5 *)std::get<1ul,float,float,bool>(&this->move_params);
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      *(_DWORD *)(v6 + 48) = (int)(float)(1000.0 * *v15);
    }
  }
  else
  {
    v12 = (std::variant_alternative_t_6 *)std::get<0ul,float,float,bool>(&this->move_params);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    velocity = *v13;
    if ( velocity != 0.0 )
      *(_DWORD *)(v6 + 48) = (int)(float)((float)*(int *)(v6 + 48)
                                        + (float)((float)(getDistance(&prev_transform->position, &this->position)
                                                        * 1000.0)
                                                / velocity));
  }
  if ( *(_BYTE *)(((result + 28) >> 3) + 0x7FFF8000) != 0
    && (char)(((result + 28) & 7) + 3) >= *(_BYTE *)(((result + 28) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(result + 28);
  }
  *(_DWORD *)(v6 + 64) = *(_DWORD *)(result + 28);
  __a = *(_DWORD *)(result + 28) + *(_DWORD *)(v6 + 80);
  v16 = (char *)(v6 + 48);
  v17 = (uint32_t *)std::min<unsigned int>(&__a, (const unsigned int *)(v6 + 48));
  v18 = v17;
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v17);
  }
  v19 = *v18;
  v20 = *(_BYTE *)(((result + 28) >> 3) + 0x7FFF8000);
  LOBYTE(v16) = v20 != 0;
  v21 = v20 != 0 && (char)(((result + 28) & 7) + 3) >= v20;
  if ( v21 )
    __asan_report_store4(result + 28, v16, v21);
  *(_DWORD *)(result + 28) = v19;
  pro = 1.0;
  if ( *(_DWORD *)(v6 + 48) <= *(_DWORD *)(v6 + 64) )
    v22 = 0;
  else
    v22 = *(_DWORD *)(v6 + 48) - *(_DWORD *)(v6 + 64);
  rest_route_time = v22;
  if ( v22 )
  {
    __a = 1065353216;
    __lo = 0.0;
    __val = (float)*(int *)(v6 + 80) / (float)(int)rest_route_time;
    v23 = (float *)std::clamp<float>(&__val, &__lo, (const float *)&__a);
    v24 = v23;
    if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v23);
    }
    pro = *v24;
  }
  if ( !std::variant<Vector3,RouteAxisAngle,RouteAxisAngle>::index(&this->rotate_params) )
  {
    v25 = std::get<0ul,Vector3,RouteAxisAngle,RouteAxisAngle>(&this->rotate_params);
    *(Quaternion *)(v6 + 160) = Quaternion::fromRotation(v25);
    v26 = Quaternion::fromRotation(&prev_transform->rotation);
    *(Quaternion *)(v6 + 128) = v26;
    v27 = _mm_cvtsi32_si128(LODWORD(pro)).m128i_u64[0];
    RoutePoint::calcQuaternion((const Quaternion *)(v6 + 128), (const Quaternion *)(v6 + 160), *(float *)&v27);
    *(_QWORD *)(v6 + 192) = v27;
    *(_QWORD *)(v6 + 200) = *(_QWORD *)&v26.z;
    if ( (char)((result + 12) & 7) >= *(_BYTE *)(((result + 12) >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((result + 12) >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((result + 23) >> 3) + 0x7FFF8000) != 0
      && (char)((result + 23) & 7) >= *(_BYTE *)(((result + 23) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(result + 12, 12LL);
    }
    *(Vector3 *)(result + 12) = Quaternion::toEuler((const Quaternion *const)(v6 + 192));
  }
  if ( std::variant<Vector3,RouteAxisAngle,RouteAxisAngle>::index(&this->rotate_params) == 1 )
  {
    v28 = std::get<1ul,Vector3,RouteAxisAngle,RouteAxisAngle>(&this->rotate_params);
    *(Quaternion *)(v6 + 160) = Quaternion::fromRotation(&v28->axis);
    v29 = Quaternion::fromRotation(&prev_transform->rotation);
    *(Quaternion *)(v6 + 128) = v29;
    v30 = _mm_cvtsi32_si128(LODWORD(pro)).m128i_u64[0];
    RoutePoint::calcQuaternion((const Quaternion *)(v6 + 128), (const Quaternion *)(v6 + 160), *(float *)&v30);
    *(_QWORD *)(v6 + 192) = v30;
    *(_QWORD *)(v6 + 200) = *(_QWORD *)&v29.z;
    if ( (char)((result + 12) & 7) >= *(_BYTE *)(((result + 12) >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((result + 12) >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((result + 23) >> 3) + 0x7FFF8000) != 0
      && (char)((result + 23) & 7) >= *(_BYTE *)(((result + 23) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(result + 12, 12LL);
    }
    *(Vector3 *)(result + 12) = Quaternion::toEuler((const Quaternion *const)(v6 + 192));
  }
  else if ( std::variant<Vector3,RouteAxisAngle,RouteAxisAngle>::index(&this->rotate_params) == 2 )
  {
    v31 = (std::variant_alternative_t_2 *)std::get<2ul,Vector3,RouteAxisAngle,RouteAxisAngle>(&this->rotate_params);
    v32 = (__int64 *)v31;
    if ( ((unsigned __int8)v31 & 7) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v31->angle + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v31 + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&v31->angle + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v31, 16LL);
    }
    v33 = *v32;
    v34 = v32[1];
    *(_QWORD *)(v6 + 96) = v33;
    *(_QWORD *)(v6 + 104) = v34;
    if ( *(_BYTE *)(((result + 28) >> 3) + 0x7FFF8000) != 0
      && (char)(((result + 28) & 7) + 3) >= *(_BYTE *)(((result + 28) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(result + 28);
    }
    v35 = *(_DWORD *)(result + 28);
    v36 = std::min<unsigned int>((const unsigned int *)(result + 28), (const unsigned int *)(v6 + 64));
    v37 = v36;
    if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v36);
    }
    delta_time_ms = (float)(int)(v35 - *v37);
    v38 = (__m128i)0x3A83126Fu;
    *(float *)v38.m128i_i32 = std::fmod(0.001 * (float)(*(float *)(v6 + 108) * delta_time_ms), 360.0);
    *(_DWORD *)(v6 + 108) = _mm_cvtsi128_si32(v38);
    *(Quaternion *)(v6 + 128) = Quaternion::fromRotation(&prev_transform->rotation);
    *(Quaternion *)(v6 + 160) = Quaternion::fromAxisAngle((const RouteAxisAngle *)(v6 + 96));
    *(Quaternion *)(v6 + 192) = operator*((const Quaternion *)(v6 + 128), (const Quaternion *)(v6 + 160));
    Quaternion::toEuler((const Quaternion *const)(v6 + 192), (Vector3 *)(result + 12));
  }
  p_position = &this->position;
  v40 = prev_transform;
  if ( *(char *)((result >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((result + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((result + 11) & 7) >= *(_BYTE *)(((result + 11) >> 3) + 0x7FFF8000) )
  {
    p_position = (Vector3 *)12;
    v40 = (PlatformSimulateResult *)result;
    __asan_report_store_n(result, 12LL);
  }
  *(Vector3 *)result = interpolate(&v40->position, p_position, pro);
  if ( *(_BYTE *)(((result + 28) >> 3) + 0x7FFF8000) != 0
    && (char)(((result + 28) & 7) + 3) >= *(_BYTE *)(((result + 28) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(result + 28);
  }
  if ( *(_DWORD *)(result + 28) >= *(_DWORD *)(v6 + 48) )
  {
    v41 = (((_BYTE)this + 116) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->point_id);
    }
    point_id = this->point_id;
    v43 = *(_BYTE *)(((result + 60) >> 3) + 0x7FFF8000);
    LOBYTE(v41) = v43 != 0;
    v44 = v43 != 0 && (char)(((result + 60) & 7) + 3) >= v43;
    if ( v44 )
      __asan_report_store4(result + 60, v41, v44);
    *(_DWORD *)(result + 60) = point_id;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v45 = (unsigned __int64)(this->_vptr_RoutePoint + 7);
    if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
      v45 = __asan_report_load8();
    v46 = *(void (__fastcall **)(const ArrayRoutePoint *const, unsigned __int64, _QWORD))v45;
    RouteId = PlatformRoute::getRouteId(route);
    v46(this, result, RouteId);
  }
  common::milog::MiLogStream::create(
    &v75,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/platform_route.cpp",
    "simulateTowardsThisPointByTime",
    441);
  v48 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v75, (const char (*)[13])"route_index:");
  v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &this->route_index);
  v50 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v49, (const char (*)[7])" prev:");
  v51 = operator<<(v50, (const Transform *)prev_transform);
  v52 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v51, (const char (*)[10])" time_ms:");
  v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, (const unsigned int *)(v6 + 80));
  v54 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v53, (const char (*)[20])" cur_route_time_ms:");
  v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, (const unsigned int *)(v6 + 48));
  v56 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v55, (const char (*)[20])" result.route_time:");
  v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, (const unsigned int *)(result + 28));
  v58 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v57, (const char (*)[17])" old_route_time:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, (const unsigned int *)(v6 + 64));
  common::milog::MiLogStream::~MiLogStream(&v75);
  v59 = 0LL;
  if ( v76 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = -168430091;
  }
  return v59;
};

// Line 448: range 00000000131851D8-0000000013185236
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const PlatformRoute *route)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  unsigned int val[5]; // [rsp+1Ch] [rbp-14h] BYREF

  v2 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(stream, (const char (*)[11])"[route_id:");
  val[0] = PlatformRoute::getRouteId(route);
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, val);
  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v3, (const char (*)[2])"]");
  return stream;
};

// Line 454: range 0000000013185238-00000000131853F3
void __cdecl PlatformRoute::toClient(const PlatformRoute *const this, proto::Route *proto_route)
{
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rbx
  unsigned __int64 v3; // rax
  void (__fastcall *v4)(std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::RoutePoint *); // r12
  proto::RoutePoint *v5; // rax
  std::vector<std::shared_ptr<RoutePoint>>::const_iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::vector<std::shared_ptr<RoutePoint>>::const_iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  const std::vector<std::shared_ptr<RoutePoint>> *__for_range; // [rsp+20h] [rbp-40h]
  const RoutePointPtr *route_point_ptr; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  __for_range = &this->point_vec_;
  __for_begin._M_current = std::vector<std::shared_ptr<RoutePoint>>::begin(&this->point_vec_)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<RoutePoint>>::end(&this->point_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<RoutePoint> const*,std::vector<std::shared_ptr<RoutePoint>>>(
            &__for_begin,
            &__for_end) )
  {
    route_point_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<RoutePoint> const*,std::vector<std::shared_ptr<RoutePoint>>>::operator*(&__for_begin);
    if ( std::operator==<RoutePoint>(0LL, route_point_ptr) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/platform_route.cpp",
        "toClient",
        459);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v10, (const char (*)[20])"route point is null");
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    else
    {
      v2 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)route_point_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v3 = (unsigned __int64)(v2->_vptr_RoutePoint + 2);
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        v3 = __asan_report_load8();
      v4 = *(void (__fastcall **)(std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::RoutePoint *))v3;
      v5 = proto::Route::add_route_points(proto_route);
      v4(v2, v5);
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<RoutePoint> const*,std::vector<std::shared_ptr<RoutePoint>>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->type_);
  }
  proto::Route::set_route_type(proto_route, this->type_);
};

// Line 468: range 00000000131853F4-0000000013185649
void __cdecl PlatformRoute::toClient(const PlatformRoute *const this, proto::MonsterRoute *proto_monster_route)
{
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rbx
  unsigned __int64 v3; // rax
  void (__fastcall *v4)(std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::RoutePoint *); // r12
  proto::RoutePoint *v5; // rax
  std::vector<std::shared_ptr<RoutePoint>>::const_iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::vector<std::shared_ptr<RoutePoint>>::const_iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  const std::vector<std::shared_ptr<RoutePoint>> *__for_range; // [rsp+20h] [rbp-40h]
  const RoutePointPtr *route_point_ptr; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  __for_range = &this->point_vec_;
  __for_begin._M_current = std::vector<std::shared_ptr<RoutePoint>>::begin(&this->point_vec_)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<RoutePoint>>::end(&this->point_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<RoutePoint> const*,std::vector<std::shared_ptr<RoutePoint>>>(
            &__for_begin,
            &__for_end) )
  {
    route_point_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<RoutePoint> const*,std::vector<std::shared_ptr<RoutePoint>>>::operator*(&__for_begin);
    if ( std::operator==<RoutePoint>(0LL, route_point_ptr) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/platform_route.cpp",
        "toClient",
        473);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v10, (const char (*)[20])"route point is null");
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    else
    {
      v2 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)route_point_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v3 = (unsigned __int64)(v2->_vptr_RoutePoint + 3);
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        v3 = __asan_report_load8();
      v4 = *(void (__fastcall **)(std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, proto::RoutePoint *))v3;
      v5 = proto::MonsterRoute::add_route_points(proto_monster_route);
      v4(v2, v5);
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<RoutePoint> const*,std::vector<std::shared_ptr<RoutePoint>>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->speed_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->speed_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->speed_level_);
  }
  proto::MonsterRoute::set_speed_level(proto_monster_route, this->speed_level_);
  if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->type_);
  }
  proto::MonsterRoute::set_route_type(proto_monster_route, this->type_);
  if ( *(_BYTE *)(((unsigned __int64)&this->arrive_range_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->arrive_range_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->arrive_range_);
  }
  proto::MonsterRoute::set_arrive_range(proto_monster_route, this->arrive_range_);
};

// Line 485: range 000000001318564A-00000000131877ED
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlatformRoute::init(
        PlatformRoute *const this,
        const data::ConfigRoute *config_route,
        const Quaternion *rot_offset,
        const Vector3 *pos_offset,
        const Transform *current_transform)
{
  int32_t v5; // r14d
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  data::RouteType type; // ecx
  char v10; // al
  __int64 v11; // rsi
  bool is_simulate_temp_route_by_time; // cl
  char v13; // dl
  __int64 v14; // rdx
  data::RotType rot_type; // ecx
  char v16; // al
  __int64 v17; // rsi
  data::RotAngleType rot_angle_type; // ecx
  char v19; // dl
  bool v20; // dl
  __int64 v21; // rsi
  bool v22; // dl
  int v23; // r15d
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  char v27; // dl
  bool v28; // dl
  __int64 v29; // rsi
  int v30; // r15d
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rdx
  char v32; // cl
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  char v37; // dl
  bool v38; // dl
  __int64 v39; // rsi
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rdx
  char v41; // cl
  __int64 v42; // rsi
  bool rot_angle_same_stop; // r15
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rdx
  char v45; // cl
  __int64 v46; // rsi
  int32_t rot_round_reach_rounds; // r15d
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rdx
  char v49; // cl
  __int64 v50; // rsi
  int32_t rot_round_wait_rounds; // r15d
  __int64 v52; // rax
  char v53; // dl
  bool v54; // dl
  __int64 v55; // rsi
  bool has_reach_event; // r15
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rdx
  char v58; // cl
  __int64 v59; // rsi
  bool reach_stop; // r15
  __int64 v61; // rax
  char v62; // dl
  _BOOL8 v63; // rdx
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // rax
  common::milog::MiLogStream *v65; // r14
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rdx
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rdx
  common::milog::MiLogStream *v72; // rdx
  std::shared_ptr<RoutePoint> *M_current; // r14
  std::vector<std::shared_ptr<RoutePoint>>::iterator v74; // rax
  const std::shared_ptr<RoutePoint> *v75; // rax
  RoutePoint *v77; // r14
  const std::shared_ptr<RoutePoint> *v78; // rax
  std::vector<std::shared_ptr<RoutePoint>>::size_type v79; // r14
  unsigned __int64 v80; // r14
  const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *v81; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rdx
  const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *v88; // rax
  Vector3 *p_position; // r14
  const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *v90; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v91; // rax
  const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *v92; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v93; // rax
  int v94; // r14d
  const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *v95; // rax
  __int64 v96; // rax
  char v97; // dl
  std::vector<std::shared_ptr<RoutePoint>>::size_type v98; // rsi
  bool v99; // dl
  int v100; // r14d
  const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *v101; // rax
  __int64 v102; // rax
  char v103; // dl
  __int64 v104; // rsi
  bool v105; // dl
  size_t v106; // rax
  data::RotAngleType v107; // r15d
  data::RotType v108; // r14d
  const std::shared_ptr<RoutePoint> *v109; // rax
  const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *v110; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v111; // rcx
  RouteAxisAngle *p_axis_angle_wait_the_point; // rax
  __int64 v113; // rdx
  size_t v114; // r14
  data::RotAngleType v115; // r15d
  data::RotType v116; // r14d
  const std::shared_ptr<RoutePoint> *v117; // rax
  const std::shared_ptr<RoutePoint> *v118; // rax
  const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *v119; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v120; // rcx
  RouteAxisAngle *p_axis_angle_to_next_point; // rax
  __int64 v122; // rdx
  int v123; // eax
  const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *v124; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v125; // rdx
  uint32_t *p_wait_time; // rax
  uint32_t wait_time; // r14d
  const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *v128; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v129; // rax
  uint32_t v130; // ecx
  const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *v131; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v132; // rax
  const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *v133; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v134; // rax
  float v135; // xmm1_4
  const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *v136; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v137; // rdx
  uint32_t *v138; // rax
  uint32_t v139; // r14d
  const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *v140; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v141; // rax
  uint32_t v142; // ecx
  const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *v143; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v144; // rax
  const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *v145; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v146; // rax
  float v147; // xmm1_4
  int32_t result; // eax
  float target_velocity; // [rsp+14h] [rbp-1FCh]
  float rot_angle_wait_speed; // [rsp+14h] [rbp-1FCh]
  float rot_angle_move_speed; // [rsp+14h] [rbp-1FCh]
  float v152; // [rsp+14h] [rbp-1FCh]
  float angle; // [rsp+14h] [rbp-1FCh]
  float v154; // [rsp+14h] [rbp-1FCh]
  const data::ConfigRoute *config_routea; // [rsp+30h] [rbp-1E0h]
  int i; // [rsp+40h] [rbp-1D0h]
  uint32_t i_1; // [rsp+44h] [rbp-1CCh]
  uint32_t i_2; // [rsp+48h] [rbp-1C8h]
  std::vector<data::ConfigWaypoint>::const_iterator __for_begin; // [rsp+50h] [rbp-1C0h] BYREF
  std::vector<data::ConfigWaypoint>::const_iterator __for_end; // [rsp+58h] [rbp-1B8h] BYREF
  size_t i_0; // [rsp+60h] [rbp-1B0h]
  const std::vector<data::ConfigWaypoint> *__for_range; // [rsp+68h] [rbp-1A8h]
  size_t n; // [rsp+70h] [rbp-1A0h]
  const data::ConfigWaypoint *config_point; // [rsp+78h] [rbp-198h]
  Vector3 vec; // [rsp+84h] [rbp-18Ch] BYREF
  Vector3 right; // [rsp+90h] [rbp-180h] BYREF
  Vector3 v170; // [rsp+9Ch] [rbp-174h]
  Vector3 v171; // [rsp+A8h] [rbp-168h]
  Vector3 v172; // [rsp+B4h] [rbp-15Ch]
  std::shared_ptr<RoutePoint> p_from_point_ptr; // [rsp+C0h] [rbp-150h] BYREF
  Quaternion v174; // [rsp+D0h] [rbp-140h] BYREF
  common::milog::MiLogStream v175; // [rsp+E0h] [rbp-130h] BYREF
  common::milog::MiLogStream v176; // [rsp+100h] [rbp-110h] BYREF
  char v177[240]; // [rsp+120h] [rbp-F0h] BYREF

  config_routea = config_route;
  v6 = (unsigned __int64)v177;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 32 4 5 i:554 48 4 5 n:556 64 16 13 point_ptr:495 96 16 13 point_ptr:544 128 24 25 event_point_index_vec:553";
  *(_QWORD *)(v6 + 16) = PlatformRoute::init;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -219021312;
  v8[536862723] = -219021312;
  v8[536862724] = -218103808;
  v8[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&config_route->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_route->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_route->type);
  }
  type = config_route->type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(config_route) = v10 != 0;
    __asan_report_store4(&this->type_, config_route, (_BYTE)this + 24);
  }
  this->type_ = type;
  v11 = ((_BYTE)config_routea + 84) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&config_routea->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000) != 0
    && (char)v11 >= *(_BYTE *)(((unsigned __int64)&config_routea->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&config_routea->is_simulate_temp_route_by_time);
  }
  is_simulate_temp_route_by_time = config_routea->is_simulate_temp_route_by_time;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_simulate_temp_route_by_time_ >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 29) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_simulate_temp_route_by_time_, v11, v14);
  this->is_simulate_temp_route_by_time_ = is_simulate_temp_route_by_time;
  if ( *(_BYTE *)(((unsigned __int64)&config_routea->rot_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_routea->rot_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_routea->rot_type);
  }
  rot_type = config_routea->rot_type;
  v16 = *(_BYTE *)(((unsigned __int64)&this->rot_type_ >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v11) = v16 != 0;
    __asan_report_store4(&this->rot_type_, v11, (_BYTE)this + 32);
  }
  this->rot_type_ = rot_type;
  v17 = (((_BYTE)config_routea + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&config_routea->rot_angle_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_routea + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_routea->rot_angle_type >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&config_routea->rot_angle_type);
  }
  rot_angle_type = config_routea->rot_angle_type;
  v19 = *(_BYTE *)(((unsigned __int64)&this->rot_angle_type_ >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v19 != 0;
  v20 = v19 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v19;
  if ( v20 )
    __asan_report_store4(&this->rot_angle_type_, v17, v20);
  this->rot_angle_type_ = rot_angle_type;
  v21 = (((_BYTE)this + 52) & 7u) + 3;
  v22 = *(_BYTE *)(((unsigned __int64)&this->total_time_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_time_ >> 3) + 0x7FFF8000);
  if ( v22 )
    __asan_report_store4(&this->total_time_, v21, v22);
  this->total_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rot_total_angle_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rot_total_angle_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rot_total_angle_, v21, (_BYTE)this + 56);
  }
  this->rot_total_angle_ = 0.0;
  __for_range = &config_routea->points;
  __for_begin._M_current = std::vector<data::ConfigWaypoint>::begin(&config_routea->points)._M_current;
  __for_end._M_current = std::vector<data::ConfigWaypoint>::end(&config_routea->points)._M_current;
  while ( __gnu_cxx::operator!=<data::ConfigWaypoint const*,std::vector<data::ConfigWaypoint>>(&__for_begin, &__for_end) )
  {
    config_point = __gnu_cxx::__normal_iterator<data::ConfigWaypoint const*,std::vector<data::ConfigWaypoint>>::operator*(&__for_begin);
    common::tools::perf::make_shared<RoutePoint>();
    if ( std::operator==<RoutePoint>((const std::shared_ptr<RoutePoint> *)(v6 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v176,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/platform_route.cpp",
        "init",
        498);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v176, (const char (*)[18])"point_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v176);
      v5 = -1;
      v23 = 0;
    }
    else
    {
      Vector3::Vector3(&vec, &config_point->pos);
      right = Quaternion::rotateVector3(rot_offset, &vec);
      v170 = operator+(pos_offset, &right);
      v24 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      if ( (((unsigned __int8)v24 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&v24->position >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&v24->position >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v24->position.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v24 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&v24->position.z + 3) >> 3) + 0x7FFF8000) )
      {
        v24 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&v24->position, 12LL);
      }
      v24->position = v170;
      v25 = (((_BYTE)config_point + 44) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config_point->target_velocity >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_point + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_point->target_velocity >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&config_point->target_velocity);
      }
      target_velocity = config_point->target_velocity;
      v26 = (__int64)std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      v27 = *(_BYTE *)(((unsigned __int64)(v26 + 24) >> 3) + 0x7FFF8000);
      LOBYTE(v25) = v27 != 0;
      v28 = v27 != 0 && v27 <= 3;
      if ( v28 )
        v26 = __asan_report_store4(v26 + 24, v25, v28);
      *(float *)(v26 + 24) = target_velocity;
      v29 = (((_BYTE)config_point + 16) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config_point->wait_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_point + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_point->wait_time >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&config_point->wait_time);
      }
      v30 = (int)(float)(1000.0 * config_point->wait_time);
      v31 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      v32 = *(_BYTE *)(((unsigned __int64)&v31->wait_time >> 3) + 0x7FFF8000);
      if ( v32 != 0 && (char)((((_BYTE)v31 + 28) & 7) + 3) >= v32 )
      {
        LOBYTE(v29) = v32 != 0;
        __asan_report_store4(&v31->wait_time, v29, (_BYTE)v31);
      }
      v31->wait_time = v30;
      if ( *(_BYTE *)(((unsigned __int64)&this->rot_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->rot_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->rot_type_);
      }
      if ( this->rot_type_ )
      {
        Vector3::Vector3(&right, &config_point->rot_round_reach_dir);
      }
      else
      {
        if ( (((unsigned __int8)current_transform + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&current_transform->rotation >> 3)
                                                                         + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&current_transform->rotation >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&current_transform->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)current_transform + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&current_transform->rotation.z
                                                                           + 3) >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load_n(&current_transform->rotation, 12LL);
        }
        right = current_transform->rotation;
      }
      *(Quaternion *)(v6 + 96) = Quaternion::fromRotation(&right);
      v174 = operator*(rot_offset, (const Quaternion *)(v6 + 96));
      v171 = Quaternion::toEuler(&v174);
      v33 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      if ( *(char *)(((unsigned __int64)&v33->rotation >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v33->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v33 + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&v33->rotation.z + 3) >> 3) + 0x7FFF8000) )
      {
        v33 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&v33->rotation, 12LL);
      }
      v33->rotation = v171;
      if ( *(_BYTE *)(((unsigned __int64)&this->rot_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->rot_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->rot_type_);
      }
      if ( this->rot_type_ )
      {
        Vector3::Vector3(&right, &config_point->rot_round_leave_dir);
      }
      else
      {
        if ( (((unsigned __int8)current_transform + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&current_transform->rotation >> 3)
                                                                         + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&current_transform->rotation >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&current_transform->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)current_transform + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&current_transform->rotation.z
                                                                           + 3) >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load_n(&current_transform->rotation, 12LL);
        }
        right = current_transform->rotation;
      }
      *(Quaternion *)(v6 + 96) = Quaternion::fromRotation(&right);
      v174 = operator*(rot_offset, (const Quaternion *)(v6 + 96));
      v172 = Quaternion::toEuler(&v174);
      v34 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      if ( (((unsigned __int8)v34 + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&v34->dir_leave_the_point >> 3)
                                                         + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&v34->dir_leave_the_point >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v34->dir_leave_the_point.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v34 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v34->dir_leave_the_point.z + 3) >> 3)
                                                         + 0x7FFF8000) )
      {
        v34 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&v34->dir_leave_the_point, 12LL);
      }
      v34->dir_leave_the_point = v172;
      v35 = (((_BYTE)config_point + 56) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config_point->rot_angle_wait_speed >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_point + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_point->rot_angle_wait_speed >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&config_point->rot_angle_wait_speed);
      }
      rot_angle_wait_speed = config_point->rot_angle_wait_speed;
      v36 = (__int64)std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      v37 = *(_BYTE *)(((unsigned __int64)(v36 + 72) >> 3) + 0x7FFF8000);
      LOBYTE(v35) = v37 != 0;
      v38 = v37 != 0 && v37 <= 3;
      if ( v38 )
        v36 = __asan_report_store4(v36 + 72, v35, v38);
      *(float *)(v36 + 72) = rot_angle_wait_speed;
      v39 = (((_BYTE)config_point + 52) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config_point->rot_angle_move_speed >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_point + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_point->rot_angle_move_speed >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&config_point->rot_angle_move_speed);
      }
      rot_angle_move_speed = config_point->rot_angle_move_speed;
      v40 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      v41 = *(_BYTE *)(((unsigned __int64)&v40->rot_angle_move_speed >> 3) + 0x7FFF8000);
      if ( v41 != 0 && (char)((((_BYTE)v40 + 68) & 7) + 3) >= v41 )
      {
        LOBYTE(v39) = v41 != 0;
        __asan_report_store4(&v40->rot_angle_move_speed, v39, (_BYTE)v40);
      }
      v40->rot_angle_move_speed = rot_angle_move_speed;
      v42 = ((_BYTE)config_point + 60) & 7;
      if ( *(_BYTE *)(((unsigned __int64)&config_point->rot_angle_same_stop >> 3) + 0x7FFF8000) != 0
        && (char)v42 >= *(_BYTE *)(((unsigned __int64)&config_point->rot_angle_same_stop >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&config_point->rot_angle_same_stop);
      }
      rot_angle_same_stop = config_point->rot_angle_same_stop;
      v44 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      v45 = *(_BYTE *)(((unsigned __int64)&v44->rot_angle_same_stop >> 3) + 0x7FFF8000);
      if ( v45 != 0 && (((unsigned __int8)v44 + 65) & 7) >= v45 )
      {
        LOBYTE(v42) = v45 != 0;
        __asan_report_store1(&v44->rot_angle_same_stop, v42, v44);
      }
      v44->rot_angle_same_stop = rot_angle_same_stop;
      v46 = (((_BYTE)config_point + 80) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config_point->rot_round_reach_rounds >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_point + 80) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_point->rot_round_reach_rounds >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&config_point->rot_round_reach_rounds);
      }
      rot_round_reach_rounds = config_point->rot_round_reach_rounds;
      v48 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      v49 = *(_BYTE *)(((unsigned __int64)&v48->rot_round_reach_rounds >> 3) + 0x7FFF8000);
      if ( v49 != 0 && (char)((((_BYTE)v48 + 76) & 7) + 3) >= v49 )
      {
        LOBYTE(v46) = v49 != 0;
        __asan_report_store4(&v48->rot_round_reach_rounds, v46, (_BYTE)v48);
      }
      v48->rot_round_reach_rounds = rot_round_reach_rounds;
      v50 = (((_BYTE)config_point + 100) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&config_point->rot_round_wait_rounds >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_point + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_point->rot_round_wait_rounds >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&config_point->rot_round_wait_rounds);
      }
      rot_round_wait_rounds = config_point->rot_round_wait_rounds;
      v52 = (__int64)std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      v53 = *(_BYTE *)(((unsigned __int64)(v52 + 80) >> 3) + 0x7FFF8000);
      LOBYTE(v50) = v53 != 0;
      v54 = v53 != 0 && v53 <= 3;
      if ( v54 )
        v52 = __asan_report_store4(v52 + 80, v50, v54);
      *(_DWORD *)(v52 + 80) = rot_round_wait_rounds;
      v55 = ((_BYTE)config_point + 48) & 7;
      if ( *(_BYTE *)(((unsigned __int64)&config_point->has_reach_event >> 3) + 0x7FFF8000) != 0
        && (char)v55 >= *(_BYTE *)(((unsigned __int64)&config_point->has_reach_event >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&config_point->has_reach_event);
      }
      has_reach_event = config_point->has_reach_event;
      v57 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      v58 = *(_BYTE *)(((unsigned __int64)&v57->has_reach_event >> 3) + 0x7FFF8000);
      if ( v58 != 0 && (((unsigned __int8)v57 + 36) & 7) >= v58 )
      {
        LOBYTE(v55) = v58 != 0;
        __asan_report_store1(&v57->has_reach_event, v55, v57);
      }
      v57->has_reach_event = has_reach_event;
      v59 = ((_BYTE)config_point + 104) & 7;
      if ( *(_BYTE *)(((unsigned __int64)&config_point->reach_stop >> 3) + 0x7FFF8000) != 0
        && (char)v59 >= *(_BYTE *)(((unsigned __int64)&config_point->reach_stop >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&config_point->reach_stop);
      }
      reach_stop = config_point->reach_stop;
      v61 = (__int64)std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      v62 = *(_BYTE *)(((unsigned __int64)(v61 + 64) >> 3) + 0x7FFF8000);
      LOBYTE(v59) = v62 != 0;
      v63 = v62 < 0;
      if ( v63 )
        v61 = __asan_report_store1(v61 + 64, v59, v63);
      *(_BYTE *)(v61 + 64) = reach_stop;
      v64 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v64->target_velocity >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v64->target_velocity >> 3) + 0x7FFF8000) <= 3 )
      {
        v64 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v64->target_velocity);
      }
      if ( v64->target_velocity >= 0.00000011920929 )
      {
        v69 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
        if ( RoutePoint::hasReachTrigger(v69) )
        {
          v70 = ((_BYTE)this + 28) & 7;
          v71 = (*(_BYTE *)(((unsigned __int64)&this->has_reach_trigger_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v70 >= *(_BYTE *)(((unsigned __int64)&this->has_reach_trigger_ >> 3) + 0x7FFF8000));
          if ( (_BYTE)v71 )
            __asan_report_store1(&this->has_reach_trigger_, v70, v71);
          this->has_reach_trigger_ = 1;
        }
        std::vector<std::shared_ptr<RoutePoint>>::push_back(
          &this->point_vec_,
          (const std::vector<std::shared_ptr<RoutePoint>>::value_type *)(v6 + 64));
        v23 = 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v175,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/platform_route.cpp",
          "init",
          517);
        v65 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v175,
                (const char (*)[35])"invalid target_velocity, position:");
        v66 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 64));
        Vector3::toString[abi:cxx11]((std::string *)&v176, &v66->position);
        v67 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v65, (const std::string *)&v176);
        v68 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v67, (const char (*)[12])", route_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, &config_routea->local_id);
        std::string::~string(&v176);
        common::milog::MiLogStream::~MiLogStream(&v175);
        v5 = -1;
        v23 = 0;
      }
    }
    std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)(v6 + 64));
    if ( v23 != 1 )
      goto LABEL_182;
    __gnu_cxx::__normal_iterator<data::ConfigWaypoint const*,std::vector<data::ConfigWaypoint>>::operator++(&__for_begin);
  }
  if ( std::vector<std::shared_ptr<RoutePoint>>::empty(&this->point_vec_) )
  {
    common::milog::MiLogStream::create(
      &v176,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/platform_route.cpp",
      "init",
      528);
    v72 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(&v176, (const char (*)[36])byte_24F57500);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, &config_routea->local_id);
    common::milog::MiLogStream::~MiLogStream(&v176);
    v5 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_routea->is_forward >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)config_routea + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&config_routea->is_forward >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load1(&config_routea->is_forward);
    }
    if ( !config_routea->is_forward )
    {
      M_current = std::vector<std::shared_ptr<RoutePoint>>::end(&this->point_vec_)._M_current;
      v74._M_current = std::vector<std::shared_ptr<RoutePoint>>::begin(&this->point_vec_)._M_current;
      std::reverse<__gnu_cxx::__normal_iterator<std::shared_ptr<RoutePoint> *,std::vector<std::shared_ptr<RoutePoint>>>>(
        v74,
        (__gnu_cxx::__normal_iterator<std::shared_ptr<RoutePoint>*,std::vector<std::shared_ptr<RoutePoint>> >)M_current);
    }
    if ( *(_BYTE *)(((unsigned __int64)&config_routea->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_routea->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_routea->type);
    }
    if ( config_routea->type == Reciprocate )
    {
      for ( i = std::vector<std::shared_ptr<RoutePoint>>::size(&this->point_vec_) - 2; i > 0; --i )
      {
        if ( i < std::vector<std::shared_ptr<RoutePoint>>::size(&this->point_vec_) )
        {
          v75 = std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, i);
          if ( !std::operator==<RoutePoint>(v75, 0LL) )
          {
            common::tools::perf::make_shared<RoutePoint>();
            if ( !std::operator==<RoutePoint>((const std::shared_ptr<RoutePoint> *)(v6 + 96), 0LL) )
            {
              v77 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
              v78 = std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, i);
              std::shared_ptr<RoutePoint>::shared_ptr((std::shared_ptr<RoutePoint> *const)&v174, v78);
              RoutePoint::fromOtherPoint(v77, (std::shared_ptr<RoutePoint> *)&v174);
              std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)&v174);
              std::vector<std::shared_ptr<RoutePoint>>::push_back(
                &this->point_vec_,
                (const std::vector<std::shared_ptr<RoutePoint>>::value_type *)(v6 + 96));
            }
            std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)(v6 + 96));
          }
        }
      }
    }
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v6 + 128));
    for ( *(_DWORD *)(v6 + 32) = 0; ; ++*(_DWORD *)(v6 + 32) )
    {
      v79 = *(int *)(v6 + 32);
      if ( v79 >= std::vector<std::shared_ptr<RoutePoint>>::size(&this->point_vec_) )
        break;
      v80 = *(_DWORD *)(v6 + 32) + 1;
      *(_DWORD *)(v6 + 48) = v80 % std::vector<std::shared_ptr<RoutePoint>>::size(&this->point_vec_);
      v81 = (const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<RoutePoint>>::operator[](
                                                                                                   &this->point_vec_,
                                                                                                   *(int *)(v6 + 48));
      v82 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v81);
      if ( *(_BYTE *)(((unsigned __int64)&v82->target_velocity >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v82->target_velocity >> 3) + 0x7FFF8000) <= 3 )
      {
        v82 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v82->target_velocity);
      }
      if ( v82->target_velocity < 0.00000011920929 )
      {
        common::milog::MiLogStream::create(
          &v176,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/platform_route.cpp",
          "init",
          561);
        v83 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v176,
                (const char (*)[28])"invalid target_velocity, i:");
        v84 = common::milog::MiLogStream::operator<<<int,(int *)0>(v83, (const int *)(v6 + 32));
        v85 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v84, (const char (*)[5])", n:");
        v86 = common::milog::MiLogStream::operator<<<int,(int *)0>(v85, (const int *)(v6 + 48));
        v87 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v86, (const char (*)[12])", route_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v87, &config_routea->local_id);
        common::milog::MiLogStream::~MiLogStream(&v176);
        v5 = -1;
        goto LABEL_181;
      }
      v88 = (const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<RoutePoint>>::operator[](
                                                                                                   &this->point_vec_,
                                                                                                   *(int *)(v6 + 48));
      p_position = &std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v88)->position;
      v90 = (const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<RoutePoint>>::operator[](
                                                                                                   &this->point_vec_,
                                                                                                   *(int *)(v6 + 32));
      v91 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v90);
      v152 = getDistance(&v91->position, p_position) * 1000.0;
      v92 = (const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<RoutePoint>>::operator[](
                                                                                                   &this->point_vec_,
                                                                                                   *(int *)(v6 + 48));
      v93 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v92);
      if ( *(_BYTE *)(((unsigned __int64)&v93->target_velocity >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v93->target_velocity >> 3) + 0x7FFF8000) <= 3 )
      {
        v93 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v93->target_velocity);
      }
      v94 = (int)(float)(v152 / v93->target_velocity);
      v98 = *(int *)(v6 + 32);
      v95 = (const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<RoutePoint>>::operator[](
                                                                                                   &this->point_vec_,
                                                                                                   v98);
      v96 = (__int64)std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v95);
      v97 = *(_BYTE *)(((unsigned __int64)(v96 + 32) >> 3) + 0x7FFF8000);
      LOBYTE(v98) = v97 != 0;
      v99 = v97 != 0 && v97 <= 3;
      if ( v99 )
        v96 = __asan_report_store4(v96 + 32, v98, v99);
      *(_DWORD *)(v96 + 32) = v94;
      v100 = *(_DWORD *)(v6 + 32);
      v104 = v100;
      v101 = (const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<RoutePoint>>::operator[](
                                                                                                    &this->point_vec_,
                                                                                                    v100);
      v102 = (__int64)std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v101);
      v103 = *(_BYTE *)(((unsigned __int64)(v102 + 8) >> 3) + 0x7FFF8000);
      LOBYTE(v104) = v103 != 0;
      v105 = v103 != 0 && v103 <= 3;
      if ( v105 )
        v102 = __asan_report_store4(v102 + 8, v104, v105);
      *(_DWORD *)(v102 + 8) = v100;
    }
    for ( i_0 = 0LL; ; ++i_0 )
    {
      v106 = std::vector<std::shared_ptr<RoutePoint>>::size(&this->point_vec_);
      if ( i_0 >= v106 )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&config_routea->rot_angle_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_routea + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_routea->rot_angle_type >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&config_routea->rot_angle_type);
      }
      v107 = config_routea->rot_angle_type;
      if ( *(_BYTE *)(((unsigned __int64)&config_routea->rot_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_routea->rot_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_routea->rot_type);
      }
      v108 = config_routea->rot_type;
      v109 = std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, i_0);
      std::shared_ptr<RoutePoint>::shared_ptr((std::shared_ptr<RoutePoint> *const)(v6 + 64), v109);
      *(RouteAxisAngle *)(v6 + 96) = RoutePoint::calcAxisAngleWait((RoutePointPtr *)(v6 + 64), v108, v107);
      v110 = (const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<RoutePoint>>::operator[](
                                                                                                    &this->point_vec_,
                                                                                                    i_0);
      v111 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v110);
      p_axis_angle_wait_the_point = &v111->axis_angle_wait_the_point;
      if ( ((unsigned __int8)p_axis_angle_wait_the_point & 7) >= *(_BYTE *)(((unsigned __int64)p_axis_angle_wait_the_point >> 3)
                                                                          + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)p_axis_angle_wait_the_point >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&p_axis_angle_wait_the_point->angle + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)p_axis_angle_wait_the_point + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&p_axis_angle_wait_the_point->angle
                                                                                   + 3) >> 3)
                                                                                 + 0x7FFF8000) )
      {
        __asan_report_store_n(p_axis_angle_wait_the_point, 16LL);
      }
      v113 = *(_QWORD *)(v6 + 104);
      *(_QWORD *)&v111->axis_angle_wait_the_point.axis.x = *(_QWORD *)(v6 + 96);
      *(_QWORD *)&v111->axis_angle_wait_the_point.axis.z = v113;
      std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)(v6 + 64));
      v114 = i_0 + 1;
      n = v114 % std::vector<std::shared_ptr<RoutePoint>>::size(&this->point_vec_);
      if ( i_0 != n )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_routea->rot_angle_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config_routea + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_routea->rot_angle_type >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&config_routea->rot_angle_type);
        }
        v115 = config_routea->rot_angle_type;
        if ( *(_BYTE *)(((unsigned __int64)&config_routea->rot_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_routea->rot_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_routea->rot_type);
        }
        v116 = config_routea->rot_type;
        v117 = std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, n);
        std::shared_ptr<RoutePoint>::shared_ptr((std::shared_ptr<RoutePoint> *const)(v6 + 64), v117);
        v118 = std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, i_0);
        std::shared_ptr<RoutePoint>::shared_ptr(&p_from_point_ptr, v118);
        v174 = (Quaternion)RoutePoint::calcAxisAngleMove(&p_from_point_ptr, (RoutePointPtr *)(v6 + 64), v116, v115);
        v119 = (const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, i_0);
        v120 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v119);
        p_axis_angle_to_next_point = &v120->axis_angle_to_next_point;
        if ( ((unsigned __int8)p_axis_angle_to_next_point & 7) >= *(_BYTE *)(((unsigned __int64)p_axis_angle_to_next_point >> 3)
                                                                           + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)p_axis_angle_to_next_point >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&p_axis_angle_to_next_point->angle + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)p_axis_angle_to_next_point + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&p_axis_angle_to_next_point->angle
                                                                                    + 3) >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_store_n(p_axis_angle_to_next_point, 16LL);
        }
        v122 = *(_QWORD *)&v174.z;
        *(_QWORD *)&v120->axis_angle_to_next_point.axis.x = *(_QWORD *)&v174.x;
        *(_QWORD *)&v120->axis_angle_to_next_point.axis.z = v122;
        std::shared_ptr<RoutePoint>::~shared_ptr(&p_from_point_ptr);
        std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)(v6 + 64));
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&config_routea->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_routea->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_routea->type);
    }
    v123 = config_routea->type;
    if ( v123 )
    {
      if ( v123 >= 0 && (unsigned int)(v123 - 1) <= 1 )
      {
        for ( i_1 = 0; i_1 < std::vector<std::shared_ptr<RoutePoint>>::size(&this->point_vec_); ++i_1 )
        {
          v124 = (const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, i_1);
          v125 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v124);
          p_wait_time = &v125->wait_time;
          if ( *(_BYTE *)(((unsigned __int64)p_wait_time >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_wait_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_wait_time >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(p_wait_time);
          }
          wait_time = v125->wait_time;
          v128 = (const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, i_1);
          v129 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v128);
          if ( *(_BYTE *)(((unsigned __int64)&v129->time_to_next_point >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v129->time_to_next_point >> 3) + 0x7FFF8000) <= 3 )
          {
            v129 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v129->time_to_next_point);
          }
          v130 = wait_time + v129->time_to_next_point;
          if ( *(_BYTE *)(((unsigned __int64)&this->total_time_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_time_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->total_time_);
          }
          this->total_time_ += v130;
          v131 = (const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, i_1);
          v132 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v131);
          if ( *(_BYTE *)(((unsigned __int64)&v132->axis_angle_wait_the_point.angle >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v132->axis_angle_wait_the_point.angle >> 3) + 0x7FFF8000) <= 3 )
          {
            v132 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v132->axis_angle_wait_the_point.angle);
          }
          angle = v132->axis_angle_wait_the_point.angle;
          v133 = (const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, i_1);
          v134 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v133);
          if ( *(_BYTE *)(((unsigned __int64)&v134->axis_angle_to_next_point.angle >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v134->axis_angle_to_next_point.angle >> 3) + 0x7FFF8000) <= 3 )
          {
            v134 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v134->axis_angle_to_next_point.angle);
          }
          v135 = angle + v134->axis_angle_to_next_point.angle;
          if ( *(_BYTE *)(((unsigned __int64)&this->rot_total_angle_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->rot_total_angle_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->rot_total_angle_);
          }
          this->rot_total_angle_ = this->rot_total_angle_ + v135;
        }
      }
    }
    else
    {
      for ( i_2 = 0; i_2 < std::vector<std::shared_ptr<RoutePoint>>::size(&this->point_vec_) - 1; ++i_2 )
      {
        v136 = (const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, i_2);
        v137 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v136);
        v138 = &v137->wait_time;
        if ( *(_BYTE *)(((unsigned __int64)v138 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v138 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v138 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v138);
        }
        v139 = v137->wait_time;
        v140 = (const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, i_2);
        v141 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v140);
        if ( *(_BYTE *)(((unsigned __int64)&v141->time_to_next_point >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v141->time_to_next_point >> 3) + 0x7FFF8000) <= 3 )
        {
          v141 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v141->time_to_next_point);
        }
        v142 = v139 + v141->time_to_next_point;
        if ( *(_BYTE *)(((unsigned __int64)&this->total_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_time_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->total_time_);
        }
        this->total_time_ += v142;
        v143 = (const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, i_2);
        v144 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v143);
        if ( *(_BYTE *)(((unsigned __int64)&v144->axis_angle_wait_the_point.angle >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v144->axis_angle_wait_the_point.angle >> 3) + 0x7FFF8000) <= 3 )
        {
          v144 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v144->axis_angle_wait_the_point.angle);
        }
        v154 = v144->axis_angle_wait_the_point.angle;
        v145 = (const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, i_2);
        v146 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v145);
        if ( *(_BYTE *)(((unsigned __int64)&v146->axis_angle_to_next_point.angle >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v146->axis_angle_to_next_point.angle >> 3) + 0x7FFF8000) <= 3 )
        {
          v146 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v146->axis_angle_to_next_point.angle);
        }
        v147 = v154 + v146->axis_angle_to_next_point.angle;
        if ( *(_BYTE *)(((unsigned __int64)&this->rot_total_angle_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->rot_total_angle_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->rot_total_angle_);
        }
        this->rot_total_angle_ = this->rot_total_angle_ + v147;
      }
    }
    v5 = 0;
LABEL_181:
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v6 + 128));
  }
LABEL_182:
  result = v5;
  if ( v177 == (char *)v6 )
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
  return result;
};

// Line 603: range 00000000131877EE-0000000013189A0B
int32_t __cdecl PlatformRoute::initByPointArray(PlatformRoute *const this, const PlatformRouteParam *param)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t point_array_id; // ecx
  char v7; // dl
  bool v8; // dl
  data::RouteType route_type; // ecx
  char v10; // al
  __int64 v11; // rsi
  bool is_simulate_temp_route_by_time; // cl
  char v13; // dl
  __int64 v14; // rdx
  data::RouteRecordMode record_mode; // ecx
  char v16; // al
  uint32_t speed_level; // ecx
  char v18; // dl
  bool v19; // dl
  float arrive_range; // xmm0_4
  std::vector<data::ConfigPoint>::size_type v21; // rax
  size_t v22; // rax
  int v23; // r14d
  __int64 v24; // rax
  char v25; // dl
  size_t v26; // rsi
  bool v27; // dl
  __int64 v28; // rsi
  uint32_t point_id; // r14d
  std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rdx
  char v31; // cl
  std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  __int64 v33; // rsi
  size_t v34; // r14
  char v35; // r14
  std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rdx
  char v37; // cl
  std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rdx
  bool *p_has_reach_event; // rax
  bool *v40; // rcx
  bool has_reach_event; // si
  char v42; // dl
  std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  char v44; // dl
  std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  const data::Vector *v47; // rcx
  char v48; // dl
  char v49; // al
  std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  char v51; // al
  float rot_speed; // r14d
  RouteAxisAngle *v53; // rcx
  std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rax
  float v55; // r14d
  RouteAxisAngle *v56; // rcx
  std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  __int64 v58; // rsi
  std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // rdx
  char v60; // cl
  std::shared_ptr<RoutePoint> *M_current; // r14
  std::vector<std::shared_ptr<RoutePoint>>::iterator v62; // rax
  const std::shared_ptr<RoutePoint> *v63; // rax
  int v64; // r14d
  std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v65; // r14
  std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v66; // rax
  int v67; // r14d
  __int64 v68; // rax
  char v69; // dl
  std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v70; // rsi
  bool v71; // dl
  int v72; // r14d
  __int64 v73; // rdx
  const std::shared_ptr<RoutePoint> *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  int v77; // r14d
  const std::shared_ptr<RoutePoint> *v78; // rax
  common::milog::MiLogStream *v79; // rax
  int v80; // r14d
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rdx
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v83; // rax
  __int64 v84; // rdx
  common::milog::MiLogStream *v85; // r14
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rdx
  const std::shared_ptr<RoutePoint> *v88; // rax
  const std::shared_ptr<RoutePoint> *v89; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v90; // r14
  unsigned __int64 v91; // rax
  uint32_t *p_time_to_next_point; // rcx
  int v93; // r14d
  std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v94; // rax
  uint32_t time_to_next_point; // ecx
  common::milog::MiLogStream *v96; // rdx
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // r14
  std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v101; // rax
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // r14
  std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v104; // rax
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // r14
  std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v107; // rdx
  bool *v108; // rax
  std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *n; // rax
  int32_t result; // eax
  float v111; // [rsp+8h] [rbp-278h]
  void (__fastcall *v112)(std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PlatformRoute *const, unsigned __int64, uint32_t *, unsigned __int64); // [rsp+8h] [rbp-278h]
  const PlatformRouteParam *parama; // [rsp+10h] [rbp-270h]
  std::in_place_index_t<2> v114; // [rsp+2Fh] [rbp-251h] BYREF
  size_t i; // [rsp+30h] [rbp-250h]
  uint32_t *delta_time_ms_ptr; // [rsp+38h] [rbp-248h]
  std::vector<std::shared_ptr<RoutePoint>> *__for_range; // [rsp+40h] [rbp-240h]
  const data::ConfigPoint *config_point; // [rsp+48h] [rbp-238h]
  std::variant<float,float,bool> v119; // [rsp+50h] [rbp-230h] BYREF
  std::vector<std::shared_ptr<RoutePoint>>::iterator __for_begin; // [rsp+58h] [rbp-228h] BYREF
  Vector3 left; // [rsp+64h] [rbp-21Ch] BYREF
  std::variant<Vector3,RouteAxisAngle,RouteAxisAngle> v122; // [rsp+70h] [rbp-210h] BYREF
  std::variant<Vector3,RouteAxisAngle,RouteAxisAngle> v123; // [rsp+90h] [rbp-1F0h] BYREF
  std::variant<Vector3,RouteAxisAngle,RouteAxisAngle> v124; // [rsp+B0h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v125; // [rsp+D0h] [rbp-1B0h] BYREF
  char v126[400]; // [rsp+F0h] [rbp-190h] BYREF

  parama = param;
  v3 = (unsigned __int64)v126;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 17 dummy_time_ms:679 64 8 5 i:671 96 16 19 route_point_ptr:655 128 16 25 array_route_poin"
                        "t_ptr:657 160 16 19 route_point_ptr:717 192 16 19 route_point_ptr:734 224 24 18 prev_transform:6"
                        "70 288 24 22 platform_transform:727";
  *(_QWORD *)(v3 + 16) = PlatformRoute::initByPointArray;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862729] = -218103808;
  v5[536862730] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(param);
  }
  point_array_id = param->point_array_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->point_array_id_ >> 3) + 0x7FFF8000);
  LOBYTE(param) = v7 != 0;
  v8 = v7 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v7;
  if ( v8 )
    __asan_report_store4(&this->point_array_id_, param, v8);
  this->point_array_id_ = point_array_id;
  if ( *(_BYTE *)(((unsigned __int64)&parama->route_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&parama->route_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&parama->route_type);
  }
  route_type = parama->route_type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(param) = v10 != 0;
    __asan_report_store4(&this->type_, param, (_BYTE)this + 24);
  }
  this->type_ = route_type;
  v11 = ((_BYTE)parama + 69) & 7;
  if ( *(_BYTE *)(((unsigned __int64)&parama->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000) != 0
    && (char)v11 >= *(_BYTE *)(((unsigned __int64)&parama->is_simulate_temp_route_by_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&parama->is_simulate_temp_route_by_time);
  }
  is_simulate_temp_route_by_time = parama->is_simulate_temp_route_by_time;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_simulate_temp_route_by_time_ >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 29) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_simulate_temp_route_by_time_, v11, v14);
  this->is_simulate_temp_route_by_time_ = is_simulate_temp_route_by_time;
  if ( *(_BYTE *)(((unsigned __int64)&parama->record_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&parama->record_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&parama->record_mode);
  }
  record_mode = parama->record_mode;
  v16 = *(_BYTE *)(((unsigned __int64)&this->record_mode_ >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v11) = v16 != 0;
    __asan_report_store4(&this->record_mode_, v11, (_BYTE)this + 40);
  }
  this->record_mode_ = record_mode;
  if ( *(_BYTE *)(((unsigned __int64)&parama->speed_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&parama->speed_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&parama->speed_level);
  }
  speed_level = parama->speed_level;
  v18 = *(_BYTE *)(((unsigned __int64)&this->speed_level_ >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v18 != 0;
  v19 = v18 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v18;
  if ( v19 )
    __asan_report_store4(&this->speed_level_, v11, v19);
  this->speed_level_ = speed_level;
  if ( *(_BYTE *)(((unsigned __int64)&parama->arrive_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)parama + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&parama->arrive_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&parama->arrive_range);
  }
  arrive_range = parama->arrive_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->arrive_range_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->arrive_range_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->arrive_range_, (((_BYTE)parama + 76) & 7u) + 3, (_BYTE)this + 48);
  }
  this->arrive_range_ = arrive_range;
  v21 = std::vector<data::ConfigPoint>::size(&parama->config_point_vec);
  std::vector<std::shared_ptr<RoutePoint>>::reserve(&this->point_vec_, v21);
  for ( i = 0LL; ; ++i )
  {
    v22 = std::vector<data::ConfigPoint>::size(&parama->config_point_vec);
    if ( i >= v22 )
      break;
    v26 = i;
    config_point = std::vector<data::ConfigPoint>::operator[](&parama->config_point_vec, i);
    common::tools::perf::make_shared<ArrayRoutePoint>();
    v23 = i;
    v24 = (__int64)std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    v25 = *(_BYTE *)(((unsigned __int64)(v24 + 8) >> 3) + 0x7FFF8000);
    LOBYTE(v26) = v25 != 0;
    v27 = v25 != 0 && v25 <= 3;
    if ( v27 )
      v24 = __asan_report_store4(v24 + 8, v26, v27);
    *(_DWORD *)(v24 + 8) = v23;
    v28 = ((unsigned __int8)config_point & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)config_point >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)config_point & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_point >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(config_point);
    }
    point_id = config_point->point_id;
    v30 = std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    v31 = *(_BYTE *)(((unsigned __int64)&v30->point_id >> 3) + 0x7FFF8000);
    if ( v31 != 0 && (char)((((_BYTE)v30 + 116) & 7) + 3) >= v31 )
    {
      LOBYTE(v28) = v31 != 0;
      __asan_report_store4(&v30->point_id, v28, (_BYTE)v30);
    }
    v30->point_id = point_id;
    Vector3::Vector3(&left, &config_point->position);
    v32 = std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    if ( (((unsigned __int8)v32 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&v32->position >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&v32->position >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v32->position.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v32 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&v32->position.z + 3) >> 3) + 0x7FFF8000) )
    {
      v32 = (std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&v32->position, 12LL);
    }
    v32->position = left;
    v33 = ((_BYTE)config_point + 44) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&config_point->is_reach_event >> 3) + 0x7FFF8000) != 0
      && (char)v33 >= *(_BYTE *)(((unsigned __int64)&config_point->is_reach_event >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&config_point->is_reach_event);
    }
    if ( config_point->is_reach_event )
      goto LABEL_48;
    v33 = ((_BYTE)parama + 68) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&parama->is_trigger_one_way_end >> 3) + 0x7FFF8000) != 0
      && (char)v33 >= *(_BYTE *)(((unsigned __int64)&parama->is_trigger_one_way_end >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&parama->is_trigger_one_way_end);
    }
    if ( !parama->is_trigger_one_way_end )
      goto LABEL_49;
    if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->type_);
    }
    if ( this->type_ == OneWay && (v34 = i + 1, v34 == std::vector<data::ConfigPoint>::size(&parama->config_point_vec)) )
LABEL_48:
      v35 = 1;
    else
LABEL_49:
      v35 = 0;
    v36 = std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    v37 = *(_BYTE *)(((unsigned __int64)&v36->has_reach_event >> 3) + 0x7FFF8000);
    if ( v37 != 0 && (((unsigned __int8)v36 + 36) & 7) >= v37 )
    {
      LOBYTE(v33) = v37 != 0;
      __asan_report_store1(&v36->has_reach_event, v33, v36);
    }
    v36->has_reach_event = v35;
    v38 = std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    p_has_reach_event = &v38->has_reach_event;
    v40 = (bool *)((*(_BYTE *)(((unsigned __int64)p_has_reach_event >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)(((unsigned __int8)p_has_reach_event & 7) >= *(_BYTE *)(((unsigned __int64)p_has_reach_event >> 3) + 0x7FFF8000)));
    if ( (_BYTE)v40 )
      __asan_report_load1(p_has_reach_event);
    has_reach_event = v38->has_reach_event;
    if ( *(_BYTE *)(((unsigned __int64)&this->has_reach_trigger_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->has_reach_trigger_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->has_reach_trigger_);
    }
    this->has_reach_trigger_ = has_reach_event || this->has_reach_trigger_;
    v42 = *(_BYTE *)(((unsigned __int64)&config_point->velocity >> 3) + 0x7FFF8000);
    LOBYTE(v40) = v42 != 0;
    if ( v42 != 0 && (char)((((_BYTE)config_point + 36) & 7) + 3) >= v42 )
      __asan_report_load4(&config_point->velocity);
    if ( config_point->velocity <= 0.0 )
    {
      v44 = *(_BYTE *)(((unsigned __int64)&config_point->time >> 3) + 0x7FFF8000);
      LOBYTE(v40) = v44 != 0;
      if ( v44 != 0 && (char)((((_BYTE)config_point + 40) & 7) + 3) >= v44 )
        __asan_report_load4(&config_point->time);
      if ( config_point->time <= 0.0 )
      {
        v114.gap0[0] = 0;
        std::variant<float,float,bool>::variant<2ul,bool,bool,void>(
          (std::variant<float,float,bool> *const)(v3 + 64),
          (std::in_place_index_t<2>)&v114,
          (bool *)v114.gap0,
          v40);
        v46 = std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        if ( (((unsigned __int8)v46 + 120) & 7) >= *(_BYTE *)(((unsigned __int64)&v46->move_params >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&v46->move_params >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((unsigned __int64)&v46->move_params._M_index >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v46 + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&v46->move_params._M_index >> 3)
                                                            + 0x7FFF8000) )
        {
          v46 = (std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&v46->move_params, 5LL);
        }
        v46->move_params._M_u._M_first._M_storage = *(float *)(v3 + 64);
        v46->move_params._M_index = *(_BYTE *)(v3 + 68);
      }
      else
      {
        std::variant<float,float,bool>::variant<1ul,float const&,float,void>(
          (std::variant<float,float,bool> *const)&__for_begin,
          (std::in_place_index_t<1>)((_BYTE)config_point + 40),
          &config_point->time,
          (const float *)v40);
        v45 = std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        if ( (((unsigned __int8)v45 + 120) & 7) >= *(_BYTE *)(((unsigned __int64)&v45->move_params >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&v45->move_params >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((unsigned __int64)&v45->move_params._M_index >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v45 + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&v45->move_params._M_index >> 3)
                                                            + 0x7FFF8000) )
        {
          v45 = (std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&v45->move_params, 5LL);
        }
        v45->move_params._M_u._M_first._M_storage = *(float *)&__for_begin._M_current;
        v45->move_params._M_index = BYTE4(__for_begin._M_current);
      }
    }
    else
    {
      std::variant<float,float,bool>::variant<0ul,float const&,float,void>(
        &v119,
        (std::in_place_index_t<0>)((_BYTE)config_point + 36),
        &config_point->velocity,
        (const float *)v40);
      v43 = std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      if ( (((unsigned __int8)v43 + 120) & 7) >= *(_BYTE *)(((unsigned __int64)&v43->move_params >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&v43->move_params >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((unsigned __int64)&v43->move_params._M_index >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v43 + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&v43->move_params._M_index >> 3)
                                                          + 0x7FFF8000) )
      {
        v43 = (std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&v43->move_params, 5LL);
      }
      v43->move_params = v119;
    }
    Vector3::Vector3(&left, &config_point->rot_axis);
    if ( !operator==(&left, &Vector3::zero) )
      goto LABEL_76;
    v48 = *(_BYTE *)(((unsigned __int64)&config_point->rot_speed >> 3) + 0x7FFF8000);
    LOBYTE(v47) = v48 != 0;
    if ( v48 != 0 && (char)((((_BYTE)config_point + 64) & 7) + 3) >= v48 )
      __asan_report_load4(&config_point->rot_speed);
    if ( config_point->rot_speed == 0.0 )
      v49 = 1;
    else
LABEL_76:
      v49 = 0;
    if ( v49 )
    {
      std::variant<Vector3,RouteAxisAngle,RouteAxisAngle>::variant<0ul,data::Vector const&,Vector3,void>(
        &v122,
        (std::in_place_index_t<0>)((_BYTE)config_point + 20),
        &config_point->rotation,
        v47);
      v50 = std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      if ( (((unsigned __int8)v50 + 0x80) & 7) >= *(_BYTE *)(((unsigned __int64)&v50->rotate_params >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&v50->rotate_params >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((unsigned __int64)&v50->rotate_params._M_index >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v50 - 112) & 7) >= *(_BYTE *)(((unsigned __int64)&v50->rotate_params._M_index >> 3)
                                                          + 0x7FFF8000) )
      {
        v50 = (std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&v50->rotate_params, 17LL);
      }
      v50->rotate_params = v122;
    }
    else
    {
      Vector3::Vector3(&left, &config_point->rot_axis);
      if ( !operator==(&left, &Vector3::zero) )
        goto LABEL_86;
      if ( *(_BYTE *)(((unsigned __int64)&config_point->rot_speed >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_point + 64) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_point->rot_speed >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&config_point->rot_speed);
      }
      if ( config_point->rot_speed == 0.0 )
LABEL_86:
        v51 = 0;
      else
        v51 = 1;
      if ( v51 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_point->rot_speed >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config_point + 64) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_point->rot_speed >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&config_point->rot_speed);
        }
        rot_speed = config_point->rot_speed;
        Vector3::Vector3(&left, &config_point->rotation);
        RouteAxisAngle::RouteAxisAngle((RouteAxisAngle *const)(v3 + 192), &left, rot_speed);
        std::variant<Vector3,RouteAxisAngle,RouteAxisAngle>::variant<1ul,RouteAxisAngle,RouteAxisAngle,void>(
          &v123,
          (std::in_place_index_t<1>)(v3 - 64),
          (RouteAxisAngle *)(v3 + 192),
          v53);
        v54 = std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        if ( (((unsigned __int8)v54 + 0x80) & 7) >= *(_BYTE *)(((unsigned __int64)&v54->rotate_params >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&v54->rotate_params >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((unsigned __int64)&v54->rotate_params._M_index >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v54 - 112) & 7) >= *(_BYTE *)(((unsigned __int64)&v54->rotate_params._M_index >> 3)
                                                            + 0x7FFF8000) )
        {
          v54 = (std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&v54->rotate_params, 17LL);
        }
        v54->rotate_params = v123;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_point->rot_speed >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config_point + 64) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_point->rot_speed >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&config_point->rot_speed);
        }
        v55 = config_point->rot_speed;
        Vector3::Vector3(&left, &config_point->rot_axis);
        RouteAxisAngle::RouteAxisAngle((RouteAxisAngle *const)(v3 + 192), &left, v55);
        std::variant<Vector3,RouteAxisAngle,RouteAxisAngle>::variant<2ul,RouteAxisAngle,RouteAxisAngle,void>(
          &v124,
          (std::in_place_index_t<2>)(v3 - 64),
          (RouteAxisAngle *)(v3 + 192),
          v56);
        v57 = std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        if ( (((unsigned __int8)v57 + 0x80) & 7) >= *(_BYTE *)(((unsigned __int64)&v57->rotate_params >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&v57->rotate_params >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((unsigned __int64)&v57->rotate_params._M_index >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v57 - 112) & 7) >= *(_BYTE *)(((unsigned __int64)&v57->rotate_params._M_index >> 3)
                                                            + 0x7FFF8000) )
        {
          v57 = (std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&v57->rotate_params, 17LL);
        }
        v57->rotate_params = v124;
      }
    }
    v58 = (((_BYTE)config_point + 68) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&config_point->arrive_range >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_point + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_point->arrive_range >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&config_point->arrive_range);
    }
    v111 = config_point->arrive_range;
    v59 = std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    v60 = *(_BYTE *)(((unsigned __int64)&v59->arrive_range >> 3) + 0x7FFF8000);
    if ( v60 != 0 && (char)((((_BYTE)v59 - 108) & 7) + 3) >= v60 )
    {
      LOBYTE(v58) = v60 != 0;
      __asan_report_store4(&v59->arrive_range, v58, (_BYTE)v59);
    }
    v59->arrive_range = v111;
    std::shared_ptr<RoutePoint>::shared_ptr<ArrayRoutePoint,void>(
      (std::shared_ptr<RoutePoint> *const)(v3 + 192),
      (const std::shared_ptr<ArrayRoutePoint> *)(v3 + 160));
    std::vector<std::shared_ptr<RoutePoint>>::push_back(
      &this->point_vec_,
      (std::vector<std::shared_ptr<RoutePoint>>::value_type *)(v3 + 192));
    std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)(v3 + 192));
    std::shared_ptr<ArrayRoutePoint>::~shared_ptr((std::shared_ptr<ArrayRoutePoint> *const)(v3 + 160));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->type_);
  }
  if ( this->type_ == Reciprocate )
  {
    std::vector<std::shared_ptr<RoutePoint>>::vector(
      (std::vector<std::shared_ptr<RoutePoint>> *const)(v3 + 288),
      &this->point_vec_);
    if ( !std::vector<std::shared_ptr<RoutePoint>>::empty((const std::vector<std::shared_ptr<RoutePoint>> *const)(v3 + 288)) )
      std::vector<std::shared_ptr<RoutePoint>>::pop_back((std::vector<std::shared_ptr<RoutePoint>> *const)(v3 + 288));
    M_current = std::vector<std::shared_ptr<RoutePoint>>::end((std::vector<std::shared_ptr<RoutePoint>> *const)(v3 + 288))._M_current;
    v62._M_current = std::vector<std::shared_ptr<RoutePoint>>::begin((std::vector<std::shared_ptr<RoutePoint>> *const)(v3 + 288))._M_current;
    std::reverse<__gnu_cxx::__normal_iterator<std::shared_ptr<RoutePoint> *,std::vector<std::shared_ptr<RoutePoint>>>>(
      v62,
      (__gnu_cxx::__normal_iterator<std::shared_ptr<RoutePoint>*,std::vector<std::shared_ptr<RoutePoint>> >)M_current);
    if ( !std::vector<std::shared_ptr<RoutePoint>>::empty((const std::vector<std::shared_ptr<RoutePoint>> *const)(v3 + 288)) )
      std::vector<std::shared_ptr<RoutePoint>>::pop_back((std::vector<std::shared_ptr<RoutePoint>> *const)(v3 + 288));
    __for_range = (std::vector<std::shared_ptr<RoutePoint>> *)(v3 + 288);
    __for_begin._M_current = std::vector<std::shared_ptr<RoutePoint>>::begin((std::vector<std::shared_ptr<RoutePoint>> *const)(v3 + 288))._M_current;
    *(std::vector<std::shared_ptr<RoutePoint>>::iterator *)(v3 + 64) = std::vector<std::shared_ptr<RoutePoint>>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::shared_ptr<RoutePoint> *,std::vector<std::shared_ptr<RoutePoint>>>(
              &__for_begin,
              (const __gnu_cxx::__normal_iterator<std::shared_ptr<RoutePoint>*,std::vector<std::shared_ptr<RoutePoint>> > *)(v3 + 64)) )
    {
      v63 = __gnu_cxx::__normal_iterator<std::shared_ptr<RoutePoint> *,std::vector<std::shared_ptr<RoutePoint>>>::operator*(&__for_begin);
      std::shared_ptr<RoutePoint>::shared_ptr((std::shared_ptr<RoutePoint> *const)(v3 + 96), v63);
      std::dynamic_pointer_cast<ArrayRoutePoint,RoutePoint>((const std::shared_ptr<RoutePoint> *)(v3 + 128));
      if ( std::operator==<ArrayRoutePoint>(0LL, (const std::shared_ptr<ArrayRoutePoint> *)(v3 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/platform_route.cpp",
          "initByPointArray",
          660);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
          &v125,
          (const char (*)[20])"route point is null");
        common::milog::MiLogStream::~MiLogStream(&v125);
        v2 = -1;
        v64 = 0;
      }
      else
      {
        common::tools::perf::make_shared<ArrayRoutePoint>();
        v65 = std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        v66 = std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        v70 = v65;
        ArrayRoutePoint::operator=(v66, v65);
        v67 = std::vector<std::shared_ptr<RoutePoint>>::size(&this->point_vec_);
        v68 = (__int64)std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        v69 = *(_BYTE *)(((unsigned __int64)(v68 + 8) >> 3) + 0x7FFF8000);
        LOBYTE(v70) = v69 != 0;
        v71 = v69 != 0 && v69 <= 3;
        if ( v71 )
          v68 = __asan_report_store4(v68 + 8, v70, v71);
        *(_DWORD *)(v68 + 8) = v67;
        std::shared_ptr<RoutePoint>::shared_ptr<ArrayRoutePoint,void>(
          (std::shared_ptr<RoutePoint> *const)(v3 + 192),
          (const std::shared_ptr<ArrayRoutePoint> *)(v3 + 160));
        std::vector<std::shared_ptr<RoutePoint>>::push_back(
          &this->point_vec_,
          (std::vector<std::shared_ptr<RoutePoint>>::value_type *)(v3 + 192));
        std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)(v3 + 192));
        std::shared_ptr<ArrayRoutePoint>::~shared_ptr((std::shared_ptr<ArrayRoutePoint> *const)(v3 + 160));
        v64 = 1;
      }
      std::shared_ptr<ArrayRoutePoint>::~shared_ptr((std::shared_ptr<ArrayRoutePoint> *const)(v3 + 128));
      std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)(v3 + 96));
      if ( v64 != 1 )
      {
        v72 = 0;
        goto LABEL_121;
      }
      __gnu_cxx::__normal_iterator<std::shared_ptr<RoutePoint> *,std::vector<std::shared_ptr<RoutePoint>>>::operator++(&__for_begin);
    }
    v72 = 1;
LABEL_121:
    std::vector<std::shared_ptr<RoutePoint>>::~vector((std::vector<std::shared_ptr<RoutePoint>> *const)(v3 + 288));
    if ( v72 != 1 )
      goto LABEL_184;
  }
  if ( *(char *)(((unsigned __int64)&parama->current_transform >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&parama->current_transform.rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)parama + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&parama->current_transform.rotation.z + 3) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load_n(&parama->current_transform, 24LL);
  }
  v73 = *(_QWORD *)&parama->current_transform.position.z;
  *(_QWORD *)(v3 + 224) = *(_QWORD *)&parama->current_transform.position.x;
  *(_QWORD *)(v3 + 232) = v73;
  *(_QWORD *)(v3 + 240) = *(_QWORD *)&parama->current_transform.rotation.y;
  for ( *(_QWORD *)(v3 + 64) = 0LL;
        std::vector<std::shared_ptr<RoutePoint>>::size(&this->point_vec_) > *(_QWORD *)(v3 + 64);
        ++*(_QWORD *)(v3 + 64) )
  {
    v74 = std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, *(_QWORD *)(v3 + 64));
    std::shared_ptr<RoutePoint>::shared_ptr((std::shared_ptr<RoutePoint> *const)(v3 + 160), v74);
    if ( std::operator==<RoutePoint>(0LL, (const std::shared_ptr<RoutePoint> *)(v3 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v125,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/platform_route.cpp",
        "initByPointArray",
        676);
      v75 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(&v125, (const char (*)[3])"i:");
      v76 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v75,
              (const unsigned __int64 *)(v3 + 64));
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v76, (const char (*)[15])" point is null");
      common::milog::MiLogStream::~MiLogStream(&v125);
      v77 = 0;
    }
    else
    {
      *(_DWORD *)(v3 + 48) = 0;
      delta_time_ms_ptr = 0LL;
      if ( *(_QWORD *)(v3 + 64) )
      {
        v78 = std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, *(_QWORD *)(v3 + 64) - 1LL);
        std::shared_ptr<RoutePoint>::shared_ptr((std::shared_ptr<RoutePoint> *const)(v3 + 192), v78);
        if ( std::operator==<RoutePoint>(0LL, (const std::shared_ptr<RoutePoint> *)(v3 + 192)) )
        {
          common::milog::MiLogStream::create(
            &v125,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/scene/platform_route.cpp",
            "initByPointArray",
            686);
          v79 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  &v125,
                  (const char (*)[18])"point is null, i:");
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v79,
            (const unsigned __int64 *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream(&v125);
          v2 = -1;
          v80 = 0;
        }
        else
        {
          delta_time_ms_ptr = &std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192))->time_to_next_point;
          v80 = 1;
        }
        std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)(v3 + 192));
        if ( v80 != 1 )
        {
          v77 = 1;
          goto LABEL_144;
        }
      }
      else
      {
        delta_time_ms_ptr = (uint32_t *)(v3 + 48);
      }
      if ( delta_time_ms_ptr )
      {
        Transform::Transform((Transform *const)(v3 + 288));
        v81 = (unsigned __int64)std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        if ( *(_BYTE *)((v81 >> 3) + 0x7FFF8000) )
          v81 = __asan_report_load8();
        v82 = *(_QWORD *)v81 + 40LL;
        if ( *(_BYTE *)((v82 >> 3) + 0x7FFF8000) )
          v81 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, PlatformRoute *const, unsigned __int64, uint32_t *, unsigned __int64))v82)(
          v81,
          this,
          v3 + 224,
          delta_time_ms_ptr,
          v3 + 288);
        v83 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        if ( *(char *)(((unsigned __int64)&v83->rotation >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&v83->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v83 + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&v83->rotation.z + 3) >> 3) + 0x7FFF8000) )
        {
          v83 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&v83->rotation, 12LL);
        }
        *(_QWORD *)&v83->rotation.x = *(_QWORD *)(v3 + 300);
        v83->rotation.z = *(float *)(v3 + 308);
        v84 = *(_QWORD *)(v3 + 296);
        *(_QWORD *)(v3 + 224) = *(_QWORD *)(v3 + 288);
        *(_QWORD *)(v3 + 232) = v84;
        *(_QWORD *)(v3 + 240) = *(_QWORD *)(v3 + 304);
        v77 = 2;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v125,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/scene/platform_route.cpp",
          "initByPointArray",
          697);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v125,
          (const char (*)[26])"delta_time_ms_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v125);
        v2 = -1;
        v77 = 1;
      }
    }
LABEL_144:
    std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)(v3 + 160));
    if ( v77 && v77 != 2 )
      goto LABEL_184;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->type_);
  }
  if ( this->type_ == Loop || this->type_ == Reciprocate )
  {
    if ( std::vector<std::shared_ptr<RoutePoint>>::size(&this->point_vec_) <= 1 )
    {
      common::milog::MiLogStream::create(
        &v125,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/platform_route.cpp",
        "initByPointArray",
        714);
      v85 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v125,
              (const char (*)[42])"point count is too small! point_vec.size:");
      *(_QWORD *)(v3 + 64) = std::vector<std::shared_ptr<RoutePoint>>::size(&this->point_vec_);
      v86 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v85,
              (const unsigned __int64 *)(v3 + 64));
      v87 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v86, (const char (*)[17])" point_array_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v87, &parama->point_array_id);
      common::milog::MiLogStream::~MiLogStream(&v125);
      v2 = -1;
      goto LABEL_184;
    }
    v88 = std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, 0LL);
    std::shared_ptr<RoutePoint>::shared_ptr((std::shared_ptr<RoutePoint> *const)(v3 + 160), v88);
    if ( !std::operator==<RoutePoint>(0LL, (const std::shared_ptr<RoutePoint> *)(v3 + 160)) )
    {
      v89 = std::vector<std::shared_ptr<RoutePoint>>::back(&this->point_vec_);
      std::shared_ptr<RoutePoint>::shared_ptr((std::shared_ptr<RoutePoint> *const)(v3 + 192), v89);
      if ( !std::operator==<RoutePoint>(0LL, (const std::shared_ptr<RoutePoint> *)(v3 + 192)) )
      {
        Transform::Transform((Transform *const)(v3 + 288));
        v90 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        if ( *(_BYTE *)(((unsigned __int64)v90 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v91 = (unsigned __int64)(v90->_vptr_RoutePoint + 5);
        if ( *(_BYTE *)((v91 >> 3) + 0x7FFF8000) )
          v91 = __asan_report_load8();
        v112 = *(void (__fastcall **)(std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, PlatformRoute *const, unsigned __int64, uint32_t *, unsigned __int64))v91;
        p_time_to_next_point = &std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192))->time_to_next_point;
        v112(v90, this, v3 + 224, p_time_to_next_point, v3 + 288);
      }
      std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)(v3 + 192));
    }
    std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)(v3 + 160));
  }
  for ( *(_QWORD *)(v3 + 64) = 0LL;
        std::vector<std::shared_ptr<RoutePoint>>::size(&this->point_vec_) > *(_QWORD *)(v3 + 64);
        ++*(_QWORD *)(v3 + 64) )
  {
    std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, *(_QWORD *)(v3 + 64));
    std::dynamic_pointer_cast<ArrayRoutePoint,RoutePoint>((const std::shared_ptr<RoutePoint> *)(v3 + 192));
    if ( std::operator==<ArrayRoutePoint>(0LL, (const std::shared_ptr<ArrayRoutePoint> *)(v3 + 192)) )
    {
      common::milog::MiLogStream::create(
        &v125,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/scene/platform_route.cpp",
        "initByPointArray",
        737);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v125, (const char (*)[20])"route point is null");
      common::milog::MiLogStream::~MiLogStream(&v125);
      v2 = -1;
      v93 = 0;
    }
    else
    {
      v94 = std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
      if ( *(_BYTE *)(((unsigned __int64)&v94->time_to_next_point >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v94->time_to_next_point >> 3) + 0x7FFF8000) <= 3 )
      {
        v94 = (std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v94->time_to_next_point);
      }
      time_to_next_point = v94->time_to_next_point;
      if ( *(_BYTE *)(((unsigned __int64)&this->total_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_time_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->total_time_);
      }
      this->total_time_ += time_to_next_point;
      common::milog::MiLogStream::create(
        &v125,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/platform_route.cpp",
        "initByPointArray",
        742);
      v96 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              &v125,
              (const char (*)[16])"point_array_id:");
      v97 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v96, &parama->point_array_id);
      v98 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v97, (const char (*)[8])" index:");
      v99 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v98,
              (const unsigned __int64 *)(v3 + 64));
      v100 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v99, (const char (*)[11])" point_id:");
      v101 = std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
      v102 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v100, &v101->point_id);
      v103 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
               v102,
               (const char (*)[21])" time_to_next_point:");
      v104 = std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
      v105 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v103, &v104->time_to_next_point);
      v106 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               v105,
               (const char (*)[18])" has_reach_event:");
      v107 = std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
      v108 = &v107->has_reach_event;
      if ( *(_BYTE *)(((unsigned __int64)v108 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v108 & 7) >= *(_BYTE *)(((unsigned __int64)v108 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v108);
      }
      common::milog::MiLogStream::operator<<(v106, v107->has_reach_event);
      common::milog::MiLogStream::~MiLogStream(&v125);
      if ( *(_BYTE *)(((unsigned __int64)&parama->is_turn_mode >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)parama + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&parama->is_turn_mode >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&parama->is_turn_mode);
      }
      if ( parama->is_turn_mode )
      {
        n = std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
        if ( (((unsigned __int8)n + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&n->position >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&n->position >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&n->position.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)n + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&n->position.z + 3) >> 3) + 0x7FFF8000) )
        {
          n = (std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store_n(&n->position, 12LL);
        }
        if ( *(char *)(((unsigned __int64)&parama->current_transform >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&parama->current_transform.position.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)parama + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&parama->current_transform.position.z
                                                                + 3) >> 3)
                                                              + 0x7FFF8000) )
        {
          n = (std::__shared_ptr_access<ArrayRoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load_n(&parama->current_transform, 12LL);
        }
        *(_QWORD *)&n->position.x = *(_QWORD *)&parama->current_transform.position.x;
        n->position.z = parama->current_transform.position.z;
      }
      v93 = 1;
    }
    std::shared_ptr<ArrayRoutePoint>::~shared_ptr((std::shared_ptr<ArrayRoutePoint> *const)(v3 + 192));
    if ( v93 != 1 )
      goto LABEL_184;
  }
  v2 = 0;
LABEL_184:
  result = v2;
  if ( v126 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 757: range 0000000013189A0C-0000000013189BC0
const PlatformRoute *__fastcall PlatformRoute::getPoint(
        const PlatformRoute *const this,
        const PlatformRoute *index,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  const std::shared_ptr<RoutePoint> *v7; // rax
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-80h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 index:756";
  *(_QWORD *)(v3 + 16) = PlatformRoute::getPoint;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  if ( !PlatformRoute::isVaildIndex(index, *(_DWORD *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/platform_route.cpp",
      "getPoint",
      760);
    v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v10, (const char (*)[15])"invalid index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    std::shared_ptr<RoutePoint>::shared_ptr((std::shared_ptr<RoutePoint> *const)this, 0LL);
  }
  else
  {
    v7 = std::vector<std::shared_ptr<RoutePoint>>::operator[](&index->point_vec_, *(unsigned int *)(v3 + 32));
    std::shared_ptr<RoutePoint>::shared_ptr((std::shared_ptr<RoutePoint> *const)this, v7);
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 769: range 0000000013189BC2-0000000013189C24
// local variable allocation has failed, the output may be wrong!
RoutePointPtr __cdecl PlatformRoute::getNextPoint(const PlatformRoute *const this, uint32_t index)
{
  int32_t v2; // edx
  __int64 NextIndex; // rsi
  RoutePointPtr result; // rax
  const PlatformRoute *thisa; // [rsp+10h] [rbp-10h]

  thisa = *(const PlatformRoute **)&index;
  NextIndex = (unsigned int)PlatformRoute::getNextIndex(*(const PlatformRoute *const *)&index, v2);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, NextIndex);
  PlatformRoute::getPoint(this, thisa, NextIndex);
  result._M_ptr = (std::__shared_ptr<RoutePoint,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 775: range 0000000013189C26-0000000013189EDA
__int64 __fastcall PlatformRoute::simulateTowardsPointByPositionAndRotation(
        const PlatformRoute *const this,
        int32_t route_index,
        const Transform *prev_transform,
        uint32_t *time_ms,
        Transform *result_transform)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  const std::shared_ptr<RoutePoint> *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+50h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 15 route_index:774 64 16 13 point_ptr:782";
  *(_QWORD *)(v5 + 16) = PlatformRoute::simulateTowardsPointByPositionAndRotation;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202178560;
  *(_DWORD *)(v5 + 48) = route_index;
  if ( !PlatformRoute::isVaildIndex(this, *(_DWORD *)(v5 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/platform_route.cpp",
      "simulateTowardsPointByPositionAndRotation",
      778);
    v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v17,
           (const char (*)[21])"invalid route_index:");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    v9 = -1;
  }
  else
  {
    v10 = std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, *(int *)(v5 + 48));
    std::shared_ptr<RoutePoint>::shared_ptr((std::shared_ptr<RoutePoint> *const)(v5 + 64), v10);
    if ( std::operator==<RoutePoint>(0LL, (const std::shared_ptr<RoutePoint> *)(v5 + 64)) )
    {
      v9 = -1;
    }
    else
    {
      v11 = (unsigned __int64)std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8();
      v12 = *(_QWORD *)v11 + 40LL;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8();
      v9 = (*(__int64 (__fastcall **)(unsigned __int64, const PlatformRoute *const, const Transform *, uint32_t *, Transform *))v12)(
             v11,
             this,
             prev_transform,
             time_ms,
             result_transform);
    }
    std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)(v5 + 64));
  }
  result = v9;
  if ( v18 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 793: range 0000000013189EDC-000000001318A085
int32_t __cdecl PlatformRoute::simulateTowardsPointForTempRoute(
        const PlatformRoute *const this,
        int32_t target_index,
        const Transform *prev_transform,
        const uint32_t time_ms,
        PlatformSimulateResult *result)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  int32_t v8; // r14d
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  int32_t v11; // eax
  char v15[112]; // [rsp+20h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 16 13 point_ptr:794";
  *(_QWORD *)(v5 + 16) = PlatformRoute::simulateTowardsPointForTempRoute;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202178560;
  PlatformRoute::getPoint((const PlatformRoute *const)(v5 + 32), this, target_index);
  if ( std::operator==<RoutePoint>(0LL, (const std::shared_ptr<RoutePoint> *)(v5 + 32)) )
  {
    v8 = -1;
  }
  else
  {
    v9 = (unsigned __int64)std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    v10 = *(_QWORD *)v9 + 48LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    v8 = (*(__int64 (__fastcall **)(unsigned __int64, const PlatformRoute *const, const Transform *, _QWORD, PlatformSimulateResult *, __int64))v10)(
           v9,
           this,
           prev_transform,
           time_ms,
           result,
           1LL);
  }
  std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)(v5 + 32));
  v11 = v8;
  if ( v15 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v11;
};

// Line 804: range 000000001318A086-000000001318B207
__int64 __fastcall PlatformRoute::simulateRoute(
        PlatformRoute *const this,
        uint32_t last_route_time,
        int32_t route_index,
        uint32_t passed_time,
        unsigned __int64 result,
        Transform platform_transform)
{
  unsigned int v6; // r14d
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  _BOOL4 v25; // r15d
  __int64 v26; // rsi
  bool v27; // dl
  int32_t v28; // ecx
  char v29; // al
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rsi
  uint32_t v34; // ecx
  char v35; // dl
  bool v36; // dl
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  int v40; // r15d
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdx
  common::milog::MiLogStream *v43; // rax
  bool v44; // dl
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // r15
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // r15
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // rax
  uint32_t time_to_next_point; // r15d
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rdx
  uint32_t *p_wait_time; // rax
  const unsigned int *v60; // rax
  _DWORD *v61; // rdx
  common::milog::MiLogStream *v62; // rax
  __int64 v63; // rax
  unsigned int __b; // [rsp+3Ch] [rbp-154h] BYREF
  common::milog::MiLogStream v68; // [rsp+40h] [rbp-150h] BYREF
  char v69[304]; // [rsp+60h] [rbp-130h] BYREF

  v7 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(256LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "9 32 4 13 time_span:810 48 4 5 i:822 64 4 20 next_route_index:844 80 4 19 last_route_time:803 96"
                        " 4 15 route_index:803 112 4 15 passed_time:803 128 16 13 point_ptr:825 160 16 18 next_point_ptr:"
                        "845 192 24 22 platform_transform:803";
  *(_QWORD *)(v7 + 16) = PlatformRoute::simulateRoute;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556924;
  v9[536862722] = -234556924;
  v9[536862723] = -234556924;
  v9[536862724] = -219021312;
  v9[536862725] = -219021312;
  v9[536862726] = -218103808;
  v9[536862727] = -202116109;
  *(Transform *)(v7 + 192) = platform_transform;
  *(_DWORD *)(v7 + 80) = last_route_time;
  *(_DWORD *)(v7 + 96) = route_index;
  *(_DWORD *)(v7 + 112) = passed_time;
  if ( std::vector<std::shared_ptr<RoutePoint>>::empty(&this->point_vec_) )
  {
    v6 = -1;
  }
  else
  {
    *(_DWORD *)(v7 + 32) = *(_DWORD *)(v7 + 112) + *(_DWORD *)(v7 + 80);
    if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->type_);
    }
    if ( this->type_ == Loop || this->type_ == Reciprocate )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->total_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_time_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->total_time_);
      }
      if ( this->total_time_ )
        *(_DWORD *)(v7 + 32) %= this->total_time_;
    }
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/platform_route.cpp",
      "simulateRoute",
      817);
    v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v68, (const char (*)[10])"route_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->route_id_);
    v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" total_time:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->total_time_);
    v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v13, (const char (*)[18])" last_route_time:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v7 + 80));
    v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])" route_index:");
    v17 = common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v7 + 96));
    v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])" passed_time:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v7 + 112));
    v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" from:");
    v21 = operator<<(v20, (const Transform *)(v7 + 192));
    v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v21, (const char (*)[12])" time_span:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v7 + 32));
    common::milog::MiLogStream::~MiLogStream(&v68);
    for ( *(_DWORD *)(v7 + 48) = 0; *(_DWORD *)(v7 + 48) <= 0x3E7u; ++*(_DWORD *)(v7 + 48) )
    {
      PlatformRoute::getPoint((const PlatformRoute *const)(v7 + 128), this, *(_DWORD *)(v7 + 96));
      if ( std::operator==<RoutePoint>(0LL, (const std::shared_ptr<RoutePoint> *)(v7 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v68,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/platform_route.cpp",
          "simulateRoute",
          828);
        v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v68, (const char (*)[13])"route_index:");
        v24 = common::milog::MiLogStream::operator<<<int,(int *)0>(v23, (const int *)(v7 + 96));
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v24, (const char (*)[18])" point not found!");
        common::milog::MiLogStream::~MiLogStream(&v68);
        v6 = -1;
        v25 = 0;
      }
      else
      {
        if ( *(char *)((result >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((result + 11) >> 3) + 0x7FFF8000) != 0
          && (char)((result + 11) & 7) >= *(_BYTE *)(((result + 11) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(result, 12LL);
        }
        if ( (char)((v7 - 64) & 7) >= *(_BYTE *)(((v7 + 192) >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((v7 + 192) >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((v7 + 203) >> 3) + 0x7FFF8000) != 0
          && (char)((v7 - 64 + 11) & 7) >= *(_BYTE *)(((v7 + 203) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v7 + 192, 12LL);
        }
        *(_QWORD *)result = *(_QWORD *)(v7 + 192);
        *(_DWORD *)(result + 8) = *(_DWORD *)(v7 + 200);
        if ( (char)((result + 12) & 7) >= *(_BYTE *)(((result + 12) >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((result + 12) >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((result + 23) >> 3) + 0x7FFF8000) != 0
          && (char)((result + 23) & 7) >= *(_BYTE *)(((result + 23) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(result + 12, 12LL);
        }
        if ( (char)((v7 - 64 + 12) & 7) >= *(_BYTE *)(((v7 + 204) >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((v7 + 204) >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((v7 + 215) >> 3) + 0x7FFF8000) != 0
          && (char)((v7 - 64 + 23) & 7) >= *(_BYTE *)(((v7 + 215) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v7 + 204, 12LL);
        }
        *(_QWORD *)(result + 12) = *(_QWORD *)(v7 + 204);
        *(_DWORD *)(result + 20) = *(_DWORD *)(v7 + 212);
        v26 = (((_BYTE)result + 28) & 7u) + 3;
        v27 = *(_BYTE *)(((result + 28) >> 3) + 0x7FFF8000) != 0
           && (char)(((result + 28) & 7) + 3) >= *(_BYTE *)(((result + 28) >> 3) + 0x7FFF8000);
        if ( v27 )
          __asan_report_store4(result + 28, v26, v27);
        *(_DWORD *)(result + 28) = 0;
        v28 = *(_DWORD *)(v7 + 96);
        v29 = *(_BYTE *)(((result + 32) >> 3) + 0x7FFF8000);
        if ( v29 != 0 && v29 <= 3 )
        {
          LOBYTE(v26) = v29 != 0;
          __asan_report_store4(result + 32, v26, result + 32);
        }
        *(_DWORD *)(result + 32) = v28;
        if ( (char)((result + 36) & 7) >= *(_BYTE *)(((result + 36) >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((result + 36) >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)(((result + 59) >> 3) + 0x7FFF8000) != 0
          && (char)((result + 59) & 7) >= *(_BYTE *)(((result + 59) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(result + 36, 24LL);
        }
        v30 = *(_QWORD *)(v7 + 200);
        *(_QWORD *)(result + 36) = *(_QWORD *)(v7 + 192);
        *(_QWORD *)(result + 44) = v30;
        *(_QWORD *)(result + 52) = *(_QWORD *)(v7 + 208);
        v31 = (unsigned __int64)std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 128));
        if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
          v31 = __asan_report_load8();
        v32 = *(_QWORD *)v31 + 32LL;
        v33 = *(unsigned __int8 *)((v32 >> 3) + 0x7FFF8000);
        if ( (_BYTE)v33 )
          v31 = __asan_report_load8();
        v34 = (*(__int64 (__fastcall **)(unsigned __int64))v32)(v31);
        v35 = *(_BYTE *)(((result + 60) >> 3) + 0x7FFF8000);
        LOBYTE(v33) = v35 != 0;
        v36 = v35 != 0 && (char)(((result + 60) & 7) + 3) >= v35;
        if ( v36 )
          __asan_report_store4(result + 60, v33, v36);
        *(_DWORD *)(result + 60) = v34;
        if ( *(_BYTE *)(((unsigned __int64)&this->total_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_time_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->total_time_);
        }
        if ( !this->total_time_ || PlatformRoute::isInOneWayEnd(this, *(_DWORD *)(v7 + 96)) )
        {
          v6 = 0;
          v25 = 0;
        }
        else
        {
          *(_DWORD *)(v7 + 64) = PlatformRoute::getNextIndex(this, *(_DWORD *)(v7 + 96));
          PlatformRoute::getPoint((const PlatformRoute *const)(v7 + 160), this, *(_DWORD *)(v7 + 64));
          if ( std::operator==<RoutePoint>(0LL, (const std::shared_ptr<RoutePoint> *)(v7 + 160)) )
          {
            common::milog::MiLogStream::create(
              &v68,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/platform_route.cpp",
              "simulateRoute",
              848);
            v38 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    &v68,
                    (const char (*)[18])"next_route_index:");
            v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v38,
                    (const unsigned int *)(v7 + 64));
            common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v39,
              (const char (*)[18])" point not found!");
            common::milog::MiLogStream::~MiLogStream(&v68);
            v6 = -1;
            v40 = 0;
          }
          else
          {
            v41 = (unsigned __int64)std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 160));
            if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
              v41 = __asan_report_load8();
            v42 = *(_QWORD *)v41 + 48LL;
            if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
              v41 = __asan_report_load8();
            if ( (*(unsigned int (__fastcall **)(unsigned __int64, PlatformRoute *const, unsigned __int64, _QWORD, unsigned __int64, _QWORD))v42)(
                   v41,
                   this,
                   v7 + 192,
                   *(unsigned int *)(v7 + 32),
                   result,
                   0LL) )
            {
              common::milog::MiLogStream::create(
                &v68,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/platform_route.cpp",
                "simulateRoute",
                854);
              v43 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                      &v68,
                      (const char (*)[40])"simulateTowardsThisPointByTime fail, i:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v43,
                (const unsigned int *)(v7 + 48));
              common::milog::MiLogStream::~MiLogStream(&v68);
              v6 = -1;
              v40 = 0;
            }
            else
            {
              if ( *(_BYTE *)(((result + 32) >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((result + 32) >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(result + 32);
              }
              if ( *(_DWORD *)(result + 32) != *(_DWORD *)(v7 + 64) )
                goto LABEL_60;
              if ( *(char *)(((result + 88) >> 3) + 0x7FFF8000) < 0 )
                __asan_report_load1(result + 88);
              if ( !*(_BYTE *)(result + 88) )
              {
                common::milog::MiLogStream::create(
                  &v68,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/scene/platform_route.cpp",
                  "simulateRoute",
                  869);
                v45 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        &v68,
                        (const char (*)[13])"route_index:");
                v46 = common::milog::MiLogStream::operator<<<int,(int *)0>(v45, (const int *)(v7 + 96));
                v47 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v46,
                        (const char (*)[19])" next_route_index:");
                v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v47,
                        (const unsigned int *)(v7 + 64));
                v49 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v48,
                        (const char (*)[12])" time_span:");
                v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v49,
                        (const unsigned int *)(v7 + 32));
                v51 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                        v50,
                        (const char (*)[32])" point_ptr->time_to_next_point:");
                v52 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 128));
                v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v51,
                        &v52->time_to_next_point);
                v54 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                        v53,
                        (const char (*)[28])" next_point_ptr->wait_time:");
                v55 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 160));
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &v55->wait_time);
                common::milog::MiLogStream::~MiLogStream(&v68);
                *(_DWORD *)(v7 + 96) = *(_DWORD *)(v7 + 64);
                v56 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&v56->time_to_next_point >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v56->time_to_next_point >> 3) + 0x7FFF8000) <= 3 )
                {
                  v56 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v56->time_to_next_point);
                }
                time_to_next_point = v56->time_to_next_point;
                v58 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 160));
                p_wait_time = &v58->wait_time;
                if ( *(_BYTE *)(((unsigned __int64)p_wait_time >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_wait_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_wait_time >> 3)
                                                                                + 0x7FFF8000) )
                {
                  __asan_report_load4(p_wait_time);
                }
                __b = time_to_next_point + v58->wait_time;
                v60 = std::min<unsigned int>((const unsigned int *)(v7 + 32), &__b);
                v61 = v60;
                if ( *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v60 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v60);
                }
                *(_DWORD *)(v7 + 32) -= *v61;
                if ( (char)((v7 - 64) & 7) >= *(_BYTE *)(((v7 + 192) >> 3) + 0x7FFF8000)
                  && *(_BYTE *)(((v7 + 192) >> 3) + 0x7FFF8000) != 0
                  || *(_BYTE *)(((v7 + 203) >> 3) + 0x7FFF8000) != 0
                  && (char)((v7 - 64 + 11) & 7) >= *(_BYTE *)(((v7 + 203) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v7 + 192, 12LL);
                }
                if ( *(char *)((result >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((result + 11) >> 3) + 0x7FFF8000) != 0
                  && (char)((result + 11) & 7) >= *(_BYTE *)(((result + 11) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load_n(result, 12LL);
                }
                *(_QWORD *)(v7 + 192) = *(_QWORD *)result;
                *(_DWORD *)(v7 + 200) = *(_DWORD *)(result + 8);
                if ( (char)((v7 - 64 + 12) & 7) >= *(_BYTE *)(((v7 + 204) >> 3) + 0x7FFF8000)
                  && *(_BYTE *)(((v7 + 204) >> 3) + 0x7FFF8000) != 0
                  || *(_BYTE *)(((v7 + 215) >> 3) + 0x7FFF8000) != 0
                  && (char)((v7 - 64 + 23) & 7) >= *(_BYTE *)(((v7 + 215) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v7 + 204, 12LL);
                }
                if ( (char)((result + 12) & 7) >= *(_BYTE *)(((result + 12) >> 3) + 0x7FFF8000)
                  && *(_BYTE *)(((result + 12) >> 3) + 0x7FFF8000) != 0
                  || *(_BYTE *)(((result + 23) >> 3) + 0x7FFF8000) != 0
                  && (char)((result + 23) & 7) >= *(_BYTE *)(((result + 23) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load_n(result + 12, 12LL);
                }
                *(_QWORD *)(v7 + 204) = *(_QWORD *)(result + 12);
                *(_DWORD *)(v7 + 212) = *(_DWORD *)(result + 20);
                v40 = 1;
              }
              else
              {
LABEL_60:
                if ( *(char *)(((result + 88) >> 3) + 0x7FFF8000) < 0 )
                  __asan_report_load1(result + 88);
                if ( *(_BYTE *)(result + 88) )
                {
                  v44 = *(_BYTE *)(((result + 28) >> 3) + 0x7FFF8000) != 0
                     && (char)(((result + 28) & 7) + 3) >= *(_BYTE *)(((result + 28) >> 3) + 0x7FFF8000);
                  if ( v44 )
                    __asan_report_store4(result + 28, (((_BYTE)result + 28) & 7u) + 3, v44);
                  *(_DWORD *)(result + 28) = 0;
                }
                v6 = 0;
                v40 = 0;
              }
            }
          }
          std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)(v7 + 160));
          v25 = v40 == 1;
        }
      }
      std::shared_ptr<RoutePoint>::~shared_ptr((std::shared_ptr<RoutePoint> *const)(v7 + 128));
      if ( !v25 )
        goto LABEL_86;
    }
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/platform_route.cpp",
      "simulateRoute",
      880);
    v62 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v68,
            (const char (*)[28])"simulate too many times, i:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, (const unsigned int *)(v7 + 48));
    common::milog::MiLogStream::~MiLogStream(&v68);
    v6 = -1;
  }
LABEL_86:
  v63 = v6;
  if ( v69 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v63;
};

// Line 886: range 000000001318B208-000000001318B282
bool __cdecl PlatformRoute::isInOneWayEnd(PlatformRoute *const this, int32_t route_index)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->type_);
  }
  return this->type_ == OneWay && route_index + 1 >= std::vector<std::shared_ptr<RoutePoint>>::size(&this->point_vec_);
};

// Line 896: range 000000001318B284-000000001318B512
int32_t __cdecl PlatformRoute::getPositionAndRotationByIndex(
        PlatformRoute *const this,
        int index,
        Vector3 *position,
        Vector3 *rotation)
{
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  RoutePointPtr *point_ptr; // [rsp+28h] [rbp-18h]

  if ( index < 0 || index >= std::vector<std::shared_ptr<RoutePoint>>::size(&this->point_vec_) )
    return -1;
  point_ptr = std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, index);
  if ( std::operator==<RoutePoint>(0LL, point_ptr) )
    return -1;
  v6 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)point_ptr);
  if ( ((unsigned __int8)position & 7) >= *(_BYTE *)(((unsigned __int64)position >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)position >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&position->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)position + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&position->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(position, 12LL);
  }
  if ( (((unsigned __int8)v6 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&v6->position >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v6->position >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v6->position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v6 + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&v6->position.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&v6->position, 12LL);
  }
  *(_QWORD *)&position->x = *(_QWORD *)&v6->position.x;
  position->z = v6->position.z;
  v7 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)point_ptr);
  if ( ((unsigned __int8)rotation & 7) >= *(_BYTE *)(((unsigned __int64)rotation >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)rotation >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&rotation->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)rotation + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rotation->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(rotation, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&v7->rotation >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v7->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v7 + 51) & 7) >= *(_BYTE *)((((unsigned __int64)&v7->rotation.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&v7->rotation, 12LL);
  }
  *(_QWORD *)&rotation->x = *(_QWORD *)&v7->rotation.x;
  rotation->z = v7->rotation.z;
  return 0;
};

// Line 912: range 000000001318B514-000000001318B59E
float __cdecl PlatformRoute::getWaitAngleSpeedByIndex(PlatformRoute *const this, int index)
{
  const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *v3; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax

  if ( !PlatformRoute::isVaildIndexAndRotType(this, index, ROT_ANGLE) )
    return 0.0;
  v3 = (const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<RoutePoint>>::operator[](
                                                                                              &this->point_vec_,
                                                                                              index);
  v4 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v3);
  if ( *(_BYTE *)(((unsigned __int64)&v4->rot_angle_wait_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v4->rot_angle_wait_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    v4 = (std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v4->rot_angle_wait_speed);
  }
  return v4->rot_angle_wait_speed;
};

// Line 923: range 000000001318B5A0-000000001318B633
float __cdecl PlatformRoute::getMoveAngleSpeedByIndex(PlatformRoute *const this, int index)
{
  const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *v3; // rax
  std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rdx
  float *p_rot_angle_move_speed; // rax

  if ( !PlatformRoute::isVaildIndexAndRotType(this, index, ROT_ANGLE) )
    return 0.0;
  v3 = (const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *)std::vector<std::shared_ptr<RoutePoint>>::operator[](
                                                                                              &this->point_vec_,
                                                                                              index);
  v4 = std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(v3);
  p_rot_angle_move_speed = &v4->rot_angle_move_speed;
  if ( *(_BYTE *)(((unsigned __int64)p_rot_angle_move_speed >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_rot_angle_move_speed & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_rot_angle_move_speed >> 3)
                                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(p_rot_angle_move_speed);
  }
  return v4->rot_angle_move_speed;
};

// Line 935: range 000000001318B634-000000001318B696
int32_t __cdecl PlatformRoute::getNextIndex(const PlatformRoute *const this, int32_t index)
{
  __int64 v2; // rax

  if ( std::vector<std::shared_ptr<RoutePoint>>::size(&this->point_vec_) )
    return (index + 1) % std::vector<std::shared_ptr<RoutePoint>>::size(&this->point_vec_);
  else
    LODWORD(v2) = index;
  return v2;
};

// Line 944: range 000000001318B698-000000001318B6EB
bool __cdecl PlatformRoute::isVaildIndex(const PlatformRoute *const this, int32_t index)
{
  return index >= 0 && index < std::vector<std::shared_ptr<RoutePoint>>::size(&this->point_vec_);
};

// Line 953: range 000000001318B6EC-000000001318B75F
bool __cdecl PlatformRoute::isVaildIndexAndRotType(
        const PlatformRoute *const this,
        int32_t index,
        data::RotType rot_type)
{
  if ( !PlatformRoute::isVaildIndex(this, index) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rot_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rot_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->rot_type_);
  }
  return rot_type == this->rot_type_;
};

// Line 959: range 000000001318B760-000000001318B99D
uint32_t __cdecl PlatformRoute::getPointIdToSave(const PlatformRoute *const this, uint32_t current_point_id)
{
  std::shared_ptr<RoutePoint> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  data::RouteRecordMode record_mode; // eax
  const std::shared_ptr<RoutePoint> *v6; // rax
  const std::shared_ptr<RoutePoint> *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  uint32_t v10; // r14d
  uint32_t result; // eax
  char v12[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (std::shared_ptr<RoutePoint> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::shared_ptr<RoutePoint> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<RoutePoint,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 13 point_ptr:960";
  v2[1]._M_ptr = (std::__shared_ptr<RoutePoint,(__gnu_cxx::_Lock_policy)2>::element_type *)PlatformRoute::getPointIdToSave;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v2[2]._M_ptr = 0LL;
  v2[2]._M_refcount._M_pi = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->record_mode_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->record_mode_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->record_mode_);
  }
  record_mode = this->record_mode_;
  if ( record_mode == Prereach )
  {
    if ( !std::vector<std::shared_ptr<RoutePoint>>::empty(&this->point_vec_) )
    {
      v6 = std::vector<std::shared_ptr<RoutePoint>>::back(&this->point_vec_);
      std::shared_ptr<RoutePoint>::operator=(v2 + 2, v6);
    }
  }
  else if ( record_mode == Reach && !std::vector<std::shared_ptr<RoutePoint>>::empty(&this->point_vec_) )
  {
    v7 = std::vector<std::shared_ptr<RoutePoint>>::operator[](&this->point_vec_, 0LL);
    std::shared_ptr<RoutePoint>::operator=(v2 + 2, v7);
  }
  if ( std::operator!=<RoutePoint>(0LL, v2 + 2) )
  {
    v8 = (unsigned __int64)std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoutePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    v9 = *(_QWORD *)v8 + 32LL;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    v10 = (*(__int64 (__fastcall **)(unsigned __int64))v9)(v8);
  }
  else
  {
    v10 = current_point_id;
  }
  std::shared_ptr<RoutePoint>::~shared_ptr(v2 + 2);
  result = v10;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<RoutePoint,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
