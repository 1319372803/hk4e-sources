// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/intrusive/circular_list_algorithms.hpp

// Line 214: range 000000000C79E4FC-000000000C79EF03
void __fastcall boost::intrusive::circular_list_algorithms<boost::intrusive::list_node_traits<void *>>::swap_nodes(
        boost::intrusive::circular_list_algorithms<boost::intrusive::list_node_traits<void*> >::node_ptr this_node,
        boost::intrusive::circular_list_algorithms<boost::intrusive::list_node_traits<void*> >::node_ptr other_node)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  _DWORD *v5; // rdx
  __int64 v6; // rsi
  _QWORD *v7; // rcx
  __int64 v8; // rsi
  _QWORD *v9; // rcx
  boost::intrusive::circular_list_algorithms<boost::intrusive::list_node_traits<void*> >::node_ptr *v10; // rcx
  __int64 v11; // rcx
  boost::intrusive::circular_list_algorithms<boost::intrusive::list_node_traits<void*> >::node_ptr *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  bool this_inited; // [rsp+1Eh] [rbp-232h]
  bool other_inited; // [rsp+1Fh] [rbp-231h]
  boost::intrusive::circular_list_algorithms<boost::intrusive::list_node_traits<void*> >::node_ptr next_this; // [rsp+20h] [rbp-230h]
  boost::intrusive::circular_list_algorithms<boost::intrusive::list_node_traits<void*> >::node_ptr prev_this; // [rsp+28h] [rbp-228h]
  boost::intrusive::circular_list_algorithms<boost::intrusive::list_node_traits<void*> >::node_ptr next_other; // [rsp+30h] [rbp-220h]
  boost::intrusive::circular_list_algorithms<boost::intrusive::list_node_traits<void*> >::node_ptr prev_other; // [rsp+38h] [rbp-218h]
  _QWORD *v30; // [rsp+40h] [rbp-210h]
  _QWORD *v31; // [rsp+48h] [rbp-208h]
  unsigned __int64 v32; // [rsp+50h] [rbp-200h]
  unsigned __int64 v33; // [rsp+78h] [rbp-1D8h]
  __int64 v34; // [rsp+A0h] [rbp-1B0h]
  __int64 v35; // [rsp+A8h] [rbp-1A8h]
  __int64 v36; // [rsp+B0h] [rbp-1A0h]
  __int64 v37; // [rsp+B8h] [rbp-198h]
  __int64 v38; // [rsp+C8h] [rbp-188h]
  unsigned __int64 v39; // [rsp+D0h] [rbp-180h]
  __int64 v40; // [rsp+D8h] [rbp-178h]
  unsigned __int64 v41; // [rsp+E0h] [rbp-170h]
  __int64 v42; // [rsp+F0h] [rbp-160h]
  unsigned __int64 v43; // [rsp+F8h] [rbp-158h]
  __int64 v44; // [rsp+100h] [rbp-150h]
  unsigned __int64 v45; // [rsp+108h] [rbp-148h]
  __int64 v46; // [rsp+118h] [rbp-138h]
  __int64 v47; // [rsp+120h] [rbp-130h]
  __int64 v48; // [rsp+128h] [rbp-128h]
  __int64 v49; // [rsp+130h] [rbp-120h]
  unsigned __int64 v50; // [rsp+140h] [rbp-110h]
  unsigned __int64 v51; // [rsp+170h] [rbp-E0h]
  char v52[176]; // [rsp+1A0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = v2 + 160;
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 13 this_node:214 64 8 14 other_node:214 96 8 13 this_node:214 128 8 14 other_node:214";
  *(_QWORD *)(v2 + 16) = boost::intrusive::circular_list_algorithms<boost::intrusive::list_node_traits<void *>>::swap_nodes;
  v5 = (_DWORD *)(v2 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_QWORD *)(v2 + 96) = this_node;
  *(_QWORD *)(v2 + 128) = other_node;
  if ( *(_QWORD *)(v2 + 128) != *(_QWORD *)(v2 + 96) )
  {
    *(_QWORD *)(v2 + 64) = *(_QWORD *)(v2 + 96);
    v30 = (_QWORD *)(v2 + 64);
    v6 = *(unsigned __int8 *)(((v2 + 64) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v6 )
      v4 = __asan_report_load8(v2 + 64, v6);
    v7 = (_QWORD *)*v30;
    if ( *(_BYTE *)((*v30 >> 3) + 0x7FFF8000LL) )
      v4 = __asan_report_load8(*v30, *v30);
    this_inited = *v7 == 0LL;
    *(_QWORD *)(v4 - 96) = *(_QWORD *)(v4 - 32);
    v31 = (_QWORD *)(v4 - 96);
    v8 = *(unsigned __int8 *)(((unsigned __int64)(v4 - 96) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 )
      v4 = __asan_report_load8(v4 - 96, v8);
    v9 = (_QWORD *)*v31;
    if ( *(_BYTE *)((*v31 >> 3) + 0x7FFF8000LL) )
      v4 = __asan_report_load8(*v31, *v31);
    other_inited = *v9 == 0LL;
    if ( this_inited )
    {
      v32 = *(_QWORD *)(v4 - 64);
      if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
        v4 = __asan_report_store8();
      *(_QWORD *)v32 = v32;
      if ( *(_BYTE *)(((v32 + 8) >> 3) + 0x7FFF8000) )
        v4 = __asan_report_store8();
      *(_QWORD *)(v32 + 8) = v32;
    }
    if ( other_inited )
    {
      v33 = *(_QWORD *)(v4 - 32);
      if ( *(_BYTE *)((v33 >> 3) + 0x7FFF8000) )
        v4 = __asan_report_store8();
      *(_QWORD *)v33 = v33;
      if ( *(_BYTE *)(((v33 + 8) >> 3) + 0x7FFF8000) )
        v4 = __asan_report_store8();
      *(_QWORD *)(v33 + 8) = v33;
    }
    v10 = *(boost::intrusive::circular_list_algorithms<boost::intrusive::list_node_traits<void*> >::node_ptr **)(v4 - 64);
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)(v4 - 64), *(_QWORD *)(v4 - 64));
    next_this = *v10;
    v11 = *(_QWORD *)(v4 - 64);
    if ( *(_BYTE *)(((unsigned __int64)(v11 + 8) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v11 + 8, v11 + 8);
    prev_this = *(boost::intrusive::circular_list_algorithms<boost::intrusive::list_node_traits<void*> >::node_ptr *)(v11 + 8);
    v12 = *(boost::intrusive::circular_list_algorithms<boost::intrusive::list_node_traits<void*> >::node_ptr **)(v4 - 32);
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)(v4 - 32), *(_QWORD *)(v4 - 32));
    next_other = *v12;
    v13 = *(_QWORD *)(v4 - 32);
    if ( *(_BYTE *)(((unsigned __int64)(v13 + 8) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v13 + 8, v13 + 8);
    prev_other = *(boost::intrusive::circular_list_algorithms<boost::intrusive::list_node_traits<void*> >::node_ptr *)(v13 + 8);
    *(_QWORD *)(v4 - 128) = next_this;
    *(_QWORD *)(v4 - 96) = next_other;
    v14 = *(_QWORD *)(v4 - 128);
    if ( *(_BYTE *)(((unsigned __int64)(v14 + 8) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v14 + 8, v14 + 8);
    v46 = *(_QWORD *)(v14 + 8);
    v15 = *(_QWORD *)(v4 - 96);
    if ( *(_BYTE *)(((unsigned __int64)(v15 + 8) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v15 + 8, v15 + 8);
    v47 = *(_QWORD *)(v4 - 128);
    v48 = *(_QWORD *)(v15 + 8);
    if ( *(_BYTE *)(((unsigned __int64)(v47 + 8) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store8();
    *(_QWORD *)(v47 + 8) = v48;
    v49 = *(_QWORD *)(v4 - 96);
    if ( *(_BYTE *)(((unsigned __int64)(v49 + 8) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store8();
    *(_QWORD *)(v49 + 8) = v46;
    *(_QWORD *)(v4 - 128) = prev_this;
    *(_QWORD *)(v4 - 96) = prev_other;
    v16 = *(_QWORD *)(v4 - 128);
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)(v4 - 128), *(_QWORD *)(v4 - 128));
    v42 = *(_QWORD *)v16;
    v17 = *(_QWORD *)(v4 - 96);
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)(v4 - 96), *(_QWORD *)(v4 - 96));
    v43 = *(_QWORD *)(v4 - 128);
    v44 = *(_QWORD *)v17;
    if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store8();
    *(_QWORD *)v43 = v44;
    v45 = *(_QWORD *)(v4 - 96);
    if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store8();
    *(_QWORD *)v45 = v42;
    v18 = *(_QWORD *)(v4 - 32);
    *(_QWORD *)(v4 - 128) = *(_QWORD *)(v4 - 64);
    *(_QWORD *)(v4 - 96) = v18;
    v19 = *(_QWORD *)(v4 - 128);
    if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)(v4 - 128), *(_QWORD *)(v4 - 128));
    v38 = *(_QWORD *)v19;
    v20 = *(_QWORD *)(v4 - 96);
    if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(*(_QWORD *)(v4 - 96), *(_QWORD *)(v4 - 96));
    v39 = *(_QWORD *)(v4 - 128);
    v40 = *(_QWORD *)v20;
    if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store8();
    *(_QWORD *)v39 = v40;
    v41 = *(_QWORD *)(v4 - 96);
    if ( *(_BYTE *)((v41 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store8();
    *(_QWORD *)v41 = v38;
    v21 = *(_QWORD *)(v4 - 32);
    *(_QWORD *)(v4 - 128) = *(_QWORD *)(v4 - 64);
    *(_QWORD *)(v4 - 96) = v21;
    v22 = *(_QWORD *)(v4 - 128);
    if ( *(_BYTE *)(((unsigned __int64)(v22 + 8) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v22 + 8, v22 + 8);
    v34 = *(_QWORD *)(v22 + 8);
    v23 = *(_QWORD *)(v4 - 96);
    if ( *(_BYTE *)(((unsigned __int64)(v23 + 8) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8(v23 + 8, v23 + 8);
    v35 = *(_QWORD *)(v4 - 128);
    v36 = *(_QWORD *)(v23 + 8);
    if ( *(_BYTE *)(((unsigned __int64)(v35 + 8) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store8();
    *(_QWORD *)(v35 + 8) = v36;
    v37 = *(_QWORD *)(v4 - 96);
    if ( *(_BYTE *)(((unsigned __int64)(v37 + 8) >> 3) + 0x7FFF8000) )
      v4 = __asan_report_store8();
    *(_QWORD *)(v37 + 8) = v34;
    if ( this_inited )
    {
      v50 = *(_QWORD *)(v4 - 32);
      if ( *(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
        v4 = __asan_report_store8();
      *(_QWORD *)v50 = 0LL;
      if ( *(_BYTE *)(((v50 + 8) >> 3) + 0x7FFF8000) )
        v4 = __asan_report_store8();
      *(_QWORD *)(v50 + 8) = 0LL;
    }
    if ( other_inited )
    {
      v51 = *(_QWORD *)(v4 - 64);
      if ( *(_BYTE *)((v51 >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)v51 = 0LL;
      if ( *(_BYTE *)(((v51 + 8) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v51 + 8) = 0LL;
    }
  }
  if ( v52 == (char *)v2 )
  {
    *((_QWORD *)v5 + 268431360) = 0LL;
    *((_QWORD *)v5 + 268431361) = 0LL;
    v5[536862724] = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *((_QWORD *)v5 + 268431360) = 0xF5F5F5F5F5F5F5F5LL;
    *((_QWORD *)v5 + 268431361) = 0xF5F5F5F5F5F5F5F5LL;
    v5[536862724] = -168430091;
  }
};
