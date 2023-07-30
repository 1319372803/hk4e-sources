// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/ugc/base_ugc.h

// Line 39: range 0000000017A0773A-0000000017A0780C
void __cdecl BaseUgc::BaseUgc(BaseUgc *const this, Player *player, uint32_t ugc_id)
{
  int (**v3)(...); // rdx

  std::enable_shared_from_this<BaseUgc>::enable_shared_from_this(&this->std::enable_shared_from_this<BaseUgc>);
  common::milog::DescribalBase::DescribalBase(this);
  v3 = (int (**)(...))(&`vtable for'BaseUgc + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->_vptr_DescribalBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_, player);
  this->player_ = player;
  if ( *(_BYTE *)(((unsigned __int64)&this->ugc_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ugc_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ugc_id_, player, (_BYTE)this + 32);
  }
  this->ugc_id_ = ugc_id;
};

// Line 40: range 0000000017B61382-0000000017B613D3
void __cdecl BaseUgc::~BaseUgc(BaseUgc *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BaseUgc + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::enable_shared_from_this<BaseUgc>::~enable_shared_from_this(&this->std::enable_shared_from_this<BaseUgc>);
};

// Line 40: range 0000000017B613D4-0000000017B613FE
void __cdecl BaseUgc::~BaseUgc(BaseUgc *const this)
{
  BaseUgc::~BaseUgc(this);
  operator delete(this, 0x28uLL);
};

// Line 50: range 0000000017A0780E-0000000017A0781C
int32_t __cdecl BaseUgc::init(BaseUgc *const this)
{
  return 0;
};

// Line 51: range 0000000017A0781E-0000000017A07828
void __cdecl BaseUgc::onRefresh(BaseUgc *const this)
{
  ;
};

// Line 61: range 0000000017A0782A-0000000017A07834
void __cdecl BaseUgc::clear(BaseUgc *const this)
{
  ;
};

// Line 64: range 0000000017A07836-0000000017A07848
void __cdecl BaseUgc::getUgc(BaseUgc *const this, const proto::GetUgcReq *req, proto::GetUgcRsp *rsp_0)
{
  ;
};

// Line 65: range 0000000017A0784A-0000000017A0785C
void __cdecl BaseUgc::serverGetUgc(
        BaseUgc *const this,
        const proto::ServerGetUgcRsp *server_rsp,
        proto::GetUgcRsp *rsp_0)
{
  ;
};

// Line 67: range 0000000017A0785E-0000000017A07870
void __cdecl BaseUgc::getUgcBriefInfo(
        BaseUgc *const this,
        const proto::GetUgcBriefInfoReq *req,
        proto::GetUgcBriefInfoRsp *rsp_0)
{
  ;
};

// Line 68: range 0000000017A07872-0000000017A07884
void __cdecl BaseUgc::serverGetUgcBrief(
        BaseUgc *const this,
        const proto::ServerGetUgcBriefRsp *server_rsp,
        proto::GetUgcBriefInfoRsp *rsp_0)
{
  ;
};

// Line 70: range 0000000017A07886-0000000017A07898
void __cdecl BaseUgc::saveUgc(BaseUgc *const this, const proto::SaveUgcReq *req, proto::SaveUgcRsp *rsp_0)
{
  ;
};

// Line 71: range 0000000017A0789A-0000000017A078AC
void __cdecl BaseUgc::serverSaveUgc(
        BaseUgc *const this,
        const proto::ServerSaveUgcRsp *server_rsp,
        proto::SaveUgcRsp *rsp_0)
{
  ;
};

// Line 73: range 0000000017A078AE-0000000017A078C0
void __cdecl BaseUgc::publishUgc(BaseUgc *const this, const proto::PublishUgcReq *req, proto::PublishUgcRsp *rsp_0)
{
  ;
};

// Line 74: range 0000000017A078C2-0000000017A078D4
void __cdecl BaseUgc::serverPublishUgc(
        BaseUgc *const this,
        const proto::ServerPublishUgcRsp *server_rsp,
        proto::PublishUgcRsp *rsp_0)
{
  ;
};

// Line 76: range 0000000017A078D6-0000000017A078E8
void __cdecl BaseUgc::checkUgcUpdate(
        BaseUgc *const this,
        const proto::CheckUgcUpdateReq *req,
        proto::CheckUgcUpdateRsp *rsp_0)
{
  ;
};

// Line 77: range 0000000017A078EA-0000000017A078FC
void __cdecl BaseUgc::serverCheckUgcUpdate(
        BaseUgc *const this,
        const proto::ServerCheckUgcUpdateRsp *server_rsp,
        proto::CheckUgcUpdateRsp *rsp_0)
{
  ;
};

// Line 81: range 0000000017A078FE-0000000017A0790D
void __cdecl BaseUgc::onBanUgcPublish(BaseUgc *const this, bool is_ban)
{
  ;
};

// Line 85: range 0000000017A0790E-0000000017A07955
uint32_t __cdecl BaseUgc::getUgcId(const BaseUgc *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->ugc_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ugc_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->ugc_id_);
  }
  return this->ugc_id_;
};
