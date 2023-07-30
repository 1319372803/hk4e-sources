// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/arena.cc

// Line 73: range 000000000C72A3D4-000000000C72A3E1
void __fastcall __noreturn google::protobuf::internal::ArenaImpl::Init(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 92: range 000000000C897000-000000000C89700E
void __fastcall google::protobuf::internal::ArenaImpl::~ArenaImpl(google::protobuf::internal::ArenaImpl *const this)
{
  google::protobuf::internal::ArenaImpl::ResetInternal(this);
  google::protobuf::internal::Mutex::~Mutex(&this->blocks_lock_);
};

// Line 100: range 000000000C896FD0-000000000C896FF2
google::protobuf::uint64 __fastcall google::protobuf::internal::ArenaImpl::ResetInternal(
        google::protobuf::internal::ArenaImpl *const this)
{
  google::protobuf::internal::ArenaImpl::Block *blocks; // r12

  blocks = (google::protobuf::internal::ArenaImpl::Block *)this->blocks_;
  google::protobuf::internal::ArenaImpl::CleanupList(
    this,
    (google::protobuf::internal::ArenaImpl::Block *)this->blocks_);
  return google::protobuf::internal::ArenaImpl::FreeBlocks(this, blocks);
};

// Line 111: range 000000000C896930-000000000C8969FF
google::protobuf::internal::ArenaImpl::Block *__fastcall google::protobuf::internal::ArenaImpl::NewBlock(
        google::protobuf::internal::ArenaImpl *this,
        void *a2,
        google::protobuf::internal::ArenaImpl::Block *a3,
        unsigned __int64 a4,
        size_t a5,
        size_t a6)
{
  size_t v9; // rbx
  google::protobuf::internal::ArenaImpl::Block *v10; // rax
  google::protobuf::internal::ArenaImpl::Block *v11; // r12
  google::protobuf::internal::LogMessage_0 *v13; // rsi
  google::protobuf::internal::LogFinisher v14; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v15; // [rsp+10h] [rbp-68h] BYREF

  if ( a3 )
  {
    a5 = 2 * a3->size;
    if ( a5 > a6 )
      a5 = a6;
  }
  if ( a4 > 0xFFFFFFFFFFFFFFD7LL )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v15, LOGLEVEL_FATAL_0, "google/protobuf/arena.cc", 120);
    v13 = google::protobuf::internal::LogMessage::operator<<(
            &v15,
            "CHECK failed: (min_bytes) <= (std::numeric_limits<size_t>::max() - kHeaderSize): ");
    google::protobuf::internal::LogFinisher::operator=(&v14, v13);
    google::protobuf::internal::LogMessage::~LogMessage(&v15);
  }
  v9 = a4 + 40;
  if ( v9 < a5 )
    v9 = a5;
  v10 = (google::protobuf::internal::ArenaImpl::Block *)this->options_.block_alloc(v9);
  v10->size = v9;
  v11 = v10;
  v10->owner = a2;
  v10->pos = 40LL;
  v10->cleanup = 0LL;
  google::protobuf::internal::ArenaImpl::AddBlock(this, v10);
  return v11;
};

