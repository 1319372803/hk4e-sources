// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/item/material.h

// Line 21: range 0000000017887D40-0000000017887D9D
void __cdecl Material::~Material(Material *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'Material + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_Item = v2;
  std::map<unsigned int,unsigned int>::~map(&this->delete_time_num_map_);
  Item::~Item(this);
};

// Line 21: range 0000000017887D9E-0000000017887DC8
void __cdecl Material::~Material(Material *const this)
{
  Material::~Material(this);
  operator delete(this, 0x70uLL);
};

// Line 24: range 0000000017F3EF58-0000000017F3F0F1
void __fastcall ZN8MaterialCI24ItemEjj(Material *const this, int a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  int (**v7)(...); // rdx
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 9 <unknown> 64 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN8MaterialCI24ItemEjj;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = a2;
  *(_DWORD *)(v3 + 64) = a3;
  v6 = *(unsigned int *)(v3 + 48);
  Item::Item(this, v6, *(_DWORD *)(v3 + 64));
  v7 = (int (**)(...))(&`vtable for'Material + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v6);
  this->_vptr_Item = v7;
  if ( *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->count_, v6, &this->count_);
  }
  this->count_ = 0;
  std::map<unsigned int,unsigned int>::map(&this->delete_time_num_map_);
  if ( v9 == (char *)v3 )
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
