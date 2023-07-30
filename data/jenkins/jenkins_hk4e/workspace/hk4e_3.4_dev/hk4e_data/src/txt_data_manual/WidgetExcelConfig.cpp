// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/WidgetExcelConfig.cpp

// Line 21: range 000000000CB6247A-000000000CB624B3
int32_t __cdecl WidgetExcelConfigMgr::checkConfig(WidgetExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
{
  if ( WidgetExcelConfigMgr::checkWidgetExcelConfig(this, txt_config_mgr) )
    return -1;
  else
    return 0;
};

// Line 30: range 000000000CB624B4-000000000CB636E3
int32_t __cdecl WidgetExcelConfigMgr::checkWidgetExcelConfig(
        WidgetExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  _BOOL4 v9; // eax
  const HK4EDesignConfig *Config; // rax
  const WidgetJsonNewConfig *WidgetNewConfig; // rsi
  int v12; // edx
  char *v13; // rsi
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  int v16; // r15d
  std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  char v18; // dl
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  std::map<unsigned int,std::set<unsigned int>> *p_widget_active_gallery_map; // rdx
  std::map<unsigned int,std::set<unsigned int>> *v22; // rdx
  char *v23; // rsi
  bool v24; // al
  unsigned int *v25; // rax
  int *v26; // rdx
  int v27; // ecx
  char v28; // al
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int v31; // edx
  std::map<unsigned int,std::set<unsigned int>> *p_widget_active_city_map; // rdx
  std::map<unsigned int,std::set<unsigned int>> *v33; // rdx
  char *v34; // rsi
  bool v35; // al
  char *v36; // rsi
  unsigned int *v37; // rax
  int *v38; // rdx
  int v39; // ecx
  char v40; // al
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  int v43; // edx
  int v44; // eax
  data::WidgetActiveExcelConfigMap *__for_range; // [rsp+20h] [rbp-350h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WidgetActiveExcelConfig>,false,false>::reference v48; // [rsp+28h] [rbp-348h]
  std::tuple_element<0,std::pair<unsigned int const,data::WidgetActiveExcelConfig> >::type *material_id; // [rsp+30h] [rbp-340h]
  const std::set<unsigned int> *__for_range_0; // [rsp+48h] [rbp-328h]
  const std::set<unsigned int> *__for_range_1; // [rsp+58h] [rbp-318h]
  char v52[784]; // [rsp+60h] [rbp-310h] BYREF

  v3 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(736LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "18 32 4 13 gallery_id:54 48 4 10 city_id:68 64 8 14 __for_begin:31 96 8 12 __for_end:31 128 8 15"
                        " gallery_iter:50 160 8 9 <unknown> 192 8 14 __for_begin:54 224 8 12 __for_end:54 256 8 12 city_i"
                        "ter:64 288 8 9 <unknown> 320 8 14 __for_begin:68 352 8 12 __for_end:68 384 16 20 widget_config_p"
                        "tr:38 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WidgetExcelConfigMgr::checkWidgetExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -219021312;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -202116109;
  __for_range = &this->widget_active_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WidgetActiveExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::WidgetActiveExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WidgetActiveExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::WidgetActiveExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::WidgetActiveExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WidgetActiveExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WidgetActiveExcelConfig>,false> *)(v3 + 96)) )
  {
    v48 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WidgetActiveExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WidgetActiveExcelConfig>,false,false> *const)(v3 + 64));
    material_id = std::get<0ul,unsigned int const,data::WidgetActiveExcelConfig>(v48);
    std::get<1ul,unsigned int const,data::WidgetActiveExcelConfig>(v48);
    p_material_config_mgr = &txt_config_mgr->material_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)material_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)material_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)material_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(material_id);
    }
    if ( data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, *material_id) )
    {
      *(_WORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      Config = TxtConfigMgr::getConfig(txt_config_mgr);
      WidgetNewConfig = JsonConfigMgr::getWidgetNewConfig(&Config->json_config_mgr);
      if ( *(_BYTE *)(((unsigned __int64)material_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)material_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)material_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(material_id);
      }
      v12 = *material_id;
      if ( *(_WORD *)(((v3 + 384) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      WidgetJsonNewConfig::findWidgetConfigById(
        (const WidgetJsonNewConfig *const)(v3 + 384),
        (const std::unordered_map<unsigned int,std::shared_ptr<data::ConfigBaseWidgetToy>> *)WidgetNewConfig,
        v12);
      v13 = (char *)(v3 + 384);
      if ( std::operator==<data::ConfigBaseWidgetToy>(
             0LL,
             (const std::shared_ptr<data::ConfigBaseWidgetToy> *)(v3 + 384)) )
      {
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/WidgetExcelConfig.cpp",
          "checkWidgetExcelConfig",
          41);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                v14,
                (const char (*)[43])"widget json config not found, material_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, material_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v16 = 0;
      }
      else
      {
        v17 = std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseWidgetToy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 384));
        v18 = *(_BYTE *)(((unsigned __int64)&v17->business_type >> 3) + 0x7FFF8000);
        LOBYTE(v13) = v18 != 0;
        if ( v18 != 0 && v18 <= 3 )
          __asan_report_load4(&v17->business_type);
        if ( v17->business_type == Activity )
        {
          *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
          p_widget_active_gallery_map = &this->widget_active_gallery_map_;
          if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 128, v13);
          *(std::map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 128) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                     p_widget_active_gallery_map,
                                                                                     material_id);
          *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
          v22 = &this->widget_active_gallery_map_;
          if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 160, material_id);
          *(std::map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 160) = std::map<unsigned int,std::set<unsigned int>>::end(v22);
          v23 = (char *)(v3 + 160);
          v24 = std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 128),
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 160));
          *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
          if ( !v24 )
            goto LABEL_53;
          __for_range_0 = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 128))->second;
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 192, v23);
          *(std::set<unsigned int>::iterator *)(v3 + 192) = std::set<unsigned int>::begin(__for_range_0);
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 224, v23);
          *(std::set<unsigned int>::iterator *)(v3 + 224) = std::set<unsigned int>::end(__for_range_0);
          while ( 1 )
          {
            v23 = (char *)(v3 + 224);
            if ( !std::operator!=(
                    (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 192),
                    (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 224)) )
            {
              v31 = 1;
              goto LABEL_51;
            }
            *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
            v25 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 192));
            v26 = (int *)v25;
            if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v25);
            }
            v27 = *v26;
            v28 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
            if ( v28 != 0 && v28 <= 3 )
            {
              LOBYTE(v23) = v28 != 0;
              __asan_report_store4(v3 + 32, v23);
            }
            *(_DWORD *)(v3 + 32) = v27;
            if ( !data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                    &txt_config_mgr->gallery_config_mgr,
                    *(unsigned int *)(v3 + 32)) )
              break;
            std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 192));
          }
          *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 608, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 608),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/WidgetExcelConfig.cpp",
            "checkWidgetExcelConfig",
            58);
          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 608),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v30 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  v29,
                  (const char (*)[38])"gallery config not found, gallery_id:");
          v23 = (char *)(v3 + 32);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
          *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v31 = 0;