// Line 120: range 000000000C72A3E6-000000000C72A3F3
void __fastcall __noreturn google::protobuf::internal::ArenaImpl::NewBlock(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 138: range 000000000C8968F0-000000000C89691F
void __fastcall google::protobuf::internal::ArenaImpl::AddBlock(
        google::protobuf::internal::ArenaImpl *const this,
        google::protobuf::internal::ArenaImpl::Block *b)
{
  google::protobuf::internal::Mutex::Lock(&this->blocks_lock_);
  b->next = (google::protobuf::internal::ArenaImpl::Block *)this->blocks_;
  this->blocks_ = (google::protobuf::internal::AtomicWord)b;
  this->space_allocated_ += b->size;
  google::protobuf::internal::Mutex::Unlock(&this->blocks_lock_);
};

// Line 149: range 000000000C896AC0-000000000C896BC3
google::protobuf::internal::ArenaImpl::Block *__fastcall google::protobuf::internal::ArenaImpl::ExpandCleanupList(
        google::protobuf::internal::ArenaImpl *const this,
        google::protobuf::internal::ArenaImpl::Block *b)
{
  google::protobuf::internal::ArenaImpl::Block *result; // rax
  google::protobuf::internal::ArenaImpl::CleanupChunk *cleanup; // rcx
  unsigned __int64 v4; // rbp
  size_t v5; // rbx
  size_t pos; // rdx
  size_t v7; // rbx
  google::protobuf::internal::ArenaImpl::CleanupChunk *v8; // rdx
  _QWORD *hint; // rcx
  unsigned __int64 v10; // rsi

  result = b;
  cleanup = b->cleanup;
  if ( cleanup )
  {
    v4 = 2 * cleanup->size;
    if ( v4 > 0x40 )
      v4 = 64LL;
    v5 = 16 * v4 + 24;
  }
  else
  {
    v5 = 152LL;
    v4 = 8LL;
  }
  pos = b->pos;
  if ( v5 > b->size - pos )
  {
    if ( __readfsqword(0xFFEFD540) == this->lifecycle_id_ )
    {
      result = (google::protobuf::internal::ArenaImpl::Block *)__readfsqword(0xFFEFD548);
      pos = result->pos;
      if ( v5 <= result->size - pos )
      {
LABEL_8:
        cleanup = result->cleanup;
        goto LABEL_9;
      }
    }
    else
    {
      result = 0LL;
    }
    hint = (_QWORD *)this->hint_;
    v10 = __readfsqword(0);
    if ( !hint
      || *hint != v10 - 1059520
      || (pos = hint[3], result = (google::protobuf::internal::ArenaImpl::Block *)this->hint_, v5 > hint[4] - pos) )
    {
      result = google::protobuf::internal::ArenaImpl::GetBlockSlow(this, (void *)(v10 - 1059520), result, v5);
      cleanup = result->cleanup;
      pos = result->pos;
      goto LABEL_9;
    }
    goto LABEL_8;
  }
LABEL_9:
  v7 = pos + v5;
  v8 = (google::protobuf::internal::ArenaImpl::CleanupChunk *)((char *)result + pos);
  result->pos = v7;
  v8->next = cleanup;
  v8->size = v4;
  v8->len = 0LL;
  result->cleanup = v8;
  return result;
};

// Line 177: range 000000000C896BD0-000000000C896C77
void __fastcall google::protobuf::internal::ArenaImpl::AddCleanup(
        google::protobuf::internal::ArenaImpl *const this,
        void *elem,
        void (*cleanup)(void *))
{
  google::protobuf::internal::ArenaImpl::Block *hint; // rsi
  google::protobuf::internal::ArenaImpl::CleanupChunk *v6; // rdx
  size_t len; // rcx
  char *v8; // rdx
  unsigned __int64 v9; // rax

  if ( __readfsqword(0xFFEFD540) == this->lifecycle_id_ )
  {
    hint = (google::protobuf::internal::ArenaImpl::Block *)__readfsqword(0xFFEFD548);
  }
  else
  {
    hint = (google::protobuf::internal::ArenaImpl::Block *)this->hint_;
    v9 = __readfsqword(0);
    if ( !hint || hint->owner != (void *)(v9 - 1059520) )
    {
      hint = google::protobuf::internal::ArenaImpl::GetBlockSlow(this, (void *)(v9 - 1059520), 0LL, 0LL);
      v6 = hint->cleanup;
      if ( !v6 )
        goto LABEL_9;
      goto LABEL_4;
    }
  }
  v6 = hint->cleanup;
  if ( !v6 )
  {
LABEL_9:
    v6 = google::protobuf::internal::ArenaImpl::ExpandCleanupList(this, hint)->cleanup;
    len = v6->len;
    goto LABEL_5;
  }
LABEL_4:
  len = v6->len;
  if ( v6->len == v6->size )
    goto LABEL_9;
LABEL_5:
  v6->len = len + 1;
  v8 = (char *)v6 + 16 * len;
  *((_QWORD *)v8 + 3) = elem;
  *((_QWORD *)v8 + 4) = cleanup;
};

// Line 181: range 000000000C896C80-000000000C896D0B
void *__fastcall google::protobuf::internal::ArenaImpl::AllocateAligned(
        google::protobuf::internal::ArenaImpl *const this,
        size_t n)
{
  google::protobuf::internal::ArenaImpl::Block *BlockSlow; // rdx
  size_t pos; // rax
  _QWORD *hint; // rcx
  unsigned __int64 v6; // rsi
  size_t v7; // rbx
  void *result; // rax

  if ( __readfsqword(0xFFEFD540) == this->lifecycle_id_ )
  {
    BlockSlow = (google::protobuf::internal::ArenaImpl::Block *)__readfsqword(0xFFEFD548);
    pos = BlockSlow->pos;
    if ( n <= BlockSlow->size - pos )
      goto LABEL_6;
  }
  else
  {
    BlockSlow = 0LL;
  }
  hint = (_QWORD *)this->hint_;
  v6 = __readfsqword(0);
  if ( !hint
    || *hint != v6 - 1059520
    || (pos = hint[3], BlockSlow = (google::protobuf::internal::ArenaImpl::Block *)this->hint_, n > hint[4] - pos) )
  {
    BlockSlow = google::protobuf::internal::ArenaImpl::GetBlockSlow(this, (void *)(v6 - 1059520), BlockSlow, n);
    pos = BlockSlow->pos;
  }
LABEL_6:
  v7 = pos + n;
  result = (char *)BlockSlow + pos;
  BlockSlow->pos = v7;
  return result;
};

// Line 188: range 000000000C896D10-000000000C896DF7
void *__fastcall google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
        google::protobuf::internal::ArenaImpl *const this,
        size_t n,
        void (*cleanup)(void *))
{
  google::protobuf::internal::ArenaImpl::Block *BlockSlow; // rdx
  size_t pos; // rax
  _QWORD *hint; // rdi
  unsigned __int64 v8; // rcx
  google::protobuf::internal::ArenaImpl::CleanupChunk *v9; // rcx
  char *v10; // r12
  size_t len; // rax
  char *v12; // rcx
  void *result; // rax

  if ( __readfsqword(0xFFEFD540) == this->lifecycle_id_ )
  {
    BlockSlow = (google::protobuf::internal::ArenaImpl::Block *)__readfsqword(0xFFEFD548);
    pos = BlockSlow->pos;
    if ( n <= BlockSlow->size - pos )
      goto LABEL_6;
  }
  else
  {
    BlockSlow = 0LL;
  }
  hint = (_QWORD *)this->hint_;
  v8 = __readfsqword(0);
  if ( !hint
    || *hint != v8 - 1059520
    || (pos = hint[3], BlockSlow = (google::protobuf::internal::ArenaImpl::Block *)this->hint_, n > hint[4] - pos) )
  {
    BlockSlow = google::protobuf::internal::ArenaImpl::GetBlockSlow(this, (void *)(v8 - 1059520), BlockSlow, n);
    pos = BlockSlow->pos;
  }
LABEL_6:
  v9 = BlockSlow->cleanup;
  v10 = (char *)BlockSlow + pos;
  BlockSlow->pos = n + pos;
  if ( !v9 || (len = v9->len, v9->len == v9->size) )
  {
    v9 = google::protobuf::internal::ArenaImpl::ExpandCleanupList(this, BlockSlow)->cleanup;
    len = v9->len;
  }
  v9->len = len + 1;
  v12 = (char *)v9 + 16 * len;
  result = v10;
  *((_QWORD *)v12 + 3) = v10;
  *((_QWORD *)v12 + 4) = cleanup;
  return result;
};

