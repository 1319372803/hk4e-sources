// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/src/double_link.cpp

// Line 20: range 0000000019B6A60A-0000000019B6A6BB
void __fastcall common::tools::DoubleLinkNode::removeFromList(common::tools::DoubleLinkNode *const this)
{
  common::tools::DoubleLink **p_owner_ptr; // rdi
  common::tools::DoubleLink *owner_ptr; // rdi

  p_owner_ptr = &this->owner_ptr;
  if ( *(_BYTE *)(((unsigned __int64)p_owner_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_owner_ptr);
    JUMPOUT(0x19B6A63DLL);
  }
  owner_ptr = this->owner_ptr;
  if ( owner_ptr )
    common::tools::DoubleLink::remove(owner_ptr, this);
};

// Line 39: range 0000000019B6A48A-0000000019B6A506
void __fastcall common::tools::DoubleLink::clear(common::tools::DoubleLink *const this)
{
  std::mutex *p_mutex; // r12
  std::mutex *v3; // rdi
  int v4; // ebp

  p_mutex = &this->mutex_;
  if ( &_pthread_key_create )
  {
    v3 = &this->mutex_;
    v4 = pthread_mutex_lock(&v3->_M_mutex);
    if ( v4 )
    {
      __asan_handle_no_return(v3);
      std::__throw_system_error(v4);
    }
  }
  while ( common::tools::DoubleLink::internalPop(this) )
    ;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_mutex->_M_mutex);
};

// Line 73: range 0000000019B69F38-0000000019B6A1BE
void __fastcall common::tools::DoubleLink::pushFront(
        common::tools::DoubleLink *const this,
        common::tools::DoubleLinkNode *node_ptr)
{
  std::mutex *p_mutex; // r13
  std::mutex *v4; // rdi
  int v5; // r12d
  common::tools::DoubleLinkNode *next_ptr; // rax
  void *p_owner_ptr; // rdi
  common::tools::DoubleLinkNode *prev_ptr; // rdx
  common::tools::DoubleLink **v9; // rdi
  common::tools::DoubleLink *owner_ptr; // rcx
  void *p_next_ptr; // rdi
  common::tools::DoubleLinkNode *v12; // rax
  char v13; // al
  struct _Unwind_Exception *v14; // rbx
  common::milog::MiLogStream *v15; // rdi
  common::milog::MiLogStream v16[2]; // [rsp+0h] [rbp-48h] BYREF

  p_mutex = &this->mutex_;
  if ( &_pthread_key_create )
  {
    v4 = &this->mutex_;
    v5 = pthread_mutex_lock(&v4->_M_mutex);
    if ( v5 )
    {
      __asan_handle_no_return(v4);
      std::__throw_system_error(v5);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&node_ptr->next_ptr >> 3) + 0x7FFF8000) )
  {
    next_ptr = (common::tools::DoubleLinkNode *)__asan_report_load8(&node_ptr->next_ptr);
  }
  else
  {
    next_ptr = node_ptr->next_ptr;
    if ( next_ptr )
      goto LABEL_5;
  }
  if ( *(_BYTE *)(((unsigned __int64)&node_ptr->prev_ptr >> 3) + 0x7FFF8000) )
  {
    next_ptr = (common::tools::DoubleLinkNode *)__asan_report_load8(&node_ptr->prev_ptr);
  }
  else if ( node_ptr->prev_ptr )
  {
    goto LABEL_22;
  }
  p_owner_ptr = &node_ptr->owner_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&node_ptr->owner_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_owner_ptr);
    goto LABEL_28;
  }
  if ( node_ptr->owner_ptr )
    goto LABEL_22;
LABEL_5:
  p_owner_ptr = &node_ptr->prev_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&node_ptr->prev_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    next_ptr = (common::tools::DoubleLinkNode *)__asan_report_load8(p_owner_ptr);
    goto LABEL_29;
  }
  prev_ptr = node_ptr->prev_ptr;
  if ( prev_ptr )
    goto LABEL_7;
LABEL_29:
  if ( next_ptr )
    goto LABEL_22;
  v9 = &node_ptr->owner_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&node_ptr->owner_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v9);
    goto LABEL_34;
  }
  if ( node_ptr->owner_ptr )
  {
LABEL_22:
    common::milog::MiLogStream::MiLogStream(
      v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/double_link.cpp",
      "pushFront",
      79);
    common::milog::MiLogStream::operator()(v16, "DoubleLink push error");
    common::milog::MiLogStream::~MiLogStream(v16);
    goto LABEL_38;
  }
