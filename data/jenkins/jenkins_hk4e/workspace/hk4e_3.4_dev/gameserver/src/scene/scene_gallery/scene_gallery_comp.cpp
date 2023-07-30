// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/scene_gallery_comp.cpp

// Line 71: range 000000001688FE40-0000000016890635
__int64 __fastcall SceneGalleryComp::initGallery(
        SceneGalleryComp *const this,
        uint32_t gallery_id,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  BaseGallery *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::shared_ptr<BaseGallery> *v20; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r15
  std::set<unsigned int>::iterator v22; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+20h] [rbp-100h] BYREF
  int32_t ret; // [rsp+24h] [rbp-FCh]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v28; // [rsp+30h] [rbp-F0h] BYREF
  char v29[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 13 gallery_id:70 64 16 18 old_gallery_ptr:86 96 16 15 gallery_ptr:100 128 16 20 home_gallery_ptr:107";
  *(_QWORD *)(v3 + 16) = SceneGalleryComp::initGallery;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 48) = gallery_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 128));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
  gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                         &v6->design_config.txt_config_mgr.gallery_config_mgr,
                         *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
  if ( gallery_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( Scene::isHomeScene(this->scene_) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/scene_gallery_comp.cpp",
        "initGallery",
        81);
      v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v28,
             (const char (*)[38])"[GALLERY] is in home scene, scene_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Scene::getSceneId(this->scene_);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])", gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v28);
      v8 = -1;
    }
    else
    {
      SceneGalleryComp::findGallery((SceneGalleryComp *const)(v3 + 64), (uint32_t)this);
      if ( std::operator!=<BaseGallery>((const std::shared_ptr<BaseGallery> *)(v3 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/scene_gallery_comp.cpp",
          "initGallery",
          89);
        v12 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                &v28,
                (const char (*)[61])"[GALLERY] gallery already existed and activated, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v28);
        v8 = -1;
      }
      else
      {
        ret = SceneGalleryComp::checkCanStartGallery(this, *(_DWORD *)(v3 + 48), uid_set);
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/scene/scene_gallery/scene_gallery_comp.cpp",
            "initGallery",
            96);
          v13 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v28,
                  (const char (*)[51])"[GALLERY] checkCanStartGallery failed, gallery_id:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v3 + 48));
          v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])", uid_set:");
          common::milog::MiLogStream::operator<<<unsigned int>(v15, uid_set);
          common::milog::MiLogStream::~MiLogStream(&v28);
          v8 = ret;
        }
        else
        {
          SceneGalleryComp::createGallery((const SceneGalleryComp *const)(v3 + 96), (uint32_t)this);
          if ( std::operator==<BaseGallery>((const std::shared_ptr<BaseGallery> *)(v3 + 96), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v28,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_gallery/scene_gallery_comp.cpp",
              "initGallery",
              103);
            v16 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    &v28,
                    (const char (*)[43])"[GALLERY] gallery_ptr is null, gallery_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v28);
            v8 = -1;
          }
          else
          {
            std::dynamic_pointer_cast<BaseHomeGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)(v3 + 128));
            if ( std::operator!=<BaseHomeGallery>(0LL, (const std::shared_ptr<BaseHomeGallery> *)(v3 + 128)) )
            {
              common::milog::MiLogStream::create(
                &v28,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_gallery/scene_gallery_comp.cpp",
                "initGallery",
                110);
              v17 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                      &v28,
                      (const char (*)[48])"[GALLERY] gallery is home gallery , gallery_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v28);
              v8 = -1;
            }
            else
            {
              v18 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              if ( BaseGallery::init(v18, uid_set) )
              {
                common::milog::MiLogStream::create(
                  &v28,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_gallery/scene_gallery_comp.cpp",
                  "initGallery",
                  115);
                v19 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        &v28,
                        (const char (*)[31])"[GALLERY] gallery init failed:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v3 + 48));
                common::milog::MiLogStream::~MiLogStream(&v28);
                v8 = -1;
              }
              else
              {
                v20 = std::map<unsigned int,std::shared_ptr<BaseGallery>>::operator[](
                        &this->scene_gallery_map_,
                        (const std::map<unsigned int,std::shared_ptr<BaseGallery>>::key_type *)(v3 + 48));
                std::shared_ptr<BaseGallery>::operator=(v20, (const std::shared_ptr<BaseGallery> *)(v3 + 96));
                M_node = std::set<unsigned int>::end(uid_set)._M_node;
                v22._M_node = std::set<unsigned int>::begin(uid_set)._M_node;
                std::set<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>>(
                  &this->gallery_uid_set_,
                  v22,
                  (std::_Rb_tree_const_iterator<unsigned int>)M_node);
                v8 = 0;
              }
            }
            std::shared_ptr<BaseHomeGallery>::~shared_ptr((std::shared_ptr<BaseHomeGallery> *const)(v3 + 128));
          }
          std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v3 + 96));
        }
      }
      std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v3 + 64));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/scene_gallery_comp.cpp",
      "initGallery",
      75);
    v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v28,
           (const char (*)[47])"[GALLERY] gallery already existed, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v28);
    v8 = -1;
  }
  result = v8;
  if ( v29 == (char *)v3 )
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
  return result;
};

// Line 125: range 0000000016890636-0000000016890D17
__int64 __fastcall SceneGalleryComp::initHomeGallery(
        SceneGalleryComp *const this,
        uint32_t gallery_id,
        const std::set<unsigned int> *uid_set,
        uint32_t owner_uid)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > *v10; // rax
  BaseGallery *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  int v14; // r15d
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  BaseHomeGallery *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::shared_ptr<BaseGallery> *v19; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r15
  std::set<unsigned int>::iterator v21; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+2Ch] [rbp-124h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator __for_begin; // [rsp+30h] [rbp-120h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator __for_end; // [rsp+38h] [rbp-118h] BYREF
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+40h] [rbp-110h]
  std::map<unsigned int,std::shared_ptr<BaseGallery>> *__for_range; // [rsp+48h] [rbp-108h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *_; // [rsp+50h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *gallery_ptr; // [rsp+58h] [rbp-F8h]
  std::pair<unsigned int const,std::shared_ptr<BaseGallery> > __in; // [rsp+60h] [rbp-F0h] BYREF
  common::milog::MiLogStream v33; // [rsp+80h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 4 14 gallery_id:124 64 16 15 gallery_ptr:146 96 16 20 home_gallery_ptr:152";
  *(_QWORD *)(v5 + 16) = SceneGalleryComp::initHomeGallery;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -219021312;
  v7[536862723] = -202178560;
  *(_DWORD *)(v5 + 48) = gallery_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v5 + 96));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
  gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                         &v8->design_config.txt_config_mgr.gallery_config_mgr,
                         *(_DWORD *)(v5 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 96));
  if ( gallery_config_ptr )
  {
    __for_range = &this->scene_gallery_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::begin(&this->scene_gallery_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::end(&this->scene_gallery_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator*(&__for_begin);
      std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::pair(&__in, v10);
      _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseGallery>>(&__in);
      gallery_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseGallery>>(&__in);
      if ( std::operator!=<BaseGallery>(gallery_ptr, 0LL)
        && (v11 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_ptr),
            BaseGallery::getStage(v11)) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_gallery/scene_gallery_comp.cpp",
          "initHomeGallery",
          140);
        v12 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v33,
                (const char (*)[45])"[GALLERY] cur_scene has gallery, gallery_id:");
        v13 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_ptr);
        val = BaseGallery::getGalleryId(v13);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        common::milog::MiLogStream::~MiLogStream(&v33);
        v4 = -1;
        v14 = 0;
      }
      else
      {
        v14 = 1;
      }
      std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::~pair(&__in);
      if ( v14 != 1 )
        goto LABEL_23;
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator++(&__for_begin);
    }
    SceneGalleryComp::createGallery((const SceneGalleryComp *const)(v5 + 64), (uint32_t)this);
    if ( std::operator==<BaseGallery>((const std::shared_ptr<BaseGallery> *)(v5 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/scene_gallery_comp.cpp",
        "initHomeGallery",
        149);
      v15 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v33,
              (const char (*)[43])"[GALLERY] gallery_ptr is null, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v33);
      v4 = -1;
    }
    else
    {
      std::dynamic_pointer_cast<BaseHomeGallery,BaseGallery>((const std::shared_ptr<BaseGallery> *)(v5 + 96));
      if ( std::operator==<BaseHomeGallery>(0LL, (const std::shared_ptr<BaseHomeGallery> *)(v5 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/scene_gallery_comp.cpp",
          "initHomeGallery",
          155);
        v16 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v33,
                (const char (*)[52])"[GALLERY] gallery is not home gallery , gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream(&v33);
        v4 = -1;
      }
      else
      {
        v17 = std::__shared_ptr_access<BaseHomeGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseHomeGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        if ( (unsigned int)BaseHomeGallery::initWithOwner(v17, uid_set, owner_uid) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/scene_gallery_comp.cpp",
            "initHomeGallery",
            160);
          v18 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v33,
                  (const char (*)[31])"[GALLERY] gallery init failed:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v5 + 48));
          common::milog::MiLogStream::~MiLogStream(&v33);
          v4 = -1;
        }
        else
        {
          v19 = std::map<unsigned int,std::shared_ptr<BaseGallery>>::operator[](
                  &this->scene_gallery_map_,
                  (const std::map<unsigned int,std::shared_ptr<BaseGallery>>::key_type *)(v5 + 48));
          std::shared_ptr<BaseGallery>::operator=(v19, (const std::shared_ptr<BaseGallery> *)(v5 + 64));
          M_node = std::set<unsigned int>::end(uid_set)._M_node;
          v21._M_node = std::set<unsigned int>::begin(uid_set)._M_node;
          std::set<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>>(
            &this->gallery_uid_set_,
            v21,
            (std::_Rb_tree_const_iterator<unsigned int>)M_node);
          v4 = 0;
        }
      }
      std::shared_ptr<BaseHomeGallery>::~shared_ptr((std::shared_ptr<BaseHomeGallery> *const)(v5 + 96));
    }
    std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v5 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/scene_gallery_comp.cpp",
      "initHomeGallery",
      129);
    v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v33,
           (const char (*)[47])"[GALLERY] gallery already existed, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v33);
    v4 = -1;
  }
