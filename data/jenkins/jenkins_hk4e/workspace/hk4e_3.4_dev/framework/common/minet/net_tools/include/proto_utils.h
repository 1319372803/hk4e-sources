// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/minet/net_tools/include/proto_utils.h

// Line 169: range 00000000004AE16F-00000000004AE17B
std::map<unsigned int,const google::protobuf::Descriptor*> *__cdecl ProtoUtils::getCmdToDescMap()
{
  return &ProtoUtils::cmd_to_desc_map_;
};

// Line 300: range 00000000004AE11B-00000000004AE16E
void __cdecl ProtoUtils::setShowInitLog(bool is_show_init_log)
{
  if ( *(_BYTE *)(((unsigned __int64)&ProtoUtils::is_show_init_log_ >> 3) + 0x7FFF8000) != 0
    && (char)((unsigned __int64)&ProtoUtils::is_show_init_log_ & 7) >= *(_BYTE *)(((unsigned __int64)&ProtoUtils::is_show_init_log_ >> 3)
                                                                                + 0x7FFF8000) )
  {
    __asan_report_store1(&ProtoUtils::is_show_init_log_);
  }
  ProtoUtils::is_show_init_log_ = is_show_init_log;
};
