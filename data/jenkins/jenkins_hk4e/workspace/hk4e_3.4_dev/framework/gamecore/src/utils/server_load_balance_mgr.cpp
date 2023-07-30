// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/utils/server_load_balance_mgr.cpp

// Line 30: range 0000000014E2CF8A-0000000014E2D266
void __fastcall ServerLBMgr::onReloadConfig(ServerLBMgr *const this, const ServerLBMgrConfig *new_config)
{
  double v2; // xmm0_8
  ServerLBMgr *v3; // rbx
  unsigned __int64 v5; // r12
  char *v6; // rcx
  unsigned __int64 v7; // r13
  int i; // eax
  __int64 v9; // rax
  int v10; // r8d
  char v11; // si
  char v12; // si
  int *p_choose_add_load; // rdi
  char v14; // al
  char v15; // dl
  char v16; // al
  common::milog::MiLogStream v17; // [rsp+0h] [rbp-88h] BYREF
  char v18[104]; // [rsp+20h] [rbp-68h] BYREF

  v3 = this;
  v5 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_0(64LL);
    if ( v9 )
      v5 = v9;
  }
  v6 = (char *)(v5 + 64);
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 12 13 old_config:31";
  *(_QWORD *)(v5 + 16) = ServerLBMgr::onReloadConfig;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202177536;
  if ( *(_BYTE *)((((unsigned __int64)&this->config.choose_add_load + 3) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->config.choose_add_load + 3) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this
                                                                                                + 11) & 7)
    || *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load_n(this, 12LL);
    goto LABEL_8;
  }
  *(_QWORD *)(v5 + 32) = *(_QWORD *)this->config.threshold;
  *(_DWORD *)(v5 + 40) = this->config.choose_add_load;
  this->config = *new_config;
  for ( i = 0; i <= 1; ++i )
  {
    this = (ServerLBMgr *const)&v6[4 * i - 32];
    v11 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v6 + 4 * i - 32) & 7) + 3) >= v11 && v11 )
    {
LABEL_8:
      v2 = __asan_report_load4(this);
    }
    else
    {
      v10 = *(_DWORD *)&v6[4 * i - 32];
      v12 = *(_BYTE *)(((unsigned __int64)&new_config->threshold[i] >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)new_config + 4 * i) & 7) + 3) >= v12 && v12 )
      {
        v2 = __asan_report_load4(&new_config->threshold[i]);
LABEL_17:
        common::milog::MiLogStream::MiLogStream(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          5u,
          "src/utils/server_load_balance_mgr.cpp",
          "onReloadConfig",
          37);
        common::milog::MiLogStream::operator()(&v17, "threshold config changed. call resetThresholdSet()", v2);
        common::milog::MiLogStream::~MiLogStream(&v17);
        ServerLBMgr::resetThresholdSet(v3);
        break;
      }
    }
    if ( v10 != new_config->threshold[i] )
      goto LABEL_17;
  }
  common::milog::MiLogStream::MiLogStream(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "src/utils/server_load_balance_mgr.cpp",
    "onReloadConfig",
    42);
  p_choose_add_load = &v3->config.choose_add_load;
  v14 = *(_BYTE *)(((unsigned __int64)&v3->config.choose_add_load >> 3) + 0x7FFF8000);
  if ( v14 && v14 <= 3 )
  {
    __asan_report_load4(p_choose_add_load);
LABEL_26:
    __asan_report_load4(p_choose_add_load);
    goto LABEL_27;
  }
  p_choose_add_load = &v3->config.threshold[1];
  v15 = *(_BYTE *)(((unsigned __int64)&v3->config.threshold[1] >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v3 + 4) & 7) + 3) >= v15 && v15 )
    goto LABEL_26;
  v16 = *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000);
  if ( !v16 || v16 > 3 )
  {
    common::milog::MiLogStream::operator()(
      &v17,
      "threshold[%d,%d] choose_add_load[%d]",
      (unsigned int)v3->config.threshold[0],
      (unsigned int)v3->config.threshold[1],
      (unsigned int)v3->config.choose_add_load);
    goto LABEL_28;
  }
LABEL_27:
  __asan_report_load4(v3);