LABEL_23:
  result = v4;
  if ( v34 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 170: range 0000000016890D18-0000000016892616
const SceneGalleryComp *__fastcall SceneGalleryComp::createGallery(
        const SceneGalleryComp *const this,
        __int64 gallery_id,
        int a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+28h] [rbp-3A8h]
  std::shared_ptr<BalloonGallery> __r; // [rsp+30h] [rbp-3A0h] BYREF
  std::shared_ptr<ArenaChallengeGallery> v13; // [rsp+40h] [rbp-390h] BYREF
  std::shared_ptr<BaseGallery> v14; // [rsp+50h] [rbp-380h] BYREF
  std::shared_ptr<FallGallery> v15; // [rsp+60h] [rbp-370h] BYREF
  std::shared_ptr<FlowerGallery> v16; // [rsp+70h] [rbp-360h] BYREF
  std::shared_ptr<BulletGallery> v17; // [rsp+80h] [rbp-350h] BYREF
  std::shared_ptr<BrokenFloorGallery> v18; // [rsp+90h] [rbp-340h] BYREF
  std::shared_ptr<HideAndSeekGallery> v19; // [rsp+A0h] [rbp-330h] BYREF
  std::shared_ptr<BounceConjuringGallery> v20; // [rsp+B0h] [rbp-320h] BYREF
  std::shared_ptr<BuoyantCombatGallery> v21; // [rsp+C0h] [rbp-310h] BYREF
  std::shared_ptr<HandballGallery> v22; // [rsp+D0h] [rbp-300h] BYREF
  std::shared_ptr<SumoGallery> v23; // [rsp+E0h] [rbp-2F0h] BYREF
  std::shared_ptr<FishGallery> v24; // [rsp+F0h] [rbp-2E0h] BYREF
  std::shared_ptr<DigCombatGallery> v25; // [rsp+100h] [rbp-2D0h] BYREF
  std::shared_ptr<TriathlonGallery> v26; // [rsp+110h] [rbp-2C0h] BYREF
  std::shared_ptr<MistTrialGallery> v27; // [rsp+120h] [rbp-2B0h] BYREF
  std::shared_ptr<HomeRacingGallery> v28; // [rsp+130h] [rbp-2A0h] BYREF
  std::shared_ptr<SalvagePreventGallery> v29; // [rsp+140h] [rbp-290h] BYREF
  std::shared_ptr<SalvageEscortGallery> v30; // [rsp+150h] [rbp-280h] BYREF
  std::shared_ptr<HomeBalloonGallery> v31; // [rsp+160h] [rbp-270h] BYREF
  std::shared_ptr<CrystalLinkGallery> v32; // [rsp+170h] [rbp-260h] BYREF
  std::shared_ptr<IrodoriMasterGallery> v33; // [rsp+180h] [rbp-250h] BYREF
  std::shared_ptr<PhotoGallery> v34; // [rsp+190h] [rbp-240h] BYREF
  std::shared_ptr<LuminanceStoneChallengeGallery> v35; // [rsp+1A0h] [rbp-230h] BYREF
  std::shared_ptr<MpBlockGallery> v36; // [rsp+1B0h] [rbp-220h] BYREF
  std::shared_ptr<HomeSeekFurnitureGallery> v37; // [rsp+1C0h] [rbp-210h] BYREF
  std::shared_ptr<IslandPartyDownHillGallery> v38; // [rsp+1D0h] [rbp-200h] BYREF
  std::shared_ptr<SummerTimeV2BoatGallery> v39; // [rsp+1E0h] [rbp-1F0h] BYREF
  std::shared_ptr<IslandPartyRaftGallery> v40; // [rsp+1F0h] [rbp-1E0h] BYREF
  std::shared_ptr<IslandPartySailGallery> v41; // [rsp+200h] [rbp-1D0h] BYREF
  std::shared_ptr<GravenInnocenceRaceGallery> v42; // [rsp+210h] [rbp-1C0h] BYREF
  std::shared_ptr<MuqadasPotionGallery> v43; // [rsp+220h] [rbp-1B0h] BYREF
  std::shared_ptr<InstableSprayGallery> v44; // [rsp+230h] [rbp-1A0h] BYREF
  std::shared_ptr<TreasureSeelieGallery> v45; // [rsp+240h] [rbp-190h] BYREF
  std::shared_ptr<VintageHuntingGallery> v46; // [rsp+250h] [rbp-180h] BYREF
  std::shared_ptr<WindFieldGallery> v47; // [rsp+260h] [rbp-170h] BYREF
  std::shared_ptr<FungusFighterTrainingGallery> v48; // [rsp+270h] [rbp-160h] BYREF
  std::shared_ptr<FungusFighterCaptureGallery> v49; // [rsp+280h] [rbp-150h] BYREF
  std::shared_ptr<EffigyChallengeV2Gallery> v50; // [rsp+290h] [rbp-140h] BYREF
  std::shared_ptr<CharAmusementCommonGallery> v51; // [rsp+2A0h] [rbp-130h] BYREF
  std::shared_ptr<BrickBreakerGallery> v52; // [rsp+2B0h] [rbp-120h] BYREF
  std::shared_ptr<CoinCollectGallery> v53; // [rsp+2C0h] [rbp-110h] BYREF
  std::shared_ptr<LanV3BoatGameSingleGallery> v54; // [rsp+2D0h] [rbp-100h] BYREF
  std::shared_ptr<LanV3BoatGameMultiGallery> v55; // [rsp+2E0h] [rbp-F0h] BYREF
  std::shared_ptr<ElectroherculesBattleGallery> v56; // [rsp+2F0h] [rbp-E0h] BYREF
  std::shared_ptr<LanV3RaceGallery> v57; // [rsp+300h] [rbp-D0h] BYREF
  std::shared_ptr<DuelHeartGallery> v58; // [rsp+310h] [rbp-C0h] BYREF
  std::shared_ptr<Config> v59; // [rsp+320h] [rbp-B0h] BYREF
  common::milog::MiLogStream v60; // [rsp+330h] [rbp-A0h] BYREF
  char v61[128]; // [rsp+350h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 gallery_id:169 64 16 15 gallery_ptr:177";
  *(_QWORD *)(v3 + 16) = SceneGalleryComp::createGallery;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v59);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v59);
  gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                         &v6->design_config.txt_config_mgr.gallery_config_mgr,
                         *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v59);
  if ( gallery_config_ptr )
  {
    *(_QWORD *)(v3 + 64) = 0LL;
    *(_QWORD *)(v3 + 72) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gallery_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    switch ( gallery_config_ptr->type )
    {
      case GALLERY_TYPE_BALLOON:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<BalloonGallery,Scene &,unsigned int &>(
          (Scene *)&__r,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<BalloonGallery>((std::shared_ptr<BaseGallery> *const)(v3 + 64), &__r);
        std::shared_ptr<BalloonGallery>::~shared_ptr(&__r);
        goto LABEL_154;
      case GALLERY_TYPE_FALL:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<FallGallery,Scene &,unsigned int &>(
          (Scene *)&v15,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<FallGallery>((std::shared_ptr<BaseGallery> *const)(v3 + 64), &v15);
        std::shared_ptr<FallGallery>::~shared_ptr(&v15);
        goto LABEL_154;
      case GALLERY_TYPE_ARENA_CHALLENGE:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<ArenaChallengeGallery,Scene &,unsigned int &>(
          (Scene *)&v13,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<ArenaChallengeGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v13);
        std::shared_ptr<ArenaChallengeGallery>::~shared_ptr(&v13);
        goto LABEL_154;
      case GALLERY_TYPE_CATCH_FLOWER:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<FlowerGallery,Scene &,unsigned int &>(
          (Scene *)&v16,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<FlowerGallery>((std::shared_ptr<BaseGallery> *const)(v3 + 64), &v16);
        std::shared_ptr<FlowerGallery>::~shared_ptr(&v16);
        goto LABEL_154;
      case GALLERY_TYPE_FADEOUT_FLOOR:
      case GALLERY_TYPE_AVOID_RAYS:
      case GALLERY_TYPE_AVOID_BUBBLES:
      case GALLERY_TYPE_REMEMBER_ROAD:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<BaseGallery,Scene &,unsigned int &>(
          (Scene *)&v14,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=((std::shared_ptr<BaseGallery> *const)(v3 + 64), &v14);
        std::shared_ptr<BaseGallery>::~shared_ptr(&v14);
        goto LABEL_154;
      case GALLERY_TYPE_BROKEN_FLOOR:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<BrokenFloorGallery,Scene &,unsigned int &>(
          (Scene *)&v18,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<BrokenFloorGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v18);
        std::shared_ptr<BrokenFloorGallery>::~shared_ptr(&v18);
        goto LABEL_154;
      case GALLERY_TYPE_BULLET_GAME:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<BulletGallery,Scene &,unsigned int &>(
          (Scene *)&v17,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<BulletGallery>((std::shared_ptr<BaseGallery> *const)(v3 + 64), &v17);
        std::shared_ptr<BulletGallery>::~shared_ptr(&v17);
        goto LABEL_154;
      case GALLERY_TYPE_MIST_TRIAL:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<MistTrialGallery,Scene &,unsigned int &>(
          (Scene *)&v27,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<MistTrialGallery>((std::shared_ptr<BaseGallery> *const)(v3 + 64), &v27);
        std::shared_ptr<MistTrialGallery>::~shared_ptr(&v27);
        goto LABEL_154;
      case GALLERY_TYPE_HIDE_AND_SEEK:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<HideAndSeekGallery,Scene &,unsigned int &>(
          (Scene *)&v19,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<HideAndSeekGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v19);
        std::shared_ptr<HideAndSeekGallery>::~shared_ptr(&v19);
        goto LABEL_154;
      case GALLERY_TYPE_BUOYANT_COMBAT:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<BuoyantCombatGallery,Scene &,unsigned int &>(
          (Scene *)&v21,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<BuoyantCombatGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v21);
        std::shared_ptr<BuoyantCombatGallery>::~shared_ptr(&v21);
        goto LABEL_154;
      case GALLERY_TYPE_BOUNCE_CONJURING:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<BounceConjuringGallery,Scene &,unsigned int &>(
          (Scene *)&v20,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<BounceConjuringGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v20);
        std::shared_ptr<BounceConjuringGallery>::~shared_ptr(&v20);
        goto LABEL_154;
      case GALLERY_TYPE_HANDBALL:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<HandballGallery,Scene &,unsigned int &>(
          (Scene *)&v22,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<HandballGallery>((std::shared_ptr<BaseGallery> *const)(v3 + 64), &v22);
        std::shared_ptr<HandballGallery>::~shared_ptr(&v22);
        goto LABEL_154;
      case GALLERY_TYPE_SUMO_COMBAT:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<SumoGallery,Scene &,unsigned int &>(
          (Scene *)&v23,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<SumoGallery>((std::shared_ptr<BaseGallery> *const)(v3 + 64), &v23);
        std::shared_ptr<SumoGallery>::~shared_ptr(&v23);
        goto LABEL_154;
      case GALLERY_TYPE_FISH:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<FishGallery,Scene &,unsigned int &>(
          (Scene *)&v24,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<FishGallery>((std::shared_ptr<BaseGallery> *const)(v3 + 64), &v24);
        std::shared_ptr<FishGallery>::~shared_ptr(&v24);
        goto LABEL_154;
      case GALLERY_TYPE_DIG_COMBAT:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<DigCombatGallery,Scene &,unsigned int &>(
          (Scene *)&v25,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<DigCombatGallery>((std::shared_ptr<BaseGallery> *const)(v3 + 64), &v25);
        std::shared_ptr<DigCombatGallery>::~shared_ptr(&v25);
        goto LABEL_154;
      case GALLERY_TYPE_TRIATHLON:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<TriathlonGallery,Scene &,unsigned int &>(
          (Scene *)&v26,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<TriathlonGallery>((std::shared_ptr<BaseGallery> *const)(v3 + 64), &v26);
        std::shared_ptr<TriathlonGallery>::~shared_ptr(&v26);
        goto LABEL_154;
      case GALLERY_TYPE_HOME_RACING:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<HomeRacingGallery,Scene &,unsigned int &>(
          (Scene *)&v28,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<HomeRacingGallery>((std::shared_ptr<BaseGallery> *const)(v3 + 64), &v28);
        std::shared_ptr<HomeRacingGallery>::~shared_ptr(&v28);
        goto LABEL_154;
      case GALLERY_TYPE_SALVAGE_PREVENT:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<SalvagePreventGallery,Scene &,unsigned int &>(
          (Scene *)&v29,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<SalvagePreventGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v29);
        std::shared_ptr<SalvagePreventGallery>::~shared_ptr(&v29);
        goto LABEL_154;
      case GALLERY_TYPE_SALVAGE_ESCORT:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<SalvageEscortGallery,Scene &,unsigned int &>(
          (Scene *)&v30,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<SalvageEscortGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v30);
        std::shared_ptr<SalvageEscortGallery>::~shared_ptr(&v30);
        goto LABEL_154;
      case GALLERY_TYPE_HOME_BALLOON:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<HomeBalloonGallery,Scene &,unsigned int &>(
          (Scene *)&v31,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<HomeBalloonGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v31);
        std::shared_ptr<HomeBalloonGallery>::~shared_ptr(&v31);
        goto LABEL_154;
      case GALLERY_TYPE_CRYSTAL_LINK:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<CrystalLinkGallery,Scene &,unsigned int &>(
          (Scene *)&v32,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<CrystalLinkGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v32);
        std::shared_ptr<CrystalLinkGallery>::~shared_ptr(&v32);
        goto LABEL_154;
      case GALLERY_TYPE_PHOTO:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<PhotoGallery,Scene &,unsigned int &>(
          (Scene *)&v34,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<PhotoGallery>((std::shared_ptr<BaseGallery> *const)(v3 + 64), &v34);
        std::shared_ptr<PhotoGallery>::~shared_ptr(&v34);
        goto LABEL_154;
      case GALLERY_TYPE_SWORD_WAY:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<IrodoriMasterGallery,Scene &,unsigned int &>(
          (Scene *)&v33,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<IrodoriMasterGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v33);
        std::shared_ptr<IrodoriMasterGallery>::~shared_ptr(&v33);
        goto LABEL_154;
      case GALLERY_TYPE_LUMINANCE_STONE_CHALLENGE:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<LuminanceStoneChallengeGallery,Scene &,unsigned int &>(
          (Scene *)&v35,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<LuminanceStoneChallengeGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v35);
        std::shared_ptr<LuminanceStoneChallengeGallery>::~shared_ptr(&v35);
        goto LABEL_154;
      case GALLERY_TYPE_HOME_SEEK_FURNITURE:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<HomeSeekFurnitureGallery,Scene &,unsigned int &>(
          (Scene *)&v37,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<HomeSeekFurnitureGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v37);
        std::shared_ptr<HomeSeekFurnitureGallery>::~shared_ptr(&v37);
        goto LABEL_154;
      case GALLERY_TYPE_MP_BLOCK:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<MpBlockGallery,Scene &,unsigned int &>(
          (Scene *)&v36,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<MpBlockGallery>((std::shared_ptr<BaseGallery> *const)(v3 + 64), &v36);
        std::shared_ptr<MpBlockGallery>::~shared_ptr(&v36);
        goto LABEL_154;
      case GALLERY_TYPE_ISLAND_PARTY_RAFT:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<IslandPartyRaftGallery,Scene &,unsigned int &>(
          (Scene *)&v40,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<IslandPartyRaftGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v40);
        std::shared_ptr<IslandPartyRaftGallery>::~shared_ptr(&v40);
        goto LABEL_154;
      case GALLERY_TYPE_ISLAND_PARTY_SAIL:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<IslandPartySailGallery,Scene &,unsigned int &>(
          (Scene *)&v41,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<IslandPartySailGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v41);
        std::shared_ptr<IslandPartySailGallery>::~shared_ptr(&v41);
        goto LABEL_154;
      case GALLERY_TYPE_ISLAND_PARTY_DOWN_HILL:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<IslandPartyDownHillGallery,Scene &,unsigned int &>(
          (Scene *)&v38,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<IslandPartyDownHillGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v38);
        std::shared_ptr<IslandPartyDownHillGallery>::~shared_ptr(&v38);
        goto LABEL_154;
      case GALLERY_TYPE_SUMMER_TIME_V2_BOAT_RACE:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<SummerTimeV2BoatGallery,Scene &,unsigned int &>(
          (Scene *)&v39,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<SummerTimeV2BoatGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v39);
        std::shared_ptr<SummerTimeV2BoatGallery>::~shared_ptr(&v39);
        goto LABEL_154;
      case GALLERY_TYPE_GRAVEN_INNOCENCE_RACE:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<GravenInnocenceRaceGallery,Scene &,unsigned int &>(
          (Scene *)&v42,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<GravenInnocenceRaceGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v42);
        std::shared_ptr<GravenInnocenceRaceGallery>::~shared_ptr(&v42);
        goto LABEL_154;
      case GALLERY_TYPE_INSTABLE_SPRAY:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<InstableSprayGallery,Scene &,unsigned int &>(
          (Scene *)&v44,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<InstableSprayGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v44);
        std::shared_ptr<InstableSprayGallery>::~shared_ptr(&v44);
        goto LABEL_154;
      case GALLERY_TYPE_MUQADAS_POTION:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<MuqadasPotionGallery,Scene &,unsigned int &>(
          (Scene *)&v43,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<MuqadasPotionGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v43);
        std::shared_ptr<MuqadasPotionGallery>::~shared_ptr(&v43);
        goto LABEL_154;
      case GALLERY_TYPE_TREASURE_SEELIE:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<TreasureSeelieGallery,Scene &,unsigned int &>(
          (Scene *)&v45,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<TreasureSeelieGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v45);
        std::shared_ptr<TreasureSeelieGallery>::~shared_ptr(&v45);
        goto LABEL_154;
      case GALLERY_TYPE_VINTAGE_HUNTING:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<VintageHuntingGallery,Scene &,unsigned int &>(
          (Scene *)&v46,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<VintageHuntingGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v46);
        std::shared_ptr<VintageHuntingGallery>::~shared_ptr(&v46);
        goto LABEL_154;
      case GALLERY_TYPE_WIND_FIELD:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<WindFieldGallery,Scene &,unsigned int &>(
          (Scene *)&v47,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<WindFieldGallery>((std::shared_ptr<BaseGallery> *const)(v3 + 64), &v47);
        std::shared_ptr<WindFieldGallery>::~shared_ptr(&v47);
        goto LABEL_154;
      case GALLERY_TYPE_FUNGUS_FIGHTING_TRAINING:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<FungusFighterTrainingGallery,Scene &,unsigned int &>(
          (Scene *)&v48,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<FungusFighterTrainingGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v48);
        std::shared_ptr<FungusFighterTrainingGallery>::~shared_ptr(&v48);
        goto LABEL_154;
      case GALLERY_TYPE_FUNGUS_FIGHTING_CAPTURE:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<FungusFighterCaptureGallery,Scene &,unsigned int &>(
          (Scene *)&v49,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<FungusFighterCaptureGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v49);
        std::shared_ptr<FungusFighterCaptureGallery>::~shared_ptr(&v49);
        goto LABEL_154;
      case GALLERY_TYPE_CHAR_AMUSE_SPIN_BALL:
      case GALLERY_TYPE_CHAR_AMUSE_PILLAR:
      case GALLERY_TYPE_CHAR_AMUSE_RUN_ON_WATER:
      case GALLERY_TYPE_CHAR_AMUSE_BASE_BALL:
      case GALLERY_TYPE_CHAR_AMUSE_FOOT_BALL:
      case GALLERY_TYPE_CHAR_AMUSE_BRICK_WALL:
      case GALLERY_TYPE_CHAR_AMUSE_BATTLE:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<CharAmusementCommonGallery,Scene &,unsigned int &>(
          (Scene *)&v51,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<CharAmusementCommonGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v51);
        std::shared_ptr<CharAmusementCommonGallery>::~shared_ptr(&v51);
        goto LABEL_154;
      case GALLERY_TYPE_EFFIGY_CHALLENGE_V2:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<EffigyChallengeV2Gallery,Scene &,unsigned int &>(
          (Scene *)&v50,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<EffigyChallengeV2Gallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v50);
        std::shared_ptr<EffigyChallengeV2Gallery>::~shared_ptr(&v50);
        goto LABEL_154;
      case GALLERY_TYPE_BRICK_BREAKER:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<BrickBreakerGallery,Scene &,unsigned int &>(
          (Scene *)&v52,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<BrickBreakerGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v52);
        std::shared_ptr<BrickBreakerGallery>::~shared_ptr(&v52);
        goto LABEL_154;
      case GALLERY_TYPE_COIN_COLLECT:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<CoinCollectGallery,Scene &,unsigned int &>(
          (Scene *)&v53,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<CoinCollectGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v53);
        std::shared_ptr<CoinCollectGallery>::~shared_ptr(&v53);
        goto LABEL_154;
      case GALLERY_TYPE_ELECTROHERCULES_BATTLE:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<ElectroherculesBattleGallery,Scene &,unsigned int &>(
          (Scene *)&v56,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<ElectroherculesBattleGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v56);
        std::shared_ptr<ElectroherculesBattleGallery>::~shared_ptr(&v56);
        goto LABEL_154;
      case GALLERY_TYPE_LANV3_BOAT_GAME_SINGLE:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<LanV3BoatGameSingleGallery,Scene &,unsigned int &>(
          (Scene *)&v54,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<LanV3BoatGameSingleGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v54);
        std::shared_ptr<LanV3BoatGameSingleGallery>::~shared_ptr(&v54);
        goto LABEL_154;
      case GALLERY_TYPE_LANV3_BOAT_GAME_MULTI:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<LanV3BoatGameMultiGallery,Scene &,unsigned int &>(
          (Scene *)&v55,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<LanV3BoatGameMultiGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          &v55);
        std::shared_ptr<LanV3BoatGameMultiGallery>::~shared_ptr(&v55);
        goto LABEL_154;
      case GALLERY_TYPE_TEAM_CHAIN:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<TeamChainGallery,Scene &,unsigned int &>(
          (Scene *)&v59,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<TeamChainGallery>(
          (std::shared_ptr<BaseGallery> *const)(v3 + 64),
          (std::shared_ptr<TeamChainGallery> *)&v59);
        std::shared_ptr<TeamChainGallery>::~shared_ptr((std::shared_ptr<TeamChainGallery> *const)&v59);
        goto LABEL_154;
      case GALLERY_TYPE_DUEL_HEART:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<DuelHeartGallery,Scene &,unsigned int &>(
          (Scene *)&v58,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<DuelHeartGallery>((std::shared_ptr<BaseGallery> *const)(v3 + 64), &v58);
        std::shared_ptr<DuelHeartGallery>::~shared_ptr(&v58);
        goto LABEL_154;
      case GALLERY_TYPE_LANV3_RACE:
        if ( *(_BYTE *)(((unsigned __int64)(gallery_id + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<LanV3RaceGallery,Scene &,unsigned int &>(
          (Scene *)&v57,
          *(unsigned int **)(gallery_id + 8),
          (Scene *)(v3 + 48),
          *(unsigned int **)(gallery_id + 8));
        std::shared_ptr<BaseGallery>::operator=<LanV3RaceGallery>((std::shared_ptr<BaseGallery> *const)(v3 + 64), &v57);
        std::shared_ptr<LanV3RaceGallery>::~shared_ptr(&v57);
LABEL_154:
        std::shared_ptr<BaseGallery>::shared_ptr(
          (std::shared_ptr<BaseGallery> *const)this,
          (std::shared_ptr<BaseGallery> *)(v3 + 64));
        break;
      default:
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_gallery/scene_gallery_comp.cpp",
          "createGallery",
          334);
        v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
               &v60,
               (const char (*)[44])"[GALLERY] gallery type invalid, gallery_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v60);
        std::shared_ptr<BaseGallery>::shared_ptr((std::shared_ptr<BaseGallery> *const)this, 0LL);
        break;
    }
    std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v60,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/scene_gallery_comp.cpp",
      "createGallery",
      174);
    v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v60,
           (const char (*)[47])"[GALLERY] gallery already existed, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v60);
    std::shared_ptr<BaseGallery>::shared_ptr((std::shared_ptr<BaseGallery> *const)this, 0LL);
  }
  if ( v61 == (char *)v3 )
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
  return this;
};

// Line 341: range 0000000016892618-000000001689293F
__int64 __fastcall SceneGalleryComp::startGallery(SceneGalleryComp *const this, uint32_t gallery_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  BaseGallery *v7; // rax
  common::milog::MiLogStream *v8; // rax
  Player *v9; // rax
  PlayerMpComp *MpComp; // rax
  __int64 result; // rax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 gallery_id:340 64 16 15 gallery_ptr:342 96 16 14 player_ptr:353";
  *(_QWORD *)(v2 + 16) = SceneGalleryComp::startGallery;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = gallery_id;
  SceneGalleryComp::findGallery((SceneGalleryComp *const)(v2 + 64), (uint32_t)this);
  if ( std::operator==<BaseGallery>((const std::shared_ptr<BaseGallery> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/scene_gallery_comp.cpp",
      "startGallery",
      345);
    v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v12,
           (const char (*)[43])"[GALLERY] gallery_ptr is null, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v12);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( BaseGallery::start(v7) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/scene_gallery_comp.cpp",
        "startGallery",
        350);
      v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v12,
             (const char (*)[44])"[GALLERY] gallery start failed, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v12);
      v6 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Scene::getOwnPlayer((const Scene *const)(v2 + 96));
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
      {
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        MpComp = Player::getMpComp(v9);
        PlayerMpComp::refreshMpModeAvailability(MpComp);
      }
      v6 = 0;
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
    }
  }
  std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v2 + 64));
  result = v6;
  if ( v13 == (char *)v2 )
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

// Line 362: range 0000000016892940-0000000016892AC8
SceneGalleryComp *__fastcall SceneGalleryComp::findGallery(SceneGalleryComp *const this, __int64 gallery_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::pointer v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 gallery_id:361 64 8 8 iter:363";
  *(_QWORD *)(v3 + 16) = SceneGalleryComp::findGallery;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<BaseGallery>>::find(
                                                                                  (std::map<unsigned int,std::shared_ptr<BaseGallery>> *const)(gallery_id + 24),
                                                                                  (const std::map<unsigned int,std::shared_ptr<BaseGallery>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::end((std::map<unsigned int,std::shared_ptr<BaseGallery>> *const)(gallery_id + 24))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::_Self *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<BaseGallery>::shared_ptr((std::shared_ptr<BaseGallery> *const)this, 0LL);
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery> > > *const)(v3 + 64));
    std::shared_ptr<BaseGallery>::shared_ptr((std::shared_ptr<BaseGallery> *const)this, &v6->second);
  }
  if ( v10 == (char *)v3 )
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
  return this;
};

// Line 373: range 0000000016892B14-0000000016892D13
__int64 __fastcall SceneGalleryComp::forceStopAndClearGallery(
        SceneGalleryComp *const this,
        uint32_t gallery_id,
        bool is_interrupt,
        proto::GalleryStopReason reason)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  BaseGallery *v7; // rax
  __int64 result; // rax
  std::shared_ptr<BaseGallery> v11; // [rsp+20h] [rbp-A0h] BYREF
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 14 gallery_id:372 64 16 15 gallery_ptr:374";
  *(_QWORD *)(v4 + 16) = SceneGalleryComp::forceStopAndClearGallery;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = gallery_id;
  SceneGalleryComp::findGallery((SceneGalleryComp *const)(v4 + 64), (__int64)this, *(_DWORD *)(v4 + 48));
  if ( std::operator!=<BaseGallery>((const std::shared_ptr<BaseGallery> *)(v4 + 64), 0LL) )
  {
    v7 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    BaseGallery::stop(v7, is_interrupt, reason);
    std::shared_ptr<BaseGallery>::shared_ptr(&v11, (const std::shared_ptr<BaseGallery> *)(v4 + 64));
    common::tools::MiscUtils::erase_if<unsigned int,SceneGalleryComp::forceStopAndClearGallery(unsigned int,bool,proto::GalleryStopReason)::{lambda(unsigned int)#1}>(
      &this->gallery_uid_set_,
      (SceneGalleryComp::forceStopAndClearGallery::<lambda(uint32_t)> *)&v11);
    SceneGalleryComp::forceStopAndClearGallery(unsigned int,bool,proto::GalleryStopReason)::{lambda(unsigned int)#1}::~GalleryStopReason((SceneGalleryComp::forceStopAndClearGallery::<lambda(uint32_t)> *const)&v11);
  }
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::erase(
    &this->scene_gallery_map_,
    (const std::map<unsigned int,std::shared_ptr<BaseGallery>>::key_type *)(v4 + 48));
  std::shared_ptr<BaseGallery>::~shared_ptr((std::shared_ptr<BaseGallery> *const)(v4 + 64));
  result = 0LL;
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 379: range 0000000016892ACA-0000000016892AF6
bool __cdecl SceneGalleryComp::forceStopAndClearGallery(unsigned int,bool,proto::GalleryStopReason)::{lambda(unsigned int)#1}::operator()(
        const SceneGalleryComp::forceStopAndClearGallery::<lambda(uint32_t)> *const __closure,
        uint32_t uid)
{
  BaseGallery *v2; // rax

  v2 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  return BaseGallery::isPlayerInGallery(v2, uid);
};

// Line 379: range 0000000016892AF8-0000000016892B12
void __cdecl SceneGalleryComp::forceStopAndClearGallery(unsigned int,bool,proto::GalleryStopReason)::{lambda(unsigned int)#1}::~GalleryStopReason(
        SceneGalleryComp::forceStopAndClearGallery::<lambda(uint32_t)> *const this)
{
  std::shared_ptr<BaseGallery>::~shared_ptr(&this->__gallery_ptr);
};

// Line 389: range 0000000016892D14-0000000016892F61
bool __cdecl SceneGalleryComp::isAnyGalleryStarted(SceneGalleryComp *const this)
{
  std::map<unsigned int,std::shared_ptr<BaseGallery>> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > *v4; // rax
  BaseGallery *v5; // rax
  int v7; // r14d
  bool result; // al
  bool v9; // [rsp+7h] [rbp-109h]
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>> *__for_range; // [rsp+28h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *_; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *gallery_ptr; // [rsp+38h] [rbp-D8h]
  std::pair<unsigned int const,std::shared_ptr<BaseGallery> > v15; // [rsp+40h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+60h] [rbp-B0h] BYREF

  v1 = (std::map<unsigned int,std::shared_ptr<BaseGallery>> *)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::map<unsigned int,std::shared_ptr<BaseGallery>> *)v2;
  }
  *(_QWORD *)v1->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 15 gallery_map:390";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)SceneGalleryComp::isAnyGalleryStarted;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::map(v1 + 1, &this->scene_gallery_map_);
  __for_range = v1 + 1;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::begin(v1 + 1)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::end(v1 + 1)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::pair(&v15, v4);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v15);
    gallery_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v15);
    if ( std::operator!=<BaseGallery>(gallery_ptr, 0LL)
      && (v5 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_ptr),
          BaseGallery::isStart(v5)) )
    {
      v9 = 1;
      v7 = 0;
    }
    else
    {
      v7 = 1;
    }
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::~pair(&v15);
    if ( v7 != 1 )
      goto LABEL_16;
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator++(&__for_begin);
  }
  v9 = 0;
LABEL_16:
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::~map(v1 + 1);
  result = v9;
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 402: range 0000000016892F62-000000001689328E
int32_t __cdecl SceneGalleryComp::getAllGalleryInfo(
        SceneGalleryComp *const this,
        uint32_t uid,
        proto::GetAllSceneGalleryInfoRsp *rsp_0)
{
  std::map<unsigned int,std::shared_ptr<BaseGallery>> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > *v6; // rax
  BaseGallery *v7; // rax
  BaseGallery *v8; // rax
  BaseGallery *v9; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>> *__for_range; // [rsp+30h] [rbp-F0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *_; // [rsp+38h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *gallery_ptr; // [rsp+40h] [rbp-E0h]
  proto::SceneGalleryInfo *gallery_info; // [rsp+48h] [rbp-D8h]
  std::pair<unsigned int const,std::shared_ptr<BaseGallery> > v21; // [rsp+50h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (std::map<unsigned int,std::shared_ptr<BaseGallery>> *)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = (std::map<unsigned int,std::shared_ptr<BaseGallery>> *)v4;
  }
  *(_QWORD *)v3->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v3->_M_t._M_impl._M_header._M_color = "1 48 48 15 gallery_map:403";
  v3->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)SceneGalleryComp::getAllGalleryInfo;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::map(v3 + 1, &this->scene_gallery_map_);
  __for_range = v3 + 1;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::begin(v3 + 1)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::end(v3 + 1)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::pair(&v21, v6);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v21);
    gallery_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v21);
    if ( std::operator!=<BaseGallery>(gallery_ptr, 0LL) )
    {
      v7 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_ptr);
      if ( BaseGallery::getStage(v7) == INIT
        || (v8 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_ptr),
            BaseGallery::isStart(v8)) )
      {
        v9 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_ptr);
        if ( BaseGallery::isPlayerInGallery(v9, uid) )
        {
          gallery_info = proto::GetAllSceneGalleryInfoRsp::add_gallery_info_list(rsp_0);
          v11 = (unsigned __int64)std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_ptr);
          if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
            v11 = __asan_report_load8();
          v12 = *(_QWORD *)v11 + 32LL;
          if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
            v11 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64, proto::SceneGalleryInfo *))v12)(v11, gallery_info);
        }
      }
    }
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::~pair(&v21);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::~map(v3 + 1);
  result = 0;
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 419: range 0000000016893290-0000000016893531
int32_t __cdecl SceneGalleryComp::fillControlGroupSet(
        SceneGalleryComp *const this,
        std::set<unsigned int> *group_id_set)
{
  std::map<unsigned int,std::shared_ptr<BaseGallery>> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > *v5; // rax
  BaseGallery *v6; // rax
  BaseGallery *v7; // rax
  BaseGallery *v9; // rdx
  int32_t result; // eax
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>> *__for_range; // [rsp+28h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *_; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *gallery_ptr; // [rsp+38h] [rbp-D8h]
  std::pair<unsigned int const,std::shared_ptr<BaseGallery> > v16; // [rsp+40h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (std::map<unsigned int,std::shared_ptr<BaseGallery>> *)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<unsigned int,std::shared_ptr<BaseGallery>> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 15 gallery_map:420";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)SceneGalleryComp::fillControlGroupSet;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::map(v2 + 1, &this->scene_gallery_map_);
  __for_range = v2 + 1;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::begin(v2 + 1)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::end(v2 + 1)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::pair(&v16, v5);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v16);
    gallery_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v16);
    if ( std::operator!=<BaseGallery>(gallery_ptr, 0LL) )
    {
      v6 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_ptr);
      if ( BaseGallery::getStage(v6) == INIT
        || (v7 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_ptr),
            BaseGallery::isStart(v7)) )
      {
        v9 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_ptr);
        BaseGallery::fillControlGroupSet(v9, group_id_set);
      }
    }
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::~pair(&v16);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::~map(v2 + 1);
  result = 0;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 435: range 0000000016893532-000000001689383D
