// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_picture_frame/home_picture_frame_data.h

// Line 29: range 0000000016A722F8-0000000016A723D3
void __cdecl HomeOnePictureFrameData::HomeOnePictureFrameData(HomeOnePictureFrameData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->guid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scene_id);
  }
  this->scene_id = 0;
};

// Line 43: range 0000000016A71FCA-0000000016A71FE4
void __cdecl HomeModulePictureFrameData::HomeModulePictureFrameData(HomeModulePictureFrameData *const this)
{
  std::unordered_map<unsigned int,HomeOnePictureFrameData>::unordered_map(&this->picture_frame_data_map);
};

// Line 43: range 0000000016A15F4C-0000000016A15F66
void __cdecl HomeModulePictureFrameData::~HomeModulePictureFrameData(HomeModulePictureFrameData *const this)
{
  std::unordered_map<unsigned int,HomeOnePictureFrameData>::~unordered_map(&this->picture_frame_data_map);
};
