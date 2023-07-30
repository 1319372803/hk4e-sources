// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_game/skill/gcg_skill_config_impl_mgr.h

// Line 713: range 000000000DD3BBD4-000000000DD3BC21
void __cdecl ConfigGCGLogicConditionFactoryImpl::ConfigGCGLogicConditionFactoryImpl(
        ConfigGCGLogicConditionFactoryImpl *const this)
{
  int (**v1)(...); // rdx

  data::ConfigGCGLogicConditionFactory::ConfigGCGLogicConditionFactory(this);
  v1 = (int (**)(...))(&`vtable for'ConfigGCGLogicConditionFactoryImpl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_ConfigGCGLogicConditionFactory = v1;
};
