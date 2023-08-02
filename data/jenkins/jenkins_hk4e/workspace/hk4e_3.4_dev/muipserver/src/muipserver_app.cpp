// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/muipserver/src/muipserver_app.cpp

// Line 19: range 000000000CB94F8E-000000000CB94FB9
int32_t __cdecl MuipserverApp::addAllServicesToBox(MuipserverApp *const this, common::tools::PTree *pt)
{
  if ( ServiceBox::addService<MuipserverService>() )
    return -1;
  else
    return 0;
};