void __cdecl SceneGalleryComp::onLeaveScene(SceneGalleryComp *const this, Player *player)
{
  std::map<unsigned int,std::shared_ptr<BaseGallery>> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > *v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  SceneTransferAwaiter *v10; // rdx
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>> *__for_range; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *_; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *gallery_ptr; // [rsp+38h] [rbp-C8h]
  std::pair<unsigned int const,std::shared_ptr<BaseGallery> > v16; // [rsp+40h] [rbp-C0h] BYREF
  char v17[160]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (std::map<unsigned int,std::shared_ptr<BaseGallery>> *)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<unsigned int,std::shared_ptr<BaseGallery>> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 15 gallery_map:437";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)SceneGalleryComp::onLeaveScene;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::map(v2 + 1, &this->scene_gallery_map_);
  __for_range = v2 + 1;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::begin(v2 + 1)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::end(v2 + 1)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::pair(&v16, v5);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v16);
    gallery_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v16);
    if ( std::operator!=<BaseGallery>(gallery_ptr, 0LL) )
    {
      v6 = (unsigned __int64)std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_ptr);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8();
      v7 = *(_QWORD *)v6 + 40LL;
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, Player *))v7)(v6, player);
    }
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::~pair(&v16);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator++(&__for_begin);
  }
  if ( std::operator!=<SceneTransferAwaiter>(&this->scene_transfer_awaiter_ptr_, 0LL) )
  {
    v8 = std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->scene_transfer_awaiter_ptr_);
    if ( SceneTransferAwaiter::isActive(v8) )
    {
      v10 = std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->scene_transfer_awaiter_ptr_);
      SceneTransferAwaiter::playerLeaveScene(v10, player);
    }
  }
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::~map(v2 + 1);
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 452: range 000000001689383E-0000000016893BA2
void __cdecl SceneGalleryComp::onQuitMpMode(SceneGalleryComp *const this)
{
  std::map<unsigned int,std::shared_ptr<BaseGallery>> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > *v4; // rax
  common::milog::MiLogStream *v5; // rax
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>> *__for_range; // [rsp+28h] [rbp-F8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *gallery_id; // [rsp+30h] [rbp-F0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *gallery_ptr; // [rsp+38h] [rbp-E8h]
  std::pair<unsigned int const,std::shared_ptr<BaseGallery> > v11; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v12; // [rsp+60h] [rbp-C0h] BYREF
  char v13[160]; // [rsp+80h] [rbp-A0h] BYREF

  v1 = (std::map<unsigned int,std::shared_ptr<BaseGallery>> *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::map<unsigned int,std::shared_ptr<BaseGallery>> *)v2;
  }
  *(_QWORD *)v1->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 15 gallery_map:455";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)SceneGalleryComp::onQuitMpMode;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_gallery/scene_gallery_comp.cpp",
    "onQuitMpMode",
    453);
  common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v12, (const char (*)[23])"[GALLERY] onQuitMpMode");
  common::milog::MiLogStream::~MiLogStream(&v12);
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::map(v1 + 1, &this->scene_gallery_map_);
  __for_range = v1 + 1;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::begin(v1 + 1)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::end(v1 + 1)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::pair(&v11, v4);
    gallery_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v11);
    gallery_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v11);
    if ( *(_BYTE *)(((unsigned __int64)gallery_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)gallery_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gallery_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( (unsigned int)SceneGalleryComp::forceStopAndClearGallery(this, *gallery_id, 1, GALLERY_STOP_NONE) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_gallery/scene_gallery_comp.cpp",
        "onQuitMpMode",
        460);
      v5 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v12,
             (const char (*)[54])"[GALLERY] forceStopAndClearGallery failed, gallery_id");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, gallery_id);
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::~pair(&v11);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::~map(v1 + 1);
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 466: range 0000000016893BA4-0000000016893E62
int32_t __cdecl SceneGalleryComp::findGalleryRebornPosRot(
        SceneGalleryComp *const this,
        Vector3 *reborn_pos,
        Vector3 *reborn_rot)
{
  int32_t v3; // r14d
  std::map<unsigned int,std::shared_ptr<BaseGallery>> *v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > *v7; // rax
  BaseGallery *v8; // rax
  bool v9; // al
  BaseGallery *v10; // rcx
  int v11; // r15d
  int32_t result; // eax
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>> *__for_range; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *_; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *gallery_ptr; // [rsp+48h] [rbp-D8h]
  std::pair<unsigned int const,std::shared_ptr<BaseGallery> > v19; // [rsp+50h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+70h] [rbp-B0h] BYREF

  v4 = (std::map<unsigned int,std::shared_ptr<BaseGallery>> *)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = (std::map<unsigned int,std::shared_ptr<BaseGallery>> *)v5;
  }
  *(_QWORD *)v4->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v4->_M_t._M_impl._M_header._M_color = "1 48 48 15 gallery_map:468";
  v4->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)SceneGalleryComp::findGalleryRebornPosRot;
  v6 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862723] = -202116109;
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::map(v4 + 1, &this->scene_gallery_map_);
  __for_range = v4 + 1;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::begin(v4 + 1)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::end(v4 + 1)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::pair(&v19, v7);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v19);
    gallery_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v19);
    v9 = 0;
    if ( std::operator!=<BaseGallery>(gallery_ptr, 0LL) )
    {
      v8 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_ptr);
      if ( BaseGallery::isStart(v8) )
        v9 = 1;
    }
    if ( !v9
      || (v10 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_ptr),
          BaseGallery::findGalleryRevivePoint(v10, reborn_pos, reborn_rot)) )
    {
      v11 = 1;
    }
    else
    {
      v3 = 0;
      v11 = 0;
    }
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::~pair(&v19);
    if ( v11 != 1 )
      goto LABEL_17;
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator++(&__for_begin);
  }
  v3 = -1;
