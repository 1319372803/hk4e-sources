// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/player_activity_comp.h

// Line 32: range 00000000170950F4-000000001709511E
void __cdecl PlayerActivityComp::~PlayerActivityComp(PlayerActivityComp *const this)
{
  PlayerActivityComp::~PlayerActivityComp(this);
  operator delete(this, 0xB8uLL);
};

// Line 32: range 0000000017095086-00000000170950F3
void __cdecl PlayerActivityComp::~PlayerActivityComp(PlayerActivityComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PlayerActivityComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerCompBase = v1;
  PlayerUnixTimer::~PlayerUnixTimer(&this->activity_timer_);
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::~unordered_map(&this->activity_map_);
  PlayerCompBase::~PlayerCompBase(this);
};

// Line 43: range 000000001747FA20-000000001747FC52
void __cdecl ZN18PlayerActivityCompCI214PlayerCompBaseER6Player(PlayerActivityComp *const this, Player *a2)
{
  int (**v2)(...); // rdx
  PlayerActivityComp **v3; // r8
  const std::_Placeholder<1> *v4; // r9
  PlayerActivityComp *v5; // [rsp+18h] [rbp-78h] BYREF
  PlayerPtr p_player_ptr; // [rsp+20h] [rbp-70h] BYREF
  void (*__f[2])(PlayerActivityComp *, unsigned __int64); // [rsp+30h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (PlayerActivityComp::*)(long unsigned int),PlayerActivityComp*,const std::_Placeholder<1>&>::type p___f; // [rsp+40h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+60h] [rbp-30h] BYREF

  PlayerCompBase::PlayerCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'PlayerActivityComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerCompBase = v2;
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::unordered_map(&this->activity_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->fly_sea_lamp_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fly_sea_lamp_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fly_sea_lamp_num_);
  }
  this->fly_sea_lamp_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fly_sea_lamp_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fly_sea_lamp_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fly_sea_lamp_time_);
  }
  this->fly_sea_lamp_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v5 = this;
  __f[0] = (void (*)(PlayerActivityComp *, unsigned __int64))PlayerActivityComp::onActivityTimer;
  __f[1] = 0LL;
  std::bind<void (PlayerActivityComp::*)(unsigned long),PlayerActivityComp*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v5,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v3,
    v4);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (PlayerActivityComp::*)(unsigned long) ()(PlayerActivityComp*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->activity_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
};

// Line 223: range 00000000138CAC18-00000000138CAD2E
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<AsterActivity> __cdecl PlayerActivityComp::findActivity<AsterActivity>(
        PlayerActivityComp *const this,
        uint32_t activity_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<AsterActivity> result; // rax
  int activity_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  activity_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 16 activity_ptr:225";
  *(_QWORD *)(v3 + 16) = PlayerActivityComp::findActivity<AsterActivity>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v3 + 32), *(__int64 *)&activity_id, activity_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  std::dynamic_pointer_cast<AsterActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<AsterActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 223: range 00000000180EC866-00000000180EC97C
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<BrickBreakerActivity> __cdecl PlayerActivityComp::findActivity<BrickBreakerActivity>(
        PlayerActivityComp *const this,
        uint32_t activity_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<BrickBreakerActivity> result; // rax
  int activity_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  activity_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 16 activity_ptr:225";
  *(_QWORD *)(v3 + 16) = PlayerActivityComp::findActivity<BrickBreakerActivity>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v3 + 32), *(__int64 *)&activity_id, activity_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  std::dynamic_pointer_cast<BrickBreakerActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 223: range 00000000151DFAFA-00000000151DFC10
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<HideAndSeekActivity> __cdecl PlayerActivityComp::findActivity<HideAndSeekActivity>(
        PlayerActivityComp *const this,
        uint32_t activity_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<HideAndSeekActivity> result; // rax
  int activity_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  activity_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 16 activity_ptr:225";
  *(_QWORD *)(v3 + 16) = PlayerActivityComp::findActivity<HideAndSeekActivity>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v3 + 32), *(__int64 *)&activity_id, activity_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  std::dynamic_pointer_cast<HideAndSeekActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 223: range 00000000138CA974-00000000138CAA8A
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<SalesmanMpActivity> __cdecl PlayerActivityComp::findActivity<SalesmanMpActivity>(
        PlayerActivityComp *const this,
        uint32_t activity_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<SalesmanMpActivity> result; // rax
  int activity_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  activity_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 16 activity_ptr:225";
  *(_QWORD *)(v3 + 16) = PlayerActivityComp::findActivity<SalesmanMpActivity>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v3 + 32), *(__int64 *)&activity_id, activity_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  std::dynamic_pointer_cast<SalesmanMpActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<SalesmanMpActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 223: range 00000000151E14F0-00000000151E1606
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<SeaLampV3Activity> __cdecl PlayerActivityComp::findActivity<SeaLampV3Activity>(
        PlayerActivityComp *const this,
        uint32_t activity_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<SeaLampV3Activity> result; // rax
  int activity_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  activity_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 16 activity_ptr:225";
  *(_QWORD *)(v3 + 16) = PlayerActivityComp::findActivity<SeaLampV3Activity>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v3 + 32), *(__int64 *)&activity_id, activity_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  std::dynamic_pointer_cast<SeaLampV3Activity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 223: range 0000000016D9E28C-0000000016D9E3A2
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<SummerTimeActivity> __cdecl PlayerActivityComp::findActivity<SummerTimeActivity>(
        PlayerActivityComp *const this,
        uint32_t activity_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<SummerTimeActivity> result; // rax
  int activity_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  activity_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 16 activity_ptr:225";
  *(_QWORD *)(v3 + 16) = PlayerActivityComp::findActivity<SummerTimeActivity>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v3 + 32), *(__int64 *)&activity_id, activity_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  std::dynamic_pointer_cast<SummerTimeActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<SummerTimeActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 223: range 00000000138CDE22-00000000138CDF38
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<SumoActivity> __cdecl PlayerActivityComp::findActivity<SumoActivity>(
        PlayerActivityComp *const this,
        uint32_t activity_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<SumoActivity> result; // rax
  int activity_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  activity_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 16 activity_ptr:225";
  *(_QWORD *)(v3 + 16) = PlayerActivityComp::findActivity<SumoActivity>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v3 + 32), *(__int64 *)&activity_id, activity_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  std::dynamic_pointer_cast<SumoActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<SumoActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138CC544-00000000138CC720
