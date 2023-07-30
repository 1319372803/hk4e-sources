// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/nodeserver/src/nodeserver_app.cpp

// Line 21: range 0000000003845C5E-0000000003845C89
int32_t __cdecl NodeserverApp::addAllServicesToBox(NodeserverApp *const this, common::tools::PTree *pt)
{
  if ( ServiceBox::addService<NodeserverService>() )
    return -1;
  else
    return 0;
};
