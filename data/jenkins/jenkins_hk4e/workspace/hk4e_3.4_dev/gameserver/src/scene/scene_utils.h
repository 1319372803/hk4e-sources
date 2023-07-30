// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_utils.h

// Line 21: range 0000000015A1DBC1-0000000015A1DBEC
bool __cdecl SceneUtils::isVisionTypeReplace(proto::VisionType vision_type)
{
  return vision_type == VISION_REPLACE || vision_type >= VISION_REPLACE && (unsigned int)(vision_type - 10) <= 1;
};
