// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/widget/widget_base.h

// Line 39: range 000000001623C496-000000001623C77C
void __cdecl WidgetBase::WidgetBase(
        WidgetBase *const this,
        PlayerWidgetComp *widget_comp,
        Player *player,
        uint32_t matrial_id)
{
  int (**v4)(...); // rdx
  WidgetBase **v5; // r8
  const std::_Placeholder<1> *v6; // r9
  WidgetBase *v9; // [rsp+28h] [rbp-78h] BYREF
  PlayerPtr p_player_ptr; // [rsp+30h] [rbp-70h] BYREF
  void (*__f[2])(WidgetBase *, unsigned __int64); // [rsp+40h] [rbp-60h] BYREF
  std::_Bind_helper<false,void (WidgetBase::*)(long unsigned int),WidgetBase*,const std::_Placeholder<1>&>::type p___f; // [rsp+50h] [rbp-50h] BYREF
  std::function<void(long unsigned int)> p_callback; // [rsp+70h] [rbp-30h] BYREF

  std::enable_shared_from_this<WidgetBase>::enable_shared_from_this(&this->std::enable_shared_from_this<WidgetBase>);
  v4 = (int (**)(...))(&`vtable for'WidgetBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, widget_comp);
  this->_vptr_WidgetBase = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->widget_comp_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->widget_comp_, widget_comp);
  this->widget_comp_ = widget_comp;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_, widget_comp);
  this->player_ = player;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->material_id_, widget_comp, (_BYTE)this + 40);
  }
  this->material_id_ = matrial_id;
  if ( (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->occupied_array_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->occupied_array_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)&this->occupied_array_._M_elems[9] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 53) & 7) >= *(_BYTE *)(((unsigned __int64)&this->occupied_array_._M_elems[9] >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->occupied_array_, 10LL);
  }
  *(_QWORD *)this->occupied_array_._M_elems = 0LL;
  *(_WORD *)&this->occupied_array_._M_elems[8] = 0;
  toPtr<Player,Player>((Player *)&p_player_ptr);
  v9 = this;
  __f[0] = (void (*)(WidgetBase *, unsigned __int64))WidgetBase::onCheckActiveTimer;
  __f[1] = 0LL;
  std::bind<void (WidgetBase::*)(unsigned long),WidgetBase*,std::_Placeholder<1> const&>(
    &p___f,
    __f,
    &v9,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v5,
    v6);
  std::function<void ()(unsigned long)>::function<std::_Bind<void (WidgetBase::*)(unsigned long) ()(WidgetBase*,std::_Placeholder<1>)>,void,void>(
    &p_callback,
    &p___f);
  PlayerUnixTimer::PlayerUnixTimer(&this->active_check_timer_, &p_player_ptr, &p_callback);
  std::function<void ()(unsigned long)>::~function(&p_callback);
  std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
  if ( *(char *)(((unsigned __int64)&this->is_check_active_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_check_active_, &p_player_ptr, &this->is_check_active_);
  this->is_check_active_ = 0;
};

// Line 42: range 000000001623C77E-000000001623C794
int32_t __cdecl WidgetBase::fromDetailBin(
        WidgetBase *const this,
        const proto::WidgetDetailBin *detail_bin,
        const proto::WidgetBin *widget_bin)
{
  return 0;
};

// Line 43: range 000000001623C796-000000001623C7AC
int32_t __cdecl WidgetBase::toDetailBin(
        const WidgetBase *const this,
        proto::WidgetDetailBin *detail_bin,
        proto::WidgetBin *widget_bin)
{
  return 0;
};

// Line 44: range 00000000163499B4-0000000016349A15
void __cdecl WidgetBase::~WidgetBase(WidgetBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WidgetBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_WidgetBase = v2;
  PlayerUnixTimer::~PlayerUnixTimer(&this->active_check_timer_);
  std::enable_shared_from_this<WidgetBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<WidgetBase>);
};

// Line 44: range 0000000016349A16-0000000016349A40
void __cdecl WidgetBase::~WidgetBase(WidgetBase *const this)
{
  WidgetBase::~WidgetBase(this);
  operator delete(this, 0x98uLL);
};

// Line 49: range 000000001623C7AE-000000001623C7BC
void __cdecl WidgetBase::fillAllWidgetNotifyData(const WidgetBase *const this, proto::AllWidgetDataNotify *notify)
{
  ;
};

// Line 50: range 000000001623C7BE-000000001623C7C8
void __cdecl WidgetBase::notifyData(const WidgetBase *const this)
{
  ;
};

// Line 52: range 000000001623C7CA-000000001623C7D4
void __cdecl WidgetBase::onLogout(WidgetBase *const this)
{
  ;
};

// Line 53: range 000000001623C7D6-000000001623C7E4
int32_t __cdecl WidgetBase::onSetActionPanel(WidgetBase *const this)
{
  return 0;
};

// Line 54: range 000000001623C7E6-000000001623C7F4
int32_t __cdecl WidgetBase::onClearActionPanel(WidgetBase *const this)
{
  return 0;
};

// Line 55: range 000000001623C7F6-000000001623C804
int32_t __cdecl WidgetBase::onAttachAvatar(WidgetBase *const this)
{
  return 0;
};

// Line 56: range 000000001623C806-000000001623C814
int32_t __cdecl WidgetBase::onDetachAvatar(WidgetBase *const this)
{
  return 0;
};

// Line 57: range 000000001623C816-000000001623C828
int32_t __cdecl WidgetBase::onClientReport(WidgetBase *const this, const proto::WidgetReportReq *req)
{
  return 0;
};

// Line 58: range 000000001623C82A-000000001623C838
void __cdecl WidgetBase::onPostQuickUse(const WidgetBase *const this, const std::string *trans_no)
{
  ;
};

// Line 62: range 000000001623C83A-000000001623C850
int32_t __cdecl WidgetBase::onQuickUse(
        WidgetBase *const this,
        const proto::QuickUseWidgetReq *req,
        proto::QuickUseWidgetRsp *rsp_0)
{
  return -1;
};

// Line 63: range 000000001623C852-000000001623C868
int32_t __cdecl WidgetBase::onDoBagUse(
        WidgetBase *const this,
        const proto::WidgetDoBagReq *req,
        proto::WidgetDoBagRsp *rsp_0)
{
  return -1;
};

// Line 64: range 000000001623C86A-000000001623C880
int32_t __cdecl WidgetBase::onDoCapture(
        WidgetBase *const this,
        const proto::WidgetCaptureAnimalReq *req,
        proto::WidgetCaptureAnimalRsp *rsp_0)
{
  return -1;
};

// Line 65: range 000000001623C882-000000001623C898
int32_t __cdecl WidgetBase::onChangeActiveState(
        WidgetBase *const this,
        const proto::ChangeWidgetBackgroundActiveStateReq *req,
        proto::ChangeWidgetBackgroundActiveStateRsp *rsp_0)
{
  return -1;
};

// Line 67: range 0000000014404B4A-0000000014404B91
uint32_t __cdecl WidgetBase::getMaterialId(WidgetBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->material_id_);
  }
  return this->material_id_;
};

// Line 69: range 0000000015D3FBB0-0000000015D3FBD1
bool __cdecl WidgetBase::isSlotOccupied(WidgetBase *const this, data::WidgetOccupyTag tag)
{
  return WidgetBase::isSlotOccupied(this, tag);
};