std::shared_ptr<ArenaChallengeActivity> __cdecl PlayerActivityComp::findOpenningActivity<ArenaChallengeActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<ArenaChallengeActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<ArenaChallengeActivity>::shared_ptr((std::shared_ptr<ArenaChallengeActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == ArenaChallengeActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<ArenaChallengeActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<ArenaChallengeActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138D1B80-00000000138D1D5C
std::shared_ptr<BartenderActivity> __cdecl PlayerActivityComp::findOpenningActivity<BartenderActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<BartenderActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<BartenderActivity>::shared_ptr((std::shared_ptr<BartenderActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == BartenderActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<BartenderActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<BartenderActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138CB0D4-00000000138CB2B0
std::shared_ptr<BlessingActivity> __cdecl PlayerActivityComp::findOpenningActivity<BlessingActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<BlessingActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<BlessingActivity>::shared_ptr((std::shared_ptr<BlessingActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == BlessingActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<BlessingActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<BlessingActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 0000000016398B4C-0000000016398D28
std::shared_ptr<BounceConjuringActivity> __cdecl PlayerActivityComp::findOpenningActivity<BounceConjuringActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<BounceConjuringActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<BounceConjuringActivity>::shared_ptr((std::shared_ptr<BounceConjuringActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == BounceConjuringActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<BounceConjuringActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<BounceConjuringActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 000000001723F46A-000000001723F646
std::shared_ptr<CharAmusementActivity> __cdecl PlayerActivityComp::findOpenningActivity<CharAmusementActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<CharAmusementActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<CharAmusementActivity>::shared_ptr((std::shared_ptr<CharAmusementActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == CharAmusementActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<CharAmusementActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138CD792-00000000138CD96E
std::shared_ptr<ChessActivity> __cdecl PlayerActivityComp::findOpenningActivity<ChessActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<ChessActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<ChessActivity>::shared_ptr((std::shared_ptr<ChessActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == ChessActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<ChessActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<ChessActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138D5246-00000000138D5422
std::shared_ptr<CoinCollectActivity> __cdecl PlayerActivityComp::findOpenningActivity<CoinCollectActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<CoinCollectActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<CoinCollectActivity>::shared_ptr((std::shared_ptr<CoinCollectActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == CoinCollectActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<CoinCollectActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<CoinCollectActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138D1D98-00000000138D1F74
std::shared_ptr<CrystalLinkActivity> __cdecl PlayerActivityComp::findOpenningActivity<CrystalLinkActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<CrystalLinkActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<CrystalLinkActivity>::shared_ptr((std::shared_ptr<CrystalLinkActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == CrystalLinkActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<CrystalLinkActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<CrystalLinkActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138CFCA6-00000000138CFE82
std::shared_ptr<DigActivity> __cdecl PlayerActivityComp::findOpenningActivity<DigActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<DigActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<DigActivity>::shared_ptr((std::shared_ptr<DigActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == DigActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<DigActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<DigActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 0000000017D8E74C-0000000017D8E928
std::shared_ptr<DragonSpineActivity> __cdecl PlayerActivityComp::findOpenningActivity<DragonSpineActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<DragonSpineActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<DragonSpineActivity>::shared_ptr((std::shared_ptr<DragonSpineActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == DragonSpineActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<DragonSpineActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<DragonSpineActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138D588E-00000000138D5A6A
std::shared_ptr<DuelHeartActivity> __cdecl PlayerActivityComp::findOpenningActivity<DuelHeartActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<DuelHeartActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<DuelHeartActivity>::shared_ptr((std::shared_ptr<DuelHeartActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == DuelHeartActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<DuelHeartActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<DuelHeartActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 000000001323C4B0-000000001323C68C
std::shared_ptr<EchoShellActivity> __cdecl PlayerActivityComp::findOpenningActivity<EchoShellActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<EchoShellActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<EchoShellActivity>::shared_ptr((std::shared_ptr<EchoShellActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == EchoShellActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<EchoShellActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<EchoShellActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138CAEBC-00000000138CB098
std::shared_ptr<EffigyActivity> __cdecl PlayerActivityComp::findOpenningActivity<EffigyActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<EffigyActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<EffigyActivity>::shared_ptr((std::shared_ptr<EffigyActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == EffigyActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<EffigyActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<EffigyActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138D502E-00000000138D520A
std::shared_ptr<EffigyChallengeV2Activity> __cdecl PlayerActivityComp::findOpenningActivity<EffigyChallengeV2Activity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<EffigyChallengeV2Activity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<EffigyChallengeV2Activity>::shared_ptr(
        (std::shared_ptr<EffigyChallengeV2Activity> *const)this,
        0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == EffigyChallengeV2Activity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<EffigyChallengeV2Activity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<EffigyChallengeV2Activity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 0000000013213A92-0000000013213C6E
std::shared_ptr<ExpeditionActivity> __cdecl PlayerActivityComp::findOpenningActivity<ExpeditionActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<ExpeditionActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<ExpeditionActivity>::shared_ptr((std::shared_ptr<ExpeditionActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == ExpeditionActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<ExpeditionActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<ExpeditionActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 0000000014A0B8E6-0000000014A0BAC2
std::shared_ptr<FindHilichurlActivity> __cdecl PlayerActivityComp::findOpenningActivity<FindHilichurlActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<FindHilichurlActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<FindHilichurlActivity>::shared_ptr((std::shared_ptr<FindHilichurlActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == FindHilichurlActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<FindHilichurlActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<FindHilichurlActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138D261E-00000000138D27FA
std::shared_ptr<GachaActivity> __cdecl PlayerActivityComp::findOpenningActivity<GachaActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<GachaActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<GachaActivity>::shared_ptr((std::shared_ptr<GachaActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == GachaActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<GachaActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<GachaActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138D3F6E-00000000138D414A
std::shared_ptr<GearActivity> __cdecl PlayerActivityComp::findOpenningActivity<GearActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<GearActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<GearActivity>::shared_ptr((std::shared_ptr<GearActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == GearActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<GearActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<GearActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 0000000016DD6094-0000000016DD6270
std::shared_ptr<HachiActivity> __cdecl PlayerActivityComp::findOpenningActivity<HachiActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<HachiActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<HachiActivity>::shared_ptr((std::shared_ptr<HachiActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == HachiActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<HachiActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<HachiActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138CC974-00000000138CCB50
std::shared_ptr<HideAndSeekActivity> __cdecl PlayerActivityComp::findOpenningActivity<HideAndSeekActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<HideAndSeekActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<HideAndSeekActivity>::shared_ptr((std::shared_ptr<HideAndSeekActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == HideAndSeekActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<HideAndSeekActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138D45B6-00000000138D4792
std::shared_ptr<InstableSprayActivity> __cdecl PlayerActivityComp::findOpenningActivity<InstableSprayActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<InstableSprayActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<InstableSprayActivity>::shared_ptr((std::shared_ptr<InstableSprayActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == InstableSprayActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<InstableSprayActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<InstableSprayActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138D2406-00000000138D25E2
std::shared_ptr<IrodoriActivity> __cdecl PlayerActivityComp::findOpenningActivity<IrodoriActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<IrodoriActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<IrodoriActivity>::shared_ptr((std::shared_ptr<IrodoriActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == IrodoriActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<IrodoriActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<IrodoriActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000176E3F06-00000000176E40E2
std::shared_ptr<IslandPartyActivity> __cdecl PlayerActivityComp::findOpenningActivity<IslandPartyActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<IslandPartyActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<IslandPartyActivity>::shared_ptr((std::shared_ptr<IslandPartyActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == IslandPartyActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<IslandPartyActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<IslandPartyActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138D1658-00000000138D1834
std::shared_ptr<LanternRiteActivity> __cdecl PlayerActivityComp::findOpenningActivity<LanternRiteActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<LanternRiteActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<LanternRiteActivity>::shared_ptr((std::shared_ptr<LanternRiteActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == LanternRiteActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<LanternRiteActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<LanternRiteActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 0000000014A0F01A-0000000014A0F1F6
std::shared_ptr<LuminanceStoneChallengeActivity> __cdecl PlayerActivityComp::findOpenningActivity<LuminanceStoneChallengeActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<LuminanceStoneChallengeActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<LuminanceStoneChallengeActivity>::shared_ptr(
        (std::shared_ptr<LuminanceStoneChallengeActivity> *const)this,
        0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == LuminanceStoneChallengeActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<LuminanceStoneChallengeActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<LuminanceStoneChallengeActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138D1968-00000000138D1B44
std::shared_ptr<MichiaeMatsuriActivity> __cdecl PlayerActivityComp::findOpenningActivity<MichiaeMatsuriActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<MichiaeMatsuriActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<MichiaeMatsuriActivity>::shared_ptr((std::shared_ptr<MichiaeMatsuriActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == MichiaeMatsuriActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<MichiaeMatsuriActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<MichiaeMatsuriActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138CCF38-00000000138CD114
std::shared_ptr<MistTrialActivity> __cdecl PlayerActivityComp::findOpenningActivity<MistTrialActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<MistTrialActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<MistTrialActivity>::shared_ptr((std::shared_ptr<MistTrialActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == MistTrialActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<MistTrialActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<MistTrialActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000132424E0-00000000132426BC
std::shared_ptr<MoonfinTrialActivity> __cdecl PlayerActivityComp::findOpenningActivity<MoonfinTrialActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<MoonfinTrialActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<MoonfinTrialActivity>::shared_ptr((std::shared_ptr<MoonfinTrialActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == MoonfinTrialActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<MoonfinTrialActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<MoonfinTrialActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138D47CE-00000000138D49AA
std::shared_ptr<MuqadasPotionActivity> __cdecl PlayerActivityComp::findOpenningActivity<MuqadasPotionActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<MuqadasPotionActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<MuqadasPotionActivity>::shared_ptr((std::shared_ptr<MuqadasPotionActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == MuqadasPotionActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<MuqadasPotionActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<MuqadasPotionActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138CF876-00000000138CFA52
std::shared_ptr<MusicGameActivity> __cdecl PlayerActivityComp::findOpenningActivity<MusicGameActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<MusicGameActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<MusicGameActivity>::shared_ptr((std::shared_ptr<MusicGameActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == MusicGameActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<MusicGameActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<MusicGameActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 0000000016399D76-0000000016399F52
std::shared_ptr<PlantFlowerActivity> __cdecl PlayerActivityComp::findOpenningActivity<PlantFlowerActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<PlantFlowerActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<PlantFlowerActivity>::shared_ptr((std::shared_ptr<PlantFlowerActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == PlantFlowerActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<PlantFlowerActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<PlantFlowerActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138D1440-00000000138D161C
std::shared_ptr<PotionActivity> __cdecl PlayerActivityComp::findOpenningActivity<PotionActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<PotionActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<PotionActivity>::shared_ptr((std::shared_ptr<PotionActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == PotionActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<PotionActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<PotionActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 0000000017D909D8-0000000017D90BB4
std::shared_ptr<RockBoardExploreActivity> __cdecl PlayerActivityComp::findOpenningActivity<RockBoardExploreActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<RockBoardExploreActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<RockBoardExploreActivity>::shared_ptr((std::shared_ptr<RockBoardExploreActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == RockBoardExploreActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<RockBoardExploreActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<RockBoardExploreActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138D3D56-00000000138D3F32
std::shared_ptr<RogueDiaryActivity> __cdecl PlayerActivityComp::findOpenningActivity<RogueDiaryActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<RogueDiaryActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<RogueDiaryActivity>::shared_ptr((std::shared_ptr<RogueDiaryActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == RogueDiaryActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<RogueDiaryActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<RogueDiaryActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138CFA8E-00000000138CFC6A
std::shared_ptr<RoguelikeDungeonActivity> __cdecl PlayerActivityComp::findOpenningActivity<RoguelikeDungeonActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<RoguelikeDungeonActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<RoguelikeDungeonActivity>::shared_ptr((std::shared_ptr<RoguelikeDungeonActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == RoguelikeDungeonActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<RoguelikeDungeonActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<RoguelikeDungeonActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 0000000017D8D8A4-0000000017D8DA80
std::shared_ptr<SalesmanActivity> __cdecl PlayerActivityComp::findOpenningActivity<SalesmanActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<SalesmanActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<SalesmanActivity>::shared_ptr((std::shared_ptr<SalesmanActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == SalesmanActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<SalesmanActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<SalesmanActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138D1FD6-00000000138D21B2
std::shared_ptr<SpiceActivity> __cdecl PlayerActivityComp::findOpenningActivity<SpiceActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<SpiceActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<SpiceActivity>::shared_ptr((std::shared_ptr<SpiceActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == SpiceActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<SpiceActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<SpiceActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138CD57A-00000000138CD756
std::shared_ptr<SummerTimeActivity> __cdecl PlayerActivityComp::findOpenningActivity<SummerTimeActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<SummerTimeActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<SummerTimeActivity>::shared_ptr((std::shared_ptr<SummerTimeActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == SummerTimeActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<SummerTimeActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<SummerTimeActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138D4186-00000000138D4362
std::shared_ptr<SummerTimeV2Activity> __cdecl PlayerActivityComp::findOpenningActivity<SummerTimeV2Activity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<SummerTimeV2Activity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<SummerTimeV2Activity>::shared_ptr((std::shared_ptr<SummerTimeV2Activity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == SummerTimeV2Activity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<SummerTimeV2Activity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<SummerTimeV2Activity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138D5AA6-00000000138D5C82
std::shared_ptr<TeamChainActivity> __cdecl PlayerActivityComp::findOpenningActivity<TeamChainActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<TeamChainActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<TeamChainActivity>::shared_ptr((std::shared_ptr<TeamChainActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == TeamChainActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<TeamChainActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<TeamChainActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 0000000013EF1AD8-0000000013EF1CB4
std::shared_ptr<TreasureMapActivity> __cdecl PlayerActivityComp::findOpenningActivity<TreasureMapActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<TreasureMapActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<TreasureMapActivity>::shared_ptr((std::shared_ptr<TreasureMapActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == TreasureMapActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<TreasureMapActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<TreasureMapActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 0000000013EF1CF0-0000000013EF1ECC
std::shared_ptr<TreasureSeelieActivity> __cdecl PlayerActivityComp::findOpenningActivity<TreasureSeelieActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<TreasureSeelieActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<TreasureSeelieActivity>::shared_ptr((std::shared_ptr<TreasureSeelieActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == TreasureSeelieActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<TreasureSeelieActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<TreasureSeelieActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 0000000017DAF660-0000000017DAF83C
std::shared_ptr<WaterSpiritActivity> __cdecl PlayerActivityComp::findOpenningActivity<WaterSpiritActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<WaterSpiritActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<WaterSpiritActivity>::shared_ptr((std::shared_ptr<WaterSpiritActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == WaterSpiritActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<WaterSpiritActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<WaterSpiritActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138D49E6-00000000138D4BC2
std::shared_ptr<WindFieldActivity> __cdecl PlayerActivityComp::findOpenningActivity<WindFieldActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<WindFieldActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<WindFieldActivity>::shared_ptr((std::shared_ptr<WindFieldActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == WindFieldActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<WindFieldActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<WindFieldActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 230: range 00000000138CFEBE-00000000138D009A
std::shared_ptr<WinterCampActivity> __cdecl PlayerActivityComp::findOpenningActivity<WinterCampActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<WinterCampActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<WinterCampActivity>::shared_ptr((std::shared_ptr<WinterCampActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == WinterCampActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<WinterCampActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<WinterCampActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 245: range 0000000016D8900A-0000000016D89344
__int64 __fastcall PlayerActivityComp::internalCheckEnterActivityDungeon<BlitzRushActivity>(
        PlayerActivityComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  unsigned int v6; // r14d
  std::__shared_ptr_access<BlitzRushActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+18h] [rbp-B8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 dungeon_id:245 64 16 16 activity_ptr:247";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::internalCheckEnterActivityDungeon<BlitzRushActivity>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  PlayerActivityComp::findOpenningActivity<BlitzRushActivity>((PlayerActivityComp *const)(v2 + 64));
  if ( std::operator==<BlitzRushActivity>(0LL, (const std::shared_ptr<BlitzRushActivity> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/player_activity_comp.h",
      "internalCheckEnterActivityDungeon",
      250);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v14,
           (const char (*)[31])"activity is not opening, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<BlitzRushActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlitzRushActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    ret = BlitzRushActivity::checkEnterDungeon(v7, *(_DWORD *)(v2 + 48));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/player_activity_comp.h",
        "internalCheckEnterActivityDungeon",
        257);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v14,
             (const char (*)[32])"checkEnterDungeon failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" ,dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = ret;
    }
    else
    {
      v6 = 0;
    }
  }
  std::shared_ptr<BlitzRushActivity>::~shared_ptr((std::shared_ptr<BlitzRushActivity> *const)(v2 + 64));
  result = v6;
  if ( v15 == (char *)v2 )
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

// Line 245: range 0000000016D89346-0000000016D89680
__int64 __fastcall PlayerActivityComp::internalCheckEnterActivityDungeon<ChessActivity>(
        PlayerActivityComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  unsigned int v6; // r14d
  ChessActivity *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+18h] [rbp-B8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 dungeon_id:245 64 16 16 activity_ptr:247";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::internalCheckEnterActivityDungeon<ChessActivity>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  PlayerActivityComp::findOpenningActivity<ChessActivity>((PlayerActivityComp *const)(v2 + 64));
  if ( std::operator==<ChessActivity>(0LL, (const std::shared_ptr<ChessActivity> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/player_activity_comp.h",
      "internalCheckEnterActivityDungeon",
      250);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v14,
           (const char (*)[31])"activity is not opening, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    ret = ChessActivity::checkEnterDungeon(v7, *(_DWORD *)(v2 + 48));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/player_activity_comp.h",
        "internalCheckEnterActivityDungeon",
        257);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v14,
             (const char (*)[32])"checkEnterDungeon failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" ,dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = ret;
    }
    else
    {
      v6 = 0;
    }
  }
  std::shared_ptr<ChessActivity>::~shared_ptr((std::shared_ptr<ChessActivity> *const)(v2 + 64));
  result = v6;
  if ( v15 == (char *)v2 )
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

// Line 245: range 0000000016D8A6AE-0000000016D8A9E8
__int64 __fastcall PlayerActivityComp::internalCheckEnterActivityDungeon<EffigyChallengeV2Activity>(
        PlayerActivityComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  unsigned int v6; // r14d
  std::__shared_ptr_access<EffigyChallengeV2Activity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+18h] [rbp-B8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 dungeon_id:245 64 16 16 activity_ptr:247";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::internalCheckEnterActivityDungeon<EffigyChallengeV2Activity>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  PlayerActivityComp::findOpenningActivity<EffigyChallengeV2Activity>((PlayerActivityComp *const)(v2 + 64));
  if ( std::operator==<EffigyChallengeV2Activity>(0LL, (const std::shared_ptr<EffigyChallengeV2Activity> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/player_activity_comp.h",
      "internalCheckEnterActivityDungeon",
      250);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v14,
           (const char (*)[31])"activity is not opening, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<EffigyChallengeV2Activity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<EffigyChallengeV2Activity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    ret = EffigyChallengeV2Activity::checkEnterDungeon(v7, *(_DWORD *)(v2 + 48));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/player_activity_comp.h",
        "internalCheckEnterActivityDungeon",
        257);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v14,
             (const char (*)[32])"checkEnterDungeon failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" ,dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = ret;
    }
    else
    {
      v6 = 0;
    }
  }
  std::shared_ptr<EffigyChallengeV2Activity>::~shared_ptr((std::shared_ptr<EffigyChallengeV2Activity> *const)(v2 + 64));
  result = v6;
  if ( v15 == (char *)v2 )
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

// Line 245: range 0000000016D88CCE-0000000016D89008
__int64 __fastcall PlayerActivityComp::internalCheckEnterActivityDungeon<FleurFairActivity>(
        PlayerActivityComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  unsigned int v6; // r14d
  std::__shared_ptr_access<FleurFairActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+18h] [rbp-B8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 dungeon_id:245 64 16 16 activity_ptr:247";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::internalCheckEnterActivityDungeon<FleurFairActivity>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  PlayerActivityComp::findOpenningActivity<FleurFairActivity>((PlayerActivityComp *const)(v2 + 64));
  if ( std::operator==<FleurFairActivity>(0LL, (const std::shared_ptr<FleurFairActivity> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/player_activity_comp.h",
      "internalCheckEnterActivityDungeon",
      250);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v14,
           (const char (*)[31])"activity is not opening, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<FleurFairActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    ret = FleurFairActivity::checkEnterDungeon(v7, *(_DWORD *)(v2 + 48));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/player_activity_comp.h",
        "internalCheckEnterActivityDungeon",
        257);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v14,
             (const char (*)[32])"checkEnterDungeon failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" ,dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = ret;
    }
    else
    {
      v6 = 0;
    }
  }
  std::shared_ptr<FleurFairActivity>::~shared_ptr((std::shared_ptr<FleurFairActivity> *const)(v2 + 64));
  result = v6;
  if ( v15 == (char *)v2 )
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

// Line 245: range 0000000016D89682-0000000016D899BC
__int64 __fastcall PlayerActivityComp::internalCheckEnterActivityDungeon<HachiActivity>(
        PlayerActivityComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  unsigned int v6; // r14d
  std::__shared_ptr_access<HachiActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+18h] [rbp-B8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 dungeon_id:245 64 16 16 activity_ptr:247";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::internalCheckEnterActivityDungeon<HachiActivity>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  PlayerActivityComp::findOpenningActivity<HachiActivity>((PlayerActivityComp *const)(v2 + 64));
  if ( std::operator==<HachiActivity>(0LL, (const std::shared_ptr<HachiActivity> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/player_activity_comp.h",
      "internalCheckEnterActivityDungeon",
      250);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v14,
           (const char (*)[31])"activity is not opening, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<HachiActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HachiActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    ret = HachiActivity::checkEnterDungeon(v7, *(_DWORD *)(v2 + 48));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/player_activity_comp.h",
        "internalCheckEnterActivityDungeon",
        257);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v14,
             (const char (*)[32])"checkEnterDungeon failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" ,dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = ret;
    }
    else
    {
      v6 = 0;
    }
  }
  std::shared_ptr<HachiActivity>::~shared_ptr((std::shared_ptr<HachiActivity> *const)(v2 + 64));
  result = v6;
  if ( v15 == (char *)v2 )
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

// Line 245: range 0000000016D89CFA-0000000016D8A034
__int64 __fastcall PlayerActivityComp::internalCheckEnterActivityDungeon<IrodoriActivity>(
        PlayerActivityComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  unsigned int v6; // r14d
  IrodoriActivity *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+18h] [rbp-B8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 dungeon_id:245 64 16 16 activity_ptr:247";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::internalCheckEnterActivityDungeon<IrodoriActivity>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  PlayerActivityComp::findOpenningActivity<IrodoriActivity>((PlayerActivityComp *const)(v2 + 64));
  if ( std::operator==<IrodoriActivity>(0LL, (const std::shared_ptr<IrodoriActivity> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/player_activity_comp.h",
      "internalCheckEnterActivityDungeon",
      250);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v14,
           (const char (*)[31])"activity is not opening, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<IrodoriActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IrodoriActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    ret = IrodoriActivity::checkEnterDungeon(v7, *(_DWORD *)(v2 + 48));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/player_activity_comp.h",
        "internalCheckEnterActivityDungeon",
        257);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v14,
             (const char (*)[32])"checkEnterDungeon failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" ,dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = ret;
    }
    else
    {
      v6 = 0;
    }
  }
  std::shared_ptr<IrodoriActivity>::~shared_ptr((std::shared_ptr<IrodoriActivity> *const)(v2 + 64));
  result = v6;
  if ( v15 == (char *)v2 )
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

// Line 245: range 0000000016D899BE-0000000016D89CF8
__int64 __fastcall PlayerActivityComp::internalCheckEnterActivityDungeon<LanternRiteActivity>(
        PlayerActivityComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  unsigned int v6; // r14d
  std::__shared_ptr_access<LanternRiteActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+18h] [rbp-B8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 dungeon_id:245 64 16 16 activity_ptr:247";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::internalCheckEnterActivityDungeon<LanternRiteActivity>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  PlayerActivityComp::findOpenningActivity<LanternRiteActivity>((PlayerActivityComp *const)(v2 + 64));
  if ( std::operator==<LanternRiteActivity>(0LL, (const std::shared_ptr<LanternRiteActivity> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/player_activity_comp.h",
      "internalCheckEnterActivityDungeon",
      250);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v14,
           (const char (*)[31])"activity is not opening, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<LanternRiteActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LanternRiteActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    ret = LanternRiteActivity::checkEnterDungeon(v7, *(_DWORD *)(v2 + 48));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/player_activity_comp.h",
        "internalCheckEnterActivityDungeon",
        257);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v14,
             (const char (*)[32])"checkEnterDungeon failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" ,dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = ret;
    }
    else
    {
      v6 = 0;
    }
  }
  std::shared_ptr<LanternRiteActivity>::~shared_ptr((std::shared_ptr<LanternRiteActivity> *const)(v2 + 64));
  result = v6;
  if ( v15 == (char *)v2 )
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

// Line 245: range 0000000016D8A036-0000000016D8A370
__int64 __fastcall PlayerActivityComp::internalCheckEnterActivityDungeon<SummerTimeV2Activity>(
        PlayerActivityComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  unsigned int v6; // r14d
  SummerTimeV2Activity *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+18h] [rbp-B8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 dungeon_id:245 64 16 16 activity_ptr:247";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::internalCheckEnterActivityDungeon<SummerTimeV2Activity>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  PlayerActivityComp::findOpenningActivity<SummerTimeV2Activity>((PlayerActivityComp *const)(v2 + 64));
  if ( std::operator==<SummerTimeV2Activity>(0LL, (const std::shared_ptr<SummerTimeV2Activity> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/player_activity_comp.h",
      "internalCheckEnterActivityDungeon",
      250);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v14,
           (const char (*)[31])"activity is not opening, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<SummerTimeV2Activity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SummerTimeV2Activity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    ret = SummerTimeV2Activity::checkEnterDungeon(v7, *(_DWORD *)(v2 + 48));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/player_activity_comp.h",
        "internalCheckEnterActivityDungeon",
        257);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v14,
             (const char (*)[32])"checkEnterDungeon failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" ,dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = ret;
    }
    else
    {
      v6 = 0;
    }
  }
  std::shared_ptr<SummerTimeV2Activity>::~shared_ptr((std::shared_ptr<SummerTimeV2Activity> *const)(v2 + 64));
  result = v6;
  if ( v15 == (char *)v2 )
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

// Line 245: range 0000000016D8A9EA-0000000016D8AD24
__int64 __fastcall PlayerActivityComp::internalCheckEnterActivityDungeon<TeamChainActivity>(
        PlayerActivityComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  unsigned int v6; // r14d
  TeamChainActivity *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+18h] [rbp-B8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 dungeon_id:245 64 16 16 activity_ptr:247";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::internalCheckEnterActivityDungeon<TeamChainActivity>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  PlayerActivityComp::findOpenningActivity<TeamChainActivity>((PlayerActivityComp *const)(v2 + 64));
  if ( std::operator==<TeamChainActivity>(0LL, (const std::shared_ptr<TeamChainActivity> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/player_activity_comp.h",
      "internalCheckEnterActivityDungeon",
      250);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v14,
           (const char (*)[31])"activity is not opening, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<TeamChainActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TeamChainActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    ret = TeamChainActivity::checkEnterDungeon(v7, *(_DWORD *)(v2 + 48));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/player_activity_comp.h",
        "internalCheckEnterActivityDungeon",
        257);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v14,
             (const char (*)[32])"checkEnterDungeon failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" ,dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = ret;
    }
    else
    {
      v6 = 0;
    }
  }
  std::shared_ptr<TeamChainActivity>::~shared_ptr((std::shared_ptr<TeamChainActivity> *const)(v2 + 64));
  result = v6;
  if ( v15 == (char *)v2 )
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

// Line 245: range 0000000016D8A372-0000000016D8A6AC
__int64 __fastcall PlayerActivityComp::internalCheckEnterActivityDungeon<WindFieldActivity>(
        PlayerActivityComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  unsigned int v6; // r14d
  WindFieldActivity *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+18h] [rbp-B8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-B4h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 dungeon_id:245 64 16 16 activity_ptr:247";
  *(_QWORD *)(v2 + 16) = PlayerActivityComp::internalCheckEnterActivityDungeon<WindFieldActivity>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  PlayerActivityComp::findOpenningActivity<WindFieldActivity>((PlayerActivityComp *const)(v2 + 64));
  if ( std::operator==<WindFieldActivity>(0LL, (const std::shared_ptr<WindFieldActivity> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/player_activity_comp.h",
      "internalCheckEnterActivityDungeon",
      250);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v14,
           (const char (*)[31])"activity is not opening, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<WindFieldActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WindFieldActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    ret = WindFieldActivity::checkEnterDungeon(v7, *(_DWORD *)(v2 + 48));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/player_activity_comp.h",
        "internalCheckEnterActivityDungeon",
        257);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v14,
             (const char (*)[32])"checkEnterDungeon failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" ,dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = ret;
    }
    else
    {
      v6 = 0;
    }
  }
  std::shared_ptr<WindFieldActivity>::~shared_ptr((std::shared_ptr<WindFieldActivity> *const)(v2 + 64));
  result = v6;
  if ( v15 == (char *)v2 )
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

// Line 247: range 00000000138CA63A-00000000138CA816
std::shared_ptr<TrialAvatarActivity> __cdecl PlayerActivityComp::findOpenningActivity<TrialAvatarActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<TrialAvatarActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<TrialAvatarActivity>::shared_ptr((std::shared_ptr<TrialAvatarActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == TrialAvatarActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<TrialAvatarActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<TrialAvatarActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 265: range 0000000016D8AFF4-0000000016D8B20A
std::shared_ptr<BlitzRushActivity> __cdecl PlayerActivityComp::findOpenningActivity<BlitzRushActivity>(
        const PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v2; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  int v6; // ebx
  std::shared_ptr<BlitzRushActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+14h] [rbp-6Ch]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+28h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+30h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+38h] [rbp-48h]
  std::shared_ptr<Config> v14; // [rsp+40h] [rbp-40h] BYREF
  std::pair<unsigned int const,std::shared_ptr<BaseActivity> > v15; // [rsp+50h] [rbp-30h] BYREF

  __for_range = (const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v2 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<BaseActivity>>::pair(&v15, v2);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(&v15);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(&v15);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(&v14);
    if ( activity_type == BlitzRushActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL)
      && (v4 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr),
          BaseActivity::isOpening(v4, 0)) )
    {
      if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store16(this);
      std::dynamic_pointer_cast<BlitzRushActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
      v6 = 0;
    }
    else
    {
      v6 = 1;
    }
    std::pair<unsigned int const,std::shared_ptr<BaseActivity>>::~pair(&v15);
    if ( v6 != 1 )
      goto LABEL_18;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  std::shared_ptr<BlitzRushActivity>::shared_ptr((std::shared_ptr<BlitzRushActivity> *const)this, 0LL);
LABEL_18:
  result._M_ptr = (std::__shared_ptr<BlitzRushActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 265: range 0000000016D8B22A-0000000016D8B440
std::shared_ptr<MusicGameActivity> __cdecl PlayerActivityComp::findOpenningActivity<MusicGameActivity>(
        const PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v2; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  int v6; // ebx
  std::shared_ptr<MusicGameActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+14h] [rbp-6Ch]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+28h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+30h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+38h] [rbp-48h]
  std::shared_ptr<Config> v14; // [rsp+40h] [rbp-40h] BYREF
  std::pair<unsigned int const,std::shared_ptr<BaseActivity> > v15; // [rsp+50h] [rbp-30h] BYREF

  __for_range = (const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v2 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<BaseActivity>>::pair(&v15, v2);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(&v15);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(&v15);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(&v14);
    if ( activity_type == MusicGameActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL)
      && (v4 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr),
          BaseActivity::isOpening(v4, 0)) )
    {
      if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store16(this);
      std::dynamic_pointer_cast<MusicGameActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
      v6 = 0;
    }
    else
    {
      v6 = 1;
    }
    std::pair<unsigned int const,std::shared_ptr<BaseActivity>>::~pair(&v15);
    if ( v6 != 1 )
      goto LABEL_18;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  std::shared_ptr<MusicGameActivity>::shared_ptr((std::shared_ptr<MusicGameActivity> *const)this, 0LL);
LABEL_18:
  result._M_ptr = (std::__shared_ptr<MusicGameActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 265: range 0000000016D8ADBE-0000000016D8AFD4
std::shared_ptr<SummerTimeActivity> __cdecl PlayerActivityComp::findOpenningActivity<SummerTimeActivity>(
        const PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v2; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  int v6; // ebx
  std::shared_ptr<SummerTimeActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+14h] [rbp-6Ch]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+28h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+30h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+38h] [rbp-48h]
  std::shared_ptr<Config> v14; // [rsp+40h] [rbp-40h] BYREF
  std::pair<unsigned int const,std::shared_ptr<BaseActivity> > v15; // [rsp+50h] [rbp-30h] BYREF

  __for_range = (const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((const std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v2 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<BaseActivity>>::pair(&v15, v2);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(&v15);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(&v15);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(&v14);
    if ( activity_type == SummerTimeActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL)
      && (v4 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr),
          BaseActivity::isOpening(v4, 0)) )
    {
      if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store16(this);
      std::dynamic_pointer_cast<SummerTimeActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
      v6 = 0;
    }
    else
    {
      v6 = 1;
    }
    std::pair<unsigned int const,std::shared_ptr<BaseActivity>>::~pair(&v15);
    if ( v6 != 1 )
      goto LABEL_18;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  std::shared_ptr<SummerTimeActivity>::shared_ptr((std::shared_ptr<SummerTimeActivity> *const)this, 0LL);
LABEL_18:
  result._M_ptr = (std::__shared_ptr<SummerTimeActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 394: range 00000000138CE172-00000000138CE34E
std::shared_ptr<LunaRiteActivity> __cdecl PlayerActivityComp::findOpenningActivity<LunaRiteActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<LunaRiteActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<LunaRiteActivity>::shared_ptr((std::shared_ptr<LunaRiteActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == LunaRiteActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<LunaRiteActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<LunaRiteActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 513: range 0000000015D47F20-0000000015D480FC
std::shared_ptr<AsterActivity> __cdecl PlayerActivityComp::findOpenningActivity<AsterActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<AsterActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<AsterActivity>::shared_ptr((std::shared_ptr<AsterActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == AsterActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<AsterActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<AsterActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 788: range 000000001721057F-0000000017210589
uint32_t __cdecl PlayerActivityComp::getType()
{
  return 24;
};

// Line 820: range 0000000013EF22B6-0000000013EF2492
std::shared_ptr<SeaLampActivity> __cdecl PlayerActivityComp::findOpenningActivity<SeaLampActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<SeaLampActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<SeaLampActivity>::shared_ptr((std::shared_ptr<SeaLampActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == SeaLampActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<SeaLampActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<SeaLampActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 00000000138CDC0A-00000000138CDDE6
std::shared_ptr<BlitzRushActivity> __cdecl PlayerActivityComp::findOpenningActivity<BlitzRushActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<BlitzRushActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<BlitzRushActivity>::shared_ptr((std::shared_ptr<BlitzRushActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == BlitzRushActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<BlitzRushActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<BlitzRushActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 00000000138D545E-00000000138D563A
std::shared_ptr<BrickBreakerActivity> __cdecl PlayerActivityComp::findOpenningActivity<BrickBreakerActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<BrickBreakerActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<BrickBreakerActivity>::shared_ptr((std::shared_ptr<BrickBreakerActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == BrickBreakerActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<BrickBreakerActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 00000000138CD362-00000000138CD53E
std::shared_ptr<BuoyantCombatActivity> __cdecl PlayerActivityComp::findOpenningActivity<BuoyantCombatActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<BuoyantCombatActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<BuoyantCombatActivity>::shared_ptr((std::shared_ptr<BuoyantCombatActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == BuoyantCombatActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<BuoyantCombatActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<BuoyantCombatActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 00000000138CAAC6-00000000138CABDC
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<DeliveryActivity> __cdecl PlayerActivityComp::findActivity<DeliveryActivity>(
        PlayerActivityComp *const this,
        uint32_t activity_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<DeliveryActivity> result; // rax
  int activity_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  activity_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 16 activity_ptr:225";
  *(_QWORD *)(v3 + 16) = PlayerActivityComp::findActivity<DeliveryActivity>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v3 + 32), *(__int64 *)&activity_id, activity_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  std::dynamic_pointer_cast<DeliveryActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<DeliveryActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 00000000138D5676-00000000138D5852
std::shared_ptr<ElectroherculesBattleActivity> __cdecl PlayerActivityComp::findOpenningActivity<ElectroherculesBattleActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<ElectroherculesBattleActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<ElectroherculesBattleActivity>::shared_ptr(
        (std::shared_ptr<ElectroherculesBattleActivity> *const)this,
        0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == ElectroherculesBattleActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<ElectroherculesBattleActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<ElectroherculesBattleActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 00000000138CC75C-00000000138CC938
std::shared_ptr<FleurFairActivity> __cdecl PlayerActivityComp::findOpenningActivity<FleurFairActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<FleurFairActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<FleurFairActivity>::shared_ptr((std::shared_ptr<FleurFairActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == FleurFairActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<FleurFairActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<FleurFairActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 00000000138CAD6A-00000000138CAE80
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<FlightActivity> __cdecl PlayerActivityComp::findActivity<FlightActivity>(
        PlayerActivityComp *const this,
        uint32_t activity_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<FlightActivity> result; // rax
  int activity_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  activity_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 16 activity_ptr:225";
  *(_QWORD *)(v3 + 16) = PlayerActivityComp::findActivity<FlightActivity>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v3 + 32), *(__int64 *)&activity_id, activity_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  std::dynamic_pointer_cast<FlightActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<FlightActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 00000000138D4E16-00000000138D4FF2
std::shared_ptr<FungusFighterActivity> __cdecl PlayerActivityComp::findOpenningActivity<FungusFighterActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<FungusFighterActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<FungusFighterActivity>::shared_ptr((std::shared_ptr<FungusFighterActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == FungusFighterActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<FungusFighterActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<FungusFighterActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 00000000138D439E-00000000138D457A
std::shared_ptr<GravenInnocenceActivity> __cdecl PlayerActivityComp::findOpenningActivity<GravenInnocenceActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<GravenInnocenceActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<GravenInnocenceActivity>::shared_ptr((std::shared_ptr<GravenInnocenceActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == GravenInnocenceActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<GravenInnocenceActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<GravenInnocenceActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 00000000138D21EE-00000000138D23CA
std::shared_ptr<PhotoActivity> __cdecl PlayerActivityComp::findOpenningActivity<PhotoActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<PhotoActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<PhotoActivity>::shared_ptr((std::shared_ptr<PhotoActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == PhotoActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<PhotoActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<PhotoActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 00000000138CE38A-00000000138CE4A0
// local variable allocation has failed, the output may be wrong!
std::shared_ptr<PlantFlowerActivity> __cdecl PlayerActivityComp::findActivity<PlantFlowerActivity>(
        PlayerActivityComp *const this,
        uint32_t activity_id)
{
  int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<PlantFlowerActivity> result; // rax
  int activity_ida; // [rsp+Ch] [rbp-74h]
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  activity_ida = v2;
  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 16 activity_ptr:225";
  *(_QWORD *)(v3 + 16) = PlayerActivityComp::findActivity<PlantFlowerActivity>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v3 + 32), *(__int64 *)&activity_id, activity_ida);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  std::dynamic_pointer_cast<PlantFlowerActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v3 + 32));
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<PlantFlowerActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 00000000138D5CBE-00000000138D5E9A
std::shared_ptr<SeaLampV3Activity> __cdecl PlayerActivityComp::findOpenningActivity<SeaLampV3Activity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<SeaLampV3Activity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<SeaLampV3Activity>::shared_ptr((std::shared_ptr<SeaLampV3Activity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == SeaLampV3Activity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<SeaLampV3Activity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 00000000138CDF74-00000000138CE150
std::shared_ptr<SumoActivity> __cdecl PlayerActivityComp::findOpenningActivity<SumoActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<SumoActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<SumoActivity>::shared_ptr((std::shared_ptr<SumoActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == SumoActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<SumoActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<SumoActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 00000000138D4BFE-00000000138D4DDA
std::shared_ptr<VintageActivity> __cdecl PlayerActivityComp::findOpenningActivity<VintageActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<VintageActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<VintageActivity>::shared_ptr((std::shared_ptr<VintageActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == VintageActivity::getActivityStaticType() && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<VintageActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<VintageActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1216: range 00000000138CCD20-00000000138CCEFC
std::shared_ptr<ChannellerSlabActivity> __cdecl PlayerActivityComp::findOpenningActivity<ChannellerSlabActivity>(
        PlayerActivityComp *const this)
{
  __int64 v1; // rsi
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<ChannellerSlabActivity> result; // rax
  data::NewActivityType activity_type; // [rsp+1Ch] [rbp-54h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > *v10; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_id; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *activity_ptr; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v13[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = (std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *)(v1 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::begin((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseActivity>> *const)(v1 + 32))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<ChannellerSlabActivity>::shared_ptr((std::shared_ptr<ChannellerSlabActivity> *const)this, 0LL);
      goto LABEL_16;
    }
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator*(&__for_begin);
    activity_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    activity_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseActivity> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseActivity>>(v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(p_new_activity_config_mgr, *activity_id);
    std::shared_ptr<Config>::~shared_ptr(v13);
    if ( activity_type == ChannellerSlabActivity::getActivityStaticType()
      && std::operator!=<BaseActivity>(activity_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)activity_ptr);
      if ( BaseActivity::isOpening(v3, 0) )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseActivity>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::dynamic_pointer_cast<ChannellerSlabActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)this);
LABEL_16:
  result._M_ptr = (std::__shared_ptr<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
