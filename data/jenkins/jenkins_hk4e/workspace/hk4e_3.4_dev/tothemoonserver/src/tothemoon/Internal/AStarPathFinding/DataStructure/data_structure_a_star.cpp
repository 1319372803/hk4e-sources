// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/DataStructure/data_structure_a_star.cpp

// Line 5: range 000000000CBED4FE-000000000CBED78B
void __cdecl AStarInfo::AStarInfo(AStarInfo *const this, SVONode *node)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->status);
  }
  this->status = Unvisited;
  if ( *(_BYTE *)(((unsigned __int64)&this->fromDir >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fromDir >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fromDir);
  }
  this->fromDir = None_11;
  if ( *(_BYTE *)(((unsigned __int64)&this->fromIndex >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fromIndex >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fromIndex);
  }
  this->fromIndex = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type);
  }
  this->type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score);
  }
  this->score = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->g >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->g >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->g);
  }
  this->g = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->h >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->h >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->h);
  }
  this->h = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fromNode >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->fromNode = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->fromType >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fromType >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fromType);
  }
  this->fromType = Invalid_3;
  ToTheMoonVector3::ToTheMoonVector3(&this->junctionPos);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->curNode = node;
};

// Line 20: range 000000000CBED78C-000000000CBED7F7
void __cdecl AStarInfo::~AStarInfo(AStarInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->curNode = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->fromNode >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->fromNode = 0LL;
};

// Line 26: range 000000000CBED7F8-000000000CBED979
// local variable allocation has failed, the output may be wrong!
void __fastcall Pyramid::Pyramid(Pyramid *const this, ToTheMoonVector3 top, std::shared_ptr<NodeWindow> *p_window)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 6 top:26";
  *(_QWORD *)(v3 + 16) = Pyramid::Pyramid;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  *(ToTheMoonVector3 *)(v3 + 32) = top;
  ToTheMoonVector3::ToTheMoonVector3(&this->top);
  std::shared_ptr<NodeWindow>::shared_ptr(&this->base);
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->top.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->top.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  *(_QWORD *)&this->top.x = *(_QWORD *)(v3 + 32);
  this->top.z = *(float *)(v3 + 40);
  std::shared_ptr<NodeWindow>::operator=(&this->base, p_window);
  if ( v6 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 33: range 000000000CBED97A-000000000CBEDB7D
void __cdecl Pyramid::NodeWindowByRelationVec(const Pyramid *const this, NodeWindow *nodeWindow)
{
  ToTheMoonVector3 *p_p4; // rdx
  ToTheMoonVector3 *p_p3; // rdx
  ToTheMoonVector3 *p_p2; // rdx
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rbx
  ToTheMoonVector3 p1; // [rsp+10h] [rbp-80h] BYREF
  ToTheMoonVector3 p2; // [rsp+1Ch] [rbp-74h] BYREF
  ToTheMoonVector3 p3; // [rsp+28h] [rbp-68h] BYREF
  ToTheMoonVector3 p4; // [rsp+34h] [rbp-5Ch] BYREF
  NodeWindow v13; // [rsp+40h] [rbp-50h] BYREF

  if ( std::operator!=<NodeWindow>(&this->base, 0LL) )
  {
    p_p4 = &std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->base)->p4;
    p4 = ToTheMoonVector3::Diff(p_p4, &this->top);
    p_p3 = &std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->base)->p3;
    p3 = ToTheMoonVector3::Diff(p_p3, &this->top);
    p_p2 = &std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->base)->p2;
    p2 = ToTheMoonVector3::Diff(p_p2, &this->top);
    v5 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->base);
    p1 = ToTheMoonVector3::Diff(&v5->p1, &this->top);
    NodeWindow::NodeWindow(&v13, &p1, &p2, &p3, &p4);
    if ( ((unsigned __int8)nodeWindow & 7) >= *(_BYTE *)(((unsigned __int64)nodeWindow >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)nodeWindow >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((unsigned __int64)&nodeWindow->hasInitDir >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)nodeWindow + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&nodeWindow->hasInitDir >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_store_n(nodeWindow, 61LL);
    }
    v6 = *(_QWORD *)&v13.p1.z;
    *(_QWORD *)&nodeWindow->p1.x = *(_QWORD *)&v13.p1.x;
    *(_QWORD *)&nodeWindow->p1.z = v6;
    v7 = *(_QWORD *)&v13.p3.x;
    *(_QWORD *)&nodeWindow->p2.y = *(_QWORD *)&v13.p2.y;
    *(_QWORD *)&nodeWindow->p3.x = v7;
    v8 = *(_QWORD *)&v13.p4.y;
    *(_QWORD *)&nodeWindow->p3.z = *(_QWORD *)&v13.p3.z;
    *(_QWORD *)&nodeWindow->p4.y = v8;
    nodeWindow->pointOutDir = v13.pointOutDir;
    nodeWindow->hasInitDir = v13.hasInitDir;
  }
};

// Line 38: range 000000000CBEDB7E-000000000CBEDFDF
void __cdecl NodeWindow::NodeWindow(
        NodeWindow *const this,
        const ToTheMoonVector3 *p1,
        const ToTheMoonVector3 *p2,
        const ToTheMoonVector3 *p3,
        const ToTheMoonVector3 *p4)
{
  ToTheMoonVector3::ToTheMoonVector3(&this->p1);
  ToTheMoonVector3::ToTheMoonVector3(&this->p2);
  ToTheMoonVector3::ToTheMoonVector3(&this->p3);
  ToTheMoonVector3::ToTheMoonVector3(&this->p4);
  ToTheMoonVector3::ToTheMoonVector3(&this->pointOutDir);
  if ( *(_BYTE *)(((unsigned __int64)&this->hasInitDir >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->hasInitDir >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->hasInitDir);
  }
  this->hasInitDir = 0;
  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->p1.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->p1.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 12LL);
  }
  if ( ((unsigned __int8)p1 & 7) >= *(_BYTE *)(((unsigned __int64)p1 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)p1 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&p1->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)p1 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&p1->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(p1, 12LL);
  }
  this->p1 = *p1;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->p2 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->p2 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->p2.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->p2.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->p2, 12LL);
  }
  if ( ((unsigned __int8)p2 & 7) >= *(_BYTE *)(((unsigned __int64)p2 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)p2 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&p2->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)p2 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&p2->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(p2, 12LL);
  }
  this->p2 = *p2;
  if ( (((unsigned __int8)this + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&this->p3 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->p3 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->p3.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&this->p3.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->p3, 12LL);
  }
  if ( ((unsigned __int8)p3 & 7) >= *(_BYTE *)(((unsigned __int64)p3 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)p3 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&p3->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)p3 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&p3->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(p3, 12LL);
  }
  this->p3 = *p3;
  if ( (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->p4 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->p4 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->p4.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&this->p4.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->p4, 12LL);
  }
  if ( ((unsigned __int8)p4 & 7) >= *(_BYTE *)(((unsigned __int64)p4 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)p4 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&p4->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)p4 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&p4->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(p4, 12LL);
  }
  this->p4 = *p4;
};

// Line 46: range 000000000CBEDFE0-000000000CBEE07A
void __cdecl NodeWindow::NodeWindow(NodeWindow *const this)
{
  ToTheMoonVector3::ToTheMoonVector3(&this->p1);
  ToTheMoonVector3::ToTheMoonVector3(&this->p2);
  ToTheMoonVector3::ToTheMoonVector3(&this->p3);
  ToTheMoonVector3::ToTheMoonVector3(&this->p4);
  ToTheMoonVector3::ToTheMoonVector3(&this->pointOutDir);
  if ( *(_BYTE *)(((unsigned __int64)&this->hasInitDir >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->hasInitDir >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->hasInitDir);
  }
  this->hasInitDir = 0;
};

// Line 53: range 000000000CBEE07C-000000000CBEE254
void __cdecl NodeWindow::GetPlaneVector(const NodeWindow *const this, ToTheMoonVector3 *res)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 12 5 v1:54 64 12 5 v2:55";
  *(_QWORD *)(v2 + 16) = NodeWindow::GetPlaneVector;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -202177536;
  *(ToTheMoonVector3 *)(v2 + 32) = ToTheMoonVector3::Diff(&this->p2, &this->p1);
  *(ToTheMoonVector3 *)(v2 + 64) = ToTheMoonVector3::Diff(&this->p4, &this->p1);
  if ( ((unsigned __int8)res & 7) >= *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&res->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)res + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&res->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(res, 12LL);
  }
  *res = ToTheMoonVector3::Cross((const ToTheMoonVector3 *const)(v2 + 32), (const ToTheMoonVector3 *)(v2 + 64));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 60: range 000000000CBEE256-000000000CBEE4BC
void __cdecl NodeWindow::GetCenter(const NodeWindow *const this, ToTheMoonVector3 *res)
{
  float z; // xmm1_4
  float v3; // xmm2_4
  float y; // xmm1_4
  float v5; // xmm3_4
  float x; // xmm1_4
  ToTheMoonVector3 v7; // [rsp+14h] [rbp-Ch] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->p1.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->p1.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->p1.z);
  }
  z = this->p1.z;
  if ( *(_BYTE *)(((unsigned __int64)&this->p3.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->p3.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->p3.z);
  }
  v3 = (float)(this->p3.z + z) / 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->p1.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->p1.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->p1.y);
  }
  y = this->p1.y;
  if ( *(_BYTE *)(((unsigned __int64)&this->p3.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->p3.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->p3.y);
  }
  v5 = (float)(this->p3.y + y) / 2.0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  x = this->p1.x;
  if ( *(_BYTE *)(((unsigned __int64)&this->p3 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->p3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->p3);
  }
  ToTheMoonVector3::ToTheMoonVector3(&v7, (float)(this->p3.x + x) / 2.0, v5, v3);
  if ( ((unsigned __int8)res & 7) >= *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&res->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)res + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&res->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(res, 12LL);
  }
  *res = v7;
};