LABEL_28:
  common::milog::MiLogStream::~MiLogStream(&v17);
  if ( v18 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 46: range 0000000014E2B29E-0000000014E2B812
int __fastcall ServerLBMgr::addServer(ServerLBMgr *const this, uint32_t app_id, int init_load)
{
  unsigned __int64 v4; // r13
  _DWORD *v5; // r14
  __int64 v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // r15
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *p_cur; // rdi
  char *cur; // rdi
  size_t v10; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // rdi
  char *v12; // rdi
  size_t v13; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // rdi
  char *v15; // rdi
  size_t v16; // r12
  const char *v17; // rsi
  __int64 v18; // rdx
  std::forward_iterator_tag v19; // cl
  __int64 v20; // rax
  void *v21; // rdi
  int v22; // ebp
  int v23; // r12d
  std::_Rb_tree_node_base::_Base_ptr *p_M_parent; // rdi
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int> > >::iterator v25; // rax
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int> > >::iterator v26; // r9
  std::_Rb_tree_iterator<std::pair<unsigned int const,int> >::_Base_ptr M_node; // rdi
  std::_Rb_tree_iterator<std::pair<unsigned int const,int> >::_Base_ptr v28; // rsi
  unsigned __int64 v29; // rax
  char v30; // cl
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int> > >::iterator v31; // rax
  unsigned __int64 v32; // rdi
  char v33; // cl
  std::tuple<> *v34; // rdi
  std::tuple<unsigned int const&> *__args_1; // [rsp+0h] [rbp-118h]
  std::tuple<> *__args_2; // [rsp+8h] [rbp-110h]
  std::tuple<> v38; // [rsp+17h] [rbp-101h] BYREF
  std::tuple<unsigned int const&> v39; // [rsp+18h] [rbp-100h] BYREF
  common::milog::MiLogStream v40; // [rsp+20h] [rbp-F8h] BYREF
  std::tuple<> v41; // [rsp+40h] [rbp-D8h] BYREF

  LODWORD(__args_1) = app_id;
  HIDWORD(__args_1) = init_load;
  v4 = (unsigned __int64)&v41;
  __args_2 = &v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v20 = __asan_stack_malloc_2(160LL);
    if ( v20 )
      v4 = v20;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 6 app_id 48 4 9 app_id:45 64 16 2 os 96 32 13 app_id_str:47";
  *(_QWORD *)(v4 + 16) = ServerLBMgr::addServer;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  *(_DWORD *)(v4 + 48) = app_id;
  *(_DWORD *)(v4 + 32) = app_id;
  *(_QWORD *)(v4 + 64) = 0LL;
  *(_QWORD *)(v4 + 72) = 0LL;
  v6 = operator new[](0x1000uLL);
  *(_QWORD *)(v4 + 64) = v6;
  *(_QWORD *)(v4 + 72) = v6;
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v4 + 64),
         app_id & 0x3FF);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    p_cur = v7;
    __asan_report_load8(v7);
    goto LABEL_12;
  }
  p_cur = (common::tools::StringStream<common::tools::FixedBuffer<4096> > *)&v7->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v7->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8(p_cur);
    goto LABEL_13;
  }
  cur = v7->buffer_.cur_;
  v10 = LODWORD(v7->buffer_.data_) + 4096 - (_DWORD)cur != 0LL;
  memcpy(cur, &unk_1AE34BC0, v10);
  v7->buffer_.cur_ += v10;
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, (app_id >> 10) & 0xF);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    v11 = v7;
    __asan_report_load8(v7);
    goto LABEL_14;
  }
  v11 = (common::tools::StringStream<common::tools::FixedBuffer<4096> > *)&v7->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v7->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_load8(v11);
    goto LABEL_15;
  }
  v12 = v7->buffer_.cur_;
  v13 = LODWORD(v7->buffer_.data_) + 4096 - (_DWORD)v12 != 0LL;
  memcpy(v12, &unk_1AE34BC0, v13);
  v7->buffer_.cur_ += v13;
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, (app_id >> 14) & 0x3FFF);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    v14 = v7;
    __asan_report_load8(v7);
    goto LABEL_16;
  }
  v14 = (common::tools::StringStream<common::tools::FixedBuffer<4096> > *)&v7->buffer_.cur_;
  if ( !*(_BYTE *)(((unsigned __int64)&v7->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
    v15 = v7->buffer_.cur_;
    v16 = LODWORD(v7->buffer_.data_) + 4096 - (_DWORD)v15 != 0LL;
    memcpy(v15, &unk_1AE34BC0, v16);
    v7->buffer_.cur_ += v16;
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, app_id >> 28);
    v17 = *(const char **)(v4 + 64);
    v18 = (int)(*(_QWORD *)(v4 + 72) - (_DWORD)v17);
    *(_QWORD *)(v4 + 96) = v4 + 112;
    std::string::_M_construct<char const*>((std::string *const)(v4 + 96), v17, &v17[v18], v19);
    goto LABEL_17;
  }
LABEL_16:
  __asan_report_load8(v14);
LABEL_17:
  v21 = *(void **)(v4 + 64);
  if ( v21 )
    operator delete[](v21);
  if ( &this->load_map._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::find(
                                                                                      &this->load_map._M_t,
                                                                                      (const unsigned int *)(v4 + 48))._M_node )
  {
    v23 = ServerLBMgr::calcThresholdSetIndex(this, SHIDWORD(__args_1));
    common::tools::RandomSet<unsigned int>::insert(&this->id_set_by_threshold[v23], *(_DWORD *)(v4 + 48));
    p_M_parent = (std::_Rb_tree_node_base::_Base_ptr *)&this->total_load[v23];
    if ( *(_BYTE *)(((unsigned __int64)p_M_parent >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_parent);
    }
    else
    {
      this->total_load[v23] += SHIDWORD(__args_1);
      p_M_parent = &this->load_map._M_t._M_impl._M_header._M_parent;
      if ( !*(_BYTE *)(((unsigned __int64)&this->load_map._M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
      {
        v25._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::_M_lower_bound(
                        &this->load_map._M_t,
                        (std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int> > >::_Link_type)this->load_map._M_t._M_impl._M_header._M_parent,
                        &this->load_map._M_t._M_impl._M_header,
                        (const unsigned int *)(v4 + 48))._M_node;
        M_node = v25._M_node;
        v28 = v25._M_node;
        if ( &this->load_map._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)v25._M_node )
        {
LABEL_28:
          v39._M_head_impl = (const unsigned int *)(v4 + 48);
          v31._M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<unsigned int const&>,std::tuple<>>(
                          &this->load_map._M_t,
                          (std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int> >,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int> > >::const_iterator)v28,
                          &std::piecewise_construct,
                          &v39,
                          &v38,
                          (const std::piecewise_construct_t *)v26._M_node,
                          __args_1,
                          &v41)._M_node;
LABEL_32:
          M_node = v31._M_node;
LABEL_33:
          v32 = (unsigned __int64)(&M_node[1]._M_color + 1);
          v33 = *(_BYTE *)((v32 >> 3) + 0x7FFF8000);
          if ( (char)((v32 & 7) + 3) >= v33 && v33 )
          {
            __asan_report_store4(v32);
          }
          else
          {
            *(_DWORD *)v32 = HIDWORD(__args_1);
            common::milog::MiLogStream::MiLogStream(
              &v40,
              &common::milog::MiLogDefault::default_log_obj_,
              5u,
              "src/utils/server_load_balance_mgr.cpp",
              "addServer",
              60);
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->load_map._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->load_map._M_t._M_impl._M_node_count);
          else
            common::milog::MiLogStream::operator()(
              &v40,
              "add server app_id=%s init_load=%d. cur_total_server_count=%d",
              *(const char **)(v4 + 96),
              HIDWORD(__args_1),
              LODWORD(this->load_map._M_t._M_impl._M_node_count));
          common::milog::MiLogStream::~MiLogStream(&v40);
          v22 = 0;
          goto LABEL_41;
        }
        v29 = (unsigned __int64)&v25._M_node[1];
        v30 = *(_BYTE *)((v29 >> 3) + 0x7FFF8000);
        if ( (char)((v29 & 7) + 3) < v30 || !v30 )
        {
          if ( *(_DWORD *)(v4 + 48) >= v28[1]._M_color )
            goto LABEL_33;
          goto LABEL_28;
        }
LABEL_31:
        __asan_report_load4(v29);
        goto LABEL_32;
      }
    }
    v29 = __asan_report_load8(p_M_parent);
    goto LABEL_31;
  }
  common::milog::MiLogStream::MiLogStream(
    &v40,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/utils/server_load_balance_mgr.cpp",
    "addServer",
    51);
  common::milog::MiLogStream::operator()(&v40, "duplicated app_id:%s", *(const char **)(v4 + 96));
  common::milog::MiLogStream::~MiLogStream(&v40);
  v22 = -1;
LABEL_41:
  v34 = *(std::tuple<> **)(v4 + 96);
  if ( v34 != (std::tuple<> *)(v4 + 112) )
    operator delete(v34);
  if ( __args_2 == (std::tuple<> *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v22;
};

// Line 89: range 0000000014E2C2E2-0000000014E2C6B7
int __fastcall ServerLBMgr::updateLoad(ServerLBMgr *const this, uint32_t app_id, int new_load)
{
  unsigned __int64 v3; // r13
  _DWORD *v4; // r14
  __int64 v5; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // r15
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *p_cur; // rdi
  char *cur; // rdi
  size_t v9; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rdi
  char *v11; // rdi
  size_t v12; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rdi
  char *v14; // rdi
  size_t v15; // r12
  const char *v16; // rsi
  __int64 v17; // rdx
  std::forward_iterator_tag v18; // cl
  __int64 v19; // rax
  void *v20; // rdi
  ServerLBMgr *M_node; // rsi
  int v22; // ebp
  char *v23; // rdi
  common::milog::MiLogStream v27; // [rsp+20h] [rbp-F8h] BYREF
  char v28[216]; // [rsp+40h] [rbp-D8h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v19 = __asan_stack_malloc_2(160LL);
    if ( v19 )
      v3 = v19;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 6 app_id 48 4 9 app_id:88 64 16 2 os 96 32 13 app_id_str:90";
  *(_QWORD *)(v3 + 16) = ServerLBMgr::updateLoad;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = app_id;
  *(_DWORD *)(v3 + 32) = app_id;
  *(_QWORD *)(v3 + 64) = 0LL;
  *(_QWORD *)(v3 + 72) = 0LL;
  v5 = operator new[](0x1000uLL);
  *(_QWORD *)(v3 + 64) = v5;
  *(_QWORD *)(v3 + 72) = v5;
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 64),
         app_id & 0x3FF);
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    p_cur = v6;
    __asan_report_load8(v6);
    goto LABEL_12;
  }
  p_cur = (common::tools::StringStream<common::tools::FixedBuffer<4096> > *)&v6->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v6->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8(p_cur);
    goto LABEL_13;
  }
  cur = v6->buffer_.cur_;
  v9 = LODWORD(v6->buffer_.data_) + 4096 - (_DWORD)cur != 0LL;
  memcpy(cur, &unk_1AE34BC0, v9);
  v6->buffer_.cur_ += v9;
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, (app_id >> 10) & 0xF);
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    v10 = v6;
    __asan_report_load8(v6);
    goto LABEL_14;
  }
  v10 = (common::tools::StringStream<common::tools::FixedBuffer<4096> > *)&v6->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v6->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    __asan_report_load8(v10);
    goto LABEL_15;
  }
  v11 = v6->buffer_.cur_;
  v12 = LODWORD(v6->buffer_.data_) + 4096 - (_DWORD)v11 != 0LL;
  memcpy(v11, &unk_1AE34BC0, v12);
  v6->buffer_.cur_ += v12;
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, (app_id >> 14) & 0x3FFF);
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    v13 = v6;
    __asan_report_load8(v6);
    goto LABEL_16;
  }
  v13 = (common::tools::StringStream<common::tools::FixedBuffer<4096> > *)&v6->buffer_.cur_;
  if ( !*(_BYTE *)(((unsigned __int64)&v6->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
    v14 = v6->buffer_.cur_;
    v15 = LODWORD(v6->buffer_.data_) + 4096 - (_DWORD)v14 != 0LL;
    memcpy(v14, &unk_1AE34BC0, v15);
    v6->buffer_.cur_ += v15;
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, app_id >> 28);
    v16 = *(const char **)(v3 + 64);
    v17 = (int)(*(_QWORD *)(v3 + 72) - (_DWORD)v16);
    *(_QWORD *)(v3 + 96) = v3 + 112;
    std::string::_M_construct<char const*>((std::string *const)(v3 + 96), v16, &v16[v17], v18);
    goto LABEL_17;
  }
LABEL_16:
  __asan_report_load8(v13);
LABEL_17:
  v20 = *(void **)(v3 + 64);
  if ( v20 )
    operator delete[](v20);
  M_node = (ServerLBMgr *)std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::find(
                            &this->load_map._M_t,
                            (const unsigned int *)(v3 + 48))._M_node;
  if ( M_node == (ServerLBMgr *)&this->load_map._M_t._M_impl.std::_Rb_tree_header )
  {
    common::milog::MiLogStream::MiLogStream(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/server_load_balance_mgr.cpp",
      "updateLoad",
      95);
    common::milog::MiLogStream::operator()(&v27, "not find app_id:%s", *(const char **)(v3 + 96));
    common::milog::MiLogStream::~MiLogStream(&v27);
    v22 = -1;
  }
  else
  {
    ServerLBMgr::modifyLoad(this, (std::map<unsigned int,int>::iterator)M_node, new_load);
    v22 = 0;
  }
  v23 = *(char **)(v3 + 96);
  if ( v23 != (char *)(v3 + 112) )
    operator delete(v23);
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v22;
};

