// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/home/limited_shop.h

// Line 29: range 0000000017214932-0000000017214950
void __cdecl LimitedShop::~LimitedShop(LimitedShop *const this)
{
  std::unordered_map<unsigned int,WeekendDjinnInfo>::~unordered_map(&this->djinn_pos_map_);
};