// Line 238: range 000000000C896A30-000000000C896AB3
google::protobuf::internal::ArenaImpl::Block *__fastcall google::protobuf::internal::ArenaImpl::GetBlockSlow(
        google::protobuf::internal::ArenaImpl *const this,
        void *me,
        google::protobuf::internal::ArenaImpl::Block *my_full_block,
        size_t n)
{
  google::protobuf::internal::ArenaImpl::Block *result; // rax

  result = (google::protobuf::internal::ArenaImpl::Block *)this->blocks_;
  if ( !this->blocks_ )
    goto LABEL_6;
  while ( me != result->owner )
  {
    result = result->next;
    if ( !result )
      goto LABEL_6;
  }
  if ( n > result->size - result->pos )
  {
LABEL_6:
    result = google::protobuf::internal::ArenaImpl::NewBlock(
               this,
               me,
               result,
               n,
               this->options_.start_block_size,
               this->options_.max_block_size);
    if ( my_full_block )
    {
      result->cleanup = my_full_block->cleanup;
      my_full_block->cleanup = 0LL;
    }
  }
  __writefsqword(0xFFEFD548, (unsigned __int64)result);
  __writefsqword(0xFFEFD540, this->lifecycle_id_);
  this->hint_ = (google::protobuf::internal::AtomicWord)result;
  return result;
};

