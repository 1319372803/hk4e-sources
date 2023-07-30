// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_fireworks_launcher.cpp

// Line 21: range 0000000016207A6C-0000000016207B03
void __cdecl WidgetFireworksLauncher::onLogin(WidgetFireworksLauncher *const this)
{
  WidgetGadgetMgr *WidgetGadgetMgr; // rcx

  WidgetBase::onLogin(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->widget_comp_);
  WidgetGadgetMgr = PlayerWidgetComp::getWidgetGadgetMgr(this->widget_comp_);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  WidgetGadgetMgr::destroyGadgetByMaterialId(WidgetGadgetMgr, this->material_id_);
};