LABEL_51:
          *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
          if ( v31 == 1 )
          {
LABEL_53:
            *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
            p_widget_active_city_map = &this->widget_active_city_map_;
            if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 256, v23);
            *(std::map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 256) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                       p_widget_active_city_map,
                                                                                       material_id);
            *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
            v33 = &this->widget_active_city_map_;
            if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 288, material_id);
            *(std::map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 288) = std::map<unsigned int,std::set<unsigned int>>::end(v33);
            v34 = (char *)(v3 + 288);
            v35 = std::operator!=(
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 256),
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 288));
            *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
            if ( !v35 )
              goto LABEL_76;
            __for_range_1 = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 256))->second;
            *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 320, v34);
            *(std::set<unsigned int>::iterator *)(v3 + 320) = std::set<unsigned int>::begin(__for_range_1);
            *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 352, v34);
            *(std::set<unsigned int>::iterator *)(v3 + 352) = std::set<unsigned int>::end(__for_range_1);
            while ( 1 )
            {
              v36 = (char *)(v3 + 352);
              if ( !std::operator!=(
                      (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 320),
                      (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 352)) )
              {
                v43 = 1;
                goto LABEL_74;
              }
              *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
              v37 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 320));
              v38 = (int *)v37;
              if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v37);
              }
              v39 = *v38;
              v40 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
              if ( v40 != 0 && v40 <= 3 )
              {
                LOBYTE(v36) = v40 != 0;
                __asan_report_store4(v3 + 48, v36);
              }
              *(_DWORD *)(v3 + 48) = v39;
              if ( !WorldAreaExcelConfigMgr::findCityConfig(
                      &txt_config_mgr->world_area_config_mgr,
                      *(_DWORD *)(v3 + 48)) )
                break;
              std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 320));
            }
            *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 672, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 672),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/WidgetExcelConfig.cpp",
              "checkWidgetExcelConfig",
              72);
            v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 672),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v42 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    v41,
                    (const char (*)[32])"city config not found, city_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
            *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v43 = 0;
