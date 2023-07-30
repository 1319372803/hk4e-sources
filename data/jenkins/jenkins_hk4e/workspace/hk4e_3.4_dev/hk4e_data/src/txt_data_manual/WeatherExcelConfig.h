// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/WeatherExcelConfig.h

// Line 18: range 000000000D368396-000000000D3683B0
void __cdecl WeatherTemplate::WeatherTemplate(WeatherTemplate *const this)
{
  std::map<unsigned int,std::map<unsigned int,float>>::map(&this->climate_prob_map);
};

// Line 18: range 000000000D2C5BF4-000000000D2C5C0E
void __cdecl WeatherTemplate::~WeatherTemplate(WeatherTemplate *const this)
{
  std::map<unsigned int,std::map<unsigned int,float>>::~map(&this->climate_prob_map);
};
