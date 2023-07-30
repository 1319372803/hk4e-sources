// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_coin_collect.cpp

// Line 21: range 0000000016207626-00000000162076E8
int32_t __cdecl WidgetCoinCollect::init(WidgetCoinCollect *const this, data::ConfigBaseWidgetToyPtr *p_base_config_ptr)
{
  bool v2; // bl
  std::shared_ptr<data::ConfigBaseWidgetToy> __r; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  std::dynamic_pointer_cast<data::ConfigWidgetCoinCollect,data::ConfigBaseWidgetToy>(&__r);
  v2 = std::operator==<data::ConfigWidgetCoinCollect>(0LL, (const std::shared_ptr<data::ConfigWidgetCoinCollect> *)&__r);
  std::shared_ptr<data::ConfigWidgetCoinCollect>::~shared_ptr((std::shared_ptr<data::ConfigWidgetCoinCollect> *const)&__r);
  if ( !v2 )
    return 0;
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/widget/widget_coin_collect.cpp",
    "init",
    24);
  common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
    &v5,
    (const char (*)[51])"convert to ConfigWidgetCoinCollect pointer failed.");
  common::milog::MiLogStream::~MiLogStream(&v5);
  return 5;
};
