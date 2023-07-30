// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/visitor.h

// Line 38: range 0000000015A1E2B8-0000000015A1E319
void __cdecl Visitor::~Visitor(Visitor *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'Visitor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_Visitor = v2;
  std::vector<std::shared_ptr<Entity>>::~vector(&this->entity_vec_);
  std::shared_ptr<Entity>::~shared_ptr(&this->entity_ptr_);
};

// Line 41: range 0000000015A1A746-0000000015A1A7FE
void __cdecl Visitor::Visitor(Visitor *const this, EntityPtr *p_entity_ptr)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'Visitor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, p_entity_ptr);
  this->_vptr_Visitor = v2;
  std::shared_ptr<Entity>::shared_ptr(&this->entity_ptr_, p_entity_ptr);
  std::vector<std::shared_ptr<Entity>>::vector(&this->entity_vec_);
  std::vector<std::shared_ptr<Entity>>::reserve(&this->entity_vec_, 0xAuLL);
};

// Line 46: range 0000000015A1A800-0000000015A1A80E
VisitorType __cdecl Visitor::getType(const Visitor *const this)
{
  return 0;
};

// Line 52: range 0000000015A1A810-0000000015A1A821
std::vector<std::shared_ptr<Entity>> *__cdecl Visitor::getEntityVec(Visitor *const this)
{
  return &this->entity_vec_;
};

// Line 56: range 0000000017DC4CA6-0000000017DC4E36
void __cdecl Visitor::getEntityVec<std::shared_ptr<Avatar>>(
        Visitor *const this,
        std::vector<std::shared_ptr<Avatar>> *entity_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::vector<std::shared_ptr<Entity>>::iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::vector<std::shared_ptr<Entity>>::iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  std::vector<std::shared_ptr<Entity>> *__for_range; // [rsp+20h] [rbp-70h]
  std::shared_ptr<Entity> *entity_ptr; // [rsp+28h] [rbp-68h]
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 target_ptr:61";
  *(_QWORD *)(v2 + 16) = Visitor::getEntityVec<std::shared_ptr<Avatar>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->entity_vec_;
  __for_begin._M_current = std::vector<std::shared_ptr<Entity>>::begin(&this->entity_vec_)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Entity>>::end(&this->entity_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Entity> *,std::vector<std::shared_ptr<Entity>>>(
            &__for_begin,
            &__for_end) )
  {
    entity_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Entity> *,std::vector<std::shared_ptr<Entity>>>::operator*(&__for_begin);
    std::dynamic_pointer_cast<Avatar,Entity>((const std::shared_ptr<Entity> *)(v2 + 32));
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 32), 0LL) )
      std::vector<std::shared_ptr<Avatar>>::push_back(
        entity_vec,
        (const std::vector<std::shared_ptr<Avatar>>::value_type *)(v2 + 32));
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 32));
    __gnu_cxx::__normal_iterator<std::shared_ptr<Entity> *,std::vector<std::shared_ptr<Entity>>>::operator++(&__for_begin);
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 56: range 0000000017DC4AA2-0000000017DC4C32
void __cdecl Visitor::getEntityVec<std::shared_ptr<Creature>>(
        Visitor *const this,
        std::vector<std::shared_ptr<Creature>> *entity_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::vector<std::shared_ptr<Entity>>::iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::vector<std::shared_ptr<Entity>>::iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  std::vector<std::shared_ptr<Entity>> *__for_range; // [rsp+20h] [rbp-70h]
  std::shared_ptr<Entity> *entity_ptr; // [rsp+28h] [rbp-68h]
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 target_ptr:61";
  *(_QWORD *)(v2 + 16) = Visitor::getEntityVec<std::shared_ptr<Creature>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->entity_vec_;
  __for_begin._M_current = std::vector<std::shared_ptr<Entity>>::begin(&this->entity_vec_)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Entity>>::end(&this->entity_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Entity> *,std::vector<std::shared_ptr<Entity>>>(
            &__for_begin,
            &__for_end) )
  {
    entity_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Entity> *,std::vector<std::shared_ptr<Entity>>>::operator*(&__for_begin);
    std::dynamic_pointer_cast<Creature,Entity>((const std::shared_ptr<Entity> *)(v2 + 32));
    if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 32), 0LL) )
      std::vector<std::shared_ptr<Creature>>::push_back(
        entity_vec,
        (const std::vector<std::shared_ptr<Creature>>::value_type *)(v2 + 32));
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
    __gnu_cxx::__normal_iterator<std::shared_ptr<Entity> *,std::vector<std::shared_ptr<Entity>>>::operator++(&__for_begin);
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 56: range 0000000017DC26A0-0000000017DC2830
void __cdecl Visitor::getEntityVec<std::shared_ptr<Monster>>(
        Visitor *const this,
        std::vector<std::shared_ptr<Monster>> *entity_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::vector<std::shared_ptr<Entity>>::iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::vector<std::shared_ptr<Entity>>::iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  std::vector<std::shared_ptr<Entity>> *__for_range; // [rsp+20h] [rbp-70h]
  std::shared_ptr<Entity> *entity_ptr; // [rsp+28h] [rbp-68h]
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 target_ptr:61";
  *(_QWORD *)(v2 + 16) = Visitor::getEntityVec<std::shared_ptr<Monster>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->entity_vec_;
  __for_begin._M_current = std::vector<std::shared_ptr<Entity>>::begin(&this->entity_vec_)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Entity>>::end(&this->entity_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Entity> *,std::vector<std::shared_ptr<Entity>>>(
            &__for_begin,
            &__for_end) )
  {
    entity_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Entity> *,std::vector<std::shared_ptr<Entity>>>::operator*(&__for_begin);
    std::dynamic_pointer_cast<Monster,Entity>((const std::shared_ptr<Entity> *)(v2 + 32));
    if ( std::operator!=<Monster>((const std::shared_ptr<Monster> *)(v2 + 32), 0LL) )
      std::vector<std::shared_ptr<Monster>>::push_back(
        entity_vec,
        (const std::vector<std::shared_ptr<Monster>>::value_type *)(v2 + 32));
    std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 32));
    __gnu_cxx::__normal_iterator<std::shared_ptr<Entity> *,std::vector<std::shared_ptr<Entity>>>::operator++(&__for_begin);
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 69: range 0000000015A1A822-0000000015A1A834
bool __cdecl Visitor::canAddEntity(Visitor *const this, Entity *entity)
{
  return 0;
};

