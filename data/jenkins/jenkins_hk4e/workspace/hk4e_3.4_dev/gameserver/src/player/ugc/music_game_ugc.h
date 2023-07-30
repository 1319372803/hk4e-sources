// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/ugc/music_game_ugc.h

// Line 23: range 0000000017A07994-0000000017A079EB
void __cdecl MusicContent::MusicContent(MusicContent *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->music_id = 0;
  std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::vector(&this->note_track_vec_vec);
};

// Line 23: range 0000000017A079EC-0000000017A07A0A
void __cdecl MusicContent::~MusicContent(MusicContent *const this)
{
  std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::~vector(&this->note_track_vec_vec);
};

// Line 33: range 0000000017B8DD8A-0000000017B8DDD7
void __cdecl MusicGameUgc::~MusicGameUgc(MusicGameUgc *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'MusicGameUgc + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  BaseUgc::~BaseUgc(this);
};

// Line 33: range 0000000017B8DDD8-0000000017B8DE02
void __cdecl MusicGameUgc::~MusicGameUgc(MusicGameUgc *const this)
{
  MusicGameUgc::~MusicGameUgc(this);
  operator delete(this, 0x28uLL);
};

// Line 36: range 0000000017B61400-0000000017B61506
void __fastcall ZN12MusicGameUgcCI27BaseUgcER6Playerj(MusicGameUgc *const this, Player *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN12MusicGameUgcCI27BaseUgcER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseUgc::BaseUgc(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'MusicGameUgc + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v6;
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 44: range 0000000017A07984-0000000017A07992
int32_t __cdecl MusicGameUgc::init(MusicGameUgc *const this)
{
  return 0;
};