// Line 65: range 000000000CBEE4BE-000000000CBEE917
void __cdecl NodeWindow::GetCandidates(const NodeWindow *const this, std::vector<ToTheMoonVector3> *candidates)
{
  std::allocator<ToTheMoonVector3> __a; // [rsp+1Fh] [rbp-D1h] BYREF
  ToTheMoonVector3 v3; // [rsp+20h] [rbp-D0h] BYREF
  ToTheMoonVector3 v4; // [rsp+2Ch] [rbp-C4h] BYREF
  ToTheMoonVector3 v5; // [rsp+38h] [rbp-B8h] BYREF
  ToTheMoonVector3 v6; // [rsp+44h] [rbp-ACh] BYREF
  std::vector<ToTheMoonVector3> __x; // [rsp+50h] [rbp-A0h] BYREF
  __int64 __l; // [rsp+70h] [rbp-80h] BYREF
  float __l_8; // [rsp+78h] [rbp-78h]
  ToTheMoonVector3 __l_12; // [rsp+7Ch] [rbp-74h]
  ToTheMoonVector3 p3; // [rsp+88h] [rbp-68h]
  ToTheMoonVector3 p4; // [rsp+94h] [rbp-5Ch]
  ToTheMoonVector3 v13; // [rsp+A0h] [rbp-50h]
  ToTheMoonVector3 v14; // [rsp+ACh] [rbp-44h]
  ToTheMoonVector3 v15; // [rsp+B8h] [rbp-38h]
  ToTheMoonVector3 v16; // [rsp+C4h] [rbp-2Ch]

  if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->p1.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->p1.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(this, 12LL);
  }
  __l = *(_QWORD *)&this->p1.x;
  __l_8 = this->p1.z;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->p2 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->p2 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->p2.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->p2.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->p2, 12LL);
  }
  __l_12 = this->p2;
  if ( (((unsigned __int8)this + 24) & 7) >= *(_BYTE *)(((unsigned __int64)&this->p3 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->p3 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->p3.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&this->p3.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->p3, 12LL);
  }
  p3 = this->p3;
  if ( (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->p4 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->p4 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->p4.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&this->p4.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->p4, 12LL);
  }
  p4 = this->p4;
  v3 = ToTheMoonVector3::Add(&this->p1, &this->p2);
  v13 = ToTheMoonVector3::Divide(&v3, 2.0);
  v4 = ToTheMoonVector3::Add(&this->p1, &this->p4);
  v14 = ToTheMoonVector3::Divide(&v4, 2.0);
  v5 = ToTheMoonVector3::Add(&this->p3, &this->p2);
  v15 = ToTheMoonVector3::Divide(&v5, 2.0);
  v6 = ToTheMoonVector3::Add(&this->p3, &this->p4);
  v16 = ToTheMoonVector3::Divide(&v6, 2.0);
  std::allocator<ToTheMoonVector3>::allocator(&__a);
  std::vector<ToTheMoonVector3>::vector(&__x, (std::initializer_list<ToTheMoonVector3>)__PAIR128__(8LL, &__l), &__a);
  std::vector<ToTheMoonVector3>::operator=(candidates, &__x);
  std::vector<ToTheMoonVector3>::~vector(&__x);
  std::allocator<ToTheMoonVector3>::~allocator(&__a);
};

// Line 76: range 000000000CBEE918-000000000CBEE967
bool __cdecl NodeWindow::IsLine(const NodeWindow *const this)
{
  return ToTheMoonVector3::IsTheSame(&this->p1, &this->p2) || ToTheMoonVector3::IsTheSame(&this->p1, &this->p4);
};