LABEL_17:
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::~map(v4 + 1);
  result = v3;
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 483: range 0000000016893E64-0000000016894122
void __cdecl SceneGalleryComp::onPlayerEnter(SceneGalleryComp *const this, Player *player)
{
  std::map<unsigned int,std::shared_ptr<BaseGallery>> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > *v5; // rax
  BaseGallery *v6; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>> *__for_range; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *_; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *gallery_ptr; // [rsp+38h] [rbp-C8h]
  std::pair<unsigned int const,std::shared_ptr<BaseGallery> > v15; // [rsp+40h] [rbp-C0h] BYREF
  char v16[160]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (std::map<unsigned int,std::shared_ptr<BaseGallery>> *)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<unsigned int,std::shared_ptr<BaseGallery>> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 15 gallery_map:485";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)SceneGalleryComp::onPlayerEnter;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::map(v2 + 1, &this->scene_gallery_map_);
  __for_range = v2 + 1;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::begin(v2 + 1)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::end(v2 + 1)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::pair(&v15, v5);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v15);
    gallery_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v15);
    if ( std::operator!=<BaseGallery>(gallery_ptr, 0LL) )
    {
      v6 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_ptr);
      if ( BaseGallery::isStart(v6) )
      {
        v8 = (unsigned __int64)std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_ptr);
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8();
        v9 = *(_QWORD *)v8 + 48LL;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, Player *))v9)(v8, player);
      }
    }
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::~pair(&v15);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::~map(v2 + 1);
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 496: range 0000000016894124-00000000168943FE
void __cdecl SceneGalleryComp::onAvatarDie(SceneGalleryComp *const this, Player *player)
{
  std::map<unsigned int,std::shared_ptr<BaseGallery>> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > *v5; // rax
  BaseGallery *v6; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>> *__for_range; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *_; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *gallery_ptr; // [rsp+38h] [rbp-C8h]
  std::pair<unsigned int const,std::shared_ptr<BaseGallery> > v15; // [rsp+40h] [rbp-C0h] BYREF
  char v16[160]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (std::map<unsigned int,std::shared_ptr<BaseGallery>> *)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<unsigned int,std::shared_ptr<BaseGallery>> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 15 gallery_map:498";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)SceneGalleryComp::onAvatarDie;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::map(v2 + 1, &this->scene_gallery_map_);
  __for_range = v2 + 1;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::begin(v2 + 1)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::end(v2 + 1)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator*(&__for_begin);
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::pair(&v15, v5);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v15);
    gallery_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseGallery>>(&v15);
    if ( std::operator!=<BaseGallery>(gallery_ptr, 0LL) && std::operator!=<BaseGallery>(gallery_ptr, 0LL) )
    {
      v6 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_ptr);
      if ( BaseGallery::isStart(v6) )
      {
        v8 = (unsigned __int64)std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_ptr);
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8();
        v9 = *(_QWORD *)v8 + 56LL;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, Player *))v9)(v8, player);
      }
    }
    std::pair<unsigned int const,std::shared_ptr<BaseGallery>>::~pair(&v15);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::~map(v2 + 1);
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 512: range 0000000016894400-00000000168946E0
std::set<unsigned int> *__cdecl SceneGalleryComp::getAllStartedGalleryIdSet(
        std::set<unsigned int> *retstr,
        SceneGalleryComp *const this)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  BaseGallery *v5; // rax
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>>::iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseGallery>> *__for_range; // [rsp+20h] [rbp-C0h]
  const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > *v11; // [rsp+28h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *gallery_id; // [rsp+30h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *gallery_ptr; // [rsp+38h] [rbp-A8h]
  char v14[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (std::set<unsigned int> *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 18 gallery_id_set:518";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)SceneGalleryComp::getAllStartedGalleryIdSet;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  if ( !(_BYTE)`guard variable for'SceneGalleryComp::getAllStartedGalleryIdSet(void)::empty_gallery_set
    && __cxa_guard_acquire(&`guard variable for'SceneGalleryComp::getAllStartedGalleryIdSet(void)::empty_gallery_set) )
  {
    std::set<unsigned int>::set(&SceneGalleryComp::getAllStartedGalleryIdSet(void)::empty_gallery_set);
    __cxa_guard_release(&`guard variable for'SceneGalleryComp::getAllStartedGalleryIdSet(void)::empty_gallery_set);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::set<unsigned int>::~set,
      &SceneGalleryComp::getAllStartedGalleryIdSet(void)::empty_gallery_set,
      &_dso_handle);
  }
  if ( std::map<unsigned int,std::shared_ptr<BaseGallery>>::empty(&this->scene_gallery_map_) )
  {
    std::set<unsigned int>::set(retstr, &SceneGalleryComp::getAllStartedGalleryIdSet(void)::empty_gallery_set);
  }
  else
  {
    std::set<unsigned int>::set(v2 + 1);
    __for_range = &this->scene_gallery_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::begin(&this->scene_gallery_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseGallery>>::end(&this->scene_gallery_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator*(&__for_begin);
      gallery_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseGallery>>(v11);
      gallery_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseGallery> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseGallery>>(v11);
      if ( std::operator!=<BaseGallery>(gallery_ptr, 0LL) )
      {
        v5 = std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)gallery_ptr);
        if ( BaseGallery::isStart(v5) )
          std::set<unsigned int>::insert(v2 + 1, gallery_id);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseGallery>>>::operator++(&__for_begin);
    }
    std::set<unsigned int>::set(retstr, v2 + 1);
    std::set<unsigned int>::~set(v2 + 1);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 530: range 00000000168947D2-000000001689539B
__int64 __fastcall SceneGalleryComp::checkCanStartGallery(
        SceneGalleryComp *const this,
        uint32_t gallery_id,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::set<unsigned int>::iterator v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  data::GalleryType type; // eax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v23; // rdx
  common::milog::MiLogStream *v24; // rbx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  Player *v27; // rax
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  Player *v32; // rax
  PlayerAvatarComp *AvatarComp; // rax
  const std::unordered_set<long unsigned int> *QuestTempAvatarGuidSet; // rax
  Player *v35; // rax
  PlayerAvatarComp *v36; // rax
  const std::vector<long unsigned int> *QuestLockTeamAvatarGuidVec; // rax
  Player *v38; // rax
  PlayerAvatarComp *v39; // rax
  const std::vector<long unsigned int> *LockTeamAvatarGuidVec; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+2Ch] [rbp-104h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+30h] [rbp-100h] BYREF
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v46; // [rsp+40h] [rbp-F0h] BYREF
  char v47[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 7 uid:566 48 4 14 gallery_id:529 64 8 8 pred:539 96 8 8 iter:560 128 16 14 player_ptr:577";
  *(_QWORD *)(v3 + 16) = SceneGalleryComp::checkCanStartGallery;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 48) = gallery_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 128));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
  gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                         &v6->design_config.txt_config_mgr.gallery_config_mgr,
                         *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
  if ( gallery_config_ptr )
  {
    *(_QWORD *)(v3 + 64) = uid_set;
    __y._M_node = std::set<unsigned int>::end(&this->gallery_uid_set_)._M_node;
    M_node = std::set<unsigned int>::end(&this->gallery_uid_set_)._M_node;
    v10._M_node = std::set<unsigned int>::begin(&this->gallery_uid_set_)._M_node;
    *(std::_Rb_tree_const_iterator<unsigned int> *)(v3 + 96) = std::find_if<std::_Rb_tree_const_iterator<unsigned int>,SceneGalleryComp::checkCanStartGallery(unsigned int,std::set<unsigned int> const&)::{lambda(unsigned int)#1}>(
                                                                 v10,
                                                                 (std::_Rb_tree_const_iterator<unsigned int>)M_node,
                                                                 *(SceneGalleryComp::checkCanStartGallery::<lambda(uint32_t)> *)(v3 + 64));
    if ( std::operator!=((const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 96), &__y) )
    {
      common::milog::MiLogStream::create(
        &v46,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_gallery/scene_gallery_comp.cpp",
        "checkCanStartGallery",
        545);
      v11 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
              &v46,
              (const char (*)[68])"[GALLERY] player is already existed in current gallery, gallery_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v12,
              (const char (*)[27])" current gallerys uid_set:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int>(v13, &this->gallery_uid_set_);
      v15 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v14,
              (const char (*)[23])", new gallery uid_set:");
      common::milog::MiLogStream::operator<<<unsigned int>(v15, uid_set);
      common::milog::MiLogStream::~MiLogStream(&v46);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gallery_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      type = gallery_config_ptr->type;
      if ( type == GALLERY_TYPE_SWORD_WAY || type == GALLERY_TYPE_VINTAGE_HUNTING )
      {
        if ( std::set<unsigned int>::size(uid_set) == 1 )
        {
          *(std::set<unsigned int>::iterator *)(v3 + 96) = std::set<unsigned int>::begin(uid_set);
          __y._M_node = std::set<unsigned int>::end(uid_set)._M_node;
          if ( std::operator==((const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 96), &__y) )
          {
            common::milog::MiLogStream::create(
              &v46,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/scene/scene_gallery/scene_gallery_comp.cpp",
              "checkCanStartGallery",
              563);
            v20 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                    &v46,
                    (const char (*)[51])"[GALLERY] uid_set size is not allowed, gallery_id:");
            v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v3 + 48));
            v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])", uid_set:");
            common::milog::MiLogStream::operator<<<unsigned int>(v22, uid_set);
            common::milog::MiLogStream::~MiLogStream(&v46);
            v8 = -1;
          }
          else
          {
            v23 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 96));
            if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v3 + 32) = *v23;
            if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            if ( Scene::getSceneType(this->scene_) == SCENE_WORLD )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              if ( Scene::getOwnerUid(this->scene_) == *(_DWORD *)(v3 + 32) )
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                Scene::findPlayer((const Scene *const)(v3 + 128), (__int64)this->scene_, *(_DWORD *)(v3 + 32));
                if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 128), 0LL) )
                {
                  common::milog::MiLogStream::create(
                    &v46,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/scene/scene_gallery/scene_gallery_comp.cpp",
                    "checkCanStartGallery",
                    580);
                  v26 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                          &v46,
                          (const char (*)[40])"[GALLERY] scene findPlayer failed, uid:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v26,
                    (const unsigned int *)(v3 + 32));
                  common::milog::MiLogStream::~MiLogStream(&v46);
                  v8 = -1;
                }
                else
                {
                  v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  MpComp = Player::getMpComp(v27);
                  if ( PlayerMpComp::isInMpMode(MpComp) )
                  {
                    common::milog::MiLogStream::create(
                      &v46,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/scene/scene_gallery/scene_gallery_comp.cpp",
                      "checkCanStartGallery",
                      585);
                    v29 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                            &v46,
                            (const char (*)[55])"[GALLERY] gallery cannot start in mp mode, gallery_id:");
                    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v29,
                            (const unsigned int *)(v3 + 48));
                    v31 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                            v30,
                            (const char (*)[7])", uid:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v31,
                      (const unsigned int *)(v3 + 32));
                    common::milog::MiLogStream::~MiLogStream(&v46);
                    v8 = -1;
                  }
                  else
                  {
                    v32 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                    AvatarComp = Player::getAvatarComp(v32);
                    QuestTempAvatarGuidSet = PlayerAvatarComp::getQuestTempAvatarGuidSet(AvatarComp);
                    if ( !std::unordered_set<unsigned long>::empty(QuestTempAvatarGuidSet) )
                    {
                      common::milog::MiLogStream::create(
                        &v46,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/scene/scene_gallery/scene_gallery_comp.cpp",
                        "checkCanStartGallery",
                        591);
                      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                        &v46,
                        (const char (*)[38])"[GALLERY] quest is using trial avatar");
                      common::milog::MiLogStream::~MiLogStream(&v46);
                      v8 = 160;
                    }
                    else
                    {
                      v35 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                      v36 = Player::getAvatarComp(v35);
                      QuestLockTeamAvatarGuidVec = PlayerAvatarComp::getQuestLockTeamAvatarGuidVec(v36);
                      if ( !std::vector<unsigned long>::empty(QuestLockTeamAvatarGuidVec) )
                      {
                        common::milog::MiLogStream::create(
                          &v46,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/scene/scene_gallery/scene_gallery_comp.cpp",
                          "checkCanStartGallery",
                          596);
                        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                          &v46,
                          (const char (*)[41])"[GALLERY] team avatar is locked by quest");
                        common::milog::MiLogStream::~MiLogStream(&v46);
                        v8 = 159;
                      }
                      else
                      {
                        v38 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                        v39 = Player::getAvatarComp(v38);
                        LockTeamAvatarGuidVec = PlayerAvatarComp::getLockTeamAvatarGuidVec(v39);
                        if ( !std::vector<unsigned long>::empty(LockTeamAvatarGuidVec) )
                        {
                          common::milog::MiLogStream::create(
                            &v46,
                            &common::milog::MiLogDefault::default_log_obj_,
                            1u,
                            "./src/scene/scene_gallery/scene_gallery_comp.cpp",
                            "checkCanStartGallery",
                            601);
                          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                            &v46,
                            (const char (*)[32])"[GALLERY] team avatar is locked");
                          common::milog::MiLogStream::~MiLogStream(&v46);
                          v8 = 171;
                        }
                        else
                        {
                          v8 = 0;
                        }
                      }
                    }
                  }
                }
                std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 128));
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v46,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/scene/scene_gallery/scene_gallery_comp.cpp",
                  "checkCanStartGallery",
                  574);
                v25 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        &v46,
                        (const char (*)[39])"[GALLERY] uid is not scene owner, uid:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v25,
                  (const unsigned int *)(v3 + 32));
                common::milog::MiLogStream::~MiLogStream(&v46);
                v8 = -1;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v46,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/scene/scene_gallery/scene_gallery_comp.cpp",
                "checkCanStartGallery",
                569);
              v24 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                      &v46,
                      (const char (*)[45])"[GALLERY] scene_type is not allow, scene_id:");
              if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Scene::getSceneId(this->scene_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
              common::milog::MiLogStream::~MiLogStream(&v46);
              v8 = -1;
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v46,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_gallery/scene_gallery_comp.cpp",
            "checkCanStartGallery",
            557);
          v17 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v46,
                  (const char (*)[51])"[GALLERY] uid_set size is not allowed, gallery_id:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v3 + 48));
          v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])", uid_set:");
          common::milog::MiLogStream::operator<<<unsigned int>(v19, uid_set);
          common::milog::MiLogStream::~MiLogStream(&v46);
          v8 = -1;
        }
      }
      else
      {
        v8 = 0;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v46,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_gallery/scene_gallery_comp.cpp",
      "checkCanStartGallery",
      534);
    v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v46,
           (const char (*)[53])"[GALLERY] findGalleryExcelConfig failed, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v46);
    v8 = -1;
  }
  result = v8;
  if ( v47 == (char *)v3 )
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
  return result;
};