// Line 80: range 0000000015A1E374-0000000015A1E3C1
void __cdecl EntityVisitor::~EntityVisitor(EntityVisitor *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'EntityVisitor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_Visitor = v2;
  Visitor::~Visitor(this);
};

// Line 83: range 0000000015A1E31A-0000000015A1E372
void __cdecl ZN13EntityVisitorCI27VisitorESt10shared_ptrI6EntityE(EntityVisitor *const this, EntityPtr *p_)
{
  int (**v2)(...); // rdx

  Visitor::Visitor(this, p_);
  v2 = (int (**)(...))(&`vtable for'EntityVisitor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, p_);
  this->_vptr_Visitor = v2;
};

// Line 84: range 00000000180AA31C-00000000180AA32A
VisitorType __cdecl EntityVisitor::getType(const EntityVisitor *const this)
{
  return 1;
};

// Line 93: range 0000000017D75B12-0000000017D75B5F
void __cdecl AvatarVisitor::~AvatarVisitor(AvatarVisitor *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AvatarVisitor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_Visitor = v2;
  Visitor::~Visitor(this);
};

// Line 96: range 0000000017D75AB8-0000000017D75B10
void __cdecl ZN13AvatarVisitorCI27VisitorESt10shared_ptrI6EntityE(AvatarVisitor *const this, EntityPtr *p_)
{
  int (**v2)(...); // rdx

  Visitor::Visitor(this, p_);
  v2 = (int (**)(...))(&`vtable for'AvatarVisitor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, p_);
  this->_vptr_Visitor = v2;
};

// Line 97: range 0000000017D67A80-0000000017D67A8E
VisitorType __cdecl AvatarVisitor::getType(const AvatarVisitor *const this)
{
  return 2;
};

// Line 100: range 0000000017D67A90-0000000017D67AFF
bool __cdecl AvatarVisitor::canAddEntity(AvatarVisitor *const this, Entity *entity)
{
  unsigned __int64 v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  return (*(unsigned int (__fastcall **)(Entity *))v2)(entity) == 1;
};

// Line 142: range 0000000017D75A6A-0000000017D75AB7
void __cdecl AuthorityVisitor::~AuthorityVisitor(AuthorityVisitor *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'AuthorityVisitor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_Visitor = v2;
  Visitor::~Visitor(this);
};

// Line 145: range 0000000017D75A10-0000000017D75A68
void __cdecl ZN16AuthorityVisitorCI27VisitorESt10shared_ptrI6EntityE(AuthorityVisitor *const this, EntityPtr *p_)
{
  int (**v2)(...); // rdx

  Visitor::Visitor(this, p_);
  v2 = (int (**)(...))(&`vtable for'AuthorityVisitor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, p_);
  this->_vptr_Visitor = v2;
};

// Line 146: range 00000000180AA32C-00000000180AA33A
VisitorType __cdecl AuthorityVisitor::getType(const AuthorityVisitor *const this)
{
  return 5;
};

// Line 156: range 0000000015A1EC66-0000000015A1ECB3
void __cdecl GatherVisitor::~GatherVisitor(GatherVisitor *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'GatherVisitor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_Visitor = v2;
  Visitor::~Visitor(this);
};

// Line 159: range 0000000015A1EC0C-0000000015A1EC64
void __cdecl ZN13GatherVisitorCI27VisitorESt10shared_ptrI6EntityE(GatherVisitor *const this, EntityPtr *p_)
{
  int (**v2)(...); // rdx

  Visitor::Visitor(this, p_);
  v2 = (int (**)(...))(&`vtable for'GatherVisitor + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, p_);
  this->_vptr_Visitor = v2;
};

// Line 160: range 00000000180AA33C-00000000180AA34A
VisitorType __cdecl GatherVisitor::getType(const GatherVisitor *const this)
{
  return 6;
};

// Line 207: range 0000000015A7B922-0000000015A7BAB2
void __cdecl Visitor::getEntityVec<std::shared_ptr<Gadget>>(
        Visitor *const this,
        std::vector<std::shared_ptr<Gadget>> *entity_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::vector<std::shared_ptr<Entity>>::iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::vector<std::shared_ptr<Entity>>::iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  std::vector<std::shared_ptr<Entity>> *__for_range; // [rsp+20h] [rbp-70h]
  std::shared_ptr<Entity> *entity_ptr; // [rsp+28h] [rbp-68h]
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 target_ptr:61";
  *(_QWORD *)(v2 + 16) = Visitor::getEntityVec<std::shared_ptr<Gadget>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = &this->entity_vec_;
  __for_begin._M_current = std::vector<std::shared_ptr<Entity>>::begin(&this->entity_vec_)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<Entity>>::end(&this->entity_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Entity> *,std::vector<std::shared_ptr<Entity>>>(
            &__for_begin,
            &__for_end) )
  {
    entity_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Entity> *,std::vector<std::shared_ptr<Entity>>>::operator*(&__for_begin);
    std::dynamic_pointer_cast<Gadget,Entity>((const std::shared_ptr<Entity> *)(v2 + 32));
    if ( std::operator!=<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 32), 0LL) )
      std::vector<std::shared_ptr<Gadget>>::push_back(
        entity_vec,
        (const std::vector<std::shared_ptr<Gadget>>::value_type *)(v2 + 32));
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
    __gnu_cxx::__normal_iterator<std::shared_ptr<Entity> *,std::vector<std::shared_ptr<Entity>>>::operator++(&__for_begin);
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
