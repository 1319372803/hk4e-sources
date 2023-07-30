// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/asio/impl/write.hpp

// Line 282: range 0000000014EC46EC-0000000014EC48E6
void __fastcall boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,std::vector<boost::asio::const_buffer>,__gnu_cxx::__normal_iterator<boost::asio::const_buffer const*,std::vector<boost::asio::const_buffer>>,boost::asio::detail::transfer_all_t,common::minet::AServerSession::asyncSendFrontString(void)::{lambda(boost::system::error_code const&,unsigned long)#1}>::~write_op(
        boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,std::vector<boost::asio::const_buffer>,__gnu_cxx::__normal_iterator<const boost::asio::const_buffer*,std::vector<boost::asio::const_buffer> >,boost::asio::detail::transfer_all_t,common::minet::AServerSession::asyncSendFrontString()::<lambda(const boost::system::error_code&,size_t)> > *const this)
{
  boost::asio::detail::completion_handler<common::minet::AServerSession::asyncSendString(std::string&&)::<lambda()> >::ptr *p_M_refcount; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *M_pi; // rdi
  std::_Vector_base<boost::asio::const_buffer>::pointer M_start; // rdi

  p_M_refcount = (boost::asio::detail::completion_handler<common::minet::AServerSession::asyncSendString(std::string&&)::<lambda()> >::ptr *)&this->handler_.__self_ptr._M_refcount;
  if ( *(_BYTE *)(((unsigned __int64)p_M_refcount >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_refcount);
LABEL_9:
    __asan_report_load8(p_M_refcount);
    boost::asio::detail::completion_handler<common::minet::AServerSession::asyncSendString(std::string &&)::{lambda(void)#1}>::ptr::reset(p_M_refcount);
    return;
  }
  M_pi = this->handler_.__self_ptr._M_refcount._M_pi;
  if ( M_pi )
    std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(M_pi);
  p_M_refcount = (boost::asio::detail::completion_handler<common::minet::AServerSession::asyncSendString(std::string&&)::<lambda()> >::ptr *)&this->buffers_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffers_ >> 3) + 0x7FFF8000) )
    goto LABEL_9;
  M_start = this->buffers_.buffers_._M_impl._M_start;
  if ( M_start )
    operator delete(M_start);
};