// Line 81: range 000000000CBEE968-000000000CBEF1CC
bool __cdecl NodeWindow::IsPointIn(const NodeWindow *const this, const ToTheMoonVector3 *p, Const::Direction dir)
{
  float *v3; // rax
  float *v4; // rdx
  float v5; // xmm1_4
  const float *v6; // rax
  _DWORD *v7; // rdx
  double v8; // xmm0_8
  float *v9; // rax
  float *v10; // rdx
  float v11; // xmm1_4
  const float *v12; // rax
  _DWORD *v13; // rdx
  double v14; // xmm0_8
  float *v16; // rax
  float *v17; // rdx
  float v18; // xmm1_4
  const float *v19; // rax
  _DWORD *v20; // rdx
  double v21; // xmm0_8
  float *v22; // rax
  float *v23; // rdx
  float v24; // xmm1_4
  const float *v25; // rax
  _DWORD *v26; // rdx
  double v27; // xmm0_8
  float *v28; // rax
  float *v29; // rdx
  float v30; // xmm1_4
  const float *v31; // rax
  _DWORD *v32; // rdx
  double v33; // xmm0_8
  float *v34; // rax
  float *v35; // rdx
  float v36; // xmm1_4
  const float *v37; // rax
  _DWORD *v38; // rdx
  double v39; // xmm0_8
  __int64 v40; // rdi
  unsigned __int64 exception; // rax
  _QWORD *v42; // rbx

  if ( dir == Up )
  {
    v16 = (float *)std::min<float>(&this->p1.x, &this->p3.x);
    v17 = v16;
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v16);
    }
    v18 = *v17;
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p);
    }
    if ( p->x < v18 )
      return 0;
    v19 = std::max<float>(&this->p1.x, &this->p3.x);
    v20 = v19;
    if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v19);
    }
    LODWORD(v21) = *v20;
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
    {
      v21 = __asan_report_load4(p);
    }
    if ( *(float *)&v21 < p->x )
      return 0;
    v22 = (float *)std::min<float>(&this->p1.z, &this->p3.z);
    v23 = v22;
    if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v22);
    }
    v24 = *v23;
    if ( *(_BYTE *)(((unsigned __int64)&p->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->z >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&p->z);
    }
    if ( p->z < v24 )
      return 0;
    v25 = std::max<float>(&this->p1.z, &this->p3.z);
    v26 = v25;
    if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v25);
    }
    LODWORD(v27) = *v26;
    if ( *(_BYTE *)(((unsigned __int64)&p->z >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->z >> 3) + 0x7FFF8000) )
    {
      v27 = __asan_report_load4(&p->z);
    }
    return *(float *)&v27 >= p->z;
  }
  else
  {
    if ( dir > Up )
      goto LABEL_72;
    if ( dir == Front )
    {
      v3 = (float *)std::min<float>(&this->p1.y, &this->p3.y);
      v4 = v3;
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v3);
      }
      v5 = *v4;
      if ( *(_BYTE *)(((unsigned __int64)&p->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&p->y);
      }
      if ( p->y < v5 )
        return 0;
      v6 = std::max<float>(&this->p1.y, &this->p3.y);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      LODWORD(v8) = *v7;
      if ( *(_BYTE *)(((unsigned __int64)&p->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->y >> 3) + 0x7FFF8000) )
      {
        v8 = __asan_report_load4(&p->y);
      }
      if ( *(float *)&v8 < p->y )
        return 0;
      v9 = (float *)std::min<float>(&this->p1.z, &this->p3.z);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      v11 = *v10;
      if ( *(_BYTE *)(((unsigned __int64)&p->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&p->z);
      }
      if ( p->z < v11 )
        return 0;
      v12 = std::max<float>(&this->p1.z, &this->p3.z);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      LODWORD(v14) = *v13;
      if ( *(_BYTE *)(((unsigned __int64)&p->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->z >> 3) + 0x7FFF8000) )
      {
        v14 = __asan_report_load4(&p->z);
      }
      return *(float *)&v14 >= p->z;
    }
    else
    {
      if ( dir != Left )
      {
LABEL_72:
        v40 = 8LL;
        exception = (unsigned __int64)__cxa_allocate_exception(8uLL);
        v42 = (_QWORD *)exception;
        if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
        {
          v40 = exception;
          __asan_report_store8();
        }
        *v42 = "UnKnown Direction";
        __asan_handle_no_return(v40);
        _cxa_throw(v42, (struct type_info *)&`typeinfo for'char const*, 0LL);
      }
      v28 = (float *)std::min<float>(&this->p1.x, &this->p3.x);
      v29 = v28;
      if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v28);
      }
      v30 = *v29;
      if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p);
      }
      if ( p->x < v30 )
        return 0;
      v31 = std::max<float>(&this->p1.x, &this->p3.x);
      v32 = v31;
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v31);
      }
      LODWORD(v33) = *v32;
      if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
      {
        v33 = __asan_report_load4(p);
      }
      if ( *(float *)&v33 < p->x )
        return 0;
      v34 = (float *)std::min<float>(&this->p1.y, &this->p3.y);
      v35 = v34;
      if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v34);
      }
      v36 = *v35;
      if ( *(_BYTE *)(((unsigned __int64)&p->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&p->y);
      }
      if ( p->y < v36 )
        return 0;
      v37 = std::max<float>(&this->p1.y, &this->p3.y);
      v38 = v37;
      if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v37);
      }
      LODWORD(v39) = *v38;
      if ( *(_BYTE *)(((unsigned __int64)&p->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->y >> 3) + 0x7FFF8000) )
      {
        v39 = __asan_report_load4(&p->y);
      }
      return *(float *)&v39 >= p->y;
    }
  }
};

// Line 98: range 000000000CBEF1CE-000000000CBEF9DF
bool __cdecl NodeWindow::IsPointIn(const NodeWindow *const this, const ToTheMoonVector3 *p, Axis axis)
{
  float *v3; // rax
  float *v4; // rdx
  float v5; // xmm1_4
  const float *v6; // rax
  _DWORD *v7; // rdx
  double v8; // xmm0_8
  float *v9; // rax
  float *v10; // rdx
  float v11; // xmm1_4
  const float *v12; // rax
  _DWORD *v13; // rdx
  double v14; // xmm0_8
  float *v16; // rax
  float *v17; // rdx
  float v18; // xmm1_4
  const float *v19; // rax
  _DWORD *v20; // rdx
  double v21; // xmm0_8
  float *v22; // rax
  float *v23; // rdx
  float v24; // xmm1_4
  const float *v25; // rax
  _DWORD *v26; // rdx
  double v27; // xmm0_8
  float *v28; // rax
  float *v29; // rdx
  float v30; // xmm1_4
  const float *v31; // rax
  _DWORD *v32; // rdx
  double v33; // xmm0_8
  float *v34; // rax
  float *v35; // rdx
  float v36; // xmm1_4
  const float *v37; // rax
  _DWORD *v38; // rdx
  double v39; // xmm0_8

  if ( axis == Z )
  {
    v28 = (float *)std::min<float>(&this->p1.x, &this->p3.x);
    v29 = v28;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v28);
    }
    v30 = *v29;
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p);
    }
    if ( p->x < v30 )
      return 0;
    v31 = std::max<float>(&this->p1.x, &this->p3.x);
    v32 = v31;
    if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v31);
    }
    LODWORD(v33) = *v32;
    if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
    {
      v33 = __asan_report_load4(p);
    }
    if ( *(float *)&v33 < p->x )
      return 0;
    v34 = (float *)std::min<float>(&this->p1.y, &this->p3.y);
    v35 = v34;
    if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v34);
    }
    v36 = *v35;
    if ( *(_BYTE *)(((unsigned __int64)&p->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->y >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&p->y);
    }
    if ( p->y < v36 )
      return 0;
    v37 = std::max<float>(&this->p1.y, &this->p3.y);
    v38 = v37;
    if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v37);
    }
    LODWORD(v39) = *v38;
    if ( *(_BYTE *)(((unsigned __int64)&p->y >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->y >> 3) + 0x7FFF8000) )
    {
      v39 = __asan_report_load4(&p->y);
    }
    return *(float *)&v39 >= p->y;
  }
  else
  {
    if ( axis > Z )
      return 0;
    if ( axis )
    {
      if ( axis != Y )
        return 0;
      v16 = (float *)std::min<float>(&this->p1.x, &this->p3.x);
      v17 = v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      v18 = *v17;
      if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p);
      }
      if ( p->x < v18 )
        return 0;
      v19 = std::max<float>(&this->p1.x, &this->p3.x);
      v20 = v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      LODWORD(v21) = *v20;
      if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
      {
        v21 = __asan_report_load4(p);
      }
      if ( *(float *)&v21 < p->x )
        return 0;
      v22 = (float *)std::min<float>(&this->p1.z, &this->p3.z);
      v23 = v22;
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v22);
      }
      v24 = *v23;
      if ( *(_BYTE *)(((unsigned __int64)&p->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&p->z);
      }
      if ( p->z < v24 )
        return 0;
      v25 = std::max<float>(&this->p1.z, &this->p3.z);
      v26 = v25;
      if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v25);
      }
      LODWORD(v27) = *v26;
      if ( *(_BYTE *)(((unsigned __int64)&p->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->z >> 3) + 0x7FFF8000) )
      {
        v27 = __asan_report_load4(&p->z);
      }
      return *(float *)&v27 >= p->z;
    }
    else
    {
      v3 = (float *)std::min<float>(&this->p1.y, &this->p3.y);
      v4 = v3;
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v3);
      }
      v5 = *v4;
      if ( *(_BYTE *)(((unsigned __int64)&p->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&p->y);
      }
      if ( p->y < v5 )
        return 0;
      v6 = std::max<float>(&this->p1.y, &this->p3.y);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      LODWORD(v8) = *v7;
      if ( *(_BYTE *)(((unsigned __int64)&p->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->y >> 3) + 0x7FFF8000) )
      {
        v8 = __asan_report_load4(&p->y);
      }
      if ( *(float *)&v8 < p->y )
        return 0;
      v9 = (float *)std::min<float>(&this->p1.z, &this->p3.z);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      v11 = *v10;
      if ( *(_BYTE *)(((unsigned __int64)&p->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&p->z);
      }
      if ( p->z < v11 )
        return 0;
      v12 = std::max<float>(&this->p1.z, &this->p3.z);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      LODWORD(v14) = *v13;
      if ( *(_BYTE *)(((unsigned __int64)&p->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p->z >> 3) + 0x7FFF8000) )
      {
        v14 = __asan_report_load4(&p->z);
      }
      return *(float *)&v14 >= p->z;
    }
  }
};

// Line 114: range 000000000CBEF9E0-000000000CBEFCC8
std::string *__cdecl NodeWindow::ToString[abi:cxx11](std::string *retstr, const NodeWindow *const this)
{
  std::string __lhs; // [rsp+10h] [rbp-130h] BYREF
  std::string v4; // [rsp+30h] [rbp-110h] BYREF
  std::string __rhs; // [rsp+50h] [rbp-F0h] BYREF
  std::string v6; // [rsp+70h] [rbp-D0h] BYREF
  std::string v7; // [rsp+90h] [rbp-B0h] BYREF
  std::string v8; // [rsp+B0h] [rbp-90h] BYREF
  std::string v9; // [rsp+D0h] [rbp-70h] BYREF
  std::string v10; // [rsp+F0h] [rbp-50h] BYREF
  std::string v11; // [rsp+110h] [rbp-30h] BYREF

  ToTheMoonVector3::ToString[abi:cxx11](&v11, &this->p4);
  ToTheMoonVector3::ToString[abi:cxx11](&v8, &this->p3);
  ToTheMoonVector3::ToString[abi:cxx11](&__rhs, &this->p2);
  ToTheMoonVector3::ToString[abi:cxx11](&__lhs, &this->p1);
  std::operator+<char>(&v4, &__lhs, "->");
  std::operator+<char>(&v6, &v4, &__rhs);
  std::operator+<char>(&v7, &v6, "->");
  std::operator+<char>(&v9, &v7, &v8);
  std::operator+<char>(&v10, &v9, "->");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::operator+<char>(retstr, &v10, &v11);
  std::string::~string(&v10);
  std::string::~string(&v9);
  std::string::~string(&v7);
  std::string::~string(&v6);
  std::string::~string(&v4);
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  std::string::~string(&v8);
  std::string::~string(&v11);
  return retstr;
};

// Line 119: range 000000000CBEFCCA-000000000CBEFD83
// local variable allocation has failed, the output may be wrong!
void __cdecl NodeWindow::SortVerticesByAxis(
        NodeWindow *const this,
        std::vector<ToTheMoonVector3*> *res,
        Axis axis,
        bool increasing)
{
  ToTheMoonVector3 **M_current; // rbx
  std::vector<ToTheMoonVector3*>::iterator v5; // rax
  AxisComparer v6; // rdx OVERLAPPED
  AxisComparer __comp; // [rsp+28h] [rbp-38h] BYREF
  std::initializer_list<ToTheMoonVector3*> __l; // [rsp+30h] [rbp-30h] BYREF
  ToTheMoonVector3 *p_p3; // [rsp+40h] [rbp-20h]
  ToTheMoonVector3 *p_p4; // [rsp+48h] [rbp-18h]

  __l._M_array = (std::initializer_list<ToTheMoonVector3*>::iterator)this;
  __l._M_len = (std::initializer_list<ToTheMoonVector3*>::size_type)&this->p2;
  p_p3 = &this->p3;
  p_p4 = &this->p4;
  std::vector<ToTheMoonVector3 *>::operator=(res, (std::initializer_list<ToTheMoonVector3*>)__PAIR128__(4LL, &__l));
  AxisComparer::AxisComparer(&__comp, axis, increasing);
  M_current = std::vector<ToTheMoonVector3 *>::end(res)._M_current;
  v5._M_current = std::vector<ToTheMoonVector3 *>::begin(res)._M_current;
  v6 = __comp;
  std::sort<__gnu_cxx::__normal_iterator<ToTheMoonVector3 **,std::vector<ToTheMoonVector3 *>>,AxisComparer>(
    v5,
    (__gnu_cxx::__normal_iterator<ToTheMoonVector3**,std::vector<ToTheMoonVector3*> >)M_current,
    v6);
};

// Line 130: range 000000000CBEFD84-000000000CBEFE3F
void __cdecl NodeWindow::SortVerticesByDisToLine(
        NodeWindow *const this,
        std::vector<ToTheMoonVector3*> *res,
        const ToTheMoonLine *line)
{
  ToTheMoonVector3 **M_current; // rbx
  std::vector<ToTheMoonVector3*>::iterator v4; // rax
  LineDistanceComparer __comp; // [rsp+20h] [rbp-50h] BYREF
  std::initializer_list<ToTheMoonVector3*> __l; // [rsp+40h] [rbp-30h] BYREF
  ToTheMoonVector3 *p_p3; // [rsp+50h] [rbp-20h]
  ToTheMoonVector3 *p_p4; // [rsp+58h] [rbp-18h]

  __l._M_array = (std::initializer_list<ToTheMoonVector3*>::iterator)this;
  __l._M_len = (std::initializer_list<ToTheMoonVector3*>::size_type)&this->p2;
  p_p3 = &this->p3;
  p_p4 = &this->p4;
  std::vector<ToTheMoonVector3 *>::operator=(res, (std::initializer_list<ToTheMoonVector3*>)__PAIR128__(4LL, &__l));
  LineDistanceComparer::LineDistanceComparer(&__comp, line);
  M_current = std::vector<ToTheMoonVector3 *>::end(res)._M_current;
  v4._M_current = std::vector<ToTheMoonVector3 *>::begin(res)._M_current;
  std::sort<__gnu_cxx::__normal_iterator<ToTheMoonVector3 **,std::vector<ToTheMoonVector3 *>>,LineDistanceComparer>(
    v4,
    (__gnu_cxx::__normal_iterator<ToTheMoonVector3**,std::vector<ToTheMoonVector3*> >)M_current,
    __comp);
};

// Line 141: range 000000000CBEFE40-000000000CBEFF59
void __cdecl NodeWindow::SortVerticesByDisToPlaneAndRefLine(
        NodeWindow *const this,
        std::vector<ToTheMoonVector3*> *res,
        const NodeWindow *nodeWindow,
        std::shared_ptr<ToTheMoonLine> *p_refLine)
{
  ToTheMoonVector3 **M_current; // rbx
  std::vector<ToTheMoonVector3*>::iterator v5; // rax
  std::shared_ptr<ToTheMoonLine> v8; // [rsp+20h] [rbp-70h] BYREF
  std::initializer_list<ToTheMoonVector3*> __l; // [rsp+30h] [rbp-60h] BYREF
  ToTheMoonVector3 *p_p3; // [rsp+40h] [rbp-50h]
  ToTheMoonVector3 *p_p4; // [rsp+48h] [rbp-48h]
  ComplexPlaneDistanceComparer __comp; // [rsp+50h] [rbp-40h] BYREF

  __l._M_array = (std::initializer_list<ToTheMoonVector3*>::iterator)this;
  __l._M_len = (std::initializer_list<ToTheMoonVector3*>::size_type)&this->p2;
  p_p3 = &this->p3;
  p_p4 = &this->p4;
  std::vector<ToTheMoonVector3 *>::operator=(res, (std::initializer_list<ToTheMoonVector3*>)__PAIR128__(4LL, &__l));
  std::shared_ptr<ToTheMoonLine>::shared_ptr(&v8, p_refLine);
  ComplexPlaneDistanceComparer::ComplexPlaneDistanceComparer(&__comp, &nodeWindow->pointOutDir, &nodeWindow->p1, &v8);
  M_current = std::vector<ToTheMoonVector3 *>::end(res)._M_current;
  v5._M_current = std::vector<ToTheMoonVector3 *>::begin(res)._M_current;
  std::sort<__gnu_cxx::__normal_iterator<ToTheMoonVector3 **,std::vector<ToTheMoonVector3 *>>,ComplexPlaneDistanceComparer>(
    v5,
    (__gnu_cxx::__normal_iterator<ToTheMoonVector3**,std::vector<ToTheMoonVector3*> >)M_current,
    __comp);
  std::shared_ptr<ToTheMoonLine>::~shared_ptr(&v8);
};

// Line 152: range 000000000CBEFF5A-000000000CBF00D4
bool __cdecl NodeWindow::InitPointOutDir(
        NodeWindow *const this,
        ToTheMoonVector3 *fromReferPos,
        ToTheMoonVector3 *toReferPos)
{
  ToTheMoonVector3 *p_pointOutDir; // rsi
  ToTheMoonVector3 v6; // [rsp+24h] [rbp-1Ch] BYREF

  if ( !fromReferPos || !toReferPos )
    return 0;
  NodeWindow::GetPlaneVector(this, &this->pointOutDir);
  v6 = ToTheMoonVector3::Diff(toReferPos, fromReferPos);
  if ( ToTheMoonVector3::Dot(&v6, &this->pointOutDir) < 0.0 )
  {
    p_pointOutDir = &this->pointOutDir;
    if ( (((unsigned __int8)this + 48) & 7) >= *(_BYTE *)(((unsigned __int64)&this->pointOutDir >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&this->pointOutDir >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->pointOutDir.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 59) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pointOutDir.z + 3) >> 3)
                                                        + 0x7FFF8000) )
    {
      p_pointOutDir = (ToTheMoonVector3 *)12;
      __asan_report_store_n(&this->pointOutDir, 12LL);
    }
    this->pointOutDir = ToTheMoonVector3::Multiple(p_pointOutDir, -1.0);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->hasInitDir >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->hasInitDir >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->hasInitDir);
  }
  this->hasInitDir = 1;
  return 1;
};

// Line 166: range 000000000CBF00D6-000000000CBF0210
bool __cdecl NodeWindow::InitPointOutDir(NodeWindow *const this, const ToTheMoonVector3 *referDir)
{
  ToTheMoonVector3 *p_pointOutDir; // rsi

  NodeWindow::GetPlaneVector(this, &this->pointOutDir);
  if ( ToTheMoonVector3::Dot(referDir, &this->pointOutDir) < 0.0 )
  {
    p_pointOutDir = &this->pointOutDir;
    if ( (((unsigned __int8)this + 48) & 7) >= *(_BYTE *)(((unsigned __int64)&this->pointOutDir >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&this->pointOutDir >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->pointOutDir.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 59) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pointOutDir.z + 3) >> 3)
                                                        + 0x7FFF8000) )
    {
      p_pointOutDir = (ToTheMoonVector3 *)12;
      __asan_report_store_n(&this->pointOutDir, 12LL);
    }
    this->pointOutDir = ToTheMoonVector3::Multiple(p_pointOutDir, -1.0);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->hasInitDir >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->hasInitDir >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->hasInitDir);
  }
  this->hasInitDir = 1;
  return 1;
};

// Line 175: range 000000000CBF0212-000000000CBF08EF
void __cdecl NodeWindow::ToRange3D(NodeWindow *const this, Range3D *range)
{
  __m128i M_len_high; // xmm0
  std::initializer_list<float> v3; // rdi
  float v4; // esi
  __m128i v5; // xmm0
  std::initializer_list<float> v6; // rdi
  float v7; // ecx
  __m128i v8; // xmm0
  std::initializer_list<float> v9; // rdi
  float v10; // ecx
  __m128i v11; // xmm0
  std::initializer_list<float> v12; // rdi
  float v13; // ecx
  __m128i v14; // xmm0
  std::initializer_list<float> v15; // rdi
  float v16; // ecx
  __m128i v17; // xmm0
  std::initializer_list<float> v18; // rdi
  float v19; // ecx
  std::initializer_list<float> __l; // [rsp+40h] [rbp-40h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  *(float *)&__l._M_array = this->p1.x;
  if ( *(_BYTE *)(((unsigned __int64)&this->p2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->p2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->p2);
  }
  HIDWORD(__l._M_array) = LODWORD(this->p2.x);
  if ( *(_BYTE *)(((unsigned __int64)&this->p3 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->p3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->p3);
  }
  *(float *)&__l._M_len = this->p3.x;
  if ( *(_BYTE *)(((unsigned __int64)&this->p4 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->p4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->p4);
  }
  HIDWORD(__l._M_len) = LODWORD(this->p4.x);
  M_len_high = (__m128i)HIDWORD(__l._M_len);
  v3._M_array = (std::initializer_list<float>::iterator)&__l;
  v3._M_len = 4LL;
  *(float *)M_len_high.m128i_i32 = std::min<float>(v3);
  v4 = COERCE_FLOAT(_mm_cvtsi128_si32(M_len_high));
  if ( *(_BYTE *)(((unsigned __int64)range >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)range & 7) + 3) >= *(_BYTE *)(((unsigned __int64)range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(range);
  }
  range->x_range.start = v4;
  *(float *)&__l._M_array = this->p1.x;
  HIDWORD(__l._M_array) = LODWORD(this->p2.x);
  *(float *)&__l._M_len = this->p3.x;
  HIDWORD(__l._M_len) = LODWORD(this->p4.x);
  v5 = (__m128i)HIDWORD(__l._M_len);
  v6._M_array = (std::initializer_list<float>::iterator)&__l;
  v6._M_len = 4LL;
  *(float *)v5.m128i_i32 = std::max<float>(v6);
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  if ( *(_BYTE *)(((unsigned __int64)&range->x_range.end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)range + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&range->x_range.end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&range->x_range.end);
  }
  range->x_range.end = v7;
  if ( *(_BYTE *)(((unsigned __int64)&this->p1.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->p1.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->p1.y);
  }
  *(float *)&__l._M_array = this->p1.y;
  if ( *(_BYTE *)(((unsigned __int64)&this->p2.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->p2.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->p2.y);
  }
  HIDWORD(__l._M_array) = LODWORD(this->p2.y);
  if ( *(_BYTE *)(((unsigned __int64)&this->p3.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->p3.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->p3.y);
  }
  *(float *)&__l._M_len = this->p3.y;
  if ( *(_BYTE *)(((unsigned __int64)&this->p4.y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->p4.y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->p4.y);
  }
  HIDWORD(__l._M_len) = LODWORD(this->p4.y);
  v8 = (__m128i)HIDWORD(__l._M_len);
  v9._M_array = (std::initializer_list<float>::iterator)&__l;
  v9._M_len = 4LL;
  *(float *)v8.m128i_i32 = std::min<float>(v9);
  v10 = COERCE_FLOAT(_mm_cvtsi128_si32(v8));
  if ( *(_BYTE *)(((unsigned __int64)&range->y_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)range + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&range->y_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&range->y_range);
  }
  range->y_range.start = v10;
  *(float *)&__l._M_array = this->p1.y;
  HIDWORD(__l._M_array) = LODWORD(this->p2.y);
  *(float *)&__l._M_len = this->p3.y;
  HIDWORD(__l._M_len) = LODWORD(this->p4.y);
  v11 = (__m128i)HIDWORD(__l._M_len);
  v12._M_array = (std::initializer_list<float>::iterator)&__l;
  v12._M_len = 4LL;
  *(float *)v11.m128i_i32 = std::max<float>(v12);
  v13 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
  if ( *(_BYTE *)(((unsigned __int64)&range->y_range.end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)range + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&range->y_range.end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&range->y_range.end);
  }
  range->y_range.end = v13;
  if ( *(_BYTE *)(((unsigned __int64)&this->p1.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->p1.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->p1.z);
  }
  *(float *)&__l._M_array = this->p1.z;
  if ( *(_BYTE *)(((unsigned __int64)&this->p2.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->p2.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->p2.z);
  }
  HIDWORD(__l._M_array) = LODWORD(this->p2.z);
  if ( *(_BYTE *)(((unsigned __int64)&this->p3.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->p3.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->p3.z);
  }
  *(float *)&__l._M_len = this->p3.z;
  if ( *(_BYTE *)(((unsigned __int64)&this->p4.z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->p4.z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->p4.z);
  }
  HIDWORD(__l._M_len) = LODWORD(this->p4.z);
  v14 = (__m128i)HIDWORD(__l._M_len);
  v15._M_array = (std::initializer_list<float>::iterator)&__l;
  v15._M_len = 4LL;
  *(float *)v14.m128i_i32 = std::min<float>(v15);
  v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v14));
  if ( *(_BYTE *)(((unsigned __int64)&range->z_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)range + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&range->z_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&range->z_range);
  }
  range->z_range.start = v16;
  *(float *)&__l._M_array = this->p1.z;
  HIDWORD(__l._M_array) = LODWORD(this->p2.z);
  *(float *)&__l._M_len = this->p3.z;
  HIDWORD(__l._M_len) = LODWORD(this->p4.z);
  v17 = (__m128i)HIDWORD(__l._M_len);
  v18._M_array = (std::initializer_list<float>::iterator)&__l;
  v18._M_len = 4LL;
  *(float *)v17.m128i_i32 = std::max<float>(v18);
  v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
  if ( *(_BYTE *)(((unsigned __int64)&range->z_range.end >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)range + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&range->z_range.end >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&range->z_range.end);
  }
  range->z_range.end = v19;
};

// Line 186: range 000000000CBF08F0-000000000CBF0BF3
// local variable allocation has failed, the output may be wrong!
bool __cdecl NodeWindow::IntersectFromLineSeg(
        const NodeWindow *const this,
        std::shared_ptr<ToTheMoonLine> *p_lineSeg,
        ToTheMoonVector3 *res,
        bool onlyOneDirection)
{
  __m128i v4; // xmm1
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  bool result; // al
  ToTheMoonVector3 *p_end; // r14
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  __int64 v11; // xmm0_8
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  __int64 v13; // xmm0_8
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  float ratio; // [rsp+2Ch] [rbp-A4h]
  float divisor; // [rsp+30h] [rbp-A0h]
  ToTheMoonVector3 v; // [rsp+34h] [rbp-9Ch] BYREF
  char v20[144]; // [rsp+40h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 12 11 lineVec:191 64 12 12 planeVec:192";
  *(_QWORD *)(v5 + 16) = NodeWindow::IntersectFromLineSeg;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219020288;
  v7[536862722] = -202177536;
  if ( std::operator==<ToTheMoonLine>(p_lineSeg, 0LL) )
  {
    result = 0;
  }
  else
  {
    p_end = &std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_lineSeg)->end;
    v10 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_lineSeg);
    *(ToTheMoonVector3 *)((char *)&v4 - 8) = ToTheMoonVector3::Diff(p_end, &v10->start);
    *(_QWORD *)(v5 + 32) = v11;
    *(_DWORD *)(v5 + 40) = v4.m128i_i32[0];
    v12 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_lineSeg);
    *(ToTheMoonVector3 *)((char *)&v4 - 8) = ToTheMoonVector3::Diff(&this->p1, &v12->start);
    *(_QWORD *)(v5 + 64) = v13;
    *(_DWORD *)(v5 + 72) = v4.m128i_i32[0];
    ToTheMoonVector3::Dot(&this->pointOutDir, (const ToTheMoonVector3 *)(v5 + 32));
    divisor = COERCE_FLOAT(_mm_cvtsi128_si32(v4));
    if ( Algebra::IsClose(divisor, 0.0) )
      ratio = INFINITY;
    else
      ratio = ToTheMoonVector3::Dot((const ToTheMoonVector3 *const)(v5 + 64), &this->pointOutDir) / divisor;
    if ( onlyOneDirection && ratio < 0.0 )
    {
      result = 0;
    }
    else
    {
      v14 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_lineSeg);
      v = ToTheMoonVector3::Multiple((const ToTheMoonVector3 *const)(v5 + 32), ratio);
      if ( ((unsigned __int8)res & 7) >= *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&res->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)res + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&res->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(res, 12LL);
      }
      *res = ToTheMoonVector3::Add(&v14->start, &v);
      result = 1;
    }
  }
  if ( v20 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 215: range 000000000CBF0BF4-000000000CBF0FD8
AStarPathQueryData *__fastcall AStarPathQueryData::AddAStarInfo(
        AStarPathQueryData *const this,
        AStarPathQueryData *node,
        __int64 a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  char v8; // dl
  __int64 v9; // rax
  std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > *v10; // rax
  std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> >>::mapped_type *v11; // rax
  std::unordered_map<int,std::shared_ptr<AStarInfo>> *v12; // rax
  std::unordered_map<int,std::shared_ptr<AStarInfo>> *v13; // rax
  std::unordered_map<int,std::shared_ptr<AStarInfo>> *v14; // rax
  std::shared_ptr<AStarInfo> *v15; // rax
  std::unordered_map<int,std::shared_ptr<AStarInfo>> *v16; // rax
  std::unordered_map<int,std::shared_ptr<AStarInfo>>::mapped_type *v17; // rax
  AStarPathQueryData *thisa; // [rsp+10h] [rbp-D0h]
  std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > >,false> __x; // [rsp+20h] [rbp-C0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > >,false> __y; // [rsp+28h] [rbp-B8h] BYREF
  std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > __r; // [rsp+30h] [rbp-B0h] BYREF
  char v24[160]; // [rsp+40h] [rbp-A0h] BYREF

  thisa = node;
  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 9 level:218 48 4 9 index:219 64 8 8 node:214 96 16 21 layerAstarInfoMap:223";
  *(_QWORD *)(v3 + 16) = AStarPathQueryData::AddAStarInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_QWORD *)(v3 + 64) = a3;
  if ( *(_QWORD *)(v3 + 64) )
  {
    v6 = *(_QWORD *)(v3 + 64);
    if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(v6 + 8, node);
    v7 = *(_QWORD *)(v6 + 8);
    v8 = *(_BYTE *)((v7 >> 3) + 0x7FFF8000);
    LOBYTE(node) = v8 != 0;
    if ( v8 != 0 && v8 <= 3 )
      __asan_report_load4(v7);
    *(_DWORD *)(v3 + 32) = *(_DWORD *)v7;
    v9 = *(_QWORD *)(v3 + 64);
    if ( *(_BYTE *)(((unsigned __int64)(v9 + 24) >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v9 + 24, node);
    *(_DWORD *)(v3 + 48) = *(_QWORD *)(v9 + 24);
    __y._M_cur = std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>::end(&thisa->astarInfoMap)._M_cur;
    __x._M_cur = std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>::find(
                   &thisa->astarInfoMap,
                   (const std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> >>::key_type *)(v3 + 32))._M_cur;
    if ( std::__detail::operator==<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>,false>(
           &__x,
           &__y) )
    {
      std::make_shared<std::unordered_map<int,std::shared_ptr<AStarInfo>>>();
      v10 = std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>::operator[](
              &thisa->astarInfoMap,
              (const std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> >>::key_type *)(v3 + 32));
      std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>::operator=(v10, &__r);
      std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>::~shared_ptr(&__r);
    }
    v11 = std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>::operator[](
            &thisa->astarInfoMap,
            (const std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> >>::key_type *)(v3 + 32));
    std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>::shared_ptr(
      (std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > *const)(v3 + 96),
      v11);
    v12 = std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > >,false>::__node_type *)std::unordered_map<int,std::shared_ptr<AStarInfo>>::end(v12)._M_cur;
    v13 = std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    __x._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > >,false>::__node_type *)std::unordered_map<int,std::shared_ptr<AStarInfo>>::find(v13, (const std::unordered_map<int,std::shared_ptr<AStarInfo>>::key_type *)(v3 + 48))._M_cur;
    if ( std::__detail::operator!=<std::pair<int const,std::shared_ptr<AStarInfo>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<AStarInfo> >,false> *)&__x,
           (const std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<AStarInfo> >,false> *)&__y) )
    {
      std::shared_ptr<AStarInfo>::shared_ptr((std::shared_ptr<AStarInfo> *const)this, 0LL);
    }
    else
    {
      std::make_shared<AStarInfo,SVONode *&>((SVONode **)&__r, (SVONode **)(v3 + 64));
      v14 = std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v15 = std::unordered_map<int,std::shared_ptr<AStarInfo>>::operator[](
              v14,
              (const std::unordered_map<int,std::shared_ptr<AStarInfo>>::key_type *)(v3 + 48));
      std::shared_ptr<AStarInfo>::operator=(v15, (std::shared_ptr<AStarInfo> *)&__r);
      std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)&__r);
      v16 = std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v17 = std::unordered_map<int,std::shared_ptr<AStarInfo>>::operator[](
              v16,
              (const std::unordered_map<int,std::shared_ptr<AStarInfo>>::key_type *)(v3 + 48));
      std::shared_ptr<AStarInfo>::shared_ptr((std::shared_ptr<AStarInfo> *const)this, v17);
    }
    std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>::~shared_ptr((std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > *const)(v3 + 96));
  }
  else
  {
    std::shared_ptr<AStarInfo>::shared_ptr((std::shared_ptr<AStarInfo> *const)this, 0LL);
  }
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 232: range 000000000CBF0FDA-000000000CBF1076
void __cdecl AStarPathQueryData::Clear(AStarPathQueryData *const this)
{
  std::unordered_map<int,std::shared_ptr<AStarInfo>> *v1; // rax
  std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> >>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> >>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> >> *__for_range; // [rsp+20h] [rbp-10h]
  std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > > *layerDataItem; // [rsp+28h] [rbp-8h]

  __for_range = &this->astarInfoMap;
  __for_begin._M_cur = std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>::begin(&this->astarInfoMap)._M_cur;
  __for_end._M_cur = std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>::end(&this->astarInfoMap)._M_cur;
  while ( std::__detail::operator!=<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>,false>(
            &__for_begin,
            &__for_end) )
  {
    layerDataItem = std::__detail::_Node_iterator<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>,false,false>::operator*(&__for_begin);
    if ( std::operator!=<std::unordered_map<int,std::shared_ptr<AStarInfo>>>(&layerDataItem->second, 0LL) )
    {
      v1 = std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&layerDataItem->second);
      std::unordered_map<int,std::shared_ptr<AStarInfo>>::clear(v1);
    }
    std::__detail::_Node_iterator<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>,false,false>::operator++(&__for_begin);
  }
};

// Line 240: range 000000000CBF1078-000000000CBF11FC
void __cdecl AStarPathQueryData::ReInit(AStarPathQueryData *const this)
{
  std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  __int64 v2; // rax
  std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> >>::iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> >>::iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  std::unordered_map<int,std::shared_ptr<AStarInfo>>::iterator __for_begin_0; // [rsp+20h] [rbp-30h] BYREF
  std::unordered_map<int,std::shared_ptr<AStarInfo>>::iterator __for_end_0; // [rsp+28h] [rbp-28h] BYREF
  std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> >> *__for_range; // [rsp+30h] [rbp-20h]
  std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > > *layerDataItem; // [rsp+38h] [rbp-18h]
  std::unordered_map<int,std::shared_ptr<AStarInfo>> *__for_range_0; // [rsp+40h] [rbp-10h]
  std::pair<int const,std::shared_ptr<AStarInfo> > *nodeDataItem; // [rsp+48h] [rbp-8h]

  __for_range = &this->astarInfoMap;
  __for_begin._M_cur = std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>::begin(&this->astarInfoMap)._M_cur;
  __for_end._M_cur = std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>::end(&this->astarInfoMap)._M_cur;
  while ( std::__detail::operator!=<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>,false>(
            &__for_begin,
            &__for_end) )
  {
    layerDataItem = std::__detail::_Node_iterator<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>,false,false>::operator*(&__for_begin);
    __for_range_0 = std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&layerDataItem->second);
    __for_begin_0._M_cur = std::unordered_map<int,std::shared_ptr<AStarInfo>>::begin(__for_range_0)._M_cur;
    __for_end_0._M_cur = std::unordered_map<int,std::shared_ptr<AStarInfo>>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<int const,std::shared_ptr<AStarInfo>>,false>(
              &__for_begin_0,
              &__for_end_0) )
    {
      nodeDataItem = std::__detail::_Node_iterator<std::pair<int const,std::shared_ptr<AStarInfo>>,false,false>::operator*(&__for_begin_0);
      if ( !std::operator==<AStarInfo>(&nodeDataItem->second, 0LL) )
      {
        v1 = std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&nodeDataItem->second);
        if ( *(_BYTE *)(((unsigned __int64)&v1->status >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v1->status >> 3) + 0x7FFF8000) <= 3 )
        {
          v1 = (std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v1->status);
        }
        v1->status = Unvisited;
        v2 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)&nodeDataItem->second);
        if ( *(_BYTE *)(((unsigned __int64)(v2 + 40) >> 3) + 0x7FFF8000) )
          v2 = __asan_report_store8();
        *(_QWORD *)(v2 + 40) = 0LL;
      }
      std::__detail::_Node_iterator<std::pair<int const,std::shared_ptr<AStarInfo>>,false,false>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_iterator<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>,false,false>::operator++(&__for_begin);
  }
};

// Line 253: range 000000000CBF11FE-000000000CBF1491
const AStarPathQueryData *__fastcall AStarPathQueryData::GetAStarInfo(
        const AStarPathQueryData *const this,
        const std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> >> *level,
        int index,
        int a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  const std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > *v7; // rax
  std::unordered_map<int,std::shared_ptr<AStarInfo>> *v8; // rax
  std::unordered_map<int,std::shared_ptr<AStarInfo>> *v9; // rax
  std::unordered_map<int,std::shared_ptr<AStarInfo>> *v11; // rax
  std::unordered_map<int,std::shared_ptr<AStarInfo>>::mapped_type *v12; // rax
  std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > >,false> __x; // [rsp+20h] [rbp-90h] BYREF
  std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v18[128]; // [rsp+30h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 9 level:252 48 4 9 index:252 64 16 21 layerAstarInfoMap:256";
  *(_QWORD *)(v4 + 16) = AStarPathQueryData::GetAStarInfo;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 32) = index;
  *(_DWORD *)(v4 + 48) = a4;
  __y._M_cur = std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>::end(level)._M_cur;
  __x._M_cur = std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>::find(
                 level,
                 (const std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> >>::key_type *)(v4 + 32))._M_cur;
  if ( std::__detail::operator==<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>,false>(
         &__x,
         &__y) )
  {
    std::shared_ptr<AStarInfo>::shared_ptr((std::shared_ptr<AStarInfo> *const)this, 0LL);
  }
  else
  {
    v7 = std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>::at(
           level,
           (const std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> >>::key_type *)(v4 + 32));
    std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>::shared_ptr(
      (std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > *const)(v4 + 64),
      v7);
    if ( std::operator==<std::unordered_map<int,std::shared_ptr<AStarInfo>>>(
           (const std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > *)(v4 + 64),
           0LL)
      || (v8 = std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64)),
          __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > >,false>::__node_type *)std::unordered_map<int,std::shared_ptr<AStarInfo>>::end(v8)._M_cur,
          v9 = std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64)),
          __x._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > >,false>::__node_type *)std::unordered_map<int,std::shared_ptr<AStarInfo>>::find(v9, (const std::unordered_map<int,std::shared_ptr<AStarInfo>>::key_type *)(v4 + 48))._M_cur,
          std::__detail::operator==<std::pair<int const,std::shared_ptr<AStarInfo>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<AStarInfo> >,false> *)&__x,
            (const std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<AStarInfo> >,false> *)&__y)) )
    {
      std::shared_ptr<AStarInfo>::shared_ptr((std::shared_ptr<AStarInfo> *const)this, 0LL);
    }
    else
    {
      v11 = std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      v12 = std::unordered_map<int,std::shared_ptr<AStarInfo>>::operator[](
              v11,
              (const std::unordered_map<int,std::shared_ptr<AStarInfo>>::key_type *)(v4 + 48));
      std::shared_ptr<AStarInfo>::shared_ptr((std::shared_ptr<AStarInfo> *const)this, v12);
    }
    std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>::~shared_ptr((std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > *const)(v4 + 64));
  }
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 264: range 000000000CBF1492-000000000CBF15BD
std::shared_ptr<AStarInfo> __cdecl AStarPathQueryData::GetAStarInfo(
        const AStarPathQueryData *const this,
        const SVONode *node)
{
  const SVONode *v2; // rdx
  std::shared_ptr<AStarInfo> result; // rax
  SVOLayer *v4; // rdi
  SVOLayer *layer; // rax
  char v6; // dl
  int level; // edx
  const SVONode *nodea; // [rsp+8h] [rbp-18h]
  const AStarPathQueryData *thisa; // [rsp+10h] [rbp-10h]

  thisa = (const AStarPathQueryData *)node;
  nodea = v2;
  if ( !v2 )
    goto LABEL_5;
  if ( *(_BYTE *)(((unsigned __int64)&v2->layer >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v2->layer, node);
  if ( nodea->layer )
  {
    if ( *(_BYTE *)(((unsigned __int64)&nodea->index >> 3) + 0x7FFF8000) )
      __asan_report_load8(&nodea->index, node);
    LODWORD(v4) = nodea->index;
    if ( *(_BYTE *)(((unsigned __int64)&nodea->layer >> 3) + 0x7FFF8000) )
    {
      LODWORD(v4) = (_DWORD)nodea + 8;
      __asan_report_load8(&nodea->layer, node);
    }
    layer = nodea->layer;
    v6 = *(_BYTE *)(((unsigned __int64)layer >> 3) + 0x7FFF8000);
    LOBYTE(node) = v6 != 0;
    if ( v6 != 0 && v6 <= 3 )
    {
      v4 = nodea->layer;
      __asan_report_load4(v4);
    }
    level = layer->level;
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      LODWORD(v4) = (_DWORD)this;
      __asan_report_store16(this, node);
    }
    AStarPathQueryData::GetAStarInfo(this, &thisa->astarInfoMap, level, (int)v4);
  }
  else
  {
LABEL_5:
    std::shared_ptr<AStarInfo>::shared_ptr((std::shared_ptr<AStarInfo> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<AStarInfo,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 272: range 000000000CBF15BE-000000000CBF19B7
AStarPathQueryData *__fastcall AStarPathQueryData::AdaptiveGetAStarInfo(
        AStarPathQueryData *const this,
        AStarPathQueryData *node,
        __int64 a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  char v9; // dl
  __int64 v10; // rax
  std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > *v11; // rax
  std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> >>::mapped_type *v12; // rax
  std::unordered_map<int,std::shared_ptr<AStarInfo>> *v13; // rax
  std::unordered_map<int,std::shared_ptr<AStarInfo>> *v14; // rax
  std::unordered_map<int,std::shared_ptr<AStarInfo>> *v15; // rax
  std::shared_ptr<AStarInfo> *v16; // rax
  std::unordered_map<int,std::shared_ptr<AStarInfo>> *v17; // rax
  std::unordered_map<int,std::shared_ptr<AStarInfo>>::mapped_type *v18; // rax
  AStarPathQueryData *thisa; // [rsp+10h] [rbp-D0h]
  std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > >,false> __x; // [rsp+20h] [rbp-C0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > >,false> __y; // [rsp+28h] [rbp-B8h] BYREF
  std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > __r; // [rsp+30h] [rbp-B0h] BYREF
  char v25[160]; // [rsp+40h] [rbp-A0h] BYREF

  thisa = node;
  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 9 level:276 48 4 9 index:277 64 8 8 node:271 96 16 21 layerAstarInfoMap:281";
  *(_QWORD *)(v3 + 16) = AStarPathQueryData::AdaptiveGetAStarInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_QWORD *)(v3 + 64) = a3;
  if ( !*(_QWORD *)(v3 + 64) )
    goto LABEL_8;
  v6 = *(_QWORD *)(v3 + 64);
  if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8(v6 + 8, node);
  if ( *(_QWORD *)(v6 + 8) )
  {
    v7 = *(_QWORD *)(v3 + 64);
    if ( *(_BYTE *)(((unsigned __int64)(v7 + 8) >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7 + 8, node);
    v8 = *(_QWORD *)(v7 + 8);
    v9 = *(_BYTE *)((v8 >> 3) + 0x7FFF8000);
    LOBYTE(node) = v9 != 0;
    if ( v9 != 0 && v9 <= 3 )
      __asan_report_load4(v8);
    *(_DWORD *)(v3 + 32) = *(_DWORD *)v8;
    v10 = *(_QWORD *)(v3 + 64);
    if ( *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(v10 + 24, node);
    *(_DWORD *)(v3 + 48) = *(_QWORD *)(v10 + 24);
    __y._M_cur = std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>::end(&thisa->astarInfoMap)._M_cur;
    __x._M_cur = std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>::find(
                   &thisa->astarInfoMap,
                   (const std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> >>::key_type *)(v3 + 32))._M_cur;
    if ( std::__detail::operator==<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>,false>(
           &__x,
           &__y) )
    {
      std::make_shared<std::unordered_map<int,std::shared_ptr<AStarInfo>>>();
      v11 = std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>::operator[](
              &thisa->astarInfoMap,
              (const std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> >>::key_type *)(v3 + 32));
      std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>::operator=(v11, &__r);
      std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>::~shared_ptr(&__r);
    }
    v12 = std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>>::operator[](
            &thisa->astarInfoMap,
            (const std::unordered_map<int,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> >>::key_type *)(v3 + 32));
    std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>::shared_ptr(
      (std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > *const)(v3 + 96),
      v12);
    v13 = std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > >,false>::__node_type *)std::unordered_map<int,std::shared_ptr<AStarInfo>>::end(v13)._M_cur;
    v14 = std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    __x._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > >,false>::__node_type *)std::unordered_map<int,std::shared_ptr<AStarInfo>>::find(v14, (const std::unordered_map<int,std::shared_ptr<AStarInfo>>::key_type *)(v3 + 48))._M_cur;
    if ( std::__detail::operator==<std::pair<int const,std::shared_ptr<AStarInfo>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<AStarInfo> >,false> *)&__x,
           (const std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<AStarInfo> >,false> *)&__y) )
    {
      std::make_shared<AStarInfo,SVONode *&>((SVONode **)&__r, (SVONode **)(v3 + 64));
      v15 = std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v16 = std::unordered_map<int,std::shared_ptr<AStarInfo>>::operator[](
              v15,
              (const std::unordered_map<int,std::shared_ptr<AStarInfo>>::key_type *)(v3 + 48));
      std::shared_ptr<AStarInfo>::operator=(v16, (std::shared_ptr<AStarInfo> *)&__r);
      std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)&__r);
    }
    v17 = std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::unordered_map<int,std::shared_ptr<AStarInfo>>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    v18 = std::unordered_map<int,std::shared_ptr<AStarInfo>>::operator[](
            v17,
            (const std::unordered_map<int,std::shared_ptr<AStarInfo>>::key_type *)(v3 + 48));
    std::shared_ptr<AStarInfo>::shared_ptr((std::shared_ptr<AStarInfo> *const)this, v18);
    std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>>>::~shared_ptr((std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > *const)(v3 + 96));
  }
  else
  {
LABEL_8:
    std::shared_ptr<AStarInfo>::shared_ptr((std::shared_ptr<AStarInfo> *const)this, 0LL);
  }
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 288: range 000000000CBF19B8-000000000CBF1B59
void __cdecl SquareBasedWedge::SquareBasedWedge(
        SquareBasedWedge *const this,
        const ToTheMoonVector3 *top1,
        const ToTheMoonVector3 *top2,
        std::shared_ptr<NodeWindow> *p_window)
{
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rbx
  ToTheMoonVector3 *v6; // rax
  std::shared_ptr<ToTheMoonLine> v9; // [rsp+20h] [rbp-30h] BYREF
  std::shared_ptr<ToTheMoonVector3> __r; // [rsp+30h] [rbp-20h] BYREF

  std::shared_ptr<ToTheMoonLine>::shared_ptr(&this->topLine);
  std::shared_ptr<NodeWindow>::shared_ptr(&this->base);
  std::shared_ptr<ToTheMoonVector3>::shared_ptr(&this->planeVec);
  std::shared_ptr<std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>>::shared_ptr(&this->baseToTopMap);
  std::shared_ptr<NodeWindow>::operator=(&this->base, p_window);
  std::make_shared<ToTheMoonLine,ToTheMoonVector3 const&,ToTheMoonVector3 const&>(
    (const ToTheMoonVector3 *)&v9,
    top1,
    top2,
    top1);
  std::shared_ptr<ToTheMoonLine>::operator=(&this->topLine, &v9);
  std::shared_ptr<ToTheMoonLine>::~shared_ptr(&v9);
  std::make_shared<ToTheMoonVector3>();
  std::shared_ptr<ToTheMoonVector3>::operator=(&this->planeVec, &__r);
  std::shared_ptr<ToTheMoonVector3>::~shared_ptr(&__r);
  if ( std::operator!=<NodeWindow>(&this->base, 0LL) && std::operator!=<ToTheMoonVector3>(&this->planeVec, 0LL) )
  {
    v5 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->base);
    v6 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->planeVec);
    NodeWindow::GetPlaneVector(v5, v6);
  }
  SquareBasedWedge::GenerateBaseToTopMap(this);
};

// Line 300: range 000000000CBF1B5A-000000000CBF1CD4
void __cdecl SquareBasedWedge::SquareBasedWedge(
        SquareBasedWedge *const this,
        std::shared_ptr<ToTheMoonLine> *p_topLine,
        std::shared_ptr<NodeWindow> *p_window)
{
  std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rbx
  ToTheMoonVector3 *v5; // rax
  std::shared_ptr<ToTheMoonVector3> __r; // [rsp+20h] [rbp-20h] BYREF

  std::shared_ptr<ToTheMoonLine>::shared_ptr(&this->topLine);
  std::shared_ptr<NodeWindow>::shared_ptr(&this->base);
  std::shared_ptr<ToTheMoonVector3>::shared_ptr(&this->planeVec);
  std::shared_ptr<std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>>::shared_ptr(&this->baseToTopMap);
  std::shared_ptr<NodeWindow>::operator=(&this->base, p_window);
  std::shared_ptr<ToTheMoonLine>::operator=(&this->topLine, p_topLine);
  std::make_shared<ToTheMoonVector3>();
  std::shared_ptr<ToTheMoonVector3>::operator=(&this->planeVec, &__r);
  std::shared_ptr<ToTheMoonVector3>::~shared_ptr(&__r);
  if ( std::operator!=<NodeWindow>(&this->base, 0LL) && std::operator!=<ToTheMoonVector3>(&this->planeVec, 0LL) )
  {
    v4 = std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->base);
    v5 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->planeVec);
    NodeWindow::GetPlaneVector(v4, v5);
  }
  SquareBasedWedge::GenerateBaseToTopMap(this);
};

// Line 313: range 000000000CBF1CD6-000000000CBF1E5D
ToTheMoonVector3 *__fastcall SquareBasedWedge::GetTopFromBase(
        SquareBasedWedge *const this,
        ToTheMoonVector3 *baseVertice)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ToTheMoonVector3 *result; // rax
  std::map<ToTheMoonVector3*,ToTheMoonVector3*> *v6; // rax
  std::map<ToTheMoonVector3*,ToTheMoonVector3*> *v7; // rax
  std::map<ToTheMoonVector3*,ToTheMoonVector3*> *v8; // rax
  unsigned __int64 v9; // rax
  std::_Rb_tree_iterator<std::pair<ToTheMoonVector3* const,ToTheMoonVector3*> >::_Self __x; // [rsp+10h] [rbp-70h] BYREF
  std::_Rb_tree_iterator<std::pair<ToTheMoonVector3* const,ToTheMoonVector3*> >::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 15 baseVertice:312";
  *(_QWORD *)(v2 + 16) = SquareBasedWedge::GetTopFromBase;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = baseVertice;
  if ( std::operator==<std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>>(&this->baseToTopMap, 0LL) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::__shared_ptr_access<std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<ToTheMoonVector3*,ToTheMoonVector3*>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->baseToTopMap);
    __y._M_node = std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>::end(v6)._M_node;
    v7 = std::__shared_ptr_access<std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<ToTheMoonVector3*,ToTheMoonVector3*>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->baseToTopMap);
    __x._M_node = std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>::find(
                    v7,
                    (const std::map<ToTheMoonVector3*,ToTheMoonVector3*>::key_type *)(v2 + 32))._M_node;
    if ( std::operator==(&__x, &__y) )
    {
      result = 0LL;
    }
    else
    {
      v8 = std::__shared_ptr_access<std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::map<ToTheMoonVector3*,ToTheMoonVector3*>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->baseToTopMap);
      v9 = (unsigned __int64)std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>::at(
                               v8,
                               (const std::map<ToTheMoonVector3*,ToTheMoonVector3*>::key_type *)(v2 + 32));
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8(v9, v2 + 32);
      result = *(ToTheMoonVector3 **)v9;
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 326: range 000000000CBF1E5E-000000000CBF1EB9
void __cdecl SquareBasedWedge::GenerateTopIncreaseType(SquareBasedWedge *const this, const ToTheMoonVector3 *lineVec)
{
  Axis v2; // edx

  v2 = Geometry::PlaneNormalToAxis(lineVec);
  if ( *(_BYTE *)(((unsigned __int64)&this->topIncreaseType >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->topIncreaseType >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->topIncreaseType);
  }
  this->topIncreaseType = v2;
};

// Line 331: range 000000000CBF1EBA-000000000CBF267C
// local variable allocation has failed, the output may be wrong!
void __cdecl SquareBasedWedge::GenerateBaseToTopMap(SquareBasedWedge *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  float v7; // xmm0_4
  std::vector<ToTheMoonVector3*>::iterator v8; // rax
  AxisComparer v9; // rdx OVERLAPPED
  ToTheMoonVector3 **M_current; // r14
  std::vector<ToTheMoonVector3*>::iterator v11; // rax
  AxisComparer v12; // rdx OVERLAPPED
  unsigned __int64 v13; // rax
  __int64 v14; // r14
  std::map<ToTheMoonVector3*,ToTheMoonVector3*> *v15; // r15
  const std::map<ToTheMoonVector3*,ToTheMoonVector3*>::key_type *v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // r14
  std::map<ToTheMoonVector3*,ToTheMoonVector3*> *v20; // r15
  const std::map<ToTheMoonVector3*,ToTheMoonVector3*>::key_type *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // r14
  std::map<ToTheMoonVector3*,ToTheMoonVector3*> *v25; // r15
  const std::map<ToTheMoonVector3*,ToTheMoonVector3*>::key_type *v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // r14
  std::map<ToTheMoonVector3*,ToTheMoonVector3*> *v30; // r15
  const std::map<ToTheMoonVector3*,ToTheMoonVector3*>::key_type *v31; // rax
  unsigned __int64 v32; // rax
  std::initializer_list<ToTheMoonVector3*> __l; // [rsp+10h] [rbp-150h]
  ToTheMoonVector3 **__la; // [rsp+10h] [rbp-150h]
  std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // [rsp+20h] [rbp-140h]
  std::allocator<ToTheMoonVector3*> __a; // [rsp+37h] [rbp-129h] BYREF
  AxisComparer __comp; // [rsp+38h] [rbp-128h] BYREF
  std::shared_ptr<std::map<ToTheMoonVector3*,ToTheMoonVector3*> > __r; // [rsp+40h] [rbp-120h] BYREF
  __int64 v39[4]; // [rsp+50h] [rbp-110h] BYREF
  char v40[240]; // [rsp+70h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 12 11 lineVec:344 64 24 16 baseVertices:353 128 24 15 topVertices:362";
  *(_QWORD *)(v1 + 16) = SquareBasedWedge::GenerateBaseToTopMap;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219020288;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  if ( !std::operator==<ToTheMoonLine>(&this->topLine, 0LL)
    && !std::operator==<NodeWindow>(&this->base, 0LL)
    && !std::operator==<ToTheMoonVector3>(&this->planeVec, 0LL) )
  {
    std::make_shared<std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>>();
    std::shared_ptr<std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>>::operator=(&this->baseToTopMap, &__r);
    std::shared_ptr<std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>>::~shared_ptr(&__r);
    if ( !std::operator==<std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>>(&this->baseToTopMap, 0LL) )
    {
      v35 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
      v5 = std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
      *(ToTheMoonVector3 *)(v1 + 32) = ToTheMoonVector3::Diff(&v35->start, &v5->end);
      v6 = std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->planeVec);
      v7 = ToTheMoonVector3::Dot(v6, (const ToTheMoonVector3 *)(v1 + 32));
      if ( Algebra::IsClose(v7, 0.0) )
      {
        SquareBasedWedge::GenerateTopIncreaseType(this, (const ToTheMoonVector3 *)(v1 + 32));
        v39[0] = (__int64)std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->base);
        v39[1] = (__int64)&std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->base)->p2;
        v39[2] = (__int64)&std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->base)->p3;
        v39[3] = (__int64)&std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NodeWindow,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->base)->p4;
        __l._M_array = (std::initializer_list<ToTheMoonVector3*>::iterator)v39;
        __l._M_len = 4LL;
        std::allocator<ToTheMoonVector3 *>::allocator(&__a);
        std::vector<ToTheMoonVector3 *>::vector((std::vector<ToTheMoonVector3*> *const)(v1 + 64), __l, &__a);
        std::allocator<ToTheMoonVector3 *>::~allocator(&__a);
        if ( *(_BYTE *)(((unsigned __int64)&this->topIncreaseType >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->topIncreaseType >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->topIncreaseType);
        }
        AxisComparer::AxisComparer(&__comp, this->topIncreaseType, 1);
        __la = std::vector<ToTheMoonVector3 *>::end((std::vector<ToTheMoonVector3*> *const)(v1 + 64))._M_current;
        v8._M_current = std::vector<ToTheMoonVector3 *>::begin((std::vector<ToTheMoonVector3*> *const)(v1 + 64))._M_current;
        v9 = __comp;
        std::sort<__gnu_cxx::__normal_iterator<ToTheMoonVector3 **,std::vector<ToTheMoonVector3 *>>,AxisComparer>(
          v8,
          (__gnu_cxx::__normal_iterator<ToTheMoonVector3**,std::vector<ToTheMoonVector3*> >)__la,
          v9);
        __r._M_ptr = (std::__shared_ptr<std::map<ToTheMoonVector3*,ToTheMoonVector3*>,(__gnu_cxx::_Lock_policy)2>::element_type *)std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
        __r._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)&std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonLine,(__gnu_cxx::_Lock_policy)2,false,false> *const)this)->end;
        std::allocator<ToTheMoonVector3 *>::allocator(&__a);
        std::vector<ToTheMoonVector3 *>::vector(
          (std::vector<ToTheMoonVector3*> *const)(v1 + 128),
          (std::initializer_list<ToTheMoonVector3*>)__PAIR128__(2LL, &__r),
          &__a);
        std::allocator<ToTheMoonVector3 *>::~allocator(&__a);
        if ( *(_BYTE *)(((unsigned __int64)&this->topIncreaseType >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->topIncreaseType >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->topIncreaseType);
        }
        AxisComparer::AxisComparer(&__comp, this->topIncreaseType, 1);
        M_current = std::vector<ToTheMoonVector3 *>::end((std::vector<ToTheMoonVector3*> *const)(v1 + 128))._M_current;
        v11._M_current = std::vector<ToTheMoonVector3 *>::begin((std::vector<ToTheMoonVector3*> *const)(v1 + 128))._M_current;
        v12 = __comp;
        std::sort<__gnu_cxx::__normal_iterator<ToTheMoonVector3 **,std::vector<ToTheMoonVector3 *>>,AxisComparer>(
          v11,
          (__gnu_cxx::__normal_iterator<ToTheMoonVector3**,std::vector<ToTheMoonVector3*> >)M_current,
          v12);
        v13 = (unsigned __int64)std::vector<ToTheMoonVector3 *>::operator[](
                                  (std::vector<ToTheMoonVector3*> *const)(v1 + 128),
                                  1uLL);
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load8(v13, 1LL);
        v14 = *(_QWORD *)v13;
        v15 = std::__shared_ptr_access<std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<ToTheMoonVector3*,ToTheMoonVector3*>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->baseToTopMap);
        v16 = std::vector<ToTheMoonVector3 *>::operator[]((std::vector<ToTheMoonVector3*> *const)(v1 + 64), 0LL);
        v17 = (unsigned __int64)std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>::operator[](v15, v16);
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v17 = __asan_report_store8();
        *(_QWORD *)v17 = v14;
        v18 = (unsigned __int64)std::vector<ToTheMoonVector3 *>::operator[](
                                  (std::vector<ToTheMoonVector3*> *const)(v1 + 128),
                                  1uLL);
        if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
          v18 = __asan_report_load8(v18, 1LL);
        v19 = *(_QWORD *)v18;
        v20 = std::__shared_ptr_access<std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<ToTheMoonVector3*,ToTheMoonVector3*>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->baseToTopMap);
        v21 = std::vector<ToTheMoonVector3 *>::operator[]((std::vector<ToTheMoonVector3*> *const)(v1 + 64), 1uLL);
        v22 = (unsigned __int64)std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>::operator[](v20, v21);
        if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          v22 = __asan_report_store8();
        *(_QWORD *)v22 = v19;
        v23 = (unsigned __int64)std::vector<ToTheMoonVector3 *>::operator[](
                                  (std::vector<ToTheMoonVector3*> *const)(v1 + 128),
                                  0LL);
        if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
          v23 = __asan_report_load8(v23, 0LL);
        v24 = *(_QWORD *)v23;
        v25 = std::__shared_ptr_access<std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<ToTheMoonVector3*,ToTheMoonVector3*>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->baseToTopMap);
        v26 = std::vector<ToTheMoonVector3 *>::operator[]((std::vector<ToTheMoonVector3*> *const)(v1 + 64), 2uLL);
        v27 = (unsigned __int64)std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>::operator[](v25, v26);
        if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
          v27 = __asan_report_store8();
        *(_QWORD *)v27 = v24;
        v28 = (unsigned __int64)std::vector<ToTheMoonVector3 *>::operator[](
                                  (std::vector<ToTheMoonVector3*> *const)(v1 + 128),
                                  0LL);
        if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
          v28 = __asan_report_load8(v28, 0LL);
        v29 = *(_QWORD *)v28;
        v30 = std::__shared_ptr_access<std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<std::map<ToTheMoonVector3*,ToTheMoonVector3*>,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->baseToTopMap);
        v31 = std::vector<ToTheMoonVector3 *>::operator[]((std::vector<ToTheMoonVector3*> *const)(v1 + 64), 3uLL);
        v32 = (unsigned __int64)std::map<ToTheMoonVector3 *,ToTheMoonVector3 *>::operator[](v30, v31);
        if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
          v32 = __asan_report_store8();
        *(_QWORD *)v32 = v29;
        std::vector<ToTheMoonVector3 *>::~vector((std::vector<ToTheMoonVector3*> *const)(v1 + 128));
        std::vector<ToTheMoonVector3 *>::~vector((std::vector<ToTheMoonVector3*> *const)(v1 + 64));
      }
    }
  }
  if ( v40 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 377: range 000000000CBF267E-000000000CBF26B3
void __cdecl SquareBasedWedge::SetBase(SquareBasedWedge *const this, std::shared_ptr<NodeWindow> *p_newBase)
{
  std::shared_ptr<NodeWindow>::operator=(&this->base, p_newBase);
  SquareBasedWedge::GenerateBaseToTopMap(this);
};

// Line 383: range 000000000CBF26B4-000000000CBF272D
bool __cdecl SquareBasedWedge::CompareBaseVertice(
        SquareBasedWedge *const this,
        ToTheMoonVector3 *p1,
        ToTheMoonVector3 *p2)
{
  AxisComparer v5; // [rsp+28h] [rbp-8h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->topIncreaseType >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->topIncreaseType >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->topIncreaseType);
  }
  AxisComparer::AxisComparer(&v5, this->topIncreaseType, 1);
  return AxisComparer::operator()(&v5, p1, p2);
};

// Line 388: range 000000000CBF272E-000000000CBF2779
bool __cdecl SquareBasedWedge::CompareTopVertice(
        SquareBasedWedge *const this,
        std::shared_ptr<ToTheMoonVector3> *p_p1,
        std::shared_ptr<ToTheMoonVector3> *p_p2)
{
  ToTheMoonVector3 *v3; // rbx
  ToTheMoonVector3 *v4; // rcx

  v3 = std::__shared_ptr<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2>::get(p_p2);
  v4 = std::__shared_ptr<ToTheMoonVector3,(__gnu_cxx::_Lock_policy)2>::get(p_p1);
  return SquareBasedWedge::CompareBaseVertice(this, v4, v3);
};