LABEL_74:
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
            if ( v43 == 1 )
LABEL_76:
              v16 = 1;
            else
              v16 = 0;
          }
          else
          {
            v16 = 0;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/WidgetExcelConfig.cpp",
            "checkWidgetExcelConfig",
            46);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v20 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                  v19,
                  (const char (*)[54])"activate widget shoule be Activity Type, material_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, material_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
      }
      std::shared_ptr<data::ConfigBaseWidgetToy>::~shared_ptr((std::shared_ptr<data::ConfigBaseWidgetToy> *const)(v3 + 384));
      v9 = v16 == 1;
    }
    else
    {
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/WidgetExcelConfig.cpp",
        "checkWidgetExcelConfig",
        35);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 416),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             v7,
             (const char (*)[40])"material config not found, material_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, material_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
    }
    *(_WORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -1800;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( !v9 )
    {
      v44 = 0;
      goto LABEL_82;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WidgetActiveExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::WidgetActiveExcelConfig>,false,false> *const)(v3 + 64));
  }
  v44 = 1;
LABEL_82:
  if ( v44 == 1 )
    v2 = 0;
  if ( v52 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = -168430091;
  }
  return v2;
};

// Line 83: range 000000000CB636E4-000000000CB6452E
int32_t __cdecl WidgetExcelConfigMgr::rewriteConfig(WidgetExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  char *v7; // rsi
  bool v8; // r15
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  _BOOL4 v11; // r15d
  unsigned __int64 v12; // rax
  bool v13; // r15
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  int v16; // r15d
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  unsigned int *v19; // r15
  unsigned int *v20; // rcx
  unsigned __int64 v21; // rax
  int v22; // edx
  unsigned __int64 v23; // rax
  int v24; // eax
  const unsigned int *M_current; // r15
  const unsigned int *v26; // rcx
  const unsigned int *v27; // r15
  const unsigned int *v28; // rcx
  const unsigned int *v29; // r15
  const unsigned int *v30; // rcx
  data::WidgetActiveExcelConfigMap *__for_range; // [rsp+20h] [rbp-320h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::WidgetActiveExcelConfig>,false,false>::reference v33; // [rsp+28h] [rbp-318h]
  std::tuple_element<0,std::pair<unsigned int const,data::WidgetActiveExcelConfig> >::type *material_id; // [rsp+30h] [rbp-310h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WidgetActiveExcelConfig> >::type *config; // [rsp+38h] [rbp-308h]
  std::map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::mapped_type *region_set; // [rsp+40h] [rbp-300h]
  std::map<unsigned int,std::set<unsigned int>>::mapped_type *gallery_set; // [rsp+48h] [rbp-2F8h]
  std::map<unsigned int,std::set<unsigned int>>::mapped_type *scene_set; // [rsp+50h] [rbp-2F0h]
  std::map<unsigned int,std::set<unsigned int>>::mapped_type *city_set; // [rsp+58h] [rbp-2E8h]
  std::vector<std::string> *__for_range_0; // [rsp+60h] [rbp-2E0h]
  const std::string *region_pair_str; // [rsp+68h] [rbp-2D8h]
  char v42[720]; // [rsp+70h] [rbp-2D0h] BYREF

  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(672LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 32 1 9 <unknown> 48 1 9 <unknown> 64 8 14 __for_begin:84 96 8 12 __for_end:84 128 8 14 __for_"
                        "begin:98 160 8 12 __for_end:98 192 8 15 region_pair:111 224 24 19 split_string_vec:92 288 24 19 "
                        "region_pair_vec:100 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> "
                        "608 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = WidgetExcelConfigMgr::rewriteConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862729] = -234881024;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -202116109;
  __for_range = &this->widget_active_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WidgetActiveExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::WidgetActiveExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::WidgetActiveExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::WidgetActiveExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::WidgetActiveExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WidgetActiveExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WidgetActiveExcelConfig>,false> *)(v3 + 96)) )
  {
    v33 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::WidgetActiveExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::WidgetActiveExcelConfig>,false,false> *const)(v3 + 64));
    material_id = std::get<0ul,unsigned int const,data::WidgetActiveExcelConfig>(v33);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::WidgetActiveExcelConfig> >::type *)std::get<1ul,unsigned int const,data::WidgetActiveExcelConfig>(v33);
    region_set = std::map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::operator[](
                   &this->widget_active_region_map_,
                   material_id);
    gallery_set = std::map<unsigned int,std::set<unsigned int>>::operator[](
                    &this->widget_active_gallery_map_,
                    material_id);
    scene_set = std::map<unsigned int,std::set<unsigned int>>::operator[](&this->widget_active_scene_map_, material_id);
    city_set = std::map<unsigned int,std::set<unsigned int>>::operator[](&this->widget_active_city_map_, material_id);
    if ( (unsigned __int8)std::string::empty() != 1 )
    {
      v6 = ((v3 + 224) >> 3) + 2147450880;
      *(_WORD *)v6 = 0;
      *(_BYTE *)(v6 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 224));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 352),
        ";",
        (const std::allocator<char> *)(v3 + 32));
      v7 = (char *)(v3 + 352);
      v8 = common::tools::StringUtils::splitToList(
             &config->active_region,
             (const std::string *)(v3 + 352),
             (std::vector<std::string> *)(v3 + 224),
             0) != 0;
      std::string::~string((void *)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 32);
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v8 )
      {
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/WidgetExcelConfig.cpp",
          "rewriteConfig",
          95);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 416),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                v9,
                (const char (*)[25])"splitToList failed, str:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &config->active_region);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
      }
      else
      {
        __for_range_0 = (std::vector<std::string> *)(v3 + 224);
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 128, v7);
        *(std::vector<std::string>::iterator *)(v3 + 128) = std::vector<std::string>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160, v7);
        *(std::vector<std::string>::iterator *)(v3 + 160) = std::vector<std::string>::end(__for_range_0);
        while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 128),
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 160)) )
        {
          region_pair_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 128));
          v12 = ((v3 + 288) >> 3) + 2147450880;
          *(_WORD *)v12 = 0;
          *(_BYTE *)(v12 + 2) = 0;
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 288));
          *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v3 + 48);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v3 + 480),
            ",",
            (const std::allocator<char> *)(v3 + 48));
          v13 = common::tools::StringUtils::splitToList<unsigned int>(
                  region_pair_str,
                  (const std::string *)(v3 + 480),
                  (std::vector<unsigned int> *)(v3 + 288),
                  0) != 0;
          std::string::~string((void *)(v3 + 480));
          *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v3 + 48);
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
          if ( v13 )
          {
            *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 544, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 544),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/WidgetExcelConfig.cpp",
              "rewriteConfig",
              103);
            v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 544),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    v14,
                    (const char (*)[25])"splitToList failed, str:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, region_pair_str);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
            *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v16 = 0;
          }
          else if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 288)) == 2 )
          {
            *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
            v19 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 288), 1uLL);
            v20 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 288), 0LL);
            if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 192, 0LL);
            *(std::pair<unsigned int,unsigned int> *)(v3 + 192) = std::make_pair<unsigned int &,unsigned int &>(
                                                                    v20,
                                                                    v19);
            std::set<std::pair<unsigned int,unsigned int>>::insert(
              region_set,
              (const std::set<std::pair<unsigned int,unsigned int>>::value_type *)(v3 + 192));
            v16 = 1;
          }
          else
          {
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 608, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 608),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/WidgetExcelConfig.cpp",
              "rewriteConfig",
              108);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 608),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    v17,
                    (const char (*)[47])"region_pair_vec size should be 2, material_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, material_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v16 = 0;
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 288));
          v21 = ((v3 + 288) >> 3) + 2147450880;
          *(_WORD *)v21 = -1800;
          *(_BYTE *)(v21 + 2) = -8;
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
          if ( v16 != 1 )
          {
            v22 = 0;
            goto LABEL_36;
          }
          __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 128));
        }
        v22 = 1;