LABEL_7:
  v9 = &node_ptr->owner_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&node_ptr->owner_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    next_ptr = (common::tools::DoubleLinkNode *)__asan_report_load8(v9);
    goto LABEL_35;
  }
  owner_ptr = node_ptr->owner_ptr;
  if ( owner_ptr )
    goto LABEL_9;
LABEL_35:
  if ( next_ptr || prev_ptr )
    goto LABEL_22;
LABEL_9:
  if ( !next_ptr && !prev_ptr && !owner_ptr )
  {
    node_ptr->prev_ptr = &this->head_;
    p_next_ptr = &this->head_.next_ptr;
    if ( *(_BYTE *)(((unsigned __int64)&this->head_.next_ptr >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_next_ptr);
    }
    else
    {
      v12 = this->head_.next_ptr;
      node_ptr->next_ptr = v12;
      p_next_ptr = &v12->prev_ptr;
      if ( !*(_BYTE *)(((unsigned __int64)&v12->prev_ptr >> 3) + 0x7FFF8000) )
      {
        v12->prev_ptr = node_ptr;
        this->head_.next_ptr = node_ptr;
        node_ptr->owner_ptr = this;
        p_next_ptr = &this->count_;
        v13 = *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000);
        if ( !v13 || v13 > 3 )
        {
          ++this->count_;
          if ( &_pthread_key_create )
            pthread_mutex_unlock(&p_mutex->_M_mutex);
          return;
        }
LABEL_43:
        v14 = (struct _Unwind_Exception *)__asan_report_load4(p_next_ptr);
        v15 = v16;
        common::milog::MiLogStream::~MiLogStream(v16);
        if ( &_pthread_key_create )
        {
          v15 = (common::milog::MiLogStream *)p_mutex;
          pthread_mutex_unlock(&p_mutex->_M_mutex);
        }
        __asan_handle_no_return(v15);
        _Unwind_Resume(v14);
      }
    }
    __asan_report_store8(p_next_ptr);
    goto LABEL_43;
  }
LABEL_38:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_mutex->_M_mutex);
};

// Line 97: range 0000000019B6A50C-0000000019B6A57F
common::tools::DoubleLinkNode *__fastcall common::tools::DoubleLink::pop(common::tools::DoubleLink *const this)
{
  std::mutex *p_mutex; // r12
  std::mutex *v3; // rdi
  int v4; // ebp
  common::tools::DoubleLinkNode *v5; // rbx

  p_mutex = &this->mutex_;
  if ( &_pthread_key_create )
  {
    v3 = &this->mutex_;
    v4 = pthread_mutex_lock(&v3->_M_mutex);
    if ( v4 )
    {
      __asan_handle_no_return(v3);
      std::__throw_system_error(v4);
    }
  }
  v5 = common::tools::DoubleLink::internalPop(this);
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_mutex->_M_mutex);
  return v5;
};

// Line 103: range 0000000019B6A44C-0000000019B6A488
common::tools::DoubleLinkNode *__fastcall common::tools::DoubleLink::internalPop(common::tools::DoubleLink *const this)
{
  common::tools::DoubleLink *next_ptr; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->head_.next_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->head_.next_ptr);
    return 0LL;
  }
  next_ptr = (common::tools::DoubleLink *)this->head_.next_ptr;
  if ( &this->tail_ == (common::tools::DoubleLinkNode *)next_ptr )
    return 0LL;
  common::tools::DoubleLink::internalRemove(this, this->head_.next_ptr);
  return &next_ptr->head_;
};

// Line 114: range 0000000019B6A584-0000000019B6A605
void __fastcall common::tools::DoubleLink::remove(
        common::tools::DoubleLink *const this,
        common::tools::DoubleLinkNode *node_ptr)
{
  std::mutex *p_mutex; // r13
  std::mutex *v4; // rdi
  int v5; // r12d

  p_mutex = &this->mutex_;
  if ( &_pthread_key_create )
  {
    v4 = &this->mutex_;
    v5 = pthread_mutex_lock(&v4->_M_mutex);
    if ( v5 )
    {
      __asan_handle_no_return(v4);
      std::__throw_system_error(v5);
    }
  }
  common::tools::DoubleLink::internalRemove(this, node_ptr);
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_mutex->_M_mutex);
};