// Line 319: range 0000000014EC91D4-0000000014ECAB6C
void __fastcall boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,std::vector<boost::asio::const_buffer>,__gnu_cxx::__normal_iterator<boost::asio::const_buffer const*,std::vector<boost::asio::const_buffer>>,boost::asio::detail::transfer_all_t,common::minet::AServerSession::asyncSendFrontString(void)::{lambda(boost::system::error_code const&,unsigned long)#1}>::operator()(
        boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,std::vector<boost::asio::const_buffer>,__gnu_cxx::__normal_iterator<const boost::asio::const_buffer*,std::vector<boost::asio::const_buffer> >,boost::asio::detail::transfer_all_t,common::minet::AServerSession::asyncSendFrontString()::<lambda(const boost::system::error_code&,size_t)> > *const this,
        const boost::system::error_code *ec,
        std::size_t bytes_transferred,
        int start)
{
  unsigned __int64 v4; // rbx
  boost::system::error_code *vptr_error_category; // r13
  unsigned __int64 v7; // r12
  int *p_start; // rdi
  char v9; // al
  char v10; // al
  std::size_t v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  std::size_t v14; // rax
  _DWORD *v15; // r11
  __int64 v16; // rax
  std::_Vector_base<boost::asio::const_buffer>::pointer *v17; // rcx
  std::_Vector_base<boost::asio::const_buffer>::pointer v18; // r8
  std::size_t *v19; // rcx
  __int64 v20; // rax
  std::size_t *v21; // rcx
  std::size_t v22; // rsi
  unsigned __int64 v23; // rcx
  std::size_t v24; // r14
  const boost::system::error_category *v25; // rdi
  const boost::system::error_category **p_id; // rax
  char v27; // al
  char v28; // dl
  __int64 v29; // rax
  std::size_t v30; // rdx
  __int64 v31; // r9
  std::size_t v32; // rdx
  __int64 v33; // r9
  unsigned __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdx
  _BYTE *p_cat; // rdi
  char v38; // al
  char v39; // al
  char v40; // dl
  char v41; // al
  int v42; // ecx
  boost::system::error_code *v43; // rdi
  char v44; // al
  char v45; // al
  char v46; // al
  char v47; // al
  char v48; // al
  unsigned int v49; // ecx
  __int64 v50; // rsi
  char v51; // al
  boost::system::error_code *v52; // rdi
  char v53; // al
  char v54; // al
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v55; // rax
  std::size_t v56; // rdi
  __int64 (**v57)(void); // rax
  __int64 v58; // rax
  std::size_t v59; // rdi
  unsigned __int64 v60; // rdi
  __int64 (**v61)(void); // rax
  __int64 (**v62)(void); // rdi
  char val; // al
  unsigned __int64 v64; // rdi
  unsigned __int64 v65; // rdi
  unsigned __int64 v66; // rdx
  std::size_t v67; // rdi
  char v68; // al
  unsigned __int64 v69; // rax
  unsigned __int64 i; // rdx
  unsigned __int64 v71; // rdi
  unsigned __int64 v72; // rdx
  boost::wrapexcept<boost::asio::bad_executor> *exception; // rbx
  std::size_t v74; // rdi
  unsigned __int64 v75; // rdx
  boost::wrapexcept<boost::asio::bad_executor> *v76; // rbx
  __int64 v77; // rbx
  __int64 v78; // r13
  char v79; // al
  std::size_t v80; // rcx
  char v81; // dl
  int v82; // eax
  char v83; // cl
  const boost::system::detail::system_error_category *v84; // rdx
  __int64 v85; // rax
  unsigned __int64 v86; // rdi
  char v87; // al
  char v88; // cl
  __int64 *v89; // rdi
  struct _Unwind_Exception *v90; // rbx
  unsigned __int64 v91; // rdi
  __int64 v92; // rax
  const boost::system::error_code *v93; // r8
  __int64 v94; // rax
  unsigned __int64 v95; // r9
  std::size_t v96; // rax
  _DWORD *v97; // r11
  boost::system::error_code *v98; // rdx
  char v99; // al
  std::size_t *v100; // rdi
  const boost::system::error_category *v101; // rdx
  unsigned __int64 v102; // rcx
  const boost::system::error_category *v103; // r10
  std::size_t v104; // rdx
  unsigned __int64 v105; // rdi
  __int64 v106; // rax
  std::size_t v107; // [rsp+8h] [rbp-248h]
  unsigned __int64 v108; // [rsp+10h] [rbp-240h]
  int fd; // [rsp+18h] [rbp-238h]
  char is_continuation; // [rsp+1Fh] [rbp-231h]
  __int64 v111; // [rsp+20h] [rbp-230h]
  unsigned __int64 v112; // [rsp+28h] [rbp-228h]
  std::size_t v113; // [rsp+38h] [rbp-218h]
  _DWORD *v115; // [rsp+48h] [rbp-208h]
  __int64 v116[33]; // [rsp+50h] [rbp-200h] BYREF
  __int64 v117; // [rsp+158h] [rbp-F8h] BYREF
  char v118[240]; // [rsp+160h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)this;
  vptr_error_category = (boost::system::error_code *)ec;
  v7 = (unsigned __int64)v118;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v16 = __asan_stack_malloc_2(192LL);
    if ( v16 )
      v7 = v16;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 48 4 3 arg 64 8 2 ex 96 16 2 ex 128 24 1 p";
  *(_QWORD *)(v7 + 16) = boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,std::vector<boost::asio::const_buffer>,__gnu_cxx::__normal_iterator<boost::asio::const_buffer const*,std::vector<boost::asio::const_buffer>>,boost::asio::detail::transfer_all_t,common::minet::AServerSession::asyncSendFrontString(void)::{lambda(boost::system::error_code const&,unsigned long)#1}>::operator();
  v115 = (_DWORD *)(v7 >> 3);
  v115[536862720] = -235802127;
  v115[536862721] = -234556943;
  v115[536862722] = -218959360;
  v115[536862723] = -219021312;
  v115[536862724] = -218103808;
  v115[536862725] = -202116109;
  p_start = &this->start_;
  v9 = *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000);
  if ( v9 && v9 <= 3 )
  {
    __asan_report_store4(p_start);
    goto LABEL_14;
  }
  *(_DWORD *)(v4 + 64) = start;
  if ( start == 1 )
  {
    v10 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
    if ( !v10 || v10 > 3 )
    {
      if ( ec->val_ )
      {
        v11 = 0LL;
        goto LABEL_9;
      }
LABEL_15:
      v11 = 0x10000LL;
      goto LABEL_9;
    }
LABEL_14:
    __asan_report_load4(ec);
    goto LABEL_15;
  }
  v91 = v4 + 8;
  if ( *(_BYTE *)(((v4 + 40) >> 3) + 0x7FFF8000) )
  {
    v91 = v4 + 40;
    __asan_report_load8(v4 + 40);
    goto LABEL_271;
  }
  *(_QWORD *)(v4 + 40) += bytes_transferred;
  if ( *(_BYTE *)((v91 >> 3) + 0x7FFF8000) )
  {
LABEL_271:
    v92 = __asan_report_load8(v91);
    goto LABEL_272;
  }
  v92 = v4 + 16;
  if ( *(_BYTE *)(((v4 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_272:
    v94 = __asan_report_load8(v92);
    goto LABEL_273;
  }
  v93 = *(const boost::system::error_code **)(v4 + 16);
  v94 = v4 + 48;
  if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_273:
    __asan_report_load8(v94);
    goto LABEL_274;
  }
  v95 = 16LL * *(_QWORD *)(v4 + 48) + *(_QWORD *)(v4 + 8);
  v96 = bytes_transferred;
  v97 = (_DWORD *)(v7 >> 3);
  while ( 1 )
  {
    ec = (const boost::system::error_code *)v95;
    if ( v93 == (const boost::system::error_code *)v95 || !v96 )
      break;
    v98 = (boost::system::error_code *)(v91 + 48);
    if ( *(_BYTE *)(((v91 + 48) >> 3) + 0x7FFF8000) )
    {
LABEL_274:
      __asan_report_load8(v98);
LABEL_275:
      __asan_report_load16(v95);
      break;
    }
    v102 = *(_QWORD *)(v91 + 48);
    if ( *(_WORD *)((v95 >> 3) + 0x7FFF8000) )
      goto LABEL_275;
    v101 = *(const boost::system::error_category **)(v95 + 8);
    if ( v102 < (unsigned __int64)v101 )
    {
      v103 = *(const boost::system::error_category **)(v91 + 48);
      goto LABEL_293;
    }
LABEL_285:
    v103 = v101;
LABEL_293:
    v104 = (char *)v101 - (char *)v103;
    if ( v96 >= v104 )
    {
      v96 -= v104;
      *(_QWORD *)(v91 + 48) = 0LL;
      ++*(_QWORD *)(v91 + 40);
      v95 = (unsigned __int64)&ec[1];
    }
    else
    {
      *(_QWORD *)(v91 + 48) = v102 + v96;
      v96 = 0LL;
    }
  }
  v115 = v97;
  v99 = *(_BYTE *)(((unsigned __int64)vptr_error_category >> 3) + 0x7FFF8000);
  if ( v99 && v99 <= 3 )
  {
    v91 = (unsigned __int64)vptr_error_category;
    __asan_report_load4(vptr_error_category);
    goto LABEL_285;
  }
  if ( vptr_error_category->val_ || bytes_transferred )
  {
    v100 = (std::size_t *)(v4 + 40);
    if ( *(_BYTE *)(((v4 + 40) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v100);
    }
    else
    {
      v100 = (std::size_t *)(v4 + 32);
      if ( !*(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
      {
        if ( *(_QWORD *)(v4 + 40) >= *(_QWORD *)(v4 + 32) || vptr_error_category->val_ )
          goto LABEL_296;
        v11 = 0x10000LL;
LABEL_9:
        if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        {
          v14 = __asan_report_load8(v4);
          goto LABEL_17;
        }
        bytes_transferred = *(_QWORD *)v4;
        v12 = v4 + 8;
        v13 = 15LL;
        v14 = (std::size_t)v116;
        v15 = v115;
        while ( 1 )
        {
          if ( v13 < 0 )
            goto LABEL_23;
          if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          {
LABEL_17:
            v11 = v14;
            __asan_report_store8();
          }
          else
          {
            *(_QWORD *)v14 = 0LL;
            if ( *(_BYTE *)(((v14 + 8) >> 3) + 0x7FFF8000) )
            {
              v11 = v14 + 8;
              __asan_report_store8();
LABEL_23:
              v116[32] = 0LL;
              if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load8(v12);
              }
              else
              {
                v17 = (std::_Vector_base<boost::asio::const_buffer>::pointer *)(v12 + 8);
                if ( !*(_BYTE *)(((v12 + 8) >> 3) + 0x7FFF8000) )
                {
                  v18 = *(std::_Vector_base<boost::asio::const_buffer>::pointer *)(v12 + 8);
                  v19 = (std::size_t *)(v12 + 40);
                  if ( !*(_BYTE *)(((v12 + 40) >> 3) + 0x7FFF8000) )
                  {
                    v20 = 16LL * *(_QWORD *)(v12 + 40) + *(_QWORD *)(v4 + 8);
                    v21 = (std::size_t *)(v12 + 48);
                    if ( !*(_BYTE *)(((v12 + 48) >> 3) + 0x7FFF8000) )
                    {
                      v22 = *(_QWORD *)(v12 + 48);
                      while ( 2 )
                      {
                        v23 = v20;
                        if ( v18 != (std::_Vector_base<boost::asio::const_buffer>::pointer)v20 )
                        {
                          if ( v11 )
                          {
                            v29 = v116[32];
                            if ( v116[32] <= 0xFuLL )
                            {
                              if ( !*(_WORD *)((v23 >> 3) + 0x7FFF8000) )
                              {
                                v31 = *(_QWORD *)v23;
                                v30 = *(_QWORD *)(v23 + 8);
                                if ( v30 > v22 )
                                {
LABEL_58:
                                  v33 = v22 + v31;
                                  v34 = v30 - v22;
                                  if ( v11 <= v34 )
                                    v34 = v11;
                                  if ( *(_WORD *)(((unsigned __int64)&v116[2 * v29] >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store16(&v116[2 * v29]);
                                  }
                                  else
                                  {
                                    v35 = 2 * v29;
                                    v116[v35] = v33;
                                    v116[v35 + 1] = v34;
                                    v32 = (std::size_t)&v116[2 * v29 + 1];
                                    if ( !*(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
                                    {
                                      v36 = v116[2 * v29 + 1];
                                      v11 -= v36;
                                      if ( v36 )
                                        v116[32] = v29 + 1;
                                      goto LABEL_52;
                                    }
                                  }
                                  v11 = v32;
                                  __asan_report_load8(v32);
LABEL_52:
                                  v20 = v23 + 16;
                                  v22 = 0LL;
                                  continue;
                                }
LABEL_49:
                                v22 = v30;
                                goto LABEL_58;
                              }
LABEL_32:
                              __asan_report_load16(v23);
                            }
                          }
                        }
                        break;
                      }
                      v115 = v15;
                      if ( !*(_BYTE *)((bytes_transferred >> 3) + 0x7FFF8000) )
                      {
                        v111 = *(_QWORD *)bytes_transferred;
                        v112 = *(_QWORD *)bytes_transferred + 40LL;
                        v113 = bytes_transferred + 32;
                        v24 = bytes_transferred + 8;
                        if ( *(_DWORD *)(v4 + 64) )
                          is_continuation = boost::asio::asio_handler_is_continuation();
                        else
                          is_continuation = 1;
                        *(_QWORD *)(v7 + 136) = 0LL;
                        *(_QWORD *)(v7 + 144) = 0LL;
                        *(_QWORD *)(v7 + 128) = v4;
                        v25 = *(const boost::system::error_category **)((char *)&boost::asio::detail::keyword_tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::value_
                                                                      + __readfsqword(0));
                        if ( v25 )
                        {
                          p_id = (const boost::system::error_category **)&v25->id_;
                          if ( !*(_BYTE *)(((unsigned __int64)&v25->id_ >> 3) + 0x7FFF8000) )
                          {
                            v25 = (const boost::system::error_category *)v25->id_;
                            goto LABEL_39;
                          }
                          v25 = (const boost::system::error_category *)((char *)v25 + 8);
                          __asan_report_load8(p_id);
LABEL_66:
                          __asan_report_load8(v25);
LABEL_67:
                          __asan_report_load1(v25);
LABEL_68:
                          __asan_report_store1(v25);
LABEL_69:
                          operator delete(vptr_error_category);
LABEL_70:
                          vptr_error_category = (boost::system::error_code *)operator new(0x1B9uLL);
                          p_cat = &vptr_error_category[27].cat_;
                          v38 = *(_BYTE *)(((unsigned __int64)&vptr_error_category[27].cat_ >> 3) + 0x7FFF8000);
                          if ( v38 > (((unsigned __int8)vptr_error_category - 72) & 7) || !v38 )
                          {
                            *p_cat = 110;
                            goto LABEL_73;
                          }
                          __asan_report_store1(p_cat);
LABEL_150:
                          __asan_report_load1(p_cat);
                          goto LABEL_151;
                        }
LABEL_39:
                        if ( !v25 )
                          goto LABEL_70;
                        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
                          goto LABEL_66;
                        vptr_error_category = (boost::system::error_code *)v25->_vptr_error_category;
                        if ( !v25->_vptr_error_category )
                          goto LABEL_70;
                        v25->_vptr_error_category = 0LL;
                        v25 = (const boost::system::error_category *)vptr_error_category;
                        v27 = *(_BYTE *)(((unsigned __int64)vptr_error_category >> 3) + 0x7FFF8000);
                        if ( v27 <= ((unsigned __int8)vptr_error_category & 7) && v27 )
                          goto LABEL_67;
                        if ( LOBYTE(vptr_error_category->val_) <= 0x6Du )
                          goto LABEL_69;
                        v25 = (const boost::system::error_category *)&vptr_error_category[27].cat_;
                        v28 = *(_BYTE *)(((unsigned __int64)&vptr_error_category[27].cat_ >> 3) + 0x7FFF8000);
                        if ( v28 <= (((unsigned __int8)vptr_error_category - 72) & 7) && v28 )
                          goto LABEL_68;
                        LOBYTE(v25->_vptr_error_category) = vptr_error_category->val_;
LABEL_73:
                        *(_QWORD *)(v7 + 136) = vptr_error_category;
                        p_cat = (_BYTE *)(bytes_transferred + 12);
                        v39 = *(_BYTE *)(((bytes_transferred + 12) >> 3) + 0x7FFF8000);
                        if ( v39 <= (char)((bytes_transferred + 12) & 7) && v39 )
                          goto LABEL_150;
                        v40 = *(_BYTE *)(bytes_transferred + 12);
                        v41 = *(_BYTE *)((v24 >> 3) + 0x7FFF8000);
                        if ( v41 && v41 <= 3 )
                        {
LABEL_151:
                          __asan_report_load4(v24);
                        }
                        else
                        {
                          v42 = *(_DWORD *)(bytes_transferred + 8);
                          if ( !*(_BYTE *)(((unsigned __int64)vptr_error_category >> 3) + 0x7FFF8000) )
                          {
                            *(_QWORD *)&vptr_error_category->val_ = 0LL;
                            v43 = (boost::system::error_code *)&vptr_error_category->cat_;
                            if ( !*(_BYTE *)(((unsigned __int64)&vptr_error_category->cat_ >> 3) + 0x7FFF8000) )
                            {
                              vptr_error_category->cat_ = (const boost::system::error_category *)boost::asio::detail::reactive_socket_send_op<boost::asio::detail::prepared_buffers<boost::asio::const_buffer,64ul>,boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,std::vector<boost::asio::const_buffer>,__gnu_cxx::__normal_iterator<boost::asio::const_buffer const*,std::vector<boost::asio::const_buffer>>,boost::asio::detail::transfer_all_t,common::minet::AServerSession::asyncSendFrontString(void)::{lambda(boost::system::error_code const&,unsigned long)#1}>,boost::asio::detail::io_object_executor<boost::asio::executor>>::do_complete;
                              v43 = vptr_error_category + 1;
                              v44 = *(_BYTE *)(((unsigned __int64)&vptr_error_category[1] >> 3) + 0x7FFF8000);
                              if ( !v44 || v44 > 3 )
                              {
                                vptr_error_category[1].val_ = 0;
                                v43 = (boost::system::error_code *)((char *)vptr_error_category + 24);
                                v45 = *(_BYTE *)(((unsigned __int64)&vptr_error_category[1].cat_ >> 3) + 0x7FFF8000);
                                if ( !v45 || v45 > 3 )
                                {
                                  LODWORD(vptr_error_category[1].cat_) = 0;
                                  v43 = (boost::system::error_code *)((char *)vptr_error_category + 28);
                                  v46 = *(_BYTE *)((((unsigned __int64)&vptr_error_category[1].cat_ + 4) >> 3)
                                                 + 0x7FFF8000);
                                  if ( v46 > (((unsigned __int8)vptr_error_category + 28) & 7) || !v46 )
                                  {
                                    BYTE4(vptr_error_category[1].cat_) = 0;
                                    v43 = vptr_error_category + 2;
                                    if ( !*(_BYTE *)(((unsigned __int64)&vptr_error_category[2] >> 3) + 0x7FFF8000) )
                                    {
                                      *(_QWORD *)&vptr_error_category[2].val_ = &boost::system::detail::cat_holder<void>::system_category_instance;
                                      v43 = (boost::system::error_code *)((char *)vptr_error_category + 40);
                                      if ( !*(_BYTE *)(((unsigned __int64)&vptr_error_category[2].cat_ >> 3) + 0x7FFF8000) )
                                      {
                                        vptr_error_category[2].cat_ = 0LL;
                                        v43 = vptr_error_category + 3;
                                        if ( !*(_BYTE *)(((unsigned __int64)&vptr_error_category[3] >> 3) + 0x7FFF8000) )
                                        {
                                          *(_QWORD *)&vptr_error_category[3].val_ = boost::asio::detail::reactive_socket_send_op_base<boost::asio::detail::prepared_buffers<boost::asio::const_buffer,64ul>>::do_perform;
                                          v43 = (boost::system::error_code *)((char *)vptr_error_category + 56);
                                          v47 = *(_BYTE *)(((unsigned __int64)&vptr_error_category[3].cat_ >> 3)
                                                         + 0x7FFF8000);
                                          if ( !v47 || v47 > 3 )
                                          {
                                            LODWORD(vptr_error_category[3].cat_) = v42;
                                            v43 = (boost::system::error_code *)((char *)vptr_error_category + 60);
                                            v48 = *(_BYTE *)((((unsigned __int64)&vptr_error_category[3].cat_ + 4) >> 3)
                                                           + 0x7FFF8000);
                                            if ( v48 > (((unsigned __int8)vptr_error_category + 60) & 7) || !v48 )
                                            {
                                              BYTE4(vptr_error_category[3].cat_) = v40;
                                              v43 = vptr_error_category + 4;
                                              if ( (*(_BYTE *)(((unsigned __int64)(&vptr_error_category[20].failed_ + 3) >> 3)
                                                             + 0x7FFF8000) == 0
                                                 || *(_BYTE *)(((unsigned __int64)(&vptr_error_category[20].failed_ + 3) >> 3)
                                                             + 0x7FFF8000) > (((unsigned __int8)vptr_error_category + 71) & 7))
                                                && *(char *)(((unsigned __int64)&vptr_error_category[4] >> 3)
                                                           + 0x7FFF8000) >= 0 )
                                              {
                                                qmemcpy(&vptr_error_category[4], v116, 0x108uLL);
                                                v50 = (__int64)&v117;
                                                v49 = 0;
                                                v43 = (boost::system::error_code *)((char *)vptr_error_category + 328);
                                                v51 = *(_BYTE *)(((unsigned __int64)&vptr_error_category[20].cat_ >> 3)
                                                               + 0x7FFF8000);
                                                if ( !v51 || v51 > 3 )
                                                {
                                                  LODWORD(vptr_error_category[20].cat_) = 0;
                                                  if ( !*(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
                                                  {
                                                    v52 = vptr_error_category + 21;
                                                    if ( !*(_BYTE *)(((unsigned __int64)&vptr_error_category[21] >> 3)
                                                                   + 0x7FFF8000) )
                                                    {
                                                      *(_QWORD *)&vptr_error_category[21].val_ = *(_QWORD *)v4;
                                                      v52 = (boost::system::error_code *)(v4 + 8);
                                                      if ( !*(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
                                                      {
                                                        v52 = (boost::system::error_code *)((char *)vptr_error_category
                                                                                          + 344);
                                                        if ( !*(_BYTE *)(((unsigned __int64)&vptr_error_category[21].cat_ >> 3)
                                                                       + 0x7FFF8000) )
                                                        {
                                                          vptr_error_category[21].cat_ = *(const boost::system::error_category **)(v4 + 8);
                                                          v52 = (boost::system::error_code *)(v4 + 16);
                                                          if ( !*(_BYTE *)(((v4 + 16) >> 3) + 0x7FFF8000) )
                                                          {
                                                            v52 = vptr_error_category + 22;
                                                            if ( !*(_BYTE *)(((unsigned __int64)&vptr_error_category[22] >> 3)
                                                                           + 0x7FFF8000) )
                                                            {
                                                              *(_QWORD *)&vptr_error_category[22].val_ = *(_QWORD *)(v4 + 16);
                                                              v52 = (boost::system::error_code *)(v4 + 24);
                                                              if ( !*(_BYTE *)(((v4 + 24) >> 3) + 0x7FFF8000) )
                                                              {
                                                                v52 = (boost::system::error_code *)((char *)vptr_error_category
                                                                                                  + 360);
                                                                if ( !*(_BYTE *)(((unsigned __int64)&vptr_error_category[22].cat_ >> 3)
                                                                               + 0x7FFF8000) )
                                                                {
                                                                  vptr_error_category[22].cat_ = *(const boost::system::error_category **)(v4 + 24);
                                                                  *(_QWORD *)(v4 + 24) = 0LL;
                                                                  *(_QWORD *)(v4 + 16) = 0LL;
                                                                  *(_QWORD *)(v4 + 8) = 0LL;
                                                                  v52 = (boost::system::error_code *)(v4 + 32);
                                                                  if ( !*(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
                                                                  {
                                                                    v52 = vptr_error_category + 23;
                                                                    if ( !*(_BYTE *)(((unsigned __int64)&vptr_error_category[23] >> 3)
                                                                                   + 0x7FFF8000) )
                                                                    {
                                                                      *(_QWORD *)&vptr_error_category[23].val_ = *(_QWORD *)(v4 + 32);
                                                                      v52 = (boost::system::error_code *)(v4 + 40);
                                                                      if ( !*(_BYTE *)(((v4 + 40) >> 3) + 0x7FFF8000) )
                                                                      {
                                                                        v52 = (boost::system::error_code *)((char *)vptr_error_category + 376);
                                                                        if ( !*(_BYTE *)(((unsigned __int64)&vptr_error_category[23].cat_ >> 3)
                                                                                       + 0x7FFF8000) )
                                                                        {
                                                                          vptr_error_category[23].cat_ = *(const boost::system::error_category **)(v4 + 40);
                                                                          v52 = (boost::system::error_code *)(v4 + 48);
                                                                          if ( !*(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) )
                                                                          {
                                                                            v52 = vptr_error_category + 24;
                                                                            if ( !*(_BYTE *)(((unsigned __int64)&vptr_error_category[24] >> 3)
                                                                                           + 0x7FFF8000) )
                                                                            {
                                                                              *(_QWORD *)&vptr_error_category[24].val_ = *(_QWORD *)(v4 + 48);
                                                                              v52 = (boost::system::error_code *)(v4 + 56);
                                                                              if ( !*(_BYTE *)(((v4 + 56) >> 3)
                                                                                             + 0x7FFF8000) )
                                                                              {
                                                                                v52 = (boost::system::error_code *)((char *)vptr_error_category + 392);
                                                                                if ( !*(_BYTE *)(((unsigned __int64)&vptr_error_category[24].cat_ >> 3)
                                                                                               + 0x7FFF8000) )
                                                                                {
                                                                                  vptr_error_category[24].cat_ = *(const boost::system::error_category **)(v4 + 56);
                                                                                  v52 = (boost::system::error_code *)(v4 + 64);
                                                                                  v53 = *(_BYTE *)(((v4 + 64) >> 3)
                                                                                                 + 0x7FFF8000);
                                                                                  if ( !v53 || v53 > 3 )
                                                                                  {
                                                                                    v52 = vptr_error_category + 25;
                                                                                    v54 = *(_BYTE *)(((unsigned __int64)&vptr_error_category[25] >> 3) + 0x7FFF8000);
                                                                                    if ( !v54 || v54 > 3 )
                                                                                    {
                                                                                      vptr_error_category[25].val_ = *(_DWORD *)(v4 + 64);
                                                                                      v52 = (boost::system::error_code *)(v4 + 72);
                                                                                      if ( !*(_BYTE *)(((v4 + 72) >> 3) + 0x7FFF8000) )
                                                                                      {
                                                                                        v52 = (boost::system::error_code *)((char *)vptr_error_category + 408);
                                                                                        if ( !*(_BYTE *)(((unsigned __int64)&vptr_error_category[25].cat_ >> 3) + 0x7FFF8000) )
                                                                                        {
                                                                                          vptr_error_category[25].cat_ = *(const boost::system::error_category **)(v4 + 72);
                                                                                          v52 = vptr_error_category + 26;
                                                                                          if ( !*(_BYTE *)(((unsigned __int64)&vptr_error_category[26] >> 3) + 0x7FFF8000) )
                                                                                          {
                                                                                            *(_QWORD *)&vptr_error_category[26].val_ = 0LL;
                                                                                            v52 = (boost::system::error_code *)(v4 + 80);
                                                                                            if ( !*(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) )
                                                                                            {
                                                                                              v55 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 80);
                                                                                              *(_QWORD *)(v4 + 80) = 0LL;
                                                                                              *(_QWORD *)&vptr_error_category[26].val_ = v55;
                                                                                              *(_QWORD *)(v4 + 72) = 0LL;
                                                                                              v4 = (unsigned __int64)&vptr_error_category[26].cat_;
                                                                                              if ( !*(_BYTE *)((v113 >> 3) + 0x7FFF8000) )
                                                                                              {
                                                                                                v56 = *(_QWORD *)(bytes_transferred + 32);
                                                                                                if ( !v56 )
                                                                                                  goto LABEL_125;
                                                                                                if ( !*(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
                                                                                                {
                                                                                                  v57 = *(__int64 (***)(void))v56;
                                                                                                  if ( !*(_BYTE *)((*(_QWORD *)v56 >> 3) + 0x7FFF8000LL) )
                                                                                                  {
                                                                                                    v56 = (*v57)();
LABEL_125:
                                                                                                    v58 = (__int64)&vptr_error_category[26].cat_;
                                                                                                    if ( !*(_BYTE *)(((unsigned __int64)&vptr_error_category[26].cat_ >> 3) + 0x7FFF8000) )
                                                                                                    {
                                                                                                      vptr_error_category[26].cat_ = (const boost::system::error_category *)v56;
                                                                                                      v59 = bytes_transferred + 40;
                                                                                                      if ( *(char *)(((bytes_transferred + 40) >> 3) + 0x7FFF8000) >= 0 )
                                                                                                      {
                                                                                                        v59 = (std::size_t)&vptr_error_category[27];
                                                                                                        if ( *(char *)(((unsigned __int64)&vptr_error_category[27] >> 3) + 0x7FFF8000) >= 0 )
                                                                                                        {
                                                                                                          LOBYTE(vptr_error_category[27].val_) = *(_BYTE *)(bytes_transferred + 40);
                                                                                                          if ( !*(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
                                                                                                          {
                                                                                                            v60 = *(_QWORD *)v4;
                                                                                                            if ( !*(_QWORD *)v4 )
                                                                                                              goto LABEL_133;
                                                                                                            if ( !*(_BYTE *)((v60 >> 3) + 0x7FFF8000) )
                                                                                                            {
                                                                                                              v61 = *(__int64 (***)(void))v60;
                                                                                                              if ( !*(_BYTE *)((*(_QWORD *)v60 >> 3) + 0x7FFF8000LL) )
                                                                                                              {
                                                                                                                v60 = (*v61)();
LABEL_133:
                                                                                                                *(_QWORD *)(v7 + 96) = v60;
                                                                                                                v62 = (__int64 (**)(void))&vptr_error_category[27];
                                                                                                                if ( *(char *)(((unsigned __int64)&vptr_error_category[27] >> 3) + 0x7FFF8000) >= 0 )
                                                                                                                {
                                                                                                                  val = vptr_error_category[27].val_;
                                                                                                                  *(_BYTE *)(v7 + 104) = val;
                                                                                                                  if ( val )
                                                                                                                    goto LABEL_135;
LABEL_196:
                                                                                                                  v71 = *(_QWORD *)(v7 + 96);
                                                                                                                  if ( !v71 )
                                                                                                                  {
                                                                                                                    *(_QWORD *)(v7 + 64) = &`vtable for'boost::asio::bad_executor + 2;
                                                                                                                    exception = (boost::wrapexcept<boost::asio::bad_executor> *)__cxa_allocate_exception(0x38uLL);
                                                                                                                    if ( *(_BYTE *)(((unsigned __int64)&exception->gap30[7] >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((unsigned __int64)&exception->gap30[7] >> 3) + 0x7FFF8000) <= (((unsigned __int8)exception + 55) & 7) || *(char *)(((unsigned __int64)exception >> 3) + 0x7FFF8000) < 0 )
                                                                                                                      __asan_report_store_n(exception, 56LL);
                                                                                                                    boost::exception_detail::enable_both<boost::asio::bad_executor>(exception, (const boost::asio::bad_executor *)(v7 + 64));
                                                                                                                    __asan_handle_no_return(exception);
                                                                                                                    _cxa_throw(exception, (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::asio::bad_executor>, (void (__fastcall *)(void *))boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept);
                                                                                                                  }
                                                                                                                  if ( *(_BYTE *)((v71 >> 3) + 0x7FFF8000) )
                                                                                                                  {
                                                                                                                    __asan_report_load8(v71);
                                                                                                                  }
                                                                                                                  else
                                                                                                                  {
                                                                                                                    v72 = *(_QWORD *)v71 + 24LL;
                                                                                                                    if ( !*(_BYTE *)((v72 >> 3) + 0x7FFF8000) )
                                                                                                                    {
                                                                                                                      (*(void (**)(void))(*(_QWORD *)v71 + 24LL))();
LABEL_135:
                                                                                                                      v64 = v4 + 8;
                                                                                                                      if ( *(char *)(((v4 + 8) >> 3) + 0x7FFF8000) >= 0 )
                                                                                                                      {
                                                                                                                        if ( *(_BYTE *)(v4 + 8) )
                                                                                                                          goto LABEL_137;
LABEL_207:
                                                                                                                        if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
                                                                                                                        {
                                                                                                                          __asan_report_load8(v4);
                                                                                                                        }
                                                                                                                        else
                                                                                                                        {
                                                                                                                          v74 = *(_QWORD *)v4;
                                                                                                                          if ( *(_QWORD *)v4 )
                                                                                                                          {
                                                                                                                            if ( *(_BYTE *)((v74 >> 3) + 0x7FFF8000) )
                                                                                                                            {
                                                                                                                              __asan_report_load8(v74);
                                                                                                                            }
                                                                                                                            else
                                                                                                                            {
                                                                                                                              v75 = *(_QWORD *)v74 + 24LL;
                                                                                                                              if ( !*(_BYTE *)((v75 >> 3) + 0x7FFF8000) )
                                                                                                                              {
                                                                                                                                (*(void (**)(void))(*(_QWORD *)v74 + 24LL))();
LABEL_137:
                                                                                                                                v65 = *(_QWORD *)(v7 + 96);
                                                                                                                                if ( v65 )
                                                                                                                                {
                                                                                                                                  if ( !*(_BYTE *)((v65 >> 3) + 0x7FFF8000) )
                                                                                                                                  {
                                                                                                                                    v66 = *(_QWORD *)v65 + 8LL;
                                                                                                                                    if ( !*(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
                                                                                                                                    {
                                                                                                                                      (*(void (**)(void))(*(_QWORD *)v65 + 8LL))();
                                                                                                                                      goto LABEL_141;
                                                                                                                                    }
LABEL_220:
                                                                                                                                    v67 = v66;
                                                                                                                                    __asan_report_load8(v66);
LABEL_221:
                                                                                                                                    __asan_report_load1(v67);
LABEL_222:
                                                                                                                                    __asan_report_load16(v67);
                                                                                                                                    goto LABEL_223;
                                                                                                                                  }
LABEL_219:
                                                                                                                                  __asan_report_load8(v65);
                                                                                                                                  goto LABEL_220;
                                                                                                                                }
LABEL_141:
                                                                                                                                *(_QWORD *)(v7 + 144) = vptr_error_category;
                                                                                                                                v67 = bytes_transferred + 12;
                                                                                                                                v68 = *(_BYTE *)(((bytes_transferred + 12) >> 3) + 0x7FFF8000);
                                                                                                                                if ( v68 <= (char)((bytes_transferred + 12) & 7) && v68 )
                                                                                                                                  goto LABEL_221;
                                                                                                                                if ( (*(_BYTE *)(bytes_transferred + 12) & 0x10) != 0 )
                                                                                                                                {
                                                                                                                                  v69 = (unsigned __int64)v116;
                                                                                                                                  v50 = (__int64)&v116[2 * v116[32]];
                                                                                                                                  for ( i = 0LL;
                                                                                                                                        ;
                                                                                                                                        ++i )
                                                                                                                                  {
                                                                                                                                    LOBYTE(v49) = i > 0x3F || v50 == v69;
                                                                                                                                    if ( (_BYTE)v49 )
                                                                                                                                    {
                                                                                                                                      v77 = v49;
                                                                                                                                      goto LABEL_224;
                                                                                                                                    }
                                                                                                                                    v67 = v69;
                                                                                                                                    if ( *(_WORD *)((v69 >> 3) + 0x7FFF8000) )
                                                                                                                                      goto LABEL_222;
                                                                                                                                    if ( *(_QWORD *)(v69 + 8) )
                                                                                                                                      break;
                                                                                                                                    v69 += 16LL;
                                                                                                                                  }
                                                                                                                                  v77 = v49;
                                                                                                                                }
                                                                                                                                else
                                                                                                                                {
LABEL_223:
                                                                                                                                  v77 = 0LL;
                                                                                                                                }
LABEL_224:
                                                                                                                                v78 = *(_QWORD *)(v7 + 144);
                                                                                                                                if ( (_BYTE)v77 )
                                                                                                                                  goto LABEL_236;
                                                                                                                                if ( (*(_BYTE *)(bytes_transferred + 12) & 3) != 0 )
                                                                                                                                  goto LABEL_253;
                                                                                                                                v108 = v78 + 24;
                                                                                                                                v107 = bytes_transferred + 12;
                                                                                                                                v79 = *(_BYTE *)((v24 >> 3) + 0x7FFF8000);
                                                                                                                                if ( v79 && v79 <= 3 )
                                                                                                                                {
                                                                                                                                  __asan_report_load4(v24);
                                                                                                                                }
                                                                                                                                else
                                                                                                                                {
                                                                                                                                  fd = *(_DWORD *)(bytes_transferred + 8);
                                                                                                                                  if ( fd != -1 )
                                                                                                                                  {
                                                                                                                                    v80 = (std::size_t)__errno_location();
                                                                                                                                    v113 = v80;
                                                                                                                                    v81 = *(_BYTE *)((v80 >> 3) + 0x7FFF8000);
                                                                                                                                    if ( (char)((v80 & 7) + 3) < v81 || !v81 )
                                                                                                                                    {
                                                                                                                                      *(_DWORD *)v80 = 0;
                                                                                                                                      *(_DWORD *)(v7 + 48) = 1;
                                                                                                                                      v82 = ioctl(fd, 0x5421uLL, v7 + 48);
                                                                                                                                      v83 = *(_BYTE *)((v113 >> 3) + 0x7FFF8000);
                                                                                                                                      v50 = v113 & 7;
                                                                                                                                      if ( (char)((v113 & 7) + 3) < v83 || !v83 )
                                                                                                                                      {
                                                                                                                                        if ( !*(_WORD *)((v108 >> 3) + 0x7FFF8000) )
                                                                                                                                        {
                                                                                                                                          *(_QWORD *)(v78 + 24) = ((unsigned __int64)(*(_DWORD *)v113 != 0) << 32) | *(unsigned int *)v113;
                                                                                                                                          v84 = &boost::system::detail::cat_holder<void>::system_category_instance;
                                                                                                                                          v50 = v78 + 24;
                                                                                                                                          *(_QWORD *)(v78 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
                                                                                                                                          if ( v82 < 0 )
                                                                                                                                            goto LABEL_235;
LABEL_249:
                                                                                                                                          *(_QWORD *)(v78 + 24) = 0LL;
                                                                                                                                          *(_QWORD *)(v50 + 8) = v84;
                                                                                                                                          v87 = *(_BYTE *)((v107 >> 3) + 0x7FFF8000);
                                                                                                                                          if ( v87 <= (char)(v107 & 7) && v87 )
                                                                                                                                          {
                                                                                                                                            __asan_report_load1(v107);
                                                                                                                                          }
                                                                                                                                          else
                                                                                                                                          {
                                                                                                                                            *(_BYTE *)v107 |= 2u;
                                                                                                                                            v77 = 1LL;
LABEL_235:
                                                                                                                                            if ( !(_BYTE)v77 )
                                                                                                                                            {
LABEL_236:
                                                                                                                                              if ( *(_BYTE *)((v112 >> 3) + 0x7FFF8000) )
                                                                                                                                              {
                                                                                                                                                v86 = v112;
                                                                                                                                                __asan_report_load8(v112);
                                                                                                                                              }
                                                                                                                                              else
                                                                                                                                              {
                                                                                                                                                v85 = *(_QWORD *)(v111 + 40);
                                                                                                                                                v86 = v85 + 40;
                                                                                                                                                if ( !*(_BYTE *)(((unsigned __int64)(v85 + 40) >> 3) + 0x7FFF8000) )
                                                                                                                                                {
                                                                                                                                                  boost::asio::detail::scheduler::post_immediate_completion(*(boost::asio::detail::scheduler *const *)(v85 + 40), (boost::asio::detail::scheduler::operation *)v78, is_continuation);
                                                                                                                                                  goto LABEL_239;
                                                                                                                                                }
                                                                                                                                              }
                                                                                                                                              v89 = (__int64 *)__asan_report_load8(v86);
                                                                                                                                              __asan_report_load8(v89);
                                                                                                                                              __asan_report_load8(v89);
                                                                                                                                              if ( MEMORY[0x7FFF8037] < 0 )
                                                                                                                                              {
                                                                                                                                                __asan_report_load1(v77 + 440);
                                                                                                                                              }
                                                                                                                                              else if ( MEMORY[0x7FFF8000] >= 0 )
                                                                                                                                              {
                                                                                                                                                *(_BYTE *)v77 = *(_BYTE *)(v77 + 440);
                                                                                                                                                *v89 = v77;
                                                                                                                                                goto LABEL_299;
                                                                                                                                              }
                                                                                                                                              v90 = (struct _Unwind_Exception *)__asan_report_store1(v77);
                                                                                                                                              boost::asio::detail::reactive_socket_send_op<boost::asio::detail::prepared_buffers<boost::asio::const_buffer,64ul>,boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,std::vector<boost::asio::const_buffer>,__gnu_cxx::__normal_iterator<boost::asio::const_buffer const*,std::vector<boost::asio::const_buffer>>,boost::asio::detail::transfer_all_t,common::minet::AServerSession::asyncSendFrontString(void)::{lambda(boost::system::error_code const&,unsigned long)#1}>,boost::asio::detail::io_object_executor<boost::asio::executor>>::ptr::reset((boost::asio::detail::reactive_socket_send_op<boost::asio::detail::prepared_buffers<boost::asio::const_buffer,64>,boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::executor>,std::vector<boost::asio::const_buffer>,__gnu_cxx::__normal_iterator<const boost::asio::const_buffer*,std::vector<boost::asio::const_buffer> >,boost::asio::detail::transfer_all_t,common::minet::AServerSession::asyncSendFrontString()::<lambda(const boost::system::error_code&,size_t)> >,boost::asio::detail::io_object_executor<boost::asio::executor> >::ptr *const)(v7 + 128));
                                                                                                                                              __asan_handle_no_return(v7 + 128);
                                                                                                                                              _Unwind_Resume(v90);
                                                                                                                                            }
                                                                                                                                          }
LABEL_253:
                                                                                                                                          if ( *(_BYTE *)((v112 >> 3) + 0x7FFF8000) )
                                                                                                                                          {
                                                                                                                                            __asan_report_load8(v112);
                                                                                                                                          }
                                                                                                                                          else
                                                                                                                                          {
                                                                                                                                            v88 = *(_BYTE *)((v24 >> 3) + 0x7FFF8000);
                                                                                                                                            if ( !v88 || v88 > 3 )
                                                                                                                                            {
                                                                                                                                              boost::asio::detail::epoll_reactor::start_op(*(boost::asio::detail::epoll_reactor *const *)(v111 + 40), 1, *(_DWORD *)(bytes_transferred + 8), (boost::asio::detail::epoll_reactor::per_descriptor_data *)(bytes_transferred + 16), (boost::asio::detail::reactor_op *)v78, is_continuation, 1);
LABEL_239:
                                                                                                                                              *(_QWORD *)(v7 + 144) = 0LL;
                                                                                                                                              *(_QWORD *)(v7 + 136) = 0LL;
                                                                                                                                              goto LABEL_299;
                                                                                                                                            }
                                                                                                                                          }
                                                                                                                                          __asan_report_load4(v24);
                                                                                                                                          goto LABEL_239;
                                                                                                                                        }
LABEL_248:
                                                                                                                                        __asan_report_store16(v108);
                                                                                                                                        goto LABEL_249;
                                                                                                                                      }
LABEL_247:
                                                                                                                                      __asan_report_load4(v113);
                                                                                                                                      goto LABEL_248;
                                                                                                                                    }
LABEL_246:
                                                                                                                                    __asan_report_store4(v80);
                                                                                                                                    goto LABEL_247;
                                                                                                                                  }
                                                                                                                                }
                                                                                                                                if ( !*(_WORD *)((v108 >> 3) + 0x7FFF8000) )
                                                                                                                                {
                                                                                                                                  *(_QWORD *)(v78 + 24) = 0x100000009LL;
                                                                                                                                  *(_QWORD *)(v78 + 32) = &boost::system::detail::cat_holder<void>::system_category_instance;
                                                                                                                                  goto LABEL_235;
                                                                                                                                }
                                                                                                                                __asan_report_store16(v108);
                                                                                                                                goto LABEL_246;
                                                                                                                              }
                                                                                                                            }
                                                                                                                            v65 = v75;
                                                                                                                            __asan_report_load8(v75);
                                                                                                                            goto LABEL_219;
                                                                                                                          }
                                                                                                                        }
                                                                                                                        *(_QWORD *)(v7 + 64) = &`vtable for'boost::asio::bad_executor + 2;
                                                                                                                        v76 = (boost::wrapexcept<boost::asio::bad_executor> *)__cxa_allocate_exception(0x38uLL);
                                                                                                                        if ( *(_BYTE *)(((unsigned __int64)&v76->gap30[7] >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((unsigned __int64)&v76->gap30[7] >> 3) + 0x7FFF8000) <= (((unsigned __int8)v76 + 55) & 7) || *(char *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000) < 0 )
                                                                                                                          __asan_report_store_n(v76, 56LL);
                                                                                                                        boost::exception_detail::enable_both<boost::asio::bad_executor>(v76, (const boost::asio::bad_executor *)(v7 + 64));
                                                                                                                        __asan_handle_no_return(v76);
                                                                                                                        _cxa_throw(v76, (struct type_info *)&`typeinfo for'boost::wrapexcept<boost::asio::bad_executor>, (void (__fastcall *)(void *))boost::wrapexcept<boost::asio::bad_executor>::~wrapexcept);
                                                                                                                      }
LABEL_206:
                                                                                                                      __asan_report_load1(v64);
                                                                                                                      goto LABEL_207;
                                                                                                                    }
                                                                                                                  }
                                                                                                                  v64 = v72;
                                                                                                                  __asan_report_load8(v72);
                                                                                                                  goto LABEL_206;
                                                                                                                }
LABEL_195:
                                                                                                                __asan_report_load1(v62);
                                                                                                                goto LABEL_196;
                                                                                                              }
LABEL_194:
                                                                                                              v62 = v61;
                                                                                                              __asan_report_load8(v61);
                                                                                                              goto LABEL_195;
                                                                                                            }
LABEL_193:
                                                                                                            v61 = (__int64 (**)(void))__asan_report_load8(v60);
                                                                                                            goto LABEL_194;
                                                                                                          }
LABEL_192:
                                                                                                          v60 = v4;
                                                                                                          __asan_report_load8(v4);
                                                                                                          goto LABEL_193;
                                                                                                        }
LABEL_191:
                                                                                                        __asan_report_store1(v59);
                                                                                                        goto LABEL_192;
                                                                                                      }
LABEL_190:
                                                                                                      __asan_report_load1(v59);
                                                                                                      goto LABEL_191;
                                                                                                    }
LABEL_189:
                                                                                                    v59 = v58;
                                                                                                    __asan_report_store8();
                                                                                                    goto LABEL_190;
                                                                                                  }
LABEL_188:
                                                                                                  v58 = __asan_report_load8(v57);
                                                                                                  goto LABEL_189;
                                                                                                }
LABEL_187:
                                                                                                v57 = (__int64 (**)(void))__asan_report_load8(v56);
                                                                                                goto LABEL_188;
                                                                                              }
LABEL_186:
                                                                                              v56 = bytes_transferred + 32;
                                                                                              __asan_report_load8(v113);
                                                                                              goto LABEL_187;
                                                                                            }
LABEL_185:
                                                                                            __asan_report_load8(v52);
                                                                                            goto LABEL_186;
                                                                                          }
LABEL_184:
                                                                                          __asan_report_store8();
                                                                                          goto LABEL_185;
                                                                                        }
LABEL_183:
                                                                                        __asan_report_store8();
                                                                                        goto LABEL_184;
                                                                                      }
LABEL_182:
                                                                                      __asan_report_load8(v52);
                                                                                      goto LABEL_183;
                                                                                    }
LABEL_181:
                                                                                    __asan_report_store4(v52);
                                                                                    goto LABEL_182;
                                                                                  }
LABEL_180:
                                                                                  __asan_report_load4(v52);
                                                                                  goto LABEL_181;
                                                                                }
LABEL_179:
                                                                                __asan_report_store8();
                                                                                goto LABEL_180;
                                                                              }
LABEL_178:
                                                                              __asan_report_load8(v52);
                                                                              goto LABEL_179;
                                                                            }
LABEL_177:
                                                                            __asan_report_store8();
                                                                            goto LABEL_178;
                                                                          }
LABEL_176:
                                                                          __asan_report_load8(v52);
                                                                          goto LABEL_177;
                                                                        }
LABEL_175:
                                                                        __asan_report_store8();
                                                                        goto LABEL_176;
                                                                      }
LABEL_174:
                                                                      __asan_report_load8(v52);
                                                                      goto LABEL_175;
                                                                    }
LABEL_173:
                                                                    __asan_report_store8();
                                                                    goto LABEL_174;
                                                                  }
LABEL_172:
                                                                  __asan_report_load8(v52);
                                                                  goto LABEL_173;
                                                                }
LABEL_171:
                                                                __asan_report_store8();
                                                                goto LABEL_172;
                                                              }
LABEL_170:
                                                              __asan_report_load8(v52);
                                                              goto LABEL_171;
                                                            }
LABEL_169:
                                                            __asan_report_store8();
                                                            goto LABEL_170;
                                                          }
LABEL_168:
                                                          __asan_report_load8(v52);
                                                          goto LABEL_169;
                                                        }
LABEL_167:
                                                        __asan_report_store8();
                                                        goto LABEL_168;
                                                      }
LABEL_166:
                                                      __asan_report_load8(v52);
                                                      goto LABEL_167;
                                                    }
LABEL_165:
                                                    __asan_report_store8();
                                                    goto LABEL_166;
                                                  }
LABEL_164:
                                                  v52 = (boost::system::error_code *)v4;
                                                  __asan_report_load8(v4);
                                                  goto LABEL_165;
                                                }
LABEL_163:
                                                __asan_report_store4(v43);
                                                goto LABEL_164;
                                              }
LABEL_162:
                                              v50 = 264LL;
                                              __asan_report_store_n(v43, 264LL);
                                              goto LABEL_163;
                                            }
LABEL_161:
                                            __asan_report_store1(v43);
                                            goto LABEL_162;
                                          }
LABEL_160:
                                          __asan_report_store4(v43);
                                          goto LABEL_161;
                                        }
LABEL_159:
                                        __asan_report_store8();
                                        goto LABEL_160;
                                      }
LABEL_158:
                                      __asan_report_store8();
                                      goto LABEL_159;
                                    }
LABEL_157:
                                    __asan_report_store8();
                                    goto LABEL_158;
                                  }
LABEL_156:
                                  __asan_report_store1(v43);
                                  goto LABEL_157;
                                }
LABEL_155:
                                __asan_report_store4(v43);
                                goto LABEL_156;
                              }
LABEL_154:
                              __asan_report_store4(v43);
                              goto LABEL_155;
                            }
LABEL_153:
                            __asan_report_store8();
                            goto LABEL_154;
                          }
                        }
                        v43 = vptr_error_category;
                        __asan_report_store8();
                        goto LABEL_153;
                      }
                      v11 = bytes_transferred;
                      v29 = __asan_report_load8(bytes_transferred);
                      goto LABEL_49;
                    }
LABEL_31:
                    __asan_report_load8(v21);
                    goto LABEL_32;
                  }
LABEL_30:
                  __asan_report_load8(v19);
                  goto LABEL_31;
                }
              }
              __asan_report_load8(v17);
              goto LABEL_30;
            }
          }
          *(_QWORD *)(v14 + 8) = 0LL;
          v14 += 16LL;
          --v13;
        }
      }
    }
    v106 = __asan_report_load8(v100);
    goto LABEL_303;
  }
LABEL_296:
  v105 = v4 + 72;
  v106 = v4 + 40;
  if ( *(_BYTE *)(((v4 + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_303:
    v105 = v106;
    __asan_report_load8(v106);
    goto LABEL_304;
  }
  if ( *(_BYTE *)((v105 >> 3) + 0x7FFF8000) )
  {
LABEL_304:
    __asan_report_load8(v105);
    goto LABEL_305;
  }
  common::minet::AServerSession::handleAsyncSend(
    *(common::minet::AServerSession *const *)(v4 + 72),
    vptr_error_category,
    *(_QWORD *)(v4 + 40));
LABEL_299:
  if ( v118 == (char *)v7 )
  {
    *((_QWORD *)v115 + 268431360) = 0LL;
    *((_QWORD *)v115 + 268431361) = 0LL;
    *((_QWORD *)v115 + 268431362) = 0LL;
    return;
  }
LABEL_305:
  *(_QWORD *)v7 = 1172321806LL;
  *((_QWORD *)v115 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
  *((_QWORD *)v115 + 268431361) = 0xF5F5F5F5F5F5F5F5LL;
  *((_QWORD *)v115 + 268431362) = 0xF5F5F5F5F5F5F5F5LL;
};

// Line 319: range 0000000019C11DA2-0000000019C12C13
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>>>::operator()(
        boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > > > *const this,
        const boost::system::error_code *ec,
        std::size_t bytes_transferred,
        int start)
{
  char v4; // al
  std::size_t *p_total_consumed; // rax
  std::size_t v6; // rcx
  char v7; // al
  std::size_t *p_size; // rdx
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > > *p_handler; // rdi
  const boost::system::error_category *cat; // rdx OVERLAPPED
  __int64 v11; // rsi OVERLAPPED
  char v12; // al
  unsigned __int64 v13; // rcx
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *stream; // r8
  std::size_t *v15; // rax
  std::size_t total_consumed; // rdx
  std::size_t *v17; // rax
  std::size_t size; // rax
  std::size_t v19; // rax
  boost::asio::const_buffers_1 v20; // [rsp+0h] [rbp-18h] BYREF

  v4 = *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
  {
    this = (boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > > > *const)((char *)this + 32);
    __asan_report_store4(this);
  }
  else
  {
    this->start_ = start;
    if ( start != 1 )
    {
      p_total_consumed = &this->buffers_.total_consumed_;
      if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.total_consumed_ >> 3) + 0x7FFF8000) )
      {
LABEL_35:
        __asan_report_load8(p_total_consumed);
LABEL_36:
        __asan_report_load4(ec);
        goto LABEL_37;
      }
      v6 = this->buffers_.total_consumed_ + bytes_transferred;
      this->buffers_.total_consumed_ = v6;
      v7 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
      if ( v7 && v7 <= 3 )
        goto LABEL_36;
      if ( !ec->val_ && !bytes_transferred )
      {
LABEL_12:
        p_handler = &this->handler_;
        if ( !*(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
        {
          cat = ec->cat_;
          v11 = *(_QWORD *)&ec->val_;
          boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>>::operator()(
            p_handler,
            *(boost::system::error_code *)(&cat - 1),
            v6,
            0);
          return;
        }
LABEL_38:
        __asan_report_load16(ec);
        JUMPOUT(0x19C11F91LL);
      }
      p_size = &this->buffers_.buffer_.size_;
      if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.buffer_.size_ >> 3) + 0x7FFF8000) )
      {
LABEL_37:
        __asan_report_load8(p_size);
        goto LABEL_38;
      }
      if ( v6 >= this->buffers_.buffer_.size_ || ec->val_ )
        goto LABEL_12;
      v13 = 0x10000LL;
      goto LABEL_19;
    }
  }
  v12 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
  {
    this = (boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::basic_flat_buffer<std::allocator<char> >,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int> > > > > *const)ec;
    __asan_report_load4(ec);
  }
  else if ( ec->val_ )
  {
    v13 = 0LL;
    goto LABEL_19;
  }
  v13 = 0x10000LL;
LABEL_19:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v15 = (std::size_t *)__asan_report_load8(this);
    goto LABEL_32;
  }
  stream = this->stream_;
  v15 = &this->buffers_.total_consumed_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.total_consumed_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    v17 = (std::size_t *)__asan_report_load8(v15);
    goto LABEL_33;
  }
  total_consumed = this->buffers_.total_consumed_;
  v17 = &this->buffers_.buffer_.size_;
  ec = (const boost::system::error_code *)((unsigned __int64)&this->buffers_.buffer_.size_ >> 3);
  if ( LOBYTE(ec[134215680].val_) )
  {
LABEL_33:
    __asan_report_load8(v17);
LABEL_34:
    p_total_consumed = (std::size_t *)__asan_report_load8(ec);
    goto LABEL_35;
  }
  size = this->buffers_.buffer_.size_;
  if ( size <= total_consumed )
    total_consumed = this->buffers_.buffer_.size_;
  ec = (const boost::system::error_code *)&this->buffers_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffers_ >> 3) + 0x7FFF8000) )
    goto LABEL_34;
  v19 = size - total_consumed;
  if ( v13 <= v19 )
    v19 = v13;
  v20.data_ = (char *)this->buffers_.buffer_.data_ + total_consumed;
  v20.size_ = v19;
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_write_some<boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::read_op<boost::asio::mutable_buffer>,boost::beast::detail::dynamic_read_ops::read_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,boost::beast::http::detail::read_all_condition<false>,boost::beast::http::detail::read_msg_op<boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::basic_flat_buffer<std::allocator<char>>,false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,std::allocator<char>,boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>>>>>>(
    stream,
    &v20,
    this);
};

// Line 319: range 0000000019C88362-0000000019C8A266
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>::operator()(
        boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const this,
        const boost::system::error_code *ec,
        std::size_t bytes_transferred,
        int start)
{
  char v4; // al
  std::size_t *p_total_consumed; // rax
  std::size_t v6; // rcx
  char v7; // al
  std::size_t *p_size; // rdx
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *p_handler; // rdi
  const boost::system::error_category *cat; // rdx OVERLAPPED
  __int64 v11; // rsi OVERLAPPED
  char v12; // al
  unsigned __int64 v13; // rcx
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *stream; // r8
  std::size_t *v15; // rax
  std::size_t total_consumed; // rdx
  std::size_t *v17; // rax
  std::size_t size; // rax
  std::size_t v19; // rax
  boost::asio::const_buffers_1 v20; // [rsp+0h] [rbp-18h] BYREF

  v4 = *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
  {
    this = (boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const)((char *)this + 32);
    __asan_report_store4(this);
  }
  else
  {
    this->start_ = start;
    if ( start != 1 )
    {
      p_total_consumed = &this->buffers_.total_consumed_;
      if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.total_consumed_ >> 3) + 0x7FFF8000) )
      {
LABEL_35:
        __asan_report_load8(p_total_consumed);
LABEL_36:
        __asan_report_load4(ec);
        goto LABEL_37;
      }
      v6 = this->buffers_.total_consumed_ + bytes_transferred;
      this->buffers_.total_consumed_ = v6;
      v7 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
      if ( v7 && v7 <= 3 )
        goto LABEL_36;
      if ( !ec->val_ && !bytes_transferred )
      {
LABEL_12:
        p_handler = &this->handler_;
        if ( !*(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
        {
          cat = ec->cat_;
          v11 = *(_QWORD *)&ec->val_;
          boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator()(
            p_handler,
            *(boost::system::error_code *)(&cat - 1),
            v6,
            0);
          return;
        }
LABEL_38:
        __asan_report_load16(ec);
        JUMPOUT(0x19C88551LL);
      }
      p_size = &this->buffers_.buffer_.size_;
      if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.buffer_.size_ >> 3) + 0x7FFF8000) )
      {
LABEL_37:
        __asan_report_load8(p_size);
        goto LABEL_38;
      }
      if ( v6 >= this->buffers_.buffer_.size_ || ec->val_ )
        goto LABEL_12;
      v13 = 0x10000LL;
      goto LABEL_19;
    }
  }
  v12 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
  {
    this = (boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const)ec;
    __asan_report_load4(ec);
  }
  else if ( ec->val_ )
  {
    v13 = 0LL;
    goto LABEL_19;
  }
  v13 = 0x10000LL;
LABEL_19:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v15 = (std::size_t *)__asan_report_load8(this);
    goto LABEL_32;
  }
  stream = this->stream_;
  v15 = &this->buffers_.total_consumed_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.total_consumed_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    v17 = (std::size_t *)__asan_report_load8(v15);
    goto LABEL_33;
  }
  total_consumed = this->buffers_.total_consumed_;
  v17 = &this->buffers_.buffer_.size_;
  ec = (const boost::system::error_code *)((unsigned __int64)&this->buffers_.buffer_.size_ >> 3);
  if ( LOBYTE(ec[134215680].val_) )
  {
LABEL_33:
    __asan_report_load8(v17);
LABEL_34:
    p_total_consumed = (std::size_t *)__asan_report_load8(ec);
    goto LABEL_35;
  }
  size = this->buffers_.buffer_.size_;
  if ( size <= total_consumed )
    total_consumed = this->buffers_.buffer_.size_;
  ec = (const boost::system::error_code *)&this->buffers_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffers_ >> 3) + 0x7FFF8000) )
    goto LABEL_34;
  v19 = size - total_consumed;
  if ( v13 <= v19 )
    v19 = v13;
  v20.data_ = (char *)this->buffers_.buffer_.data_ + total_consumed;
  v20.size_ = v19;
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_write_some<boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::asio::mutable_buffer>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>>(
    stream,
    &v20,
    this);
};

// Line 319: range 0000000019C9AEAC-0000000019C9CD79
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>::operator()(
        boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const this,
        const boost::system::error_code *ec,
        std::size_t bytes_transferred,
        int start)
{
  char v4; // al
  std::size_t *p_total_consumed; // rax
  std::size_t v6; // rcx
  char v7; // al
  std::size_t *p_size; // rdx
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *p_handler; // rdi
  const boost::system::error_category *cat; // rdx OVERLAPPED
  __int64 v11; // rsi OVERLAPPED
  char v12; // al
  unsigned __int64 v13; // rcx
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *stream; // r8
  std::size_t *v15; // rax
  std::size_t total_consumed; // rdx
  std::size_t *v17; // rax
  std::size_t size; // rax
  std::size_t v19; // rax
  boost::asio::const_buffers_1 v20; // [rsp+0h] [rbp-18h] BYREF

  v4 = *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
  {
    this = (boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const)((char *)this + 32);
    __asan_report_store4(this);
  }
  else
  {
    this->start_ = start;
    if ( start != 1 )
    {
      p_total_consumed = &this->buffers_.total_consumed_;
      if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.total_consumed_ >> 3) + 0x7FFF8000) )
      {
LABEL_35:
        __asan_report_load8(p_total_consumed);
LABEL_36:
        __asan_report_load4(ec);
        goto LABEL_37;
      }
      v6 = this->buffers_.total_consumed_ + bytes_transferred;
      this->buffers_.total_consumed_ = v6;
      v7 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
      if ( v7 && v7 <= 3 )
        goto LABEL_36;
      if ( !ec->val_ && !bytes_transferred )
      {
LABEL_12:
        p_handler = &this->handler_;
        if ( !*(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
        {
          cat = ec->cat_;
          v11 = *(_QWORD *)&ec->val_;
          boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator()(
            p_handler,
            *(boost::system::error_code *)(&cat - 1),
            v6,
            0);
          return;
        }
LABEL_38:
        __asan_report_load16(ec);
        JUMPOUT(0x19C9B09BLL);
      }
      p_size = &this->buffers_.buffer_.size_;
      if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.buffer_.size_ >> 3) + 0x7FFF8000) )
      {
LABEL_37:
        __asan_report_load8(p_size);
        goto LABEL_38;
      }
      if ( v6 >= this->buffers_.buffer_.size_ || ec->val_ )
        goto LABEL_12;
      v13 = 0x10000LL;
      goto LABEL_19;
    }
  }
  v12 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
  {
    this = (boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const)ec;
    __asan_report_load4(ec);
  }
  else if ( ec->val_ )
  {
    v13 = 0LL;
    goto LABEL_19;
  }
  v13 = 0x10000LL;
LABEL_19:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v15 = (std::size_t *)__asan_report_load8(this);
    goto LABEL_32;
  }
  stream = this->stream_;
  v15 = &this->buffers_.total_consumed_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.total_consumed_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    v17 = (std::size_t *)__asan_report_load8(v15);
    goto LABEL_33;
  }
  total_consumed = this->buffers_.total_consumed_;
  v17 = &this->buffers_.buffer_.size_;
  ec = (const boost::system::error_code *)((unsigned __int64)&this->buffers_.buffer_.size_ >> 3);
  if ( LOBYTE(ec[134215680].val_) )
  {
LABEL_33:
    __asan_report_load8(v17);
LABEL_34:
    p_total_consumed = (std::size_t *)__asan_report_load8(ec);
    goto LABEL_35;
  }
  size = this->buffers_.buffer_.size_;
  if ( size <= total_consumed )
    total_consumed = this->buffers_.buffer_.size_;
  ec = (const boost::system::error_code *)&this->buffers_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffers_ >> 3) + 0x7FFF8000) )
    goto LABEL_34;
  v19 = size - total_consumed;
  if ( v13 <= v19 )
    v19 = v13;
  v20.data_ = (char *)this->buffers_.buffer_.data_ + total_consumed;
  v20.size_ = v19;
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_write_some<boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::asio::const_buffer> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>>(
    stream,
    &v20,
    this);
};

// Line 319: range 0000000019C80824-0000000019C817F8
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>::operator()(
        boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const this,
        const boost::system::error_code *ec,
        std::size_t bytes_transferred,
        int start)
{
  char v4; // al
  std::size_t *p_total_consumed; // rax
  std::size_t v6; // rcx
  char v7; // al
  std::size_t *p_size; // rdx
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *p_handler; // rdi
  const boost::system::error_category *cat; // rdx OVERLAPPED
  __int64 v11; // rsi OVERLAPPED
  char v12; // al
  unsigned __int64 v13; // rcx
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *stream; // r8
  std::size_t *v15; // rax
  std::size_t total_consumed; // rdx
  std::size_t *v17; // rax
  std::size_t size; // rax
  std::size_t v19; // rax
  boost::asio::const_buffers_1 v20; // [rsp+0h] [rbp-18h] BYREF

  v4 = *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
  {
    this = (boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const)((char *)this + 32);
    __asan_report_store4(this);
  }
  else
  {
    this->start_ = start;
    if ( start != 1 )
    {
      p_total_consumed = &this->buffers_.total_consumed_;
      if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.total_consumed_ >> 3) + 0x7FFF8000) )
      {
LABEL_35:
        __asan_report_load8(p_total_consumed);
LABEL_36:
        __asan_report_load4(ec);
        goto LABEL_37;
      }
      v6 = this->buffers_.total_consumed_ + bytes_transferred;
      this->buffers_.total_consumed_ = v6;
      v7 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
      if ( v7 && v7 <= 3 )
        goto LABEL_36;
      if ( !ec->val_ && !bytes_transferred )
      {
LABEL_12:
        p_handler = &this->handler_;
        if ( !*(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
        {
          cat = ec->cat_;
          v11 = *(_QWORD *)&ec->val_;
          boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator()(
            p_handler,
            *(boost::system::error_code *)(&cat - 1),
            v6,
            0);
          return;
        }
LABEL_38:
        __asan_report_load16(ec);
        JUMPOUT(0x19C80A13LL);
      }
      p_size = &this->buffers_.buffer_.size_;
      if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.buffer_.size_ >> 3) + 0x7FFF8000) )
      {
LABEL_37:
        __asan_report_load8(p_size);
        goto LABEL_38;
      }
      if ( v6 >= this->buffers_.buffer_.size_ || ec->val_ )
        goto LABEL_12;
      v13 = 0x10000LL;
      goto LABEL_19;
    }
  }
  v12 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
  {
    this = (boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const)ec;
    __asan_report_load4(ec);
  }
  else if ( ec->val_ )
  {
    v13 = 0LL;
    goto LABEL_19;
  }
  v13 = 0x10000LL;
LABEL_19:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v15 = (std::size_t *)__asan_report_load8(this);
    goto LABEL_32;
  }
  stream = this->stream_;
  v15 = &this->buffers_.total_consumed_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.total_consumed_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    v17 = (std::size_t *)__asan_report_load8(v15);
    goto LABEL_33;
  }
  total_consumed = this->buffers_.total_consumed_;
  v17 = &this->buffers_.buffer_.size_;
  ec = (const boost::system::error_code *)((unsigned __int64)&this->buffers_.buffer_.size_ >> 3);
  if ( LOBYTE(ec[134215680].val_) )
  {
LABEL_33:
    __asan_report_load8(v17);
LABEL_34:
    p_total_consumed = (std::size_t *)__asan_report_load8(ec);
    goto LABEL_35;
  }
  size = this->buffers_.buffer_.size_;
  if ( size <= total_consumed )
    total_consumed = this->buffers_.buffer_.size_;
  ec = (const boost::system::error_code *)&this->buffers_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffers_ >> 3) + 0x7FFF8000) )
    goto LABEL_34;
  v19 = size - total_consumed;
  if ( v13 <= v19 )
    v19 = v13;
  v20.data_ = (char *)this->buffers_.buffer_.data_ + total_consumed;
  v20.size_ = v19;
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_write_some<boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>>(
    stream,
    &v20,
    this);
};

// Line 319: range 0000000019C91A6A-0000000019C9394F
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>::operator()(
        boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const this,
        const boost::system::error_code *ec,
        std::size_t bytes_transferred,
        int start)
{
  char v4; // al
  std::size_t *p_total_consumed; // rax
  std::size_t v6; // rcx
  char v7; // al
  std::size_t *p_size; // rdx
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *p_handler; // rdi
  const boost::system::error_category *cat; // rdx OVERLAPPED
  __int64 v11; // rsi OVERLAPPED
  char v12; // al
  unsigned __int64 v13; // rcx
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *stream; // r8
  std::size_t *v15; // rax
  std::size_t total_consumed; // rdx
  std::size_t *v17; // rax
  std::size_t size; // rax
  std::size_t v19; // rax
  boost::asio::const_buffers_1 v20; // [rsp+0h] [rbp-18h] BYREF

  v4 = *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
  {
    this = (boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const)((char *)this + 32);
    __asan_report_store4(this);
  }
  else
  {
    this->start_ = start;
    if ( start != 1 )
    {
      p_total_consumed = &this->buffers_.total_consumed_;
      if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.total_consumed_ >> 3) + 0x7FFF8000) )
      {
LABEL_35:
        __asan_report_load8(p_total_consumed);
LABEL_36:
        __asan_report_load4(ec);
        goto LABEL_37;
      }
      v6 = this->buffers_.total_consumed_ + bytes_transferred;
      this->buffers_.total_consumed_ = v6;
      v7 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
      if ( v7 && v7 <= 3 )
        goto LABEL_36;
      if ( !ec->val_ && !bytes_transferred )
      {
LABEL_12:
        p_handler = &this->handler_;
        if ( !*(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
        {
          cat = ec->cat_;
          v11 = *(_QWORD *)&ec->val_;
          boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator()(
            p_handler,
            *(boost::system::error_code *)(&cat - 1),
            v6,
            0);
          return;
        }
LABEL_38:
        __asan_report_load16(ec);
        JUMPOUT(0x19C91C59LL);
      }
      p_size = &this->buffers_.buffer_.size_;
      if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.buffer_.size_ >> 3) + 0x7FFF8000) )
      {
LABEL_37:
        __asan_report_load8(p_size);
        goto LABEL_38;
      }
      if ( v6 >= this->buffers_.buffer_.size_ || ec->val_ )
        goto LABEL_12;
      v13 = 0x10000LL;
      goto LABEL_19;
    }
  }
  v12 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
  {
    this = (boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const)ec;
    __asan_report_load4(ec);
  }
  else if ( ec->val_ )
  {
    v13 = 0LL;
    goto LABEL_19;
  }
  v13 = 0x10000LL;
LABEL_19:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v15 = (std::size_t *)__asan_report_load8(this);
    goto LABEL_32;
  }
  stream = this->stream_;
  v15 = &this->buffers_.total_consumed_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.total_consumed_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    v17 = (std::size_t *)__asan_report_load8(v15);
    goto LABEL_33;
  }
  total_consumed = this->buffers_.total_consumed_;
  v17 = &this->buffers_.buffer_.size_;
  ec = (const boost::system::error_code *)((unsigned __int64)&this->buffers_.buffer_.size_ >> 3);
  if ( LOBYTE(ec[134215680].val_) )
  {
LABEL_33:
    __asan_report_load8(v17);
LABEL_34:
    p_total_consumed = (std::size_t *)__asan_report_load8(ec);
    goto LABEL_35;
  }
  size = this->buffers_.buffer_.size_;
  if ( size <= total_consumed )
    total_consumed = this->buffers_.buffer_.size_;
  ec = (const boost::system::error_code *)&this->buffers_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffers_ >> 3) + 0x7FFF8000) )
    goto LABEL_34;
  v19 = size - total_consumed;
  if ( v13 <= v19 )
    v19 = v13;
  v20.data_ = (char *)this->buffers_.buffer_.data_ + total_consumed;
  v20.size_ = v19;
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_write_some<boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>>(
    stream,
    &v20,
    this);
};

// Line 319: range 0000000019CC83BC-0000000019CCA2A1
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>::operator()(
        boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const this,
        const boost::system::error_code *ec,
        std::size_t bytes_transferred,
        int start)
{
  char v4; // al
  std::size_t *p_total_consumed; // rax
  std::size_t v6; // rcx
  char v7; // al
  std::size_t *p_size; // rdx
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *p_handler; // rdi
  const boost::system::error_category *cat; // rdx OVERLAPPED
  __int64 v11; // rsi OVERLAPPED
  char v12; // al
  unsigned __int64 v13; // rcx
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *stream; // r8
  std::size_t *v15; // rax
  std::size_t total_consumed; // rdx
  std::size_t *v17; // rax
  std::size_t size; // rax
  std::size_t v19; // rax
  boost::asio::const_buffers_1 v20; // [rsp+0h] [rbp-18h] BYREF

  v4 = *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
  {
    this = (boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const)((char *)this + 32);
    __asan_report_store4(this);
  }
  else
  {
    this->start_ = start;
    if ( start != 1 )
    {
      p_total_consumed = &this->buffers_.total_consumed_;
      if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.total_consumed_ >> 3) + 0x7FFF8000) )
      {
LABEL_35:
        __asan_report_load8(p_total_consumed);
LABEL_36:
        __asan_report_load4(ec);
        goto LABEL_37;
      }
      v6 = this->buffers_.total_consumed_ + bytes_transferred;
      this->buffers_.total_consumed_ = v6;
      v7 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
      if ( v7 && v7 <= 3 )
        goto LABEL_36;
      if ( !ec->val_ && !bytes_transferred )
      {
LABEL_12:
        p_handler = &this->handler_;
        if ( !*(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
        {
          cat = ec->cat_;
          v11 = *(_QWORD *)&ec->val_;
          boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator()(
            p_handler,
            *(boost::system::error_code *)(&cat - 1),
            v6,
            0);
          return;
        }
LABEL_38:
        __asan_report_load16(ec);
        JUMPOUT(0x19CC85ABLL);
      }
      p_size = &this->buffers_.buffer_.size_;
      if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.buffer_.size_ >> 3) + 0x7FFF8000) )
      {
LABEL_37:
        __asan_report_load8(p_size);
        goto LABEL_38;
      }
      if ( v6 >= this->buffers_.buffer_.size_ || ec->val_ )
        goto LABEL_12;
      v13 = 0x10000LL;
      goto LABEL_19;
    }
  }
  v12 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
  {
    this = (boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const)ec;
    __asan_report_load4(ec);
  }
  else if ( ec->val_ )
  {
    v13 = 0LL;
    goto LABEL_19;
  }
  v13 = 0x10000LL;
LABEL_19:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v15 = (std::size_t *)__asan_report_load8(this);
    goto LABEL_32;
  }
  stream = this->stream_;
  v15 = &this->buffers_.total_consumed_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.total_consumed_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    v17 = (std::size_t *)__asan_report_load8(v15);
    goto LABEL_33;
  }
  total_consumed = this->buffers_.total_consumed_;
  v17 = &this->buffers_.buffer_.size_;
  ec = (const boost::system::error_code *)((unsigned __int64)&this->buffers_.buffer_.size_ >> 3);
  if ( LOBYTE(ec[134215680].val_) )
  {
LABEL_33:
    __asan_report_load8(v17);
LABEL_34:
    p_total_consumed = (std::size_t *)__asan_report_load8(ec);
    goto LABEL_35;
  }
  size = this->buffers_.buffer_.size_;
  if ( size <= total_consumed )
    total_consumed = this->buffers_.buffer_.size_;
  ec = (const boost::system::error_code *)&this->buffers_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffers_ >> 3) + 0x7FFF8000) )
    goto LABEL_34;
  v19 = size - total_consumed;
  if ( v13 <= v19 )
    v19 = v13;
  v20.data_ = (char *)this->buffers_.buffer_.data_ + total_consumed;
  v20.size_ = v19;
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_write_some<boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>>(
    stream,
    &v20,
    this);
};

// Line 319: range 0000000019CA427A-0000000019CA615F
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>::operator()(
        boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const this,
        const boost::system::error_code *ec,
        std::size_t bytes_transferred,
        int start)
{
  char v4; // al
  std::size_t *p_total_consumed; // rax
  std::size_t v6; // rcx
  char v7; // al
  std::size_t *p_size; // rdx
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *p_handler; // rdi
  const boost::system::error_category *cat; // rdx OVERLAPPED
  __int64 v11; // rsi OVERLAPPED
  char v12; // al
  unsigned __int64 v13; // rcx
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *stream; // r8
  std::size_t *v15; // rax
  std::size_t total_consumed; // rdx
  std::size_t *v17; // rax
  std::size_t size; // rax
  std::size_t v19; // rax
  boost::asio::const_buffers_1 v20; // [rsp+0h] [rbp-18h] BYREF

  v4 = *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
  {
    this = (boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const)((char *)this + 32);
    __asan_report_store4(this);
  }
  else
  {
    this->start_ = start;
    if ( start != 1 )
    {
      p_total_consumed = &this->buffers_.total_consumed_;
      if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.total_consumed_ >> 3) + 0x7FFF8000) )
      {
LABEL_35:
        __asan_report_load8(p_total_consumed);
LABEL_36:
        __asan_report_load4(ec);
        goto LABEL_37;
      }
      v6 = this->buffers_.total_consumed_ + bytes_transferred;
      this->buffers_.total_consumed_ = v6;
      v7 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
      if ( v7 && v7 <= 3 )
        goto LABEL_36;
      if ( !ec->val_ && !bytes_transferred )
      {
LABEL_12:
        p_handler = &this->handler_;
        if ( !*(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
        {
          cat = ec->cat_;
          v11 = *(_QWORD *)&ec->val_;
          boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator()(
            p_handler,
            *(boost::system::error_code *)(&cat - 1),
            v6,
            0);
          return;
        }
LABEL_38:
        __asan_report_load16(ec);
        JUMPOUT(0x19CA4469LL);
      }
      p_size = &this->buffers_.buffer_.size_;
      if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.buffer_.size_ >> 3) + 0x7FFF8000) )
      {
LABEL_37:
        __asan_report_load8(p_size);
        goto LABEL_38;
      }
      if ( v6 >= this->buffers_.buffer_.size_ || ec->val_ )
        goto LABEL_12;
      v13 = 0x10000LL;
      goto LABEL_19;
    }
  }
  v12 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
  {
    this = (boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const)ec;
    __asan_report_load4(ec);
  }
  else if ( ec->val_ )
  {
    v13 = 0LL;
    goto LABEL_19;
  }
  v13 = 0x10000LL;
LABEL_19:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v15 = (std::size_t *)__asan_report_load8(this);
    goto LABEL_32;
  }
  stream = this->stream_;
  v15 = &this->buffers_.total_consumed_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.total_consumed_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    v17 = (std::size_t *)__asan_report_load8(v15);
    goto LABEL_33;
  }
  total_consumed = this->buffers_.total_consumed_;
  v17 = &this->buffers_.buffer_.size_;
  ec = (const boost::system::error_code *)((unsigned __int64)&this->buffers_.buffer_.size_ >> 3);
  if ( LOBYTE(ec[134215680].val_) )
  {
LABEL_33:
    __asan_report_load8(v17);
LABEL_34:
    p_total_consumed = (std::size_t *)__asan_report_load8(ec);
    goto LABEL_35;
  }
  size = this->buffers_.buffer_.size_;
  if ( size <= total_consumed )
    total_consumed = this->buffers_.buffer_.size_;
  ec = (const boost::system::error_code *)&this->buffers_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffers_ >> 3) + 0x7FFF8000) )
    goto LABEL_34;
  v19 = size - total_consumed;
  if ( v13 <= v19 )
    v19 = v13;
  v20.data_ = (char *)this->buffers_.buffer_.data_ + total_consumed;
  v20.size_ = v19;
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_write_some<boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>>(
    stream,
    &v20,
    this);
};

// Line 319: range 0000000019CBF110-0000000019CC0FDD
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>::operator()(
        boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const this,
        const boost::system::error_code *ec,
        std::size_t bytes_transferred,
        int start)
{
  char v4; // al
  std::size_t *p_total_consumed; // rax
  std::size_t v6; // rcx
  char v7; // al
  std::size_t *p_size; // rdx
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *p_handler; // rdi
  const boost::system::error_category *cat; // rdx OVERLAPPED
  __int64 v11; // rsi OVERLAPPED
  char v12; // al
  unsigned __int64 v13; // rcx
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *stream; // r8
  std::size_t *v15; // rax
  std::size_t total_consumed; // rdx
  std::size_t *v17; // rax
  std::size_t size; // rax
  std::size_t v19; // rax
  boost::asio::const_buffers_1 v20; // [rsp+0h] [rbp-18h] BYREF

  v4 = *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
  {
    this = (boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const)((char *)this + 32);
    __asan_report_store4(this);
  }
  else
  {
    this->start_ = start;
    if ( start != 1 )
    {
      p_total_consumed = &this->buffers_.total_consumed_;
      if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.total_consumed_ >> 3) + 0x7FFF8000) )
      {
LABEL_35:
        __asan_report_load8(p_total_consumed);
LABEL_36:
        __asan_report_load4(ec);
        goto LABEL_37;
      }
      v6 = this->buffers_.total_consumed_ + bytes_transferred;
      this->buffers_.total_consumed_ = v6;
      v7 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
      if ( v7 && v7 <= 3 )
        goto LABEL_36;
      if ( !ec->val_ && !bytes_transferred )
      {
LABEL_12:
        p_handler = &this->handler_;
        if ( !*(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
        {
          cat = ec->cat_;
          v11 = *(_QWORD *)&ec->val_;
          boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator()(
            p_handler,
            *(boost::system::error_code *)(&cat - 1),
            v6,
            0);
          return;
        }
LABEL_38:
        __asan_report_load16(ec);
        JUMPOUT(0x19CBF2FFLL);
      }
      p_size = &this->buffers_.buffer_.size_;
      if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.buffer_.size_ >> 3) + 0x7FFF8000) )
      {
LABEL_37:
        __asan_report_load8(p_size);
        goto LABEL_38;
      }
      if ( v6 >= this->buffers_.buffer_.size_ || ec->val_ )
        goto LABEL_12;
      v13 = 0x10000LL;
      goto LABEL_19;
    }
  }
  v12 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
  {
    this = (boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const)ec;
    __asan_report_load4(ec);
  }
  else if ( ec->val_ )
  {
    v13 = 0LL;
    goto LABEL_19;
  }
  v13 = 0x10000LL;
LABEL_19:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v15 = (std::size_t *)__asan_report_load8(this);
    goto LABEL_32;
  }
  stream = this->stream_;
  v15 = &this->buffers_.total_consumed_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.total_consumed_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    v17 = (std::size_t *)__asan_report_load8(v15);
    goto LABEL_33;
  }
  total_consumed = this->buffers_.total_consumed_;
  v17 = &this->buffers_.buffer_.size_;
  ec = (const boost::system::error_code *)((unsigned __int64)&this->buffers_.buffer_.size_ >> 3);
  if ( LOBYTE(ec[134215680].val_) )
  {
LABEL_33:
    __asan_report_load8(v17);
LABEL_34:
    p_total_consumed = (std::size_t *)__asan_report_load8(ec);
    goto LABEL_35;
  }
  size = this->buffers_.buffer_.size_;
  if ( size <= total_consumed )
    total_consumed = this->buffers_.buffer_.size_;
  ec = (const boost::system::error_code *)&this->buffers_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffers_ >> 3) + 0x7FFF8000) )
    goto LABEL_34;
  v19 = size - total_consumed;
  if ( v13 <= v19 )
    v19 = v13;
  v20.data_ = (char *)this->buffers_.buffer_.data_ + total_consumed;
  v20.size_ = v19;
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_write_some<boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>>(
    stream,
    &v20,
    this);
};

// Line 319: range 0000000019CB61E8-0000000019CB80B5
// local variable allocation has failed, the output may be wrong!
void __fastcall boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>::operator()(
        boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const this,
        const boost::system::error_code *ec,
        std::size_t bytes_transferred,
        int start)
{
  char v4; // al
  std::size_t *p_total_consumed; // rax
  std::size_t v6; // rcx
  char v7; // al
  std::size_t *p_size; // rdx
  boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > *p_handler; // rdi
  const boost::system::error_category *cat; // rdx OVERLAPPED
  __int64 v11; // rsi OVERLAPPED
  char v12; // al
  unsigned __int64 v13; // rcx
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> *stream; // r8
  std::size_t *v15; // rax
  std::size_t total_consumed; // rdx
  std::size_t *v17; // rax
  std::size_t size; // rax
  std::size_t v19; // rax
  boost::asio::const_buffers_1 v20; // [rsp+0h] [rbp-18h] BYREF

  v4 = *(_BYTE *)(((unsigned __int64)&this->start_ >> 3) + 0x7FFF8000);
  if ( v4 && v4 <= 3 )
  {
    this = (boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const)((char *)this + 32);
    __asan_report_store4(this);
  }
  else
  {
    this->start_ = start;
    if ( start != 1 )
    {
      p_total_consumed = &this->buffers_.total_consumed_;
      if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.total_consumed_ >> 3) + 0x7FFF8000) )
      {
LABEL_35:
        __asan_report_load8(p_total_consumed);
LABEL_36:
        __asan_report_load4(ec);
        goto LABEL_37;
      }
      v6 = this->buffers_.total_consumed_ + bytes_transferred;
      this->buffers_.total_consumed_ = v6;
      v7 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
      if ( v7 && v7 <= 3 )
        goto LABEL_36;
      if ( !ec->val_ && !bytes_transferred )
      {
LABEL_12:
        p_handler = &this->handler_;
        if ( !*(_WORD *)(((unsigned __int64)ec >> 3) + 0x7FFF8000) )
        {
          cat = ec->cat_;
          v11 = *(_QWORD *)&ec->val_;
          boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>::operator()(
            p_handler,
            *(boost::system::error_code *)(&cat - 1),
            v6,
            0);
          return;
        }
LABEL_38:
        __asan_report_load16(ec);
        JUMPOUT(0x19CB63D7LL);
      }
      p_size = &this->buffers_.buffer_.size_;
      if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.buffer_.size_ >> 3) + 0x7FFF8000) )
      {
LABEL_37:
        __asan_report_load8(p_size);
        goto LABEL_38;
      }
      if ( v6 >= this->buffers_.buffer_.size_ || ec->val_ )
        goto LABEL_12;
      v13 = 0x10000LL;
      goto LABEL_19;
    }
  }
  v12 = *(_BYTE *)(((unsigned __int64)ec >> 3) + 0x7FFF8000);
  if ( v12 && v12 <= 3 )
  {
    this = (boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,const boost::asio::mutable_buffer*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >&> > > >,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> > >::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(),boost::asio::executor>,long unsigned int>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > >,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy> >,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > > > > *const)ec;
    __asan_report_load4(ec);
  }
  else if ( ec->val_ )
  {
    v13 = 0LL;
    goto LABEL_19;
  }
  v13 = 0x10000LL;
LABEL_19:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    v15 = (std::size_t *)__asan_report_load8(this);
    goto LABEL_32;
  }
  stream = this->stream_;
  v15 = &this->buffers_.total_consumed_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffers_.total_consumed_ >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    v17 = (std::size_t *)__asan_report_load8(v15);
    goto LABEL_33;
  }
  total_consumed = this->buffers_.total_consumed_;
  v17 = &this->buffers_.buffer_.size_;
  ec = (const boost::system::error_code *)((unsigned __int64)&this->buffers_.buffer_.size_ >> 3);
  if ( LOBYTE(ec[134215680].val_) )
  {
LABEL_33:
    __asan_report_load8(v17);
LABEL_34:
    p_total_consumed = (std::size_t *)__asan_report_load8(ec);
    goto LABEL_35;
  }
  size = this->buffers_.buffer_.size_;
  if ( size <= total_consumed )
    total_consumed = this->buffers_.buffer_.size_;
  ec = (const boost::system::error_code *)&this->buffers_;
  if ( *(_BYTE *)(((unsigned __int64)&this->buffers_ >> 3) + 0x7FFF8000) )
    goto LABEL_34;
  v19 = size - total_consumed;
  if ( v13 <= v19 )
    v19 = v13;
  v20.data_ = (char *)this->buffers_.buffer_.data_ + total_consumed;
  v20.size_ = v19;
  boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>::async_write_some<boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::mutable_buffer,boost::asio::mutable_buffer const*,boost::asio::detail::transfer_all_t,boost::asio::ssl::detail::io_op<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>,boost::asio::ssl::detail::write_op<boost::beast::buffers_prefix_view<boost::beast::detail::buffers_ref<boost::beast::buffers_prefix_view<boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>> const&>>>>,boost::beast::flat_stream<boost::asio::ssl::stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>>::ops::write_op<boost::beast::http::detail::write_some_op<boost::beast::http::detail::write_op<boost::beast::http::detail::write_msg_op<boost::asio::detail::coro_handler<boost::asio::executor_binder<void (*)(void),boost::asio::executor>,unsigned long>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,boost::beast::http::detail::serializer_is_done,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>,boost::beast::ssl_stream<boost::beast::basic_stream<boost::asio::ip::tcp,boost::asio::executor,boost::beast::unlimited_rate_policy>>,true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>>>>>(
    stream,
    &v20,
    this);
};
