// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/dbgate/src/dbgate_app.cpp

// Line 22: range 000000000C5D4A44-000000000C5D4A6F
int32_t __cdecl DbgateApp::addAllServicesToBox(DbgateApp *const this, common::tools::PTree *pt)
{
  if ( ServiceBox::addService<DbgateService>() )
    return -1;
  else
    return 0;
};