// Line 105: range 0000000014E2C6BA-0000000014E2CDEE
uint32_t __fastcall ServerLBMgr::chooseServer(ServerLBMgr *const this)
{
  unsigned __int64 v2; // r12
  _DWORD *v3; // r13
  int v4; // r14d
  int v5; // eax
  __int64 v6; // rax
  uint32_t v7; // ebx
  unsigned int v8; // r14d
  int64_t *total_load; // rdi
  char v10; // cl
  int v11; // esi
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v16; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v17; // r15
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *p_cur; // rdi
  char *cur; // rdi
  size_t v20; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v21; // rdi
  char *v22; // rdi
  size_t v23; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v24; // rdi
  char *v25; // rdi
  size_t v26; // r14
  const char *v27; // rsi
  __int64 v28; // rdx
  std::forward_iterator_tag v29; // cl
  void *v30; // rdi
  std::_Rb_tree_iterator<std::pair<unsigned int const,int> >::_Base_ptr M_node; // r14
  int *p_choose_add_load; // rdi
  char v33; // dl
  char v34; // al
  char v35; // dl
  char *v36; // rdi
  unsigned int set_index; // [rsp+8h] [rbp-100h]
  unsigned int v38; // [rsp+Ch] [rbp-FCh]
  common::milog::MiLogStream v39; // [rsp+10h] [rbp-F8h] BYREF
  char v40[216]; // [rsp+30h] [rbp-D8h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v2 = v6;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 18 choosed_app_id:139 48 4 6 app_id 64 16 2 os 96 32 14 app_id_str:147";
  *(_QWORD *)(v2 + 16) = ServerLBMgr::chooseServer;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->load_map._M_t._M_impl._M_node_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&this->load_map._M_t._M_impl._M_node_count);
    goto LABEL_9;
  }
  if ( !this->load_map._M_t._M_impl._M_node_count )
  {
LABEL_9:
    common::milog::MiLogStream::MiLogStream(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/server_load_balance_mgr.cpp",
      "chooseServer",
      110);
    common::milog::MiLogStream::operator()(&v39, "server map empty");
    common::milog::MiLogStream::~MiLogStream(&v39);
    v7 = 0;
    goto LABEL_22;
  }
  v4 = common::tools::RandomSet<unsigned int>::size(this->id_set_by_threshold);
  v5 = common::tools::RandomSet<unsigned int>::size(&this->id_set_by_threshold[1]);
  if ( !(v4 | v5) )
  {
    common::milog::MiLogStream::MiLogStream(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/server_load_balance_mgr.cpp",
      "chooseServer",
      121);
    common::milog::MiLogStream::operator()(&v39, "all svr are high load");
    common::milog::MiLogStream::~MiLogStream(&v39);
    set_index = 2;
    goto LABEL_10;
  }
  total_load = (int64_t *)&this->config.threshold[1];
  v10 = *(_BYTE *)(((unsigned __int64)&this->config.threshold[1] >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)this + 4) & 7) + 3) >= v10 && v10 )
  {
    __asan_report_load4(total_load);
    goto LABEL_19;
  }
  v11 = this->config.threshold[1];
  v12 = v11 * v4;
  total_load = this->total_load;
  if ( *(_BYTE *)(((unsigned __int64)this->total_load >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    __asan_report_load8(total_load);
    goto LABEL_20;
  }
  v13 = v12 - this->total_load[0];
  v14 = v5 * v11;
  total_load = &this->total_load[1];
  if ( *(_BYTE *)(((unsigned __int64)&this->total_load[1] >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_load8(total_load);
    goto LABEL_21;
  }
  if ( v13 >= common::tools::RandomUtils::rand<long>(1LL, v13 + v14 - this->total_load[1]) )
  {
    set_index = 0;
    goto LABEL_10;
  }
LABEL_21:
  set_index = 1;
LABEL_10:
  v8 = common::tools::RandomSet<unsigned int>::randomSelect(
         &this->id_set_by_threshold[set_index],
         (unsigned int *)(v2 + 32));
  if ( v8 != 1 )
  {
    common::milog::MiLogStream::MiLogStream(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/utils/server_load_balance_mgr.cpp",
      "chooseServer",
      143);
    common::milog::MiLogStream::operator()(&v39, "choosed_size %d not 1", v8);
    common::milog::MiLogStream::~MiLogStream(&v39);
    v7 = 0;
    goto LABEL_22;
  }
  v38 = *(_DWORD *)(v2 + 32);
  *(_DWORD *)(v2 + 48) = v38;
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_QWORD *)(v2 + 72) = 0LL;
  v16 = operator new[](0x1000uLL);
  *(_QWORD *)(v2 + 64) = v16;
  *(_QWORD *)(v2 + 72) = v16;
  v17 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 64),
          v38 & 0x3FF);
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
    p_cur = v17;
    __asan_report_load8(v17);
    goto LABEL_33;
  }
  p_cur = (common::tools::StringStream<common::tools::FixedBuffer<4096> > *)&v17->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v17->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(p_cur);
    goto LABEL_34;
  }
  cur = v17->buffer_.cur_;
  v20 = LODWORD(v17->buffer_.data_) + 4096 - (_DWORD)cur != 0LL;
  memcpy(cur, &unk_1AE34BC0, v20);
  v17->buffer_.cur_ += v20;
  v17 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v17, (v38 >> 10) & 0xF);
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    v21 = v17;
    __asan_report_load8(v17);
    goto LABEL_35;
  }
  v21 = (common::tools::StringStream<common::tools::FixedBuffer<4096> > *)&v17->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v17->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(v21);
    goto LABEL_36;
  }
  v22 = v17->buffer_.cur_;
  v23 = LODWORD(v17->buffer_.data_) + 4096 - (_DWORD)v22 != 0LL;
  memcpy(v22, &unk_1AE34BC0, v23);
  v17->buffer_.cur_ += v23;
  v17 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v17, (v38 >> 14) & 0x3FFF);
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    v24 = v17;
    __asan_report_load8(v17);
    goto LABEL_37;
  }
  v24 = (common::tools::StringStream<common::tools::FixedBuffer<4096> > *)&v17->buffer_.cur_;
  if ( !*(_BYTE *)(((unsigned __int64)&v17->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
    v25 = v17->buffer_.cur_;
    v26 = LODWORD(v17->buffer_.data_) + 4096 - (_DWORD)v25 != 0LL;
    memcpy(v25, &unk_1AE34BC0, v26);
    v17->buffer_.cur_ += v26;
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v17, v38 >> 28);
    v27 = *(const char **)(v2 + 64);
    v28 = (int)(*(_QWORD *)(v2 + 72) - (_DWORD)v27);
    *(_QWORD *)(v2 + 96) = v2 + 112;
    std::string::_M_construct<char const*>((std::string *const)(v2 + 96), v27, &v27[v28], v29);
    goto LABEL_38;
  }
LABEL_37:
  __asan_report_load8(v24);
LABEL_38:
  v30 = *(void **)(v2 + 64);
  if ( v30 )
    operator delete[](v30);
  M_node = std::_Rb_tree<unsigned int,std::pair<unsigned int const,int>,std::_Select1st<std::pair<unsigned int const,int>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,int>>>::find(
             &this->load_map._M_t,
             (const unsigned int *)(v2 + 32))._M_node;
  if ( &this->load_map._M_t._M_impl.std::_Rb_tree_header != (std::_Rb_tree_header *)M_node )
  {
    p_choose_add_load = (int *)(&M_node[1]._M_color + 1);
    v33 = *(_BYTE *)(((unsigned __int64)(&M_node[1]._M_color + 1) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)M_node + 36) & 7) + 3) >= v33 && v33 )
    {
      __asan_report_load4(p_choose_add_load);
    }
    else
    {
      p_choose_add_load = &this->config.choose_add_load;
      v34 = *(_BYTE *)(((unsigned __int64)&this->config.choose_add_load >> 3) + 0x7FFF8000);
      if ( !v34 || v34 > 3 )
      {
        ServerLBMgr::modifyLoad(
          this,
          (std::map<unsigned int,int>::iterator)M_node,
          this->config.choose_add_load + *((_DWORD *)&M_node[1]._M_color + 1));
        goto LABEL_49;
      }
    }
    __asan_report_load4(p_choose_add_load);
