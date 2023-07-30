// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_gadget_builder.cpp

// Line 31: range 0000000016207B04-0000000016207BC6
int32_t __cdecl WidgetGadgetBuilder::init(
        WidgetGadgetBuilder *const this,
        data::ConfigBaseWidgetToyPtr *p_base_config_ptr)
{
  bool v2; // bl
  std::shared_ptr<data::ConfigBaseWidgetToy> __r; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  std::dynamic_pointer_cast<data::ConfigWidgetToyGadgetBuilder,data::ConfigBaseWidgetToy>(&__r);
  v2 = std::operator==<data::ConfigWidgetToyGadgetBuilder>(
         0LL,
         (const std::shared_ptr<data::ConfigWidgetToyGadgetBuilder> *)&__r);
  std::shared_ptr<data::ConfigWidgetToyGadgetBuilder>::~shared_ptr((std::shared_ptr<data::ConfigWidgetToyGadgetBuilder> *const)&__r);
  if ( !v2 )
    return 0;
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/widget/widget_gadget_builder.cpp",
    "init",
    34);
  common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
    &v5,
    (const char (*)[56])"convert to ConfigWidgetToyGadgetBuilder pointer failed.");
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 5;
};

// Line 41: range 0000000016207BC8-0000000016208DC5
int32_t __cdecl WidgetGadgetBuilder::onQuickUse(
        WidgetGadgetBuilder *const this,
        const proto::QuickUseWidgetReq *req,
        proto::QuickUseWidgetRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // r14
  bool v11; // r14
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *v16; // rax
  uint32_t WidgetComp; // ecx
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  const proto::WidgetCreateLocationInfo *v21; // rax
  const proto::Vector *v22; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  const Vector3 *Position; // rax
  PlayerWidgetComp *widget_comp; // r14
  std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rdx
  bool *p_is_consume_material; // rax
  PlayerItemComp *ItemComp; // rax
  WidgetGadgetBuilder *v30; // rax
  common::milog::MiLogStream *v31; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // rax
  std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rdx
  bool *v35; // rax
  PlayerItemComp *v36; // rax
  PlayerWidgetComp *v37; // r14
  std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rdx
  uint32_t *p_gadget_id; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  unsigned __int64 Rotation; // rax
  const proto::WidgetCreateLocationInfo *v43; // rax
  const proto::Vector *v44; // rax
  Scene *v45; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // r14
  unsigned __int64 v48; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rsi
  std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  uint32_t lasting_time; // r14d
  uint32_t Uid; // eax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // r14
  std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // r14
  WidgetGadgetBuilder *v60; // [rsp+0h] [rbp-580h]
  std::__shared_ptr_access<WidgetGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // [rsp+0h] [rbp-580h]
  unsigned int val; // [rsp+28h] [rbp-558h] BYREF
  uint32_t check_distance; // [rsp+2Ch] [rbp-554h]
  int32_t ret; // [rsp+30h] [rbp-550h]
  Vector3 pos2; // [rsp+34h] [rbp-54Ch] BYREF
  std::shared_ptr<Home> __a; // [rsp+40h] [rbp-540h] BYREF
  common::milog::MiLogStream v67; // [rsp+50h] [rbp-530h] BYREF
  char v68[1296]; // [rsp+70h] [rbp-510h] BYREF

  v3 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1248LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 8 10 reason:127 80 16 13 config_ptr:47 112 16 13 avatar_ptr:54 144 16 12 scene_ptr:59 176 1"
                        "6 19 owner_player_ptr:71 208 16 27 owner_gadget_builder_ptr:77 240 16 14 item_param:104 272 16 1"
                        "4 gadget_ptr:143 304 816 16 gadget_param:138";
  *(_QWORD *)(v3 + 16) = WidgetGadgetBuilder::onQuickUse;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = 62194;
  v5[536862728] = 62194;
  v5[536862729] = 62194;
  v5[536862755] = -202116109;
  v5[536862756] = -202116109;
  v5[536862757] = -202116109;
  v5[536862758] = -202116109;
  if ( proto::QuickUseWidgetReq::param_case(req) == kLocationInfo_0 )
  {
    WidgetGadgetBuilder::getConfig((const WidgetGadgetBuilder *const)(v3 + 80));
    if ( std::operator==<data::ConfigWidgetToyGadgetBuilder const>(
           0LL,
           (const std::shared_ptr<const data::ConfigWidgetToyGadgetBuilder> *)(v3 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v67,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/widget/widget_gadget_builder.cpp",
        "onQuickUse",
        50);
      v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v67,
             (const char (*)[29])"getConfig fail, material_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->material_id_);
      v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v9, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v67);
      v6 = 5;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getAvatarComp(this->player_);
      PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 112));
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 112)) )
      {
        v6 = 103;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 144));
        if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 144), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v67,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/widget/widget_gadget_builder.cpp",
            "onQuickUse",
            62);
          v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v67,
                  (const char (*)[25])"getCurScene fails, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
          common::milog::MiLogStream::~MiLogStream(&v67);
          v6 = -1;
        }
        else
        {
          std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
          Scene::getOwnHome((const Scene *const)&__a);
          v11 = std::operator!=<Home>(&__a, 0LL);
          std::shared_ptr<Home>::~shared_ptr(&__a);
          if ( v11 )
          {
            common::milog::MiLogStream::create(
              &v67,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/widget/widget_gadget_builder.cpp",
              "onQuickUse",
              68);
            v12 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    &v67,
                    (const char (*)[33])"player in home. use fail, scene:");
            v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
            common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v12, v13);
            common::milog::MiLogStream::~MiLogStream(&v67);
            v6 = 530;
          }
          else
          {
            std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
            Scene::getOwnPlayer((const Scene *const)(v3 + 176));
            if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 176)) )
            {
              common::milog::MiLogStream::create(
                &v67,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/widget/widget_gadget_builder.cpp",
                "onQuickUse",
                74);
              v14 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                      &v67,
                      (const char (*)[26])"getOwnPlayer fail, scene:");
              v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
              common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v14, v15);
              common::milog::MiLogStream::~MiLogStream(&v67);
              v6 = -1;
            }
            else
            {
              v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
              WidgetComp = (unsigned int)Player::getWidgetComp(v16);
              if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->material_id_);
              }
              PlayerWidgetComp::getOrCreateWidget<WidgetGadgetBuilder>((PlayerWidgetComp *const)(v3 + 208), WidgetComp);
              if ( std::operator==<WidgetGadgetBuilder>(0LL, (const std::shared_ptr<WidgetGadgetBuilder> *)(v3 + 208)) )
              {
                common::milog::MiLogStream::create(
                  &v67,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/widget/widget_gadget_builder.cpp",
                  "onQuickUse",
                  80);
                v18 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                        &v67,
                        (const char (*)[38])off_25B9DB80);
                v19 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
                common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v18, v19);
                common::milog::MiLogStream::~MiLogStream(&v67);
                v6 = -1;
              }
              else
              {
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&__a);
                v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__a);
                check_distance = ConstValueExcelConfigMgr::getDefaultCheckDistance(&v20->design_config.txt_config_mgr.const_value_config_mgr);
                std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__a);
                v21 = proto::QuickUseWidgetReq::location_info(req);
                v22 = proto::WidgetCreateLocationInfo::pos(v21);
                Vector3::Vector3(&pos2, v22);
                v23 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
                Position = Entity::getPosition((const Entity *const)v23);
                if ( getDistance(Position, &pos2) <= (float)(int)check_distance )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->widget_comp_);
                  widget_comp = this->widget_comp_;
                  v26 = std::__shared_ptr_access<data::ConfigWidgetToyGadgetBuilder const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                  if ( *(_BYTE *)(((unsigned __int64)&v26->cd_group >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v26->cd_group >> 3) + 0x7FFF8000) <= 3 )
                  {
                    v26 = (std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v26->cd_group);
                  }
                  ret = PlayerWidgetComp::checkWidgetGroupCoolDown(widget_comp, v26->cd_group);
                  if ( ret )
                  {
                    v6 = ret;
                  }
                  else
                  {
                    *(_DWORD *)(v3 + 240) = 0;
                    *(_DWORD *)(v3 + 244) = 0;
                    *(_DWORD *)(v3 + 248) = 0;
                    *(_DWORD *)(v3 + 252) = 0;
                    if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&this->material_id_);
                    }
                    *(_DWORD *)(v3 + 240) = this->material_id_;
                    *(_DWORD *)(v3 + 244) = 1;
                    v27 = std::__shared_ptr_access<data::ConfigWidgetToyGadgetBuilder const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                    p_is_consume_material = &v27->is_consume_material;
                    if ( *(_BYTE *)(((unsigned __int64)p_is_consume_material >> 3) + 0x7FFF8000) != 0
                      && ((unsigned __int8)p_is_consume_material & 7) >= *(_BYTE *)(((unsigned __int64)p_is_consume_material >> 3)
                                                                                  + 0x7FFF8000) )
                    {
                      __asan_report_load1(p_is_consume_material);
                    }
                    if ( !v27->is_consume_material )
                      goto LABEL_45;
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    ItemComp = Player::getItemComp(this->player_);
                    ret = PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v3 + 240));
                    if ( ret )
                    {
                      v6 = ret;
                    }
                    else
                    {
LABEL_45:
                      v30 = std::__shared_ptr_access<WidgetGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
                      ret = WidgetGadgetBuilder::checkGadgetBuilderCount(v30);
                      if ( ret )
                      {
                        common::milog::MiLogStream::create(
                          &v67,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/player/widget/widget_gadget_builder.cpp",
                          "onQuickUse",
                          120);
                        v31 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                &v67,
                                (const char (*)[7])"owner:");
                        v32 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
                        val = Player::getUid(v32);
                        v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
                        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                          v33,
                          (const char (*)[31])" checkGadgetBuilderCount fails");
                        common::milog::MiLogStream::~MiLogStream(&v67);
                        v6 = ret;
                      }
                      else
                      {
                        v34 = std::__shared_ptr_access<data::ConfigWidgetToyGadgetBuilder const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                        v35 = &v34->is_consume_material;
                        if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
                          && ((unsigned __int8)v35 & 7) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_load1(v35);
                        }
                        if ( !v34->is_consume_material )
                          goto LABEL_87;
                        SubItemReason::SubItemReason(
                          (SubItemReason *const)(v3 + 48),
                          ACTION_REASON_USE_WIDGET_GADGET_BUILDER);
                        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                          __asan_report_load8(&this->player_);
                        v36 = Player::getItemComp(this->player_);
                        if ( PlayerItemComp::subItem(
                               v36,
                               (const ItemParam *)(v3 + 240),
                               (const SubItemReason *)(v3 + 48)) )
                        {
                          common::milog::MiLogStream::create(
                            &v67,
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/player/widget/widget_gadget_builder.cpp",
                            "onQuickUse",
                            130);
                          common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                            &v67,
                            (const char (*)[14])"subItem fails");
                          common::milog::MiLogStream::~MiLogStream(&v67);
                          v6 = -1;
                        }
                        else
                        {
LABEL_87:
                          if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
                            __asan_report_load8(&this->widget_comp_);
                          v37 = this->widget_comp_;
                          v38 = std::__shared_ptr_access<data::ConfigWidgetToyGadgetBuilder const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                          if ( *(_BYTE *)(((unsigned __int64)&v38->cd_group >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&v38->cd_group >> 3) + 0x7FFF8000) <= 3 )
                          {
                            v38 = (std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v38->cd_group);
                          }
                          PlayerWidgetComp::updateWidgetGroupCoolDown(v37, v38->cd_group, 1);
                          GadgetParam::GadgetParam((GadgetParam *const)(v3 + 304));
                          v39 = std::__shared_ptr_access<data::ConfigWidgetToyGadgetBuilder const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                          p_gadget_id = &v39->gadget_id;
                          if ( *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) != 0
                            && (char)(((unsigned __int8)p_gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3)
                                                                                          + 0x7FFF8000) )
                          {
                            __asan_report_load4(p_gadget_id);
                          }
                          *(_DWORD *)(v3 + 304) = v39->gadget_id;
                          v41 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
                          Rotation = (unsigned __int64)Entity::getRotation((const Entity *const)v41);
                          if ( (char)(Rotation & 7) >= *(_BYTE *)((Rotation >> 3) + 0x7FFF8000)
                            && *(_BYTE *)((Rotation >> 3) + 0x7FFF8000) != 0
                            || *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) != 0
                            && (char)((Rotation + 11) & 7) >= *(_BYTE *)(((Rotation + 11) >> 3) + 0x7FFF8000) )
                          {
                            Rotation = __asan_report_load_n(Rotation, 12LL);
                          }
                          *(_QWORD *)(v3 + 328) = *(_QWORD *)Rotation;
                          *(_DWORD *)(v3 + 336) = *(_DWORD *)(Rotation + 8);
                          v43 = proto::QuickUseWidgetReq::location_info(req);
                          v44 = proto::WidgetCreateLocationInfo::pos(v43);
                          Vector3::Vector3(&pos2, v44);
                          *(Vector3 *)(v3 + 316) = pos2;
                          v45 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
                          *(_DWORD *)(v3 + 312) = Scene::genNewEntityId(v45, PROT_ENTITY_GADGET);
                          EntityMgr::createGadget((const GadgetParam *)(v3 + 272));
                          if ( std::operator!=<Gadget>((const std::shared_ptr<Gadget> *)(v3 + 272), 0LL) )
                          {
                            v46 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 272));
                            v47 = v46;
                            if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
                              __asan_report_load8(v46);
                            v48 = *(_QWORD *)v47->baseclass_0 + 56LL;
                            if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
                              v48 = __asan_report_load8(*(_QWORD *)v47->baseclass_0 + 56LL);
                            v60 = *(WidgetGadgetBuilder **)v48;
                            v49 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
                            ((void (__fastcall *)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v60)(
                              v47,
                              v49,
                              &VisionContext::meet_context);
                            v61 = std::__shared_ptr_access<WidgetGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
                            v50 = std::__shared_ptr_access<data::ConfigWidgetToyGadgetBuilder const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                            if ( *(_BYTE *)(((unsigned __int64)&v50->lasting_time >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((unsigned __int64)&v50->lasting_time >> 3) + 0x7FFF8000) <= 3 )
                            {
                              v50 = (std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v50->lasting_time);
                            }
                            lasting_time = v50->lasting_time;
                            std::shared_ptr<Gadget>::shared_ptr(
                              (std::shared_ptr<Gadget> *const)&__a,
                              (const std::shared_ptr<Gadget> *)(v3 + 272));
                            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                              __asan_report_load8(&this->player_);
                            Uid = Player::getUid(this->player_);
                            WidgetGadgetBuilder::updateGadgetBuilderCount(v61, Uid, (GadgetPtr *)&__a, lasting_time);
                            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&__a);
                          }
                          else
                          {
                            common::milog::MiLogStream::create(
                              &v67,
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/player/widget/widget_gadget_builder.cpp",
                              "onQuickUse",
                              153);
                            v53 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                                    &v67,
                                    (const char (*)[23])"createGadget material:");
                            v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                    v53,
                                    &this->material_id_);
                            v55 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                                    v54,
                                    (const char (*)[12])" gadget_id:");
                            v56 = std::__shared_ptr_access<data::ConfigWidgetToyGadgetBuilder const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                            v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                    v55,
                                    &v56->gadget_id);
                            v58 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                    v57,
                                    (const char (*)[14])" fails, uid: ");
                            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                              __asan_report_load8(&this->player_);
                            val = Player::getUid(this->player_);
                            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, &val);
                            common::milog::MiLogStream::~MiLogStream(&v67);
                          }
                          v6 = 0;
                          std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 272));
                          GadgetParam::~GadgetParam((GadgetParam *const)(v3 + 304));
                        }
                      }
                    }
                  }
                }
                else
                {
                  v6 = 520;
                }
              }
              std::shared_ptr<WidgetGadgetBuilder>::~shared_ptr((std::shared_ptr<WidgetGadgetBuilder> *const)(v3 + 208));
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 176));
          }
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 144));
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 112));
    }
    std::shared_ptr<data::ConfigWidgetToyGadgetBuilder const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetToyGadgetBuilder> *const)(v3 + 80));
  }
  else
  {
    v6 = 1585;
  }
  if ( v68 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF808C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8094) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1248LL, v68);
  }
  return v6;
};

