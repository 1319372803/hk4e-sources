// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_dig_scanner.cpp

// Line 23: range 00000000162076EA-0000000016207A6B
int32_t __cdecl WidgetDigScanner::onCreate(WidgetDigScanner *const this, const Vector3 *pos, const Vector3 *rot)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  const DigActivity *v7; // rdi
  DigActivity *v8; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-B4h]
  int32_t reta; // [rsp+2Ch] [rbp-B4h]
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 12 10 new_rot:30 64 16 15 activity_ptr:24";
  *(_QWORD *)(v3 + 16) = WidgetDigScanner::onCreate;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getActivityComp(this->player_);
  PlayerActivityComp::findOpenningActivity<DigActivity>((PlayerActivityComp *const)(v3 + 64));
  if ( std::operator==<DigActivity>((const std::shared_ptr<DigActivity> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/widget/widget_dig_scanner.cpp",
      "onCreate",
      27);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v14, (const char (*)[19])"activity not open.");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = 860;
  }
  else
  {
    if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(rot, 12LL);
    }
    *(_QWORD *)(v3 + 32) = *(_QWORD *)&rot->x;
    *(float *)(v3 + 40) = rot->z;
    v7 = std::__shared_ptr_access<DigActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DigActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
    {
      v7 = (const DigActivity *)pos;
      __asan_report_load_n(pos, 12LL);
    }
    ret = DigActivity::calcWidgetRot(v7, *pos, (Vector3 *)(v3 + 32));
    if ( ret )
    {
      v6 = ret;
    }
    else
    {
      reta = WidgetGadgetCreator::onCreate(this, pos, (const Vector3 *)(v3 + 32));
      if ( reta )
      {
        v6 = reta;
      }
      else
      {
        v8 = std::__shared_ptr_access<DigActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DigActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        DigActivity::updateSearchingGadget(v8);
        v6 = 0;
      }
    }
  }
  std::shared_ptr<DigActivity>::~shared_ptr((std::shared_ptr<DigActivity> *const)(v3 + 64));
  result = v6;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};
