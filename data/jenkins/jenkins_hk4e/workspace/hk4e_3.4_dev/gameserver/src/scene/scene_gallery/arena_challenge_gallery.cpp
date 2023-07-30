// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/arena_challenge_gallery.cpp

// Line 18: range 0000000017FAD21E-0000000017FAD5B2
void __cdecl ArenaChallengeGallery::notifySelectDifficultyEvent(
        ArenaChallengeGallery *const this,
        uint32_t gadget_entity_id,
        uint32_t gadget_config_id,
        uint32_t arena_challenge_level,
        uint32_t arena_challenge_id,
        uint32_t uid)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  char *v9; // rsi
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  char v13; // cl
  __int64 v14; // rax
  char v15; // dl
  bool v16; // dl
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  char v18; // cl
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  char v20; // cl
  std::shared_ptr<Event> p_event_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-90h] BYREF
  char v28[112]; // [rsp+50h] [rbp-70h] BYREF

  v6 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 10 evt_ptr:19";
  *(_QWORD *)(v6 + 16) = ArenaChallengeGallery::notifySelectDifficultyEvent;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  EventUtil::createEvent((data::EventType)(v6 + 32));
  v9 = (char *)(v6 + 32);
  if ( std::operator==<Event>(0LL, (const std::shared_ptr<Event> *)(v6 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/arena_challenge_gallery.cpp",
      "notifySelectDifficultyEvent",
      22);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v27, (const char (*)[17])"createEvent fail");
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    v10 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    v11 = *(_BYTE *)(((unsigned __int64)&v10->source_entity_id >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)((((_BYTE)v10 + 4) & 7) + 3) >= v11 )
    {
      LOBYTE(v9) = v11 != 0;
      __asan_report_store4(&v10->source_entity_id, v9, (_BYTE)v10);
    }
    v10->source_entity_id = gadget_entity_id;
    v12 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    v13 = *(_BYTE *)(((unsigned __int64)&v12->param1 >> 3) + 0x7FFF8000);
    if ( v13 != 0 && (char)((((_BYTE)v12 + 44) & 7) + 3) >= v13 )
    {
      LOBYTE(v9) = v13 != 0;
      __asan_report_store4(&v12->param1, v9, (_BYTE)v12);
    }
    v12->param1 = gadget_config_id;
    v14 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    v15 = *(_BYTE *)(((unsigned __int64)(v14 + 48) >> 3) + 0x7FFF8000);
    LOBYTE(v9) = v15 != 0;
    v16 = v15 != 0 && v15 <= 3;
    if ( v16 )
      v14 = __asan_report_store4(v14 + 48, v9, v16);
    *(_DWORD *)(v14 + 48) = arena_challenge_level;
    v17 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    v18 = *(_BYTE *)(((unsigned __int64)&v17->param3 >> 3) + 0x7FFF8000);
    if ( v18 != 0 && (char)((((_BYTE)v17 + 52) & 7) + 3) >= v18 )
    {
      LOBYTE(v9) = v18 != 0;
      __asan_report_store4(&v17->param3, v9, (_BYTE)v17);
    }
    v17->param3 = arena_challenge_id;
    v19 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    v20 = *(_BYTE *)(((unsigned __int64)&v19->uid >> 3) + 0x7FFF8000);
    if ( v20 != 0 && (char)((((_BYTE)v19 + 60) & 7) + 3) >= v20 )
    {
      LOBYTE(v9) = v20 != 0;
      __asan_report_store4(&v19->uid, v9, (_BYTE)v19);
    }
    v19->uid = uid;
    std::shared_ptr<Event>::shared_ptr(&p_event_ptr, (const std::shared_ptr<Event> *)(v6 + 32));
    BaseGallery::notifyGroupEvent(this, &p_event_ptr);
    std::shared_ptr<Event>::~shared_ptr(&p_event_ptr);
  }
  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v6 + 32));
  if ( v28 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
