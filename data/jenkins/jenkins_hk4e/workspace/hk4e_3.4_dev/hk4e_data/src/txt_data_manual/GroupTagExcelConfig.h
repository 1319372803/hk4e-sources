// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GroupTagExcelConfig.h

// Line 23: range 0000000014736AE2-0000000014736B0D
bool __cdecl GroupTagExcelConfigMgr::isGroupTag(const std::string *str)
{
  return std::string::rfind(str, "GTAG_", 0LL) == 0;
};