LABEL_36:
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        v11 = v22 == 1;
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 224));
      v23 = ((v3 + 224) >> 3) + 2147450880;
      *(_WORD *)v23 = -1800;
      *(_BYTE *)(v23 + 2) = -8;
      if ( !v11 )
      {
        v24 = 0;
        goto LABEL_41;
      }
    }
    M_current = std::vector<unsigned int>::end(&config->active_gallery)._M_current;
    v26 = std::vector<unsigned int>::begin(&config->active_gallery)._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      gallery_set,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v26,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
    v27 = std::vector<unsigned int>::end(&config->active_scene)._M_current;
    v28 = std::vector<unsigned int>::begin(&config->active_scene)._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      scene_set,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v28,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v27);
    v29 = std::vector<unsigned int>::end(&config->active_city)._M_current;
    v30 = std::vector<unsigned int>::begin(&config->active_city)._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      city_set,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v30,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v29);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::WidgetActiveExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::WidgetActiveExcelConfig>,false,false> *const)(v3 + 64));
  }
  v24 = 1;
LABEL_41:
  if ( v24 == 1 )
    v2 = 0;
  if ( v42 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = -168430091;
  }
  return v2;
};

// Line 123: range 000000000CB64530-000000000CB64892
__int64 __fastcall WidgetExcelConfigMgr::isGalleryInActiveSet(
        const WidgetExcelConfigMgr *const this,
        __int64 material_id,
        const std::set<unsigned int> *gallery_id_set)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::set<unsigned int>> *p_widget_active_gallery_map; // rdx
  std::map<unsigned int,std::set<unsigned int>> *v7; // rdx
  bool v8; // al
  unsigned int v9; // r14d
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::pointer v10; // rax
  unsigned __int64 v11; // rax
  std::set<unsigned int>::iterator v12; // rax
  std::insert_iterator<std::set<unsigned int> > v13; // rax
  std::set<unsigned int> *container; // r14
  const std::_Rb_tree_node_base *M_node; // r15
  std::set<unsigned int>::iterator v16; // rax
  std::insert_iterator<std::set<unsigned int> > v17; // r8
  int v18; // eax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last2; // [rsp+10h] [rbp-130h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __first2; // [rsp+18h] [rbp-128h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last1; // [rsp+20h] [rbp-120h]
  std::set<unsigned int> *config_gallery_set; // [rsp+48h] [rbp-F8h]
  char v25[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 15 material_id:122 48 8 16 gallery_iter:124 80 8 9 <unknown> 112 48 14 result_set:134";
  *(_QWORD *)(v3 + 16) = WidgetExcelConfigMgr::isGalleryInActiveSet;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 32) = material_id;
  p_widget_active_gallery_map = &this->widget_active_gallery_map_;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, material_id);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 48) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                  p_widget_active_gallery_map,
                                                                                  (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->widget_active_gallery_map_;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, v3 + 32);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 80) = std::map<unsigned int,std::set<unsigned int>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 48),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 80));
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    v9 = 0;
  }
  else
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 48));
    if ( std::set<unsigned int>::empty(&v10->second) )
    {
      v9 = 0;
    }
    else
    {
      config_gallery_set = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 48))->second;
      v11 = ((v3 + 112) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_WORD *)(v11 + 4) = 0;
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 112));
      v12._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 112))._M_node;
      v13 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
              (std::set<unsigned int> *)(v3 + 112),
              v12);
      container = v13.container;
      M_node = v13.iter._M_node;
      __last2 = std::set<unsigned int>::end(config_gallery_set)._M_node;
      __first2 = std::set<unsigned int>::begin(config_gallery_set)._M_node;
      __last1 = std::set<unsigned int>::end(gallery_id_set)._M_node;
      v16._M_node = std::set<unsigned int>::begin(gallery_id_set)._M_node;
      v17.container = container;
      v17.iter._M_node = M_node;
      std::set_intersection<std::_Rb_tree_const_iterator<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>,std::insert_iterator<std::set<unsigned int>>>(
        v16,
        (std::_Rb_tree_const_iterator<unsigned int>)__last1,
        (std::_Rb_tree_const_iterator<unsigned int>)__first2,
        (std::_Rb_tree_const_iterator<unsigned int>)__last2,
        v17);
      LOBYTE(v18) = std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v3 + 112));
      v9 = v18 ^ 1;
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 112));
    }
  }
  result = v9;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 142: range 000000000CB64894-000000000CB64BF6