// Line 160: range 0000000016208DC6-00000000162094E8
int32_t __cdecl WidgetGadgetBuilder::checkGadgetBuilderCount(WidgetGadgetBuilder *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  int32_t v7; // r14d
  unsigned __int64 v8; // rax
  unsigned int v9; // r14d
  std::multimap<unsigned int,GadgetBuilderWidgetData>::size_type v10; // r14
  std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  uint32_t *p_max_count_in_scene; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int32_t result; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData> >::_Self __y; // [rsp+18h] [rbp-F8h] BYREF
  common::milog::MiLogStream v27; // [rsp+20h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+40h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 24 creator_gadget_count:168 64 8 8 iter:169 96 16 14 config_ptr:161 128 16 14 gadget_ptr:175";
  *(_QWORD *)(v1 + 16) = WidgetGadgetBuilder::checkGadgetBuilderCount;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  WidgetGadgetBuilder::getConfig((const WidgetGadgetBuilder *const)(v1 + 96));
  if ( !std::operator==<data::ConfigWidgetToyGadgetBuilder const>(
          0LL,
          (const std::shared_ptr<const data::ConfigWidgetToyGadgetBuilder> *)(v1 + 96)) )
  {
    *(_DWORD *)(v1 + 48) = 0;
    *(std::multimap<unsigned int,GadgetBuilderWidgetData>::iterator *)(v1 + 64) = std::multimap<unsigned int,GadgetBuilderWidgetData>::begin(&this->gadget_builder_map_);
    while ( 1 )
    {
      __y._M_node = std::multimap<unsigned int,GadgetBuilderWidgetData>::end(&this->gadget_builder_map_)._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData> >::_Self *)(v1 + 64),
              &__y) )
        break;
      v8 = (unsigned __int64)std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData> > *const)(v1 + 64));
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v8 >> 3) + 0x7FFF8000) <= 3 )
        v8 = __asan_report_load4(v8);
      v9 = *(_DWORD *)v8;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      if ( v9 == Player::getUid(this->player_) )
        ++*(_DWORD *)(v1 + 48);
      std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData> > *const)(v1 + 64));
      std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v1 + 128));
      if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v1 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/widget_gadget_builder.cpp",
          "checkGadgetBuilderCount",
          178);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v27,
          (const char (*)[26])"remove one expired gadget");
        common::milog::MiLogStream::~MiLogStream(&v27);
        *(std::multimap<unsigned int,GadgetBuilderWidgetData>::iterator *)(v1 + 64) = std::multimap<unsigned int,GadgetBuilderWidgetData>::erase[abi:cxx11](
                                                                                        &this->gadget_builder_map_,
                                                                                        *(std::multimap<unsigned int,GadgetBuilderWidgetData>::iterator *)(v1 + 64));
      }
      else
      {
        std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData> > *const)(v1 + 64));
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v1 + 128));
    }
    v10 = std::multimap<unsigned int,GadgetBuilderWidgetData>::size(&this->gadget_builder_map_);
    v11 = std::__shared_ptr_access<data::ConfigWidgetToyGadgetBuilder const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    p_max_count_in_scene = &v11->max_count_in_scene;
    if ( *(_BYTE *)(((unsigned __int64)p_max_count_in_scene >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_max_count_in_scene & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_count_in_scene >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(p_max_count_in_scene);
    }
    if ( v10 < v11->max_count_in_scene )
    {
      v19 = std::__shared_ptr_access<data::ConfigWidgetToyGadgetBuilder const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v19->max_count_by_player >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v19->max_count_by_player >> 3) + 0x7FFF8000) <= 3 )
      {
        v19 = (std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v19->max_count_by_player);
      }
      if ( v19->max_count_by_player > *(_DWORD *)(v1 + 48) )
      {
        v7 = 0;
        goto LABEL_33;
      }
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/widget_gadget_builder.cpp",
        "checkGadgetBuilderCount",
        195);
      v20 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v27, (const char (*)[24])off_25B9DEE0);
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v1 + 48));
      v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" max:");
      v23 = std::__shared_ptr_access<data::ConfigWidgetToyGadgetBuilder const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &v23->max_count_by_player);
      v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v24, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/widget/widget_gadget_builder.cpp",
        "checkGadgetBuilderCount",
        189);
      v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v27,
              (const char (*)[26])"scene gadget builder cnt:");
      __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData> >::_Base_ptr)std::multimap<unsigned int,GadgetBuilderWidgetData>::size(&this->gadget_builder_map_);
      v14 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v13,
              (const unsigned __int64 *)&__y);
      v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" max:");
      v16 = std::__shared_ptr_access<data::ConfigWidgetToyGadgetBuilder const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &v16->max_count_in_scene);
      v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    operator<<(v18, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v7 = 696;
    goto LABEL_33;
  }
  common::milog::MiLogStream::create(
    &v27,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/widget/widget_gadget_builder.cpp",
    "checkGadgetBuilderCount",
    164);
  v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
         &v27,
         (const char (*)[29])"getConfig fail, material_id:");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->material_id_);
  v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v6, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v27);
  v7 = 5;
