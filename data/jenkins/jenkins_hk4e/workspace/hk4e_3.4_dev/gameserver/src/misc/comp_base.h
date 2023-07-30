// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/misc/comp_base.h

// Line 35: range 000000001383CEC2-000000001383CF44
void __cdecl AvatarCompBase::AvatarCompBase(AvatarCompBase *const this, Avatar *avatar)
{
  int (**v2)(...); // rdx

  common::milog::DescribalBase::DescribalBase(this);
  v2 = (int (**)(...))(&`vtable for'AvatarCompBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_);
  this->avatar_ = avatar;
};

// Line 42: range 0000000016239884-00000000162398AE
void __cdecl EcsBase<Avatar,AvatarCompBase,7u>::~EcsBase(EcsBase<Avatar,AvatarCompBase,7> *const this)
{
  std::vector<unsigned int>::~vector(&this->type_vec_);
  std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::~vector(&this->comp_vec_);
};

// Line 42: range 000000001635AF4A-000000001635AF74
void __cdecl EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::~EcsBase(
        EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const this)
{
  std::vector<unsigned int>::~vector(&this->type_vec_);
  std::vector<std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase>>>::~vector(&this->comp_vec_);
};

// Line 42: range 0000000014614CC2-0000000014614CEC
void __cdecl EcsBase<Gadget,GadgetCompBase,28u>::~EcsBase(EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  std::vector<unsigned int>::~vector(&this->type_vec_);
  std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::~vector(&this->comp_vec_);
};

// Line 42: range 000000001461520E-0000000014615238
void __cdecl EcsBase<Home,HomeCompBase,12u>::~EcsBase(EcsBase<Home,HomeCompBase,12> *const this)
{
  std::vector<unsigned int>::~vector(&this->type_vec_);
  std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::~vector(&this->comp_vec_);
};

// Line 42: range 000000001666FAAA-000000001666FAD4
void __cdecl EcsBase<Monster,MonsterCompBase,4u>::~EcsBase(EcsBase<Monster,MonsterCompBase,4> *const this)
{
  std::vector<unsigned int>::~vector(&this->type_vec_);
  std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase>>>::~vector(&this->comp_vec_);
};

// Line 42: range 0000000017A01C78-0000000017A01CA2
void __cdecl EcsBase<Player,PlayerCompBase,71u>::~EcsBase(EcsBase<Player,PlayerCompBase,71> *const this)
{
  std::vector<unsigned int>::~vector(&this->type_vec_);
  std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::~vector(&this->comp_vec_);
};

// Line 42: range 0000000015D31C94-0000000015D31CBE
void __cdecl EcsBase<Scene,SceneCompBase,12u>::~EcsBase(EcsBase<Scene,SceneCompBase,12> *const this)
{
  std::vector<unsigned int>::~vector(&this->type_vec_);
  std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::~vector(&this->comp_vec_);
};

// Line 42: range 000000001518B27E-000000001518B2A8
void __cdecl EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2u>::~EcsBase(
        EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2> *const this)
{
  std::vector<unsigned int>::~vector(&this->type_vec_);
  std::vector<std::pair<unsigned int,std::shared_ptr<SceneMultistagePlayCompBase>>>::~vector(&this->comp_vec_);
};

// Line 52: range 000000001393091C-000000001393099A
void __cdecl EcsBase<Avatar,AvatarCompBase,7u>::Iterator::Iterator(
        EcsBase<Avatar,AvatarCompBase,7>::Iterator *const this,
        const EcsBase<Avatar,AvatarCompBase,7> *ecs_base,
        uint32_t index)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->ecs_base_ = ecs_base;
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type_index_);
  }
  this->type_index_ = index;
};

// Line 52: range 0000000016270B40-0000000016270BBE
void __cdecl EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::Iterator(
        EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator *const this,
        const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *ecs_base,
        uint32_t index)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->ecs_base_ = ecs_base;
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type_index_);
  }
  this->type_index_ = index;
};

// Line 52: range 0000000015DA19EA-0000000015DA1A68
void __cdecl EcsBase<Gadget,GadgetCompBase,28u>::Iterator::Iterator(
        EcsBase<Gadget,GadgetCompBase,28>::Iterator *const this,
        const EcsBase<Gadget,GadgetCompBase,28> *ecs_base,
        uint32_t index)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->ecs_base_ = ecs_base;
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type_index_);
  }
  this->type_index_ = index;
};

// Line 52: range 000000001469FBE2-000000001469FC60
void __cdecl EcsBase<Home,HomeCompBase,12u>::Iterator::Iterator(
        EcsBase<Home,HomeCompBase,12>::Iterator *const this,
        const EcsBase<Home,HomeCompBase,12> *ecs_base,
        uint32_t index)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->ecs_base_ = ecs_base;
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type_index_);
  }
  this->type_index_ = index;
};

// Line 52: range 000000001725CE60-000000001725CEDE
void __cdecl EcsBase<Monster,MonsterCompBase,4u>::Iterator::Iterator(
        EcsBase<Monster,MonsterCompBase,4>::Iterator *const this,
        const EcsBase<Monster,MonsterCompBase,4> *ecs_base,
        uint32_t index)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->ecs_base_ = ecs_base;
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type_index_);
  }
  this->type_index_ = index;
};

// Line 52: range 000000001726CB1A-000000001726CB98
void __cdecl EcsBase<Player,PlayerCompBase,71u>::Iterator::Iterator(
        EcsBase<Player,PlayerCompBase,71>::Iterator *const this,
        const EcsBase<Player,PlayerCompBase,71> *ecs_base,
        uint32_t index)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->ecs_base_ = ecs_base;
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type_index_);
  }
  this->type_index_ = index;
};

// Line 52: range 0000000015A6E0C2-0000000015A6E140
void __cdecl EcsBase<Scene,SceneCompBase,12u>::Iterator::Iterator(
        EcsBase<Scene,SceneCompBase,12>::Iterator *const this,
        const EcsBase<Scene,SceneCompBase,12> *ecs_base,
        uint32_t index)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->ecs_base_ = ecs_base;
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type_index_);
  }
  this->type_index_ = index;
};

// Line 55: range 00000000138D7898-00000000138D78ED
EcsBase<Avatar,AvatarCompBase,7>::Iterator *__cdecl EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator++(
        EcsBase<Avatar,AvatarCompBase,7>::Iterator *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  ++this->type_index_;
  return this;
};

// Line 55: range 000000001624FFCC-0000000016250021
EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator *__cdecl EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator++(
        EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  ++this->type_index_;
  return this;
};

// Line 55: range 0000000015D70022-0000000015D70077
EcsBase<Gadget,GadgetCompBase,28>::Iterator *__cdecl EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator++(
        EcsBase<Gadget,GadgetCompBase,28>::Iterator *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  ++this->type_index_;
  return this;
};

// Line 55: range 0000000014643DD0-0000000014643E25
EcsBase<Home,HomeCompBase,12>::Iterator *__cdecl EcsBase<Home,HomeCompBase,12u>::Iterator::operator++(
        EcsBase<Home,HomeCompBase,12>::Iterator *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  ++this->type_index_;
  return this;
};

// Line 55: range 000000001721C288-000000001721C2DD
EcsBase<Monster,MonsterCompBase,4>::Iterator *__cdecl EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator++(
        EcsBase<Monster,MonsterCompBase,4>::Iterator *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  ++this->type_index_;
  return this;
};

// Line 55: range 000000001723D976-000000001723D9CB
EcsBase<Player,PlayerCompBase,71>::Iterator *__cdecl EcsBase<Player,PlayerCompBase,71u>::Iterator::operator++(
        EcsBase<Player,PlayerCompBase,71>::Iterator *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  ++this->type_index_;
  return this;
};

// Line 55: range 0000000015A3055E-0000000015A305B3
EcsBase<Scene,SceneCompBase,12>::Iterator *__cdecl EcsBase<Scene,SceneCompBase,12u>::Iterator::operator++(
        EcsBase<Scene,SceneCompBase,12>::Iterator *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  ++this->type_index_;
  return this;
};

// Line 61: range 00000000138D780C-00000000138D7897
bool __cdecl EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator!=(
        const EcsBase<Avatar,AvatarCompBase,7>::Iterator *const this,
        const EcsBase<Avatar,AvatarCompBase,7>::Iterator *other)
{
  uint32_t type_index; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type_index = this->type_index_;
  if ( *(_BYTE *)(((unsigned __int64)&other->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&other->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return type_index != other->type_index_;
};

// Line 61: range 000000001624FF40-000000001624FFCB
bool __cdecl EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator!=(
        const EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator *const this,
        const EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator *other)
{
  uint32_t type_index; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type_index = this->type_index_;
  if ( *(_BYTE *)(((unsigned __int64)&other->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&other->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return type_index != other->type_index_;
};

// Line 61: range 0000000015D6FF96-0000000015D70021
bool __cdecl EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator!=(
        const EcsBase<Gadget,GadgetCompBase,28>::Iterator *const this,
        const EcsBase<Gadget,GadgetCompBase,28>::Iterator *other)
{
  uint32_t type_index; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type_index = this->type_index_;
  if ( *(_BYTE *)(((unsigned __int64)&other->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&other->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return type_index != other->type_index_;
};

// Line 61: range 0000000014643D44-0000000014643DCF
bool __cdecl EcsBase<Home,HomeCompBase,12u>::Iterator::operator!=(
        const EcsBase<Home,HomeCompBase,12>::Iterator *const this,
        const EcsBase<Home,HomeCompBase,12>::Iterator *other)
{
  uint32_t type_index; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type_index = this->type_index_;
  if ( *(_BYTE *)(((unsigned __int64)&other->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&other->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return type_index != other->type_index_;
};

// Line 61: range 000000001721C1FC-000000001721C287
bool __cdecl EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator!=(
        const EcsBase<Monster,MonsterCompBase,4>::Iterator *const this,
        const EcsBase<Monster,MonsterCompBase,4>::Iterator *other)
{
  uint32_t type_index; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type_index = this->type_index_;
  if ( *(_BYTE *)(((unsigned __int64)&other->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&other->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return type_index != other->type_index_;
};

// Line 61: range 000000001723D8EA-000000001723D975
bool __cdecl EcsBase<Player,PlayerCompBase,71u>::Iterator::operator!=(
        const EcsBase<Player,PlayerCompBase,71>::Iterator *const this,
        const EcsBase<Player,PlayerCompBase,71>::Iterator *other)
{
  uint32_t type_index; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type_index = this->type_index_;
  if ( *(_BYTE *)(((unsigned __int64)&other->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&other->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return type_index != other->type_index_;
};

// Line 61: range 0000000015A304D2-0000000015A3055D
bool __cdecl EcsBase<Scene,SceneCompBase,12u>::Iterator::operator!=(
        const EcsBase<Scene,SceneCompBase,12>::Iterator *const this,
        const EcsBase<Scene,SceneCompBase,12>::Iterator *other)
{
  uint32_t type_index; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type_index = this->type_index_;
  if ( *(_BYTE *)(((unsigned __int64)&other->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&other->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return type_index != other->type_index_;
};

// Line 64: range 00000000138D7A0A-00000000138D7E41
const EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *__cdecl EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator*(
        const EcsBase<Avatar,AvatarCompBase,7>::Iterator *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::vector<unsigned int>::size_type type_index; // r15
  common::milog::MiLogStream *v5; // rax
  const EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *result; // rax
  std::vector<unsigned int> *p_type_vec; // rcx
  std::vector<unsigned int>::const_reference v8; // rdx
  std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase> >>::size_type v9; // r15
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  uint32_t index; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-90h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 7 type:72";
  *(_QWORD *)(v1 + 16) = EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator*;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( !(_BYTE)`guard variable for'EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator*(void)::dummy_pair
    && __cxa_guard_acquire(&`guard variable for'EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator*(void)::dummy_pair) )
  {
    __cxa_guard_release(&`guard variable for'EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator*(void)::dummy_pair);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>::~pair,
      &EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator*(void)const::dummy_pair,
      &_dso_handle);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type_index = this->type_index_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( type_index < std::vector<unsigned int>::size(&this->ecs_base_->type_vec_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_type_vec = &this->ecs_base_->type_vec_;
    if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v8 = std::vector<unsigned int>::operator[](p_type_vec, this->type_index_);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v8;
    if ( !*(_DWORD *)(v1 + 32) )
      goto LABEL_23;
    v9 = *(unsigned int *)(v1 + 32);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( v9 < std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::size(&this->ecs_base_->comp_vec_)
            + 1 )
      v10 = 0;
    else
LABEL_23:
      v10 = 1;
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "operator*",
        75);
      v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v13, (const char (*)[14])"invalid type:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = &EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator*(void)const::dummy_pair;
    }
    else
    {
      index = *(_DWORD *)(v1 + 32) - 1;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      result = std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::operator[](
                 &this->ecs_base_->comp_vec_,
                 index);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "operator*",
      69);
    v5 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v13,
           (const char (*)[21])"invalid type_index_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->type_index_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = &EcsBase<Avatar,AvatarCompBase,7u>::Iterator::operator*(void)const::dummy_pair;
  }
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 64: range 000000001625013E-0000000016250575
const EcsBase<FormalAvatar,FormalAvatarCompBase,3>::CompBasePair *__cdecl EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator*(
        const EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::vector<unsigned int>::size_type type_index; // r15
  common::milog::MiLogStream *v5; // rax
  const EcsBase<FormalAvatar,FormalAvatarCompBase,3>::CompBasePair *result; // rax
  std::vector<unsigned int> *p_type_vec; // rcx
  std::vector<unsigned int>::const_reference v8; // rdx
  std::vector<std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> >>::size_type v9; // r15
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  uint32_t index; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-90h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 7 type:72";
  *(_QWORD *)(v1 + 16) = EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator*;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( !(_BYTE)`guard variable for'EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator*(void)::dummy_pair
    && __cxa_guard_acquire(&`guard variable for'EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator*(void)::dummy_pair) )
  {
    __cxa_guard_release(&`guard variable for'EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator*(void)::dummy_pair);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase>>::~pair,
      &EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator*(void)const::dummy_pair,
      &_dso_handle);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type_index = this->type_index_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( type_index < std::vector<unsigned int>::size(&this->ecs_base_->type_vec_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_type_vec = &this->ecs_base_->type_vec_;
    if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v8 = std::vector<unsigned int>::operator[](p_type_vec, this->type_index_);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v8;
    if ( !*(_DWORD *)(v1 + 32) )
      goto LABEL_23;
    v9 = *(unsigned int *)(v1 + 32);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( v9 < std::vector<std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase>>>::size(&this->ecs_base_->comp_vec_)
            + 1 )
      v10 = 0;
    else
LABEL_23:
      v10 = 1;
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "operator*",
        75);
      v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v13, (const char (*)[14])"invalid type:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = &EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator*(void)const::dummy_pair;
    }
    else
    {
      index = *(_DWORD *)(v1 + 32) - 1;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      result = std::vector<std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase>>>::operator[](
                 &this->ecs_base_->comp_vec_,
                 index);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "operator*",
      69);
    v5 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v13,
           (const char (*)[21])"invalid type_index_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->type_index_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = &EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::operator*(void)const::dummy_pair;
  }
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 64: range 0000000015D70078-0000000015D704AF
const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *__cdecl EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*(
        const EcsBase<Gadget,GadgetCompBase,28>::Iterator *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::vector<unsigned int>::size_type type_index; // r15
  common::milog::MiLogStream *v5; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *result; // rax
  std::vector<unsigned int> *p_type_vec; // rcx
  std::vector<unsigned int>::const_reference v8; // rdx
  std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >>::size_type v9; // r15
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  uint32_t index; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-90h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 7 type:72";
  *(_QWORD *)(v1 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( !(_BYTE)`guard variable for'EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*(void)::dummy_pair
    && __cxa_guard_acquire(&`guard variable for'EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*(void)::dummy_pair) )
  {
    __cxa_guard_release(&`guard variable for'EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*(void)::dummy_pair);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>::~pair,
      &EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*(void)const::dummy_pair,
      &_dso_handle);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type_index = this->type_index_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( type_index < std::vector<unsigned int>::size(&this->ecs_base_->type_vec_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_type_vec = &this->ecs_base_->type_vec_;
    if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v8 = std::vector<unsigned int>::operator[](p_type_vec, this->type_index_);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v8;
    if ( !*(_DWORD *)(v1 + 32) )
      goto LABEL_23;
    v9 = *(unsigned int *)(v1 + 32);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( v9 < std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->ecs_base_->comp_vec_)
            + 1 )
      v10 = 0;
    else
LABEL_23:
      v10 = 1;
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "operator*",
        75);
      v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v13, (const char (*)[14])"invalid type:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = &EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*(void)const::dummy_pair;
    }
    else
    {
      index = *(_DWORD *)(v1 + 32) - 1;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      result = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](
                 &this->ecs_base_->comp_vec_,
                 index);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "operator*",
      69);
    v5 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v13,
           (const char (*)[21])"invalid type_index_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->type_index_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = &EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*(void)const::dummy_pair;
  }
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 64: range 0000000014643F42-0000000014644379
const EcsBase<Home,HomeCompBase,12>::CompBasePair *__cdecl EcsBase<Home,HomeCompBase,12u>::Iterator::operator*(
        const EcsBase<Home,HomeCompBase,12>::Iterator *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::vector<unsigned int>::size_type type_index; // r15
  common::milog::MiLogStream *v5; // rax
  const EcsBase<Home,HomeCompBase,12>::CompBasePair *result; // rax
  std::vector<unsigned int> *p_type_vec; // rcx
  std::vector<unsigned int>::const_reference v8; // rdx
  std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase> >>::size_type v9; // r15
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  uint32_t index; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-90h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 7 type:72";
  *(_QWORD *)(v1 + 16) = EcsBase<Home,HomeCompBase,12u>::Iterator::operator*;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( !(_BYTE)`guard variable for'EcsBase<Home,HomeCompBase,12u>::Iterator::operator*(void)::dummy_pair
    && __cxa_guard_acquire(&`guard variable for'EcsBase<Home,HomeCompBase,12u>::Iterator::operator*(void)::dummy_pair) )
  {
    __cxa_guard_release(&`guard variable for'EcsBase<Home,HomeCompBase,12u>::Iterator::operator*(void)::dummy_pair);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::pair<unsigned int,std::shared_ptr<HomeCompBase>>::~pair,
      &EcsBase<Home,HomeCompBase,12u>::Iterator::operator*(void)const::dummy_pair,
      &_dso_handle);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type_index = this->type_index_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( type_index < std::vector<unsigned int>::size(&this->ecs_base_->type_vec_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_type_vec = &this->ecs_base_->type_vec_;
    if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v8 = std::vector<unsigned int>::operator[](p_type_vec, this->type_index_);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v8;
    if ( !*(_DWORD *)(v1 + 32) )
      goto LABEL_23;
    v9 = *(unsigned int *)(v1 + 32);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( v9 < std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(&this->ecs_base_->comp_vec_) + 1 )
      v10 = 0;
    else
LABEL_23:
      v10 = 1;
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "operator*",
        75);
      v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v13, (const char (*)[14])"invalid type:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = &EcsBase<Home,HomeCompBase,12u>::Iterator::operator*(void)const::dummy_pair;
    }
    else
    {
      index = *(_DWORD *)(v1 + 32) - 1;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      result = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](
                 &this->ecs_base_->comp_vec_,
                 index);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "operator*",
      69);
    v5 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v13,
           (const char (*)[21])"invalid type_index_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->type_index_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = &EcsBase<Home,HomeCompBase,12u>::Iterator::operator*(void)const::dummy_pair;
  }
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 64: range 000000001721C2DE-000000001721C715
const EcsBase<Monster,MonsterCompBase,4>::CompBasePair *__cdecl EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator*(
        const EcsBase<Monster,MonsterCompBase,4>::Iterator *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::vector<unsigned int>::size_type type_index; // r15
  common::milog::MiLogStream *v5; // rax
  const EcsBase<Monster,MonsterCompBase,4>::CompBasePair *result; // rax
  std::vector<unsigned int> *p_type_vec; // rcx
  std::vector<unsigned int>::const_reference v8; // rdx
  std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase> >>::size_type v9; // r15
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  uint32_t index; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-90h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 7 type:72";
  *(_QWORD *)(v1 + 16) = EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator*;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( !(_BYTE)`guard variable for'EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator*(void)::dummy_pair
    && __cxa_guard_acquire(&`guard variable for'EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator*(void)::dummy_pair) )
  {
    __cxa_guard_release(&`guard variable for'EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator*(void)::dummy_pair);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::pair<unsigned int,std::shared_ptr<MonsterCompBase>>::~pair,
      &EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator*(void)const::dummy_pair,
      &_dso_handle);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type_index = this->type_index_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( type_index < std::vector<unsigned int>::size(&this->ecs_base_->type_vec_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_type_vec = &this->ecs_base_->type_vec_;
    if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v8 = std::vector<unsigned int>::operator[](p_type_vec, this->type_index_);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v8;
    if ( !*(_DWORD *)(v1 + 32) )
      goto LABEL_23;
    v9 = *(unsigned int *)(v1 + 32);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( v9 < std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase>>>::size(&this->ecs_base_->comp_vec_)
            + 1 )
      v10 = 0;
    else
LABEL_23:
      v10 = 1;
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "operator*",
        75);
      v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v13, (const char (*)[14])"invalid type:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = &EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator*(void)const::dummy_pair;
    }
    else
    {
      index = *(_DWORD *)(v1 + 32) - 1;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      result = std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase>>>::operator[](
                 &this->ecs_base_->comp_vec_,
                 index);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "operator*",
      69);
    v5 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v13,
           (const char (*)[21])"invalid type_index_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->type_index_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = &EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator*(void)const::dummy_pair;
  }
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 64: range 000000001723DAAC-000000001723DEE3
const EcsBase<Player,PlayerCompBase,71>::CompBasePair *__cdecl EcsBase<Player,PlayerCompBase,71u>::Iterator::operator*(
        const EcsBase<Player,PlayerCompBase,71>::Iterator *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::vector<unsigned int>::size_type type_index; // r15
  common::milog::MiLogStream *v5; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *result; // rax
  std::vector<unsigned int> *p_type_vec; // rcx
  std::vector<unsigned int>::const_reference v8; // rdx
  std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >>::size_type v9; // r15
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  uint32_t index; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-90h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 7 type:72";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::Iterator::operator*;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( !(_BYTE)`guard variable for'EcsBase<Player,PlayerCompBase,71u>::Iterator::operator*(void)::dummy_pair
    && __cxa_guard_acquire(&`guard variable for'EcsBase<Player,PlayerCompBase,71u>::Iterator::operator*(void)::dummy_pair) )
  {
    __cxa_guard_release(&`guard variable for'EcsBase<Player,PlayerCompBase,71u>::Iterator::operator*(void)::dummy_pair);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>::~pair,
      &EcsBase<Player,PlayerCompBase,71u>::Iterator::operator*(void)const::dummy_pair,
      &_dso_handle);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type_index = this->type_index_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( type_index < std::vector<unsigned int>::size(&this->ecs_base_->type_vec_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_type_vec = &this->ecs_base_->type_vec_;
    if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v8 = std::vector<unsigned int>::operator[](p_type_vec, this->type_index_);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v8;
    if ( !*(_DWORD *)(v1 + 32) )
      goto LABEL_23;
    v9 = *(unsigned int *)(v1 + 32);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( v9 < std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->ecs_base_->comp_vec_)
            + 1 )
      v10 = 0;
    else
LABEL_23:
      v10 = 1;
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "operator*",
        75);
      v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v13, (const char (*)[14])"invalid type:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = &EcsBase<Player,PlayerCompBase,71u>::Iterator::operator*(void)const::dummy_pair;
    }
    else
    {
      index = *(_DWORD *)(v1 + 32) - 1;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      result = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                 &this->ecs_base_->comp_vec_,
                 index);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "operator*",
      69);
    v5 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v13,
           (const char (*)[21])"invalid type_index_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->type_index_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = &EcsBase<Player,PlayerCompBase,71u>::Iterator::operator*(void)const::dummy_pair;
  }
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 64: range 0000000015A305B4-0000000015A309EB
const EcsBase<Scene,SceneCompBase,12>::CompBasePair *__cdecl EcsBase<Scene,SceneCompBase,12u>::Iterator::operator*(
        const EcsBase<Scene,SceneCompBase,12>::Iterator *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::vector<unsigned int>::size_type type_index; // r15
  common::milog::MiLogStream *v5; // rax
  const EcsBase<Scene,SceneCompBase,12>::CompBasePair *result; // rax
  std::vector<unsigned int> *p_type_vec; // rcx
  std::vector<unsigned int>::const_reference v8; // rdx
  std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase> >>::size_type v9; // r15
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  uint32_t index; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-90h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 7 type:72";
  *(_QWORD *)(v1 + 16) = EcsBase<Scene,SceneCompBase,12u>::Iterator::operator*;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( !(_BYTE)`guard variable for'EcsBase<Scene,SceneCompBase,12u>::Iterator::operator*(void)::dummy_pair
    && __cxa_guard_acquire(&`guard variable for'EcsBase<Scene,SceneCompBase,12u>::Iterator::operator*(void)::dummy_pair) )
  {
    __cxa_guard_release(&`guard variable for'EcsBase<Scene,SceneCompBase,12u>::Iterator::operator*(void)::dummy_pair);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::pair<unsigned int,std::shared_ptr<SceneCompBase>>::~pair,
      &EcsBase<Scene,SceneCompBase,12u>::Iterator::operator*(void)const::dummy_pair,
      &_dso_handle);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type_index = this->type_index_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( type_index < std::vector<unsigned int>::size(&this->ecs_base_->type_vec_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_type_vec = &this->ecs_base_->type_vec_;
    if ( *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->type_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v8 = std::vector<unsigned int>::operator[](p_type_vec, this->type_index_);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v8;
    if ( !*(_DWORD *)(v1 + 32) )
      goto LABEL_23;
    v9 = *(unsigned int *)(v1 + 32);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( v9 < std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(&this->ecs_base_->comp_vec_) + 1 )
      v10 = 0;
    else
LABEL_23:
      v10 = 1;
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "operator*",
        75);
      v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v13, (const char (*)[14])"invalid type:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = &EcsBase<Scene,SceneCompBase,12u>::Iterator::operator*(void)const::dummy_pair;
    }
    else
    {
      index = *(_DWORD *)(v1 + 32) - 1;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      result = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](
                 &this->ecs_base_->comp_vec_,
                 index);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "operator*",
      69);
    v5 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v13,
           (const char (*)[21])"invalid type_index_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->type_index_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = &EcsBase<Scene,SceneCompBase,12u>::Iterator::operator*(void)const::dummy_pair;
  }
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 89: range 000000001721B066-000000001721B0F0
void __cdecl EcsBase<Avatar,AvatarCompBase,7u>::EcsBase(EcsBase<Avatar,AvatarCompBase,7> *const this)
{
  std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::vector(&this->comp_vec_);
  std::vector<unsigned int>::vector(&this->type_vec_);
  std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::reserve(&this->comp_vec_, 7uLL);
  std::vector<unsigned int>::reserve(&this->type_vec_, 7uLL);
};

// Line 89: range 00000000174991D6-0000000017499260
void __cdecl EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::EcsBase(
        EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const this)
{
  std::vector<std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase>>>::vector(&this->comp_vec_);
  std::vector<unsigned int>::vector(&this->type_vec_);
  std::vector<std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase>>>::reserve(&this->comp_vec_, 3uLL);
  std::vector<unsigned int>::reserve(&this->type_vec_, 3uLL);
};

// Line 89: range 0000000014629582-000000001462960C
void __cdecl EcsBase<Gadget,GadgetCompBase,28u>::EcsBase(EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::vector(&this->comp_vec_);
  std::vector<unsigned int>::vector(&this->type_vec_);
  std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::reserve(&this->comp_vec_, 0x1CuLL);
  std::vector<unsigned int>::reserve(&this->type_vec_, 0x1CuLL);
};

// Line 89: range 00000000146299C6-0000000014629A50
void __cdecl EcsBase<Home,HomeCompBase,12u>::EcsBase(EcsBase<Home,HomeCompBase,12> *const this)
{
  std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::vector(&this->comp_vec_);
  std::vector<unsigned int>::vector(&this->type_vec_);
  std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::reserve(&this->comp_vec_, 0xCuLL);
  std::vector<unsigned int>::reserve(&this->type_vec_, 0xCuLL);
};

// Line 89: range 0000000016686886-0000000016686910
void __cdecl EcsBase<Monster,MonsterCompBase,4u>::EcsBase(EcsBase<Monster,MonsterCompBase,4> *const this)
{
  std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase>>>::vector(&this->comp_vec_);
  std::vector<unsigned int>::vector(&this->type_vec_);
  std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase>>>::reserve(&this->comp_vec_, 4uLL);
  std::vector<unsigned int>::reserve(&this->type_vec_, 4uLL);
};

// Line 89: range 0000000017A0BE30-0000000017A0BEBA
void __cdecl EcsBase<Player,PlayerCompBase,71u>::EcsBase(EcsBase<Player,PlayerCompBase,71> *const this)
{
  std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::vector(&this->comp_vec_);
  std::vector<unsigned int>::vector(&this->type_vec_);
  std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::reserve(&this->comp_vec_, 0x47uLL);
  std::vector<unsigned int>::reserve(&this->type_vec_, 0x47uLL);
};

// Line 89: range 0000000015D4562A-0000000015D456B4
void __cdecl EcsBase<Scene,SceneCompBase,12u>::EcsBase(EcsBase<Scene,SceneCompBase,12> *const this)
{
  std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::vector(&this->comp_vec_);
  std::vector<unsigned int>::vector(&this->type_vec_);
  std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::reserve(&this->comp_vec_, 0xCuLL);
  std::vector<unsigned int>::reserve(&this->type_vec_, 0xCuLL);
};

// Line 89: range 0000000015D72DA2-0000000015D72E2C
void __cdecl EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2u>::EcsBase(
        EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2> *const this)
{
  std::vector<std::pair<unsigned int,std::shared_ptr<SceneMultistagePlayCompBase>>>::vector(&this->comp_vec_);
  std::vector<unsigned int>::vector(&this->type_vec_);
  std::vector<std::pair<unsigned int,std::shared_ptr<SceneMultistagePlayCompBase>>>::reserve(&this->comp_vec_, 2uLL);
  std::vector<unsigned int>::reserve(&this->type_vec_, 2uLL);
};

// Line 102: range 000000001668B13A-000000001668B523
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<BlossomChestComp,BlossomChestParam const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        BlossomChestParam *a2,
        const BlossomChestParam *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<BlossomChestComp,BlossomChestParam const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'BlossomChestComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<BlossomChestParam const&>(a2);
    common::tools::perf::make_shared<BlossomChestComp,Gadget &,BlossomChestParam const&>(
      (Gadget *)(v3 + 64),
      (const BlossomChestParam *)entity,
      v11,
      (const BlossomChestParam *)entity);
    if ( std::operator==<BlossomChestComp>(0LL, (const std::shared_ptr<BlossomChestComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<GadgetCompBase>::operator=<BlossomChestComp>(
        &comp_pair->second,
        (const std::shared_ptr<BlossomChestComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<BlossomChestComp>::~shared_ptr((std::shared_ptr<BlossomChestComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668AD50-000000001668B139
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<BossChestComp,ChestParam const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        ChestParam *a2,
        const ChestParam *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<BossChestComp,ChestParam const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'BossChestComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<ChestParam const&>(a2);
    common::tools::perf::make_shared<BossChestComp,Gadget &,ChestParam const&>(
      (Gadget *)(v3 + 64),
      (const ChestParam *)entity,
      v11,
      (const ChestParam *)entity);
    if ( std::operator==<BossChestComp>(0LL, (const std::shared_ptr<BossChestComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<GadgetCompBase>::operator=<BossChestComp>(
        &comp_pair->second,
        (const std::shared_ptr<BossChestComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<BossChestComp>::~shared_ptr((std::shared_ptr<BossChestComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668B524-000000001668B90D
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<ChestComp,ChestParam const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        ChestParam *a2,
        const ChestParam *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<ChestComp,ChestParam const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'ChestComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<ChestParam const&>(a2);
    common::tools::perf::make_shared<ChestComp,Gadget &,ChestParam const&>(
      (Gadget *)(v3 + 64),
      (const ChestParam *)entity,
      v11,
      (const ChestParam *)entity);
    if ( std::operator==<ChestComp>(0LL, (const std::shared_ptr<ChestComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<GadgetCompBase>::operator=<ChestComp>(
        &comp_pair->second,
        (const std::shared_ptr<ChestComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<ChestComp>::~shared_ptr((std::shared_ptr<ChestComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000166914E8-00000000166918D1
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<CoinCollectOperatorComp,CoinCollectOperatorParam const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        CoinCollectOperatorParam *a2,
        const CoinCollectOperatorParam *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<CoinCollectOperatorComp,CoinCollectOperatorParam const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 27;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 0x1A )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 0x1BuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](
                &this->comp_vec_,
                0x1AuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'CoinCollectOperatorComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<CoinCollectOperatorParam const&>(a2);
    common::tools::perf::make_shared<CoinCollectOperatorComp,Gadget &,CoinCollectOperatorParam const&>(
      (Gadget *)(v3 + 64),
      (const CoinCollectOperatorParam *)entity,
      v11,
      (const CoinCollectOperatorParam *)entity);
    if ( std::operator==<CoinCollectOperatorComp>(0LL, (const std::shared_ptr<CoinCollectOperatorComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 27;
      std::shared_ptr<GadgetCompBase>::operator=<CoinCollectOperatorComp>(
        &comp_pair->second,
        (const std::shared_ptr<CoinCollectOperatorComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<CoinCollectOperatorComp>::~shared_ptr((std::shared_ptr<CoinCollectOperatorComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668F0D6-000000001668F4BF
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<EchoShellComp,EchoShellParam const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        EchoShellParam *a2,
        const EchoShellParam *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<EchoShellComp,EchoShellParam const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'EchoShellComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<EchoShellParam const&>(a2);
    common::tools::perf::make_shared<EchoShellComp,Gadget &,EchoShellParam const&>(
      (Gadget *)(v3 + 64),
      (const EchoShellParam *)entity,
      v11,
      (const EchoShellParam *)entity);
    if ( std::operator==<EchoShellComp>(0LL, (const std::shared_ptr<EchoShellComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<GadgetCompBase>::operator=<EchoShellComp>(
        &comp_pair->second,
        (const std::shared_ptr<EchoShellComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<EchoShellComp>::~shared_ptr((std::shared_ptr<EchoShellComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668E8C6-000000001668ECAF
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<FoundationComp,FoundationParam const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        FoundationParam *a2,
        const FoundationParam *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<FoundationComp,FoundationParam const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'FoundationComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<FoundationParam const&>(a2);
    common::tools::perf::make_shared<FoundationComp,Gadget &,FoundationParam const&>(
      (Gadget *)(v3 + 64),
      (const FoundationParam *)entity,
      v11,
      (const FoundationParam *)entity);
    if ( std::operator==<FoundationComp>(0LL, (const std::shared_ptr<FoundationComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<GadgetCompBase>::operator=<FoundationComp>(
        &comp_pair->second,
        (const std::shared_ptr<FoundationComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<FoundationComp>::~shared_ptr((std::shared_ptr<FoundationComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668A540-000000001668A929
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetAbilityComp,AbilityGadgetParam const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        AbilityGadgetParam *a2,
        const AbilityGadgetParam *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetAbilityComp,AbilityGadgetParam const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 13;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 0xC )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 0xDuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 0xCuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'GadgetAbilityComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<AbilityGadgetParam const&>(a2);
    common::tools::perf::make_shared<GadgetAbilityComp,Gadget &,AbilityGadgetParam const&>(
      (Gadget *)(v3 + 64),
      (const AbilityGadgetParam *)entity,
      v11,
      (const AbilityGadgetParam *)entity);
    if ( std::operator==<GadgetAbilityComp>(0LL, (const std::shared_ptr<GadgetAbilityComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 13;
      std::shared_ptr<GadgetCompBase>::operator=<GadgetAbilityComp>(
        &comp_pair->second,
        (const std::shared_ptr<GadgetAbilityComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<GadgetAbilityComp>::~shared_ptr((std::shared_ptr<GadgetAbilityComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000016692598-0000000016692981
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetClientComp,ClientGadgetParam const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        ClientGadgetParam *a2,
        const ClientGadgetParam *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetClientComp,ClientGadgetParam const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 12;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 0xB )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 0xCuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 0xBuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'GadgetClientComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<ClientGadgetParam const&>(a2);
    common::tools::perf::make_shared<GadgetClientComp,Gadget &,ClientGadgetParam const&>(
      (Gadget *)(v3 + 64),
      (const ClientGadgetParam *)entity,
      v11,
      (const ClientGadgetParam *)entity);
    if ( std::operator==<GadgetClientComp>(0LL, (const std::shared_ptr<GadgetClientComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 12;
      std::shared_ptr<GadgetCompBase>::operator=<GadgetClientComp>(
        &comp_pair->second,
        (const std::shared_ptr<GadgetClientComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<GadgetClientComp>::~shared_ptr((std::shared_ptr<GadgetClientComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668DC90-000000001668E079
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetGeneralRewardComp,GadgetGeneralRewardParam const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        GadgetGeneralRewardParam *a2,
        const GadgetGeneralRewardParam *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetGeneralRewardComp,GadgetGeneralRewardParam const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'GadgetGeneralRewardComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<GadgetGeneralRewardParam const&>(a2);
    common::tools::perf::make_shared<GadgetGeneralRewardComp,Gadget &,GadgetGeneralRewardParam const&>(
      (Gadget *)(v3 + 64),
      (const GadgetGeneralRewardParam *)entity,
      v11,
      (const GadgetGeneralRewardParam *)entity);
    if ( std::operator==<GadgetGeneralRewardComp>(0LL, (const std::shared_ptr<GadgetGeneralRewardComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<GadgetCompBase>::operator=<GadgetGeneralRewardComp>(
        &comp_pair->second,
        (const std::shared_ptr<GadgetGeneralRewardComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<GadgetGeneralRewardComp>::~shared_ptr((std::shared_ptr<GadgetGeneralRewardComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000016689946-0000000016689D2F
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetInteractComp,unsigned int const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        std::remove_reference<unsigned int const&>::type *a2,
        const unsigned int *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetInteractComp,unsigned int const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'GadgetInteractComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<unsigned int const&>(a2);
    common::tools::perf::make_shared<GadgetInteractComp,Gadget &,unsigned int const&>(
      (Gadget *)(v3 + 64),
      (const unsigned int *)entity,
      v11,
      (const unsigned int *)entity);
    if ( std::operator==<GadgetInteractComp>(0LL, (const std::shared_ptr<GadgetInteractComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<GadgetCompBase>::operator=<GadgetInteractComp>(
        &comp_pair->second,
        (const std::shared_ptr<GadgetInteractComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<GadgetInteractComp>::~shared_ptr((std::shared_ptr<GadgetInteractComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668ECB0-000000001668F099
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetVehicleComp,std::shared_ptr<Player> const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        std::shared_ptr<Player> *a2,
        const std::shared_ptr<Player> *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetVehicleComp,std::shared_ptr<Player> const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 20;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 0x13 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 0x14uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](
                &this->comp_vec_,
                0x13uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'GadgetVehicleComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<std::shared_ptr<Player> const&>(a2);
    common::tools::perf::make_shared<GadgetVehicleComp,Gadget &,std::shared_ptr<Player> const&>(
      (Gadget *)(v3 + 64),
      (const std::shared_ptr<Player> *)entity,
      v11,
      (const std::shared_ptr<Player> *)entity);
    if ( std::operator==<GadgetVehicleComp>(0LL, (const std::shared_ptr<GadgetVehicleComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 20;
      std::shared_ptr<GadgetCompBase>::operator=<GadgetVehicleComp>(
        &comp_pair->second,
        (const std::shared_ptr<GadgetVehicleComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<GadgetVehicleComp>::~shared_ptr((std::shared_ptr<GadgetVehicleComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668A11A-000000001668A503
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<GatherComp,unsigned int const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        std::remove_reference<unsigned int const&>::type *a2,
        const unsigned int *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<GatherComp,unsigned int const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'GatherComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<unsigned int const&>(a2);
    common::tools::perf::make_shared<GatherComp,Gadget &,unsigned int const&>(
      (Gadget *)(v3 + 64),
      (const unsigned int *)entity,
      v11,
      (const unsigned int *)entity);
    if ( std::operator==<GatherComp>(0LL, (const std::shared_ptr<GatherComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<GadgetCompBase>::operator=<GatherComp>(
        &comp_pair->second,
        (const std::shared_ptr<GatherComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<GatherComp>::~shared_ptr((std::shared_ptr<GatherComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668A966-000000001668AD4F
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<HomeGatherComp,HomeGatherParam const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        HomeGatherParam *a2,
        const HomeGatherParam *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<HomeGatherComp,HomeGatherParam const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'HomeGatherComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<HomeGatherParam const&>(a2);
    common::tools::perf::make_shared<HomeGatherComp,Gadget &,HomeGatherParam const&>(
      (Gadget *)(v3 + 64),
      (const HomeGatherParam *)entity,
      v11,
      (const HomeGatherParam *)entity);
    if ( std::operator==<HomeGatherComp>(0LL, (const std::shared_ptr<HomeGatherComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<GadgetCompBase>::operator=<HomeGatherComp>(
        &comp_pair->second,
        (const std::shared_ptr<HomeGatherComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<HomeGatherComp>::~shared_ptr((std::shared_ptr<HomeGatherComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668E4DC-000000001668E8C5
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<MiracleRingComp,MiracleRingParam const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        MiracleRingParam *a2,
        const MiracleRingParam *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<MiracleRingComp,MiracleRingParam const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'MiracleRingComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<MiracleRingParam const&>(a2);
    common::tools::perf::make_shared<MiracleRingComp,Gadget &,MiracleRingParam const&>(
      (Gadget *)(v3 + 64),
      (const MiracleRingParam *)entity,
      v11,
      (const MiracleRingParam *)entity);
    if ( std::operator==<MiracleRingComp>(0LL, (const std::shared_ptr<MiracleRingComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<GadgetCompBase>::operator=<MiracleRingComp>(
        &comp_pair->second,
        (const std::shared_ptr<MiracleRingComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<MiracleRingComp>::~shared_ptr((std::shared_ptr<MiracleRingComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668D498-000000001668D881
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<MpPlayRewardComp,unsigned int const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        std::remove_reference<unsigned int const&>::type *a2,
        const unsigned int *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<MpPlayRewardComp,unsigned int const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'MpPlayRewardComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<unsigned int const&>(a2);
    common::tools::perf::make_shared<MpPlayRewardComp,Gadget &,unsigned int const&>(
      (Gadget *)(v3 + 64),
      (const unsigned int *)entity,
      v11,
      (const unsigned int *)entity);
    if ( std::operator==<MpPlayRewardComp>(0LL, (const std::shared_ptr<MpPlayRewardComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<GadgetCompBase>::operator=<MpPlayRewardComp>(
        &comp_pair->second,
        (const std::shared_ptr<MpPlayRewardComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<MpPlayRewardComp>::~shared_ptr((std::shared_ptr<MpPlayRewardComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668E0B6-000000001668E49F
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<OfferingComp,GadgetOfferingParam const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        GadgetOfferingParam *a2,
        const GadgetOfferingParam *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<OfferingComp,GadgetOfferingParam const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 17;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 0x10 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 0x11uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](
                &this->comp_vec_,
                0x10uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'OfferingComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<GadgetOfferingParam const&>(a2);
    common::tools::perf::make_shared<OfferingComp,Gadget &,GadgetOfferingParam const&>(
      (Gadget *)(v3 + 64),
      (const GadgetOfferingParam *)entity,
      v11,
      (const GadgetOfferingParam *)entity);
    if ( std::operator==<OfferingComp>(0LL, (const std::shared_ptr<OfferingComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 17;
      std::shared_ptr<GadgetCompBase>::operator=<OfferingComp>(
        &comp_pair->second,
        (const std::shared_ptr<OfferingComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<OfferingComp>::~shared_ptr((std::shared_ptr<OfferingComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000016689D30-000000001668A119
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<PlatformComp,PlatformParam const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        PlatformParam *a2,
        const PlatformParam *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<PlatformComp,PlatformParam const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 7;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 6 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 7uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 6uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlatformComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<PlatformParam const&>(a2);
    common::tools::perf::make_shared<PlatformComp,Gadget &,PlatformParam const&>(
      (Gadget *)(v3 + 64),
      (const PlatformParam *)entity,
      v11,
      (const PlatformParam *)entity);
    if ( std::operator==<PlatformComp>(0LL, (const std::shared_ptr<PlatformComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 7;
      std::shared_ptr<GadgetCompBase>::operator=<PlatformComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlatformComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<PlatformComp>::~shared_ptr((std::shared_ptr<PlatformComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000166900C6-00000000166904AF
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<RoguelikeOperatorComp,RoguelikeOperatorParam const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        RoguelikeOperatorParam *a2,
        const RoguelikeOperatorParam *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<RoguelikeOperatorComp,RoguelikeOperatorParam const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 24;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 0x17 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 0x18uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](
                &this->comp_vec_,
                0x17uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'RoguelikeOperatorComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<RoguelikeOperatorParam const&>(a2);
    common::tools::perf::make_shared<RoguelikeOperatorComp,Gadget &,RoguelikeOperatorParam const&>(
      (Gadget *)(v3 + 64),
      (const RoguelikeOperatorParam *)entity,
      v11,
      (const RoguelikeOperatorParam *)entity);
    if ( std::operator==<RoguelikeOperatorComp>(0LL, (const std::shared_ptr<RoguelikeOperatorComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 24;
      std::shared_ptr<GadgetCompBase>::operator=<RoguelikeOperatorComp>(
        &comp_pair->second,
        (const std::shared_ptr<RoguelikeOperatorComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<RoguelikeOperatorComp>::~shared_ptr((std::shared_ptr<RoguelikeOperatorComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668F4FC-000000001668F8E5
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<ScreenComp,ScreenParam const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        ScreenParam *a2,
        const ScreenParam *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<ScreenComp,ScreenParam const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 21;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 0x14 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 0x15uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](
                &this->comp_vec_,
                0x14uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'ScreenComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<ScreenParam const&>(a2);
    common::tools::perf::make_shared<ScreenComp,Gadget &,ScreenParam const&>(
      (Gadget *)(v3 + 64),
      (const ScreenParam *)entity,
      v11,
      (const ScreenParam *)entity);
    if ( std::operator==<ScreenComp>(0LL, (const std::shared_ptr<ScreenComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 21;
      std::shared_ptr<GadgetCompBase>::operator=<ScreenComp>(
        &comp_pair->second,
        (const std::shared_ptr<ScreenComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<ScreenComp>::~shared_ptr((std::shared_ptr<ScreenComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000166921AE-0000000016692597
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<TrifleComp,TrifleParam const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        TrifleParam *a2,
        const TrifleParam *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<TrifleComp,TrifleParam const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'TrifleComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<TrifleParam const&>(a2);
    common::tools::perf::make_shared<TrifleComp,Gadget &,TrifleParam const&>(
      (Gadget *)(v3 + 64),
      (const TrifleParam *)entity,
      v11,
      (const TrifleParam *)entity);
    if ( std::operator==<TrifleComp>(0LL, (const std::shared_ptr<TrifleComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<GadgetCompBase>::operator=<TrifleComp>(
        &comp_pair->second,
        (const std::shared_ptr<TrifleComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<TrifleComp>::~shared_ptr((std::shared_ptr<TrifleComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000016691CE0-00000000166920C9
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<WidgetGadgetComp,WidgetGadgetParam const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        WidgetGadgetParam *a2,
        const WidgetGadgetParam *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<WidgetGadgetComp,WidgetGadgetParam const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 25;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 0x18 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 0x19uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](
                &this->comp_vec_,
                0x18uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'WidgetGadgetComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<WidgetGadgetParam const&>(a2);
    common::tools::perf::make_shared<WidgetGadgetComp,Gadget &,WidgetGadgetParam const&>(
      (Gadget *)(v3 + 64),
      (const WidgetGadgetParam *)entity,
      v11,
      (const WidgetGadgetParam *)entity);
    if ( std::operator==<WidgetGadgetComp>(0LL, (const std::shared_ptr<WidgetGadgetComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 25;
      std::shared_ptr<GadgetCompBase>::operator=<WidgetGadgetComp>(
        &comp_pair->second,
        (const std::shared_ptr<WidgetGadgetComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<WidgetGadgetComp>::~shared_ptr((std::shared_ptr<WidgetGadgetComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668C0B2-000000001668C49B
__int64 __fastcall EcsBase<Gadget,GadgetCompBase,28u>::addComp<WorktopComp,WorktopParam const&>(
        EcsBase<Gadget,GadgetCompBase,28> *const this,
        WorktopParam *a2,
        const WorktopParam *args_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  unsigned int v10; // r14d
  Gadget *v11; // rax
  __int64 result; // rax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v3 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<WorktopComp,WorktopParam const&>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = 10;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 9 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 0xAuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 9uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"comp is duplicate, type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'WorktopComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v10 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    v11 = (Gadget *)std::forward<WorktopParam const&>(a2);
    common::tools::perf::make_shared<WorktopComp,Gadget &,WorktopParam const&>(
      (Gadget *)(v3 + 64),
      (const WorktopParam *)entity,
      v11,
      (const WorktopParam *)entity);
    if ( std::operator==<WorktopComp>(0LL, (const std::shared_ptr<WorktopComp> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v16,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 10;
      std::shared_ptr<GadgetCompBase>::operator=<WorktopComp>(
        &comp_pair->second,
        (const std::shared_ptr<WorktopComp> *)(v3 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v3 + 48));
      v10 = 0;
    }
    std::shared_ptr<WorktopComp>::~shared_ptr((std::shared_ptr<WorktopComp> *const)(v3 + 64));
  }
  result = v10;
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000016688EDA-00000000166892DC
__int64 __fastcall EcsBase<Monster,MonsterCompBase,4u>::addComp<MonsterFishComp,std::shared_ptr<Gadget> const&,unsigned int const&>(
        EcsBase<Monster,MonsterCompBase,4> *const this,
        std::shared_ptr<Gadget> *a2,
        std::remove_reference<unsigned int const&>::type *a3,
        const std::shared_ptr<Gadget> *args_0,
        const unsigned int *args_1)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r13
  unsigned int v12; // r14d
  Monster *v13; // r14
  const unsigned int *v14; // rax
  const std::shared_ptr<Gadget> *v15; // r8
  const unsigned int *v16; // r9
  __int64 result; // rax
  char *val; // [rsp+28h] [rbp-C8h] BYREF
  EcsBase<Monster,MonsterCompBase,4>::CompBasePair *comp_pair; // [rsp+30h] [rbp-C0h]
  Monster *entity; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+60h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v5 + 16) = EcsBase<Monster,MonsterCompBase,4u>::addComp<MonsterFishComp,std::shared_ptr<Gadget> const&,unsigned int const&>;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202178560;
  *(_DWORD *)(v5 + 48) = 2;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase>>>::size(&this->comp_vec_) <= 1 )
    std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase>>>::resize(&this->comp_vec_, 2uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase>>>::operator[](&this->comp_vec_, 1uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<MonsterCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v9 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v22,
           (const char (*)[25])"comp is duplicate, type:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'MonsterFishComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v12 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Monster, baseclass_1);
    v13 = (Monster *)std::forward<unsigned int const&>(a3);
    v14 = (const unsigned int *)std::forward<std::shared_ptr<Gadget> const&>(a2);
    common::tools::perf::make_shared<MonsterFishComp,Monster &,std::shared_ptr<Gadget> const&,unsigned int const&>(
      (Monster *)(v5 + 64),
      (const std::shared_ptr<Gadget> *)&this[-55].comp_vec_._M_impl._M_end_of_storage,
      v14,
      v13,
      v15,
      v16);
    if ( std::operator==<MonsterFishComp>(0LL, (const std::shared_ptr<MonsterFishComp> *)(v5 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v22,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v22);
      v12 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 2;
      std::shared_ptr<MonsterCompBase>::operator=<MonsterFishComp>(
        &comp_pair->second,
        (const std::shared_ptr<MonsterFishComp> *)(v5 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v5 + 48));
      v12 = 0;
    }
    std::shared_ptr<MonsterFishComp>::~shared_ptr((std::shared_ptr<MonsterFishComp> *const)(v5 + 64));
  }
  result = v12;
  if ( v23 == (char *)v5 )
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

// Line 102: range 000000001668931A-0000000016689740
__int64 __fastcall EcsBase<Monster,MonsterCompBase,4u>::addComp<MonsterFishtankFishComp,float const&,float const&,float const&>(
        EcsBase<Monster,MonsterCompBase,4> *const this,
        std::remove_reference<float const&>::type *a2,
        std::remove_reference<float const&>::type *a3,
        std::remove_reference<float const&>::type *a4,
        const float *args_0,
        const float *args_1)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r13
  unsigned int v13; // r14d
  Monster *v14; // r15
  const float *v15; // r14
  const float *v16; // rax
  const float *v17; // r9
  __int64 result; // rax
  const float *v19; // [rsp+0h] [rbp-100h]
  float *v20; // [rsp+8h] [rbp-F8h]
  char *val; // [rsp+38h] [rbp-C8h] BYREF
  EcsBase<Monster,MonsterCompBase,4>::CompBasePair *comp_pair; // [rsp+40h] [rbp-C0h]
  Monster *entity; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-B0h] BYREF
  float v27[36]; // [rsp+70h] [rbp-90h] BYREF

  v6 = (unsigned __int64)v27;
  v20 = v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v6 + 16) = EcsBase<Monster,MonsterCompBase,4u>::addComp<MonsterFishtankFishComp,float const&,float const&,float const&>;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -202178560;
  *(_DWORD *)(v6 + 48) = 3;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase>>>::size(&this->comp_vec_) <= 2 )
    std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase>>>::resize(&this->comp_vec_, 3uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase>>>::operator[](&this->comp_vec_, 2uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<MonsterCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v26,
            (const char (*)[25])"comp is duplicate, type:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v6 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'MonsterFishtankFishComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v12, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v13 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Monster, baseclass_1);
    v14 = (Monster *)std::forward<float const&>(a4);
    v15 = std::forward<float const&>(a3);
    v16 = std::forward<float const&>(a2);
    common::tools::perf::make_shared<MonsterFishtankFishComp,Monster &,float const&,float const&,float const&>(
      (Monster *)(v6 + 64),
      (const float *)&this[-55].comp_vec_._M_impl._M_end_of_storage,
      v16,
      v15,
      v14,
      v17,
      v19,
      v27);
    if ( std::operator==<MonsterFishtankFishComp>(0LL, (const std::shared_ptr<MonsterFishtankFishComp> *)(v6 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v26,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v26);
      v13 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 3;
      std::shared_ptr<MonsterCompBase>::operator=<MonsterFishtankFishComp>(
        &comp_pair->second,
        (const std::shared_ptr<MonsterFishtankFishComp> *)(v6 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v6 + 48));
      v13 = 0;
    }
    std::shared_ptr<MonsterFishtankFishComp>::~shared_ptr((std::shared_ptr<MonsterFishtankFishComp> *const)(v6 + 64));
  }
  result = v13;
  if ( v20 == (float *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000138D685A-00000000138D6C2A
int32_t __cdecl EcsBase<Avatar,AvatarCompBase,7u>::addComp<BuffComp>(EcsBase<Avatar,AvatarCompBase,7> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Avatar *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Avatar,AvatarCompBase,7u>::addComp<BuffComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 3;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::size(&this->comp_vec_) <= 2 )
    std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::resize(&this->comp_vec_, 3uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::operator[](&this->comp_vec_, 2uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<AvatarCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'BuffComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Avatar, baseclass_1);
    common::tools::perf::make_shared<BuffComp,Avatar &>(
      (Avatar *)(v1 + 64),
      (Avatar *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<BuffComp>(0LL, (const std::shared_ptr<BuffComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 3;
      std::shared_ptr<AvatarCompBase>::operator=<BuffComp>(
        &comp_pair->second,
        (const std::shared_ptr<BuffComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<BuffComp>::~shared_ptr((std::shared_ptr<BuffComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000138D60B8-00000000138D6487
int32_t __cdecl EcsBase<Avatar,AvatarCompBase,7u>::addComp<EquipComp>(EcsBase<Avatar,AvatarCompBase,7> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Avatar *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Avatar,AvatarCompBase,7u>::addComp<EquipComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 1;
  if ( !std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::size(&this->comp_vec_) )
    std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::resize(&this->comp_vec_, 1uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::operator[](&this->comp_vec_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<AvatarCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'EquipComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Avatar, baseclass_1);
    common::tools::perf::make_shared<EquipComp,Avatar &>(
      (Avatar *)(v1 + 64),
      (Avatar *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<EquipComp>(0LL, (const std::shared_ptr<EquipComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 1;
      std::shared_ptr<AvatarCompBase>::operator=<EquipComp>(
        &comp_pair->second,
        (const std::shared_ptr<EquipComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<EquipComp>::~shared_ptr((std::shared_ptr<EquipComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000138D73D0-00000000138D77A0
int32_t __cdecl EcsBase<Avatar,AvatarCompBase,7u>::addComp<ExtraPropComp>(EcsBase<Avatar,AvatarCompBase,7> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Avatar *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Avatar,AvatarCompBase,7u>::addComp<ExtraPropComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 6;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::size(&this->comp_vec_) <= 5 )
    std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::resize(&this->comp_vec_, 6uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::operator[](&this->comp_vec_, 5uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<AvatarCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'ExtraPropComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Avatar, baseclass_1);
    common::tools::perf::make_shared<ExtraPropComp,Avatar &>(
      (Avatar *)(v1 + 64),
      (Avatar *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<ExtraPropComp>(0LL, (const std::shared_ptr<ExtraPropComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 6;
      std::shared_ptr<AvatarCompBase>::operator=<ExtraPropComp>(
        &comp_pair->second,
        (const std::shared_ptr<ExtraPropComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<ExtraPropComp>::~shared_ptr((std::shared_ptr<ExtraPropComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000138D6FFE-00000000138D73CE
int32_t __cdecl EcsBase<Avatar,AvatarCompBase,7u>::addComp<FashionComp>(EcsBase<Avatar,AvatarCompBase,7> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Avatar *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Avatar,AvatarCompBase,7u>::addComp<FashionComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 5;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::size(&this->comp_vec_) <= 4 )
    std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::resize(&this->comp_vec_, 5uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::operator[](&this->comp_vec_, 4uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<AvatarCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'FashionComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Avatar, baseclass_1);
    common::tools::perf::make_shared<FashionComp,Avatar &>(
      (Avatar *)(v1 + 64),
      (Avatar *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<FashionComp>(0LL, (const std::shared_ptr<FashionComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 5;
      std::shared_ptr<AvatarCompBase>::operator=<FashionComp>(
        &comp_pair->second,
        (const std::shared_ptr<FashionComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<FashionComp>::~shared_ptr((std::shared_ptr<FashionComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000138D6488-00000000138D6858
int32_t __cdecl EcsBase<Avatar,AvatarCompBase,7u>::addComp<SkillComp>(EcsBase<Avatar,AvatarCompBase,7> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Avatar *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Avatar,AvatarCompBase,7u>::addComp<SkillComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 2;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::size(&this->comp_vec_) <= 1 )
    std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::resize(&this->comp_vec_, 2uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::operator[](&this->comp_vec_, 1uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<AvatarCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'SkillComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Avatar, baseclass_1);
    common::tools::perf::make_shared<SkillComp,Avatar &>(
      (Avatar *)(v1 + 64),
      (Avatar *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<SkillComp>(0LL, (const std::shared_ptr<SkillComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 2;
      std::shared_ptr<AvatarCompBase>::operator=<SkillComp>(
        &comp_pair->second,
        (const std::shared_ptr<SkillComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<SkillComp>::~shared_ptr((std::shared_ptr<SkillComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000138D6C2C-00000000138D6FFC
int32_t __cdecl EcsBase<Avatar,AvatarCompBase,7u>::addComp<TalentComp>(EcsBase<Avatar,AvatarCompBase,7> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Avatar *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Avatar,AvatarCompBase,7u>::addComp<TalentComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<AvatarCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'TalentComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Avatar, baseclass_1);
    common::tools::perf::make_shared<TalentComp,Avatar &>(
      (Avatar *)(v1 + 64),
      (Avatar *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<TalentComp>(0LL, (const std::shared_ptr<TalentComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<AvatarCompBase>::operator=<TalentComp>(
        &comp_pair->second,
        (const std::shared_ptr<TalentComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<TalentComp>::~shared_ptr((std::shared_ptr<TalentComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001624FB04-000000001624FED4
int32_t __cdecl EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::addComp<ExpeditionComp>(
        EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<FormalAvatar,FormalAvatarCompBase,3>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  FormalAvatar *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::addComp<ExpeditionComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 2;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase>>>::size(&this->comp_vec_) <= 1 )
    std::vector<std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase>>>::resize(&this->comp_vec_, 2uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase>>>::operator[](
                &this->comp_vec_,
                1uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<FormalAvatarCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'ExpeditionComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, FormalAvatar, baseclass_1);
    common::tools::perf::make_shared<ExpeditionComp,FormalAvatar &>(
      (FormalAvatar *)(v1 + 64),
      (FormalAvatar *)&this[-61].type_vec_);
    if ( std::operator==<ExpeditionComp>(0LL, (const std::shared_ptr<ExpeditionComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 2;
      std::shared_ptr<FormalAvatarCompBase>::operator=<ExpeditionComp>(
        &comp_pair->second,
        (const std::shared_ptr<ExpeditionComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<ExpeditionComp>::~shared_ptr((std::shared_ptr<ExpeditionComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001624F734-000000001624FB03
int32_t __cdecl EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::addComp<FetterComp>(
        EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<FormalAvatar,FormalAvatarCompBase,3>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  FormalAvatar *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::addComp<FetterComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 1;
  if ( !std::vector<std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase>>>::size(&this->comp_vec_) )
    std::vector<std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase>>>::resize(&this->comp_vec_, 1uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase>>>::operator[](
                &this->comp_vec_,
                0LL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<FormalAvatarCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'FetterComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, FormalAvatar, baseclass_1);
    common::tools::perf::make_shared<FetterComp,FormalAvatar &>(
      (FormalAvatar *)(v1 + 64),
      (FormalAvatar *)&this[-61].type_vec_);
    if ( std::operator==<FetterComp>(0LL, (const std::shared_ptr<FetterComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 1;
      std::shared_ptr<FormalAvatarCompBase>::operator=<FetterComp>(
        &comp_pair->second,
        (const std::shared_ptr<FetterComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<FetterComp>::~shared_ptr((std::shared_ptr<FetterComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000166904EC-00000000166908BC
int32_t __cdecl EcsBase<Gadget,GadgetCompBase,28u>::addComp<ActivityInteractComp>(
        EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<ActivityInteractComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'ActivityInteractComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    common::tools::perf::make_shared<ActivityInteractComp,Gadget &>(
      (Gadget *)(v1 + 64),
      (Gadget *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<ActivityInteractComp>(0LL, (const std::shared_ptr<ActivityInteractComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<GadgetCompBase>::operator=<ActivityInteractComp>(
        &comp_pair->second,
        (const std::shared_ptr<ActivityInteractComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<ActivityInteractComp>::~shared_ptr((std::shared_ptr<ActivityInteractComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668BCE0-000000001668C0B0
int32_t __cdecl EcsBase<Gadget,GadgetCompBase,28u>::addComp<CrystalComp>(EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<CrystalComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 6;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 5 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 6uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 5uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'CrystalComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    common::tools::perf::make_shared<CrystalComp,Gadget &>(
      (Gadget *)(v1 + 64),
      (Gadget *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<CrystalComp>(0LL, (const std::shared_ptr<CrystalComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 6;
      std::shared_ptr<GadgetCompBase>::operator=<CrystalComp>(
        &comp_pair->second,
        (const std::shared_ptr<CrystalComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<CrystalComp>::~shared_ptr((std::shared_ptr<CrystalComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668FCB8-0000000016690088
int32_t __cdecl EcsBase<Gadget,GadgetCompBase,28u>::addComp<CustomGadgetComp>(
        EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<CustomGadgetComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 23;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 0x16 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 0x17uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](
                &this->comp_vec_,
                0x16uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'CustomGadgetComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    common::tools::perf::make_shared<CustomGadgetComp,Gadget &>(
      (Gadget *)(v1 + 64),
      (Gadget *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<CustomGadgetComp>(0LL, (const std::shared_ptr<CustomGadgetComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 23;
      std::shared_ptr<GadgetCompBase>::operator=<CustomGadgetComp>(
        &comp_pair->second,
        (const std::shared_ptr<CustomGadgetComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<CustomGadgetComp>::~shared_ptr((std::shared_ptr<CustomGadgetComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000166910DA-00000000166914AA
int32_t __cdecl EcsBase<Gadget,GadgetCompBase,28u>::addComp<DeshretObeliskComp>(
        EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<DeshretObeliskComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'DeshretObeliskComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    common::tools::perf::make_shared<DeshretObeliskComp,Gadget &>(
      (Gadget *)(v1 + 64),
      (Gadget *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<DeshretObeliskComp>(0LL, (const std::shared_ptr<DeshretObeliskComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<GadgetCompBase>::operator=<DeshretObeliskComp>(
        &comp_pair->second,
        (const std::shared_ptr<DeshretObeliskComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<DeshretObeliskComp>::~shared_ptr((std::shared_ptr<DeshretObeliskComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668F8E6-000000001668FCB6
int32_t __cdecl EcsBase<Gadget,GadgetCompBase,28u>::addComp<FishPoolComp>(
        EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<FishPoolComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 22;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 0x15 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 0x16uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](
                &this->comp_vec_,
                0x15uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'FishPoolComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    common::tools::perf::make_shared<FishPoolComp,Gadget &>(
      (Gadget *)(v1 + 64),
      (Gadget *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<FishPoolComp>(0LL, (const std::shared_ptr<FishPoolComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 22;
      std::shared_ptr<GadgetCompBase>::operator=<FishPoolComp>(
        &comp_pair->second,
        (const std::shared_ptr<FishPoolComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<FishPoolComp>::~shared_ptr((std::shared_ptr<FishPoolComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668C86E-000000001668CC3E
int32_t __cdecl EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetEnvAnimalComp>(
        EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetEnvAnimalComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'GadgetEnvAnimalComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    common::tools::perf::make_shared<GadgetEnvAnimalComp,Gadget &>(
      (Gadget *)(v1 + 64),
      (Gadget *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<GadgetEnvAnimalComp>(0LL, (const std::shared_ptr<GadgetEnvAnimalComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<GadgetCompBase>::operator=<GadgetEnvAnimalComp>(
        &comp_pair->second,
        (const std::shared_ptr<GadgetEnvAnimalComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<GadgetEnvAnimalComp>::~shared_ptr((std::shared_ptr<GadgetEnvAnimalComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000166918D2-0000000016691CA2
int32_t __cdecl EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetPlayComp>(
        EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetPlayComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 16;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 0xF )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 0x10uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 0xFuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'GadgetPlayComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    common::tools::perf::make_shared<GadgetPlayComp,Gadget &>(
      (Gadget *)(v1 + 64),
      (Gadget *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<GadgetPlayComp>(0LL, (const std::shared_ptr<GadgetPlayComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 16;
      std::shared_ptr<GadgetCompBase>::operator=<GadgetPlayComp>(
        &comp_pair->second,
        (const std::shared_ptr<GadgetPlayComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<GadgetPlayComp>::~shared_ptr((std::shared_ptr<GadgetPlayComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668C49C-000000001668C86C
int32_t __cdecl EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetSealComp>(
        EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetSealComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 11;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 0xA )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 0xBuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 0xAuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'GadgetSealComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    common::tools::perf::make_shared<GadgetSealComp,Gadget &>(
      (Gadget *)(v1 + 64),
      (Gadget *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<GadgetSealComp>(0LL, (const std::shared_ptr<GadgetSealComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 11;
      std::shared_ptr<GadgetCompBase>::operator=<GadgetSealComp>(
        &comp_pair->second,
        (const std::shared_ptr<GadgetSealComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<GadgetSealComp>::~shared_ptr((std::shared_ptr<GadgetSealComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668D8BE-000000001668DC8E
int32_t __cdecl EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetViewComp>(
        EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetViewComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'GadgetViewComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    common::tools::perf::make_shared<GadgetViewComp,Gadget &>(
      (Gadget *)(v1 + 64),
      (Gadget *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<GadgetViewComp>(0LL, (const std::shared_ptr<GadgetViewComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<GadgetCompBase>::operator=<GadgetViewComp>(
        &comp_pair->second,
        (const std::shared_ptr<GadgetViewComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<GadgetViewComp>::~shared_ptr((std::shared_ptr<GadgetViewComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668B90E-000000001668BCDE
int32_t __cdecl EcsBase<Gadget,GadgetCompBase,28u>::addComp<GearComp>(EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<GearComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 5;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 4 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 5uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 4uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'GearComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    common::tools::perf::make_shared<GearComp,Gadget &>(
      (Gadget *)(v1 + 64),
      (Gadget *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<GearComp>(0LL, (const std::shared_ptr<GearComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 5;
      std::shared_ptr<GadgetCompBase>::operator=<GearComp>(
        &comp_pair->second,
        (const std::shared_ptr<GearComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<GearComp>::~shared_ptr((std::shared_ptr<GearComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000016690CCC-000000001669109C
int32_t __cdecl EcsBase<Gadget,GadgetCompBase,28u>::addComp<NightCrowComp>(
        EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<NightCrowComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 26;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 0x19 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 0x1AuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](
                &this->comp_vec_,
                0x19uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'NightCrowComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    common::tools::perf::make_shared<NightCrowComp,Gadget &>(
      (Gadget *)(v1 + 64),
      (Gadget *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<NightCrowComp>(0LL, (const std::shared_ptr<NightCrowComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 26;
      std::shared_ptr<GadgetCompBase>::operator=<NightCrowComp>(
        &comp_pair->second,
        (const std::shared_ptr<NightCrowComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<NightCrowComp>::~shared_ptr((std::shared_ptr<NightCrowComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668CC7C-000000001668D04C
int32_t __cdecl EcsBase<Gadget,GadgetCompBase,28u>::addComp<QuestGadgetComp>(
        EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<QuestGadgetComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'QuestGadgetComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    common::tools::perf::make_shared<QuestGadgetComp,Gadget &>(
      (Gadget *)(v1 + 64),
      (Gadget *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<QuestGadgetComp>(0LL, (const std::shared_ptr<QuestGadgetComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<GadgetCompBase>::operator=<QuestGadgetComp>(
        &comp_pair->second,
        (const std::shared_ptr<QuestGadgetComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<QuestGadgetComp>::~shared_ptr((std::shared_ptr<QuestGadgetComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001668D08A-000000001668D45A
int32_t __cdecl EcsBase<Gadget,GadgetCompBase,28u>::addComp<StatueComp>(EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<StatueComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'StatueComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    common::tools::perf::make_shared<StatueComp,Gadget &>(
      (Gadget *)(v1 + 64),
      (Gadget *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<StatueComp>(0LL, (const std::shared_ptr<StatueComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<GadgetCompBase>::operator=<StatueComp>(
        &comp_pair->second,
        (const std::shared_ptr<StatueComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<StatueComp>::~shared_ptr((std::shared_ptr<StatueComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000166908FA-0000000016690CCA
int32_t __cdecl EcsBase<Gadget,GadgetCompBase,28u>::addComp<UIInteractComp>(
        EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Gadget *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<UIInteractComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<GadgetCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'UIInteractComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Gadget, baseclass_1);
    common::tools::perf::make_shared<UIInteractComp,Gadget &>(
      (Gadget *)(v1 + 64),
      (Gadget *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<UIInteractComp>(0LL, (const std::shared_ptr<UIInteractComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<GadgetCompBase>::operator=<UIInteractComp>(
        &comp_pair->second,
        (const std::shared_ptr<UIInteractComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<UIInteractComp>::~shared_ptr((std::shared_ptr<UIInteractComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001464390A-0000000014643CD8
int32_t __cdecl EcsBase<Home,HomeCompBase,12u>::addComp<HomeBlueprintComp>(EcsBase<Home,HomeCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Home *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Home,HomeCompBase,12u>::addComp<HomeBlueprintComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 11;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(&this->comp_vec_) <= 0xA )
    std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::resize(&this->comp_vec_, 0xBuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](&this->comp_vec_, 0xAuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<HomeCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'HomeBlueprintComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Home, baseclass_2);
    common::tools::perf::make_shared<HomeBlueprintComp,Home &>((Home *)(v1 + 64), (Home *)&this[-1].type_vec_);
    if ( std::operator==<HomeBlueprintComp>(0LL, (const std::shared_ptr<HomeBlueprintComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 11;
      std::shared_ptr<HomeCompBase>::operator=<HomeBlueprintComp>(
        &comp_pair->second,
        (const std::shared_ptr<HomeBlueprintComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<HomeBlueprintComp>::~shared_ptr((std::shared_ptr<HomeBlueprintComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000014642D9A-0000000014643168
int32_t __cdecl EcsBase<Home,HomeCompBase,12u>::addComp<HomeCustomFurnitureComp>(
        EcsBase<Home,HomeCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Home *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Home,HomeCompBase,12u>::addComp<HomeCustomFurnitureComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 8;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(&this->comp_vec_) <= 7 )
    std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::resize(&this->comp_vec_, 8uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](&this->comp_vec_, 7uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<HomeCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'HomeCustomFurnitureComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Home, baseclass_2);
    common::tools::perf::make_shared<HomeCustomFurnitureComp,Home &>((Home *)(v1 + 64), (Home *)&this[-1].type_vec_);
    if ( std::operator==<HomeCustomFurnitureComp>(0LL, (const std::shared_ptr<HomeCustomFurnitureComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 8;
      std::shared_ptr<HomeCompBase>::operator=<HomeCustomFurnitureComp>(
        &comp_pair->second,
        (const std::shared_ptr<HomeCustomFurnitureComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<HomeCustomFurnitureComp>::~shared_ptr((std::shared_ptr<HomeCustomFurnitureComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000146429CA-0000000014642D98
int32_t __cdecl EcsBase<Home,HomeCompBase,12u>::addComp<HomeFishFarmingComp>(EcsBase<Home,HomeCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Home *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Home,HomeCompBase,12u>::addComp<HomeFishFarmingComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 7;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(&this->comp_vec_) <= 6 )
    std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::resize(&this->comp_vec_, 7uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](&this->comp_vec_, 6uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<HomeCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'HomeFishFarmingComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Home, baseclass_2);
    common::tools::perf::make_shared<HomeFishFarmingComp,Home &>((Home *)(v1 + 64), (Home *)&this[-1].type_vec_);
    if ( std::operator==<HomeFishFarmingComp>(0LL, (const std::shared_ptr<HomeFishFarmingComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 7;
      std::shared_ptr<HomeCompBase>::operator=<HomeFishFarmingComp>(
        &comp_pair->second,
        (const std::shared_ptr<HomeFishFarmingComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<HomeFishFarmingComp>::~shared_ptr((std::shared_ptr<HomeFishFarmingComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000014641E5A-0000000014642228
int32_t __cdecl EcsBase<Home,HomeCompBase,12u>::addComp<HomeFurnitureMakeComp>(
        EcsBase<Home,HomeCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Home *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Home,HomeCompBase,12u>::addComp<HomeFurnitureMakeComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<HomeCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'HomeFurnitureMakeComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Home, baseclass_2);
    common::tools::perf::make_shared<HomeFurnitureMakeComp,Home &>((Home *)(v1 + 64), (Home *)&this[-1].type_vec_);
    if ( std::operator==<HomeFurnitureMakeComp>(0LL, (const std::shared_ptr<HomeFurnitureMakeComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<HomeCompBase>::operator=<HomeFurnitureMakeComp>(
        &comp_pair->second,
        (const std::shared_ptr<HomeFurnitureMakeComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<HomeFurnitureMakeComp>::~shared_ptr((std::shared_ptr<HomeFurnitureMakeComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001464353A-0000000014643908
int32_t __cdecl EcsBase<Home,HomeCompBase,12u>::addComp<HomeGroupRecordComp>(EcsBase<Home,HomeCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Home *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Home,HomeCompBase,12u>::addComp<HomeGroupRecordComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 10;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(&this->comp_vec_) <= 9 )
    std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::resize(&this->comp_vec_, 0xAuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](&this->comp_vec_, 9uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<HomeCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'HomeGroupRecordComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Home, baseclass_2);
    common::tools::perf::make_shared<HomeGroupRecordComp,Home &>((Home *)(v1 + 64), (Home *)&this[-1].type_vec_);
    if ( std::operator==<HomeGroupRecordComp>(0LL, (const std::shared_ptr<HomeGroupRecordComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 10;
      std::shared_ptr<HomeCompBase>::operator=<HomeGroupRecordComp>(
        &comp_pair->second,
        (const std::shared_ptr<HomeGroupRecordComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<HomeGroupRecordComp>::~shared_ptr((std::shared_ptr<HomeGroupRecordComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001464222A-00000000146425F8
int32_t __cdecl EcsBase<Home,HomeCompBase,12u>::addComp<HomeLimitedShopComp>(EcsBase<Home,HomeCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Home *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Home,HomeCompBase,12u>::addComp<HomeLimitedShopComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 5;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(&this->comp_vec_) <= 4 )
    std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::resize(&this->comp_vec_, 5uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](&this->comp_vec_, 4uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<HomeCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'HomeLimitedShopComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Home, baseclass_2);
    common::tools::perf::make_shared<HomeLimitedShopComp,Home &>((Home *)(v1 + 64), (Home *)&this[-1].type_vec_);
    if ( std::operator==<HomeLimitedShopComp>(0LL, (const std::shared_ptr<HomeLimitedShopComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 5;
      std::shared_ptr<HomeCompBase>::operator=<HomeLimitedShopComp>(
        &comp_pair->second,
        (const std::shared_ptr<HomeLimitedShopComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<HomeLimitedShopComp>::~shared_ptr((std::shared_ptr<HomeLimitedShopComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000014641A8A-0000000014641E58
int32_t __cdecl EcsBase<Home,HomeCompBase,12u>::addComp<HomeOfflineMsgComp>(EcsBase<Home,HomeCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Home *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Home,HomeCompBase,12u>::addComp<HomeOfflineMsgComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 3;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(&this->comp_vec_) <= 2 )
    std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::resize(&this->comp_vec_, 3uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](&this->comp_vec_, 2uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<HomeCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'HomeOfflineMsgComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Home, baseclass_2);
    common::tools::perf::make_shared<HomeOfflineMsgComp,Home &>((Home *)(v1 + 64), (Home *)&this[-1].type_vec_);
    if ( std::operator==<HomeOfflineMsgComp>(0LL, (const std::shared_ptr<HomeOfflineMsgComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 3;
      std::shared_ptr<HomeCompBase>::operator=<HomeOfflineMsgComp>(
        &comp_pair->second,
        (const std::shared_ptr<HomeOfflineMsgComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<HomeOfflineMsgComp>::~shared_ptr((std::shared_ptr<HomeOfflineMsgComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001464316A-0000000014643538
int32_t __cdecl EcsBase<Home,HomeCompBase,12u>::addComp<HomePictureFrameComp>(
        EcsBase<Home,HomeCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Home *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Home,HomeCompBase,12u>::addComp<HomePictureFrameComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 9;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(&this->comp_vec_) <= 8 )
    std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::resize(&this->comp_vec_, 9uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](&this->comp_vec_, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<HomeCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'HomePictureFrameComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Home, baseclass_2);
    common::tools::perf::make_shared<HomePictureFrameComp,Home &>((Home *)(v1 + 64), (Home *)&this[-1].type_vec_);
    if ( std::operator==<HomePictureFrameComp>(0LL, (const std::shared_ptr<HomePictureFrameComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 9;
      std::shared_ptr<HomeCompBase>::operator=<HomePictureFrameComp>(
        &comp_pair->second,
        (const std::shared_ptr<HomePictureFrameComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<HomePictureFrameComp>::~shared_ptr((std::shared_ptr<HomePictureFrameComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000146425FA-00000000146429C8
int32_t __cdecl EcsBase<Home,HomeCompBase,12u>::addComp<HomePlantComp>(EcsBase<Home,HomeCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Home *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Home,HomeCompBase,12u>::addComp<HomePlantComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 6;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(&this->comp_vec_) <= 5 )
    std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::resize(&this->comp_vec_, 6uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](&this->comp_vec_, 5uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<HomeCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'HomePlantComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Home, baseclass_2);
    common::tools::perf::make_shared<HomePlantComp,Home &>((Home *)(v1 + 64), (Home *)&this[-1].type_vec_);
    if ( std::operator==<HomePlantComp>(0LL, (const std::shared_ptr<HomePlantComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 6;
      std::shared_ptr<HomeCompBase>::operator=<HomePlantComp>(
        &comp_pair->second,
        (const std::shared_ptr<HomePlantComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<HomePlantComp>::~shared_ptr((std::shared_ptr<HomePlantComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000146416BA-0000000014641A88
int32_t __cdecl EcsBase<Home,HomeCompBase,12u>::addComp<HomeSceneComp>(EcsBase<Home,HomeCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Home *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Home,HomeCompBase,12u>::addComp<HomeSceneComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 2;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(&this->comp_vec_) <= 1 )
    std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::resize(&this->comp_vec_, 2uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](&this->comp_vec_, 1uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<HomeCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'HomeSceneComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Home, baseclass_2);
    common::tools::perf::make_shared<HomeSceneComp,Home &>((Home *)(v1 + 64), (Home *)&this[-1].type_vec_);
    if ( std::operator==<HomeSceneComp>(0LL, (const std::shared_ptr<HomeSceneComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 2;
      std::shared_ptr<HomeCompBase>::operator=<HomeSceneComp>(
        &comp_pair->second,
        (const std::shared_ptr<HomeSceneComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<HomeSceneComp>::~shared_ptr((std::shared_ptr<HomeSceneComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000016688B0A-0000000016688ED9
int32_t __cdecl EcsBase<Monster,MonsterCompBase,4u>::addComp<MonsterEnvAnimalComp>(
        EcsBase<Monster,MonsterCompBase,4> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Monster,MonsterCompBase,4>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Monster *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Monster,MonsterCompBase,4u>::addComp<MonsterEnvAnimalComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 1;
  if ( !std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase>>>::size(&this->comp_vec_) )
    std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase>>>::resize(&this->comp_vec_, 1uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase>>>::operator[](&this->comp_vec_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<MonsterCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'MonsterEnvAnimalComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Monster, baseclass_1);
    common::tools::perf::make_shared<MonsterEnvAnimalComp,Monster &>(
      (Monster *)(v1 + 64),
      (Monster *)&this[-55].comp_vec_._M_impl._M_end_of_storage);
    if ( std::operator==<MonsterEnvAnimalComp>(0LL, (const std::shared_ptr<MonsterEnvAnimalComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 1;
      std::shared_ptr<MonsterCompBase>::operator=<MonsterEnvAnimalComp>(
        &comp_pair->second,
        (const std::shared_ptr<MonsterEnvAnimalComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<MonsterEnvAnimalComp>::~shared_ptr((std::shared_ptr<MonsterEnvAnimalComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722AC00-000000001722AFCE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerAbilityGroupComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerAbilityGroupComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 38;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x25 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x26uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x25uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerAbilityGroupComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerAbilityGroupComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerAbilityGroupComp>(0LL, (const std::shared_ptr<PlayerAbilityGroupComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 38;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerAbilityGroupComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerAbilityGroupComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerAbilityGroupComp>::~shared_ptr((std::shared_ptr<PlayerAbilityGroupComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017229CC0-000000001722A08E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerAchievementComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerAchievementComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 36;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x23 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x24uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x23uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerAchievementComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerAchievementComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerAchievementComp>(0LL, (const std::shared_ptr<PlayerAchievementComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 36;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerAchievementComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerAchievementComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerAchievementComp>::~shared_ptr((std::shared_ptr<PlayerAchievementComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000172272D0-000000001722769E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerActivityComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerActivityComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 24;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x17 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x18uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x17uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerActivityComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerActivityComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerActivityComp>(0LL, (const std::shared_ptr<PlayerActivityComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 24;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerActivityComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerActivityComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerActivityComp>::~shared_ptr((std::shared_ptr<PlayerActivityComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017231E60-000000001723222E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerAranaraCollectionComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerAranaraCollectionComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 69;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x44 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x45uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x44uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerAranaraCollectionComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerAranaraCollectionComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerAranaraCollectionComp>(
           0LL,
           (const std::shared_ptr<PlayerAranaraCollectionComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 69;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerAranaraCollectionComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerAranaraCollectionComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerAranaraCollectionComp>::~shared_ptr((std::shared_ptr<PlayerAranaraCollectionComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017222E30-00000000172231FE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerAvatarComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerAvatarComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 2;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 1 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 2uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](&this->comp_vec_, 1uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerAvatarComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerAvatarComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerAvatarComp>(0LL, (const std::shared_ptr<PlayerAvatarComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 2;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerAvatarComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerAvatarComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerAvatarComp>::~shared_ptr((std::shared_ptr<PlayerAvatarComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000172222C2-000000001722268F
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerBasicComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerBasicComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 1;
  if ( !std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 1uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](&this->comp_vec_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerBasicComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerBasicComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerBasicComp>(0LL, (const std::shared_ptr<PlayerBasicComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 1;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerBasicComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerBasicComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerBasicComp>::~shared_ptr((std::shared_ptr<PlayerBasicComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017228D80-000000001722914E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerBattlePassComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerBattlePassComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 29;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x1C )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x1DuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x1CuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerBattlePassComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerBattlePassComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerBattlePassComp>(0LL, (const std::shared_ptr<PlayerBattlePassComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 29;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerBattlePassComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerBattlePassComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerBattlePassComp>::~shared_ptr((std::shared_ptr<PlayerBattlePassComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000172289B0-0000000017228D7E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerBlossomComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerBlossomComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 30;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x1D )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x1EuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x1DuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerBlossomComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerBlossomComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerBlossomComp>(0LL, (const std::shared_ptr<PlayerBlossomComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 30;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerBlossomComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerBlossomComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerBlossomComp>::~shared_ptr((std::shared_ptr<PlayerBlossomComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017224510-00000000172248DE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerBoredComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerBoredComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 11;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0xA )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0xBuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](&this->comp_vec_, 0xAuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerBoredComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerBoredComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerBoredComp>(0LL, (const std::shared_ptr<PlayerBoredComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 11;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerBoredComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerBoredComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerBoredComp>::~shared_ptr((std::shared_ptr<PlayerBoredComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017230780-0000000017230B4E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerCityComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerCityComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 63;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x3E )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x3FuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x3EuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerCityComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerCityComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerCityComp>(0LL, (const std::shared_ptr<PlayerCityComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 63;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerCityComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerCityComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerCityComp>::~shared_ptr((std::shared_ptr<PlayerCityComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722A090-000000001722A45E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerCodexComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerCodexComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 35;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x22 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x23uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x22uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerCodexComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerCodexComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerCodexComp>(0LL, (const std::shared_ptr<PlayerCodexComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 35;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerCodexComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerCodexComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerCodexComp>::~shared_ptr((std::shared_ptr<PlayerCodexComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722BF10-000000001722C2DE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerCombineComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerCombineComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 44;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x2B )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x2CuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x2BuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerCombineComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerCombineComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerCombineComp>(0LL, (const std::shared_ptr<PlayerCombineComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 44;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerCombineComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerCombineComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerCombineComp>::~shared_ptr((std::shared_ptr<PlayerCombineComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017224CB0-000000001722507E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerCookComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerCookComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 13;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0xC )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0xDuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](&this->comp_vec_, 0xCuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerCookComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerCookComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerCookComp>(0LL, (const std::shared_ptr<PlayerCookComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 13;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerCookComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerCookComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerCookComp>::~shared_ptr((std::shared_ptr<PlayerCookComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722B770-000000001722BB3E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerCoopComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerCoopComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 42;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x29 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x2AuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x29uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerCoopComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerCoopComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerCoopComp>(0LL, (const std::shared_ptr<PlayerCoopComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 42;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerCoopComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerCoopComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerCoopComp>::~shared_ptr((std::shared_ptr<PlayerCoopComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017230B50-0000000017230F1E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerCustomDungeonComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerCustomDungeonComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 64;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x3F )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x40uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x3FuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerCustomDungeonComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerCustomDungeonComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerCustomDungeonComp>(0LL, (const std::shared_ptr<PlayerCustomDungeonComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 64;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerCustomDungeonComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerCustomDungeonComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerCustomDungeonComp>::~shared_ptr((std::shared_ptr<PlayerCustomDungeonComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017225BF0-0000000017225FBE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerDailyTaskComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerDailyTaskComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 18;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x11 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x12uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x11uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerDailyTaskComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerDailyTaskComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerDailyTaskComp>(0LL, (const std::shared_ptr<PlayerDailyTaskComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 18;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerDailyTaskComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerDailyTaskComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerDailyTaskComp>::~shared_ptr((std::shared_ptr<PlayerDailyTaskComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722D9C0-000000001722DD8E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerDraftComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerDraftComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 51;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x32 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x33uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x32uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerDraftComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerDraftComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerDraftComp>(0LL, (const std::shared_ptr<PlayerDraftComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 51;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerDraftComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerDraftComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerDraftComp>::~shared_ptr((std::shared_ptr<PlayerDraftComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017224140-000000001722450E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerDungeonComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerDungeonComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 8;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 7 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 8uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](&this->comp_vec_, 7uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerDungeonComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerDungeonComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerDungeonComp>(0LL, (const std::shared_ptr<PlayerDungeonComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 8;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerDungeonComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerDungeonComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerDungeonComp>::~shared_ptr((std::shared_ptr<PlayerDungeonComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722F0A0-000000001722F46E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerExhibitionComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerExhibitionComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 57;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x38 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x39uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x38uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerExhibitionComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerExhibitionComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerExhibitionComp>(0LL, (const std::shared_ptr<PlayerExhibitionComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 57;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerExhibitionComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerExhibitionComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerExhibitionComp>::~shared_ptr((std::shared_ptr<PlayerExhibitionComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000172303B0-000000001723077E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerFireworksComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerFireworksComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 62;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x3D )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x3EuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x3DuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerFireworksComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerFireworksComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerFireworksComp>(0LL, (const std::shared_ptr<PlayerFireworksComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 62;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerFireworksComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerFireworksComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerFireworksComp>::~shared_ptr((std::shared_ptr<PlayerFireworksComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722FFE0-00000000172303AE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerFishingComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerFishingComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 61;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x3C )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x3DuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x3CuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerFishingComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerFishingComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerFishingComp>(0LL, (const std::shared_ptr<PlayerFishingComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 61;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerFishingComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerFishingComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerFishingComp>::~shared_ptr((std::shared_ptr<PlayerFishingComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017226B30-0000000017226EFE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerForgeComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerForgeComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 22;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x15 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x16uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x15uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerForgeComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerForgeComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerForgeComp>(0LL, (const std::shared_ptr<PlayerForgeComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 22;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerForgeComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerForgeComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerForgeComp>::~shared_ptr((std::shared_ptr<PlayerForgeComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017232230-00000000172325FE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerGCGComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerGCGComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 70;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x45 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x46uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x45uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerGCGComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerGCGComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerGCGComp>(0LL, (const std::shared_ptr<PlayerGCGComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 70;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerGCGComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerGCGComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerGCGComp>::~shared_ptr((std::shared_ptr<PlayerGCGComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017226390-000000001722675E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerGachaComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerGachaComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 20;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x13 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x14uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x13uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerGachaComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerGachaComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerGachaComp>(0LL, (const std::shared_ptr<PlayerGachaComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 20;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerGachaComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerGachaComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerGachaComp>::~shared_ptr((std::shared_ptr<PlayerGachaComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722DD90-000000001722E15E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerGalleryComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerGalleryComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 52;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x33 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x34uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x33uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerGalleryComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerGalleryComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerGalleryComp>(0LL, (const std::shared_ptr<PlayerGalleryComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 52;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerGalleryComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerGalleryComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerGalleryComp>::~shared_ptr((std::shared_ptr<PlayerGalleryComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017226760-0000000017226B2E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerGivingComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerGivingComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 21;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x14 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x15uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x14uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerGivingComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerGivingComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerGivingComp>(0LL, (const std::shared_ptr<PlayerGivingComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 21;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerGivingComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerGivingComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerGivingComp>::~shared_ptr((std::shared_ptr<PlayerGivingComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017223200-00000000172235CE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerGmComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerGmComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 3;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 2 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 3uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](&this->comp_vec_, 2uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerGmComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerGmComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerGmComp>(0LL, (const std::shared_ptr<PlayerGmComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 3;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerGmComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerGmComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerGmComp>::~shared_ptr((std::shared_ptr<PlayerGmComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722FC10-000000001722FFDE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerGroupLinkComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerGroupLinkComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 60;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x3B )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x3CuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x3BuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerGroupLinkComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerGroupLinkComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerGroupLinkComp>(0LL, (const std::shared_ptr<PlayerGroupLinkComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 60;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerGroupLinkComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerGroupLinkComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerGroupLinkComp>::~shared_ptr((std::shared_ptr<PlayerGroupLinkComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722ECD0-000000001722F09E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerH5ActivityComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerH5ActivityComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 56;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x37 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x38uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x37uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerH5ActivityComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerH5ActivityComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerH5ActivityComp>(0LL, (const std::shared_ptr<PlayerH5ActivityComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 56;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerH5ActivityComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerH5ActivityComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerH5ActivityComp>::~shared_ptr((std::shared_ptr<PlayerH5ActivityComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722E530-000000001722E8FE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerHomeComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerHomeComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 54;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x35 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x36uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x35uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerHomeComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerHomeComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerHomeComp>(0LL, (const std::shared_ptr<PlayerHomeComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 54;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerHomeComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerHomeComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerHomeComp>::~shared_ptr((std::shared_ptr<PlayerHomeComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722A830-000000001722ABFE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerHuntingComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerHuntingComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 41;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x28 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x29uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x28uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerHuntingComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerHuntingComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerHuntingComp>(0LL, (const std::shared_ptr<PlayerHuntingComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 41;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerHuntingComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerHuntingComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerHuntingComp>::~shared_ptr((std::shared_ptr<PlayerHuntingComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017226F00-00000000172272CE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerInvestigationComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerInvestigationComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 23;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x16 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x17uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x16uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerInvestigationComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerInvestigationComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerInvestigationComp>(0LL, (const std::shared_ptr<PlayerInvestigationComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 23;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerInvestigationComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerInvestigationComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerInvestigationComp>::~shared_ptr((std::shared_ptr<PlayerInvestigationComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017222A60-0000000017222E2E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerItemComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerItemComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 7;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 6 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 7uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](&this->comp_vec_, 6uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerItemComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerItemComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerItemComp>(0LL, (const std::shared_ptr<PlayerItemComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 7;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerItemComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerItemComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerItemComp>::~shared_ptr((std::shared_ptr<PlayerItemComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722F840-000000001722FC0E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerLiveComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerLiveComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 59;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x3A )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x3BuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x3AuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerLiveComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerLiveComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerLiveComp>(0LL, (const std::shared_ptr<PlayerLiveComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 59;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerLiveComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerLiveComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerLiveComp>::~shared_ptr((std::shared_ptr<PlayerLiveComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017225450-000000001722581E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerLoginComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerLoginComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 16;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0xF )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x10uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](&this->comp_vec_, 0xFuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerLoginComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerLoginComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerLoginComp>(0LL, (const std::shared_ptr<PlayerLoginComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 16;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerLoginComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerLoginComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerLoginComp>::~shared_ptr((std::shared_ptr<PlayerLoginComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017225080-000000001722544E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerMailComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerMailComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 15;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0xE )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0xFuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](&this->comp_vec_, 0xEuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerMailComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerMailComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerMailComp>(0LL, (const std::shared_ptr<PlayerMailComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 15;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerMailComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerMailComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerMailComp>::~shared_ptr((std::shared_ptr<PlayerMailComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017229150-000000001722951E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerMatchComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerMatchComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 32;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x1F )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x20uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x1FuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerMatchComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerMatchComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerMatchComp>(0LL, (const std::shared_ptr<PlayerMatchComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 32;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerMatchComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerMatchComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerMatchComp>::~shared_ptr((std::shared_ptr<PlayerMatchComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722D220-000000001722D5EE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerMechanicusComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerMechanicusComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 49;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x30 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x31uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x30uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerMechanicusComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerMechanicusComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerMechanicusComp>(0LL, (const std::shared_ptr<PlayerMechanicusComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 49;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerMechanicusComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerMechanicusComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerMechanicusComp>::~shared_ptr((std::shared_ptr<PlayerMechanicusComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722CE50-000000001722D21E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerMiracleRingComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerMiracleRingComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 48;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x2F )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x30uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x2FuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerMiracleRingComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerMiracleRingComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerMiracleRingComp>(0LL, (const std::shared_ptr<PlayerMiracleRingComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 48;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerMiracleRingComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerMiracleRingComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerMiracleRingComp>::~shared_ptr((std::shared_ptr<PlayerMiracleRingComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000172248E0-0000000017224CAE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerMpComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerMpComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 12;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0xB )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0xCuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](&this->comp_vec_, 0xBuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerMpComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerMpComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerMpComp>(0LL, (const std::shared_ptr<PlayerMpComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 12;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerMpComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerMpComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerMpComp>::~shared_ptr((std::shared_ptr<PlayerMpComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000172298F0-0000000017229CBE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerMpPlayComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerMpPlayComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 33;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x20 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x21uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x20uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerMpPlayComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerMpPlayComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerMpPlayComp>(0LL, (const std::shared_ptr<PlayerMpPlayComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 33;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerMpPlayComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerMpPlayComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerMpPlayComp>::~shared_ptr((std::shared_ptr<PlayerMpPlayComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722C2E0-000000001722C6AE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerOfferingComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerOfferingComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 45;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x2C )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x2DuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x2CuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerOfferingComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerOfferingComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerOfferingComp>(0LL, (const std::shared_ptr<PlayerOfferingComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 45;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerOfferingComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerOfferingComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerOfferingComp>::~shared_ptr((std::shared_ptr<PlayerOfferingComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017225820-0000000017225BEE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerOfflineMsgComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerOfflineMsgComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 17;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x10 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x11uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x10uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerOfflineMsgComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerOfflineMsgComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerOfflineMsgComp>(0LL, (const std::shared_ptr<PlayerOfflineMsgComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 17;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerOfflineMsgComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerOfflineMsgComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerOfflineMsgComp>::~shared_ptr((std::shared_ptr<PlayerOfflineMsgComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722E900-000000001722ECCE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerOfflineOpComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerOfflineOpComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 55;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x36 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x37uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x36uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerOfflineOpComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerOfflineOpComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerOfflineOpComp>(0LL, (const std::shared_ptr<PlayerOfflineOpComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 55;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerOfflineOpComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerOfflineOpComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerOfflineOpComp>::~shared_ptr((std::shared_ptr<PlayerOfflineOpComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722D5F0-000000001722D9BE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerOpActivityComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerOpActivityComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 50;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x31 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x32uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x31uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerOpActivityComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerOpActivityComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerOpActivityComp>(0LL, (const std::shared_ptr<PlayerOpActivityComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 50;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerOpActivityComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerOpActivityComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerOpActivityComp>::~shared_ptr((std::shared_ptr<PlayerOpActivityComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722A460-000000001722A82E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerPersonalLineComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerPersonalLineComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 37;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x24 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x25uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x24uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerPersonalLineComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerPersonalLineComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerPersonalLineComp>(0LL, (const std::shared_ptr<PlayerPersonalLineComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 37;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerPersonalLineComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerPersonalLineComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerPersonalLineComp>::~shared_ptr((std::shared_ptr<PlayerPersonalLineComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017231A90-0000000017231E5E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerPolygonComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerPolygonComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 68;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x43 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x44uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x43uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerPolygonComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerPolygonComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerPolygonComp>(0LL, (const std::shared_ptr<PlayerPolygonComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 68;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerPolygonComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerPolygonComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerPolygonComp>::~shared_ptr((std::shared_ptr<PlayerPolygonComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000172235D0-000000001722399E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerQuestComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerQuestComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerQuestComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerQuestComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerQuestComp>(0LL, (const std::shared_ptr<PlayerQuestComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerQuestComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerQuestComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerQuestComp>::~shared_ptr((std::shared_ptr<PlayerQuestComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017225FC0-000000001722638E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerRandTaskComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerRandTaskComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 19;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x12 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x13uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x12uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerRandTaskComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerRandTaskComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerRandTaskComp>(0LL, (const std::shared_ptr<PlayerRandTaskComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 19;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerRandTaskComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerRandTaskComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerRandTaskComp>::~shared_ptr((std::shared_ptr<PlayerRandTaskComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000172285E0-00000000172289AE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerRechargeComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerRechargeComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 31;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x1E )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x1FuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x1EuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerRechargeComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerRechargeComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerRechargeComp>(0LL, (const std::shared_ptr<PlayerRechargeComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 31;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerRechargeComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerRechargeComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerRechargeComp>::~shared_ptr((std::shared_ptr<PlayerRechargeComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722E160-000000001722E52E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerRegionSearchComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerRegionSearchComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 53;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x34 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x35uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x34uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerRegionSearchComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerRegionSearchComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerRegionSearchComp>(0LL, (const std::shared_ptr<PlayerRegionSearchComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 53;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerRegionSearchComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerRegionSearchComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerRegionSearchComp>::~shared_ptr((std::shared_ptr<PlayerRegionSearchComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000172312F0-00000000172316BE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerRegionalPlayComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerRegionalPlayComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 65;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x40 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x41uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x40uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerRegionalPlayComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerRegionalPlayComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerRegionalPlayComp>(0LL, (const std::shared_ptr<PlayerRegionalPlayComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 65;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerRegionalPlayComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerRegionalPlayComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerRegionalPlayComp>::~shared_ptr((std::shared_ptr<PlayerRegionalPlayComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722AFD0-000000001722B39E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerReputationComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerReputationComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 39;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x26 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x27uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x26uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerReputationComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerReputationComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerReputationComp>(0LL, (const std::shared_ptr<PlayerReputationComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 39;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerReputationComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerReputationComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerReputationComp>::~shared_ptr((std::shared_ptr<PlayerReputationComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722C6B0-000000001722CA7E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerReunionComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerReunionComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 47;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x2E )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x2FuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x2EuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerReunionComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerReunionComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerReunionComp>(0LL, (const std::shared_ptr<PlayerReunionComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 47;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerReunionComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerReunionComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerReunionComp>::~shared_ptr((std::shared_ptr<PlayerReunionComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722CA80-000000001722CE4E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerRoutineComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerRoutineComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 46;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x2D )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x2EuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x2DuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerRoutineComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerRoutineComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerRoutineComp>(0LL, (const std::shared_ptr<PlayerRoutineComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 46;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerRoutineComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerRoutineComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerRoutineComp>::~shared_ptr((std::shared_ptr<PlayerRoutineComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017222690-0000000017222A5E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerSceneComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerSceneComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 9;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 8 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 9uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](&this->comp_vec_, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerSceneComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerSceneComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerSceneComp>(0LL, (const std::shared_ptr<PlayerSceneComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 9;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerSceneComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerSceneComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerSceneComp>::~shared_ptr((std::shared_ptr<PlayerSceneComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722BB40-000000001722BF0E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerScenePlayComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerScenePlayComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 43;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x2A )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x2BuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x2AuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerScenePlayComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerScenePlayComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerScenePlayComp>(0LL, (const std::shared_ptr<PlayerScenePlayComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 43;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerScenePlayComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerScenePlayComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerScenePlayComp>::~shared_ptr((std::shared_ptr<PlayerScenePlayComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000172316C0-0000000017231A8E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerShareCDComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerShareCDComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 66;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x41 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x42uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x41uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerShareCDComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerShareCDComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerShareCDComp>(0LL, (const std::shared_ptr<PlayerShareCDComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 66;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerShareCDComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerShareCDComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerShareCDComp>::~shared_ptr((std::shared_ptr<PlayerShareCDComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017223D70-000000001722413E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerShopComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerShopComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 6;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 5 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 6uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](&this->comp_vec_, 5uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerShopComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerShopComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerShopComp>(0LL, (const std::shared_ptr<PlayerShopComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 6;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerShopComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerShopComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerShopComp>::~shared_ptr((std::shared_ptr<PlayerShopComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017228210-00000000172285DE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerSignInComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerSignInComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 28;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x1B )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x1CuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x1BuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerSignInComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerSignInComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerSignInComp>(0LL, (const std::shared_ptr<PlayerSignInComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 28;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerSignInComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerSignInComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerSignInComp>::~shared_ptr((std::shared_ptr<PlayerSignInComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017227A70-0000000017227E3E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerSocialComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerSocialComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 26;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x19 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x1AuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x19uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerSocialComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerSocialComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerSocialComp>(0LL, (const std::shared_ptr<PlayerSocialComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 26;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerSocialComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerSocialComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerSocialComp>::~shared_ptr((std::shared_ptr<PlayerSocialComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000172239A0-0000000017223D6E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerTalkComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerTalkComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 5;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 4 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 5uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](&this->comp_vec_, 4uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerTalkComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerTalkComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerTalkComp>(0LL, (const std::shared_ptr<PlayerTalkComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 5;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerTalkComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerTalkComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerTalkComp>::~shared_ptr((std::shared_ptr<PlayerTalkComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017227E40-000000001722820E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerTowerComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerTowerComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 27;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x1A )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x1BuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x1AuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerTowerComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerTowerComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerTowerComp>(0LL, (const std::shared_ptr<PlayerTowerComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 27;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerTowerComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerTowerComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerTowerComp>::~shared_ptr((std::shared_ptr<PlayerTowerComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017229520-00000000172298EE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerTrialAvatarComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerTrialAvatarComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 34;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x21 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x22uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x21uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerTrialAvatarComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerTrialAvatarComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerTrialAvatarComp>(0LL, (const std::shared_ptr<PlayerTrialAvatarComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 34;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerTrialAvatarComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerTrialAvatarComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerTrialAvatarComp>::~shared_ptr((std::shared_ptr<PlayerTrialAvatarComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000017230F20-00000000172312EE
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerUgcComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerUgcComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 67;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x42 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x43uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x42uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerUgcComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerUgcComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerUgcComp>(0LL, (const std::shared_ptr<PlayerUgcComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 67;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerUgcComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerUgcComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerUgcComp>::~shared_ptr((std::shared_ptr<PlayerUgcComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722F470-000000001722F83E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerVehicleComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerVehicleComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 58;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x39 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x3AuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x39uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerVehicleComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerVehicleComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerVehicleComp>(0LL, (const std::shared_ptr<PlayerVehicleComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 58;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerVehicleComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerVehicleComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerVehicleComp>::~shared_ptr((std::shared_ptr<PlayerVehicleComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000172276A0-0000000017227A6E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerWatcherComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerWatcherComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 25;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x18 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x19uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x18uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerWatcherComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerWatcherComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerWatcherComp>(0LL, (const std::shared_ptr<PlayerWatcherComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 25;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerWatcherComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerWatcherComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerWatcherComp>::~shared_ptr((std::shared_ptr<PlayerWatcherComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001722B3A0-000000001722B76E
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerWidgetComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerWidgetComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 40;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 0x27 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0x28uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](
                &this->comp_vec_,
                0x27uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerWidgetComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerWidgetComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerWidgetComp>(0LL, (const std::shared_ptr<PlayerWidgetComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 40;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerWidgetComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerWidgetComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerWidgetComp>::~shared_ptr((std::shared_ptr<PlayerWidgetComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000015A31A28-0000000015A31DF6
int32_t __cdecl EcsBase<Scene,SceneCompBase,12u>::addComp<SceneAreaComp>(EcsBase<Scene,SceneCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Scene *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Scene,SceneCompBase,12u>::addComp<SceneAreaComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 3;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(&this->comp_vec_) <= 2 )
    std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::resize(&this->comp_vec_, 3uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](&this->comp_vec_, 2uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<SceneCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'SceneAreaComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Scene, baseclass_2);
    common::tools::perf::make_shared<SceneAreaComp,Scene &>((Scene *)(v1 + 64), (Scene *)&this[-1].type_vec_);
    if ( std::operator==<SceneAreaComp>(0LL, (const std::shared_ptr<SceneAreaComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 3;
      std::shared_ptr<SceneCompBase>::operator=<SceneAreaComp>(
        &comp_pair->second,
        (const std::shared_ptr<SceneAreaComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<SceneAreaComp>::~shared_ptr((std::shared_ptr<SceneAreaComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000015A31658-0000000015A31A26
int32_t __cdecl EcsBase<Scene,SceneCompBase,12u>::addComp<SceneBlockGroupComp>(
        EcsBase<Scene,SceneCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Scene *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Scene,SceneCompBase,12u>::addComp<SceneBlockGroupComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<SceneCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'SceneBlockGroupComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Scene, baseclass_2);
    common::tools::perf::make_shared<SceneBlockGroupComp,Scene &>((Scene *)(v1 + 64), (Scene *)&this[-1].type_vec_);
    if ( std::operator==<SceneBlockGroupComp>(0LL, (const std::shared_ptr<SceneBlockGroupComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<SceneCompBase>::operator=<SceneBlockGroupComp>(
        &comp_pair->second,
        (const std::shared_ptr<SceneBlockGroupComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<SceneBlockGroupComp>::~shared_ptr((std::shared_ptr<SceneBlockGroupComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000015D491E8-0000000015D495B6
int32_t __cdecl EcsBase<Scene,SceneCompBase,12u>::addComp<SceneEncounterComp>(
        EcsBase<Scene,SceneCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Scene *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Scene,SceneCompBase,12u>::addComp<SceneEncounterComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 7;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(&this->comp_vec_) <= 6 )
    std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::resize(&this->comp_vec_, 7uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](&this->comp_vec_, 6uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<SceneCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'SceneEncounterComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Scene, baseclass_2);
    common::tools::perf::make_shared<SceneEncounterComp,Scene &>((Scene *)(v1 + 64), (Scene *)&this[-1].type_vec_);
    if ( std::operator==<SceneEncounterComp>(0LL, (const std::shared_ptr<SceneEncounterComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 7;
      std::shared_ptr<SceneCompBase>::operator=<SceneEncounterComp>(
        &comp_pair->second,
        (const std::shared_ptr<SceneEncounterComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<SceneEncounterComp>::~shared_ptr((std::shared_ptr<SceneEncounterComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000015D48E1A-0000000015D491E7
int32_t __cdecl EcsBase<Scene,SceneCompBase,12u>::addComp<SceneEnvAnimalComp>(
        EcsBase<Scene,SceneCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Scene *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Scene,SceneCompBase,12u>::addComp<SceneEnvAnimalComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 1;
  if ( !std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(&this->comp_vec_) )
    std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::resize(&this->comp_vec_, 1uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](&this->comp_vec_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<SceneCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'SceneEnvAnimalComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Scene, baseclass_2);
    common::tools::perf::make_shared<SceneEnvAnimalComp,Scene &>((Scene *)(v1 + 64), (Scene *)&this[-1].type_vec_);
    if ( std::operator==<SceneEnvAnimalComp>(0LL, (const std::shared_ptr<SceneEnvAnimalComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 1;
      std::shared_ptr<SceneCompBase>::operator=<SceneEnvAnimalComp>(
        &comp_pair->second,
        (const std::shared_ptr<SceneEnvAnimalComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<SceneEnvAnimalComp>::~shared_ptr((std::shared_ptr<SceneEnvAnimalComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000015A32598-0000000015A32966
int32_t __cdecl EcsBase<Scene,SceneCompBase,12u>::addComp<SceneGalleryComp>(
        EcsBase<Scene,SceneCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Scene *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Scene,SceneCompBase,12u>::addComp<SceneGalleryComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 9;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(&this->comp_vec_) <= 8 )
    std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::resize(&this->comp_vec_, 9uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](&this->comp_vec_, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<SceneCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'SceneGalleryComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Scene, baseclass_2);
    common::tools::perf::make_shared<SceneGalleryComp,Scene &>((Scene *)(v1 + 64), (Scene *)&this[-1].type_vec_);
    if ( std::operator==<SceneGalleryComp>(0LL, (const std::shared_ptr<SceneGalleryComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 9;
      std::shared_ptr<SceneCompBase>::operator=<SceneGalleryComp>(
        &comp_pair->second,
        (const std::shared_ptr<SceneGalleryComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<SceneGalleryComp>::~shared_ptr((std::shared_ptr<SceneGalleryComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001324D2CC-000000001324D69A
int32_t __cdecl EcsBase<Scene,SceneCompBase,12u>::addComp<SceneGridComp>(EcsBase<Scene,SceneCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Scene *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Scene,SceneCompBase,12u>::addComp<SceneGridComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 2;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(&this->comp_vec_) <= 1 )
    std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::resize(&this->comp_vec_, 2uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](&this->comp_vec_, 1uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<SceneCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'SceneGridComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Scene, baseclass_2);
    common::tools::perf::make_shared<SceneGridComp,Scene &>((Scene *)(v1 + 64), (Scene *)&this[-1].type_vec_);
    if ( std::operator==<SceneGridComp>(0LL, (const std::shared_ptr<SceneGridComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 2;
      std::shared_ptr<SceneCompBase>::operator=<SceneGridComp>(
        &comp_pair->second,
        (const std::shared_ptr<SceneGridComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<SceneGridComp>::~shared_ptr((std::shared_ptr<SceneGridComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001324A382-000000001324A750
int32_t __cdecl EcsBase<Scene,SceneCompBase,12u>::addComp<SceneHomeBlockGroupComp>(
        EcsBase<Scene,SceneCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Scene *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Scene,SceneCompBase,12u>::addComp<SceneHomeBlockGroupComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 4;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(&this->comp_vec_) <= 3 )
    std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::resize(&this->comp_vec_, 4uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](&this->comp_vec_, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<SceneCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'SceneHomeBlockGroupComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Scene, baseclass_2);
    common::tools::perf::make_shared<SceneHomeBlockGroupComp,Scene &>((Scene *)(v1 + 64), (Scene *)&this[-1].type_vec_);
    if ( std::operator==<SceneHomeBlockGroupComp>(0LL, (const std::shared_ptr<SceneHomeBlockGroupComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 4;
      std::shared_ptr<SceneCompBase>::operator=<SceneHomeBlockGroupComp>(
        &comp_pair->second,
        (const std::shared_ptr<SceneHomeBlockGroupComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<SceneHomeBlockGroupComp>::~shared_ptr((std::shared_ptr<SceneHomeBlockGroupComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 000000001324A752-000000001324AB20
int32_t __cdecl EcsBase<Scene,SceneCompBase,12u>::addComp<SceneHomeComp>(EcsBase<Scene,SceneCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Scene *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Scene,SceneCompBase,12u>::addComp<SceneHomeComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 10;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(&this->comp_vec_) <= 9 )
    std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::resize(&this->comp_vec_, 0xAuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](&this->comp_vec_, 9uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<SceneCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'SceneHomeComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Scene, baseclass_2);
    common::tools::perf::make_shared<SceneHomeComp,Scene &>((Scene *)(v1 + 64), (Scene *)&this[-1].type_vec_);
    if ( std::operator==<SceneHomeComp>(0LL, (const std::shared_ptr<SceneHomeComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 10;
      std::shared_ptr<SceneCompBase>::operator=<SceneHomeComp>(
        &comp_pair->second,
        (const std::shared_ptr<SceneHomeComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<SceneHomeComp>::~shared_ptr((std::shared_ptr<SceneHomeComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000015A31DF8-0000000015A321C6
int32_t __cdecl EcsBase<Scene,SceneCompBase,12u>::addComp<SceneMiscComp>(EcsBase<Scene,SceneCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Scene *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Scene,SceneCompBase,12u>::addComp<SceneMiscComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 5;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(&this->comp_vec_) <= 4 )
    std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::resize(&this->comp_vec_, 5uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](&this->comp_vec_, 4uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<SceneCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'SceneMiscComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Scene, baseclass_2);
    common::tools::perf::make_shared<SceneMiscComp,Scene &>((Scene *)(v1 + 64), (Scene *)&this[-1].type_vec_);
    if ( std::operator==<SceneMiscComp>(0LL, (const std::shared_ptr<SceneMiscComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 5;
      std::shared_ptr<SceneCompBase>::operator=<SceneMiscComp>(
        &comp_pair->second,
        (const std::shared_ptr<SceneMiscComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<SceneMiscComp>::~shared_ptr((std::shared_ptr<SceneMiscComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000015A321C8-0000000015A32596
int32_t __cdecl EcsBase<Scene,SceneCompBase,12u>::addComp<SceneMultistagePlayComp>(
        EcsBase<Scene,SceneCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Scene *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Scene,SceneCompBase,12u>::addComp<SceneMultistagePlayComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 8;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(&this->comp_vec_) <= 7 )
    std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::resize(&this->comp_vec_, 8uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](&this->comp_vec_, 7uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<SceneCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'SceneMultistagePlayComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Scene, baseclass_2);
    common::tools::perf::make_shared<SceneMultistagePlayComp,Scene &>((Scene *)(v1 + 64), (Scene *)&this[-1].type_vec_);
    if ( std::operator==<SceneMultistagePlayComp>(0LL, (const std::shared_ptr<SceneMultistagePlayComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 8;
      std::shared_ptr<SceneCompBase>::operator=<SceneMultistagePlayComp>(
        &comp_pair->second,
        (const std::shared_ptr<SceneMultistagePlayComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<SceneMultistagePlayComp>::~shared_ptr((std::shared_ptr<SceneMultistagePlayComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000015D4A586-0000000015D4A954
int32_t __cdecl EcsBase<Scene,SceneCompBase,12u>::addComp<SceneRoomSightComp>(
        EcsBase<Scene,SceneCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Scene *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Scene,SceneCompBase,12u>::addComp<SceneRoomSightComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 2;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(&this->comp_vec_) <= 1 )
    std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::resize(&this->comp_vec_, 2uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](&this->comp_vec_, 1uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<SceneCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'SceneRoomSightComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Scene, baseclass_2);
    common::tools::perf::make_shared<SceneRoomSightComp,Scene &>((Scene *)(v1 + 64), (Scene *)&this[-1].type_vec_);
    if ( std::operator==<SceneRoomSightComp>(0LL, (const std::shared_ptr<SceneRoomSightComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 2;
      std::shared_ptr<SceneCompBase>::operator=<SceneRoomSightComp>(
        &comp_pair->second,
        (const std::shared_ptr<SceneRoomSightComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<SceneRoomSightComp>::~shared_ptr((std::shared_ptr<SceneRoomSightComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 0000000015A32968-0000000015A32D36
int32_t __cdecl EcsBase<Scene,SceneCompBase,12u>::addComp<SceneTransferGuardComp>(
        EcsBase<Scene,SceneCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Scene *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Scene,SceneCompBase,12u>::addComp<SceneTransferGuardComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 11;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(&this->comp_vec_) <= 0xA )
    std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::resize(&this->comp_vec_, 0xBuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](&this->comp_vec_, 0xAuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<SceneCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'SceneTransferGuardComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Scene, baseclass_2);
    common::tools::perf::make_shared<SceneTransferGuardComp,Scene &>((Scene *)(v1 + 64), (Scene *)&this[-1].type_vec_);
    if ( std::operator==<SceneTransferGuardComp>(0LL, (const std::shared_ptr<SceneTransferGuardComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 11;
      std::shared_ptr<SceneCompBase>::operator=<SceneTransferGuardComp>(
        &comp_pair->second,
        (const std::shared_ptr<SceneTransferGuardComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<SceneTransferGuardComp>::~shared_ptr((std::shared_ptr<SceneTransferGuardComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000151E07B4-00000000151E0B81
int32_t __cdecl EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2u>::addComp<IrodoriTowerDefensePlay>(
        EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  SceneMultistagePlay *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2u>::addComp<IrodoriTowerDefensePlay>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 1;
  if ( !std::vector<std::pair<unsigned int,std::shared_ptr<SceneMultistagePlayCompBase>>>::size(&this->comp_vec_) )
    std::vector<std::pair<unsigned int,std::shared_ptr<SceneMultistagePlayCompBase>>>::resize(&this->comp_vec_, 1uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneMultistagePlayCompBase>>>::operator[](
                &this->comp_vec_,
                0LL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<SceneMultistagePlayCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'IrodoriTowerDefensePlay);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, SceneMultistagePlay, baseclass_2);
    common::tools::perf::make_shared<IrodoriTowerDefensePlay,SceneMultistagePlay &>(
      (SceneMultistagePlay *)(v1 + 64),
      (SceneMultistagePlay *)&this[-1].type_vec_);
    if ( std::operator==<IrodoriTowerDefensePlay>(0LL, (const std::shared_ptr<IrodoriTowerDefensePlay> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 1;
      std::shared_ptr<SceneMultistagePlayCompBase>::operator=<IrodoriTowerDefensePlay>(
        &comp_pair->second,
        (const std::shared_ptr<IrodoriTowerDefensePlay> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<IrodoriTowerDefensePlay>::~shared_ptr((std::shared_ptr<IrodoriTowerDefensePlay> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 102: range 00000000180ED9AE-00000000180EDD7B
int32_t __cdecl EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2u>::addComp<TowerDefensePlay>(
        EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  SceneMultistagePlay *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2u>::addComp<TowerDefensePlay>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 1;
  if ( !std::vector<std::pair<unsigned int,std::shared_ptr<SceneMultistagePlayCompBase>>>::size(&this->comp_vec_) )
    std::vector<std::pair<unsigned int,std::shared_ptr<SceneMultistagePlayCompBase>>>::resize(&this->comp_vec_, 1uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneMultistagePlayCompBase>>>::operator[](
                &this->comp_vec_,
                0LL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<SceneMultistagePlayCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'TowerDefensePlay);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, SceneMultistagePlay, baseclass_2);
    common::tools::perf::make_shared<TowerDefensePlay,SceneMultistagePlay &>(
      (SceneMultistagePlay *)(v1 + 64),
      (SceneMultistagePlay *)&this[-1].type_vec_);
    if ( std::operator==<TowerDefensePlay>(0LL, (const std::shared_ptr<TowerDefensePlay> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 1;
      std::shared_ptr<SceneMultistagePlayCompBase>::operator=<TowerDefensePlay>(
        &comp_pair->second,
        (const std::shared_ptr<TowerDefensePlay> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<TowerDefensePlay>::~shared_ptr((std::shared_ptr<TowerDefensePlay> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 136: range 00000000138DB974-00000000138DBA5F
std::shared_ptr<BuffComp> __cdecl EcsBase<Avatar,AvatarCompBase,7u>::findComp<BuffComp>(
        const EcsBase<Avatar,AvatarCompBase,7> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase> >> *v1; // rsi
  std::shared_ptr<BuffComp> result; // rax
  const EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::size(v1) <= 2 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::operator[](v1, 2uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 3 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<BuffComp,AvatarCompBase>((const std::shared_ptr<AvatarCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<BuffComp>::shared_ptr((std::shared_ptr<BuffComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<BuffComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001605FFD8-00000000160600C3
std::shared_ptr<ChestComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<ChestComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<ChestComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 3 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 4 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<ChestComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<ChestComp>::shared_ptr((std::shared_ptr<ChestComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<ChestComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001323B076-000000001323B161
std::shared_ptr<CrystalComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<CrystalComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<CrystalComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 5 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 5uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 6 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<CrystalComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<CrystalComp>::shared_ptr((std::shared_ptr<CrystalComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<CrystalComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000014632DF4-0000000014632EDF
std::shared_ptr<CustomGadgetComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<CustomGadgetComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<CustomGadgetComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 0x16 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 0x16uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 23 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<CustomGadgetComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<CustomGadgetComp>::shared_ptr((std::shared_ptr<CustomGadgetComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<CustomGadgetComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001624F62E-000000001624F719
std::shared_ptr<ExpeditionComp> __cdecl EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::findComp<ExpeditionComp>(
        const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> >> *v1; // rsi
  std::shared_ptr<ExpeditionComp> result; // rax
  const EcsBase<FormalAvatar,FormalAvatarCompBase,3>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase>>>::size(v1) <= 1 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase>>>::operator[](v1, 1uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 2 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<ExpeditionComp,FormalAvatarCompBase>((const std::shared_ptr<FormalAvatarCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<ExpeditionComp>::shared_ptr((std::shared_ptr<ExpeditionComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<ExpeditionComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000138DBC86-00000000138DBD71
std::shared_ptr<ExtraPropComp> __cdecl EcsBase<Avatar,AvatarCompBase,7u>::findComp<ExtraPropComp>(
        const EcsBase<Avatar,AvatarCompBase,7> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase> >> *v1; // rsi
  std::shared_ptr<ExtraPropComp> result; // rax
  const EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::size(v1) <= 5 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::operator[](v1, 5uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 6 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<ExtraPropComp,AvatarCompBase>((const std::shared_ptr<AvatarCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<ExtraPropComp>::shared_ptr((std::shared_ptr<ExtraPropComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<ExtraPropComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000138DBB80-00000000138DBC6B
std::shared_ptr<FashionComp> __cdecl EcsBase<Avatar,AvatarCompBase,7u>::findComp<FashionComp>(
        const EcsBase<Avatar,AvatarCompBase,7> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase> >> *v1; // rsi
  std::shared_ptr<FashionComp> result; // rax
  const EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::size(v1) <= 4 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::operator[](v1, 4uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 5 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<FashionComp,AvatarCompBase>((const std::shared_ptr<AvatarCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<FashionComp>::shared_ptr((std::shared_ptr<FashionComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<FashionComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001624F528-000000001624F612
std::shared_ptr<FetterComp> __cdecl EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::findComp<FetterComp>(
        const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase> >> *v1; // rsi
  std::shared_ptr<FetterComp> result; // rax
  const EcsBase<FormalAvatar,FormalAvatarCompBase,3>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( !std::vector<std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase>>>::size(v1) )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<FormalAvatarCompBase>>>::operator[](v1, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 1 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<FetterComp,FormalAvatarCompBase>((const std::shared_ptr<FormalAvatarCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<FetterComp>::shared_ptr((std::shared_ptr<FetterComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<FetterComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000151C35DC-00000000151C36C7
std::shared_ptr<FoundationComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<FoundationComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<FoundationComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 3 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 4 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<FoundationComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<FoundationComp>::shared_ptr((std::shared_ptr<FoundationComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<FoundationComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000176B8A24-00000000176B8B0F
std::shared_ptr<GadgetBaseInteractComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetBaseInteractComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<GadgetBaseInteractComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 3 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 4 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<GadgetBaseInteractComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<GadgetBaseInteractComp>::shared_ptr((std::shared_ptr<GadgetBaseInteractComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<GadgetBaseInteractComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000015D4EF5E-0000000015D4F049
std::shared_ptr<GadgetEnvAnimalComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetEnvAnimalComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<GadgetEnvAnimalComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 3 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 4 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<GadgetEnvAnimalComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<GadgetEnvAnimalComp>::shared_ptr((std::shared_ptr<GadgetEnvAnimalComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<GadgetEnvAnimalComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001462ABBA-000000001462ACA5
std::shared_ptr<GadgetGeneralRewardComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetGeneralRewardComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<GadgetGeneralRewardComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 3 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 4 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<GadgetGeneralRewardComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<GadgetGeneralRewardComp>::shared_ptr((std::shared_ptr<GadgetGeneralRewardComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<GadgetGeneralRewardComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000014A40092-0000000014A4017D
std::shared_ptr<GadgetPlayComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetPlayComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<GadgetPlayComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 0xF )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 0xFuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 16 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<GadgetPlayComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<GadgetPlayComp>::shared_ptr((std::shared_ptr<GadgetPlayComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<GadgetPlayComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000014A04D1C-0000000014A04E07
std::shared_ptr<GadgetSealComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetSealComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<GadgetSealComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 0xA )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 0xAuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 11 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<GadgetSealComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<GadgetSealComp>::shared_ptr((std::shared_ptr<GadgetSealComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<GadgetSealComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000013864BFC-0000000013864CE7
std::shared_ptr<GadgetVehicleComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetVehicleComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<GadgetVehicleComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 0x13 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 0x13uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 20 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<GadgetVehicleComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<GadgetVehicleComp>::shared_ptr((std::shared_ptr<GadgetVehicleComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000149FF6BE-00000000149FF7A9
std::shared_ptr<GatherComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<GatherComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<GatherComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 3 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 4 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<GatherComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<GatherComp>::shared_ptr((std::shared_ptr<GatherComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<GatherComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000014629D66-0000000014629E51
std::shared_ptr<GearComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<GearComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<GearComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 4 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 4uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 5 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<GearComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<GearComp>::shared_ptr((std::shared_ptr<GearComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<GearComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000014644B40-0000000014644C2A
std::shared_ptr<HomeBasicComp> __cdecl EcsBase<Home,HomeCompBase,12u>::findComp<HomeBasicComp>(
        const EcsBase<Home,HomeCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase> >> *v1; // rsi
  std::shared_ptr<HomeBasicComp> result; // rax
  const EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( !std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(v1) )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](v1, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 1 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<HomeBasicComp,HomeCompBase>((const std::shared_ptr<HomeCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<HomeBasicComp>::shared_ptr((std::shared_ptr<HomeBasicComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<HomeBasicComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001464557C-0000000014645667
std::shared_ptr<HomeBlueprintComp> __cdecl EcsBase<Home,HomeCompBase,12u>::findComp<HomeBlueprintComp>(
        const EcsBase<Home,HomeCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase> >> *v1; // rsi
  std::shared_ptr<HomeBlueprintComp> result; // rax
  const EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(v1) <= 0xA )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](v1, 0xAuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 11 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<HomeBlueprintComp,HomeCompBase>((const std::shared_ptr<HomeCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<HomeBlueprintComp>::shared_ptr((std::shared_ptr<HomeBlueprintComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<HomeBlueprintComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001464526A-0000000014645355
std::shared_ptr<HomeCustomFurnitureComp> __cdecl EcsBase<Home,HomeCompBase,12u>::findComp<HomeCustomFurnitureComp>(
        const EcsBase<Home,HomeCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase> >> *v1; // rsi
  std::shared_ptr<HomeCustomFurnitureComp> result; // rax
  const EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(v1) <= 7 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](v1, 7uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 8 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<HomeCustomFurnitureComp,HomeCompBase>((const std::shared_ptr<HomeCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<HomeCustomFurnitureComp>::shared_ptr((std::shared_ptr<HomeCustomFurnitureComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<HomeCustomFurnitureComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000014645164-000000001464524F
std::shared_ptr<HomeFishFarmingComp> __cdecl EcsBase<Home,HomeCompBase,12u>::findComp<HomeFishFarmingComp>(
        const EcsBase<Home,HomeCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase> >> *v1; // rsi
  std::shared_ptr<HomeFishFarmingComp> result; // rax
  const EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(v1) <= 6 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](v1, 6uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 7 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<HomeFishFarmingComp,HomeCompBase>((const std::shared_ptr<HomeCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<HomeFishFarmingComp>::shared_ptr((std::shared_ptr<HomeFishFarmingComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<HomeFishFarmingComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000014644E52-0000000014644F3D
std::shared_ptr<HomeFurnitureMakeComp> __cdecl EcsBase<Home,HomeCompBase,12u>::findComp<HomeFurnitureMakeComp>(
        const EcsBase<Home,HomeCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase> >> *v1; // rsi
  std::shared_ptr<HomeFurnitureMakeComp> result; // rax
  const EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(v1) <= 3 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](v1, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 4 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<HomeFurnitureMakeComp,HomeCompBase>((const std::shared_ptr<HomeCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<HomeFurnitureMakeComp>::shared_ptr((std::shared_ptr<HomeFurnitureMakeComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<HomeFurnitureMakeComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000014645476-0000000014645561
std::shared_ptr<HomeGroupRecordComp> __cdecl EcsBase<Home,HomeCompBase,12u>::findComp<HomeGroupRecordComp>(
        const EcsBase<Home,HomeCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase> >> *v1; // rsi
  std::shared_ptr<HomeGroupRecordComp> result; // rax
  const EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(v1) <= 9 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](v1, 9uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 10 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<HomeGroupRecordComp,HomeCompBase>((const std::shared_ptr<HomeCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<HomeGroupRecordComp>::shared_ptr((std::shared_ptr<HomeGroupRecordComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<HomeGroupRecordComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000014644F58-0000000014645043
std::shared_ptr<HomeLimitedShopComp> __cdecl EcsBase<Home,HomeCompBase,12u>::findComp<HomeLimitedShopComp>(
        const EcsBase<Home,HomeCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase> >> *v1; // rsi
  std::shared_ptr<HomeLimitedShopComp> result; // rax
  const EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(v1) <= 4 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](v1, 4uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 5 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<HomeLimitedShopComp,HomeCompBase>((const std::shared_ptr<HomeCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<HomeLimitedShopComp>::shared_ptr((std::shared_ptr<HomeLimitedShopComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<HomeLimitedShopComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000014644D4C-0000000014644E37
std::shared_ptr<HomeOfflineMsgComp> __cdecl EcsBase<Home,HomeCompBase,12u>::findComp<HomeOfflineMsgComp>(
        const EcsBase<Home,HomeCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase> >> *v1; // rsi
  std::shared_ptr<HomeOfflineMsgComp> result; // rax
  const EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(v1) <= 2 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](v1, 2uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 3 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<HomeOfflineMsgComp,HomeCompBase>((const std::shared_ptr<HomeCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<HomeOfflineMsgComp>::shared_ptr((std::shared_ptr<HomeOfflineMsgComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<HomeOfflineMsgComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000014645370-000000001464545B
std::shared_ptr<HomePictureFrameComp> __cdecl EcsBase<Home,HomeCompBase,12u>::findComp<HomePictureFrameComp>(
        const EcsBase<Home,HomeCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase> >> *v1; // rsi
  std::shared_ptr<HomePictureFrameComp> result; // rax
  const EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(v1) <= 8 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](v1, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 9 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<HomePictureFrameComp,HomeCompBase>((const std::shared_ptr<HomeCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<HomePictureFrameComp>::shared_ptr((std::shared_ptr<HomePictureFrameComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<HomePictureFrameComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001464505E-0000000014645149
std::shared_ptr<HomePlantComp> __cdecl EcsBase<Home,HomeCompBase,12u>::findComp<HomePlantComp>(
        const EcsBase<Home,HomeCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase> >> *v1; // rsi
  std::shared_ptr<HomePlantComp> result; // rax
  const EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(v1) <= 5 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](v1, 5uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 6 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<HomePlantComp,HomeCompBase>((const std::shared_ptr<HomeCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<HomePlantComp>::shared_ptr((std::shared_ptr<HomePlantComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<HomePlantComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000014644C46-0000000014644D31
std::shared_ptr<HomeSceneComp> __cdecl EcsBase<Home,HomeCompBase,12u>::findComp<HomeSceneComp>(
        const EcsBase<Home,HomeCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase> >> *v1; // rsi
  std::shared_ptr<HomeSceneComp> result; // rax
  const EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(v1) <= 1 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](v1, 1uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 2 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<HomeSceneComp,HomeCompBase>((const std::shared_ptr<HomeCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<HomeSceneComp>::shared_ptr((std::shared_ptr<HomeSceneComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<HomeSceneComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000014A0EEF4-0000000014A0EFDE
std::shared_ptr<IrodoriTowerDefensePlay> __cdecl EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2u>::findComp<IrodoriTowerDefensePlay>(
        const EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<SceneMultistagePlayCompBase> >> *v1; // rsi
  std::shared_ptr<IrodoriTowerDefensePlay> result; // rax
  const EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( !std::vector<std::pair<unsigned int,std::shared_ptr<SceneMultistagePlayCompBase>>>::size(v1) )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneMultistagePlayCompBase>>>::operator[](v1, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 1 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<IrodoriTowerDefensePlay,SceneMultistagePlayCompBase>((const std::shared_ptr<SceneMultistagePlayCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<IrodoriTowerDefensePlay>::shared_ptr((std::shared_ptr<IrodoriTowerDefensePlay> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<IrodoriTowerDefensePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000176B8CE4-00000000176B8DCF
std::shared_ptr<MiracleRingComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<MiracleRingComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<MiracleRingComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 3 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 4 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<MiracleRingComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<MiracleRingComp>::shared_ptr((std::shared_ptr<MiracleRingComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<MiracleRingComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000015D4EDB8-0000000015D4EEA2
std::shared_ptr<MonsterEnvAnimalComp> __cdecl EcsBase<Monster,MonsterCompBase,4u>::findComp<MonsterEnvAnimalComp>(
        const EcsBase<Monster,MonsterCompBase,4> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase> >> *v1; // rsi
  std::shared_ptr<MonsterEnvAnimalComp> result; // rax
  const EcsBase<Monster,MonsterCompBase,4>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( !std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase>>>::size(v1) )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase>>>::operator[](v1, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 1 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<MonsterEnvAnimalComp,MonsterCompBase>((const std::shared_ptr<MonsterCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<MonsterEnvAnimalComp>::shared_ptr((std::shared_ptr<MonsterEnvAnimalComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<MonsterEnvAnimalComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001323DFC6-000000001323E0B1
std::shared_ptr<MonsterFishComp> __cdecl EcsBase<Monster,MonsterCompBase,4u>::findComp<MonsterFishComp>(
        const EcsBase<Monster,MonsterCompBase,4> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase> >> *v1; // rsi
  std::shared_ptr<MonsterFishComp> result; // rax
  const EcsBase<Monster,MonsterCompBase,4>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase>>>::size(v1) <= 1 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<MonsterCompBase>>>::operator[](v1, 1uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 2 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<MonsterFishComp,MonsterCompBase>((const std::shared_ptr<MonsterCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<MonsterFishComp>::shared_ptr((std::shared_ptr<MonsterFishComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<MonsterFishComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000151C414E-00000000151C4239
std::shared_ptr<NightCrowComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<NightCrowComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<NightCrowComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 0x19 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 0x19uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 26 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<NightCrowComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<NightCrowComp>::shared_ptr((std::shared_ptr<NightCrowComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<NightCrowComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001462CC22-000000001462CD0D
std::shared_ptr<PlatformComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<PlatformComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<PlatformComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 6 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 6uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 7 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlatformComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlatformComp>::shared_ptr((std::shared_ptr<PlatformComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlatformComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000172447E6-00000000172448D1
std::shared_ptr<PlayerAbilityGroupComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerAbilityGroupComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerAbilityGroupComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x25 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x25uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 38 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerAbilityGroupComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerAbilityGroupComp>::shared_ptr((std::shared_ptr<PlayerAbilityGroupComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerAbilityGroupComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017244402-00000000172444ED
std::shared_ptr<PlayerAchievementComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerAchievementComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerAchievementComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x23 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x23uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 36 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerAchievementComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerAchievementComp>::shared_ptr((std::shared_ptr<PlayerAchievementComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerAchievementComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017243976-0000000017243A61
std::shared_ptr<PlayerActivityComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerActivityComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerActivityComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x17 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x17uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 24 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerActivityComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerActivityComp>::shared_ptr((std::shared_ptr<PlayerActivityComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerActivityComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001724638A-0000000017246475
std::shared_ptr<PlayerAranaraCollectionComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerAranaraCollectionComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerAranaraCollectionComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x44 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x44uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 69 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerAranaraCollectionComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerAranaraCollectionComp>::shared_ptr(
      (std::shared_ptr<PlayerAranaraCollectionComp> *const)this,
      0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerAranaraCollectionComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000172424AE-0000000017242599
std::shared_ptr<PlayerAvatarComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerAvatarComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerAvatarComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 1 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 1uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 2 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerAvatarComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerAvatarComp>::shared_ptr((std::shared_ptr<PlayerAvatarComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerAvatarComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000172423A8-0000000017242492
std::shared_ptr<PlayerBasicComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerBasicComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerBasicComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( !std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 1 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerBasicComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerBasicComp>::shared_ptr((std::shared_ptr<PlayerBasicComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerBasicComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017244004-00000000172440EF
std::shared_ptr<PlayerBattlePassComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerBattlePassComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerBattlePassComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x1C )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x1CuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 29 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerBattlePassComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerBattlePassComp>::shared_ptr((std::shared_ptr<PlayerBattlePassComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerBattlePassComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017243D26-0000000017243E11
std::shared_ptr<PlayerBlossomComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerBlossomComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerBlossomComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x1D )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x1DuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 30 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerBlossomComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerBlossomComp>::shared_ptr((std::shared_ptr<PlayerBlossomComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerBlossomComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017242DB0-0000000017242E9B
std::shared_ptr<PlayerBoredComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerBoredComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerBoredComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0xA )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0xAuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 11 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerBoredComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerBoredComp>::shared_ptr((std::shared_ptr<PlayerBoredComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerBoredComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017245F8C-0000000017246077
std::shared_ptr<PlayerCityComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerCityComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerCityComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x3E )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x3EuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 63 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerCityComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerCityComp>::shared_ptr((std::shared_ptr<PlayerCityComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerCityComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017244CB6-0000000017244DA1
std::shared_ptr<PlayerCombineComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerCombineComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerCombineComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x2B )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x2BuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 44 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerCombineComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerCombineComp>::shared_ptr((std::shared_ptr<PlayerCombineComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerCombineComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017242FA2-000000001724308D
std::shared_ptr<PlayerCookComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerCookComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerCookComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0xC )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0xCuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 13 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerCookComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerCookComp>::shared_ptr((std::shared_ptr<PlayerCookComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerCookComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017244AC4-0000000017244BAF
std::shared_ptr<PlayerCoopComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerCoopComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerCoopComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x29 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x29uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 42 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerCoopComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerCoopComp>::shared_ptr((std::shared_ptr<PlayerCoopComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerCoopComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017246092-000000001724617D
std::shared_ptr<PlayerCustomDungeonComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerCustomDungeonComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerCustomDungeonComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x3F )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x3FuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 64 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerCustomDungeonComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerCustomDungeonComp>::shared_ptr((std::shared_ptr<PlayerCustomDungeonComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerCustomDungeonComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000172433A0-000000001724348B
std::shared_ptr<PlayerDailyTaskComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerDailyTaskComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerDailyTaskComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x11 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x11uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 18 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerDailyTaskComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerDailyTaskComp>::shared_ptr((std::shared_ptr<PlayerDailyTaskComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerDailyTaskComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017245378-0000000017245463
std::shared_ptr<PlayerDraftComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerDraftComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerDraftComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x32 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x32uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 51 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerDraftComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerDraftComp>::shared_ptr((std::shared_ptr<PlayerDraftComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerDraftComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017242CAA-0000000017242D95
std::shared_ptr<PlayerEventComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerEventComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerEventComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 9 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 9uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 10 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerEventComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerEventComp>::shared_ptr((std::shared_ptr<PlayerEventComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerEventComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017245982-0000000017245A6D
std::shared_ptr<PlayerExhibitionComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerExhibitionComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerExhibitionComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x38 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x38uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 57 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerExhibitionComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerExhibitionComp>::shared_ptr((std::shared_ptr<PlayerExhibitionComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerExhibitionComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017245E86-0000000017245F71
std::shared_ptr<PlayerFireworksComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerFireworksComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerFireworksComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x3D )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x3DuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 62 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerFireworksComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerFireworksComp>::shared_ptr((std::shared_ptr<PlayerFireworksComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerFireworksComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017245D80-0000000017245E6B
std::shared_ptr<PlayerFishingComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerFishingComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerFishingComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x3C )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x3CuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 61 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerFishingComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerFishingComp>::shared_ptr((std::shared_ptr<PlayerFishingComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerFishingComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001724379E-0000000017243889
std::shared_ptr<PlayerForgeComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerForgeComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerForgeComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x15 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x15uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 22 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerForgeComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerForgeComp>::shared_ptr((std::shared_ptr<PlayerForgeComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerForgeComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001724669C-0000000017246787
std::shared_ptr<PlayerGCGComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerGCGComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerGCGComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x45 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x45uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 70 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerGCGComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerGCGComp>::shared_ptr((std::shared_ptr<PlayerGCGComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerGCGComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017243592-000000001724367D
std::shared_ptr<PlayerGachaComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerGachaComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerGachaComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x13 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x13uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 20 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerGachaComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerGachaComp>::shared_ptr((std::shared_ptr<PlayerGachaComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerGachaComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001724547E-0000000017245569
std::shared_ptr<PlayerGalleryComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerGalleryComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerGalleryComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x33 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x33uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 52 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerGalleryComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerGalleryComp>::shared_ptr((std::shared_ptr<PlayerGalleryComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerGalleryComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017243698-0000000017243783
std::shared_ptr<PlayerGivingComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerGivingComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerGivingComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x14 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x14uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 21 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerGivingComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerGivingComp>::shared_ptr((std::shared_ptr<PlayerGivingComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerGivingComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000172425B4-000000001724269F
std::shared_ptr<PlayerGmComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerGmComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerGmComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 2 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 2uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 3 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerGmComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerGmComp>::shared_ptr((std::shared_ptr<PlayerGmComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerGmComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017245C94-0000000017245D7F
std::shared_ptr<PlayerGroupLinkComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerGroupLinkComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerGroupLinkComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x3B )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x3BuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 60 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerGroupLinkComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerGroupLinkComp>::shared_ptr((std::shared_ptr<PlayerGroupLinkComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerGroupLinkComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017245896-0000000017245981
std::shared_ptr<PlayerH5ActivityComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerH5ActivityComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerH5ActivityComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x37 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x37uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 56 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerH5ActivityComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerH5ActivityComp>::shared_ptr((std::shared_ptr<PlayerH5ActivityComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerH5ActivityComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001724568A-0000000017245775
std::shared_ptr<PlayerHomeComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerHomeComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerHomeComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x35 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x35uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 54 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerHomeComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerHomeComp>::shared_ptr((std::shared_ptr<PlayerHomeComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerHomeComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000172446FA-00000000172447E5
std::shared_ptr<PlayerHuntingComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerHuntingComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerHuntingComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x28 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x28uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 41 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerHuntingComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerHuntingComp>::shared_ptr((std::shared_ptr<PlayerHuntingComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerHuntingComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001724388A-0000000017243975
std::shared_ptr<PlayerInvestigationComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerInvestigationComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerInvestigationComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x16 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x16uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 23 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerInvestigationComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerInvestigationComp>::shared_ptr((std::shared_ptr<PlayerInvestigationComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerInvestigationComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000172429B2-0000000017242A9D
std::shared_ptr<PlayerItemComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerItemComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerItemComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 6 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 6uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 7 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerItemComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerItemComp>::shared_ptr((std::shared_ptr<PlayerItemComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerItemComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017245B8E-0000000017245C79
std::shared_ptr<PlayerLiveComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerLiveComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerLiveComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x3A )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x3AuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 59 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerLiveComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerLiveComp>::shared_ptr((std::shared_ptr<PlayerLiveComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerLiveComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000172431AE-0000000017243299
std::shared_ptr<PlayerLoginComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerLoginComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerLoginComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0xF )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0xFuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 16 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerLoginComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerLoginComp>::shared_ptr((std::shared_ptr<PlayerLoginComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerLoginComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000172430A8-0000000017243193
std::shared_ptr<PlayerMailComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerMailComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerMailComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0xE )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0xEuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 15 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerMailComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerMailComp>::shared_ptr((std::shared_ptr<PlayerMailComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerMailComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000172440F0-00000000172441DB
std::shared_ptr<PlayerMatchComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerMatchComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerMatchComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x1F )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x1FuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 32 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerMatchComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerMatchComp>::shared_ptr((std::shared_ptr<PlayerMatchComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerMatchComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017245186-0000000017245271
std::shared_ptr<PlayerMechanicusComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerMechanicusComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerMechanicusComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x30 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x30uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 49 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerMechanicusComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerMechanicusComp>::shared_ptr((std::shared_ptr<PlayerMechanicusComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerMechanicusComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001724509A-0000000017245185
std::shared_ptr<PlayerMiracleRingComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerMiracleRingComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerMiracleRingComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x2F )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x2FuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 48 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerMiracleRingComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerMiracleRingComp>::shared_ptr((std::shared_ptr<PlayerMiracleRingComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerMiracleRingComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017242E9C-0000000017242F87
std::shared_ptr<PlayerMpComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerMpComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerMpComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0xB )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0xBuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 12 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerMpComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerMpComp>::shared_ptr((std::shared_ptr<PlayerMpComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerMpComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000172442FC-00000000172443E7
std::shared_ptr<PlayerMpPlayComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerMpPlayComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerMpPlayComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x20 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x20uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 33 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerMpPlayComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerMpPlayComp>::shared_ptr((std::shared_ptr<PlayerMpPlayComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerMpPlayComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017246596-0000000017246681
std::shared_ptr<PlayerPolygonComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerPolygonComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerPolygonComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x43 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x43uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 68 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerPolygonComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerPolygonComp>::shared_ptr((std::shared_ptr<PlayerPolygonComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerPolygonComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000172426BA-00000000172427A5
std::shared_ptr<PlayerQuestComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerQuestComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerQuestComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 3 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 4 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerQuestComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerQuestComp>::shared_ptr((std::shared_ptr<PlayerQuestComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerQuestComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001724348C-0000000017243577
std::shared_ptr<PlayerRandTaskComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerRandTaskComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerRandTaskComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x12 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x12uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 19 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerRandTaskComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerRandTaskComp>::shared_ptr((std::shared_ptr<PlayerRandTaskComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerRandTaskComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017243F18-0000000017244003
std::shared_ptr<PlayerRechargeComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerRechargeComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerRechargeComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x1E )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x1EuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 31 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerRechargeComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerRechargeComp>::shared_ptr((std::shared_ptr<PlayerRechargeComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerRechargeComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017245584-000000001724566F
std::shared_ptr<PlayerRegionSearchComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerRegionSearchComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerRegionSearchComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x34 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x34uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 53 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerRegionSearchComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerRegionSearchComp>::shared_ptr((std::shared_ptr<PlayerRegionSearchComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerRegionSearchComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017246284-000000001724636F
std::shared_ptr<PlayerRegionalPlayComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerRegionalPlayComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerRegionalPlayComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x40 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x40uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 65 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerRegionalPlayComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerRegionalPlayComp>::shared_ptr((std::shared_ptr<PlayerRegionalPlayComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerRegionalPlayComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017244EC2-0000000017244FAD
std::shared_ptr<PlayerReunionComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerReunionComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerReunionComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x2E )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x2EuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 47 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerReunionComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerReunionComp>::shared_ptr((std::shared_ptr<PlayerReunionComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerReunionComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017244FAE-0000000017245099
std::shared_ptr<PlayerRoutineComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerRoutineComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerRoutineComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x2D )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x2DuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 46 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerRoutineComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerRoutineComp>::shared_ptr((std::shared_ptr<PlayerRoutineComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerRoutineComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017242BBE-0000000017242CA9
std::shared_ptr<PlayerSceneComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerSceneComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerSceneComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 8 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 9 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerSceneComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerSceneComp>::shared_ptr((std::shared_ptr<PlayerSceneComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerSceneComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017244BB0-0000000017244C9B
std::shared_ptr<PlayerScenePlayComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerScenePlayComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerScenePlayComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x2A )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x2AuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 43 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerScenePlayComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerScenePlayComp>::shared_ptr((std::shared_ptr<PlayerScenePlayComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerScenePlayComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000172428AC-0000000017242997
std::shared_ptr<PlayerShopComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerShopComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerShopComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 5 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 5uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 6 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerShopComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerShopComp>::shared_ptr((std::shared_ptr<PlayerShopComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerShopComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017243E2C-0000000017243F17
std::shared_ptr<PlayerSignInComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerSignInComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerSignInComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x1B )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x1BuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 28 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerSignInComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerSignInComp>::shared_ptr((std::shared_ptr<PlayerSignInComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerSignInComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017243B4E-0000000017243C39
std::shared_ptr<PlayerSocialComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerSocialComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerSocialComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x19 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x19uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 26 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerSocialComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerSocialComp>::shared_ptr((std::shared_ptr<PlayerSocialComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerSocialComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000172427A6-0000000017242891
std::shared_ptr<PlayerTalkComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerTalkComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerTalkComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 4 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 4uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 5 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerTalkComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerTalkComp>::shared_ptr((std::shared_ptr<PlayerTalkComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerTalkComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017243C3A-0000000017243D25
std::shared_ptr<PlayerTowerComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerTowerComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerTowerComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x1A )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x1AuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 27 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerTowerComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerTowerComp>::shared_ptr((std::shared_ptr<PlayerTowerComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerTowerComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000172441F6-00000000172442E1
std::shared_ptr<PlayerTrialAvatarComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerTrialAvatarComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerTrialAvatarComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x21 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x21uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 34 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerTrialAvatarComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerTrialAvatarComp>::shared_ptr((std::shared_ptr<PlayerTrialAvatarComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerTrialAvatarComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001724617E-0000000017246269
std::shared_ptr<PlayerUgcComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerUgcComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerUgcComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x42 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x42uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 67 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerUgcComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerUgcComp>::shared_ptr((std::shared_ptr<PlayerUgcComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerUgcComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017245A88-0000000017245B73
std::shared_ptr<PlayerVehicleComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerVehicleComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerVehicleComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x39 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x39uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 58 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerVehicleComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerVehicleComp>::shared_ptr((std::shared_ptr<PlayerVehicleComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerVehicleComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000017243A62-0000000017243B4D
std::shared_ptr<PlayerWatcherComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerWatcherComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerWatcherComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x18 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x18uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 25 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerWatcherComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerWatcherComp>::shared_ptr((std::shared_ptr<PlayerWatcherComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerWatcherComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000172449D8-0000000017244AC3
std::shared_ptr<PlayerWidgetComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerWidgetComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerWidgetComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x27 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x27uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 40 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerWidgetComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerWidgetComp>::shared_ptr((std::shared_ptr<PlayerWidgetComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerWidgetComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000013EC704C-0000000013EC7137
std::shared_ptr<SceneAreaComp> __cdecl EcsBase<Scene,SceneCompBase,12u>::findComp<SceneAreaComp>(
        const EcsBase<Scene,SceneCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase> >> *v1; // rsi
  std::shared_ptr<SceneAreaComp> result; // rax
  const EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(v1) <= 2 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](v1, 2uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 3 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<SceneAreaComp,SceneCompBase>((const std::shared_ptr<SceneCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<SceneAreaComp>::shared_ptr((std::shared_ptr<SceneAreaComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<SceneAreaComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001320436E-0000000013204459
std::shared_ptr<SceneBlockGroupComp> __cdecl EcsBase<Scene,SceneCompBase,12u>::findComp<SceneBlockGroupComp>(
        const EcsBase<Scene,SceneCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase> >> *v1; // rsi
  std::shared_ptr<SceneBlockGroupComp> result; // rax
  const EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(v1) <= 3 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](v1, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 4 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<SceneBlockGroupComp,SceneCompBase>((const std::shared_ptr<SceneCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<SceneBlockGroupComp>::shared_ptr((std::shared_ptr<SceneBlockGroupComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<SceneBlockGroupComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000013EC7258-0000000013EC7342
std::shared_ptr<SceneEnvAnimalComp> __cdecl EcsBase<Scene,SceneCompBase,12u>::findComp<SceneEnvAnimalComp>(
        const EcsBase<Scene,SceneCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase> >> *v1; // rsi
  std::shared_ptr<SceneEnvAnimalComp> result; // rax
  const EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( !std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(v1) )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](v1, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 1 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<SceneEnvAnimalComp,SceneCompBase>((const std::shared_ptr<SceneCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<SceneEnvAnimalComp>::shared_ptr((std::shared_ptr<SceneEnvAnimalComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<SceneEnvAnimalComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000013204474-000000001320455F
std::shared_ptr<SceneGalleryComp> __cdecl EcsBase<Scene,SceneCompBase,12u>::findComp<SceneGalleryComp>(
        const EcsBase<Scene,SceneCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase> >> *v1; // rsi
  std::shared_ptr<SceneGalleryComp> result; // rax
  const EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(v1) <= 8 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](v1, 8uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 9 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<SceneGalleryComp,SceneCompBase>((const std::shared_ptr<SceneCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<SceneGalleryComp>::shared_ptr((std::shared_ptr<SceneGalleryComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<SceneGalleryComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001324A226-000000001324A311
std::shared_ptr<SceneHomeComp> __cdecl EcsBase<Scene,SceneCompBase,12u>::findComp<SceneHomeComp>(
        const EcsBase<Scene,SceneCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase> >> *v1; // rsi
  std::shared_ptr<SceneHomeComp> result; // rax
  const EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(v1) <= 9 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](v1, 9uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 10 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<SceneHomeComp,SceneCompBase>((const std::shared_ptr<SceneCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<SceneHomeComp>::shared_ptr((std::shared_ptr<SceneHomeComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<SceneHomeComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000149F7022-00000000149F710D
std::shared_ptr<SceneMiscComp> __cdecl EcsBase<Scene,SceneCompBase,12u>::findComp<SceneMiscComp>(
        const EcsBase<Scene,SceneCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase> >> *v1; // rsi
  std::shared_ptr<SceneMiscComp> result; // rax
  const EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(v1) <= 4 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](v1, 4uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 5 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<SceneMiscComp,SceneCompBase>((const std::shared_ptr<SceneCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<SceneMiscComp>::shared_ptr((std::shared_ptr<SceneMiscComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<SceneMiscComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 000000001385EE2C-000000001385EF17
std::shared_ptr<SceneMultistagePlayComp> __cdecl EcsBase<Scene,SceneCompBase,12u>::findComp<SceneMultistagePlayComp>(
        const EcsBase<Scene,SceneCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase> >> *v1; // rsi
  std::shared_ptr<SceneMultistagePlayComp> result; // rax
  const EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(v1) <= 7 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](v1, 7uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 8 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<SceneMultistagePlayComp,SceneCompBase>((const std::shared_ptr<SceneCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<SceneMultistagePlayComp>::shared_ptr((std::shared_ptr<SceneMultistagePlayComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<SceneMultistagePlayComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000015A25990-0000000015A25A7B
std::shared_ptr<SceneSightComp> __cdecl EcsBase<Scene,SceneCompBase,12u>::findComp<SceneSightComp>(
        const EcsBase<Scene,SceneCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase> >> *v1; // rsi
  std::shared_ptr<SceneSightComp> result; // rax
  const EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(v1) <= 1 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](v1, 1uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 2 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<SceneSightComp,SceneCompBase>((const std::shared_ptr<SceneCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<SceneSightComp>::shared_ptr((std::shared_ptr<SceneSightComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<SceneSightComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000013EC7152-0000000013EC723D
std::shared_ptr<SceneTransferGuardComp> __cdecl EcsBase<Scene,SceneCompBase,12u>::findComp<SceneTransferGuardComp>(
        const EcsBase<Scene,SceneCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase> >> *v1; // rsi
  std::shared_ptr<SceneTransferGuardComp> result; // rax
  const EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(v1) <= 0xA )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](v1, 0xAuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 11 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<SceneTransferGuardComp,SceneCompBase>((const std::shared_ptr<SceneCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<SceneTransferGuardComp>::shared_ptr((std::shared_ptr<SceneTransferGuardComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<SceneTransferGuardComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000138DB86E-00000000138DB959
std::shared_ptr<SkillComp> __cdecl EcsBase<Avatar,AvatarCompBase,7u>::findComp<SkillComp>(
        const EcsBase<Avatar,AvatarCompBase,7> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase> >> *v1; // rsi
  std::shared_ptr<SkillComp> result; // rax
  const EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::size(v1) <= 1 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::operator[](v1, 1uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 2 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<SkillComp,AvatarCompBase>((const std::shared_ptr<AvatarCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<SkillComp>::shared_ptr((std::shared_ptr<SkillComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<SkillComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000138DBA7A-00000000138DBB65
std::shared_ptr<TalentComp> __cdecl EcsBase<Avatar,AvatarCompBase,7u>::findComp<TalentComp>(
        const EcsBase<Avatar,AvatarCompBase,7> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase> >> *v1; // rsi
  std::shared_ptr<TalentComp> result; // rax
  const EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::size(v1) <= 3 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::operator[](v1, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 4 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<TalentComp,AvatarCompBase>((const std::shared_ptr<AvatarCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<TalentComp>::shared_ptr((std::shared_ptr<TalentComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<TalentComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000014A0E466-0000000014A0E550
std::shared_ptr<TowerDefensePlay> __cdecl EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2u>::findComp<TowerDefensePlay>(
        const EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<SceneMultistagePlayCompBase> >> *v1; // rsi
  std::shared_ptr<TowerDefensePlay> result; // rax
  const EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( !std::vector<std::pair<unsigned int,std::shared_ptr<SceneMultistagePlayCompBase>>>::size(v1) )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneMultistagePlayCompBase>>>::operator[](v1, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 1 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<TowerDefensePlay,SceneMultistagePlayCompBase>((const std::shared_ptr<SceneMultistagePlayCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<TowerDefensePlay>::shared_ptr((std::shared_ptr<TowerDefensePlay> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<TowerDefensePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000015D6E9EA-0000000015D6EAD5
std::shared_ptr<TrifleComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<TrifleComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<TrifleComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 3 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 4 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<TrifleComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<TrifleComp>::shared_ptr((std::shared_ptr<TrifleComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<TrifleComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 00000000176B8E08-00000000176B8EF3
std::shared_ptr<WidgetGadgetComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<WidgetGadgetComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<WidgetGadgetComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 0x18 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 0x18uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 25 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<WidgetGadgetComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<WidgetGadgetComp>::shared_ptr((std::shared_ptr<WidgetGadgetComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<WidgetGadgetComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 136: range 0000000014A00ECE-0000000014A00FB9
std::shared_ptr<WorktopComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<WorktopComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<WorktopComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 9 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 9uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 10 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<WorktopComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<WorktopComp>::shared_ptr((std::shared_ptr<WorktopComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<WorktopComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 157: range 0000000017221E1C-0000000017221E46
void __cdecl EcsBase<Player,PlayerCompBase,71u>::clearAllComp(EcsBase<Player,PlayerCompBase,71> *const this)
{
  std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::clear(&this->comp_vec_);
  std::vector<unsigned int>::clear(&this->type_vec_);
};

// Line 164: range 00000000138D77A2-00000000138D77CF
EcsBase<Avatar,AvatarCompBase,7>::Iterator __cdecl EcsBase<Avatar,AvatarCompBase,7u>::begin(
        const EcsBase<Avatar,AvatarCompBase,7> *const this)
{
  const EcsBase<Avatar,AvatarCompBase,7> *v1; // rsi
  EcsBase<Avatar,AvatarCompBase,7>::Iterator result; // 0:rax.12

  EcsBase<Avatar,AvatarCompBase,7u>::Iterator::Iterator((EcsBase<Avatar,AvatarCompBase,7>::Iterator *const)this, v1, 0);
  result.ecs_base_ = this;
  return result;
};

// Line 164: range 000000001624FED6-000000001624FF03
EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator __cdecl EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::begin(
        const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const this)
{
  const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *v1; // rsi
  EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator result; // 0:rax.12

  EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::Iterator(
    (EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator *const)this,
    v1,
    0);
  result.ecs_base_ = this;
  return result;
};

// Line 164: range 0000000015D6FF2C-0000000015D6FF59
EcsBase<Gadget,GadgetCompBase,28>::Iterator __cdecl EcsBase<Gadget,GadgetCompBase,28u>::begin(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const EcsBase<Gadget,GadgetCompBase,28> *v1; // rsi
  EcsBase<Gadget,GadgetCompBase,28>::Iterator result; // 0:rax.12

  EcsBase<Gadget,GadgetCompBase,28u>::Iterator::Iterator(
    (EcsBase<Gadget,GadgetCompBase,28>::Iterator *const)this,
    v1,
    0);
  result.ecs_base_ = this;
  return result;
};

// Line 164: range 0000000014643CDA-0000000014643D07
EcsBase<Home,HomeCompBase,12>::Iterator __cdecl EcsBase<Home,HomeCompBase,12u>::begin(
        const EcsBase<Home,HomeCompBase,12> *const this)
{
  const EcsBase<Home,HomeCompBase,12> *v1; // rsi
  EcsBase<Home,HomeCompBase,12>::Iterator result; // 0:rax.12

  EcsBase<Home,HomeCompBase,12u>::Iterator::Iterator((EcsBase<Home,HomeCompBase,12>::Iterator *const)this, v1, 0);
  result.ecs_base_ = this;
  return result;
};

// Line 164: range 000000001721C192-000000001721C1BF
EcsBase<Monster,MonsterCompBase,4>::Iterator __cdecl EcsBase<Monster,MonsterCompBase,4u>::begin(
        const EcsBase<Monster,MonsterCompBase,4> *const this)
{
  const EcsBase<Monster,MonsterCompBase,4> *v1; // rsi
  EcsBase<Monster,MonsterCompBase,4>::Iterator result; // 0:rax.12

  EcsBase<Monster,MonsterCompBase,4u>::Iterator::Iterator(
    (EcsBase<Monster,MonsterCompBase,4>::Iterator *const)this,
    v1,
    0);
  result.ecs_base_ = this;
  return result;
};

// Line 164: range 000000001723D880-000000001723D8AD
EcsBase<Player,PlayerCompBase,71>::Iterator __cdecl EcsBase<Player,PlayerCompBase,71u>::begin(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const EcsBase<Player,PlayerCompBase,71> *v1; // rsi
  EcsBase<Player,PlayerCompBase,71>::Iterator result; // 0:rax.12

  EcsBase<Player,PlayerCompBase,71u>::Iterator::Iterator(
    (EcsBase<Player,PlayerCompBase,71>::Iterator *const)this,
    v1,
    0);
  result.ecs_base_ = this;
  return result;
};

// Line 164: range 0000000015A30468-0000000015A30495
EcsBase<Scene,SceneCompBase,12>::Iterator __cdecl EcsBase<Scene,SceneCompBase,12u>::begin(
        const EcsBase<Scene,SceneCompBase,12> *const this)
{
  const EcsBase<Scene,SceneCompBase,12> *v1; // rsi
  EcsBase<Scene,SceneCompBase,12>::Iterator result; // 0:rax.12

  EcsBase<Scene,SceneCompBase,12u>::Iterator::Iterator((EcsBase<Scene,SceneCompBase,12>::Iterator *const)this, v1, 0);
  result.ecs_base_ = this;
  return result;
};

// Line 165: range 00000000138D77D0-00000000138D780A
EcsBase<Avatar,AvatarCompBase,7>::Iterator __cdecl EcsBase<Avatar,AvatarCompBase,7u>::end(
        const EcsBase<Avatar,AvatarCompBase,7> *const this)
{
  const EcsBase<Avatar,AvatarCompBase,7> *v1; // rsi
  uint32_t v2; // edx
  EcsBase<Avatar,AvatarCompBase,7>::Iterator result; // 0:rax.12

  v2 = std::vector<unsigned int>::size(&v1->type_vec_);
  EcsBase<Avatar,AvatarCompBase,7u>::Iterator::Iterator((EcsBase<Avatar,AvatarCompBase,7>::Iterator *const)this, v1, v2);
  result.ecs_base_ = this;
  return result;
};

// Line 165: range 000000001624FF04-000000001624FF3E
EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator __cdecl EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::end(
        const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *const this)
{
  const EcsBase<FormalAvatar,FormalAvatarCompBase,3> *v1; // rsi
  uint32_t v2; // edx
  EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator result; // 0:rax.12

  v2 = std::vector<unsigned int>::size(&v1->type_vec_);
  EcsBase<FormalAvatar,FormalAvatarCompBase,3u>::Iterator::Iterator(
    (EcsBase<FormalAvatar,FormalAvatarCompBase,3>::Iterator *const)this,
    v1,
    v2);
  result.ecs_base_ = this;
  return result;
};

// Line 165: range 0000000015D6FF5A-0000000015D6FF94
EcsBase<Gadget,GadgetCompBase,28>::Iterator __cdecl EcsBase<Gadget,GadgetCompBase,28u>::end(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const EcsBase<Gadget,GadgetCompBase,28> *v1; // rsi
  uint32_t v2; // edx
  EcsBase<Gadget,GadgetCompBase,28>::Iterator result; // 0:rax.12

  v2 = std::vector<unsigned int>::size(&v1->type_vec_);
  EcsBase<Gadget,GadgetCompBase,28u>::Iterator::Iterator(
    (EcsBase<Gadget,GadgetCompBase,28>::Iterator *const)this,
    v1,
    v2);
  result.ecs_base_ = this;
  return result;
};

// Line 165: range 0000000014643D08-0000000014643D42
EcsBase<Home,HomeCompBase,12>::Iterator __cdecl EcsBase<Home,HomeCompBase,12u>::end(
        const EcsBase<Home,HomeCompBase,12> *const this)
{
  const EcsBase<Home,HomeCompBase,12> *v1; // rsi
  uint32_t v2; // edx
  EcsBase<Home,HomeCompBase,12>::Iterator result; // 0:rax.12

  v2 = std::vector<unsigned int>::size(&v1->type_vec_);
  EcsBase<Home,HomeCompBase,12u>::Iterator::Iterator((EcsBase<Home,HomeCompBase,12>::Iterator *const)this, v1, v2);
  result.ecs_base_ = this;
  return result;
};

// Line 165: range 000000001721C1C0-000000001721C1FA
EcsBase<Monster,MonsterCompBase,4>::Iterator __cdecl EcsBase<Monster,MonsterCompBase,4u>::end(
        const EcsBase<Monster,MonsterCompBase,4> *const this)
{
  const EcsBase<Monster,MonsterCompBase,4> *v1; // rsi
  uint32_t v2; // edx
  EcsBase<Monster,MonsterCompBase,4>::Iterator result; // 0:rax.12

  v2 = std::vector<unsigned int>::size(&v1->type_vec_);
  EcsBase<Monster,MonsterCompBase,4u>::Iterator::Iterator(
    (EcsBase<Monster,MonsterCompBase,4>::Iterator *const)this,
    v1,
    v2);
  result.ecs_base_ = this;
  return result;
};

// Line 165: range 000000001723D8AE-000000001723D8E8
EcsBase<Player,PlayerCompBase,71>::Iterator __cdecl EcsBase<Player,PlayerCompBase,71u>::end(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const EcsBase<Player,PlayerCompBase,71> *v1; // rsi
  uint32_t v2; // edx
  EcsBase<Player,PlayerCompBase,71>::Iterator result; // 0:rax.12

  v2 = std::vector<unsigned int>::size(&v1->type_vec_);
  EcsBase<Player,PlayerCompBase,71u>::Iterator::Iterator(
    (EcsBase<Player,PlayerCompBase,71>::Iterator *const)this,
    v1,
    v2);
  result.ecs_base_ = this;
  return result;
};

// Line 165: range 0000000015A30496-0000000015A304D0
EcsBase<Scene,SceneCompBase,12>::Iterator __cdecl EcsBase<Scene,SceneCompBase,12u>::end(
        const EcsBase<Scene,SceneCompBase,12> *const this)
{
  const EcsBase<Scene,SceneCompBase,12> *v1; // rsi
  uint32_t v2; // edx
  EcsBase<Scene,SceneCompBase,12>::Iterator result; // 0:rax.12

  v2 = std::vector<unsigned int>::size(&v1->type_vec_);
  EcsBase<Scene,SceneCompBase,12u>::Iterator::Iterator((EcsBase<Scene,SceneCompBase,12>::Iterator *const)this, v1, v2);
  result.ecs_base_ = this;
  return result;
};

// Line 177: range 0000000013EB73A6-0000000013EB742C
void __cdecl PlayerCompBase::PlayerCompBase(PlayerCompBase *const this, Player *player)
{
  int (**v2)(...); // rdx

  std::enable_shared_from_this<PlayerCompBase>::enable_shared_from_this(&this->std::enable_shared_from_this<PlayerCompBase>);
  v2 = (int (**)(...))(&`vtable for'PlayerCompBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_);
  this->player_ = player;
};

// Line 178: range 0000000013EBFD1A-0000000013EBFD44
void __cdecl PlayerCompBase::~PlayerCompBase(PlayerCompBase *const this)
{
  PlayerCompBase::~PlayerCompBase(this);
  operator delete(this, 0x20uLL);
};

// Line 178: range 0000000013EBFCC8-0000000013EBFD19
void __cdecl PlayerCompBase::~PlayerCompBase(PlayerCompBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PlayerCompBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_PlayerCompBase = v1;
  std::enable_shared_from_this<PlayerCompBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<PlayerCompBase>);
};

// Line 182: range 0000000013EB742E-0000000013EB7468
Player *__cdecl PlayerCompBase::getPlayer(PlayerCompBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->player_;
};

// Line 188: range 0000000013EB746A-0000000013EB747C
int32_t __cdecl PlayerCompBase::fromBin(PlayerCompBase *const this, const proto::PlayerDataBin *player_data_bin)
{
  return 0;
};

// Line 191: range 0000000013EB747E-0000000013EB7490
int32_t __cdecl PlayerCompBase::toBin(PlayerCompBase *const this, proto::PlayerDataBin *player_data_bin)
{
  return 0;
};

// Line 194: range 0000000013EB7492-0000000013EB74A4
int32_t __cdecl PlayerCompBase::fromExtraBin(
        PlayerCompBase *const this,
        const proto::PlayerExtraBinData *player_extra_bin_data)
{
  return 0;
};

// Line 195: range 0000000013EB74A6-0000000013EB74B8
int32_t __cdecl PlayerCompBase::toExtraBin(
        PlayerCompBase *const this,
        proto::PlayerExtraBinData *player_extra_bin_data)
{
  return 0;
};

// Line 199: range 0000000013EB74BA-0000000013EB74C8
int32_t __cdecl PlayerCompBase::init(PlayerCompBase *const this)
{
  return 0;
};

// Line 202: range 0000000013EB74CA-0000000013EB74D8
int32_t __cdecl PlayerCompBase::start(PlayerCompBase *const this)
{
  return 0;
};

// Line 205: range 0000000013EB74DA-0000000013EB74E8
int32_t __cdecl PlayerCompBase::onFirstLogin(PlayerCompBase *const this)
{
  return 0;
};

// Line 208: range 0000000013EB74EA-0000000013EB74FD
int32_t __cdecl PlayerCompBase::onLogin(PlayerCompBase *const this, bool is_new_player)
{
  return 0;
};

// Line 211: range 0000000013EB74FE-0000000013EB750C
int32_t __cdecl PlayerCompBase::notifyAllData(PlayerCompBase *const this)
{
  return 0;
};

// Line 214: range 0000000013EB750E-0000000013EB751C
int32_t __cdecl PlayerCompBase::onDisconnect(PlayerCompBase *const this)
{
  return 0;
};

// Line 217: range 0000000013EB751E-0000000013EB752C
int32_t __cdecl PlayerCompBase::onReconnect(PlayerCompBase *const this)
{
  return 0;
};

// Line 220: range 0000000013EB752E-0000000013EB753C
int32_t __cdecl PlayerCompBase::onLogout(PlayerCompBase *const this)
{
  return 0;
};

// Line 223: range 0000000013EB755E-0000000013EB7649
std::pair<int,std::vector<unsigned int> > *__cdecl PlayerCompBase::checkMpModeAvailability(
        std::pair<int,std::vector<unsigned int> > *retstr,
        const PlayerCompBase *const this)
{
  int __x; // [rsp+1Ch] [rbp-34h] BYREF
  std::vector<unsigned int> __y; // [rsp+20h] [rbp-30h] BYREF

  memset(&__y, 0, sizeof(__y));
  std::vector<unsigned int>::vector(&__y);
  __x = 0;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->second._M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second._M_impl._M_end_of_storage
                                                          + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::make_pair<int,std::vector<unsigned int>>(retstr, &__x, &__y);
  std::vector<unsigned int>::~vector(&__y);
  return retstr;
};

// Line 226: range 0000000013EB764A-0000000013EB7654
void __cdecl PlayerCompBase::onDailyRefresh(PlayerCompBase *const this)
{
  ;
};

// Line 228: range 0000000013EB7656-0000000013EB7660
void __cdecl PlayerCompBase::onLoginDailyRefresh(PlayerCompBase *const this)
{
  ;
};

// Line 230: range 0000000013EB7662-0000000013EB766C
void __cdecl PlayerCompBase::onMonthlyRefresh(PlayerCompBase *const this)
{
  ;
};

// Line 232: range 0000000013EB766E-0000000013EB7678
void __cdecl PlayerCompBase::onLoginMonthlyRefresh(PlayerCompBase *const this)
{
  ;
};

// Line 235: range 0000000013EB767A-0000000013EB7684
void __cdecl PlayerCompBase::onLeaveScene(PlayerCompBase *const this)
{
  ;
};

// Line 238: range 0000000013EB7686-0000000013EB7699
void __cdecl PlayerCompBase::onEnterScene(PlayerCompBase *const this, ScenePtr *p_scene_ptr, bool is_reenter)
{
  ;
};

// Line 253: range 0000000015D4A480-0000000015D4A56B
std::shared_ptr<SceneRoomSightComp> __cdecl EcsBase<Scene,SceneCompBase,12u>::findComp<SceneRoomSightComp>(
        const EcsBase<Scene,SceneCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase> >> *v1; // rsi
  std::shared_ptr<SceneRoomSightComp> result; // rax
  const EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(v1) <= 1 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](v1, 1uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 2 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<SceneRoomSightComp,SceneCompBase>((const std::shared_ptr<SceneCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<SceneRoomSightComp>::shared_ptr((std::shared_ptr<SceneRoomSightComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<SceneRoomSightComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 253: range 0000000014611812-000000001461183C
void __cdecl EntityCompBase::~EntityCompBase(EntityCompBase *const this)
{
  EntityCompBase::~EntityCompBase(this);
  operator delete(this, 0x20uLL);
};

// Line 266: range 000000001460E518-000000001460E58E
void __cdecl CreatureCompBase::CreatureCompBase(CreatureCompBase *const this, Creature *creature)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CreatureCompBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_CreatureCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->creature_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->creature_);
  this->creature_ = creature;
};

// Line 267: range 0000000014611D6C-0000000014611D96
void __cdecl CreatureCompBase::~CreatureCompBase(CreatureCompBase *const this)
{
  CreatureCompBase::~CreatureCompBase(this);
  operator delete(this, 0x10uLL);
};

// Line 267: range 0000000014611D2A-0000000014611D6B
void __cdecl CreatureCompBase::~CreatureCompBase(CreatureCompBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CreatureCompBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_CreatureCompBase = v1;
};

// Line 284: range 00000000131E4B94-00000000131E4BBE
void __cdecl GadgetCompBase::~GadgetCompBase(GadgetCompBase *const this)
{
  GadgetCompBase::~GadgetCompBase(this);
  operator delete(this, 0x10uLL);
};

// Line 284: range 00000000131E4B52-00000000131E4B93
void __cdecl GadgetCompBase::~GadgetCompBase(GadgetCompBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'GadgetCompBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v1;
};

// Line 286: range 00000000131C4854-00000000131C488E
Gadget *__cdecl GadgetCompBase::getGadget(GadgetCompBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->gadget_;
};

// Line 287: range 000000001762B772-000000001762B7AC
const Gadget *__cdecl GadgetCompBase::getGadget(const GadgetCompBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->gadget_;
};

// Line 290: range 00000000131C4890-00000000131C489E
int32_t __cdecl GadgetCompBase::init(GadgetCompBase *const this)
{
  return 0;
};

// Line 293: range 00000000131C48A0-00000000131C48B2
int32_t __cdecl GadgetCompBase::initByConfig(GadgetCompBase *const this, const GadgetParam *gadget_param)
{
  return 0;
};

// Line 296: range 00000000131C48B4-00000000131C48C2
int32_t __cdecl GadgetCompBase::start(GadgetCompBase *const this)
{
  return 0;
};

// Line 299: range 00000000131C48C4-00000000131C48D6
int32_t __cdecl GadgetCompBase::toBin(const GadgetCompBase *const this, proto::GroupGadgetBin *bin)
{
  return 0;
};

// Line 302: range 00000000131C48D8-00000000131C48EA
int32_t __cdecl GadgetCompBase::fromBin(GadgetCompBase *const this, const proto::GroupGadgetBin *bin)
{
  return 0;
};

// Line 305: range 00000000131C48EC-00000000131C48FE
int32_t __cdecl GadgetCompBase::toClient(const GadgetCompBase *const this, proto::SceneGadgetInfo *gadget_info)
{
  return 0;
};

// Line 307: range 00000000131C4900-00000000131C490A
void __cdecl GadgetCompBase::onAppear(GadgetCompBase *const this)
{
  ;
};

// Line 309: range 00000000131C490C-00000000131C4922
int32_t __cdecl GadgetCompBase::doHurt(GadgetCompBase *const this, Creature *attacker, HurtContext *context)
{
  return -1;
};

// Line 312: range 00000000131C4924-00000000131C4936
int32_t __cdecl GadgetCompBase::beforeEnterPlayerView(GadgetCompBase *const this, Player *player)
{
  return 0;
};

// Line 315: range 00000000131C4938-00000000131C494A
int32_t __cdecl GadgetCompBase::onEnterPlayerView(GadgetCompBase *const this, Player *player)
{
  return 0;
};

// Line 318: range 00000000131C494C-00000000131C495E
int32_t __cdecl GadgetCompBase::onExitPlayerView(GadgetCompBase *const this, Player *player)
{
  return 0;
};

// Line 321: range 00000000131C4960-00000000131C496E
int32_t __cdecl GadgetCompBase::revertInitState(GadgetCompBase *const this)
{
  return -1;
};

// Line 324: range 00000000131C4970-00000000131C497A
void __cdecl GadgetCompBase::onDie(GadgetCompBase *const this)
{
  ;
};

// Line 326: range 00000000131C497C-00000000131C4992
int32_t __cdecl GadgetCompBase::onAfterEnterScene(
        GadgetCompBase *const this,
        Scene *scene,
        const VisionContext *context)
{
  return 0;
};

// Line 339: range 00000000168168F0-000000001681691A
void __cdecl MonsterCompBase::~MonsterCompBase(MonsterCompBase *const this)
{
  MonsterCompBase::~MonsterCompBase(this);
  operator delete(this, 0x10uLL);
};

// Line 339: range 00000000168168AE-00000000168168EF
void __cdecl MonsterCompBase::~MonsterCompBase(MonsterCompBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MonsterCompBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MonsterCompBase = v1;
};

// Line 341: range 0000000016902D9A-0000000016902DD4
Monster *__cdecl MonsterCompBase::getMonster(MonsterCompBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->monster_;
};

// Line 344: range 0000000016667D08-0000000016667D1E
int32_t __cdecl MonsterCompBase::interactCheck(
        MonsterCompBase *const this,
        Player *player,
        const EntityInteractParam *param)
{
  return -1;
};

// Line 346: range 0000000016667D20-0000000016667D36
int32_t __cdecl MonsterCompBase::interact(
        MonsterCompBase *const this,
        Player *player,
        const EntityInteractParam *param)
{
  return -1;
};

// Line 349: range 0000000016667D38-0000000016667D4A
int32_t __cdecl MonsterCompBase::toClient(const MonsterCompBase *const this, proto::SceneMonsterInfo *monster_info)
{
  return 0;
};

// Line 351: range 0000000016667D4C-0000000016667D62
int32_t __cdecl MonsterCompBase::doHurt(MonsterCompBase *const this, Creature *attacker, HurtContext *context)
{
  return 0;
};

// Line 361: range 00000000138DB768-00000000138DB852
std::shared_ptr<EquipComp> __cdecl EcsBase<Avatar,AvatarCompBase,7u>::findComp<EquipComp>(
        const EcsBase<Avatar,AvatarCompBase,7> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase> >> *v1; // rsi
  std::shared_ptr<EquipComp> result; // rax
  const EcsBase<Avatar,AvatarCompBase,7>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( !std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::size(v1) )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<AvatarCompBase>>>::operator[](v1, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 1 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<EquipComp,AvatarCompBase>((const std::shared_ptr<AvatarCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<EquipComp>::shared_ptr((std::shared_ptr<EquipComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<EquipComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 365: range 0000000014D248A4-0000000014D248E5
void __cdecl AvatarCompBase::~AvatarCompBase(AvatarCompBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AvatarCompBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
};

// Line 365: range 0000000014D248E6-0000000014D24910
void __cdecl AvatarCompBase::~AvatarCompBase(AvatarCompBase *const this)
{
  AvatarCompBase::~AvatarCompBase(this);
  operator delete(this, 0x10uLL);
};

// Line 367: range 0000000016667D64-0000000016667D9E
Avatar *__cdecl AvatarCompBase::getAvatar(AvatarCompBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->avatar_;
};

// Line 371: range 000000001383CF46-000000001383CF54
int32_t __cdecl AvatarCompBase::onLogin(AvatarCompBase *const this)
{
  return 0;
};

// Line 374: range 000000001383CF56-000000001383CF64
int32_t __cdecl AvatarCompBase::onDisconnect(AvatarCompBase *const this)
{
  return 0;
};

// Line 377: range 000000001383CF66-000000001383CF78
int32_t __cdecl AvatarCompBase::fromBin(AvatarCompBase *const this, const proto::AvatarBin *bin)
{
  return 0;
};

// Line 380: range 000000001383CF7A-000000001383CF8C
int32_t __cdecl AvatarCompBase::toBin(const AvatarCompBase *const this, proto::AvatarBin *bin)
{
  return 0;
};

// Line 386: range 000000001383CF8E-000000001383CFA0
int32_t __cdecl AvatarCompBase::toClient(const AvatarCompBase *const this, proto::SceneAvatarInfo *avatar_info)
{
  return 0;
};

// Line 389: range 000000001383CFA2-000000001383CFB4
int32_t __cdecl AvatarCompBase::toClient(const AvatarCompBase *const this, proto::AvatarInfo *avatar_info)
{
  return 0;
};

// Line 389: range 00000000146411DC-0000000014641206
void __cdecl EcsBase<Home,HomeCompBase,12u>::clearAllComp(EcsBase<Home,HomeCompBase,12> *const this)
{
  std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::clear(&this->comp_vec_);
  std::vector<unsigned int>::clear(&this->type_vec_);
};

// Line 392: range 000000001383CFB6-000000001383CFC8
int32_t __cdecl AvatarCompBase::toShowAvatarInfo(
        const AvatarCompBase *const this,
        proto::ShowAvatarInfo *show_avatar_info)
{
  return 0;
};

// Line 394: range 000000001383CFCA-000000001383D032
std::string *__cdecl AvatarCompBase::getDesc[abi:cxx11](std::string *retstr, const AvatarCompBase *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, byte_24FD2920, &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 404: range 000000001323A62A-000000001323A715
std::shared_ptr<BossChestComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<BossChestComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<BossChestComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 3 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 4 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<BossChestComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<BossChestComp>::shared_ptr((std::shared_ptr<BossChestComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<BossChestComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 404: range 00000000138638F8-00000000138639E3
std::shared_ptr<GadgetClientComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetClientComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<GadgetClientComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 0xB )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 0xBuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 12 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<GadgetClientComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<GadgetClientComp>::shared_ptr((std::shared_ptr<GadgetClientComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<GadgetClientComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 407: range 00000000162363D2-0000000016236454
void __cdecl FormalAvatarCompBase::FormalAvatarCompBase(FormalAvatarCompBase *const this, FormalAvatar *formal_avatar)
{
  int (**v2)(...); // rdx

  common::milog::DescribalBase::DescribalBase(this);
  v2 = (int (**)(...))(&`vtable for'FormalAvatarCompBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->formal_avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->formal_avatar_);
  this->formal_avatar_ = formal_avatar;
};

// Line 408: range 00000000154CBF88-00000000154CBFB2
void __cdecl FormalAvatarCompBase::~FormalAvatarCompBase(FormalAvatarCompBase *const this)
{
  FormalAvatarCompBase::~FormalAvatarCompBase(this);
  operator delete(this, 0x10uLL);
};

// Line 408: range 00000000154CBF46-00000000154CBF87
void __cdecl FormalAvatarCompBase::~FormalAvatarCompBase(FormalAvatarCompBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FormalAvatarCompBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
};

// Line 414: range 0000000015182F7A-0000000015182F88
int32_t __cdecl FormalAvatarCompBase::onLogin(FormalAvatarCompBase *const this)
{
  return 0;
};

// Line 417: range 0000000015182F8A-0000000015182F98
int32_t __cdecl FormalAvatarCompBase::onDisconnect(FormalAvatarCompBase *const this)
{
  return 0;
};

// Line 420: range 0000000015182F9A-0000000015182FAC
int32_t __cdecl FormalAvatarCompBase::fromFormalAvatarBin(
        FormalAvatarCompBase *const this,
        const proto::FormalAvatarBin *bin)
{
  return 0;
};

// Line 423: range 0000000015182FAE-0000000015182FC0
int32_t __cdecl FormalAvatarCompBase::toFormalAvatarBin(
        const FormalAvatarCompBase *const this,
        proto::FormalAvatarBin *bin)
{
  return 0;
};

// Line 426: range 0000000015182FC2-0000000015182FD4
int32_t __cdecl FormalAvatarCompBase::toClient(const FormalAvatarCompBase *const this, proto::AvatarInfo *avatar_info)
{
  return 0;
};

// Line 429: range 0000000015182FD6-0000000015182FE8
int32_t __cdecl FormalAvatarCompBase::toShowAvatarInfo(
        const FormalAvatarCompBase *const this,
        proto::ShowAvatarInfo *show_avatar_info)
{
  return 0;
};

// Line 431: range 0000000015182FEA-0000000015183052
std::string *__cdecl FormalAvatarCompBase::getDesc[abi:cxx11](
        std::string *retstr,
        const FormalAvatarCompBase *const this)
{
  std::allocator<char> __a; // [rsp+1Fh] [rbp-11h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(retstr, byte_25685560, &__a);
  std::allocator<char>::~allocator(&__a);
  return retstr;
};

// Line 445: range 00000000131C4A46-00000000131C4A80
Scene *__cdecl SceneCompBase::getScene(SceneCompBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->scene_;
};

// Line 445: range 00000000131C4994-00000000131C4A45
void __cdecl SceneCompBase::SceneCompBase(SceneCompBase *const this, Scene *scene)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneCompBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_SceneCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->scene_);
  this->scene_ = scene;
  if ( *(char *)(((unsigned __int64)&this->is_enable_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable_);
  this->is_enable_ = 1;
};

// Line 446: range 00000000131E8C22-00000000131E8C63
void __cdecl SceneCompBase::~SceneCompBase(SceneCompBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'SceneCompBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_SceneCompBase = v1;
};

// Line 446: range 00000000131E8C64-00000000131E8C8E
void __cdecl SceneCompBase::~SceneCompBase(SceneCompBase *const this)
{
  SceneCompBase::~SceneCompBase(this);
  operator delete(this, 0x18uLL);
};

// Line 451: range 00000000131C4A82-00000000131C4A94
int32_t __cdecl SceneCompBase::fromBin(SceneCompBase *const this, const proto::SceneBin *scene_bin)
{
  return 0;
};

// Line 452: range 00000000131C4A96-00000000131C4AA8
int32_t __cdecl SceneCompBase::toBin(const SceneCompBase *const this, proto::SceneBin *scene_bin)
{
  return 0;
};

// Line 453: range 00000000131C4AAA-00000000131C4AB8
int32_t __cdecl SceneCompBase::start(SceneCompBase *const this)
{
  return 0;
};

// Line 458: range 00000000131C4ABA-00000000131C4AC7
void __cdecl SceneCompBase::onTimer(SceneCompBase *const this, uint32_t now)
{
  ;
};

// Line 470: range 000000001460E590-000000001460E616
void __cdecl HomeCompBase::HomeCompBase(HomeCompBase *const this, Home *home)
{
  int (**v2)(...); // rdx

  std::enable_shared_from_this<HomeCompBase>::enable_shared_from_this(&this->std::enable_shared_from_this<HomeCompBase>);
  v2 = (int (**)(...))(&`vtable for'HomeCompBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->home_);
  this->home_ = home;
};

// Line 471: range 0000000014624D54-0000000014624D7E
void __cdecl HomeCompBase::~HomeCompBase(HomeCompBase *const this)
{
  HomeCompBase::~HomeCompBase(this);
  operator delete(this, 0x20uLL);
};

// Line 471: range 0000000014624D02-0000000014624D53
void __cdecl HomeCompBase::~HomeCompBase(HomeCompBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'HomeCompBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v1;
  std::enable_shared_from_this<HomeCompBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<HomeCompBase>);
};

// Line 481: range 000000001460E618-000000001460E62A
int32_t __cdecl HomeCompBase::fromBin(HomeCompBase *const this, const proto::HomeDataBin *home_data_bin)
{
  return 0;
};

// Line 484: range 000000001460E62C-000000001460E63E
int32_t __cdecl HomeCompBase::toBin(HomeCompBase *const this, proto::HomeDataBin *home_data_bin)
{
  return 0;
};

// Line 486: range 000000001460E640-000000001460E652
int32_t __cdecl HomeCompBase::toSnapshotBin(HomeCompBase *const this, proto::HomeSnapshotBin *snapshot_bin)
{
  return 0;
};

// Line 490: range 000000001460E654-000000001460E662
int32_t __cdecl HomeCompBase::init(HomeCompBase *const this)
{
  return 0;
};

// Line 493: range 000000001460E664-000000001460E672
int32_t __cdecl HomeCompBase::start(HomeCompBase *const this)
{
  return 0;
};

// Line 496: range 000000001460E674-000000001460E682
int32_t __cdecl HomeCompBase::onStop(HomeCompBase *const this)
{
  return 0;
};

// Line 499: range 000000001460E684-000000001460E692
int32_t __cdecl HomeCompBase::notifyAllData(HomeCompBase *const this)
{
  return 0;
};

// Line 502: range 000000001460E694-000000001460E6A4
void __cdecl HomeCompBase::onUpdateArrangementInfo(HomeCompBase *const this, uint32_t module_id, uint32_t scene_id)
{
  ;
};

// Line 505: range 000000001460E6A6-000000001460E6B9
void __cdecl HomeCompBase::onChangeRoomScene(
        HomeCompBase *const this,
        uint32_t module_id,
        uint32_t old_room_scene_id,
        uint32_t new_room_scene_id)
{
  ;
};

// Line 508: range 000000001460E6BA-000000001460E6C4
void __cdecl HomeCompBase::onDailyRefresh(HomeCompBase *const this)
{
  ;
};

// Line 511: range 000000001460E6C6-000000001460E6D0
void __cdecl HomeCompBase::resetByGm(HomeCompBase *const this)
{
  ;
};

// Line 549: range 0000000013239A76-0000000013239B61
std::shared_ptr<BlossomChestComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<BlossomChestComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<BlossomChestComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 3 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 3uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 4 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<BlossomChestComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<BlossomChestComp>::shared_ptr((std::shared_ptr<BlossomChestComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<BlossomChestComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1009: range 0000000017244508-00000000172445F3
std::shared_ptr<PlayerCodexComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerCodexComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerCodexComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x22 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x22uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 35 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerCodexComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerCodexComp>::shared_ptr((std::shared_ptr<PlayerCodexComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerCodexComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1009: range 0000000017242AB8-0000000017242BA3
std::shared_ptr<PlayerDungeonComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerDungeonComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerDungeonComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 7 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 7uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 8 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerDungeonComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerDungeonComp>::shared_ptr((std::shared_ptr<PlayerDungeonComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerDungeonComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1009: range 0000000017244DBC-0000000017244EA7
std::shared_ptr<PlayerOfferingComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerOfferingComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerOfferingComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x2C )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x2CuLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 45 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerOfferingComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerOfferingComp>::shared_ptr((std::shared_ptr<PlayerOfferingComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerOfferingComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1009: range 00000000172432B4-000000001724339F
std::shared_ptr<PlayerOfflineMsgComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerOfflineMsgComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerOfflineMsgComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x10 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x10uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 17 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerOfflineMsgComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerOfflineMsgComp>::shared_ptr((std::shared_ptr<PlayerOfflineMsgComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerOfflineMsgComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1009: range 0000000017245790-000000001724587B
std::shared_ptr<PlayerOfflineOpComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerOfflineOpComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerOfflineOpComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x36 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x36uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 55 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerOfflineOpComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerOfflineOpComp>::shared_ptr((std::shared_ptr<PlayerOfflineOpComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerOfflineOpComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1009: range 000000001724528C-0000000017245377
std::shared_ptr<PlayerOpActivityComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerOpActivityComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerOpActivityComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x31 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x31uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 50 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerOpActivityComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerOpActivityComp>::shared_ptr((std::shared_ptr<PlayerOpActivityComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerOpActivityComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1009: range 000000001724460E-00000000172446F9
std::shared_ptr<PlayerPersonalLineComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerPersonalLineComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerPersonalLineComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x24 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x24uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 37 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerPersonalLineComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerPersonalLineComp>::shared_ptr((std::shared_ptr<PlayerPersonalLineComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerPersonalLineComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1009: range 00000000172448EC-00000000172449D7
std::shared_ptr<PlayerReputationComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerReputationComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerReputationComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x26 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x26uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 39 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerReputationComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerReputationComp>::shared_ptr((std::shared_ptr<PlayerReputationComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerReputationComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1009: range 0000000017246490-000000001724657B
std::shared_ptr<PlayerShareCDComp> __cdecl EcsBase<Player,PlayerCompBase,71u>::findComp<PlayerShareCDComp>(
        const EcsBase<Player,PlayerCompBase,71> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase> >> *v1; // rsi
  std::shared_ptr<PlayerShareCDComp> result; // rax
  const EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(v1) <= 0x41 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](v1, 0x41uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 66 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<PlayerShareCDComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<PlayerShareCDComp>::shared_ptr((std::shared_ptr<PlayerShareCDComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<PlayerShareCDComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1009: range 0000000013EC735E-0000000013EC7449
std::shared_ptr<SceneEncounterComp> __cdecl EcsBase<Scene,SceneCompBase,12u>::findComp<SceneEncounterComp>(
        const EcsBase<Scene,SceneCompBase,12> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase> >> *v1; // rsi
  std::shared_ptr<SceneEncounterComp> result; // rax
  const EcsBase<Scene,SceneCompBase,12>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::size(v1) <= 6 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneCompBase>>>::operator[](v1, 6uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 7 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<SceneEncounterComp,SceneCompBase>((const std::shared_ptr<SceneCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<SceneEncounterComp>::shared_ptr((std::shared_ptr<SceneEncounterComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<SceneEncounterComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 0000000017221EF2-00000000172222C0
int32_t __cdecl EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerEventComp>(
        EcsBase<Player,PlayerCompBase,71> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Player,PlayerCompBase,71>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Player *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Player,PlayerCompBase,71u>::addComp<PlayerEventComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 10;
  if ( std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::size(&this->comp_vec_) <= 9 )
    std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::resize(&this->comp_vec_, 0xAuLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<PlayerCompBase>>>::operator[](&this->comp_vec_, 9uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<PlayerCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'PlayerEventComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Player, baseclass_1);
    common::tools::perf::make_shared<PlayerEventComp,Player &>(
      (Player *)(v1 + 64),
      (Player *)&this[-1].type_vec_._M_impl._M_finish);
    if ( std::operator==<PlayerEventComp>(0LL, (const std::shared_ptr<PlayerEventComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 10;
      std::shared_ptr<PlayerCompBase>::operator=<PlayerEventComp>(
        &comp_pair->second,
        (const std::shared_ptr<PlayerEventComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<PlayerEventComp>::~shared_ptr((std::shared_ptr<PlayerEventComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1016: range 0000000014A0D286-0000000014A0D370
std::shared_ptr<TowerDefensePlayBase> __cdecl EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2u>::findComp<TowerDefensePlayBase>(
        const EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<SceneMultistagePlayCompBase> >> *v1; // rsi
  std::shared_ptr<TowerDefensePlayBase> result; // rax
  const EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( !std::vector<std::pair<unsigned int,std::shared_ptr<SceneMultistagePlayCompBase>>>::size(v1) )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<SceneMultistagePlayCompBase>>>::operator[](v1, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 1 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<TowerDefensePlayBase,SceneMultistagePlayCompBase>((const std::shared_ptr<SceneMultistagePlayCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<TowerDefensePlayBase>::shared_ptr((std::shared_ptr<TowerDefensePlayBase> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<TowerDefensePlayBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1036: range 000000001323D27E-000000001323D369
std::shared_ptr<FishPoolComp> __cdecl EcsBase<Gadget,GadgetCompBase,28u>::findComp<FishPoolComp>(
        const EcsBase<Gadget,GadgetCompBase,28> *const this)
{
  const std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >> *v1; // rsi
  std::shared_ptr<FishPoolComp> result; // rax
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *comp_pair; // [rsp+18h] [rbp-8h]

  if ( std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::size(v1) <= 0x15 )
    goto LABEL_2;
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<GadgetCompBase>>>::operator[](v1, 0x15uLL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first == 22 )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = std::dynamic_pointer_cast<FishPoolComp,GadgetCompBase>((const std::shared_ptr<GadgetCompBase> *)this);
  }
  else
  {
LABEL_2:
    std::shared_ptr<FishPoolComp>::shared_ptr((std::shared_ptr<FishPoolComp> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<FishPoolComp,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1287: range 00000000146412EC-00000000146416B9
int32_t __cdecl EcsBase<Home,HomeCompBase,12u>::addComp<HomeBasicComp>(EcsBase<Home,HomeCompBase,12> *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  int32_t result; // eax
  char *val; // [rsp+18h] [rbp-C8h] BYREF
  EcsBase<Home,HomeCompBase,12>::CompBasePair *comp_pair; // [rsp+20h] [rbp-C0h]
  Home *entity; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 8 type:105 64 16 12 comp_ptr:121";
  *(_QWORD *)(v1 + 16) = EcsBase<Home,HomeCompBase,12u>::addComp<HomeBasicComp>;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  *(_DWORD *)(v1 + 48) = 1;
  if ( !std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::size(&this->comp_vec_) )
    std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::resize(&this->comp_vec_, 1uLL);
  comp_pair = std::vector<std::pair<unsigned int,std::shared_ptr<HomeCompBase>>>::operator[](&this->comp_vec_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( comp_pair->first || std::operator!=<HomeCompBase>(&comp_pair->second, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/misc/comp_base.h",
      "addComp",
      117);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"comp is duplicate, type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", name:");
    val = (char *)std::type_info::name((const std::type_info *const)&`typeinfo for'HomeBasicComp);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  else
  {
    entity = CONTAINING_RECORD(this, Home, baseclass_2);
    common::tools::perf::make_shared<HomeBasicComp,Home &>((Home *)(v1 + 64), (Home *)&this[-1].type_vec_);
    if ( std::operator==<HomeBasicComp>(0LL, (const std::shared_ptr<HomeBasicComp> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/misc/comp_base.h",
        "addComp",
        124);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v13,
        (const char (*)[26])"make_shared<CompT> failed");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)comp_pair >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(comp_pair);
      }
      comp_pair->first = 1;
      std::shared_ptr<HomeCompBase>::operator=<HomeBasicComp>(
        &comp_pair->second,
        (const std::shared_ptr<HomeBasicComp> *)(v1 + 64));
      std::vector<unsigned int>::push_back(&this->type_vec_, (const std::vector<unsigned int>::value_type *)(v1 + 48));
      v8 = 0;
    }
    std::shared_ptr<HomeBasicComp>::~shared_ptr((std::shared_ptr<HomeBasicComp> *const)(v1 + 64));
  }
  result = v8;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 4159: range 000000001460E490-000000001460E516
void __cdecl EntityCompBase::EntityCompBase(EntityCompBase *const this, Entity *entity)
{
  int (**v2)(...); // rdx

  std::enable_shared_from_this<EntityCompBase>::enable_shared_from_this(&this->std::enable_shared_from_this<EntityCompBase>);
  v2 = (int (**)(...))(&`vtable for'EntityCompBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_EntityCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->entity_);
  this->entity_ = entity;
};

// Line 4332: range 00000000131C47DC-00000000131C4852
void __cdecl GadgetCompBase::GadgetCompBase(GadgetCompBase *const this, Gadget *gadget)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GadgetCompBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->gadget_);
  this->gadget_ = gadget;
};

// Line 4841: range 0000000015A19892-0000000015A198CC
const Scene *__cdecl SceneCompBase::getScene(const SceneCompBase *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->scene_;
};

// Line 18589: range 0000000016667C90-0000000016667D06
void __cdecl MonsterCompBase::MonsterCompBase(MonsterCompBase *const this, Monster *monster)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MonsterCompBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_MonsterCompBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->monster_);
  this->monster_ = monster;
};

// Line 114574: range 00000000146117C0-0000000014611811
void __cdecl EntityCompBase::~EntityCompBase(EntityCompBase *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EntityCompBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_EntityCompBase = v1;
  std::enable_shared_from_this<EntityCompBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<EntityCompBase>);
};