__int64 __fastcall WidgetExcelConfigMgr::isRegionInActiveSet(
        const WidgetExcelConfigMgr *const this,
        __int64 material_id,
        const std::set<std::pair<unsigned int,unsigned int>> *region_set)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>> *p_widget_active_region_map; // rdx
  std::map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>> *v7; // rdx
  bool v8; // al
  unsigned int v9; // r14d
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<std::pair<unsigned int,unsigned int>> > >::pointer v10; // rax
  unsigned __int64 v11; // rax
  std::set<std::pair<unsigned int,unsigned int>>::iterator v12; // rax
  std::insert_iterator<std::set<std::pair<unsigned int,unsigned int>> > v13; // rax
  std::set<std::pair<unsigned int,unsigned int>> *container; // r14
  const std::_Rb_tree_node_base *M_node; // r15
  std::set<std::pair<unsigned int,unsigned int>>::iterator v16; // rax
  std::insert_iterator<std::set<std::pair<unsigned int,unsigned int>> > v17; // r8
  int v18; // eax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >::_Base_ptr __last2; // [rsp+10h] [rbp-130h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >::_Base_ptr __first2; // [rsp+18h] [rbp-128h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >::_Base_ptr __last1; // [rsp+20h] [rbp-120h]
  std::set<std::pair<unsigned int,unsigned int>> *config_gallery_set; // [rsp+48h] [rbp-F8h]
  char v25[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 15 material_id:141 48 8 15 region_iter:143 80 8 9 <unknown> 112 48 14 result_set:153";
  *(_QWORD *)(v3 + 16) = WidgetExcelConfigMgr::isRegionInActiveSet;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 32) = material_id;
  p_widget_active_region_map = &this->widget_active_region_map_;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, material_id);
  *(std::map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::const_iterator *)(v3 + 48) = std::map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::find(p_widget_active_region_map, (const std::map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::key_type *)(v3 + 32));
  v7 = &this->widget_active_region_map_;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, v3 + 32);
  *(std::map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::const_iterator *)(v3 + 80) = std::map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<std::pair<unsigned int,unsigned int>> > >::_Self *)(v3 + 48),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<std::pair<unsigned int,unsigned int>> > >::_Self *)(v3 + 80));
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    v9 = 0;
  }
  else
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<std::pair<unsigned int,unsigned int>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<std::pair<unsigned int,unsigned int>> > > *const)(v3 + 48));
    if ( std::set<std::pair<unsigned int,unsigned int>>::empty(&v10->second) )
    {
      v9 = 0;
    }
    else
    {
      config_gallery_set = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<std::pair<unsigned int,unsigned int>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<std::pair<unsigned int,unsigned int>> > > *const)(v3 + 48))->second;
      v11 = ((v3 + 112) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_WORD *)(v11 + 4) = 0;
      std::set<std::pair<unsigned int,unsigned int>>::set((std::set<std::pair<unsigned int,unsigned int>> *const)(v3 + 112));
      v12._M_node = std::set<std::pair<unsigned int,unsigned int>>::end((const std::set<std::pair<unsigned int,unsigned int>> *const)(v3 + 112))._M_node;
      v13 = std::inserter<std::set<std::pair<unsigned int,unsigned int>>,std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int>>>(
              (std::set<std::pair<unsigned int,unsigned int>> *)(v3 + 112),
              v12);
      container = v13.container;
      M_node = v13.iter._M_node;
      __last2 = std::set<std::pair<unsigned int,unsigned int>>::end(config_gallery_set)._M_node;
      __first2 = std::set<std::pair<unsigned int,unsigned int>>::begin(config_gallery_set)._M_node;
      __last1 = std::set<std::pair<unsigned int,unsigned int>>::end(region_set)._M_node;
      v16._M_node = std::set<std::pair<unsigned int,unsigned int>>::begin(region_set)._M_node;
      v17.container = container;
      v17.iter._M_node = M_node;
      std::set_intersection<std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int>>,std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int>>,std::insert_iterator<std::set<std::pair<unsigned int,unsigned int>>>>(
        v16,
        (std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >)__last1,
        (std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >)__first2,
        (std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >)__last2,
        v17);
      LOBYTE(v18) = std::set<std::pair<unsigned int,unsigned int>>::empty((const std::set<std::pair<unsigned int,unsigned int>> *const)(v3 + 112));
      v9 = v18 ^ 1;
      std::set<std::pair<unsigned int,unsigned int>>::~set((std::set<std::pair<unsigned int,unsigned int>> *const)(v3 + 112));
    }
  }
  result = v9;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 161: range 000000000CB64BF8-000000000CB64F5A