// Line 539: range 00000000168946E2-00000000168947D1
bool __fastcall SceneGalleryComp::checkCanStartGallery(unsigned int,std::set<unsigned int> const&)::{lambda(unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // r12
  bool result; // al
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:539";
  *(_QWORD *)(v2 + 16) = SceneGalleryComp::checkCanStartGallery(unsigned int,std::set<unsigned int> const&)::{lambda(unsigned int)#1}::operator();
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             *(const std::set<unsigned int> **)__closure,
             (const unsigned int *)v4 - 8);
  if ( v7 == (char *)v2 )
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

// Line 613: range 000000001689539C-0000000016895448
void __cdecl SceneGalleryComp::onPlayerPostEnterScene(SceneGalleryComp *const this, Player *player)
{
  std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rbx
  uint32_t Uid; // eax
  SceneTransferAwaiter *v6; // rdx

  if ( std::operator!=<SceneTransferAwaiter>(&this->scene_transfer_awaiter_ptr_, 0LL) )
  {
    v2 = std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->scene_transfer_awaiter_ptr_);
    if ( SceneTransferAwaiter::isActive(v2)
      || (v3 = std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->scene_transfer_awaiter_ptr_),
          Uid = Player::getUid(player),
          SceneTransferAwaiter::isPlayerEnterTimeout(v3, Uid)) )
    {
      v6 = std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->scene_transfer_awaiter_ptr_);
      SceneTransferAwaiter::playerPostEnterScene(v6, player);
    }
  }
};

