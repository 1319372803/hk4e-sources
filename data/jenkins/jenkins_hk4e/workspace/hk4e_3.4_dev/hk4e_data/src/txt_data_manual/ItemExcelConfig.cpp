// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ItemExcelConfig.cpp

// Line 21: range 0000000014496F2E-0000000014496F40
int32_t __cdecl ItemExcelConfigMgr::loadConfig(ItemExcelConfigMgr *const this, HK4EDesignConfig *config)
{
  return 0;
};

// Line 26: range 0000000014496F42-0000000014496F54
int32_t __cdecl ItemExcelConfigMgr::rewriteConfig(ItemExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 31: range 0000000014496F56-000000001449775C
int32_t __cdecl ItemExcelConfigMgr::checkConfig(ItemExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::tuple_element<1,const std::pair<unsigned int const,data::ItemConfig*> >::type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,data::ItemConfig*> >::type v8; // rdx
  char v9; // cl
  std::tuple_element<1,const std::pair<unsigned int const,data::ItemConfig*> >::type v10; // rax
  char v11; // dl
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,data::ItemConfig*> >::type v14; // rax
  char v15; // dl
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rdi
  std::tuple_element<1,const std::pair<unsigned int const,data::ItemConfig*> >::type v17; // rax
  char v18; // dl
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-164h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemConfig*>,false,false>::reference v26; // [rsp+28h] [rbp-158h]
  std::tuple_element<0,std::pair<unsigned int const,data::ItemConfig*> >::type *item_id; // [rsp+30h] [rbp-150h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ItemConfig*> >::type *item_config_ptr; // [rsp+38h] [rbp-148h]
  char v29[320]; // [rsp+40h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 14 __for_begin:33 64 8 12 __for_end:33 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ItemExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ItemConfig*>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ItemConfig *>::begin(&this->item_config_map);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ItemConfig*>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ItemConfig *>::end(&this->item_config_map);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ItemConfig *>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ItemConfig*>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ItemConfig*>,false> *)(v2 + 64)) )
  {
    v26 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemConfig *>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemConfig*>,false,false> *const)(v2 + 32));
    item_id = std::get<0ul,unsigned int const,data::ItemConfig *>(v26);
    v5 = (std::tuple_element<1,const std::pair<unsigned int const,data::ItemConfig*> >::type *)std::get<1ul,unsigned int const,data::ItemConfig *>(v26);
    item_config_ptr = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v5);
    if ( *item_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)item_config_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(item_config_ptr);
      v8 = *item_config_ptr;
      v9 = *(_BYTE *)(((unsigned __int64)&(*item_config_ptr)->item_type >> 3) + 0x7FFF8000);
      if ( v9 != 0 && (char)(((*(_BYTE *)item_config_ptr + 12) & 7) + 3) >= v9 )
        __asan_report_load4(&(*item_config_ptr)->item_type);
      if ( v8->item_type != ITEM_FURNITURE )
        goto LABEL_49;
      v10 = *item_config_ptr;
      v11 = *(_BYTE *)(((unsigned __int64)&(*item_config_ptr)->gadget_id >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
        __asan_report_load4(&(*item_config_ptr)->gadget_id);
      if ( v10->gadget_id )
      {
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 160, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 160),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ItemExcelConfig.cpp",
          "checkConfig",
          43);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v12, (const char (*)[46])byte_1AD874E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, item_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
LABEL_49:
        if ( *(_BYTE *)(((unsigned __int64)item_config_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8(item_config_ptr);
        v14 = *item_config_ptr;
        v15 = *(_BYTE *)(((unsigned __int64)&(*item_config_ptr)->gadget_id >> 3) + 0x7FFF8000);
        if ( v15 != 0 && v15 <= 3 )
          __asan_report_load4(&(*item_config_ptr)->gadget_id);
        if ( !v14->gadget_id )
          goto LABEL_36;
        p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
        v17 = *item_config_ptr;
        v18 = *(_BYTE *)(((unsigned __int64)&(*item_config_ptr)->gadget_id >> 3) + 0x7FFF8000);
        if ( v18 != 0 && v18 <= 3 )
        {
          p_gadget_config_mgr = (GadgetExcelConfigMgr *)&(*item_config_ptr)->gadget_id;
          __asan_report_load4(p_gadget_config_mgr);
        }
        if ( data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(p_gadget_config_mgr, v17->gadget_id) )
LABEL_36:
          v19 = 0;
        else
          v19 = 1;
        if ( v19 )
        {
          *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 224, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 224),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ItemExcelConfig.cpp",
            "checkConfig",
            49);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v21 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  v20,
                  (const char (*)[39])"findGadgetExcelConfig fail, gadget_id:");
          if ( *(_BYTE *)(((unsigned __int64)item_config_ptr >> 3) + 0x7FFF8000) )
            __asan_report_load8(item_config_ptr);
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  &(*item_config_ptr)->gadget_id);
          v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])" item_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, item_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
          *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ItemExcelConfig.cpp",
        "checkConfig",
        37);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             v6,
             (const char (*)[33])"item config is nullptr, item id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, item_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemConfig *>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemConfig*>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 57: range 000000001449775E-0000000014497770
