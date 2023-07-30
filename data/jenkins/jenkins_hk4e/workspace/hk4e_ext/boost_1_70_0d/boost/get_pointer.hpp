// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/get_pointer.hpp

// Line 20: range 00000000009E49D5-00000000009E49E2
Player *__cdecl boost::get_pointer<Player>(Player *p)
{
  return p;
};

// Line 20: range 0000000000919642-000000000091964F
Robot *__cdecl boost::get_pointer<Robot>(Robot *p)
{
  return p;
};

// Line 20: range 00000000009E4768-00000000009E4775
RobotReporter *__cdecl boost::get_pointer<RobotReporter>(RobotReporter *p)
{
  return p;
};

// Line 20: range 00000000009E4C41-00000000009E4C4E
Scene *__cdecl boost::get_pointer<Scene>(Scene *p)
{
  return p;
};

// Line 20: range 00000000009E26A1-00000000009E26AE
const common::tools::TxtFile::Row *__cdecl boost::get_pointer<common::tools::TxtFile::Row const>(
        const common::tools::TxtFile::Row *p)
{
  return p;
};

// Line 48: range 00000000009E266D-00000000009E2686
common::tools::TxtFile *__cdecl boost::get_pointer<common::tools::TxtFile>(
        const std::auto_ptr<common::tools::TxtFile> *p)
{
  return std::auto_ptr<common::tools::TxtFile>::get(p);
};

// Line 67: range 00000000009E4EA9-00000000009E4EC2
Avatar *__cdecl boost::get_pointer<Avatar>(const std::shared_ptr<Avatar> *p)
{
  return std::__shared_ptr<Avatar,(__gnu_cxx::_Lock_policy)2>::get(p);
};

// Line 67: range 00000000009E4485-00000000009E449E
Monster *__cdecl boost::get_pointer<Monster>(const std::shared_ptr<Monster> *p)
{
  return std::__shared_ptr<Monster,(__gnu_cxx::_Lock_policy)2>::get(p);
};

// Line 67: range 00000000009E5138-00000000009E5151
Quest *__cdecl boost::get_pointer<Quest>(const std::shared_ptr<Quest> *p)
{
  return std::__shared_ptr<Quest,(__gnu_cxx::_Lock_policy)2>::get(p);
};
