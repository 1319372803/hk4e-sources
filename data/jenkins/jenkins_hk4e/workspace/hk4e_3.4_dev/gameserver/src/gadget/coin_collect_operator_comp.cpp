// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/coin_collect_operator_comp.cpp

// Line 18: range 000000001313F1BC-000000001313F290
void __cdecl CoinCollectOperatorComp::CoinCollectOperatorComp(
        CoinCollectOperatorComp *const this,
        Gadget *gadget,
        const CoinCollectOperatorParam *param)
{
  int (**v3)(...); // rdx
  uint32_t level_id; // ecx

  GadgetCompBase::GadgetCompBase(this, gadget);
  v3 = (int (**)(...))(&`vtable for'CoinCollectOperatorComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  level_id = param->level_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id_);
  }
  this->level_id_ = level_id;
};

// Line 23: range 000000001313F292-000000001313F300
int32_t __cdecl CoinCollectOperatorComp::toClient(
        const CoinCollectOperatorComp *const this,
        proto::SceneGadgetInfo *gadget_info)
{
  proto::CoinCollectOperatorInfo *coin_collect_operator_info; // [rsp+18h] [rbp-8h]

  coin_collect_operator_info = proto::SceneGadgetInfo::mutable_coin_collect_operator_info(gadget_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CoinCollectOperatorInfo::set_level_id(coin_collect_operator_info, this->level_id_);
  return 0;
};