LABEL_33:
  std::shared_ptr<data::ConfigWidgetToyGadgetBuilder const>::~shared_ptr((std::shared_ptr<const data::ConfigWidgetToyGadgetBuilder> *const)(v1 + 96));
  result = v7;
  if ( v28 == (char *)v1 )
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

// Line 203: range 00000000162094EA-00000000162096CD
void __fastcall WidgetGadgetBuilder::updateGadgetBuilderCount(
        WidgetGadgetBuilder *const this,
        uint32_t creator_uid,
        GadgetPtr *p_gadget_ptr,
        uint32_t lasting_time)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  GadgetBuilderWidgetData *v7; // r8
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 15 creator_uid:202 64 24 15 widget_data:204";
  *(_QWORD *)(v4 + 16) = WidgetGadgetBuilder::updateGadgetBuilderCount;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  *(_DWORD *)(v4 + 48) = creator_uid;
  *(_DWORD *)(v4 + 64) = 0;
  *(_QWORD *)(v4 + 72) = 0LL;
  *(_QWORD *)(v4 + 80) = 0LL;
  *(_DWORD *)(v4 + 64) = common::tools::TimeUtils::getNow() + lasting_time;
  std::weak_ptr<Gadget>::operator=<Gadget>((std::weak_ptr<Gadget> *const)(v4 + 72), p_gadget_ptr);
  std::multimap<unsigned int,GadgetBuilderWidgetData>::emplace<unsigned int &,GadgetBuilderWidgetData&>(
    &this->gadget_builder_map_,
    (unsigned int *)(v4 + 48),
    (GadgetBuilderWidgetData *)(v4 + 64),
    (unsigned int *)&this->gadget_builder_map_,
    v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->widget_comp_);
  PlayerWidgetComp::refreshAllWidgets(this->widget_comp_, 1);
  GadgetBuilderWidgetData::~GadgetBuilderWidgetData((GadgetBuilderWidgetData *const)(v4 + 64));
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 215: range 00000000162096CE-0000000016209AA8
uint32_t __cdecl WidgetGadgetBuilder::refreshGadgetBuilders(
        WidgetGadgetBuilder *const this,
        uint32_t now,
        bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData> >::pointer v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  unsigned __int64 v12; // rax
  void (__fastcall *v13)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData> >::pointer v14; // rax
  const unsigned int *v15; // rax
  _DWORD *v16; // rdx
  uint32_t result; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData> >::_Self __y; // [rsp+28h] [rbp-E8h] BYREF
  VisionContext v19; // [rsp+34h] [rbp-DCh] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 21 next_refresh_time:216 64 8 8 iter:217 96 16 14 gadget_ptr:221";
  *(_QWORD *)(v3 + 16) = WidgetGadgetBuilder::refreshGadgetBuilders;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = -1;
  *(std::multimap<unsigned int,GadgetBuilderWidgetData>::iterator *)(v3 + 64) = std::multimap<unsigned int,GadgetBuilderWidgetData>::begin(&this->gadget_builder_map_);
  while ( 1 )
  {
    __y._M_node = std::multimap<unsigned int,GadgetBuilderWidgetData>::end(&this->gadget_builder_map_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData> >::_Self *)(v3 + 64),
            &__y) )
      break;
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData> > *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = (std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData> >::pointer)__asan_report_load4(&v6->second);
    }
    if ( now < v6->second.end_time )
    {
      v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData> > *const)(v3 + 64));
      v15 = std::min<unsigned int>((const unsigned int *)(v3 + 48), &v14->second.end_time);
      v16 = v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      *(_DWORD *)(v3 + 48) = *v16;
      std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData> > *const)(v3 + 64));
    }
    else
    {
      std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GadgetBuilderWidgetData> > *const)(v3 + 64));
      std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v3 + 96));
      if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/widget/widget_gadget_builder.cpp",
          "refreshGadgetBuilders",
          224);
        v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v20, (const char (*)[15])"remove gadget:");
        v8 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, v8);
        common::milog::MiLogStream::~MiLogStream(&v20);
        v9 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        Creature::changeLifeState(v9, LIFE_DEAD, 0LL, 1);
        v10 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v11 = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v10);
        v12 = *(_QWORD *)v11->baseclass_0 + 128LL;
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load8(*(_QWORD *)v11->baseclass_0 + 128LL);
        v13 = *(void (__fastcall **)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v12;
        VisionContext::VisionContext(&v19, VISION_DIE);
        v13(v11, &v19);
      }
      *(std::multimap<unsigned int,GadgetBuilderWidgetData>::iterator *)(v3 + 64) = std::multimap<unsigned int,GadgetBuilderWidgetData>::erase[abi:cxx11](
                                                                                      &this->gadget_builder_map_,
                                                                                      *(std::multimap<unsigned int,GadgetBuilderWidgetData>::iterator *)(v3 + 64));
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 96));
    }
  }
  result = *(_DWORD *)(v3 + 48);
  if ( v21 == (char *)v3 )
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

