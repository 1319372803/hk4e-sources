// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/define/gamecore_define.h

// Line 74: range 000000000CB1B8C6-000000000CB1B91E
SelectType __cdecl SAFE_MULTIPLY<unsigned int,unsigned int>(unsigned int a, unsigned int b)
{
  if ( !a || b == b * a / a )
    return b * a;
  if ( b )
    return std::numeric_limits<unsigned int>::max();
  return std::numeric_limits<unsigned int>::lowest();
};
