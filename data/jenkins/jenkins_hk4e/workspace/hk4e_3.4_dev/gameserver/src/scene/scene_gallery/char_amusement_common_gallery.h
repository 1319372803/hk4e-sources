// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_gallery/char_amusement_common_gallery.h

// Line 18: range 0000000017B8D1C6-0000000017B8D213
void __cdecl CharAmusementCommonGallery::~CharAmusementCommonGallery(CharAmusementCommonGallery *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CharAmusementCommonGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseGallery = v2;
  BaseGallery::~BaseGallery((BaseGallery *const)this);
};

// Line 18: range 0000000017B8D214-0000000017B8D23E
void __cdecl CharAmusementCommonGallery::~CharAmusementCommonGallery(CharAmusementCommonGallery *const this)
{
  CharAmusementCommonGallery::~CharAmusementCommonGallery(this);
  operator delete(this, 0x138uLL);
};

// Line 21: range 0000000016B35FA4-0000000016B36207
void __fastcall ZN26CharAmusementCommonGalleryCI211BaseGalleryER5Scenej(
        CharAmusementCommonGallery *const this,
        Scene *a2,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  bool v8; // dl
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  char v16[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN26CharAmusementCommonGalleryCI211BaseGalleryER5Scenej;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseGallery::BaseGallery((BaseGallery *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'CharAmusementCommonGallery + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseGallery = v6;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->cur_score_, v7, v8);
  this->cur_score_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_score_, v7, (_BYTE)this + 48);
  }
  this->max_score_ = 0;
  v9 = ((_BYTE)this + 52) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_last_level_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_last_level_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_last_level_, v9, v10);
  this->is_last_level_ = 0;
  v11 = ((_BYTE)this + 53) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->is_finish_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_finish_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_finish_, v11, v12);
  this->is_finish_ = 0;
  v13 = ((_BYTE)this + 54) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->is_success_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->is_success_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_success_, v13, v14);
  this->is_success_ = 0;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
