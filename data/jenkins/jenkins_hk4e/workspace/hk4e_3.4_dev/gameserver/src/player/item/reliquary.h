// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/item/reliquary.h

// Line 24: range 0000000017887CB4-0000000017887D13
void __cdecl Reliquary::~Reliquary(Reliquary *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'Reliquary + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_Item = v2;
  std::vector<unsigned int>::~vector(&this->append_prop_id_vec_);
  Equip::~Equip((Equip *const)this);
};

// Line 24: range 0000000017887D14-0000000017887D3E
void __cdecl Reliquary::~Reliquary(Reliquary *const this)
{
  Reliquary::~Reliquary(this);
  operator delete(this, 0xA0uLL);
};

// Line 27: range 0000000017F3F5BA-0000000017F3F7F5
void __fastcall ZN9ReliquaryCI24ItemEjj(Reliquary *const this, int a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  int (**v7)(...); // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  char v12[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN9ReliquaryCI24ItemEjj;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = a2;
  *(_DWORD *)(v3 + 64) = a3;
  v6 = *(unsigned int *)(v3 + 48);
  ZN5EquipCI24ItemEjj((Equip *const)this, v6, *(_DWORD *)(v3 + 64));
  v7 = (int (**)(...))(&`vtable for'Reliquary + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v6);
  this->_vptr_Item = v7;
  v8 = (((_BYTE)this + 124) & 7u) + 3;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->level_, v8, v9);
  this->level_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exp_, v8, &this->exp_);
  }
  this->exp_ = 0;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->main_prop_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_prop_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->main_prop_id_, (((_BYTE)this - 124) & 7u) + 3, v10);
  this->main_prop_id_ = 0;
  std::vector<unsigned int>::vector(&this->append_prop_id_vec_);
  if ( v12 == (char *)v3 )
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
};

// Line 77: range 0000000015195F38-0000000015195F4B
const std::vector<unsigned int> *__cdecl Reliquary::getAppendPropVec(Reliquary *const this)
{
  return &this->append_prop_id_vec_;
};

// Line 79: range 000000001623C36A-000000001623C395
void __cdecl Reliquary::setAppendPropVec(Reliquary *const this, const std::vector<unsigned int> *append_prop_vec)
{
  std::vector<unsigned int>::operator=(&this->append_prop_id_vec_, append_prop_vec);
};

// Line 92: range 000000001385B440-000000001385B48F
uint32_t __cdecl Reliquary::getLevel(const Reliquary *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  return this->level_;
};

// Line 92: range 000000001623C396-000000001623C3EC
void __cdecl Reliquary::setLevel(Reliquary *const this, uint32_t level__out)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->level_, (((_BYTE)this + 124) & 7u) + 3, v2);
  this->level_ = level__out;
};

// Line 93: range 0000000017633878-00000000176338C2
uint32_t __cdecl Reliquary::getExp(const Reliquary *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->exp_);
  }
  return this->exp_;
};

// Line 94: range 00000000176338C4-0000000017633918
uint32_t __cdecl Reliquary::getMainPropId(const Reliquary *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->main_prop_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_prop_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->main_prop_id_);
  }
  return this->main_prop_id_;
};

// Line 94: range 000000001623C3EE-000000001623C449
void __cdecl Reliquary::setMainPropId(Reliquary *const this, uint32_t main_prop_id__out)
{
  __int64 v2; // rdx

  v2 = (*(_BYTE *)(((unsigned __int64)&this->main_prop_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_prop_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->main_prop_id_, (((_BYTE)this - 124) & 7u) + 3, v2);
  this->main_prop_id_ = main_prop_id__out;
};