// Line 240: range 0000000016209AAA-0000000016209C09
std::shared_ptr<const data::ConfigWidgetToyGadgetBuilder> __cdecl WidgetGadgetBuilder::getConfig(
        const WidgetGadgetBuilder *const this)
{
  const WidgetGadgetBuilder *v1; // rsi
  common::milog::MiLogStream *v2; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  const WidgetJsonNewConfig *WidgetNewConfig; // rsi
  std::shared_ptr<const data::ConfigWidgetToyGadgetBuilder> result; // rax
  const WidgetGadgetBuilder *thisa; // [rsp+0h] [rbp-50h]
  std::shared_ptr<Config> v7; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  thisa = v1;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/widget/widget_gadget_builder.cpp",
    "getConfig",
    241);
  v2 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v8, (const char (*)[13])"material_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &v1->material_id_);
  common::milog::MiLogStream::~MiLogStream(&v8);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7);
  WidgetNewConfig = JsonConfigMgr::getWidgetNewConfig(&v3->design_config.json_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisa->material_id_);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, WidgetNewConfig);
  WidgetJsonNewConfig::findWidgetConfigById<data::ConfigWidgetToyGadgetBuilder const>(
    (const WidgetJsonNewConfig *const)this,
    (uint32_t)WidgetNewConfig);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  result._M_ptr = (std::__shared_ptr<const data::ConfigWidgetToyGadgetBuilder,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