__int64 __fastcall WidgetExcelConfigMgr::isSceneInActiveSet(
        const WidgetExcelConfigMgr *const this,
        __int64 material_id,
        const std::set<unsigned int> *scene_id_set)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::set<unsigned int>> *p_widget_active_scene_map; // rdx
  std::map<unsigned int,std::set<unsigned int>> *v7; // rdx
  bool v8; // al
  unsigned int v9; // r14d
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::pointer v10; // rax
  unsigned __int64 v11; // rax
  std::set<unsigned int>::iterator v12; // rax
  std::insert_iterator<std::set<unsigned int> > v13; // rax
  std::set<unsigned int> *container; // r14
  const std::_Rb_tree_node_base *M_node; // r15
  std::set<unsigned int>::iterator v16; // rax
  std::insert_iterator<std::set<unsigned int> > v17; // r8
  int v18; // eax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last2; // [rsp+10h] [rbp-130h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __first2; // [rsp+18h] [rbp-128h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last1; // [rsp+20h] [rbp-120h]
  std::set<unsigned int> *config_scene_set; // [rsp+48h] [rbp-F8h]
  char v25[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 15 material_id:160 48 8 14 scene_iter:162 80 8 9 <unknown> 112 48 14 result_set:172";
  *(_QWORD *)(v3 + 16) = WidgetExcelConfigMgr::isSceneInActiveSet;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 32) = material_id;
  p_widget_active_scene_map = &this->widget_active_scene_map_;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, material_id);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 48) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                  p_widget_active_scene_map,
                                                                                  (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->widget_active_scene_map_;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, v3 + 32);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 80) = std::map<unsigned int,std::set<unsigned int>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 48),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 80));
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    v9 = 0;
  }
  else
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 48));
    if ( std::set<unsigned int>::empty(&v10->second) )
    {
      v9 = 0;
    }
    else
    {
      config_scene_set = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 48))->second;
      v11 = ((v3 + 112) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_WORD *)(v11 + 4) = 0;
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 112));
      v12._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 112))._M_node;
      v13 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
              (std::set<unsigned int> *)(v3 + 112),
              v12);
      container = v13.container;
      M_node = v13.iter._M_node;
      __last2 = std::set<unsigned int>::end(config_scene_set)._M_node;
      __first2 = std::set<unsigned int>::begin(config_scene_set)._M_node;
      __last1 = std::set<unsigned int>::end(scene_id_set)._M_node;
      v16._M_node = std::set<unsigned int>::begin(scene_id_set)._M_node;
      v17.container = container;
      v17.iter._M_node = M_node;
      std::set_intersection<std::_Rb_tree_const_iterator<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>,std::insert_iterator<std::set<unsigned int>>>(
        v16,
        (std::_Rb_tree_const_iterator<unsigned int>)__last1,
        (std::_Rb_tree_const_iterator<unsigned int>)__first2,
        (std::_Rb_tree_const_iterator<unsigned int>)__last2,
        v17);
      LOBYTE(v18) = std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v3 + 112));
      v9 = v18 ^ 1;
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 112));
    }
  }
  result = v9;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 180: range 000000000CB64F5C-000000000CB652BE
