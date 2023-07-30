// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/include/double_link.h

// Line 34: range 0000000019B60664-0000000019B60764
void __fastcall common::tools::DoubleLinkNode::~DoubleLinkNode(common::tools::DoubleLinkNode *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(this, v1);
    JUMPOUT(0x19B60695LL);
  }
  this->_vptr_DoubleLinkNode = (int (**)(...))(&`vtable for'common::tools::DoubleLinkNode + 2);
  common::tools::DoubleLinkNode::removeFromList(this);
};
