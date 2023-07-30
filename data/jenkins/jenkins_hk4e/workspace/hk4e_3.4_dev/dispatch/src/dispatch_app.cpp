// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dispatch/src/dispatch_app.cpp

// Line 22: range 000000000C60EAA2-000000000C60EACD
int32_t __cdecl DispatchApp::addAllServicesToBox(DispatchApp *const this, common::tools::PTree *pt)
{
  if ( ServiceBox::addService<DispatchService>() )
    return -1;
  else
    return 0;
};