__int64 __fastcall WidgetExcelConfigMgr::isCityInActiveSet(
        const WidgetExcelConfigMgr *const this,
        __int64 material_id,
        const std::set<unsigned int> *city_id_set)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::set<unsigned int>> *p_widget_active_city_map; // rdx
  std::map<unsigned int,std::set<unsigned int>> *v7; // rdx
  bool v8; // al
  unsigned int v9; // r14d
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::pointer v10; // rax
  unsigned __int64 v11; // rax
  std::set<unsigned int>::iterator v12; // rax
  std::insert_iterator<std::set<unsigned int> > v13; // rax
  std::set<unsigned int> *container; // r14
  const std::_Rb_tree_node_base *M_node; // r15
  std::set<unsigned int>::iterator v16; // rax
  std::insert_iterator<std::set<unsigned int> > v17; // r8
  int v18; // eax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last2; // [rsp+10h] [rbp-130h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __first2; // [rsp+18h] [rbp-128h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last1; // [rsp+20h] [rbp-120h]
  std::set<unsigned int> *config_city_set; // [rsp+48h] [rbp-F8h]
  char v25[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 15 material_id:179 48 8 13 city_iter:181 80 8 9 <unknown> 112 48 14 result_set:191";
  *(_QWORD *)(v3 + 16) = WidgetExcelConfigMgr::isCityInActiveSet;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 32) = material_id;
  p_widget_active_city_map = &this->widget_active_city_map_;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, material_id);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 48) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                  p_widget_active_city_map,
                                                                                  (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->widget_active_city_map_;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, v3 + 32);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 80) = std::map<unsigned int,std::set<unsigned int>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 48),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 80));
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    v9 = 0;
  }
  else
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 48));
    if ( std::set<unsigned int>::empty(&v10->second) )
    {
      v9 = 0;
    }
    else
    {
      config_city_set = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 48))->second;
      v11 = ((v3 + 112) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_WORD *)(v11 + 4) = 0;
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 112));
      v12._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 112))._M_node;
      v13 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
              (std::set<unsigned int> *)(v3 + 112),
              v12);
      container = v13.container;
      M_node = v13.iter._M_node;
      __last2 = std::set<unsigned int>::end(config_city_set)._M_node;
      __first2 = std::set<unsigned int>::begin(config_city_set)._M_node;
      __last1 = std::set<unsigned int>::end(city_id_set)._M_node;
      v16._M_node = std::set<unsigned int>::begin(city_id_set)._M_node;
      v17.container = container;
      v17.iter._M_node = M_node;
      std::set_intersection<std::_Rb_tree_const_iterator<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>,std::insert_iterator<std::set<unsigned int>>>(
        v16,
        (std::_Rb_tree_const_iterator<unsigned int>)__last1,
        (std::_Rb_tree_const_iterator<unsigned int>)__first2,
        (std::_Rb_tree_const_iterator<unsigned int>)__last2,
        v17);
      LOBYTE(v18) = std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v3 + 112));
      v9 = v18 ^ 1;
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 112));
    }
  }
  result = v9;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
