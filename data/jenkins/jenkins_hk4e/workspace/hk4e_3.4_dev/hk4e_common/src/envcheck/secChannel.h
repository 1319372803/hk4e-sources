// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_common/src/envcheck/secChannel.h

// Line 41: range 000000000CE3EB78-000000000CE3EBA4
void __cdecl stSCChannelInfo::stSCChannelInfo(stSCChannelInfo *const this)
{
  std::mersenne_twister_engine<unsigned long,64ul,312ul,156ul,31ul,13043109905998158313ul,29ul,6148914691236517205ul,17ul,8202884508482404352ul,37ul,18444473444759240704ul,43ul,6364136223846793005ul>::mersenne_twister_engine(&this->pRandomGen);
  std::queue<unsigned long>::queue<std::deque<unsigned long>,void>(&this->pRandomSalts);
};

// Line 41: range 000000000CE3EB56-000000000CE3EB76
void __cdecl stSCChannelInfo::~stSCChannelInfo(stSCChannelInfo *const this)
{
  std::queue<unsigned long>::~queue(&this->pRandomSalts);
};