int32_t __cdecl ItemExcelConfigMgr::finalConfig(ItemExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 62: range 0000000014497772-0000000014497B5A
__int64 __fastcall ItemExcelConfigMgr::addItemConfig(
        ItemExcelConfigMgr *const this,
        __int64 item_id,
        data::ItemConfig *item_config_ptr,
        uint32_t rank_level,
        data::ItemConfig **a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  __int64 v11; // rax
  char v12; // dl
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ItemConfig*>,false,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  char v18[256]; // [rsp+20h] [rbp-100h] BYREF

  v5 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 10 item_id:61 64 8 18 item_config_ptr:61 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ItemExcelConfigMgr::addItemConfig;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862724] = -218959118;
  v7[536862726] = -202116109;
  *(_DWORD *)(v5 + 48) = item_id;
  *(_QWORD *)(v5 + 64) = item_config_ptr;
  if ( *(_QWORD *)(v5 + 64) )
  {
    v11 = *(_QWORD *)(v5 + 64);
    v12 = *(_BYTE *)(((unsigned __int64)(v11 + 72) >> 3) + 0x7FFF8000);
    if ( v12 != 0 && v12 <= 3 )
    {
      LOBYTE(item_id) = v12 != 0;
      v11 = __asan_report_store4(v11 + 72, item_id);
    }
    *(_DWORD *)(v11 + 72) = rank_level;
    v13 = std::unordered_map<unsigned int,data::ItemConfig *>::emplace<unsigned int &,data::ItemConfig *&>(
            &this->item_config_map,
            (unsigned int *)(v5 + 48),
            (data::ItemConfig **)(v5 + 64),
            (unsigned int *)(v5 + 48),
            a5);
    if ( !v13.second )
    {
      if ( *(char *)(((v5 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 96 + 31) & 7) >= *(_BYTE *)(((v5 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ItemExcelConfig.cpp",
        "addItemConfig",
        72);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v14,
              (const char (*)[19])"duplicate item_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 160));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    if ( *(char *)(((v5 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 127) & 7) >= *(_BYTE *)(((v5 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ItemExcelConfig.cpp",
      "addItemConfig",
      65);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v5 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           v8,
           (const char (*)[37])"item_config_ptr is nullptr, item_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 96));
    result = 0xFFFFFFFFLL;
  }
  if ( v18 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 80: range 0000000014497B5C-0000000014497DB1
__int64 __fastcall ItemExcelConfigMgr::getItemType(const ItemExcelConfigMgr *const this, uint32_t item_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  data::ItemConfig *item_config_ptr; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 10 item_id:79 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ItemExcelConfigMgr::getItemType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = item_id;
  item_config_ptr = ItemExcelConfigMgr::findItemConfig(this, *(_DWORD *)(v2 + 48));
  if ( item_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&item_config_ptr->item_type);
    }
    result = (unsigned int)item_config_ptr->item_type;
  }
  else
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ItemExcelConfig.cpp",
      "getItemType",
      84);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[31])"findItemConfig fails, item_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
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

// Line 91: range 0000000014497DB2-0000000014497F86
data::ItemConfig *__fastcall ItemExcelConfigMgr::findItemConfig(const ItemExcelConfigMgr *const this, __int64 item_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::unordered_map<unsigned int,data::ItemConfig*> *p_item_config_map; // rax
  const std::unordered_map<unsigned int,data::ItemConfig*> *v6; // rax
  bool v7; // al
  data::ItemConfig *result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ItemConfig*>,false,false>::pointer v9; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 10 item_id:90 64 8 7 iter:92 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ItemExcelConfigMgr::findItemConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = item_id;
  p_item_config_map = &this->item_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    p_item_config_map = (const std::unordered_map<unsigned int,data::ItemConfig*> *)__asan_report_store8(
                                                                                      v2 + 64,
                                                                                      item_id);
  *(std::unordered_map<unsigned int,data::ItemConfig*>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ItemConfig *>::find(
                                                                                       p_item_config_map,
                                                                                       (const std::unordered_map<unsigned int,data::ItemConfig*>::key_type *)(v2 + 48));
  v6 = &this->item_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    v6 = (const std::unordered_map<unsigned int,data::ItemConfig*> *)__asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ItemConfig*>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ItemConfig *>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::ItemConfig *>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ItemConfig*>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ItemConfig*>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ItemConfig *>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ItemConfig*>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v9->second);
    result = v9->second;
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