LABEL_49:
    common::milog::MiLogStream::MiLogStream(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "src/utils/server_load_balance_mgr.cpp",
      "chooseServer",
      156);
    v35 = *(_BYTE *)(((unsigned __int64)(&M_node[1]._M_color + 1) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)M_node + 36) & 7) + 3) >= v35 && v35 )
      __asan_report_load4(&M_node[1]._M_color + 1);
    else
      common::milog::MiLogStream::operator()(
        &v39,
        "choose server set_index=%d app_id=%s load=%d",
        set_index,
        *(const char **)(v2 + 96),
        *((unsigned int *)&M_node[1]._M_color + 1));
    common::milog::MiLogStream::~MiLogStream(&v39);
    v7 = *(_DWORD *)(v2 + 32);
    goto LABEL_54;
  }
  common::milog::MiLogStream::MiLogStream(
    &v39,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "src/utils/server_load_balance_mgr.cpp",
    "chooseServer",
    152);
  common::milog::MiLogStream::operator()(
    &v39,
    "random select app_id:%s but not int load_map",
    *(const char **)(v2 + 96));
  common::milog::MiLogStream::~MiLogStream(&v39);
  v7 = 0;
LABEL_54:
  v36 = *(char **)(v2 + 96);
  if ( v36 != (char *)(v2 + 112) )
    operator delete(v36);