// Line 257: range 000000000C896E00-000000000C896E26
google::protobuf::uint64 __fastcall google::protobuf::internal::ArenaImpl::SpaceAllocated(
        const google::protobuf::internal::ArenaImpl *const this)
{
  google::protobuf::uint64 space_allocated; // r12

  google::protobuf::internal::Mutex::Lock(&this->blocks_lock_);
  space_allocated = this->space_allocated_;
  google::protobuf::internal::Mutex::Unlock(&this->blocks_lock_);
  return space_allocated;
};

// Line 272: range 000000000C896E60-000000000C896F3D
google::protobuf::uint64 __fastcall google::protobuf::internal::ArenaImpl::FreeBlocks(
        google::protobuf::internal::ArenaImpl *const this,
        google::protobuf::internal::ArenaImpl::Block *head)
{
  size_t i; // r12
  google::protobuf::internal::ArenaImpl::Block *v4; // rdi
  google::protobuf::internal::ArenaImpl::Block *next; // rbx
  size_t size; // rsi
  unsigned __int64 v7; // rax
  bool owns_first_block; // al

  i = 0LL;
  v4 = head;
  if ( head )
  {
    next = head->next;
    for ( i = head->size; next; i += size )
    {
      ((void (*)(void))this->options_.block_dealloc)();
      v4 = next;
      size = next->size;
      next = next->next;
    }
    if ( !this->owns_first_block_ )
    {
      this->blocks_ = 0LL;
      this->hint_ = 0LL;
      this->space_allocated_ = 0LL;
      goto LABEL_6;
    }
    ((void (*)(void))this->options_.block_dealloc)();
  }
  owns_first_block = this->owns_first_block_;
  this->blocks_ = 0LL;
  this->hint_ = 0LL;
  this->space_allocated_ = 0LL;
  if ( owns_first_block )
    return i;
  v4 = 0LL;
LABEL_6:
  v7 = __readfsqword(0);
  v4->pos = 40LL;
  v4->cleanup = 0LL;
  v4->owner = (void *)(v7 - 1059520);
  v4->next = (google::protobuf::internal::ArenaImpl::Block *)this->blocks_;
  this->blocks_ = (google::protobuf::internal::AtomicWord)v4;
  this->space_allocated_ += v4->size;
  __writefsqword(0xFFEFD548, (unsigned __int64)v4);
  __writefsqword(0xFFEFD540, this->lifecycle_id_);
  this->hint_ = (google::protobuf::internal::AtomicWord)v4;
  return i;
};

// Line 323: range 000000000C896F50-000000000C896FC6
void __fastcall google::protobuf::internal::ArenaImpl::CleanupList(
        google::protobuf::internal::ArenaImpl *const this,
        google::protobuf::internal::ArenaImpl::Block *head)
{
  google::protobuf::internal::ArenaImpl::Block *v2; // r14
  google::protobuf::internal::ArenaImpl::CleanupChunk *i; // r13
  size_t len; // r12
  __int64 v5; // rbp
  __int64 v6; // rbx

  if ( head )
  {
    v2 = head;
    do
    {
      for ( i = v2->cleanup; i; i = i->next )
      {
        len = i->len;
        v5 = 0LL;
        v6 = (__int64)(&i->size + 2 * i->len);
        if ( i->len )
        {
          do
          {
            ++v5;
            (*(void (__fastcall **)(_QWORD))(v6 + 8))(*(_QWORD *)v6);
            v6 -= 16LL;
          }
          while ( len != v5 );
        }
      }
      v2->cleanup = 0LL;
      v2 = v2->next;
    }
    while ( v2 );
  }
};

// Line 351: range 000000000C897060-000000000C897080
void __fastcall google::protobuf::Arena::OnArenaAllocation(
        const google::protobuf::Arena *const this,
        const std::type_info *allocated_type,
        size_t n)
{
  void (*on_arena_allocation)(const std::type_info *, google::protobuf::uint64, void *); // rax

  on_arena_allocation = this->on_arena_allocation_;
  if ( on_arena_allocation )
    on_arena_allocation(allocated_type, n, this->hooks_cookie_);
};

// Line 357: range 000000000C746900-000000000C746931
void __cdecl GLOBAL__sub_I__ZN6google8protobuf8internal9ArenaImpl23lifecycle_id_generator_E()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
  google::protobuf::internal::ArenaImpl::lifecycle_id_generator_.word_ = 0LL;
};
