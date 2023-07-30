// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/milog/include/milog_file.h

// Line 421: range 000000000C9A7B6F-000000000C9A7B93
void *__fastcall common::milog::MiLogFile::rmFileThreadHandler(void *para)
{
  pthread_t v1; // rax

  v1 = pthread_self();
  pthread_detach(v1);
  if ( para )
    remove((const char *)para);
  return 0LL;
};