// Line 120: range 0000000019B6A1C0-0000000019B6A446
void __fastcall common::tools::DoubleLink::internalRemove(
        common::tools::DoubleLink *const this,
        common::tools::DoubleLinkNode *node_ptr)
{
  common::tools::DoubleLink *owner_ptr; // rax
  common::tools::DoubleLinkNode **p_next_ptr; // rdi
  common::tools::DoubleLinkNode *next_ptr; // rdx
  common::tools::DoubleLinkNode *prev_ptr; // rcx
  void *p_prev_ptr; // rdi
  common::tools::DoubleLinkNode *v7; // rdx
  common::tools::DoubleLinkNode *v8; // rax
  common::tools::DoubleLink *v9; // rax
  char v10; // dl
  struct _Unwind_Exception *v11; // rbx
  common::milog::MiLogStream v12; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&node_ptr->owner_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&node_ptr->owner_ptr);
    goto LABEL_17;
  }
  owner_ptr = node_ptr->owner_ptr;
  if ( owner_ptr != this )
  {
LABEL_17:
    common::milog::MiLogStream::MiLogStream(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/double_link.cpp",
      "internalRemove",
      123);
    common::milog::MiLogStream::operator()(&v12, "try to remove a node not in list");
    common::milog::MiLogStream::~MiLogStream(&v12);
    return;
  }
  p_next_ptr = &node_ptr->next_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&node_ptr->next_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_next_ptr);
    goto LABEL_20;
  }
  next_ptr = node_ptr->next_ptr;
  if ( !next_ptr )
    goto LABEL_8;
  p_next_ptr = &node_ptr->prev_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&node_ptr->prev_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(p_next_ptr);
    goto LABEL_21;
  }
  if ( !node_ptr->prev_ptr || !owner_ptr )
  {
LABEL_15:
    common::milog::MiLogStream::MiLogStream(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/double_link.cpp",
      "internalRemove",
      131);
    common::milog::MiLogStream::operator()(&v12, "DoubleLink remove error");
LABEL_22:
    common::milog::MiLogStream::~MiLogStream(&v12);
    goto LABEL_23;
  }
LABEL_8:
  p_next_ptr = &node_ptr->prev_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&node_ptr->prev_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(p_next_ptr);
    goto LABEL_22;
  }
  prev_ptr = node_ptr->prev_ptr;
  if ( prev_ptr && (!next_ptr || !owner_ptr) || owner_ptr && (!next_ptr || !prev_ptr) )
    goto LABEL_15;
LABEL_23:
  p_prev_ptr = &node_ptr->prev_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&node_ptr->prev_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_prev_ptr);
LABEL_35:
    __asan_report_load8(p_prev_ptr);
    goto LABEL_36;
  }
  v7 = node_ptr->prev_ptr;
  if ( !v7 )
    return;
  p_prev_ptr = &node_ptr->next_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&node_ptr->next_ptr >> 3) + 0x7FFF8000) )
    goto LABEL_35;
  v8 = node_ptr->next_ptr;
  if ( !v8 )
    return;
  p_prev_ptr = &node_ptr->owner_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&node_ptr->owner_ptr >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8(p_prev_ptr);
    goto LABEL_37;
  }
  if ( node_ptr->owner_ptr )
  {
    p_prev_ptr = &v7->next_ptr;
    if ( !*(_BYTE *)(((unsigned __int64)&v7->next_ptr >> 3) + 0x7FFF8000) )
    {
      v7->next_ptr = v8;
      p_prev_ptr = &v8->prev_ptr;
      if ( !*(_BYTE *)(((unsigned __int64)&v8->prev_ptr >> 3) + 0x7FFF8000) )
      {
        v8->prev_ptr = node_ptr->prev_ptr;
        node_ptr->prev_ptr = 0LL;
        node_ptr->next_ptr = 0LL;
        v9 = node_ptr->owner_ptr;
        p_prev_ptr = &v9->count_;
        v10 = *(_BYTE *)(((unsigned __int64)&v9->count_ >> 3) + 0x7FFF8000);
        if ( !v10 || v10 > 3 )
        {
          --v9->count_;
          node_ptr->owner_ptr = 0LL;
          return;
        }
LABEL_39:
        v11 = (struct _Unwind_Exception *)__asan_report_load4(p_prev_ptr);
        common::milog::MiLogStream::~MiLogStream(&v12);
        __asan_handle_no_return(&v12);
        _Unwind_Resume(v11);
      }
LABEL_38:
      __asan_report_store8(p_prev_ptr);
      goto LABEL_39;
    }
LABEL_37:
    __asan_report_store8(p_prev_ptr);
    goto LABEL_38;
  }
};

// Line 145: range 0000000019B69A26-0000000019B69F36
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/double_link.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      if ( !`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
      {
        `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
        {
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
          JUMPOUT(0x19B69AB9LL);
        }
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                             + 9;
      }
    }
    __asan_after_dynamic_init();
  }
};