LABEL_22:
  if ( v40 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return v7;
};

// Line 162: range 0000000014E2B818-0000000014E2C2DD
void __fastcall ServerLBMgr::modifyLoad(
        ServerLBMgr *const this,
        std::map<unsigned int,int>::iterator iter,
        unsigned int new_load)
{
  __int64 v3; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v4; // r15
  size_t M_node; // r13
  _DWORD *v6; // r12
  char *v7; // rdi
  char v8; // dl
  char v9; // dl
  __int64 v10; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *p_cur; // rdi
  char *cur; // rdi
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rdi
  char *v14; // rdi
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // rdi
  char *v16; // rdi
  const char *v17; // rsi
  __int64 v18; // rdx
  std::forward_iterator_tag v19; // cl
  __int64 v20; // rax
  void *v21; // rdi
  char v22; // dl
  int v23; // eax
  unsigned int v24; // r14d
  unsigned int v25; // eax
  ServerLBMgr *v26; // r15
  ServerLBMgr *v27; // r13
  unsigned __int64 v28; // rdi
  __int64 v29; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v30; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v31; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v32; // rdi
  char *v33; // rdi
  size_t v34; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v35; // rdi
  char *v36; // rdi
  size_t v37; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v38; // rdi
  char *v39; // rdi
  size_t v40; // r13
  const char *v41; // rsi
  __int64 v42; // rdx
  std::forward_iterator_tag v43; // cl
  void *v44; // rdi
  char *v45; // rdi
  unsigned __int64 v46; // [rsp+10h] [rbp-150h]
  unsigned int old_load; // [rsp+1Ch] [rbp-144h]
  unsigned int app_id; // [rsp+2Ch] [rbp-134h]
  common::milog::MiLogStream v51; // [rsp+30h] [rbp-130h] BYREF
  common::milog::MiLogStream v52; // [rsp+50h] [rbp-110h] BYREF
  char v53[240]; // [rsp+70h] [rbp-F0h] BYREF

  M_node = (size_t)iter._M_node;
  v46 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v20 = __asan_stack_malloc_2(192LL);
    if ( v20 )
      v46 = v20;
  }
  *(_QWORD *)v46 = 1102416563LL;
  *(_QWORD *)(v46 + 8) = "4 48 4 6 app_id 64 8 8 iter:161 96 16 2 os 128 32 14 app_id_str:168";
  *(_QWORD *)(v46 + 16) = ServerLBMgr::modifyLoad;
  v6 = (_DWORD *)(v46 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862725] = -202116109;
  *(std::map<unsigned int,int>::iterator *)(v46 + 64) = iter;
  v7 = (char *)(v46 + 64);
  if ( *(_BYTE *)(((v46 + 64) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v7);
LABEL_18:
    __asan_report_load4(v7);
LABEL_19:
    __asan_report_load4(v7);
    goto LABEL_20;
  }
  v3 = *(_QWORD *)(v46 + 64);
  v7 = (char *)(v3 + 36);
  v8 = *(_BYTE *)(((unsigned __int64)(v3 + 36) >> 3) + 0x7FFF8000);
  if ( (char)(((v3 + 36) & 7) + 3) >= v8 && v8 )
    goto LABEL_18;
  old_load = *(_DWORD *)(v3 + 36);
  if ( old_load == new_load )
    goto LABEL_71;
  v7 = (char *)(v3 + 32);
  v9 = *(_BYTE *)(((unsigned __int64)(v3 + 32) >> 3) + 0x7FFF8000);
  if ( (char)(((v3 + 32) & 7) + 3) >= v9 && v9 )
    goto LABEL_19;
  app_id = *(_DWORD *)(v3 + 32);
  *(_DWORD *)(v46 + 48) = app_id;
  *(_QWORD *)(v46 + 96) = 0LL;
  *(_QWORD *)(v46 + 104) = 0LL;
  v10 = operator new[](0x1000uLL);
  *(_QWORD *)(v46 + 96) = v10;
  *(_QWORD *)(v46 + 104) = v10;
  v4 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v46 + 96),
         app_id & 0x3FF);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    p_cur = v4;
    __asan_report_load8(v4);
    goto LABEL_21;
  }
  M_node = (size_t)(v4->buffer_.data_ + 4096);
  p_cur = (common::tools::StringStream<common::tools::FixedBuffer<4096> > *)&v4->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v4->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_load8(p_cur);
    goto LABEL_22;
  }
  cur = v4->buffer_.cur_;
  M_node = (_DWORD)M_node - (_DWORD)cur != 0LL;
  memcpy(cur, &unk_1AE34BC0, M_node);
  v4->buffer_.cur_ += M_node;
  v4 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v4, (app_id >> 10) & 0xF);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    v13 = v4;
    __asan_report_load8(v4);
    goto LABEL_23;
  }
  M_node = (size_t)(v4->buffer_.data_ + 4096);
  v13 = (common::tools::StringStream<common::tools::FixedBuffer<4096> > *)&v4->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v4->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_load8(v13);
    goto LABEL_24;
  }
  v14 = v4->buffer_.cur_;
  M_node = (_DWORD)M_node - (_DWORD)v14 != 0LL;
  memcpy(v14, &unk_1AE34BC0, M_node);
  v4->buffer_.cur_ += M_node;
  v4 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v4, (app_id >> 14) & 0x3FFF);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    v15 = v4;
    __asan_report_load8(v4);
    goto LABEL_25;
  }
  M_node = (size_t)(v4->buffer_.data_ + 4096);
  v15 = (common::tools::StringStream<common::tools::FixedBuffer<4096> > *)&v4->buffer_.cur_;
  if ( !*(_BYTE *)(((unsigned __int64)&v4->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
    v16 = v4->buffer_.cur_;
    M_node = (_DWORD)M_node - (_DWORD)v16 != 0LL;
    memcpy(v16, &unk_1AE34BC0, M_node);
    v4->buffer_.cur_ += M_node;
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v4, app_id >> 28);
    v17 = *(const char **)(v46 + 96);
    v18 = (int)(*(_QWORD *)(v46 + 104) - (_DWORD)v17);
    *(_QWORD *)(v46 + 128) = v46 + 144;
    std::string::_M_construct<char const*>((std::string *const)(v46 + 128), v17, &v17[v18], v19);
    goto LABEL_26;
  }
LABEL_25:
  __asan_report_load8(v15);
LABEL_26:
  v21 = *(void **)(v46 + 96);
  if ( v21 )
    operator delete[](v21);
  v22 = *(_BYTE *)(((unsigned __int64)(v3 + 36) >> 3) + 0x7FFF8000);
  if ( (char)(((v3 + 36) & 7) + 3) >= v22 && v22 )
  {
    v23 = __asan_report_store4(v3 + 36);
  }
  else
  {
    LODWORD(v4) = new_load;
    *(_DWORD *)(v3 + 36) = new_load;
    M_node = (size_t)this;
    v23 = ServerLBMgr::calcThresholdSetIndex(this, old_load);
  }
  v24 = v23;
  v25 = ServerLBMgr::calcThresholdSetIndex((ServerLBMgr *const)M_node, (int)v4);
  v26 = (ServerLBMgr *)v25;
  if ( v24 == v25 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->total_load[v24] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&this->total_load[v24]);
    }
    else
    {
      v26 = this;
      this->total_load[v24] += (int)(new_load - old_load);
      common::milog::MiLogStream::MiLogStream(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "src/utils/server_load_balance_mgr.cpp",
        "modifyLoad",
        188);
    }
    if ( *(_BYTE *)(((unsigned __int64)&v26->total_load[v24] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v26->total_load[v24]);
    else
      common::milog::MiLogStream::operator()(&v52, "threshold_set[%d] total_load:%ld", v24, this->total_load[v24]);
  }
  else
  {
    v27 = this;
    common::tools::RandomSet<unsigned int>::erase(&this->id_set_by_threshold[v24], app_id);
    v28 = (unsigned __int64)&this->total_load[v24];
    if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v28);
    }
    else
    {
      v27 = this;
      this->total_load[v24] -= (int)old_load;
      common::tools::RandomSet<unsigned int>::insert(&this->id_set_by_threshold[(int)v26], app_id);
    }
    if ( *(_BYTE *)(((unsigned __int64)&v27->total_load[(int)v26] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(&v27->total_load[(int)v26]);
    }
    else
    {
      LODWORD(v27) = new_load;
      this->total_load[(int)v26] += (int)new_load;
      common::milog::MiLogStream::MiLogStream(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "src/utils/server_load_balance_mgr.cpp",
        "modifyLoad",
        181);
    }
    common::milog::MiLogStream::operator()(
      &v52,
      "svr threshold_set changed. app:%s load:%d->%d set_index:%d->%d",
      *(const char **)(v46 + 128),
      old_load,
      (unsigned int)v27,
      v24,
      v26);
    common::milog::MiLogStream::~MiLogStream(&v52);
    common::milog::MiLogStream::MiLogStream(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "src/utils/server_load_balance_mgr.cpp",
      "modifyLoad",
      182);
    if ( *(_BYTE *)(((unsigned __int64)&this->total_load[v24] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->total_load[v24]);
    else
      common::milog::MiLogStream::operator()(&v52, "threshold_set[%d] total_load:%ld", v24, this->total_load[v24]);
    common::milog::MiLogStream::~MiLogStream(&v52);
    common::milog::MiLogStream::MiLogStream(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "src/utils/server_load_balance_mgr.cpp",
      "modifyLoad",
      183);
    if ( *(_BYTE *)(((unsigned __int64)&this->total_load[(int)v26] >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->total_load[(int)v26]);
    else
      common::milog::MiLogStream::operator()(
        &v52,
        "threshold_set[%d] total_load:%ld",
        (unsigned int)v26,
        this->total_load[(int)v26]);
  }
  common::milog::MiLogStream::~MiLogStream(&v52);
  common::milog::MiLogStream::MiLogStream(
    &v51,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/utils/server_load_balance_mgr.cpp",
    "modifyLoad",
    191);
  *(_DWORD *)(v46 + 48) = app_id;
  *(_QWORD *)(v46 + 96) = 0LL;
  *(_QWORD *)(v46 + 104) = 0LL;
  v29 = operator new[](0x1000uLL);
  *(_QWORD *)(v46 + 96) = v29;
  *(_QWORD *)(v46 + 104) = v29;
  v30 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v46 + 96),
          app_id & 0x3FF);
  v31 = v30;
  if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
  {
    v32 = v30;
    __asan_report_load8(v30);
    goto LABEL_60;
  }
  v32 = (common::tools::StringStream<common::tools::FixedBuffer<4096> > *)&v30->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v30->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_60:
    __asan_report_load8(v32);
    goto LABEL_61;
  }
  v33 = v30->buffer_.cur_;
  v34 = LODWORD(v30->buffer_.data_) + 4096 - (_DWORD)v33 != 0LL;
  memcpy(v33, &unk_1AE34BC0, v34);
  v31->buffer_.cur_ += v34;
  v31 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v31, (app_id >> 10) & 0xF);
  if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
  {
LABEL_61:
    v35 = v31;
    __asan_report_load8(v31);
    goto LABEL_62;
  }
  v35 = (common::tools::StringStream<common::tools::FixedBuffer<4096> > *)&v31->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v31->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_62:
    __asan_report_load8(v35);
    goto LABEL_63;
  }
  v36 = v31->buffer_.cur_;
  v37 = LODWORD(v31->buffer_.data_) + 4096 - (_DWORD)v36 != 0LL;
  memcpy(v36, &unk_1AE34BC0, v37);
  v31->buffer_.cur_ += v37;
  v31 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v31, (app_id >> 14) & 0x3FFF);
  if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
  {
LABEL_63:
    v38 = v31;
    __asan_report_load8(v31);
    goto LABEL_64;
  }
  v38 = (common::tools::StringStream<common::tools::FixedBuffer<4096> > *)&v31->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v31->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_64:
    __asan_report_load8(v38);
    goto LABEL_65;
  }
  v39 = v31->buffer_.cur_;
  v40 = LODWORD(v31->buffer_.data_) + 4096 - (_DWORD)v39 != 0LL;
  memcpy(v39, &unk_1AE34BC0, v40);
  v31->buffer_.cur_ += v40;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v31, app_id >> 28);
  v41 = *(const char **)(v46 + 96);
  v42 = (int)(*(_QWORD *)(v46 + 104) - (_DWORD)v41);
  v52.log_ = (common::milog::MiLog *)&v52.ostr_ptr_._M_refcount;
  std::string::_M_construct<char const*>((std::string *const)&v52, v41, &v41[v42], v43);
