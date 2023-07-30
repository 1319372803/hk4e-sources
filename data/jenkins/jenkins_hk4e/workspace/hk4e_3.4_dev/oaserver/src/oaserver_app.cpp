// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/oaserver/src/oaserver_app.cpp

// Line 19: range 000000000CA82F7E-000000000CA82FA9
int32_t __cdecl OaserverApp::addAllServicesToBox(OaserverApp *const this, common::tools::PTree *pt)
{
  if ( ServiceBox::addService<OaserverService>() )
    return -1;
  else
    return 0;
};
