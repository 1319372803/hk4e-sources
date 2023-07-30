// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/httpproxy/src/httpproxy_app.cpp

// Line 19: range 000000000C6DCAA2-000000000C6DCACD
int32_t __cdecl HttpProxyApp::addAllServicesToBox(HttpProxyApp *const this, common::tools::PTree *pt)
{
  if ( ServiceBox::addService<HttpProxyService>() )
    return -1;
  else
    return 0;
};