// Line 622: range 000000001689544A-0000000016895533
void __cdecl SceneGalleryComp::attachSceneTransferAwaiter(
        SceneGalleryComp *const this,
        SceneTransferAwaiterPtr *p_scene_transfer_awaiter_ptr)
{
  std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::shared_ptr<SceneTransferAwaiter> *v4; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator!=<SceneTransferAwaiter>(&this->scene_transfer_awaiter_ptr_, 0LL)
    && (v2 = std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->scene_transfer_awaiter_ptr_),
        SceneTransferAwaiter::isActive(v2)) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/scene/scene_gallery/scene_gallery_comp.cpp",
      "attachSceneTransferAwaiter",
      625);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      &v5,
      (const char (*)[40])"a scene transfer awaiter already active");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    v4 = std::move<std::shared_ptr<SceneTransferAwaiter> &>(p_scene_transfer_awaiter_ptr);
    std::shared_ptr<SceneTransferAwaiter>::operator=(&this->scene_transfer_awaiter_ptr_, v4);
  }
};

// Line 632: range 0000000016895534-00000000168955D2
bool __cdecl SceneGalleryComp::isForbidPlayerEnterBySceneTransferAwaiter(
        const SceneGalleryComp *const this,
        uint32_t uid)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx

  if ( !std::operator!=<SceneTransferAwaiter>(&this->scene_transfer_awaiter_ptr_, 0LL) )
    return 0;
  v2 = (unsigned __int64)std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->scene_transfer_awaiter_ptr_);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  v3 = *(_QWORD *)v2 + 104LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  return (*(unsigned __int8 (__fastcall **)(unsigned __int64, _QWORD))v3)(v2, uid) != 0;
};

// Line 639: range 00000000168955D4-00000000168955F5
bool __cdecl SceneGalleryComp::isForbidAppendAvatar(const SceneGalleryComp *const this, uint32_t uid)
{
  return SceneGalleryComp::isPlayerInStartedGallery<BrickBreakerGallery>(this, uid);
};
