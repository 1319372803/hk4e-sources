// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_oneoff_gather_point_detector.h

// Line 18: range 000000001635A664-000000001635A6B1
void __cdecl WidgetOneoffGatherPointDetector::~WidgetOneoffGatherPointDetector(
        WidgetOneoffGatherPointDetector *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WidgetOneoffGatherPointDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WidgetBase = v2;
  WidgetBase::~WidgetBase((WidgetBase *const)this);
};

// Line 18: range 000000001635A6B2-000000001635A6DC
void __cdecl WidgetOneoffGatherPointDetector::~WidgetOneoffGatherPointDetector(
        WidgetOneoffGatherPointDetector *const this)
{
  WidgetOneoffGatherPointDetector::~WidgetOneoffGatherPointDetector(this);
  operator delete(this, 0xA8uLL);
};

// Line 22: range 000000001634EA14-000000001634EC10
void __fastcall ZN31WidgetOneoffGatherPointDetectorCI210WidgetBaseER16PlayerWidgetCompR6Playerj(
        WidgetOneoffGatherPointDetector *const this,
        PlayerWidgetComp *a2,
        Player *a3,
        int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int (**v7)(...); // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool v10; // dl
  char v13[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ZN31WidgetOneoffGatherPointDetectorCI210WidgetBaseER16PlayerWidgetCompR6Playerj;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a4;
  WidgetBase::WidgetBase((WidgetBase *const)this, a2, a3, *(_DWORD *)(v4 + 32));
  v7 = (int (**)(...))(&`vtable for'WidgetOneoffGatherPointDetector + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_WidgetBase = v7;
  v8 = ((_BYTE)this - 111) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_hint_valid_, v8, v9);
  this->is_hint_valid_ = 0;
  Vector3::Vector3(&this->hint_center_pos_, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id_, v8, (_BYTE)this - 96);
  }
  this->group_id_ = 0;
  v10 = *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->config_id_, (((_BYTE)this - 92) & 7u) + 3, v10);
  this->config_id_ = 0;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 28: range 000000001623D84A-000000001623D885
std::type_index __cdecl WidgetOneoffGatherPointDetector::getTypeIndex(
        const WidgetOneoffGatherPointDetector *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&WidgetOneoffGatherPointDetector::widget_type >> 3) + 0x7FFF8000) )
    __asan_report_load8(&WidgetOneoffGatherPointDetector::widget_type);
  return WidgetOneoffGatherPointDetector::widget_type;
};

// Line 44: range 000000001623D886-000000001623D979
void __cdecl WidgetOneoffGatherPointDetector::reset(WidgetOneoffGatherPointDetector *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  bool v3; // dl

  v1 = ((_BYTE)this - 111) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_hint_valid_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_hint_valid_, v1, v2);
  this->is_hint_valid_ = 0;
  Vector3::reset(&this->hint_center_pos_);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id_, v1, (_BYTE)this - 96);
  }
  this->group_id_ = 0;
  v3 = *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id_ >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->config_id_, (((_BYTE)this - 92) & 7u) + 3, v3);
  this->config_id_ = 0;
};