LABEL_65:
  v44 = *(void **)(v46 + 96);
  if ( v44 )
    operator delete[](v44);
  common::milog::MiLogStream::operator()(&v51, "app:%s load:%d->%d", (const char *)v52.log_, old_load, new_load);
  if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v52.log_ != &v52.ostr_ptr_._M_refcount )
    operator delete(v52.log_);
  common::milog::MiLogStream::~MiLogStream(&v51);
  v45 = *(char **)(v46 + 128);
  if ( v45 != (char *)(v46 + 144) )
    operator delete(v45);
LABEL_71:
  if ( v53 == (char *)v46 )
  {
    *(_QWORD *)((v46 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v46 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v46 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v46 = 1172321806LL;
    *(_QWORD *)((v46 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v46 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v46 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 196: range 0000000014E2AD28-0000000014E2B299
int __fastcall ServerLBMgr::calcThresholdSetIndex(ServerLBMgr *const this, int load)
{
  int result; // eax
  char v3; // r8

  for ( result = 0; result <= 1; ++result )
  {
    v3 = *(_BYTE *)((((unsigned __int64)this + 4 * result) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)this + 4 * result) & 7) + 3) >= v3 && v3 )
    {
      __asan_report_load4((char *)this + 4 * result);
      return result;
    }
    if ( this->config.threshold[result] > load )
      return result;
  }
  return result;
};

// Line 206: range 0000000014E2CDF4-0000000014E2CF88
void __fastcall ServerLBMgr::resetThresholdSet(ServerLBMgr *const this)
{
  std::_Rb_tree_header *v1; // r12
  std::_Rb_tree_node_base::_Base_ptr v2; // r13
  int i; // ebx
  std::_Rb_tree_node_base::_Base_ptr M_left; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  char v9; // cl
  char v10; // dl
  char v11; // cl

  for ( i = 0; i <= 1; ++i )
  {
    v1 = (std::_Rb_tree_header *)i;
    common::tools::RandomSet<unsigned int>::clear(&this->id_set_by_threshold[i]);
    if ( *(_BYTE *)(((unsigned __int64)&this->total_load[i] >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8();
      break;
    }
    this->total_load[i] = 0LL;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->load_map._M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
    v6 = __asan_report_load8(&this->load_map._M_t._M_impl._M_header._M_left);
    goto LABEL_9;
  }
  M_left = this->load_map._M_t._M_impl._M_header._M_left;
  v1 = &this->load_map._M_t._M_impl.std::_Rb_tree_header;
  while ( 1 )
  {
    v2 = M_left;
    if ( M_left == (std::_Rb_tree_node_base::_Base_ptr)v1 )
      break;
    v6 = (unsigned __int64)(&M_left[1]._M_color + 1);
    v9 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
    if ( (char)((v6 & 7) + 3) >= v9 && v9 )
    {
LABEL_9:
      v7 = v6;
      __asan_report_load4(v6);
LABEL_10:
      __asan_report_load4(v7);
LABEL_11:
      v8 = __asan_report_load8(v7);
      goto LABEL_12;
    }
    i = ServerLBMgr::calcThresholdSetIndex(this, *((_DWORD *)&v2[1]._M_color + 1));
    v7 = (unsigned __int64)&v2[1];
    v10 = *(_BYTE *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v2 + 32) & 7) + 3) >= v10 && v10 )
      goto LABEL_10;
    common::tools::RandomSet<unsigned int>::insert(&this->id_set_by_threshold[i], v2[1]._M_color);
    v7 = (unsigned __int64)&this->total_load[i];
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      goto LABEL_11;
    v8 = this->total_load[i];
    v11 = *(_BYTE *)(((unsigned __int64)(&v2[1]._M_color + 1) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v2 + 36) & 7) + 3) >= v11 && v11 )
    {
      __asan_report_load4(&v2[1]._M_color + 1);
      return;
    }
LABEL_12:
    this->total_load[i] = *((int *)&v2[1]._M_color + 1) + v8;
    M_left = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(v2);
  }
};

// Line 218: range 0000000014E2D268-0000000014E2D27F
void __cdecl GLOBAL__sub_I_server_load_balance_mgr_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 218: range 0000000014E2AA80-0000000014E2AD27
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/utils/server_load_balance_mgr.cpp");
    if ( __priority != 0xFFFF )
    {
LABEL_3:
      __asan_after_dynamic_init();
      return;
    }
    std::ios_base::Init::Init(&std::__ioinit);
    __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    if ( !`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
    {
      `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
      if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) )
      {
        __asan_report_store8();
        goto LABEL_11;
      }
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                           + 9;
    }
    if ( `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero )
      goto LABEL_3;
    `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = 1;
    if ( !*(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                   + 0x7FFF8000) )
    {
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits
                                                                          + 9;
      goto LABEL_3;
    }
LABEL_11:
    __asan_report_store8();
    JUMPOUT(0x14E2AB5DLL);
  }
};
