// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/gamecore/src/utils/monitor_report.cpp

// Line 24: range 0000000014E32E3D-0000000014E33C36
int32_t __fastcall reportTypeEnumToStr(const ReportType report_type, std::string *report_string)
{
  unsigned __int64 v2; // r13
  std::forward_iterator_tag v3; // cl
  std::_Hashtable<ReportType,std::pair<const ReportType,std::string >,std::allocator<std::pair<const ReportType,std::string > >,std::__detail::_Select1st,std::equal_to<ReportType>,std::hash<ReportType>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::iterator v4; // rax
  int32_t result; // eax
  __int64 v6; // rax
  std::forward_iterator_tag v7; // cl
  std::forward_iterator_tag v8; // cl
  std::forward_iterator_tag v9; // cl
  std::forward_iterator_tag v10; // cl
  std::forward_iterator_tag v11; // cl
  std::forward_iterator_tag v12; // cl
  std::forward_iterator_tag v13; // cl
  std::forward_iterator_tag v14; // cl
  std::forward_iterator_tag v15; // cl
  std::forward_iterator_tag v16; // cl
  std::forward_iterator_tag v17; // cl
  std::forward_iterator_tag v18; // cl
  std::forward_iterator_tag v19; // cl
  std::forward_iterator_tag v20; // cl
  std::forward_iterator_tag v21; // cl
  std::forward_iterator_tag v22; // cl
  std::forward_iterator_tag v23; // cl
  std::forward_iterator_tag v24; // cl
  std::forward_iterator_tag v25; // cl
  std::forward_iterator_tag v26; // cl
  std::forward_iterator_tag v27; // cl
  std::forward_iterator_tag v28; // cl
  std::forward_iterator_tag v29; // cl
  std::forward_iterator_tag v30; // cl
  std::forward_iterator_tag v31; // cl
  std::forward_iterator_tag v32; // cl
  std::forward_iterator_tag v33; // cl
  std::forward_iterator_tag v34; // cl
  std::forward_iterator_tag v35; // cl
  std::forward_iterator_tag v36; // cl
  std::forward_iterator_tag v37; // cl
  std::forward_iterator_tag v38; // cl
  std::forward_iterator_tag v39; // cl
  std::forward_iterator_tag v40; // cl
  std::forward_iterator_tag v41; // cl
  std::forward_iterator_tag v42; // cl
  std::forward_iterator_tag v43; // cl
  std::forward_iterator_tag v44; // cl
  std::forward_iterator_tag v45; // cl
  std::forward_iterator_tag v46; // cl
  std::forward_iterator_tag v47; // cl
  std::forward_iterator_tag v48; // cl
  std::forward_iterator_tag v49; // cl
  std::forward_iterator_tag v50; // cl
  std::forward_iterator_tag v51; // cl
  std::forward_iterator_tag v52; // cl
  std::forward_iterator_tag v53; // cl
  std::forward_iterator_tag v54; // cl
  std::forward_iterator_tag v55; // cl
  std::forward_iterator_tag v56; // cl
  std::forward_iterator_tag v57; // cl
  std::forward_iterator_tag v58; // cl
  std::forward_iterator_tag v59; // cl
  std::forward_iterator_tag v60; // cl
  std::forward_iterator_tag v61; // cl
  std::forward_iterator_tag v62; // cl
  std::forward_iterator_tag v63; // cl
  std::forward_iterator_tag v64; // cl
  std::forward_iterator_tag v65; // cl
  std::forward_iterator_tag v66; // cl
  std::forward_iterator_tag v67; // cl
  std::forward_iterator_tag v68; // cl
  std::pair<const ReportType,std::string > *p_l; // rbx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  unsigned __int64 p_second; // [rsp+8h] [rbp-A68h]
  std::hash<ReportType> __h1; // [rsp+1Ah] [rbp-A56h] BYREF
  std::equal_to<ReportType> __eq; // [rsp+1Bh] [rbp-A55h] BYREF
  std::_Hashtable<ReportType,std::pair<const ReportType,std::string >,std::allocator<std::pair<const ReportType,std::string > >,std::__detail::_Select1st,std::equal_to<ReportType>,std::hash<ReportType>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::allocator_type __a; // [rsp+1Ch] [rbp-A54h] BYREF
  std::__detail::_Select1st __exk; // [rsp+1Dh] [rbp-A53h] BYREF
  std::__detail::_Default_ranged_hash __h; // [rsp+1Eh] [rbp-A52h] BYREF
  std::__detail::_Mod_range_hashing __h2; // [rsp+1Fh] [rbp-A51h] BYREF
  std::pair<const ReportType,std::string > __f; // [rsp+20h] [rbp-A50h] BYREF
  int v79; // [rsp+48h] [rbp-A28h]
  std::string v80; // [rsp+50h] [rbp-A20h] BYREF
  int v81; // [rsp+70h] [rbp-A00h]
  std::string v82; // [rsp+78h] [rbp-9F8h] BYREF
  int v83; // [rsp+98h] [rbp-9D8h]
  std::string v84; // [rsp+A0h] [rbp-9D0h] BYREF
  int v85; // [rsp+C0h] [rbp-9B0h]
  std::string v86; // [rsp+C8h] [rbp-9A8h] BYREF
  int v87; // [rsp+E8h] [rbp-988h]
  std::string v88; // [rsp+F0h] [rbp-980h] BYREF
  int v89; // [rsp+110h] [rbp-960h]
  std::string v90; // [rsp+118h] [rbp-958h] BYREF
  int v91; // [rsp+138h] [rbp-938h]
  std::string v92; // [rsp+140h] [rbp-930h] BYREF
  int v93; // [rsp+160h] [rbp-910h]
  std::string v94; // [rsp+168h] [rbp-908h] BYREF
  int v95; // [rsp+188h] [rbp-8E8h]
  std::string v96; // [rsp+190h] [rbp-8E0h] BYREF
  int v97; // [rsp+1B0h] [rbp-8C0h]
  std::string v98; // [rsp+1B8h] [rbp-8B8h] BYREF
  int v99; // [rsp+1D8h] [rbp-898h]
  std::string v100; // [rsp+1E0h] [rbp-890h] BYREF
  int v101; // [rsp+200h] [rbp-870h]
  std::string v102; // [rsp+208h] [rbp-868h] BYREF
  int v103; // [rsp+228h] [rbp-848h]
  std::string v104; // [rsp+230h] [rbp-840h] BYREF
  int v105; // [rsp+250h] [rbp-820h]
  std::string v106; // [rsp+258h] [rbp-818h] BYREF
  int v107; // [rsp+278h] [rbp-7F8h]
  std::string v108; // [rsp+280h] [rbp-7F0h] BYREF
  int v109; // [rsp+2A0h] [rbp-7D0h]
  std::string v110; // [rsp+2A8h] [rbp-7C8h] BYREF
  int v111; // [rsp+2C8h] [rbp-7A8h]
  std::string v112; // [rsp+2D0h] [rbp-7A0h] BYREF
  int v113; // [rsp+2F0h] [rbp-780h]
  std::string v114; // [rsp+2F8h] [rbp-778h] BYREF
  int v115; // [rsp+318h] [rbp-758h]
  std::string v116; // [rsp+320h] [rbp-750h] BYREF
  int v117; // [rsp+340h] [rbp-730h]
  std::string v118; // [rsp+348h] [rbp-728h] BYREF
  int v119; // [rsp+368h] [rbp-708h]
  std::string v120; // [rsp+370h] [rbp-700h] BYREF
  int v121; // [rsp+390h] [rbp-6E0h]
  std::string v122; // [rsp+398h] [rbp-6D8h] BYREF
  int v123; // [rsp+3B8h] [rbp-6B8h]
  std::string v124; // [rsp+3C0h] [rbp-6B0h] BYREF
  int v125; // [rsp+3E0h] [rbp-690h]
  std::string v126; // [rsp+3E8h] [rbp-688h] BYREF
  int v127; // [rsp+408h] [rbp-668h]
  std::string v128; // [rsp+410h] [rbp-660h] BYREF
  int v129; // [rsp+430h] [rbp-640h]
  std::string v130; // [rsp+438h] [rbp-638h] BYREF
  int v131; // [rsp+458h] [rbp-618h]
  std::string v132; // [rsp+460h] [rbp-610h] BYREF
  int v133; // [rsp+480h] [rbp-5F0h]
  std::string v134; // [rsp+488h] [rbp-5E8h] BYREF
  int v135; // [rsp+4A8h] [rbp-5C8h]
  std::string v136; // [rsp+4B0h] [rbp-5C0h] BYREF
  int v137; // [rsp+4D0h] [rbp-5A0h]
  std::string v138; // [rsp+4D8h] [rbp-598h] BYREF
  int v139; // [rsp+4F8h] [rbp-578h]
  std::string v140; // [rsp+500h] [rbp-570h] BYREF
  int v141; // [rsp+520h] [rbp-550h]
  std::string v142; // [rsp+528h] [rbp-548h] BYREF
  int v143; // [rsp+548h] [rbp-528h]
  std::string v144; // [rsp+550h] [rbp-520h] BYREF
  int v145; // [rsp+570h] [rbp-500h]
  std::string v146; // [rsp+578h] [rbp-4F8h] BYREF
  int v147; // [rsp+598h] [rbp-4D8h]
  std::string v148; // [rsp+5A0h] [rbp-4D0h] BYREF
  int v149; // [rsp+5C0h] [rbp-4B0h]
  std::string v150; // [rsp+5C8h] [rbp-4A8h] BYREF
  int v151; // [rsp+5E8h] [rbp-488h]
  std::string v152; // [rsp+5F0h] [rbp-480h] BYREF
  int v153; // [rsp+610h] [rbp-460h]
  std::string v154; // [rsp+618h] [rbp-458h] BYREF
  int v155; // [rsp+638h] [rbp-438h]
  std::string v156; // [rsp+640h] [rbp-430h] BYREF
  int v157; // [rsp+660h] [rbp-410h]
  std::string v158; // [rsp+668h] [rbp-408h] BYREF
  int v159; // [rsp+688h] [rbp-3E8h]
  std::string v160; // [rsp+690h] [rbp-3E0h] BYREF
  int v161; // [rsp+6B0h] [rbp-3C0h]
  std::string v162; // [rsp+6B8h] [rbp-3B8h] BYREF
  int v163; // [rsp+6D8h] [rbp-398h]
  std::string v164; // [rsp+6E0h] [rbp-390h] BYREF
  int v165; // [rsp+700h] [rbp-370h]
  std::string v166; // [rsp+708h] [rbp-368h] BYREF
  int v167; // [rsp+728h] [rbp-348h]
  std::string v168; // [rsp+730h] [rbp-340h] BYREF
  int v169; // [rsp+750h] [rbp-320h]
  std::string v170; // [rsp+758h] [rbp-318h] BYREF
  int v171; // [rsp+778h] [rbp-2F8h]
  std::string v172; // [rsp+780h] [rbp-2F0h] BYREF
  int v173; // [rsp+7A0h] [rbp-2D0h]
  std::string v174; // [rsp+7A8h] [rbp-2C8h] BYREF
  int v175; // [rsp+7C8h] [rbp-2A8h]
  std::string v176; // [rsp+7D0h] [rbp-2A0h] BYREF
  int v177; // [rsp+7F0h] [rbp-280h]
  std::string v178; // [rsp+7F8h] [rbp-278h] BYREF
  int v179; // [rsp+818h] [rbp-258h]
  std::string v180; // [rsp+820h] [rbp-250h] BYREF
  int v181; // [rsp+840h] [rbp-230h]
  std::string v182; // [rsp+848h] [rbp-228h] BYREF
  int v183; // [rsp+868h] [rbp-208h]
  std::string v184; // [rsp+870h] [rbp-200h] BYREF
  int v185; // [rsp+890h] [rbp-1E0h]
  std::string v186; // [rsp+898h] [rbp-1D8h] BYREF
  int v187; // [rsp+8B8h] [rbp-1B8h]
  std::string v188; // [rsp+8C0h] [rbp-1B0h] BYREF
  int v189; // [rsp+8E0h] [rbp-190h]
  std::string v190; // [rsp+8E8h] [rbp-188h] BYREF
  int v191; // [rsp+908h] [rbp-168h]
  std::string v192; // [rsp+910h] [rbp-160h] BYREF
  int v193; // [rsp+930h] [rbp-140h]
  std::string v194; // [rsp+938h] [rbp-138h] BYREF
  int v195; // [rsp+958h] [rbp-118h]
  std::string v196; // [rsp+960h] [rbp-110h] BYREF
  int v197; // [rsp+980h] [rbp-F0h]
  std::string v198; // [rsp+988h] [rbp-E8h] BYREF
  int v199; // [rsp+9A8h] [rbp-C8h]
  std::string v200; // [rsp+9B0h] [rbp-C0h] BYREF
  int v201; // [rsp+9D0h] [rbp-A0h]
  std::string v202; // [rsp+9D8h] [rbp-98h] BYREF
  std::pair<const ReportType,std::string > __l; // [rsp+9F8h] [rbp-78h] BYREF

  p_second = (unsigned __int64)&__l.second;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      p_second = v6;
  }
  *(_QWORD *)p_second = 1102416563LL;
  *(_QWORD *)(p_second + 8) = "1 32 4 14 report_type:23";
  *(_QWORD *)(p_second + 16) = reportTypeEnumToStr;
  v2 = p_second >> 3;
  *(_DWORD *)(v2 + 2147450880) = -235802127;
  *(_DWORD *)(v2 + 2147450884) = -202116348;
  *(_DWORD *)(p_second + 32) = report_type;
  if ( !(_BYTE)`guard variable for'reportTypeEnumToStr(ReportType,std::string &)::m
    && __cxa_guard_acquire(&`guard variable for'reportTypeEnumToStr(ReportType,std::string &)::m) )
  {
    __f.first = MONITOR_TYPE_NONE;
    __f.second._M_dataplus._M_p = __f.second._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&__f.second, &byte_1AE362B1[-17], byte_1AE362B1, v3);
    v79 = 1;
    v80._M_dataplus._M_p = v80._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v80, &byte_1AE362F5[-21], byte_1AE362F5, v7);
    v81 = 2;
    v82._M_dataplus._M_p = v82._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v82, &byte_1AE36339[-25], byte_1AE36339, v8);
    v83 = 3;
    v84._M_dataplus._M_p = v84._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v84, &byte_1AE3637A[-26], byte_1AE3637A, v9);
    v85 = 4;
    v86._M_dataplus._M_p = v86._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v86, &byte_1AE363B2[-18], byte_1AE363B2, v10);
    v87 = 5;
    v88._M_dataplus._M_p = v88._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v88, &byte_1AE363F6[-22], byte_1AE363F6, v11);
    v89 = 6;
    v90._M_dataplus._M_p = v90._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v90, &byte_1AE36431[-17], byte_1AE36431, v12);
    v91 = 7;
    v92._M_dataplus._M_p = v92._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v92, &byte_1AE3646D[-13], byte_1AE3646D, v13);
    v93 = 8;
    v94._M_dataplus._M_p = v94._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v94, &byte_1AE364B5[-21], byte_1AE364B5, v14);
    v95 = 10;
    v96._M_dataplus._M_p = v96._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v96, &byte_1AE364FE[-30], byte_1AE364FE, v15);
    v97 = 9;
    v98._M_dataplus._M_p = v98._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v98, &byte_1AE36535[-21], byte_1AE36535, v16);
    v99 = 13;
    v100._M_dataplus._M_p = v100._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v100, &byte_1AE36574[-20], byte_1AE36574, v17);
    v101 = 11;
    v102._M_dataplus._M_p = v102._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v102, &byte_1AE365BD[-29], byte_1AE365BD, v18);
    v103 = 12;
    v104._M_dataplus._M_p = v104._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v104, &byte_1AE365F6[-22], byte_1AE365F6, v19);
    v105 = 14;
    v106._M_dataplus._M_p = v106._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v106, &byte_1AE36630[-16], byte_1AE36630, v20);
    v107 = 15;
    v108._M_dataplus._M_p = v108._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v108, &byte_1AE36676[-22], byte_1AE36676, v21);
    v109 = 16;
    v110._M_dataplus._M_p = v110._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v110, &byte_1AE366B6[-22], byte_1AE366B6, v22);
    v111 = 17;
    v112._M_dataplus._M_p = v112._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v112, &byte_1AE366FE[-30], byte_1AE366FE, v23);
    v113 = 18;
    v114._M_dataplus._M_p = v114._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v114, &byte_1AE3673B[-27], byte_1AE3673B, v24);
    v115 = 19;
    v116._M_dataplus._M_p = v116._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v116, &byte_1AE36777[-23], byte_1AE36777, v25);
    v117 = 20;
    v118._M_dataplus._M_p = v118._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v118, &byte_1AE367B6[-22], byte_1AE367B6, v26);
    v119 = 21;
    v120._M_dataplus._M_p = v120._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v120, &byte_1AE367F7[-23], byte_1AE367F7, v27);
    v121 = 34;
    v122._M_dataplus._M_p = v122._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v122, &byte_1AE36837[-23], byte_1AE36837, v28);
    v123 = 22;
    v124._M_dataplus._M_p = v124._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v124, &byte_1AE3687A[-26], byte_1AE3687A, v29);
    v125 = 23;
    v126._M_dataplus._M_p = v126._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v126, &byte_1AE368BA[-26], byte_1AE368BA, v30);
    v127 = 24;
    v128._M_dataplus._M_p = v128._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v128, &byte_1AE368F6[-22], byte_1AE368F6, v31);
    v129 = 25;
    v130._M_dataplus._M_p = v130._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v130, &byte_1AE36937[-23], byte_1AE36937, v32);
    v131 = 26;
    v132._M_dataplus._M_p = v132._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v132, &byte_1AE36977[-23], byte_1AE36977, v33);
    v133 = 27;
    v134._M_dataplus._M_p = v134._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v134, &byte_1AE369B6[-22], byte_1AE369B6, v34);
    v135 = 28;
    v136._M_dataplus._M_p = v136._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v136, &byte_1AE369F4[-20], byte_1AE369F4, v35);
    v137 = 29;
    v138._M_dataplus._M_p = v138._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v138, &byte_1AE36A35[-21], byte_1AE36A35, v36);
    v139 = 30;
    v140._M_dataplus._M_p = v140._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v140, &byte_1AE36A70[-16], byte_1AE36A70, v37);
    v141 = 31;
    v142._M_dataplus._M_p = v142._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v142, &byte_1AE36ABD[-29], byte_1AE36ABD, v38);
    v143 = 32;
    v144._M_dataplus._M_p = v144._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v144, &byte_1AE36AFC[-28], byte_1AE36AFC, v39);
    v145 = 33;
    v146._M_dataplus._M_p = v146._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v146, &byte_1AE36B37[-23], byte_1AE36B37, v40);
    v147 = 35;
    v148._M_dataplus._M_p = v148._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v148, &byte_1AE36B75[-21], byte_1AE36B75, v41);
    v149 = 36;
    v150._M_dataplus._M_p = v150._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v150, &byte_1AE36BB6[-22], byte_1AE36BB6, v42);
    v151 = 37;
    v152._M_dataplus._M_p = v152._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v152, &byte_1AE36BFA[-26], byte_1AE36BFA, v43);
    v153 = 38;
    v154._M_dataplus._M_p = v154._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v154, &byte_1AE36C3B[-27], byte_1AE36C3B, v44);
    v155 = 39;
    v156._M_dataplus._M_p = v156._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v156, &byte_1AE36C7B[-27], byte_1AE36C7B, v45);
    v157 = 40;
    v158._M_dataplus._M_p = v158._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v158, &byte_1AE36CB6[-22], byte_1AE36CB6, v46);
    v159 = 41;
    v160._M_dataplus._M_p = v160._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v160, &byte_1AE36CFD[-29], byte_1AE36CFD, v47);
    v161 = 42;
    v162._M_dataplus._M_p = v162._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v162, &byte_1AE36D37[-23], byte_1AE36D37, v48);
    v163 = 43;
    v164._M_dataplus._M_p = v164._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v164, &byte_1AE36D7F[-31], byte_1AE36D7F, v49);
    v165 = 44;
    v166._M_dataplus._M_p = v166._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v166, &byte_1AE36DBC[-28], byte_1AE36DBC, v50);
    v167 = 45;
    v168._M_dataplus._M_p = v168._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v168, &byte_1AE36DF3[-19], byte_1AE36DF3, v51);
    v169 = 46;
    v170._M_dataplus._M_p = v170._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v170, &byte_1AE36E45[-37], byte_1AE36E45, v52);
    v171 = 47;
    v172._M_dataplus._M_p = v172._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v172, &byte_1AE36EA3[-35], byte_1AE36EA3, v53);
    v173 = 48;
    v174._M_dataplus._M_p = v174._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v174, &byte_1AE36F07[-39], byte_1AE36F07, v54);
    v175 = 49;
    v176._M_dataplus._M_p = v176._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v176, &byte_1AE36F64[-36], byte_1AE36F64, v55);
    v177 = 50;
    v178._M_dataplus._M_p = v178._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v178, &byte_1AE36FBB[-27], byte_1AE36FBB, v56);
    v179 = 51;
    v180._M_dataplus._M_p = v180._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v180, &byte_1AE37003[-35], byte_1AE37003, v57);
    v181 = 52;
    v182._M_dataplus._M_p = v182._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v182, &byte_1AE37062[-34], byte_1AE37062, v58);
    v183 = 53;
    v184._M_dataplus._M_p = v184._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v184, &byte_1AE370C7[-39], byte_1AE370C7, v59);
    v185 = 60;
    v186._M_dataplus._M_p = v186._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v186, &byte_1AE3711B[-27], byte_1AE3711B, v60);
    v187 = 61;
    v188._M_dataplus._M_p = v188._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v188, &byte_1AE3715A[-26], byte_1AE3715A, v61);
    v189 = 62;
    v190._M_dataplus._M_p = v190._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v190, &byte_1AE3719D[-29], byte_1AE3719D, v62);
    v191 = 63;
    v192._M_dataplus._M_p = v192._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v192, &byte_1AE371D9[-25], byte_1AE371D9, v63);
    v193 = 64;
    v194._M_dataplus._M_p = v194._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v194, &byte_1AE3721A[-26], byte_1AE3721A, v64);
    v195 = 65;
    v196._M_dataplus._M_p = v196._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v196, &byte_1AE3725E[-30], byte_1AE3725E, v65);
    v197 = 66;
    v198._M_dataplus._M_p = v198._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v198, &byte_1AE3729D[-29], byte_1AE3729D, v66);
    v199 = 70;
    v200._M_dataplus._M_p = v200._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v200, &byte_1AE372D4[-20], byte_1AE372D4, v67);
    v201 = 71;
    v202._M_dataplus._M_p = v202._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v202, &byte_1AE37317[-23], byte_1AE37317, v68);
    std::_Hashtable<ReportType,std::pair<ReportType const,std::string>,std::allocator<std::pair<ReportType const,std::string>>,std::__detail::_Select1st,std::equal_to<ReportType>,std::hash<ReportType>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_Hashtable<std::pair<ReportType const,std::string> const*>(
      &reportTypeEnumToStr(ReportType,std::string &)::m._M_h,
      &__f,
      &__l,
      0LL,
      &__h1,
      &__h2,
      &__h,
      &__eq,
      &__exk,
      &__a);
    __cxa_guard_release(&`guard variable for'reportTypeEnumToStr(ReportType,std::string &)::m);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_map<ReportType,std::string>::~unordered_map,
      &reportTypeEnumToStr(ReportType,std::string &)::m,
      &_dso_handle);
    p_l = &__l;
    while ( 1 )
    {
      if ( p_l == &__f )
        goto LABEL_4;
      --p_l;
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)&p_l->second;
      if ( *(_BYTE *)(((unsigned __int64)&p_l->second >> 3) + 0x7FFF8000) )
        break;
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)p_l->second._M_dataplus._M_p;
      if ( M_p != &p_l->second._anon_0 )
LABEL_12:
        operator delete(M_p);
    }
    __asan_report_load8(M_p);
    goto LABEL_12;
  }
LABEL_4:
  v4._M_cur = std::_Hashtable<ReportType,std::pair<ReportType const,std::string>,std::allocator<std::pair<ReportType const,std::string>>,std::__detail::_Select1st,std::equal_to<ReportType>,std::hash<ReportType>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::find(
                &reportTypeEnumToStr(ReportType,std::string &)::m._M_h,
                (const std::_Hashtable<ReportType,std::pair<const ReportType,std::string >,std::allocator<std::pair<const ReportType,std::string > >,std::__detail::_Select1st,std::equal_to<ReportType>,std::hash<ReportType>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::key_type *)(p_second + 32))._M_cur;
  if ( v4._M_cur )
  {
    std::string::_M_assign(report_string, &v4._M_cur->_M_storage._M_storage.1 + 1);
    result = 0;
  }
  else
  {
    result = -1;
  }
  if ( &__l.second == (std::string *)p_second )
  {
    *(_QWORD *)((p_second >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_second = 1172321806LL;
    *(_QWORD *)((p_second >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 158: range 0000000014E32530-0000000014E32E38
void __fastcall MonitorReport::MonitorReport(MonitorReport *const this)
{
  std::forward_iterator_tag v1; // cl
  common::tools::SafeQueue<std::shared_ptr<MonitorValue> > *p_monitor_queue; // rbp
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r12
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v4; // r13
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v5; // r14
  MonitorReport *v6; // rbx
  char v7; // al
  char v8; // al
  char v9; // al
  char v10; // al
  std::forward_iterator_tag v11; // cl
  std::string *p_host_port; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v13; // r15
  char v14; // al
  std::forward_iterator_tag v15; // cl
  std::string *p_monitor_str_format; // rdi
  std::forward_iterator_tag v17; // cl
  std::string *p_uri_base; // rdi
  std::forward_iterator_tag v19; // cl
  std::string *p_lable_string_base; // rdi
  void *p_thread_group; // rdi
  void *p_M_map_size; // rdi
  std::mutex *p_max_size; // rdi
  char v24; // al
  struct _Unwind_Exception *v25; // rbp
  unsigned __int64 p_M_finish; // rdi
  __int64 v27; // rcx
  unsigned __int64 i; // rax
  std::_Vector_base<std::thread>::pointer M_start; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v31; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v32; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v33; // rdi
  std::string::pointer v34; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v35; // rdi
  std::string::pointer v36; // rdi
  std::string::pointer v37; // rdi
  std::string::pointer v38; // rdi

  v6 = this;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store1(this);
LABEL_19:
    __asan_report_store1(this);
    goto LABEL_20;
  }
  this->is_init_ = 0;
  this = (MonitorReport *const)((char *)this + 1);
  v7 = *(_BYTE *)(((unsigned __int64)&v6->is_run_ >> 3) + 0x7FFF8000);
  if ( v7 <= (((unsigned __int8)v6 + 1) & 7) && v7 )
    goto LABEL_19;
  v6->is_run_ = 0;
  this = (MonitorReport *const)&v6->region_name_;
  p_anon_0 = &v6->region_name_._anon_0;
  if ( *(_BYTE *)(((unsigned __int64)&v6->region_name_ >> 3) + 0x7FFF8000) )
  {
LABEL_20:
    __asan_report_store8(this);
    goto LABEL_21;
  }
  v6->region_name_._M_dataplus._M_p = (std::string::pointer)p_anon_0;
  this = (MonitorReport *const)&v6->region_name_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v6->region_name_._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_21:
    __asan_report_store8(this);
LABEL_22:
    __asan_report_store1(this);
    goto LABEL_23;
  }
  v6->region_name_._M_string_length = 0LL;
  this = (MonitorReport *const)&v6->region_name_._anon_0;
  v8 = *(_BYTE *)(((unsigned __int64)&v6->region_name_._anon_0 >> 3) + 0x7FFF8000);
  if ( v8 <= (((unsigned __int8)v6 + 24) & 7) && v8 )
    goto LABEL_22;
  v6->region_name_._anon_0._M_local_buf[0] = 0;
  this = (MonitorReport *const)&v6->app_name_;
  v4 = &v6->app_name_._anon_0;
  if ( *(_BYTE *)(((unsigned __int64)&v6->app_name_ >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    __asan_report_store8(this);
    goto LABEL_24;
  }
  v6->app_name_._M_dataplus._M_p = (std::string::pointer)v4;
  this = (MonitorReport *const)&v6->app_name_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v6->app_name_._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_store8(this);
LABEL_25:
    __asan_report_store1(this);
    goto LABEL_26;
  }
  v6->app_name_._M_string_length = 0LL;
  this = (MonitorReport *const)&v6->app_name_._anon_0;
  v9 = *(_BYTE *)(((unsigned __int64)&v6->app_name_._anon_0 >> 3) + 0x7FFF8000);
  if ( v9 <= (((unsigned __int8)v6 + 56) & 7) && v9 )
    goto LABEL_25;
  v6->app_name_._anon_0._M_local_buf[0] = 0;
  this = (MonitorReport *const)&v6->app_id_str_;
  v5 = &v6->app_id_str_._anon_0;
  if ( *(_BYTE *)(((unsigned __int64)&v6->app_id_str_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_store8(this);
    goto LABEL_27;
  }
  v6->app_id_str_._M_dataplus._M_p = (std::string::pointer)v5;
  this = (MonitorReport *const)&v6->app_id_str_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v6->app_id_str_._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_store8(this);
LABEL_28:
    __asan_report_store1(this);
    goto LABEL_29;
  }
  v6->app_id_str_._M_string_length = 0LL;
  this = (MonitorReport *const)&v6->app_id_str_._anon_0;
  v10 = *(_BYTE *)(((unsigned __int64)&v6->app_id_str_._anon_0 >> 3) + 0x7FFF8000);
  if ( v10 <= (((unsigned __int8)v6 + 88) & 7) && v10 )
    goto LABEL_28;
  v6->app_id_str_._anon_0._M_local_buf[0] = 0;
  this = (MonitorReport *const)&v6->host_ip_;
  if ( !*(_BYTE *)(((unsigned __int64)&v6->host_ip_ >> 3) + 0x7FFF8000) )
  {
    v6->host_ip_._M_dataplus._M_p = v6->host_ip_._anon_0._M_local_buf;
    std::string::_M_construct<char const*>((std::string *const)this, &byte_1AE360E9[-9], byte_1AE360E9, v1);
    goto LABEL_30;
  }
LABEL_29:
  __asan_report_store8(this);
LABEL_30:
  p_host_port = &v6->host_port_;
  v13 = &v6->host_port_._anon_0;
  if ( *(_BYTE *)(((unsigned __int64)&v6->host_port_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_host_port);
    goto LABEL_37;
  }
  v6->host_port_._M_dataplus._M_p = (std::string::pointer)v13;
  p_host_port = (std::string *)&v6->host_port_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&v6->host_port_._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8(p_host_port);
LABEL_38:
    __asan_report_store1(p_host_port);
    goto LABEL_39;
  }
  v6->host_port_._M_string_length = 0LL;
  p_host_port = (std::string *)&v6->host_port_._anon_0;
  v14 = *(_BYTE *)(((unsigned __int64)&v6->host_port_._anon_0 >> 3) + 0x7FFF8000);
  if ( v14 <= (((unsigned __int8)v6 - 104) & 7) && v14 )
    goto LABEL_38;
  v6->host_port_._anon_0._M_local_buf[0] = 0;
  p_host_port = (std::string *)&v6->monitor_str_format_ex_;
  if ( !*(_BYTE *)(((unsigned __int64)&v6->monitor_str_format_ex_ >> 3) + 0x7FFF8000) )
  {
    v6->monitor_str_format_ex_._M_dataplus._M_p = v6->monitor_str_format_ex_._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(p_host_port, &byte_1AE36155[-53], byte_1AE36155, v11);
    goto LABEL_40;
  }
LABEL_39:
  __asan_report_store8(p_host_port);
LABEL_40:
  p_monitor_str_format = (std::string *)&v6->monitor_str_format_;
  if ( *(_BYTE *)(((unsigned __int64)&v6->monitor_str_format_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_monitor_str_format);
  }
  else
  {
    v6->monitor_str_format_._M_dataplus._M_p = v6->monitor_str_format_._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(p_monitor_str_format, &byte_1AE3618C[-12], byte_1AE3618C, v15);
  }
  p_uri_base = &v6->uri_base_;
  if ( *(_BYTE *)(((unsigned __int64)&v6->uri_base_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_uri_base);
  }
  else
  {
    v6->uri_base_._M_dataplus._M_p = v6->uri_base_._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(p_uri_base, &byte_1AE361D4[-20], byte_1AE361D4, v17);
  }
  p_lable_string_base = &v6->lable_string_base_;
  if ( *(_BYTE *)(((unsigned __int64)&v6->lable_string_base_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_lable_string_base);
  }
  else
  {
    v6->lable_string_base_._M_dataplus._M_p = v6->lable_string_base_._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(p_lable_string_base, byte_1AE36200, byte_1AE36200, v19);
  }
  p_thread_group = &v6->thread_group_;
  if ( *(_BYTE *)(((unsigned __int64)&v6->thread_group_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(p_thread_group);
    goto LABEL_66;
  }
  v6->thread_group_.thread_vec_._M_impl._M_start = 0LL;
  p_thread_group = &v6->thread_group_.thread_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&v6->thread_group_.thread_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_66:
    __asan_report_store8(p_thread_group);
    goto LABEL_67;
  }
  v6->thread_group_.thread_vec_._M_impl._M_finish = 0LL;
  p_thread_group = &v6->thread_group_.thread_vec_._M_impl._M_end_of_storage;
  if ( *(_BYTE *)(((unsigned __int64)&v6->thread_group_.thread_vec_._M_impl._M_end_of_storage >> 3) + 0x7FFF8000) )
  {
LABEL_67:
    __asan_report_store8(p_thread_group);
LABEL_68:
    __asan_report_store_n(p_thread_group, 40LL);
    goto LABEL_69;
  }
  v6->thread_group_.thread_vec_._M_impl._M_end_of_storage = 0LL;
  p_thread_group = &v6->thread_group_.thread_mu_;
  if ( *(_BYTE *)((((unsigned __int64)&v6->thread_group_.thread_mu_._M_mutex.__align + 39) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&v6->thread_group_.thread_mu_._M_mutex.__align + 39) >> 3) + 0x7FFF8000) <= (((unsigned __int8)v6 + 103) & 7)
    || *(char *)(((unsigned __int64)&v6->thread_group_.thread_mu_ >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_68;
  }
  v6->thread_group_.thread_mu_._M_mutex.__align = 0LL;
  *(&v6->thread_group_.thread_mu_._M_mutex.__align + 1) = 0LL;
  *(&v6->thread_group_.thread_mu_._M_mutex.__align + 2) = 0LL;
  v6->thread_group_.thread_mu_._M_mutex.__data.__list.__prev = 0LL;
  v6->thread_group_.thread_mu_._M_mutex.__data.__list.__next = 0LL;
  p_monitor_queue = &v6->monitor_queue_;
  if ( *(_BYTE *)(((unsigned __int64)&v6->monitor_queue_ >> 3) + 0x7FFF8000) )
  {
LABEL_69:
    p_M_map_size = p_monitor_queue;
    __asan_report_store8(p_monitor_queue);
    goto LABEL_70;
  }
  v6->monitor_queue_.queue_.c._M_impl._M_map = 0LL;
  p_M_map_size = &v6->monitor_queue_.queue_.c._M_impl._M_map_size;
  if ( *(_BYTE *)(((unsigned __int64)&v6->monitor_queue_.queue_.c._M_impl._M_map_size >> 3) + 0x7FFF8000) )
  {
LABEL_70:
    __asan_report_store8(p_M_map_size);
    goto LABEL_71;
  }
  v6->monitor_queue_.queue_.c._M_impl._M_map_size = 0LL;
  p_M_map_size = &v6->monitor_queue_.queue_.c._M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&v6->monitor_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_71:
    __asan_report_store8(p_M_map_size);
    goto LABEL_72;
  }
  v6->monitor_queue_.queue_.c._M_impl._M_start._M_cur = 0LL;
  p_M_map_size = &v6->monitor_queue_.queue_.c._M_impl._M_start._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&v6->monitor_queue_.queue_.c._M_impl._M_start._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_72:
    __asan_report_store8(p_M_map_size);
    goto LABEL_73;
  }
  v6->monitor_queue_.queue_.c._M_impl._M_start._M_first = 0LL;
  p_M_map_size = &v6->monitor_queue_.queue_.c._M_impl._M_start._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&v6->monitor_queue_.queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_73:
    __asan_report_store8(p_M_map_size);
    goto LABEL_74;
  }
  v6->monitor_queue_.queue_.c._M_impl._M_start._M_last = 0LL;
  p_M_map_size = &v6->monitor_queue_.queue_.c._M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v6->monitor_queue_.queue_.c._M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_74:
    __asan_report_store8(p_M_map_size);
    goto LABEL_75;
  }
  v6->monitor_queue_.queue_.c._M_impl._M_start._M_node = 0LL;
  p_M_map_size = &v6->monitor_queue_.queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&v6->monitor_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_75:
    __asan_report_store8(p_M_map_size);
    goto LABEL_76;
  }
  v6->monitor_queue_.queue_.c._M_impl._M_finish._M_cur = 0LL;
  p_M_map_size = &v6->monitor_queue_.queue_.c._M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&v6->monitor_queue_.queue_.c._M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_76:
    __asan_report_store8(p_M_map_size);
    goto LABEL_77;
  }
  v6->monitor_queue_.queue_.c._M_impl._M_finish._M_first = 0LL;
  p_M_map_size = &v6->monitor_queue_.queue_.c._M_impl._M_finish._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&v6->monitor_queue_.queue_.c._M_impl._M_finish._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_77:
    __asan_report_store8(p_M_map_size);
    goto LABEL_78;
  }
  v6->monitor_queue_.queue_.c._M_impl._M_finish._M_last = 0LL;
  p_M_map_size = &v6->monitor_queue_.queue_.c._M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v6->monitor_queue_.queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_78:
    __asan_report_store8(p_M_map_size);
    goto LABEL_79;
  }
  v6->monitor_queue_.queue_.c._M_impl._M_finish._M_node = 0LL;
  std::_Deque_base<std::shared_ptr<MonitorValue>>::_M_initialize_map(&v6->monitor_queue_.queue_.c, 0LL);
LABEL_79:
  p_max_size = (std::mutex *)&p_monitor_queue->max_size_;
  v24 = *(_BYTE *)(((unsigned __int64)&p_monitor_queue->max_size_ >> 3) + 0x7FFF8000);
  if ( v24 && v24 <= 3 )
  {
    __asan_report_store4(p_max_size);
    goto LABEL_85;
  }
  p_monitor_queue->max_size_ = 0;
  p_max_size = &p_monitor_queue->queue_mu_;
  if ( *(_BYTE *)((((unsigned __int64)&p_monitor_queue->queue_mu_._M_mutex.__align + 39) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&p_monitor_queue->queue_mu_._M_mutex.__align + 39) >> 3) + 0x7FFF8000) <= (((unsigned __int8)p_monitor_queue + 127) & 7)
    || *(char *)(((unsigned __int64)&p_monitor_queue->queue_mu_ >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_85:
    v25 = (struct _Unwind_Exception *)__asan_report_store_n(p_max_size, 40LL);
    p_M_finish = (unsigned __int64)&v6->thread_group_;
    if ( *(_BYTE *)(((unsigned __int64)&v6->thread_group_.thread_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      p_M_finish = (unsigned __int64)&v6->thread_group_.thread_vec_._M_impl._M_finish;
      __asan_report_load8(&v6->thread_group_.thread_vec_._M_impl._M_finish);
    }
    v27 = *(_QWORD *)(p_M_finish + 8);
    if ( *(_BYTE *)((p_M_finish >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_M_finish);
    for ( i = (unsigned __int64)v6->thread_group_.thread_vec_._M_impl._M_start; v27 != i; i += 8LL )
    {
      if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
      {
        p_M_finish = i;
        i = __asan_report_load8(i);
      }
      if ( *(_QWORD *)i )
      {
        __asan_handle_no_return(p_M_finish);
        std::terminate();
      }
    }
    if ( *(_BYTE *)((p_M_finish >> 3) + 0x7FFF8000) )
      __asan_report_load8(p_M_finish);
    M_start = v6->thread_group_.thread_vec_._M_impl._M_start;
    if ( M_start )
      operator delete(M_start);
    if ( *(_BYTE *)(((unsigned __int64)&v6->lable_string_base_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v6->lable_string_base_);
    M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6->lable_string_base_._M_dataplus._M_p;
    if ( &v6->lable_string_base_._anon_0 != M_p )
      operator delete(M_p);
    while ( *(_BYTE *)(((unsigned __int64)&v6->uri_base_ >> 3) + 0x7FFF8000) )
      v25 = (struct _Unwind_Exception *)__asan_report_load8(&v6->uri_base_);
    v31 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6->uri_base_._M_dataplus._M_p;
    if ( &v6->uri_base_._anon_0 != v31 )
      operator delete(v31);
    while ( *(_BYTE *)(((unsigned __int64)&v6->monitor_str_format_ >> 3) + 0x7FFF8000) )
      v25 = (struct _Unwind_Exception *)__asan_report_load8(&v6->monitor_str_format_);
    v32 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6->monitor_str_format_._M_dataplus._M_p;
    if ( &v6->monitor_str_format_._anon_0 != v32 )
      operator delete(v32);
    while ( *(_BYTE *)(((unsigned __int64)&v6->monitor_str_format_ex_ >> 3) + 0x7FFF8000) )
      v25 = (struct _Unwind_Exception *)__asan_report_load8(&v6->monitor_str_format_ex_);
    v33 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6->monitor_str_format_ex_._M_dataplus._M_p;
    if ( &v6->monitor_str_format_ex_._anon_0 != v33 )
      operator delete(v33);
    while ( *(_BYTE *)(((unsigned __int64)&v6->host_port_ >> 3) + 0x7FFF8000) )
      v25 = (struct _Unwind_Exception *)__asan_report_load8(&v6->host_port_);
    v34 = v6->host_port_._M_dataplus._M_p;
    if ( v34 != (std::string::pointer)v13 )
      operator delete(v34);
    if ( *(_BYTE *)(((unsigned __int64)&v6->host_ip_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v6->host_ip_);
    v35 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v6->host_ip_._M_dataplus._M_p;
    if ( v35 != &v6->host_ip_._anon_0 )
      operator delete(v35);
    while ( *(_BYTE *)(((unsigned __int64)&v6->app_id_str_ >> 3) + 0x7FFF8000) )
      v25 = (struct _Unwind_Exception *)__asan_report_load8(&v6->app_id_str_);
    v36 = v6->app_id_str_._M_dataplus._M_p;
    if ( v5 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v36 )
      operator delete(v36);
    if ( *(_BYTE *)(((unsigned __int64)&v6->app_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v6->app_name_);
    v37 = v6->app_name_._M_dataplus._M_p;
    if ( v4 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v37 )
      operator delete(v37);
    if ( *(_BYTE *)(((unsigned __int64)&v6->region_name_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v6->region_name_);
    v38 = v6->region_name_._M_dataplus._M_p;
    if ( p_anon_0 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v38 )
      operator delete(v38);
    __asan_handle_no_return(v38);
    _Unwind_Resume(v25);
  }
  p_monitor_queue->queue_mu_._M_mutex.__align = 0LL;
  *(&p_monitor_queue->queue_mu_._M_mutex.__align + 1) = 0LL;
  *(&p_monitor_queue->queue_mu_._M_mutex.__align + 2) = 0LL;
  p_monitor_queue->queue_mu_._M_mutex.__data.__list.__prev = 0LL;
  p_monitor_queue->queue_mu_._M_mutex.__data.__list.__next = 0LL;
};

// Line 161: range 0000000014E2F8E8-0000000014E2FD95
void __fastcall MonitorReport::~MonitorReport(MonitorReport *const this)
{
  unsigned __int64 v2; // r12
  _DWORD *v3; // r13
  std::_Deque_base<std::shared_ptr<MonitorValue>>::iterator *p_M_finish; // rdi
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Elt_pointer M_last; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 p_thread_group; // rdi
  std::_Vector_base<std::thread>::pointer *n; // rax
  std::_Vector_base<std::thread>::pointer M_finish; // rdx
  unsigned __int64 i; // rax
  __int64 v12; // rax
  std::_Vector_base<std::thread>::pointer M_start; // rdi
  MonitorReport *M_p; // rdi
  MonitorReport *v15; // rdi
  MonitorReport *v16; // rdi
  MonitorReport *v17; // rdi
  MonitorReport *v18; // rdi
  MonitorReport *v19; // rdi
  MonitorReport *v20; // rdi
  MonitorReport *v21; // rdi
  MonitorReport *v22; // rdi
  std::deque<std::shared_ptr<MonitorValue>>::iterator v23; // [rsp-20h] [rbp-128h]
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Elt_pointer M_first; // [rsp+8h] [rbp-100h]
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer M_node; // [rsp+18h] [rbp-F0h]
  __m128i v26; // [rsp+20h] [rbp-E8h] BYREF
  __m128i v27; // [rsp+30h] [rbp-D8h]
  char v28[200]; // [rsp+40h] [rbp-C8h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v12 = __asan_stack_malloc_2(160LL);
    if ( v12 )
      v2 = v12;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 6 __last 96 32 7 __first";
  *(_QWORD *)(v2 + 16) = MonitorReport::~MonitorReport;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218959118;
  v3[536862724] = -202116109;
  p_M_finish = &this->monitor_queue_.queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)((((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this - 73) & 7)
    || *(char *)(((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load_n(p_M_finish, 32LL);
LABEL_12:
    n = (std::_Vector_base<std::thread>::pointer *)__asan_report_load_n(p_M_finish, 32LL);
    goto LABEL_13;
  }
  v26 = _mm_loadu_si128((const __m128i *)&this->monitor_queue_.queue_.c._M_impl._M_finish);
  v27 = _mm_loadu_si128((const __m128i *)&this->monitor_queue_.queue_.c._M_impl._M_finish._M_last);
  p_M_finish = &this->monitor_queue_.queue_.c._M_impl._M_start;
  if ( *(_BYTE *)((((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)((((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3) + 0x7FFF8000) <= (((unsigned __int8)this - 105) & 7)
    || *(char *)(((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) < 0 )
  {
    goto LABEL_12;
  }
  M_first = this->monitor_queue_.queue_.c._M_impl._M_start._M_first;
  M_last = this->monitor_queue_.queue_.c._M_impl._M_start._M_last;
  M_node = this->monitor_queue_.queue_.c._M_impl._M_start._M_node;
  *(_QWORD *)(v2 + 96) = this->monitor_queue_.queue_.c._M_impl._M_start._M_cur;
  *(_QWORD *)(v2 + 104) = M_first;
  *(_QWORD *)(v2 + 112) = M_last;
  *(_QWORD *)(v2 + 120) = M_node;
  *(__m128i *)(v2 + 32) = _mm_load_si128(&v26);
  v6 = v27.m128i_i64[1];
  v7 = v27.m128i_i64[0];
  *(_QWORD *)(v2 + 48) = v27.m128i_i64[0];
  *(_QWORD *)(v2 + 56) = v6;
  *(_OWORD *)&v23._M_last = __PAIR128__(v6, v7);
  *(_OWORD *)&v23._M_cur = *(_OWORD *)(v2 + 32);
  std::deque<std::shared_ptr<MonitorValue>>::_M_destroy_data_aux(
    &this->monitor_queue_.queue_.c,
    *(std::deque<std::shared_ptr<MonitorValue>>::iterator *)(v2 + 96),
    v23);
  std::_Deque_base<std::shared_ptr<MonitorValue>>::~_Deque_base(&this->monitor_queue_.queue_.c);
  p_thread_group = (unsigned __int64)&this->thread_group_;
  n = &this->thread_group_.thread_vec_._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_group_.thread_vec_._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_13:
    p_thread_group = (unsigned __int64)n;
    __asan_report_load8(n);
    goto LABEL_14;
  }
  M_finish = this->thread_group_.thread_vec_._M_impl._M_finish;
  if ( *(_BYTE *)((p_thread_group >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    i = __asan_report_load8(p_thread_group);
    goto LABEL_15;
  }
  for ( i = (unsigned __int64)this->thread_group_.thread_vec_._M_impl._M_start;
        M_finish != (std::_Vector_base<std::thread>::pointer)i;
        i += 8LL )
  {
    if ( *(_BYTE *)((i >> 3) + 0x7FFF8000) )
    {
      p_thread_group = i;
      __asan_report_load8(i);
LABEL_20:
      __asan_handle_no_return(p_thread_group);
      std::terminate();
    }
LABEL_15:
    if ( *(_QWORD *)i )
      goto LABEL_20;
  }
  if ( *(_BYTE *)((p_thread_group >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_thread_group);
LABEL_54:
    __asan_report_load8(p_thread_group);
LABEL_55:
    __asan_report_load8(p_thread_group);
LABEL_56:
    __asan_report_load8(p_thread_group);
LABEL_57:
    __asan_report_load8(p_thread_group);
LABEL_58:
    __asan_report_load8(p_thread_group);
LABEL_59:
    __asan_report_load8(p_thread_group);
LABEL_60:
    __asan_report_load8(p_thread_group);
LABEL_61:
    __asan_report_load8(p_thread_group);
LABEL_62:
    __asan_report_load8(p_thread_group);
    goto LABEL_63;
  }
  M_start = this->thread_group_.thread_vec_._M_impl._M_start;
  if ( M_start )
    operator delete(M_start);
  p_thread_group = (unsigned __int64)&this->lable_string_base_;
  if ( *(_BYTE *)(((unsigned __int64)&this->lable_string_base_ >> 3) + 0x7FFF8000) )
    goto LABEL_54;
  M_p = (MonitorReport *)this->lable_string_base_._M_dataplus._M_p;
  if ( M_p != (MonitorReport *)&this->lable_string_base_._anon_0 )
    operator delete(M_p);
  p_thread_group = (unsigned __int64)&this->uri_base_;
  if ( *(_BYTE *)(((unsigned __int64)&this->uri_base_ >> 3) + 0x7FFF8000) )
    goto LABEL_55;
  v15 = (MonitorReport *)this->uri_base_._M_dataplus._M_p;
  if ( v15 != (MonitorReport *)&this->uri_base_._anon_0 )
    operator delete(v15);
  p_thread_group = (unsigned __int64)&this->monitor_str_format_;
  if ( *(_BYTE *)(((unsigned __int64)&this->monitor_str_format_ >> 3) + 0x7FFF8000) )
    goto LABEL_56;
  v16 = (MonitorReport *)this->monitor_str_format_._M_dataplus._M_p;
  if ( v16 != (MonitorReport *)&this->monitor_str_format_._anon_0 )
    operator delete(v16);
  p_thread_group = (unsigned __int64)&this->monitor_str_format_ex_;
  if ( *(_BYTE *)(((unsigned __int64)&this->monitor_str_format_ex_ >> 3) + 0x7FFF8000) )
    goto LABEL_57;
  v17 = (MonitorReport *)this->monitor_str_format_ex_._M_dataplus._M_p;
  if ( v17 != (MonitorReport *)&this->monitor_str_format_ex_._anon_0 )
    operator delete(v17);
  p_thread_group = (unsigned __int64)&this->host_port_;
  if ( *(_BYTE *)(((unsigned __int64)&this->host_port_ >> 3) + 0x7FFF8000) )
    goto LABEL_58;
  v18 = (MonitorReport *)this->host_port_._M_dataplus._M_p;
  if ( v18 != (MonitorReport *)&this->host_port_._anon_0 )
    operator delete(v18);
  p_thread_group = (unsigned __int64)&this->host_ip_;
  if ( *(_BYTE *)(((unsigned __int64)&this->host_ip_ >> 3) + 0x7FFF8000) )
    goto LABEL_59;
  v19 = (MonitorReport *)this->host_ip_._M_dataplus._M_p;
  if ( v19 != (MonitorReport *)&this->host_ip_._anon_0 )
    operator delete(v19);
  p_thread_group = (unsigned __int64)&this->app_id_str_;
  if ( *(_BYTE *)(((unsigned __int64)&this->app_id_str_ >> 3) + 0x7FFF8000) )
    goto LABEL_60;
  v20 = (MonitorReport *)this->app_id_str_._M_dataplus._M_p;
  if ( v20 != (MonitorReport *)&this->app_id_str_._anon_0 )
    operator delete(v20);
  p_thread_group = (unsigned __int64)&this->app_name_;
  if ( *(_BYTE *)(((unsigned __int64)&this->app_name_ >> 3) + 0x7FFF8000) )
    goto LABEL_61;
  v21 = (MonitorReport *)this->app_name_._M_dataplus._M_p;
  if ( v21 != (MonitorReport *)&this->app_name_._anon_0 )
    operator delete(v21);
  p_thread_group = (unsigned __int64)&this->region_name_;
  if ( *(_BYTE *)(((unsigned __int64)&this->region_name_ >> 3) + 0x7FFF8000) )
    goto LABEL_62;
  v22 = (MonitorReport *)this->region_name_._M_dataplus._M_p;
  if ( v22 != (MonitorReport *)&this->region_name_._anon_0 )
    operator delete(v22);
  if ( v28 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    return;
  }
LABEL_63:
  *(_QWORD *)v2 = 1172321806LL;
  *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
};

// Line 167: range 0000000014E3173C-0000000014E3252B
int32_t __fastcall MonitorReport::init(
        MonitorReport *const this,
        common::tools::PTree *pt,
        const std::string *app_name,
        const uint32_t app_id)
{
  unsigned __int64 v6; // r13
  _DWORD *v7; // r14
  std::forward_iterator_tag v8; // cl
  __int64 v9; // rax
  std::string::pointer M_p; // rsi
  unsigned __int64 v11; // rcx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_region_name; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v14; // rax
  char v15; // al
  std::string::size_type M_string_length; // rdi
  std::string::size_type *p_M_string_length; // rax
  std::string::size_type *v18; // rdi
  char v19; // al
  char v20; // al
  char v21; // al
  std::forward_iterator_tag v22; // cl
  std::forward_iterator_tag v23; // cl
  std::string::pointer v24; // rsi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_host_port; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v26; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v27; // rax
  char v28; // al
  std::string::size_type v29; // rdi
  std::string::size_type *v30; // rax
  std::string::size_type *v31; // rdi
  char v32; // al
  char v33; // al
  char v34; // al
  __int64 v35; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v36; // r15
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *p_cur; // rdi
  char *cur; // rdi
  size_t v39; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v40; // rdi
  char *v41; // rdi
  size_t v42; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v43; // rdi
  char *v44; // rdi
  size_t v45; // r12
  const char *v46; // rsi
  __int64 v47; // rdx
  std::forward_iterator_tag v48; // cl
  void *v49; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v50; // rdi
  char *v51; // rsi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v52; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v53; // rax
  char v54; // al
  void *v55; // rdi
  struct _Unwind_Exception *v56; // rbx
  void *v57; // rdi
  std::string::size_type v58; // rdi
  std::string::size_type *v59; // rax
  std::string::size_type *v60; // rdi
  char v61; // al
  char v62; // al
  char v63; // al
  void *v64; // rdi
  std::string::size_type *v65; // rdi
  void *p_app_name; // rdi
  std::string::size_type *v67; // rdi
  void *p_app_id_str; // rdi
  std::string v70; // [rsp+0h] [rbp-168h]
  std::string::size_type v71; // [rsp+20h] [rbp-148h]
  std::string::size_type M_allocated_capacity; // [rsp+28h] [rbp-140h]
  std::string path; // [rsp+30h] [rbp-138h] BYREF
  std::string v74; // [rsp+50h] [rbp-118h] BYREF
  std::string child_name; // [rsp+70h] [rbp-F8h] BYREF
  char v76[216]; // [rsp+90h] [rbp-D8h] BYREF

  v70._M_string_length = (std::string::size_type)app_name;
  HIDWORD(v70._M_dataplus._M_p) = app_id;
  v6 = (unsigned __int64)v76;
  v70._anon_0._M_allocated_capacity = (std::string::size_type)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_2(160LL);
    if ( v9 )
      v6 = v9;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 48 4 6 app_id 64 8 13 region_pt:168 96 16 21 monitor_report_pt:170 128 16 2 os";
  *(_QWORD *)(v6 + 16) = MonitorReport::init;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -219021312;
  v7[536862724] = -202178560;
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(
    &child_name,
    &byte_1AE35EAF[-15],
    byte_1AE35EAF,
    (std::forward_iterator_tag)app_id);
  common::tools::PTree::getChild(pt, &child_name);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, &byte_1AE35EEE[-14], byte_1AE35EEE, v8);
  M_p = (std::string::pointer)(v6 + 64);
  common::tools::PTree::get<std::string>(&v74, (const common::tools::PTree *const)(v6 + 64), &child_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->region_name_ >> 3) + 0x7FFF8000) )
  {
    p_region_name = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)&this->region_name_;
    __asan_report_load8(&this->region_name_);
LABEL_24:
    if ( !v74._M_string_length )
      goto LABEL_27;
    if ( v74._M_string_length != 1 )
    {
      memcpy(p_region_name, M_p, v74._M_string_length);
      goto LABEL_27;
    }
    v20 = *(_BYTE *)(((unsigned __int64)M_p >> 3) + 0x7FFF8000);
    if ( v20 <= ((unsigned __int8)M_p & 7) && v20 )
    {
      p_region_name = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_p;
      __asan_report_load1(M_p);
    }
    else
    {
      v21 = *(_BYTE *)(((unsigned __int64)p_region_name >> 3) + 0x7FFF8000);
      LOBYTE(v11) = (unsigned __int8)p_region_name & 7;
      if ( v21 > ((unsigned __int8)p_region_name & 7) || !v21 )
      {
        p_region_name->_M_local_buf[0] = *M_p;
LABEL_27:
        M_string_length = v74._M_string_length;
        p_M_string_length = &this->region_name_._M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&this->region_name_._M_string_length >> 3) + 0x7FFF8000) )
        {
          this->region_name_._M_string_length = v74._M_string_length;
          v18 = (std::string::size_type *)&this->region_name_._M_dataplus._M_p[M_string_length];
          v19 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
          if ( v19 > ((unsigned __int8)v18 & 7) || !v19 )
          {
            *(_BYTE *)v18 = 0;
            goto LABEL_16;
          }
          goto LABEL_39;
        }
LABEL_38:
        v18 = p_M_string_length;
        __asan_report_store8(p_M_string_length);
LABEL_39:
        p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__asan_report_store1(v18);
LABEL_40:
        __asan_report_load8(p_anon_0);
        goto LABEL_41;
      }
    }
    p_M_string_length = (std::string::size_type *)__asan_report_store1(p_region_name);
    goto LABEL_38;
  }
  p_region_name = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->region_name_._M_dataplus._M_p;
  M_p = v74._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v74._M_dataplus._M_p == &v74._anon_0 )
    goto LABEL_24;
  if ( p_region_name != &this->region_name_._anon_0 )
  {
    p_anon_0 = &this->region_name_._anon_0;
    if ( !*(_BYTE *)(((unsigned __int64)&this->region_name_._anon_0 >> 3) + 0x7FFF8000) )
    {
      *(&v70._anon_0._M_allocated_capacity + 1) = this->region_name_._anon_0._M_allocated_capacity;
      goto LABEL_12;
    }
    goto LABEL_40;
  }
LABEL_41:
  p_region_name = 0LL;
LABEL_12:
  this->region_name_._M_dataplus._M_p = M_p;
  if ( *(_BYTE *)(((unsigned __int64)&this->region_name_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(&this->region_name_._M_string_length);
    goto LABEL_43;
  }
  this->region_name_._M_string_length = v74._M_string_length;
  v14 = &this->region_name_._anon_0;
  v11 = (unsigned __int64)&this->region_name_._anon_0 >> 3;
  if ( *(_BYTE *)(v11 + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_store8(v14);
    goto LABEL_44;
  }
  this->region_name_._anon_0._M_allocated_capacity = v74._anon_0._M_allocated_capacity;
  if ( !p_region_name )
  {
LABEL_44:
    v74._M_dataplus._M_p = v74._anon_0._M_local_buf;
    goto LABEL_16;
  }
  v74._M_dataplus._M_p = (std::string::pointer)p_region_name;
  v74._anon_0._M_allocated_capacity = *(&v70._anon_0._M_allocated_capacity + 1);
LABEL_16:
  v74._M_string_length = 0LL;
  v15 = *(_BYTE *)(((unsigned __int64)v74._M_dataplus._M_p >> 3) + 0x7FFF8000);
  if ( v15 <= ((__int64)v74._M_dataplus._M_p & 7) && v15 )
  {
    __asan_report_store1(v74._M_dataplus._M_p);
  }
  else
  {
    *v74._M_dataplus._M_p = 0;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v74._M_dataplus._M_p != &v74._anon_0 )
      operator delete(v74._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
      operator delete(child_name._M_dataplus._M_p);
    child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(
      &child_name,
      &byte_1AE35F32[-18],
      byte_1AE35F32,
      (std::forward_iterator_tag)v11);
  }
  common::tools::PTree::getChildOptional(pt, &child_name);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  if ( !*(_BYTE *)(v6 + 104) )
    goto LABEL_90;
  v74._M_dataplus._M_p = v74._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v74, "1056", "", v22);
  path._M_dataplus._M_p = path._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&path, &byte_1AE35FAE[-14], byte_1AE35FAE, v23);
  v24 = (std::string::pointer)(v6 + 96);
  common::tools::PTree::get<std::string>(&child_name, (const common::tools::PTree *const)(v6 + 96), &path, v70);
  if ( *(_BYTE *)(((unsigned __int64)&this->host_port_ >> 3) + 0x7FFF8000) )
  {
    p_host_port = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)&this->host_port_;
    __asan_report_load8(&this->host_port_);
LABEL_68:
    if ( !child_name._M_string_length )
      goto LABEL_71;
    if ( child_name._M_string_length != 1 )
    {
      memcpy(p_host_port, v24, child_name._M_string_length);
      goto LABEL_71;
    }
    v33 = *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000);
    if ( v33 <= ((unsigned __int8)v24 & 7) && v33 )
    {
      p_host_port = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v24;
      __asan_report_load1(v24);
    }
    else
    {
      v34 = *(_BYTE *)(((unsigned __int64)p_host_port >> 3) + 0x7FFF8000);
      if ( v34 > ((unsigned __int8)p_host_port & 7) || !v34 )
      {
        p_host_port->_M_local_buf[0] = *v24;
LABEL_71:
        v29 = child_name._M_string_length;
        v30 = &this->host_port_._M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&this->host_port_._M_string_length >> 3) + 0x7FFF8000) )
        {
          this->host_port_._M_string_length = child_name._M_string_length;
          v31 = (std::string::size_type *)&this->host_port_._M_dataplus._M_p[v29];
          v32 = *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000);
          if ( v32 > ((unsigned __int8)v31 & 7) || !v32 )
          {
            *(_BYTE *)v31 = 0;
            goto LABEL_58;
          }
          goto LABEL_83;
        }
LABEL_82:
        v31 = v30;
        __asan_report_store8(v30);
LABEL_83:
        v26 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__asan_report_store1(v31);
LABEL_84:
        __asan_report_load8(v26);
        goto LABEL_85;
      }
    }
    v30 = (std::string::size_type *)__asan_report_store1(p_host_port);
    goto LABEL_82;
  }
  p_host_port = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->host_port_._M_dataplus._M_p;
  v24 = child_name._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p == &child_name._anon_0 )
    goto LABEL_68;
  if ( p_host_port != &this->host_port_._anon_0 )
  {
    v26 = &this->host_port_._anon_0;
    if ( !*(_BYTE *)(((unsigned __int64)&this->host_port_._anon_0 >> 3) + 0x7FFF8000) )
    {
      M_allocated_capacity = this->host_port_._anon_0._M_allocated_capacity;
      goto LABEL_54;
    }
    goto LABEL_84;
  }
LABEL_85:
  p_host_port = 0LL;
LABEL_54:
  this->host_port_._M_dataplus._M_p = v24;
  if ( *(_BYTE *)(((unsigned __int64)&this->host_port_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(&this->host_port_._M_string_length);
  }
  else
  {
    this->host_port_._M_string_length = child_name._M_string_length;
    v27 = &this->host_port_._anon_0;
    if ( !*(_BYTE *)(((unsigned __int64)&this->host_port_._anon_0 >> 3) + 0x7FFF8000) )
    {
      this->host_port_._anon_0._M_allocated_capacity = child_name._anon_0._M_allocated_capacity;
      if ( p_host_port )
      {
        child_name._M_dataplus._M_p = (std::string::pointer)p_host_port;
        child_name._anon_0._M_allocated_capacity = M_allocated_capacity;
        goto LABEL_58;
      }
      goto LABEL_88;
    }
  }
  __asan_report_store8(v27);
LABEL_88:
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
LABEL_58:
  child_name._M_string_length = 0LL;
  v28 = *(_BYTE *)(((unsigned __int64)child_name._M_dataplus._M_p >> 3) + 0x7FFF8000);
  if ( v28 > ((__int64)child_name._M_dataplus._M_p & 7) || !v28 )
  {
    *child_name._M_dataplus._M_p = 0;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
      operator delete(child_name._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
      operator delete(path._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v74._M_dataplus._M_p != &v74._anon_0 )
      operator delete(v74._M_dataplus._M_p);
    goto LABEL_66;
  }
  __asan_report_store1(child_name._M_dataplus._M_p);
LABEL_90:
  if ( !*(_BYTE *)(((unsigned __int64)&this->host_port_._M_string_length >> 3) + 0x7FFF8000) )
  {
    std::string::_M_replace(&this->host_port_, 0LL, this->host_port_._M_string_length, "1056", 4LL);
LABEL_66:
    std::string::_M_assign(&this->app_name_, v70._M_string_length);
    goto LABEL_93;
  }
  __asan_report_load8(&this->host_port_._M_string_length);
LABEL_93:
  *(_DWORD *)(v6 + 48) = HIDWORD(v70._M_dataplus._M_p);
  *(_QWORD *)(v6 + 128) = 0LL;
  *(_QWORD *)(v6 + 136) = 0LL;
  v35 = operator new[](0x1000uLL);
  *(_QWORD *)(v6 + 128) = v35;
  *(_QWORD *)(v6 + 136) = v35;
  v36 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v6 + 128),
          WORD2(v70._M_dataplus._M_p) & 0x3FF);
  if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
  {
    p_cur = v36;
    __asan_report_load8(v36);
    goto LABEL_101;
  }
  p_cur = (common::tools::StringStream<common::tools::FixedBuffer<4096> > *)&v36->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v36->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_101:
    __asan_report_load8(p_cur);
    goto LABEL_102;
  }
  cur = v36->buffer_.cur_;
  v39 = LODWORD(v36->buffer_.data_) + 4096 - (_DWORD)cur != 0LL;
  memcpy(cur, &unk_1AE35FE0, v39);
  v36->buffer_.cur_ += v39;
  v36 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          v36,
          (HIDWORD(v70._M_dataplus._M_p) >> 10) & 0xF);
  if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
  {
LABEL_102:
    v40 = v36;
    __asan_report_load8(v36);
    goto LABEL_103;
  }
  v40 = (common::tools::StringStream<common::tools::FixedBuffer<4096> > *)&v36->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v36->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_103:
    __asan_report_load8(v40);
    goto LABEL_104;
  }
  v41 = v36->buffer_.cur_;
  v42 = LODWORD(v36->buffer_.data_) + 4096 - (_DWORD)v41 != 0LL;
  memcpy(v41, &unk_1AE35FE0, v42);
  v36->buffer_.cur_ += v42;
  v36 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
          v36,
          (HIDWORD(v70._M_dataplus._M_p) >> 14) & 0x3FFF);
  if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
  {
LABEL_104:
    v43 = v36;
    __asan_report_load8(v36);
    goto LABEL_105;
  }
  v43 = (common::tools::StringStream<common::tools::FixedBuffer<4096> > *)&v36->buffer_.cur_;
  if ( !*(_BYTE *)(((unsigned __int64)&v36->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
    v44 = v36->buffer_.cur_;
    v45 = LODWORD(v36->buffer_.data_) + 4096 - (_DWORD)v44 != 0LL;
    memcpy(v44, &unk_1AE35FE0, v45);
    v36->buffer_.cur_ += v45;
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v36, HIDWORD(v70._M_dataplus._M_p) >> 28);
    v46 = *(const char **)(v6 + 128);
    v47 = (int)(*(_QWORD *)(v6 + 136) - (_DWORD)v46);
    child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&child_name, v46, &v46[v47], v48);
    goto LABEL_106;
  }
LABEL_105:
  __asan_report_load8(v43);
LABEL_106:
  v49 = *(void **)(v6 + 128);
  if ( v49 )
    operator delete[](v49);
  if ( *(_BYTE *)(((unsigned __int64)&this->app_id_str_ >> 3) + 0x7FFF8000) )
  {
    v56 = (struct _Unwind_Exception *)__asan_report_load8(&this->app_id_str_);
    v57 = *(void **)(v6 + 128);
    if ( v57 )
      operator delete[](v57);
    if ( *(_BYTE *)(v6 + 104) )
    {
      *(_BYTE *)(v6 + 104) = 0;
      common::tools::PTree::~PTree((common::tools::PTree *const)(v6 + 96));
    }
    common::tools::PTree::~PTree((common::tools::PTree *const)(v6 + 64));
    __asan_handle_no_return(v6 + 64);
    _Unwind_Resume(v56);
  }
  v50 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->app_id_str_._M_dataplus._M_p;
  v51 = child_name._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p == &child_name._anon_0 )
  {
    if ( !child_name._M_string_length )
      goto LABEL_132;
    if ( child_name._M_string_length != 1 )
    {
      memcpy(v50, child_name._M_dataplus._M_p, child_name._M_string_length);
      goto LABEL_132;
    }
    v62 = *(_BYTE *)(((unsigned __int64)child_name._M_dataplus._M_p >> 3) + 0x7FFF8000);
    if ( v62 <= ((__int64)child_name._M_dataplus._M_p & 7) && v62 )
    {
      v50 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p;
      __asan_report_load1(child_name._M_dataplus._M_p);
    }
    else
    {
      v63 = *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000);
      if ( v63 > ((__int64)this->app_id_str_._M_dataplus._M_p & 7) || !v63 )
      {
        v50->_M_local_buf[0] = *child_name._M_dataplus._M_p;
LABEL_132:
        v58 = child_name._M_string_length;
        v59 = &this->app_id_str_._M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&this->app_id_str_._M_string_length >> 3) + 0x7FFF8000) )
        {
          this->app_id_str_._M_string_length = child_name._M_string_length;
          v60 = (std::string::size_type *)&this->app_id_str_._M_dataplus._M_p[v58];
          v61 = *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000);
          if ( v61 > ((unsigned __int8)v60 & 7) || !v61 )
          {
            *(_BYTE *)v60 = 0;
            goto LABEL_117;
          }
          goto LABEL_144;
        }
LABEL_143:
        v60 = v59;
        __asan_report_store8(v59);
LABEL_144:
        v52 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__asan_report_store1(v60);
LABEL_145:
        __asan_report_load8(v52);
        goto LABEL_146;
      }
    }
    v59 = (std::string::size_type *)__asan_report_store1(v50);
    goto LABEL_143;
  }
  if ( v50 != &this->app_id_str_._anon_0 )
  {
    v52 = &this->app_id_str_._anon_0;
    if ( !*(_BYTE *)(((unsigned __int64)&this->app_id_str_._anon_0 >> 3) + 0x7FFF8000) )
    {
      v71 = this->app_id_str_._anon_0._M_allocated_capacity;
      goto LABEL_113;
    }
    goto LABEL_145;
  }
LABEL_146:
  v50 = 0LL;
LABEL_113:
  this->app_id_str_._M_dataplus._M_p = v51;
  if ( *(_BYTE *)(((unsigned __int64)&this->app_id_str_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(&this->app_id_str_._M_string_length);
    goto LABEL_148;
  }
  this->app_id_str_._M_string_length = child_name._M_string_length;
  v53 = &this->app_id_str_._anon_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->app_id_str_._anon_0 >> 3) + 0x7FFF8000) )
  {
LABEL_148:
    __asan_report_store8(v53);
    goto LABEL_149;
  }
  this->app_id_str_._anon_0._M_allocated_capacity = child_name._anon_0._M_allocated_capacity;
  if ( !v50 )
  {
LABEL_149:
    child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
    goto LABEL_117;
  }
  child_name._M_dataplus._M_p = (std::string::pointer)v50;
  child_name._anon_0._M_allocated_capacity = v71;
LABEL_117:
  child_name._M_string_length = 0LL;
  v54 = *(_BYTE *)(((unsigned __int64)child_name._M_dataplus._M_p >> 3) + 0x7FFF8000);
  if ( v54 <= ((__int64)child_name._M_dataplus._M_p & 7) && v54 )
  {
    __asan_report_store1(child_name._M_dataplus._M_p);
LABEL_151:
    v55 = this;
    __asan_report_store1(this);
    goto LABEL_152;
  }
  *child_name._M_dataplus._M_p = 0;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    goto LABEL_151;
  this->is_init_ = 1;
  v55 = &this->lable_string_base_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->lable_string_base_._M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_152:
    __asan_report_load8(v55);
LABEL_153:
    __asan_handle_no_return(v55);
    std::__throw_length_error("basic_string::append");
  }
  if ( 0x3FFFFFFFFFFFFFFFLL - this->lable_string_base_._M_string_length <= 0xC )
    goto LABEL_153;
  std::string::_M_append(&this->lable_string_base_, "/region_name/", 13LL);
  v64 = &this->region_name_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->region_name_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v64);
  }
  else
  {
    v64 = &this->region_name_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->region_name_ >> 3) + 0x7FFF8000) )
    {
      std::string::_M_append(
        &this->lable_string_base_,
        this->region_name_._M_dataplus._M_p,
        this->region_name_._M_string_length);
      goto LABEL_159;
    }
  }
  __asan_report_load8(v64);
LABEL_159:
  v65 = &this->lable_string_base_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->lable_string_base_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v65);
LABEL_163:
    __asan_handle_no_return(v65);
    std::__throw_length_error("basic_string::append");
  }
  if ( 0x3FFFFFFFFFFFFFFFLL - this->lable_string_base_._M_string_length <= 9 )
    goto LABEL_163;
  std::string::_M_append(&this->lable_string_base_, "/app_name/", 10LL);
  p_app_name = &this->app_name_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->app_name_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_app_name);
  }
  else
  {
    p_app_name = &this->app_name_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->app_name_ >> 3) + 0x7FFF8000) )
    {
      std::string::_M_append(
        &this->lable_string_base_,
        this->app_name_._M_dataplus._M_p,
        this->app_name_._M_string_length);
      goto LABEL_169;
    }
  }
  __asan_report_load8(p_app_name);
LABEL_169:
  v67 = &this->lable_string_base_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->lable_string_base_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(v67);
LABEL_173:
    __asan_handle_no_return(v67);
    std::__throw_length_error("basic_string::append");
  }
  if ( 0x3FFFFFFFFFFFFFFFLL - this->lable_string_base_._M_string_length <= 7 )
    goto LABEL_173;
  std::string::_M_append(&this->lable_string_base_, "/app_id/", 8LL);
  p_app_id_str = &this->app_id_str_._M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->app_id_str_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_app_id_str);
  }
  else
  {
    p_app_id_str = &this->app_id_str_;
    if ( !*(_BYTE *)(((unsigned __int64)&this->app_id_str_ >> 3) + 0x7FFF8000) )
    {
      std::string::_M_append(
        &this->lable_string_base_,
        this->app_id_str_._M_dataplus._M_p,
        this->app_id_str_._M_string_length);
      goto LABEL_179;
    }
  }
  __asan_report_load8(p_app_id_str);
LABEL_179:
  if ( *(_BYTE *)(v6 + 104) )
  {
    *(_BYTE *)(v6 + 104) = 0;
    common::tools::PTree::~PTree((common::tools::PTree *const)(v6 + 96));
  }
  common::tools::PTree::~PTree((common::tools::PTree *const)(v6 + 64));
  if ( v70._anon_0._M_allocated_capacity == v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return 0;
};

// Line 195: range 0000000014E30240-0000000014E30996
int32_t __fastcall MonitorReport::reload(MonitorReport *const this, common::tools::PTree *pt)
{
  std::forward_iterator_tag v2; // cl
  unsigned __int64 v5; // r12
  _DWORD *v6; // r14
  std::forward_iterator_tag v7; // cl
  __int64 v8; // rax
  std::string::pointer M_p; // rsi
  unsigned __int64 v10; // rcx
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_region_name; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v13; // rax
  char v14; // al
  std::string::size_type M_string_length; // rdi
  std::string::size_type *p_M_string_length; // rax
  std::string::size_type *v17; // rdi
  char v18; // al
  char v19; // al
  char v20; // al
  std::forward_iterator_tag v21; // cl
  std::forward_iterator_tag v22; // cl
  std::string::pointer v23; // rsi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_host_port; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v25; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v26; // rax
  char v27; // al
  std::string::size_type v29; // rdi
  std::string::size_type *v30; // rax
  std::string::size_type *v31; // rdi
  char v32; // al
  char v33; // al
  char v34; // al
  std::string *v35; // rdi
  std::string::size_type *v36; // rbx
  std::string v37; // [rsp+0h] [rbp-118h]
  std::string v38; // [rsp+20h] [rbp-F8h] BYREF
  std::string path; // [rsp+40h] [rbp-D8h] BYREF
  std::string child_name; // [rsp+60h] [rbp-B8h] BYREF
  char v41[152]; // [rsp+80h] [rbp-98h] BYREF

  v5 = (unsigned __int64)v41;
  v37._M_string_length = (std::string::size_type)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v5 = v8;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 8 13 region_pt:196 64 16 21 monitor_report_pt:198";
  *(_QWORD *)(v5 + 16) = MonitorReport::reload;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202178560;
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&child_name, &byte_1AE35EAF[-15], byte_1AE35EAF, v2);
  common::tools::PTree::getChild(pt, &child_name);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  path._M_dataplus._M_p = path._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&path, &byte_1AE35EEE[-14], byte_1AE35EEE, v7);
  M_p = (std::string::pointer)(v5 + 32);
  common::tools::PTree::get<std::string>(&child_name, (const common::tools::PTree *const)(v5 + 32), &path);
  if ( *(_BYTE *)(((unsigned __int64)&this->region_name_ >> 3) + 0x7FFF8000) )
  {
    p_region_name = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)&this->region_name_;
    __asan_report_load8(&this->region_name_);
LABEL_24:
    if ( !child_name._M_string_length )
      goto LABEL_27;
    if ( child_name._M_string_length != 1 )
    {
      memcpy(p_region_name, M_p, child_name._M_string_length);
      goto LABEL_27;
    }
    v19 = *(_BYTE *)(((unsigned __int64)M_p >> 3) + 0x7FFF8000);
    if ( v19 <= ((unsigned __int8)M_p & 7) && v19 )
    {
      p_region_name = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_p;
      __asan_report_load1(M_p);
    }
    else
    {
      v20 = *(_BYTE *)(((unsigned __int64)p_region_name >> 3) + 0x7FFF8000);
      LOBYTE(v10) = (unsigned __int8)p_region_name & 7;
      if ( v20 > ((unsigned __int8)p_region_name & 7) || !v20 )
      {
        p_region_name->_M_local_buf[0] = *M_p;
LABEL_27:
        M_string_length = child_name._M_string_length;
        p_M_string_length = &this->region_name_._M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&this->region_name_._M_string_length >> 3) + 0x7FFF8000) )
        {
          this->region_name_._M_string_length = child_name._M_string_length;
          v17 = (std::string::size_type *)&this->region_name_._M_dataplus._M_p[M_string_length];
          v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
          if ( v18 > ((unsigned __int8)v17 & 7) || !v18 )
          {
            *(_BYTE *)v17 = 0;
            goto LABEL_16;
          }
          goto LABEL_39;
        }
LABEL_38:
        v17 = p_M_string_length;
        __asan_report_store8(p_M_string_length);
LABEL_39:
        p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__asan_report_store1(v17);
LABEL_40:
        __asan_report_load8(p_anon_0);
        goto LABEL_41;
      }
    }
    p_M_string_length = (std::string::size_type *)__asan_report_store1(p_region_name);
    goto LABEL_38;
  }
  p_region_name = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->region_name_._M_dataplus._M_p;
  M_p = child_name._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p == &child_name._anon_0 )
    goto LABEL_24;
  if ( p_region_name != &this->region_name_._anon_0 )
  {
    p_anon_0 = &this->region_name_._anon_0;
    if ( !*(_BYTE *)(((unsigned __int64)&this->region_name_._anon_0 >> 3) + 0x7FFF8000) )
    {
      v37._anon_0._M_allocated_capacity = this->region_name_._anon_0._M_allocated_capacity;
      goto LABEL_12;
    }
    goto LABEL_40;
  }
LABEL_41:
  p_region_name = 0LL;
LABEL_12:
  this->region_name_._M_dataplus._M_p = M_p;
  if ( *(_BYTE *)(((unsigned __int64)&this->region_name_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(&this->region_name_._M_string_length);
    goto LABEL_43;
  }
  this->region_name_._M_string_length = child_name._M_string_length;
  v13 = &this->region_name_._anon_0;
  v10 = (unsigned __int64)&this->region_name_._anon_0 >> 3;
  if ( *(_BYTE *)(v10 + 0x7FFF8000) )
  {
LABEL_43:
    __asan_report_store8(v13);
    goto LABEL_44;
  }
  this->region_name_._anon_0._M_allocated_capacity = child_name._anon_0._M_allocated_capacity;
  if ( !p_region_name )
  {
LABEL_44:
    child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
    goto LABEL_16;
  }
  child_name._M_dataplus._M_p = (std::string::pointer)p_region_name;
  child_name._anon_0._M_allocated_capacity = v37._anon_0._M_allocated_capacity;
LABEL_16:
  child_name._M_string_length = 0LL;
  v14 = *(_BYTE *)(((unsigned __int64)child_name._M_dataplus._M_p >> 3) + 0x7FFF8000);
  if ( v14 <= ((__int64)child_name._M_dataplus._M_p & 7) && v14 )
  {
    __asan_report_store1(child_name._M_dataplus._M_p);
  }
  else
  {
    *child_name._M_dataplus._M_p = 0;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
      operator delete(child_name._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
      operator delete(path._M_dataplus._M_p);
    child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(
      &child_name,
      &byte_1AE35F32[-18],
      byte_1AE35F32,
      (std::forward_iterator_tag)v10);
  }
  common::tools::PTree::getChildOptional(pt, &child_name);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
    operator delete(child_name._M_dataplus._M_p);
  if ( !*(_BYTE *)(v5 + 72) )
    goto LABEL_93;
  path._M_dataplus._M_p = path._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&path, "1056", "", v21);
  v38._M_dataplus._M_p = v38._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v38, &byte_1AE35FAE[-14], byte_1AE35FAE, v22);
  v23 = (std::string::pointer)(v5 + 64);
  common::tools::PTree::get<std::string>(&child_name, (const common::tools::PTree *const)(v5 + 64), &v38, v37);
  if ( *(_BYTE *)(((unsigned __int64)&this->host_port_ >> 3) + 0x7FFF8000) )
  {
    p_host_port = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)&this->host_port_;
    __asan_report_load8(&this->host_port_);
LABEL_71:
    if ( !child_name._M_string_length )
      goto LABEL_74;
    if ( child_name._M_string_length != 1 )
    {
      memcpy(p_host_port, v23, child_name._M_string_length);
      goto LABEL_74;
    }
    v33 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
    if ( v33 <= ((unsigned __int8)v23 & 7) && v33 )
    {
      p_host_port = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v23;
      __asan_report_load1(v23);
    }
    else
    {
      v34 = *(_BYTE *)(((unsigned __int64)p_host_port >> 3) + 0x7FFF8000);
      if ( v34 > ((unsigned __int8)p_host_port & 7) || !v34 )
      {
        p_host_port->_M_local_buf[0] = *v23;
LABEL_74:
        v29 = child_name._M_string_length;
        v30 = &this->host_port_._M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&this->host_port_._M_string_length >> 3) + 0x7FFF8000) )
        {
          this->host_port_._M_string_length = child_name._M_string_length;
          v31 = (std::string::size_type *)&this->host_port_._M_dataplus._M_p[v29];
          v32 = *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000);
          if ( v32 > ((unsigned __int8)v31 & 7) || !v32 )
          {
            *(_BYTE *)v31 = 0;
            goto LABEL_58;
          }
          goto LABEL_86;
        }
LABEL_85:
        v31 = v30;
        __asan_report_store8(v30);
LABEL_86:
        v25 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__asan_report_store1(v31);
LABEL_87:
        __asan_report_load8(v25);
        goto LABEL_88;
      }
    }
    v30 = (std::string::size_type *)__asan_report_store1(p_host_port);
    goto LABEL_85;
  }
  p_host_port = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->host_port_._M_dataplus._M_p;
  v23 = child_name._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p == &child_name._anon_0 )
    goto LABEL_71;
  if ( p_host_port != &this->host_port_._anon_0 )
  {
    v25 = &this->host_port_._anon_0;
    if ( !*(_BYTE *)(((unsigned __int64)&this->host_port_._anon_0 >> 3) + 0x7FFF8000) )
    {
      *(&v37._anon_0._M_allocated_capacity + 1) = this->host_port_._anon_0._M_allocated_capacity;
      goto LABEL_54;
    }
    goto LABEL_87;
  }
LABEL_88:
  p_host_port = 0LL;
LABEL_54:
  this->host_port_._M_dataplus._M_p = v23;
  if ( *(_BYTE *)(((unsigned __int64)&this->host_port_._M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(&this->host_port_._M_string_length);
  }
  else
  {
    this->host_port_._M_string_length = child_name._M_string_length;
    v26 = &this->host_port_._anon_0;
    if ( !*(_BYTE *)(((unsigned __int64)&this->host_port_._anon_0 >> 3) + 0x7FFF8000) )
    {
      this->host_port_._anon_0._M_allocated_capacity = child_name._anon_0._M_allocated_capacity;
      if ( p_host_port )
      {
        child_name._M_dataplus._M_p = (std::string::pointer)p_host_port;
        child_name._anon_0._M_allocated_capacity = *(&v37._anon_0._M_allocated_capacity + 1);
        goto LABEL_58;
      }
      goto LABEL_91;
    }
  }
  __asan_report_store8(v26);
LABEL_91:
  child_name._M_dataplus._M_p = child_name._anon_0._M_local_buf;
LABEL_58:
  child_name._M_string_length = 0LL;
  v27 = *(_BYTE *)(((unsigned __int64)child_name._M_dataplus._M_p >> 3) + 0x7FFF8000);
  if ( v27 > ((__int64)child_name._M_dataplus._M_p & 7) || !v27 )
  {
    *child_name._M_dataplus._M_p = 0;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)child_name._M_dataplus._M_p != &child_name._anon_0 )
      operator delete(child_name._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v38._M_dataplus._M_p != &v38._anon_0 )
      operator delete(v38._M_dataplus._M_p);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)path._M_dataplus._M_p != &path._anon_0 )
      operator delete(path._M_dataplus._M_p);
LABEL_66:
    if ( !*(_BYTE *)(v5 + 72) )
      goto LABEL_67;
    goto LABEL_96;
  }
  __asan_report_store1(child_name._M_dataplus._M_p);
LABEL_93:
  v35 = &this->host_port_;
  v36 = &this->host_port_._M_string_length;
  if ( !*(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
  {
    std::string::_M_replace(v35, 0LL, v35->_M_string_length, "1056", 4LL);
    goto LABEL_66;
  }
  __asan_report_load8(v36);
LABEL_96:
  *(_BYTE *)(v5 + 72) = 0;
  common::tools::PTree::~PTree((common::tools::PTree *const)(v5 + 64));
LABEL_67:
  common::tools::PTree::~PTree((common::tools::PTree *const)(v5 + 32));
  if ( v37._M_string_length == v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return 0;
};

// Line 212: range 0000000014E3099C-0000000014E31739
void __fastcall MonitorReport::accumMonitorValue(
        MonitorReport *const this,
        std::queue<std::shared_ptr<MonitorValue>> *report_queue,
        MonitorReport::MonitorReportMap *report_value_map)
{
  std::_Rb_tree_node_base::_Base_ptr v3; // r13
  unsigned __int64 M_node; // r14
  double v5; // xmm0_8
  _DWORD *v7; // r15
  __int64 v8; // rax
  __int64 M_pi; // rax
  __int64 v10; // rdi
  char v11; // cl
  std::_Rb_tree<std::pair<ReportType,std::string >,std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> >,std::_Select1st<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > >,std::less<std::pair<ReportType,std::string > >,std::allocator<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > > >::iterator v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  char v15; // dl
  MonitorAccumType MonitorAccumType; // eax
  std::_Rb_tree_header *v17; // r13
  std::_Rb_tree_node_base::_Base_ptr *p_M_parent; // rdi
  std::_Rb_tree<std::pair<ReportType,std::string >,std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> >,std::_Select1st<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > >,std::less<std::pair<ReportType,std::string > >,std::allocator<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > > >::iterator v19; // rax
  std::_Rb_tree<std::pair<ReportType,std::string >,std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> >,std::_Select1st<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > >,std::less<std::pair<ReportType,std::string > >,std::allocator<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > > >::iterator v20; // r9
  std::_Rb_tree_color v21; // ecx
  char v22; // dl
  std::_Rb_tree_color M_color; // edx
  std::_Rb_tree_node_base::_Base_ptr *v24; // rdx
  size_t *v25; // rcx
  size_t *v26; // rdi
  size_t v27; // rcx
  int v28; // eax
  __int64 v29; // r13
  std::_Rb_tree_node_base::_Base_ptr *v30; // rdi
  std::_Rb_tree_node_base::_Base_ptr *v31; // rax
  char v32; // cl
  std::_Rb_tree_node_base::_Base_ptr v33; // rax
  std::_Rb_tree_node_base::_Base_ptr *v34; // rax
  std::_Rb_tree_node_base::_Base_ptr *v35; // rdi
  char v36; // cl
  signed __int32 M_parent; // eax
  unsigned __int64 v38; // rdi
  char *v39; // rdi
  std::_Rb_tree_node_base::_Base_ptr *v40; // rax
  char v41; // cl
  signed __int32 v42; // eax
  unsigned __int64 v43; // rdi
  volatile signed __int32 *v44; // rax
  char v45; // cl
  signed __int32 v46; // eax
  __int64 v47; // rax
  char v48; // dl
  char v49; // dl
  unsigned __int64 v50; // rdi
  volatile signed __int32 *v51; // rax
  char v52; // cl
  signed __int32 M_parent_high; // eax
  char v54; // dl
  char v55; // dl
  char v56; // dl
  std::_Deque_base<std::shared_ptr<MonitorValue>>::iterator *p_M_start; // rdi
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Elt_pointer v58; // rdx
  std::_Rb_tree_node_base::_Base_ptr *v59; // rax
  char v60; // cl
  signed __int32 v61; // eax
  std::_Deque_base<std::shared_ptr<MonitorValue>>::iterator *v62; // rdi
  char *v63; // rdi
  std::_Rb_tree_node_base::_Base_ptr *v64; // rax
  char v65; // cl
  signed __int32 v66; // eax
  void *p_M_finish; // rdi
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Elt_pointer M_cur; // rax
  volatile signed __int32 *v69; // rdx
  char v70; // cl
  unsigned __int64 v71; // rax
  char v72; // cl
  char v73; // dl
  unsigned __int64 v74; // rdi
  volatile signed __int32 *v75; // rax
  char v76; // cl
  signed __int32 v77; // eax
  char v78; // dl
  char v79; // dl
  unsigned __int64 v80; // rdi
  volatile signed __int32 *v81; // rax
  char v82; // cl
  signed __int32 v83; // eax
  unsigned __int64 v84; // rdi
  char v85; // dl
  struct _Unwind_Exception *v86; // rbx
  char *v87; // rdi
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v88; // rdi
  MonitorReport *v89; // [rsp+0h] [rbp-158h]
  std::_Rb_tree_iterator<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > >::_Base_ptr __pos; // [rsp+8h] [rbp-150h]
  unsigned __int64 v91; // [rsp+10h] [rbp-148h]
  std::_Rb_tree_node_base::_Base_ptr M_left; // [rsp+18h] [rbp-140h]
  std::tuple<> v93; // [rsp+3Fh] [rbp-119h] BYREF
  char v94[280]; // [rsp+40h] [rbp-118h] BYREF

  v89 = this;
  v91 = (unsigned __int64)v94;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(224LL);
    if ( v8 )
      v91 = v8;
  }
  *(_QWORD *)v91 = 1102416563LL;
  *(_QWORD *)(v91 + 8) = "4 48 8 6 __size 80 8 7 __osize 112 16 11 val_ptr:215 144 40 12 key_pair:216";
  *(_QWORD *)(v91 + 16) = MonitorReport::accumMonitorValue;
  v7 = (_DWORD *)(v91 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234881024;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862724] = 62194;
  v7[536862725] = -218103808;
  v7[536862726] = -202116109;
  while ( 1 )
  {
    p_M_finish = &report_queue->c._M_impl._M_finish;
    if ( *(_BYTE *)(((unsigned __int64)&report_queue->c._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_finish);
LABEL_6:
      __asan_report_load8(p_M_finish);
LABEL_7:
      __asan_report_load8(p_M_finish);
LABEL_8:
      __asan_report_load8(p_M_finish);
LABEL_9:
      M_pi = __asan_report_store4(p_M_finish);
      goto LABEL_10;
    }
    p_M_finish = &report_queue->c._M_impl._M_start;
    if ( *(_BYTE *)(((unsigned __int64)&report_queue->c._M_impl._M_start >> 3) + 0x7FFF8000) )
      goto LABEL_6;
    M_cur = report_queue->c._M_impl._M_start._M_cur;
    if ( M_cur == report_queue->c._M_impl._M_finish._M_cur )
      break;
    p_M_finish = report_queue->c._M_impl._M_start._M_cur;
    if ( *(_BYTE *)(((unsigned __int64)M_cur >> 3) + 0x7FFF8000) )
      goto LABEL_7;
    *(_QWORD *)(v91 + 112) = M_cur->_M_ptr;
    p_M_finish = &M_cur->_M_refcount;
    if ( *(_BYTE *)(((unsigned __int64)&M_cur->_M_refcount >> 3) + 0x7FFF8000) )
      goto LABEL_8;
    M_pi = (__int64)M_cur->_M_refcount._M_pi;
    *(_QWORD *)(v91 + 120) = M_pi;
    if ( !M_pi )
      goto LABEL_160;
    v69 = (volatile signed __int32 *)(M_pi + 8);
    if ( &_pthread_key_create )
    {
      p_M_finish = (void *)(M_pi + 8);
      v70 = *(_BYTE *)(((unsigned __int64)v69 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v69 & 7) + 3) < v70 || !v70 )
      {
        _InterlockedAdd(v69, 1u);
        goto LABEL_160;
      }
      goto LABEL_9;
    }
LABEL_10:
    v10 = M_pi + 8;
    v11 = *(_BYTE *)(((unsigned __int64)(M_pi + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((M_pi + 8) & 7) + 3) >= v11 && v11 )
    {
      __asan_report_load4(v10);
LABEL_14:
      v5 = __asan_report_load4(v10);
LABEL_15:
      __asan_report_load8(v10);
      goto LABEL_16;
    }
    ++*(_DWORD *)(M_pi + 8);
LABEL_160:
    v71 = *(_QWORD *)(v91 + 112);
    v10 = v71;
    v72 = *(_BYTE *)((v71 >> 3) + 0x7FFF8000);
    if ( (char)((v71 & 7) + 3) >= v72 && v72 )
      goto LABEL_14;
    *(_DWORD *)(v91 + 144) = *(_DWORD *)v71;
    *(_QWORD *)(v91 + 152) = v91 + 168;
    v10 = v71 + 16;
    if ( *(_BYTE *)(((v71 + 16) >> 3) + 0x7FFF8000) )
      goto LABEL_15;
    v10 = v71 + 24;
    if ( !*(_BYTE *)(((v71 + 24) >> 3) + 0x7FFF8000) )
    {
      std::string::_M_construct<char *>(
        (std::string *const)(v91 + 152),
        *(char **)(v71 + 16),
        (char *)(*(_QWORD *)(v71 + 24) + *(_QWORD *)(v71 + 16)),
        (std::forward_iterator_tag)v72);
      goto LABEL_17;
    }
LABEL_16:
    __asan_report_load8(v10);
LABEL_17:
    v12._M_node = std::_Rb_tree<std::pair<ReportType,std::string>,std::pair<std::pair<ReportType,std::string> const,std::shared_ptr<MonitorValue>>,std::_Select1st<std::pair<std::pair<ReportType,std::string> const,std::shared_ptr<MonitorValue>>>,std::less<std::pair<ReportType,std::string>>,std::allocator<std::pair<std::pair<ReportType,std::string> const,std::shared_ptr<MonitorValue>>>>::find(
                    &report_value_map->_M_t,
                    (const std::pair<ReportType,std::string > *)(v91 + 144))._M_node;
    if ( (std::_Rb_tree_header *)v12._M_node == &report_value_map->_M_t._M_impl.std::_Rb_tree_header )
    {
      v17 = &report_value_map->_M_t._M_impl.std::_Rb_tree_header;
      p_M_parent = &report_value_map->_M_t._M_impl._M_header._M_parent;
      if ( *(_BYTE *)(((unsigned __int64)&report_value_map->_M_t._M_impl._M_header._M_parent >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_M_parent);
LABEL_41:
        v5 = __asan_report_load4(p_M_parent);
        goto LABEL_42;
      }
      v19._M_node = std::_Rb_tree<std::pair<ReportType,std::string>,std::pair<std::pair<ReportType,std::string> const,std::shared_ptr<MonitorValue>>,std::_Select1st<std::pair<std::pair<ReportType,std::string> const,std::shared_ptr<MonitorValue>>>,std::less<std::pair<ReportType,std::string>>,std::allocator<std::pair<std::pair<ReportType,std::string> const,std::shared_ptr<MonitorValue>>>>::_M_lower_bound(
                      &report_value_map->_M_t,
                      (std::_Rb_tree<std::pair<ReportType,std::string >,std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> >,std::_Select1st<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > >,std::less<std::pair<ReportType,std::string > >,std::allocator<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > > >::_Link_type)report_value_map->_M_t._M_impl._M_header._M_parent,
                      &report_value_map->_M_t._M_impl._M_header,
                      (const std::pair<ReportType,std::string > *)(v91 + 144))._M_node;
      M_node = (unsigned __int64)v19._M_node;
      __pos = v19._M_node;
      if ( v17 != (std::_Rb_tree_header *)v19._M_node )
      {
        v21 = *(_DWORD *)(v91 + 144);
        p_M_parent = (std::_Rb_tree_node_base::_Base_ptr *)&v19._M_node[1];
        v22 = *(_BYTE *)(((unsigned __int64)&v19._M_node[1] >> 3) + 0x7FFF8000);
        if ( v22 && v22 <= 3 )
          goto LABEL_41;
        M_color = v19._M_node[1]._M_color;
        if ( v21 >= M_color )
        {
          if ( v21 > M_color )
            goto LABEL_48;
          v24 = &v19._M_node[1]._M_parent;
          v17 = *(std::_Rb_tree_header **)(v91 + 160);
          *(_QWORD *)(v91 + 48) = v17;
          p_M_parent = &v19._M_node[1]._M_left;
          if ( !*(_BYTE *)(((unsigned __int64)&v19._M_node[1]._M_left >> 3) + 0x7FFF8000) )
          {
            M_left = v19._M_node[1]._M_left;
            *(_QWORD *)(v91 + 80) = M_left;
            if ( v17 <= (std::_Rb_tree_header *)M_left )
            {
              v25 = (size_t *)(v91 + 48);
              goto LABEL_31;
            }
LABEL_43:
            v25 = (size_t *)(v91 + 80);
LABEL_31:
            v26 = v25;
            if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8(v25);
            }
            else
            {
              v27 = *v25;
              v26 = (size_t *)v24;
              if ( !*(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
              {
                if ( v27 )
                {
                  v28 = memcmp(*(const void **)(v91 + 152), v19._M_node[1]._M_parent, v27);
                  if ( v28 )
                  {
LABEL_38:
                    if ( v28 >= 0 )
                      goto LABEL_48;
                    goto LABEL_39;
                  }
                }
                v29 = (char *)v17 - (char *)M_left;
                if ( v29 <= 0x7FFFFFFF )
                {
                  if ( v29 < (__int64)0xFFFFFFFF80000000LL )
                    v28 = 0x80000000;
                  else
                    v28 = v29;
                  goto LABEL_38;
                }
LABEL_46:
                v28 = 0x7FFFFFFF;
                goto LABEL_38;
              }
            }
            __asan_report_load8(v26);
            goto LABEL_46;
          }
LABEL_42:
          v19._M_node = (std::_Rb_tree_iterator<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > >::_Base_ptr)__asan_report_load8(p_M_parent);
          goto LABEL_43;
        }
      }
LABEL_39:
      *(_QWORD *)(v91 + 80) = v91 + 144;
      M_node = (unsigned __int64)std::_Rb_tree<std::pair<ReportType,std::string>,std::pair<std::pair<ReportType,std::string> const,std::shared_ptr<MonitorValue>>,std::_Select1st<std::pair<std::pair<ReportType,std::string> const,std::shared_ptr<MonitorValue>>>,std::less<std::pair<ReportType,std::string>>,std::allocator<std::pair<std::pair<ReportType,std::string> const,std::shared_ptr<MonitorValue>>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::pair<ReportType,std::string> const&>,std::tuple<>>(
                                   &report_value_map->_M_t,
                                   (std::_Rb_tree<std::pair<ReportType,std::string >,std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> >,std::_Select1st<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > >,std::less<std::pair<ReportType,std::string > >,std::allocator<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > > >::const_iterator)__pos,
                                   &std::piecewise_construct,
                                   (std::tuple<const std::pair<ReportType,std::string >&> *)(v91 + 80),
                                   &v93,
                                   (const std::piecewise_construct_t *)v20._M_node,
                                   (std::tuple<const std::pair<ReportType,std::string >&> *)v89,
                                   (std::tuple<> *)__pos)._M_node;
LABEL_48:
      v3 = (std::_Rb_tree_node_base::_Base_ptr)(M_node + 72);
      v30 = (std::_Rb_tree_node_base::_Base_ptr *)(M_node + 72);
      if ( *(_BYTE *)(((M_node + 72) >> 3) + 0x7FFF8000) )
      {
        v5 = __asan_report_store8(v30);
LABEL_83:
        __asan_report_load8(v30);
LABEL_84:
        __asan_report_store4(v30);
        goto LABEL_85;
      }
      *(_QWORD *)(M_node + 72) = *(_QWORD *)(v91 + 112);
      M_node += 80LL;
      __pos = *(std::_Rb_tree_iterator<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > >::_Base_ptr *)(v91 + 120);
      v30 = &v3->_M_parent;
      if ( *(_BYTE *)(((unsigned __int64)&v3->_M_parent >> 3) + 0x7FFF8000) )
        goto LABEL_83;
      if ( __pos == v3->_M_parent )
        goto LABEL_64;
      if ( !__pos )
        goto LABEL_56;
      v31 = &__pos->_M_parent;
      if ( &_pthread_key_create )
      {
        v30 = &__pos->_M_parent;
        v32 = *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v31 & 7) + 3) < v32 || !v32 )
        {
          _InterlockedAdd((volatile signed __int32 *)v31, 1u);
          goto LABEL_56;
        }
        goto LABEL_84;
      }
LABEL_85:
      v35 = &__pos->_M_parent;
      v48 = *(_BYTE *)(((unsigned __int64)&__pos->_M_parent >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)__pos + 8) & 7) + 3) >= v48 && v48 )
      {
        v5 = __asan_report_load4(v35);
LABEL_89:
        __asan_report_store4(v35);
LABEL_90:
        v49 = *(_BYTE *)(((unsigned __int64)&M_left->_M_parent >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)M_left + 8) & 7) + 3) >= v49 && v49 )
        {
          v5 = __asan_report_load4(&M_left->_M_parent);
LABEL_94:
          v50 = (unsigned __int64)M_left;
          if ( *(_BYTE *)(((unsigned __int64)M_left >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(M_left);
          }
          else
          {
            v50 = *(_QWORD *)&M_left->_M_color + 16LL;
            if ( !*(_BYTE *)((v50 >> 3) + 0x7FFF8000) )
            {
              (*(void (__fastcall **)(std::_Rb_tree_node_base::_Base_ptr, double))(*(_QWORD *)&M_left->_M_color + 16LL))(
                M_left,
                v5);
              v51 = (volatile signed __int32 *)&M_left->_M_parent + 1;
              if ( &_pthread_key_create )
              {
                v50 = (unsigned __int64)&M_left->_M_parent + 4;
                v52 = *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000);
                if ( (char)(((unsigned __int8)v51 & 7) + 3) < v52 || !v52 )
                {
                  M_parent_high = _InterlockedExchangeAdd(v51, 0xFFFFFFFF);
LABEL_100:
                  if ( M_parent_high == 1 )
                  {
                    v38 = (unsigned __int64)M_left;
                    if ( *(_BYTE *)(((unsigned __int64)M_left >> 3) + 0x7FFF8000) )
                      goto LABEL_111;
                    v38 = *(_QWORD *)&M_left->_M_color + 24LL;
                    if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
                      goto LABEL_112;
                    (*(void (__fastcall **)(std::_Rb_tree_node_base::_Base_ptr))(*(_QWORD *)&M_left->_M_color + 24LL))(M_left);
                  }
                  goto LABEL_62;
                }
LABEL_106:
                __asan_report_store4(v50);
              }
              v38 = (unsigned __int64)&M_left->_M_parent + 4;
              v54 = *(_BYTE *)((((unsigned __int64)&M_left->_M_parent + 4) >> 3) + 0x7FFF8000);
              if ( (char)((((_BYTE)M_left + 12) & 7) + 3) >= v54 && v54 )
              {
                __asan_report_load4(v38);
LABEL_111:
                __asan_report_load8(v38);
LABEL_112:
                __asan_report_load8(v38);
LABEL_113:
                v5 = __asan_report_store8(v38);
                goto LABEL_114;
              }
              M_parent_high = HIDWORD(M_left->_M_parent);
              HIDWORD(M_left->_M_parent) = M_parent_high - 1;
              goto LABEL_100;
            }
          }
          __asan_report_load8(v50);
          goto LABEL_106;
        }
        M_parent = (signed __int32)M_left->_M_parent;
        LODWORD(M_left->_M_parent) = M_parent - 1;
        goto LABEL_61;
      }
      ++LODWORD(__pos->_M_parent);
LABEL_56:
      v33 = v3->_M_parent;
      M_left = v33;
      if ( !v33 )
        goto LABEL_62;
      v34 = &v33->_M_parent;
      if ( !&_pthread_key_create )
        goto LABEL_90;
      v35 = v34;
      v36 = *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v34 & 7) + 3) >= v36 && v36 )
        goto LABEL_89;
      M_parent = _InterlockedExchangeAdd((volatile signed __int32 *)v34, 0xFFFFFFFF);
LABEL_61:
      if ( M_parent == 1 )
        goto LABEL_94;
LABEL_62:
      v38 = M_node;
      M_node >>= 3;
      if ( *(_BYTE *)(M_node + 2147450880) )
        goto LABEL_113;
      v3->_M_parent = __pos;
LABEL_64:
      v39 = *(char **)(v91 + 152);
      if ( v39 != (char *)(v91 + 168) )
        operator delete(v39);
      v3 = *(std::_Rb_tree_node_base::_Base_ptr *)(v91 + 120);
      if ( v3 )
      {
        v40 = &v3->_M_parent;
        if ( !&_pthread_key_create )
          goto LABEL_115;
        v38 = (unsigned __int64)&v3->_M_parent;
        v41 = *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v40 & 7) + 3) < v41 || !v41 )
        {
          v42 = _InterlockedExchangeAdd((volatile signed __int32 *)v40, 0xFFFFFFFF);
          goto LABEL_71;
        }
LABEL_114:
        __asan_report_store4(v38);
LABEL_115:
        v43 = (unsigned __int64)&v3->_M_parent;
        v55 = *(_BYTE *)(((unsigned __int64)&v3->_M_parent >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v3 + 8) & 7) + 3) >= v55 && v55 )
        {
          v5 = __asan_report_load4(v43);
LABEL_119:
          __asan_report_load8(v43);
LABEL_120:
          __asan_report_load8(v43);
          goto LABEL_121;
        }
        v42 = (signed __int32)v3->_M_parent;
        LODWORD(v3->_M_parent) = v42 - 1;
LABEL_71:
        if ( v42 == 1 )
        {
          v43 = (unsigned __int64)v3;
          if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
            goto LABEL_119;
          v43 = *(_QWORD *)&v3->_M_color + 16LL;
          if ( *(_BYTE *)((v43 >> 3) + 0x7FFF8000) )
            goto LABEL_120;
          (*(void (__fastcall **)(std::_Rb_tree_node_base::_Base_ptr, double))(*(_QWORD *)&v3->_M_color + 16LL))(v3, v5);
          v44 = (volatile signed __int32 *)&v3->_M_parent + 1;
          if ( !&_pthread_key_create )
            goto LABEL_122;
          v43 = (unsigned __int64)&v3->_M_parent + 4;
          v45 = *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v44 & 7) + 3) < v45 || !v45 )
          {
            v46 = _InterlockedExchangeAdd(v44, 0xFFFFFFFF);
            goto LABEL_78;
          }
LABEL_121:
          __asan_report_store4(v43);
LABEL_122:
          v13 = (unsigned __int64)&v3->_M_parent + 4;
          v56 = *(_BYTE *)((((unsigned __int64)&v3->_M_parent + 4) >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v3 + 12) & 7) + 3) >= v56 && v56 )
          {
            __asan_report_load4(v13);
LABEL_126:
            __asan_report_load8(v13);
LABEL_127:
            __asan_report_load8(v13);
LABEL_128:
            __asan_report_load8(v13);
            goto LABEL_129;
          }
          v46 = HIDWORD(v3->_M_parent);
          HIDWORD(v3->_M_parent) = v46 - 1;
LABEL_78:
          if ( v46 == 1 )
          {
            v13 = (unsigned __int64)v3;
            if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
              goto LABEL_126;
            v47 = *(_QWORD *)&v3->_M_color;
            v13 = *(_QWORD *)&v3->_M_color + 24LL;
            if ( !*(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
              goto LABEL_81;
            goto LABEL_127;
          }
        }
      }
    }
    else
    {
      v13 = (unsigned __int64)&v12._M_node[2]._M_parent;
      if ( *(_BYTE *)(((unsigned __int64)&v12._M_node[2]._M_parent >> 3) + 0x7FFF8000) )
        goto LABEL_128;
      v3 = v12._M_node[2]._M_parent;
      v14 = *(_QWORD *)(v91 + 112);
      v13 = v14;
      v15 = *(_BYTE *)((v14 >> 3) + 0x7FFF8000);
      if ( !v15 || v15 > 3 )
      {
        MonitorAccumType = MonitorReport::getMonitorAccumType(v89, *(ReportType *)v14);
        goto LABEL_130;
      }
LABEL_129:
      v5 = __asan_report_load4(v13);
LABEL_130:
      MonitorValue::accumValue((MonitorValue *const)v3, *(MonitorValue **)(v91 + 112), MonitorAccumType);
      p_M_start = &report_queue->c._M_impl._M_start;
      if ( *(_BYTE *)(((unsigned __int64)&report_queue->c._M_impl._M_start >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_M_start);
LABEL_166:
        __asan_report_load8(p_M_start);
LABEL_167:
        __asan_report_load8(p_M_start);
        goto LABEL_168;
      }
      v58 = report_queue->c._M_impl._M_start._M_cur;
      p_M_start = (std::_Deque_base<std::shared_ptr<MonitorValue>>::iterator *)&report_queue->c._M_impl._M_start._M_last;
      if ( *(_BYTE *)(((unsigned __int64)&report_queue->c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
        goto LABEL_166;
      if ( v58 == report_queue->c._M_impl._M_start._M_last - 1 )
        goto LABEL_193;
      p_M_start = (std::_Deque_base<std::shared_ptr<MonitorValue>>::iterator *)&v58->_M_refcount;
      if ( *(_BYTE *)(((unsigned __int64)&v58->_M_refcount >> 3) + 0x7FFF8000) )
        goto LABEL_167;
      v3 = (std::_Rb_tree_node_base::_Base_ptr)v58->_M_refcount._M_pi;
      if ( !v3 )
        goto LABEL_140;
      v59 = &v3->_M_parent;
      if ( !&_pthread_key_create )
        goto LABEL_169;
      p_M_start = (std::_Deque_base<std::shared_ptr<MonitorValue>>::iterator *)&v3->_M_parent;
      v60 = *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v59 & 7) + 3) < v60 || !v60 )
      {
        v61 = _InterlockedExchangeAdd((volatile signed __int32 *)v59, 0xFFFFFFFF);
        goto LABEL_139;
      }
LABEL_168:
      __asan_report_store4(p_M_start);
LABEL_169:
      v73 = *(_BYTE *)(((unsigned __int64)&v3->_M_parent >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)v3 + 8) & 7) + 3) >= v73 && v73 )
      {
        v5 = __asan_report_load4(&v3->_M_parent);
        goto LABEL_173;
      }
      v61 = (signed __int32)v3->_M_parent;
      LODWORD(v3->_M_parent) = v61 - 1;
LABEL_139:
      if ( v61 != 1 )
        goto LABEL_140;
LABEL_173:
      v74 = (unsigned __int64)v3;
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v3);
LABEL_184:
        __asan_report_load8(v74);
LABEL_185:
        __asan_report_store4(v74);
LABEL_186:
        v62 = (std::_Deque_base<std::shared_ptr<MonitorValue>>::iterator *)((char *)&v3->_M_parent + 4);
        v78 = *(_BYTE *)((((unsigned __int64)&v3->_M_parent + 4) >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v3 + 12) & 7) + 3) >= v78 && v78 )
        {
          v5 = __asan_report_load4(v62);
LABEL_190:
          __asan_report_load8(v62);
LABEL_191:
          __asan_report_load8(v62);
LABEL_192:
          __asan_report_load8(v62);
LABEL_193:
          std::deque<std::shared_ptr<MonitorValue>>::_M_pop_front_aux(&report_queue->c);
          goto LABEL_142;
        }
        v77 = HIDWORD(v3->_M_parent);
        HIDWORD(v3->_M_parent) = v77 - 1;
        goto LABEL_179;
      }
      v74 = *(_QWORD *)&v3->_M_color + 16LL;
      if ( *(_BYTE *)((v74 >> 3) + 0x7FFF8000) )
        goto LABEL_184;
      (*(void (__fastcall **)(std::_Rb_tree_node_base::_Base_ptr, double))(*(_QWORD *)&v3->_M_color + 16LL))(v3, v5);
      v75 = (volatile signed __int32 *)&v3->_M_parent + 1;
      if ( !&_pthread_key_create )
        goto LABEL_186;
      v74 = (unsigned __int64)&v3->_M_parent + 4;
      v76 = *(_BYTE *)(((unsigned __int64)v75 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v75 & 7) + 3) >= v76 && v76 )
        goto LABEL_185;
      v77 = _InterlockedExchangeAdd(v75, 0xFFFFFFFF);
LABEL_179:
      if ( v77 == 1 )
      {
        v62 = (std::_Deque_base<std::shared_ptr<MonitorValue>>::iterator *)v3;
        if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
          goto LABEL_190;
        v62 = (std::_Deque_base<std::shared_ptr<MonitorValue>>::iterator *)(*(_QWORD *)&v3->_M_color + 24LL);
        if ( *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) )
          goto LABEL_191;
        (*(void (__fastcall **)(std::_Rb_tree_node_base::_Base_ptr))(*(_QWORD *)&v3->_M_color + 24LL))(v3);
      }
LABEL_140:
      v62 = &report_queue->c._M_impl._M_start;
      if ( *(_BYTE *)(((unsigned __int64)&report_queue->c._M_impl._M_start >> 3) + 0x7FFF8000) )
        goto LABEL_192;
      ++report_queue->c._M_impl._M_start._M_cur;
LABEL_142:
      v63 = *(char **)(v91 + 152);
      if ( v63 != (char *)(v91 + 168) )
        operator delete(v63);
      v3 = *(std::_Rb_tree_node_base::_Base_ptr *)(v91 + 120);
      if ( v3 )
      {
        v64 = &v3->_M_parent;
        if ( &_pthread_key_create )
        {
          v65 = *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v64 & 7) + 3) >= v65 && v65 )
          {
            __asan_report_store4(&v3->_M_parent);
            goto LABEL_195;
          }
          v66 = _InterlockedExchangeAdd((volatile signed __int32 *)v64, 0xFFFFFFFF);
LABEL_149:
          if ( v66 == 1 )
            goto LABEL_199;
        }
        else
        {
LABEL_195:
          v79 = *(_BYTE *)(((unsigned __int64)&v3->_M_parent >> 3) + 0x7FFF8000);
          if ( (char)((((_BYTE)v3 + 8) & 7) + 3) < v79 || !v79 )
          {
            v66 = (signed __int32)v3->_M_parent;
            LODWORD(v3->_M_parent) = v66 - 1;
            goto LABEL_149;
          }
          v5 = __asan_report_load4(&v3->_M_parent);
LABEL_199:
          v80 = (unsigned __int64)v3;
          if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load8(v3);
LABEL_210:
            __asan_report_load8(v80);
LABEL_211:
            __asan_report_store4(v80);
LABEL_212:
            v84 = (unsigned __int64)&v3->_M_parent + 4;
            v85 = *(_BYTE *)((((unsigned __int64)&v3->_M_parent + 4) >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)v3 + 12) & 7) + 3) >= v85 && v85 )
            {
              __asan_report_load4(v84);
LABEL_216:
              __asan_report_load8(v84);
LABEL_217:
              v86 = (struct _Unwind_Exception *)__asan_report_load8(v84);
              v87 = *(char **)(v91 + 152);
              if ( v87 != (char *)(v91 + 168) )
                operator delete(v87);
              v88 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v91 + 120);
              if ( v88 )
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v88);
              __asan_handle_no_return(v88);
              _Unwind_Resume(v86);
            }
            v83 = HIDWORD(v3->_M_parent);
            HIDWORD(v3->_M_parent) = v83 - 1;
            goto LABEL_205;
          }
          v80 = *(_QWORD *)&v3->_M_color + 16LL;
          if ( *(_BYTE *)((v80 >> 3) + 0x7FFF8000) )
            goto LABEL_210;
          (*(void (__fastcall **)(std::_Rb_tree_node_base::_Base_ptr, double))(*(_QWORD *)&v3->_M_color + 16LL))(v3, v5);
          v81 = (volatile signed __int32 *)&v3->_M_parent + 1;
          if ( !&_pthread_key_create )
            goto LABEL_212;
          v80 = (unsigned __int64)&v3->_M_parent + 4;
          v82 = *(_BYTE *)(((unsigned __int64)v81 >> 3) + 0x7FFF8000);
          if ( (char)(((unsigned __int8)v81 & 7) + 3) >= v82 && v82 )
            goto LABEL_211;
          v83 = _InterlockedExchangeAdd(v81, 0xFFFFFFFF);
LABEL_205:
          if ( v83 == 1 )
          {
            v84 = (unsigned __int64)v3;
            if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
              goto LABEL_216;
            v47 = *(_QWORD *)&v3->_M_color;
            v84 = *(_QWORD *)&v3->_M_color + 24LL;
            if ( *(_BYTE *)((v84 >> 3) + 0x7FFF8000) )
              goto LABEL_217;
LABEL_81:
            (*(void (__fastcall **)(std::_Rb_tree_node_base::_Base_ptr))(v47 + 24))(v3);
          }
        }
      }
    }
  }
  if ( v94 == (char *)v91 )
  {
    *(_QWORD *)((v91 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v91 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v91 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v91 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v91 = 1172321806LL;
    *(_QWORD *)((v91 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v91 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v91 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v91 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 231: range 0000000014E2E996-0000000014E2ECAF
void __fastcall MonitorReport::postProcessMonitorReportMap(
        MonitorReport *const this,
        MonitorReport::MonitorReportMap *report_map)
{
  std::_Rb_tree_node_base::_Base_ptr v2; // rbx
  std::_Rb_tree_header *v3; // rbp
  std::_Rb_tree_node_base::_Base_ptr M_left; // rax
  unsigned __int64 v6; // rax
  char v7; // dl
  std::_Rb_tree_node_base::_Base_ptr *p_M_parent; // rdi
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rcx
  char v10; // al
  unsigned int v11; // esi
  common::milog::MilogStringStream *p_cur; // rdi
  char v13; // dl
  common::milog::MilogStringStream *ostr; // rbp
  char *cur; // rdi
  size_t v16; // rbx
  common::milog::MiLogStream v17; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&report_map->_M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&report_map->_M_t._M_impl._M_header._M_left);
    goto LABEL_4;
  }
  M_left = report_map->_M_t._M_impl._M_header._M_left;
  v3 = &report_map->_M_t._M_impl.std::_Rb_tree_header;
  while ( 1 )
  {
    v2 = M_left;
    if ( M_left == (std::_Rb_tree_node_base::_Base_ptr)v3 )
      return;
    v6 = (unsigned __int64)&M_left[1];
    v7 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
    if ( v7 && v7 <= 3 )
    {
      __asan_report_load4(v6);
    }
    else
    {
LABEL_4:
      if ( MonitorReport::getMonitorAccumType(this, (ReportType)v2[1]._M_color) != MONITOR_ACCUM_AVG )
        goto LABEL_5;
    }
    p_M_parent = &v2[2]._M_parent;
    if ( *(_BYTE *)(((unsigned __int64)&v2[2]._M_parent >> 3) + 0x7FFF8000) )
      break;
    M_parent = v2[2]._M_parent;
    p_M_parent = &M_parent[1]._M_left;
    v10 = *(_BYTE *)(((unsigned __int64)&M_parent[1]._M_left >> 3) + 0x7FFF8000);
    if ( v10 && v10 <= 3 )
      goto LABEL_18;
    v11 = (unsigned int)M_parent[1]._M_left;
    if ( !v11 )
      goto LABEL_19;
    p_cur = (common::milog::MilogStringStream *)(&M_parent->_M_color + 1);
    v13 = *(_BYTE *)(((unsigned __int64)(&M_parent->_M_color + 1) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)M_parent + 4) & 7) + 3) >= v13 && v13 )
      goto LABEL_27;
    *((_DWORD *)&M_parent->_M_color + 1) /= v11;
LABEL_5:
    M_left = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(v2);
  }
  __asan_report_load8(p_M_parent);
LABEL_18:
  __asan_report_load4(p_M_parent);
LABEL_19:
  common::milog::MiLogStream::MiLogStream(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "src/utils/monitor_report.cpp",
    "postProcessMonitorReportMap",
    239);
  ostr = v17.ostr_;
  if ( *(_BYTE *)(((unsigned __int64)v17.ostr_ >> 3) + 0x7FFF8000) )
  {
    p_cur = v17.ostr_;
    __asan_report_load8(v17.ostr_);
    goto LABEL_26;
  }
  p_cur = (common::milog::MilogStringStream *)&v17.ostr_->buffer_.cur_;
  if ( *(_BYTE *)(((unsigned __int64)&v17.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(p_cur);
LABEL_27:
    __asan_report_load4(p_cur);
    MonitorReport::stop((MonitorReport *const)p_cur);
    return;
  }
  cur = v17.ostr_->buffer_.cur_;
  v16 = (size_t)&v17.ostr_->buffer_.data_[-(int)cur + 0x4000];
  if ( v16 > 0xF )
    v16 = 16LL;
  memcpy(cur, "value count is 0", v16);
  ostr->buffer_.cur_ += v16;
  common::milog::MiLogStream::~MiLogStream(&v17);
};

// Line 248: range 0000000014E33C3C-0000000014E34CD7
void __fastcall MonitorReport::reportValueToDb(MonitorReport *const this, MonitorReport::MonitorReportMap *report_map)
{
  std::_Rb_tree_node_base::_Base_ptr v2; // r13
  common::milog::MilogStringStream *ostr; // r15
  __m128i v4; // xmm0
  size_t v6; // rbp
  size_t v7; // rbx
  _DWORD *v8; // r14
  bool *p_is_run; // rdi
  char v10; // al
  __int64 v11; // rax
  std::_Rb_tree_node_base::_Base_ptr M_left; // rax
  unsigned __int64 v13; // rax
  int32_t v14; // eax
  std::_Rb_tree_node_base *p_M_parent; // rdi
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  char v17; // cl
  size_t v18; // rax
  std::forward_iterator_tag v19; // cl
  char *v20; // rdi
  char v21; // dl
  char *v22; // rdi
  unsigned __int64 p_host_port; // rsi
  size_t v24; // rdi
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  char v29; // dl
  char v30; // dl
  std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *M_ptr; // rax
  unsigned __int64 v32; // rax
  char v33; // dl
  char v34; // al
  char v35; // al
  common::milog::MilogStringStream *p_cur; // rdi
  char *cur; // rdi
  char *v38; // rdi
  char *v39; // rdi
  char *v40; // rdi
  unsigned int v41; // eax
  char *v42; // rdi
  char *v43; // rdi
  char *v44; // rdi
  char *v45; // rdi
  char *v46; // rdi
  char *v47; // rdi
  unsigned int v48; // eax
  void *v49; // rdi
  void *v50; // rdi
  void *v51; // rdi
  void *v52; // rdi
  void *v53; // rdi
  void *v54; // rdi
  void *v55; // rdi
  char v56; // dl
  unsigned int v57; // eax
  std::_Rb_tree_header *v58; // [rsp+8h] [rbp-480h]
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v59; // [rsp+10h] [rbp-478h]
  unsigned __int64 v60; // [rsp+18h] [rbp-470h]
  common::milog::MiLogStream v61; // [rsp+30h] [rbp-458h] BYREF
  common::milog::MiLogStream v62; // [rsp+50h] [rbp-438h] BYREF
  char v63[1048]; // [rsp+70h] [rbp-418h] BYREF

  v6 = (size_t)report_map;
  v60 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_4(992LL);
    if ( v11 )
      v60 = v11;
  }
  v7 = v60 + 992;
  *(_QWORD *)v60 = 1102416563LL;
  *(_QWORD *)(v60 + 8) = "7 48 8 20 sync_http_client:268 80 16 9 timer:280 112 32 19 report_type_str:259 176 32 16 post_c"
                         "ontent:267 240 88 12 response:279 368 240 11 request:269 672 256 10 buffer:258";
  *(_QWORD *)(v60 + 16) = MonitorReport::reportValueToDb;
  v8 = (_DWORD *)(v60 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234881024;
  v8[536862722] = 62194;
  v8[536862723] = 62194;
  v8[536862724] = -219021312;
  v8[536862725] = 62194;
  v8[536862726] = -219021312;
  v8[536862727] = 62194;
  v8[536862730] = -218959360;
  v8[536862731] = 62194;
  v8[536862739] = -218959118;
  v8[536862740] = -218959118;
  v8[536862749] = -202116109;
  v8[536862750] = -202116109;
  p_is_run = &this->is_run_;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000);
  if ( v10 <= (((unsigned __int8)this + 1) & 7) && v10 )
  {
    __asan_report_load1(p_is_run);
    goto LABEL_10;
  }
  if ( this->is_run_ )
  {
LABEL_10:
    MonitorReport::postProcessMonitorReportMap(this, report_map);
    if ( *(_BYTE *)(((unsigned __int64)&report_map->_M_t._M_impl._M_header._M_left >> 3) + 0x7FFF8000) )
    {
      v13 = __asan_report_load8(&report_map->_M_t._M_impl._M_header._M_left);
      goto LABEL_13;
    }
    M_left = report_map->_M_t._M_impl._M_header._M_left;
    v58 = &report_map->_M_t._M_impl.std::_Rb_tree_header;
    while ( 1 )
    {
      v2 = M_left;
      if ( M_left == (std::_Rb_tree_node_base::_Base_ptr)v58 )
        goto LABEL_5;
      *(_QWORD *)(v7 - 880) = v7 - 864;
      *(_QWORD *)(v7 - 872) = 0LL;
      *(_BYTE *)(v7 - 864) = 0;
      v13 = (unsigned __int64)&M_left[1];
      v56 = *(_BYTE *)((v13 >> 3) + 0x7FFF8000);
      if ( v56 && v56 <= 3 )
LABEL_13:
        *(double *)v4.m128i_i64 = __asan_report_load4(v13);
      else
        v14 = reportTypeEnumToStr((const ReportType)v2[1]._M_color, (std::string *)(v7 - 880));
      if ( v14 )
        break;
      p_M_parent = (std::_Rb_tree_node_base::_Base_ptr)((char *)v2 + 72);
      if ( *(_BYTE *)(((unsigned __int64)&v2[2]._M_parent >> 3) + 0x7FFF8000) )
        goto LABEL_33;
      M_parent = v2[2]._M_parent;
      p_M_parent = (std::_Rb_tree_node_base *)&M_parent->_M_parent;
      if ( *(_BYTE *)(((unsigned __int64)&M_parent->_M_parent >> 3) + 0x7FFF8000) )
        goto LABEL_34;
      p_M_parent = (std::_Rb_tree_node_base *)(&M_parent->_M_color + 1);
      v17 = *(_BYTE *)(((unsigned __int64)(&M_parent->_M_color + 1) >> 3) + 0x7FFF8000);
      if ( (char)((((_BYTE)M_parent + 4) & 7) + 3) >= v17 && v17 )
        goto LABEL_35;
      p_M_parent = (std::_Rb_tree_node_base *)&this->monitor_str_format_;
      if ( !*(_BYTE *)(((unsigned __int64)&this->monitor_str_format_ >> 3) + 0x7FFF8000) )
      {
        v6 = v7 - 320;
        snprintf(
          (char *)(v7 - 320),
          0x100uLL,
          this->monitor_str_format_._M_dataplus._M_p,
          *(_QWORD *)(v7 - 880),
          *((unsigned int *)&M_parent->_M_color + 1),
          M_parent->_M_parent,
          *(double *)v4.m128i_i64);
        ostr = (common::milog::MilogStringStream *)(v7 - 816);
        *(_QWORD *)(v7 - 816) = v7 - 800;
        v18 = strlen((const char *)(v7 - 320));
        std::string::_M_construct<char const*>(
          (std::string *const)(v7 - 816),
          (const char *)(v7 - 320),
          (const char *)(v7 - 320 + v18),
          v19);
        goto LABEL_37;
      }
LABEL_36:
      __asan_report_load8(p_M_parent);
LABEL_37:
      *(_DWORD *)(v7 - 944) = 0;
      *(_BYTE *)(v7 - 940) = 0;
      *(_QWORD *)(v7 - 624) = v7 - 608;
      *(_QWORD *)(v7 - 616) = 0LL;
      *(_BYTE *)(v7 - 608) = 0;
      *(_QWORD *)(v7 - 592) = v7 - 576;
      *(_QWORD *)(v7 - 584) = 0LL;
      *(_BYTE *)(v7 - 576) = 0;
      *(_QWORD *)(v7 - 560) = v7 - 544;
      *(_QWORD *)(v7 - 552) = 0LL;
      *(_BYTE *)(v7 - 544) = 0;
      *(_DWORD *)(v7 - 520) = 0;
      *(_QWORD *)(v7 - 512) = 0LL;
      *(_QWORD *)(v7 - 504) = v7 - 520;
      *(_QWORD *)(v7 - 496) = v7 - 520;
      *(_QWORD *)(v7 - 488) = 0LL;
      *(_DWORD *)(v7 - 472) = 0;
      *(_QWORD *)(v7 - 464) = 0LL;
      *(_QWORD *)(v7 - 456) = v7 - 472;
      *(_QWORD *)(v7 - 448) = v7 - 472;
      *(_QWORD *)(v7 - 440) = 0LL;
      *(_QWORD *)(v7 - 432) = v7 - 416;
      *(_QWORD *)(v7 - 424) = 0LL;
      *(_BYTE *)(v7 - 416) = 0;
      *(_DWORD *)(v7 - 400) = 0;
      *(_DWORD *)(v7 - 396) = 0;
      *(_BYTE *)(v7 - 392) = 0;
      std::string::_M_assign(v7 - 624, &this->host_ip_);
      p_host_port = (unsigned __int64)&this->host_port_;
      std::string::_M_assign(v7 - 592, &this->host_port_);
      *(_DWORD *)(v7 - 400) = 1;
      if ( *(_BYTE *)(((unsigned __int64)&v2[2]._M_parent >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(&v2[2]._M_parent);
      }
      else
      {
        ostr = (common::milog::MilogStringStream *)v2[2]._M_parent;
        v6 = (size_t)&ostr[1];
        p_host_port = (unsigned __int64)&this->uri_base_;
        std::operator+<char>((std::string *)&v61, &this->uri_base_, &this->lable_string_base_);
      }
      v24 = v6 + 8;
      if ( *(_BYTE *)(((v6 + 8) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v24);
      }
      else
      {
        v25 = *(_QWORD *)(v6 + 8);
        v24 = v6;
        v6 >>= 3;
        if ( !*(_BYTE *)(v6 + 2147450880) )
        {
          p_host_port = (unsigned __int64)ostr[1].buffer_.data_;
          v26 = std::string::_M_append(&v61, p_host_port, v25);
          goto LABEL_45;
        }
      }
      v26 = __asan_report_load8(v24);
LABEL_45:
      v62.log_ = (common::milog::MiLog *)&v62.ostr_ptr_._M_refcount;
      if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
      {
        v26 = __asan_report_load8(v26);
      }
      else
      {
        v27 = v26 + 16;
        if ( *(_QWORD *)v26 != v26 + 16 )
        {
          v62.log_ = *(common::milog::MiLog **)v26;
          v28 = v26 + 16;
          if ( *(_BYTE *)(((v26 + 16) >> 3) + 0x7FFF8000) )
            goto LABEL_69;
          v62.ostr_ptr_._M_refcount._M_pi = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v26 + 16);
          goto LABEL_49;
        }
      }
      v28 = v27;
      p_host_port = *(unsigned __int8 *)(((v26 + 31) >> 3) + 0x7FFF8000);
      if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v27 >> 3) + 0x7FFF8000) <= (unsigned __int8)(v27 & 7)
        || (_BYTE)p_host_port != 0 && (char)p_host_port <= (char)((v26 + 31) & 7) )
      {
        p_host_port = 16LL;
        __asan_report_load_n(v27, 16LL);
LABEL_69:
        __asan_report_load8(v28);
LABEL_70:
        __asan_report_load8(v28);
LABEL_71:
        __asan_report_store1(v28);
LABEL_72:
        if ( v62.ostr_ptr_._M_ptr )
        {
          if ( v62.ostr_ptr_._M_ptr != (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)1 )
          {
            memcpy((void *)v28, (const void *)p_host_port, (size_t)v62.ostr_ptr_._M_ptr);
            goto LABEL_75;
          }
          v34 = *(_BYTE *)((p_host_port >> 3) + 0x7FFF8000);
          if ( v34 <= (char)(p_host_port & 7) && v34 )
          {
            v28 = p_host_port;
            __asan_report_load1(p_host_port);
          }
          else
          {
            v35 = *(_BYTE *)((v28 >> 3) + 0x7FFF8000);
            if ( v35 > (char)(v28 & 7) || !v35 )
            {
              *(_BYTE *)v28 = *(_BYTE *)p_host_port;
              goto LABEL_75;
            }
          }
          __asan_report_store1(v28);
        }
        else
        {
LABEL_75:
          M_ptr = v62.ostr_ptr_._M_ptr;
          *(_QWORD *)(v7 - 552) = v62.ostr_ptr_._M_ptr;
          v32 = (unsigned __int64)M_ptr + *(_QWORD *)(v7 - 560);
          v28 = v32;
          v33 = *(_BYTE *)((v32 >> 3) + 0x7FFF8000);
          if ( v33 > (char)(v32 & 7) || !v33 )
          {
            *(_BYTE *)v32 = 0;
            goto LABEL_57;
          }
        }
        __asan_report_store1(v28);
        goto LABEL_86;
      }
      v4 = _mm_loadu_si128((const __m128i *)(v26 + 16));
      *(__m128i *)&v62.ostr_ptr_._M_refcount._M_pi = v4;
LABEL_49:
      v28 = v26 + 8;
      if ( *(_BYTE *)(((v26 + 8) >> 3) + 0x7FFF8000) )
        goto LABEL_70;
      v62.ostr_ptr_._M_ptr = *(std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type **)(v26 + 8);
      *(_QWORD *)v26 = v27;
      *(_QWORD *)(v26 + 8) = 0LL;
      v28 = v26 + 16;
      v29 = *(_BYTE *)(((v26 + 16) >> 3) + 0x7FFF8000);
      if ( v29 <= (char)((v26 + 16) & 7) && v29 )
        goto LABEL_71;
      *(_BYTE *)(v26 + 16) = 0;
      v28 = *(_QWORD *)(v7 - 560);
      p_host_port = (unsigned __int64)v62.log_;
      if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v62.log_ == &v62.ostr_ptr_._M_refcount )
        goto LABEL_72;
      if ( v28 != v7 - 544 )
      {
        v59 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v7 - 544);
        goto LABEL_55;
      }
LABEL_86:
      v28 = 0LL;
LABEL_55:
      *(_QWORD *)(v7 - 560) = p_host_port;
      *(common::milog::MilogStringStreamPtr *)(v7 - 552) = v62.ostr_ptr_;
      if ( v28 )
      {
        v62.log_ = (common::milog::MiLog *)v28;
        v62.ostr_ptr_._M_refcount._M_pi = v59;
      }
      else
      {
        v62.log_ = (common::milog::MiLog *)&v62.ostr_ptr_._M_refcount;
      }
LABEL_57:
      v62.ostr_ptr_._M_ptr = 0LL;
      v30 = *(_BYTE *)(((unsigned __int64)v62.log_ >> 3) + 0x7FFF8000);
      if ( v30 <= ((__int64)v62.log_ & 7) && v30 )
      {
        __asan_report_store1(v62.log_);
      }
      else
      {
        LOBYTE(v62.log_->max_log_len_._M_i) = 0;
        if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v62.log_ != &v62.ostr_ptr_._M_refcount )
          operator delete(v62.log_);
        if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v61.log_ != &v61.ostr_ptr_._M_refcount )
          operator delete(v61.log_);
        common::milog::MiLogStream::MiLogStream(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/utils/monitor_report.cpp",
          "reportValueToDb",
          275);
      }
      ostr = v62.ostr_;
      p_cur = v62.ostr_;
      if ( *(_BYTE *)(((unsigned __int64)v62.ostr_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(v62.ostr_);
LABEL_107:
        __asan_report_load8(p_cur);
LABEL_108:
        __asan_report_load8(p_cur);
LABEL_109:
        __asan_report_load8(p_cur);
LABEL_110:
        __asan_report_load8(p_cur);
LABEL_111:
        __asan_report_load8(p_cur);
LABEL_112:
        __asan_report_load8(p_cur);
LABEL_113:
        __asan_report_load8(p_cur);
        goto LABEL_114;
      }
      v6 = (size_t)(v62.ostr_->buffer_.data_ + 0x4000);
      p_cur = (common::milog::MilogStringStream *)&v62.ostr_->buffer_.cur_;
      if ( *(_BYTE *)(((unsigned __int64)&v62.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
        goto LABEL_107;
      cur = v62.ostr_->buffer_.cur_;
      v6 = (int)v6 - (int)cur;
      if ( v6 > 0x14 )
        v6 = 21LL;
      memcpy(cur, "[MonitorReport] uri: ", v6);
      ostr->buffer_.cur_ += v6;
      ostr = v62.ostr_;
      p_cur = v62.ostr_;
      if ( *(_BYTE *)(((unsigned __int64)v62.ostr_ >> 3) + 0x7FFF8000) )
        goto LABEL_108;
      v6 = (size_t)(v62.ostr_->buffer_.data_ + 0x4000);
      p_cur = (common::milog::MilogStringStream *)&v62.ostr_->buffer_.cur_;
      if ( *(_BYTE *)(((unsigned __int64)&v62.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
        goto LABEL_109;
      v38 = v62.ostr_->buffer_.cur_;
      v6 = (int)v6 - (int)v38;
      if ( *(_QWORD *)(v7 - 552) <= v6 )
        v6 = *(_QWORD *)(v7 - 552);
      memcpy(v38, *(const void **)(v7 - 560), v6);
      ostr->buffer_.cur_ += v6;
      ostr = v62.ostr_;
      p_cur = v62.ostr_;
      if ( *(_BYTE *)(((unsigned __int64)v62.ostr_ >> 3) + 0x7FFF8000) )
        goto LABEL_110;
      v6 = (size_t)(v62.ostr_->buffer_.data_ + 0x4000);
      p_cur = (common::milog::MilogStringStream *)&v62.ostr_->buffer_.cur_;
      if ( *(_BYTE *)(((unsigned __int64)&v62.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
        goto LABEL_111;
      v39 = v62.ostr_->buffer_.cur_;
      v6 = (int)v6 - (int)v39;
      if ( v6 > 7 )
        v6 = 8LL;
      memcpy(v39, " value: ", v6);
      ostr->buffer_.cur_ += v6;
      ostr = v62.ostr_;
      p_cur = v62.ostr_;
      if ( *(_BYTE *)(((unsigned __int64)v62.ostr_ >> 3) + 0x7FFF8000) )
        goto LABEL_112;
      v6 = (size_t)(v62.ostr_->buffer_.data_ + 0x4000);
      p_cur = (common::milog::MilogStringStream *)&v62.ostr_->buffer_.cur_;
      if ( *(_BYTE *)(((unsigned __int64)&v62.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
        goto LABEL_113;
      v40 = v62.ostr_->buffer_.cur_;
      v6 = (int)v6 - (int)v40;
      if ( *(_QWORD *)(v7 - 808) <= v6 )
        v6 = *(_QWORD *)(v7 - 808);
      memcpy(v40, *(const void **)(v7 - 816), v6);
      ostr->buffer_.cur_ += v6;
      common::milog::MiLogStream::~MiLogStream(&v62);
      std::string::_M_assign(v7 - 432, v7 - 816);
LABEL_114:
      *(_DWORD *)(v7 - 752) = 0;
      *(_DWORD *)(v7 - 736) = 0;
      *(_QWORD *)(v7 - 728) = 0LL;
      *(_QWORD *)(v7 - 720) = v7 - 736;
      *(_QWORD *)(v7 - 712) = v7 - 736;
      *(_QWORD *)(v7 - 704) = 0LL;
      *(_QWORD *)(v7 - 696) = v7 - 680;
      *(_QWORD *)(v7 - 688) = 0LL;
      *(_BYTE *)(v7 - 680) = 0;
      common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v7 - 912));
      if ( common::minet::http_client::SyncHttpClient::request(
             (common::minet::http_client::SyncHttpClient *const)(v7 - 944),
             (common::minet::http_client::HttpRequest *)(v7 - 624),
             (common::minet::http_client::HttpResponse *)(v7 - 752),
             0x3E8u) )
      {
        common::milog::MiLogStream::MiLogStream(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/utils/monitor_report.cpp",
          "reportValueToDb",
          283);
        v41 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v60 + 80));
        common::milog::MiLogStream::operator()(&v62, "request failed, timecost=%d us", v41);
        common::milog::MiLogStream::~MiLogStream(&v62);
        common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v60 + 80));
        v42 = *(char **)(v60 + 296);
        if ( v42 != (char *)(v60 + 312) )
          operator delete(v42);
        std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
          (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *const)(v60 + 248),
          *(std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type *)(v60 + 264));
        v43 = *(char **)(v60 + 560);
        if ( v43 != (char *)(v60 + 576) )
          operator delete(v43);
        std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
          (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *const)(v60 + 512),
          *(std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type *)(v60 + 528));
        std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
          (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *const)(v60 + 464),
          *(std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type *)(v60 + 480));
        v44 = *(char **)(v60 + 432);
        if ( v44 != (char *)(v60 + 448) )
          operator delete(v44);
        v45 = *(char **)(v60 + 400);
        if ( v45 != (char *)(v60 + 416) )
          operator delete(v45);
        v46 = *(char **)(v60 + 368);
        if ( v46 != (char *)(v60 + 384) )
          operator delete(v46);
        v47 = *(char **)(v60 + 176);
        if ( v47 != (char *)(v60 + 192) )
          operator delete(v47);
        goto LABEL_28;
      }
      if ( (unsigned int)(*(_DWORD *)(v7 - 752) - 200) > 0x63 )
      {
        common::milog::MiLogStream::MiLogStream(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "src/utils/monitor_report.cpp",
          "reportValueToDb",
          293);
        v6 = *(_QWORD *)(v7 - 696);
        v57 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v7 - 912));
        common::milog::MiLogStream::operator()(
          &v62,
          "[MonitorReport] put opsmind failed, timecost=%d us, %s",
          v57,
          (const char *)v6);
      }
      else
      {
        common::milog::MiLogStream::MiLogStream(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "src/utils/monitor_report.cpp",
          "reportValueToDb",
          289);
        v48 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v7 - 912));
        common::milog::MiLogStream::operator()(&v62, "[MonitorReport] put opsmind success, timecost=%d us", v48);
      }
      common::milog::MiLogStream::~MiLogStream(&v62);
      common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v7 - 912));
      v49 = *(void **)(v7 - 696);
      if ( v49 != (void *)(v7 - 680) )
        operator delete(v49);
      std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
        (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *const)(v7 - 744),
        *(std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type *)(v7 - 728));
      v50 = *(void **)(v7 - 432);
      if ( v50 != (void *)(v7 - 416) )
        operator delete(v50);
      std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
        (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *const)(v7 - 480),
        *(std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type *)(v7 - 464));
      std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
        (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *const)(v7 - 528),
        *(std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type *)(v7 - 512));
      v51 = *(void **)(v7 - 560);
      if ( v51 != (void *)(v7 - 544) )
        operator delete(v51);
      v52 = *(void **)(v7 - 592);
      if ( v52 != (void *)(v7 - 576) )
        operator delete(v52);
      v53 = *(void **)(v7 - 624);
      if ( v53 != (void *)(v7 - 608) )
        operator delete(v53);
      v54 = *(void **)(v7 - 816);
      if ( v54 != (void *)(v7 - 800) )
        operator delete(v54);
      v55 = *(void **)(v7 - 880);
      if ( v55 != (void *)(v7 - 864) )
        operator delete(v55);
      M_left = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(v2);
    }
    common::milog::MiLogStream::MiLogStream(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "src/utils/monitor_report.cpp",
      "reportValueToDb",
      262);
    v6 = (size_t)v61.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v61.ostr_ >> 3) + 0x7FFF8000) )
    {
      p_M_parent = (std::_Rb_tree_node_base *)v61.ostr_;
      __asan_report_load8(v61.ostr_);
    }
    else
    {
      v7 = (size_t)(v61.ostr_->buffer_.data_ + 0x4000);
      p_M_parent = (std::_Rb_tree_node_base *)&v61.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v61.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        v20 = v61.ostr_->buffer_.cur_;
        v7 = (int)v7 - (int)v20;
        if ( v7 > 0x27 )
          v7 = 40LL;
        memcpy(v20, "[MonitorReport] unrecognize report type ", v7);
        *(_QWORD *)(v6 + 8) += v7;
        p_M_parent = v2 + 1;
        v21 = *(_BYTE *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v2 + 32) & 7) + 3) < v21 || !v21 )
        {
          common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v61.ostr_, v2[1]._M_color);
          common::milog::MiLogStream::~MiLogStream(&v61);
LABEL_28:
          v22 = *(char **)(v60 + 112);
          if ( v22 != (char *)(v60 + 128) )
            operator delete(v22);
          goto LABEL_5;
        }
LABEL_32:
        __asan_report_load4(p_M_parent);
LABEL_33:
        __asan_report_load8(p_M_parent);
LABEL_34:
        __asan_report_load8(p_M_parent);
LABEL_35:
        *(double *)v4.m128i_i64 = __asan_report_load4(p_M_parent);
        goto LABEL_36;
      }
    }
    __asan_report_load8(p_M_parent);
    goto LABEL_32;
  }
LABEL_5:
  if ( v63 == (char *)v60 )
  {
    *(_QWORD *)((v60 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8074) = 0LL;
  }
  else
  {
    *(_QWORD *)v60 = 1172321806LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v60 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v60 >> 3) + 0x7FFF8078) = -168430091;
  }
};

// Line 302: range 0000000014E2E95E-0000000014E2E995
MonitorAccumType __fastcall MonitorReport::getMonitorAccumType(MonitorReport *const this, ReportType type)
{
  MonitorAccumType result; // eax

  switch ( type )
  {
    case MONITOR_MSG_QUEUE_NUM:
    case MONITOR_CONNECTION_NUM:
    case MONITOR_GET_TOKEN:
    case MONITOR_LOGIN:
    case MONITOR_SDK_HTTP_COST:
    case MONITOR_SUCC_RECHARGE_TIMECOST:
    case MONITOR_MATCH_UNIT_NUM:
    case MONITOR_SERVER_VERSION:
    case MONITOR_CLIENT_VERSION:
    case MONITOR_CLIENT_SILENCE_VERSION:
    case MONITOR_ANDROID_RES_VERSION:
    case MONITOR_IOS_RES_VERSION:
    case MONITOR_PC_RES_VERSION:
    case MONITOR_PS4_RES_VERSION:
    case MONITOR_SERVER_RES_VERSION:
    case MONITOR_XML_CONFIG_VERSION:
    case MONITOR_BIN_PLAYER_SIZE:
    case MONITOR_BIN_BLOCK_SIZE:
    case MONITOR_BIN_SUM_SIZE:
    case MONITOR_CMD_FREQUENCY:
    case MONITOR_CMD_COST:
    case MONITOR_PS5_RES_VERSION:
    case MONITOR_BIN_HOME_SIZE:
    case MONITOR_BIN_PLAYER_BEFORE_LOGIN_SIZE:
    case MONITOR_BIN_PLAYER_SUM_SIZE:
    case MONITOR_TOTHEMOON_TIME_PATH:
    case MONITOR_TOTHEMOON_TIME_OBS:
    case MONITOR_TOTHEMOON_TIME_OBS_RM:
    case MONITOR_TOTHEMOON_MEM_OBS:
    case MONITOR_TOTHEMOON_NODE_NUM:
    case MONITOR_TOTHEMOON_TIME_OBS_MOD:
    case MONITOR_TOTHEMOON_MEM_OBS_MOD:
    case MONITOR_GCG_GAME_NUM:
    case MONITOR_MATCH_QUEUE_NUM:
      result = MONITOR_ACCUM_MAX;
      break;
    case MONITOR_DB_OP_COST:
      result = type;
      break;
    case MONITOR_RECHARGE_NUM:
      result = MONITOR_ACCUM_SUM;
      break;
    case MONITOR_PATHFINDING_PLAYER_AVG_MEMORY:
    case MONITOR_PATHFINDING_TILE_AVG_MEMORY:
    case MONITOR_PATHFINDING_PLAYER_AVG_TILE_NUM:
      result = MONITOR_ACCUM_NONE;
      break;
    case MONITOR_PATHFINDING_QUERY_PATH_COST:
    case MONITOR_PATHFINDING_OBSTACLE_COUNT:
    case MONITOR_PATHFINDING_OBSTACLE_TOTAL_COST:
      result = MONITOR_ACCUM_AVG;
      break;
    default:
      result = MONITOR_ACCUM_NONE;
      break;
  }
  return result;
};

// Line 371: range 0000000014E36BDE-0000000014E36D1F
void __fastcall MonitorReport::addValueWithIngnoreThreadIndex(
        MonitorReport *const this,
        ReportType type,
        int32_t monitor_value)
{
  std::forward_iterator_tag v3; // cl
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  char *v8; // rdi
  char v9[152]; // [rsp+10h] [rbp-98h] BYREF

  v5 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v5 = v7;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 32 23 ignore_lable_string:372";
  *(_QWORD *)(v5 + 16) = MonitorReport::addValueWithIngnoreThreadIndex;
  v6 = v5 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  *(_QWORD *)(v5 + 32) = v5 + 48;
  std::string::_M_construct<char const*>((std::string *const)(v5 + 32), &byte_1AE3786C[-12], byte_1AE3786C, v3);
  MonitorReport::addValueWithIgnoreLable(this, type, monitor_value, (const std::string *)(v5 + 32));
  v8 = *(char **)(v5 + 32);
  if ( v8 != (char *)(v5 + 48) )
    operator delete(v8);
  if ( v9 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 377: range 0000000014E35C28-0000000014E36BD8
void __fastcall MonitorReport::addValueWithIgnoreLable(
        MonitorReport *const this,
        ReportType type,
        int32_t monitor_value,
        const std::string *ignore_lable_string)
{
  unsigned __int64 ostr; // r14
  unsigned __int64 v5; // rbp
  _DWORD *v6; // r12
  char v7; // al
  __int64 v8; // rax
  common::tools::SafeQueue<std::shared_ptr<MonitorValue> > *p_monitor_queue; // rbx
  unsigned __int64 v10; // r15
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer *p_M_node; // rdi
  pthread_mutex_t *v12; // r13
  int v13; // r14d
  void *p_M_finish; // rdi
  __int64 v15; // rbx
  common::milog::MilogStringStream *p_cur; // rdi
  char v17; // al
  std::forward_iterator_tag v18; // cl
  char *cur; // rdi
  size_t v20; // rbx
  char *v21; // rdi
  unsigned __int64 v22; // rdi
  char v23; // al
  char v24; // dl
  char v25; // al
  std::string *v26; // rdi
  char v27; // dl
  char v28; // al
  unsigned __int64 p_queue_mu; // rdi
  void *p_M_first; // rdi
  char v31; // dl
  uint32_t max_size; // edx
  unsigned __int64 M_cur; // rdi
  __int64 p_M_last; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  volatile signed __int32 *v37; // rdx
  volatile signed __int32 *v38; // rdi
  char v39; // dl
  unsigned __int64 v40; // rbx
  volatile signed __int32 *v41; // rdi
  char v42; // dl
  signed __int32 v43; // eax
  struct _Unwind_Exception *v44; // rbx
  std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2> *v45; // rsi
  char *v46; // rdi
  std::forward_iterator_tag v47; // cl
  unsigned __int64 v48; // r14
  unsigned __int64 v49; // rdi
  char v50; // al
  char v51; // dl
  std::string *v52; // rdi
  char v53; // al
  char v54; // dl
  char v55; // al
  void *v56; // rdi
  unsigned __int64 v57; // rbx
  volatile signed __int32 *v58; // rdi
  char v59; // dl
  signed __int32 v60; // eax
  unsigned __int64 v61; // rdi
  char v62; // dl
  signed __int32 v63; // eax
  char v64; // dl
  char v65; // dl
  char v66; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v67; // rdi
  char v68; // dl
  unsigned __int64 v69; // rdi
  char v70; // dl
  signed __int32 v71; // eax
  unsigned __int64 v72; // rdi
  char v73; // dl
  int cur_ms_timestamp; // [rsp+18h] [rbp-120h]
  uint64_t cur_ms_timestampa; // [rsp+18h] [rbp-120h]
  uint64_t cur_ms_timestampb; // [rsp+18h] [rbp-120h]
  common::milog::MiLogStream v79; // [rsp+20h] [rbp-118h] BYREF
  char v80[248]; // [rsp+40h] [rbp-F8h] BYREF

  ostr = (unsigned __int64)this;
  v5 = (unsigned __int64)v80;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(192LL);
    if ( v8 )
      v5 = v8;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 1 4 __a2 64 16 19 monitor_val_ptr:396 96 16 7 __guard 128 32 16 lable_string:390";
  *(_QWORD *)(v5 + 16) = MonitorReport::addValueWithIgnoreLable;
  v6 = (_DWORD *)(v5 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862725] = -202116109;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000);
  if ( v7 <= (((unsigned __int8)this + 1) & 7) && v7 )
  {
    __asan_report_load1(&this->is_run_);
  }
  else if ( !this->is_run_ )
  {
    goto LABEL_5;
  }
  p_monitor_queue = &this->monitor_queue_;
  LODWORD(v10) = (_DWORD)this + 448;
  if ( &_pthread_key_create )
  {
    cur_ms_timestamp = pthread_mutex_lock(&this->monitor_queue_.queue_mu_._M_mutex);
    if ( cur_ms_timestamp )
    {
      __asan_handle_no_return(&this->monitor_queue_.queue_mu_);
      std::__throw_system_error(cur_ms_timestamp);
    }
  }
  p_M_node = &this->monitor_queue_.queue_.c._M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((ostr + 432) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_24;
  }
  p_M_node = (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer *)(ostr + 400);
  if ( *(_BYTE *)(((ostr + 400) >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(p_M_node);
    goto LABEL_25;
  }
  p_M_node = (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer *)(ostr + 408);
  if ( *(_BYTE *)(((ostr + 408) >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(p_M_node);
    goto LABEL_26;
  }
  p_M_node = (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer *)(ostr + 416);
  if ( *(_BYTE *)(((ostr + 416) >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(p_M_node);
    goto LABEL_27;
  }
  p_M_node = (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer *)(ostr + 392);
  if ( *(_BYTE *)(((ostr + 392) >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8(p_M_node);
    goto LABEL_28;
  }
  p_M_node = (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer *)(ostr + 376);
  if ( *(_BYTE *)(((ostr + 376) >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_load8(p_M_node);
    goto LABEL_29;
  }
  cur_ms_timestampa = ((__int64)(*(_QWORD *)(ostr + 392) - *(_QWORD *)(ostr + 376)) >> 4)
                    + 32 * (((__int64)(*(_QWORD *)(ostr + 432) - *(_QWORD *)(ostr + 400)) >> 3) - 1)
                    + ((__int64)(*(_QWORD *)(ostr + 408) - *(_QWORD *)(ostr + 416)) >> 4);
  if ( &_pthread_key_create )
    pthread_mutex_unlock((pthread_mutex_t *)(ostr + 448));
  if ( cur_ms_timestampa > 0xEA5F )
  {
LABEL_29:
    common::milog::MiLogStream::MiLogStream(
      &v79,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/monitor_report.cpp",
      "addValueWithIgnoreLable",
      385);
    v12 = (pthread_mutex_t *)(ostr + 448);
    if ( &_pthread_key_create )
    {
      v13 = pthread_mutex_lock((pthread_mutex_t *)(ostr + 448));
      if ( v13 )
      {
        __asan_handle_no_return(&p_monitor_queue->queue_mu_);
        std::__throw_system_error(v13);
      }
    }
    p_M_finish = &p_monitor_queue->queue_.c._M_impl._M_finish._M_node;
    if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_finish);
    }
    else
    {
      p_M_finish = &p_monitor_queue->queue_.c._M_impl._M_start._M_node;
      if ( !*(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      {
        p_M_finish = &p_monitor_queue->queue_.c._M_impl._M_finish;
        if ( !*(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
        {
          p_M_finish = &p_monitor_queue->queue_.c._M_impl._M_finish._M_first;
          if ( !*(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
          {
            p_M_finish = &p_monitor_queue->queue_.c._M_impl._M_start._M_last;
            if ( !*(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
            {
              p_M_finish = &p_monitor_queue->queue_.c._M_impl._M_start;
              if ( !*(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
              {
                v15 = 32
                    * (p_monitor_queue->queue_.c._M_impl._M_finish._M_node
                     - p_monitor_queue->queue_.c._M_impl._M_start._M_node
                     - 1)
                    + p_monitor_queue->queue_.c._M_impl._M_finish._M_cur
                    - p_monitor_queue->queue_.c._M_impl._M_finish._M_first
                    + p_monitor_queue->queue_.c._M_impl._M_start._M_last
                    - p_monitor_queue->queue_.c._M_impl._M_start._M_cur;
                if ( &_pthread_key_create )
                  pthread_mutex_unlock(v12);
                common::milog::MiLogStream::operator()(
                  &v79,
                  "[MonitorReport] monitor_queue_.size=%lu, max_queue_size=%u",
                  v15,
                  60000LL);
                goto LABEL_47;
              }
LABEL_46:
              __asan_report_load8(p_M_finish);
LABEL_47:
              common::milog::MiLogStream::~MiLogStream(&v79);
              goto LABEL_5;
            }
LABEL_45:
            __asan_report_load8(p_M_finish);
            goto LABEL_46;
          }
LABEL_44:
          __asan_report_load8(p_M_finish);
          goto LABEL_45;
        }
LABEL_43:
        __asan_report_load8(p_M_finish);
        goto LABEL_44;
      }
    }
    __asan_report_load8(p_M_finish);
    goto LABEL_43;
  }
  cur_ms_timestampb = common::tools::TimeUtils::getNowMs();
  *(_QWORD *)(v5 + 128) = v5 + 144;
  *(_QWORD *)(v5 + 136) = 0LL;
  *(_BYTE *)(v5 + 144) = 0;
  if ( MonitorReport::constructLabelStringFromContextIgnoreLabelKey(
         (MonitorReport *const)ostr,
         (std::string *)(v5 + 128),
         ignore_lable_string) )
  {
    common::milog::MiLogStream::MiLogStream(
      &v79,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/monitor_report.cpp",
      "addValueWithIgnoreLable",
      393);
    ostr = (unsigned __int64)v79.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v79.ostr_ >> 3) + 0x7FFF8000) )
    {
      p_cur = v79.ostr_;
      __asan_report_load8(v79.ostr_);
    }
    else
    {
      p_monitor_queue = (common::tools::SafeQueue<std::shared_ptr<MonitorValue> > *)(v79.ostr_->buffer_.data_ + 0x4000);
      p_cur = (common::milog::MilogStringStream *)&v79.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v79.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v79.ostr_->buffer_.cur_;
        v20 = (int)p_monitor_queue - (int)cur;
        if ( v20 > 0x2A )
          v20 = 43LL;
        memcpy(cur, "construct label string failed, report_type:", v20);
        *(_QWORD *)(ostr + 8) += v20;
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v79.ostr_, type);
        common::milog::MiLogStream::~MiLogStream(&v79);
LABEL_58:
        v21 = *(char **)(v5 + 128);
        if ( v21 == (char *)(v5 + 144) )
          goto LABEL_5;
        goto LABEL_59;
      }
    }
    __asan_report_load8(p_cur);
    goto LABEL_62;
  }
  p_cur = (common::milog::MilogStringStream *)&common::tools::perf::MemoryPerf::is_record;
  v17 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
  if ( v17 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v17 )
  {
LABEL_62:
    __asan_report_load1(p_cur);
    goto LABEL_63;
  }
  if ( common::tools::perf::MemoryPerf::is_record )
  {
    *(_QWORD *)(v5 + 64) = 0LL;
    std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2>,MonitorValue>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2>,MonitorValue> *)(v5 + 48));
LABEL_63:
    v10 = *(_QWORD *)(v5 + 104);
    v22 = v10 + 8;
    v23 = *(_BYTE *)(((v10 + 8) >> 3) + 0x7FFF8000);
    if ( v23 && v23 <= 3 )
    {
      __asan_report_store4(v22);
    }
    else
    {
      *(_DWORD *)(v10 + 8) = 1;
      v22 = v10 + 12;
      v24 = *(_BYTE *)(((v10 + 12) >> 3) + 0x7FFF8000);
      if ( (char)(((v10 + 12) & 7) + 3) < v24 || !v24 )
      {
        *(_DWORD *)(v10 + 12) = 1;
        if ( !*(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v10 = &`vtable for'std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2>
                         + 2;
          ostr = v10 + 16;
          if ( !common::tools::perf::MemoryPerf::is_record )
            goto LABEL_75;
          v79.log_ = (common::milog::MiLog *)&v79.ostr_ptr_._M_refcount;
          std::string::_M_construct<char const*>((std::string *const)&v79, "12MonitorValue", "", v18);
LABEL_73:
          common::tools::perf::MemoryPerfRecorder::construct(
            &common::tools::perf::MemoryPerf::recorder,
            (const std::string *)&v79,
            0x38uLL);
          if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v79.log_ != &v79.ostr_ptr_._M_refcount )
            operator delete(v79.log_);
LABEL_75:
          v25 = *(_BYTE *)((ostr >> 3) + 0x7FFF8000);
          if ( v25 && v25 <= 3 )
          {
            v26 = (std::string *)ostr;
            __asan_report_store4(ostr);
          }
          else
          {
            *(_DWORD *)(v10 + 16) = type;
            v26 = (std::string *)(ostr + 4);
            v27 = *(_BYTE *)(((ostr + 4) >> 3) + 0x7FFF8000);
            if ( (char)(((ostr + 4) & 7) + 3) < v27 || !v27 )
            {
              *(_DWORD *)(ostr + 4) = monitor_value;
              v26 = (std::string *)(ostr + 8);
              if ( !*(_BYTE *)(((ostr + 8) >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)(ostr + 8) = cur_ms_timestampb;
                v26 = (std::string *)(ostr + 16);
                if ( !*(_BYTE *)(((ostr + 16) >> 3) + 0x7FFF8000) )
                {
                  *(_QWORD *)(ostr + 16) = ostr + 32;
                  std::string::_M_construct<char *>(
                    v26,
                    *(char **)(v5 + 128),
                    (char *)(*(_QWORD *)(v5 + 136) + *(_QWORD *)(v5 + 128)),
                    v18);
                  goto LABEL_86;
                }
LABEL_85:
                __asan_report_store8(v26);
LABEL_86:
                v28 = *(_BYTE *)(((ostr + 48) >> 3) + 0x7FFF8000);
                if ( !v28 || v28 > 3 )
                {
                  *(_DWORD *)(ostr + 48) = 1;
                  *(_QWORD *)(v5 + 104) = 0LL;
                  *(_QWORD *)(v5 + 72) = v10;
                  *(_QWORD *)(v5 + 64) = ostr;
                  goto LABEL_89;
                }
                v44 = (struct _Unwind_Exception *)__asan_report_store4(ostr + 48);
                if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v79.log_ != &v79.ostr_ptr_._M_refcount )
                  operator delete(v79.log_);
                v45 = *(std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2> **)(v5 + 104);
                if ( v45 )
                  common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2>,MonitorValue>::deallocate(
                    *(common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2>,MonitorValue> *const *)(v5 + 96),
                    v45,
                    1uLL);
LABEL_127:
                v46 = *(char **)(v5 + 128);
                if ( v46 != (char *)(v5 + 144) )
                  operator delete(v46);
                __asan_handle_no_return(v46);
                _Unwind_Resume(v44);
              }
LABEL_84:
              __asan_report_store8(v26);
              goto LABEL_85;
            }
          }
          __asan_report_store4(v26);
          goto LABEL_84;
        }
LABEL_72:
        __asan_report_store8(v10);
        goto LABEL_73;
      }
    }
    __asan_report_store4(v22);
    goto LABEL_72;
  }
  *(_QWORD *)(v5 + 64) = 0LL;
  std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<MonitorValue,std::allocator<MonitorValue>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<MonitorValue,std::allocator<MonitorValue>,(__gnu_cxx::_Lock_policy)2> > *)(v5 + 48));
  v48 = *(_QWORD *)(v5 + 104);
  v49 = v48 + 8;
  v50 = *(_BYTE *)(((v48 + 8) >> 3) + 0x7FFF8000);
  if ( v50 && v50 <= 3 )
  {
    __asan_report_store4(v49);
LABEL_143:
    __asan_report_store4(v49);
    goto LABEL_144;
  }
  *(_DWORD *)(v48 + 8) = 1;
  v49 = v48 + 12;
  v51 = *(_BYTE *)(((v48 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v48 + 12) & 7) + 3) >= v51 && v51 )
    goto LABEL_143;
  *(_DWORD *)(v48 + 12) = 1;
  if ( *(_BYTE *)((v48 >> 3) + 0x7FFF8000) )
  {
LABEL_144:
    v52 = (std::string *)v48;
    __asan_report_store8(v48);
LABEL_145:
    __asan_report_store4(v52);
LABEL_146:
    __asan_report_store4(v52);
    goto LABEL_147;
  }
  *(_QWORD *)v48 = &`vtable for'std::_Sp_counted_ptr_inplace<MonitorValue,std::allocator<MonitorValue>,(__gnu_cxx::_Lock_policy)2>
                 + 2;
  v52 = (std::string *)(v48 + 16);
  v53 = *(_BYTE *)(((v48 + 16) >> 3) + 0x7FFF8000);
  if ( v53 && v53 <= 3 )
    goto LABEL_145;
  *(_DWORD *)(v48 + 16) = type;
  v52 = (std::string *)(v48 + 20);
  v54 = *(_BYTE *)(((v48 + 20) >> 3) + 0x7FFF8000);
  if ( (char)(((v48 + 20) & 7) + 3) >= v54 && v54 )
    goto LABEL_146;
  *(_DWORD *)(v48 + 20) = monitor_value;
  v52 = (std::string *)(v48 + 24);
  if ( *(_BYTE *)(((v48 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_147:
    __asan_report_store8(v52);
    goto LABEL_148;
  }
  *(_QWORD *)(v48 + 24) = cur_ms_timestampb;
  v52 = (std::string *)(v48 + 32);
  if ( *(_BYTE *)(((v48 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_148:
    __asan_report_store8(v52);
    goto LABEL_149;
  }
  *(_QWORD *)(v48 + 32) = v48 + 48;
  std::string::_M_construct<char *>(
    v52,
    *(char **)(v5 + 128),
    (char *)(*(_QWORD *)(v5 + 136) + *(_QWORD *)(v5 + 128)),
    v47);
LABEL_149:
  v55 = *(_BYTE *)(((v48 + 64) >> 3) + 0x7FFF8000);
  if ( v55 && v55 <= 3 )
  {
    v44 = (struct _Unwind_Exception *)__asan_report_store4(v48 + 64);
    v56 = *(void **)(v5 + 104);
    if ( v56 )
      operator delete(v56);
    goto LABEL_127;
  }
  *(_DWORD *)(v48 + 64) = 1;
  *(_QWORD *)(v5 + 104) = 0LL;
  *(_QWORD *)(v5 + 72) = v48;
  *(_QWORD *)(v5 + 64) = v48 + 16;
LABEL_89:
  if ( !*(_QWORD *)(v5 + 64) )
  {
    common::milog::MiLogStream::MiLogStream(
      &v79,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/monitor_report.cpp",
      "addValueWithIgnoreLable",
      399);
    common::milog::MiLogStream::operator()(
      &v79,
      "create MonitorValue failed, type=%u, monitor_value=%u",
      (unsigned int)type,
      (unsigned int)monitor_value);
    common::milog::MiLogStream::~MiLogStream(&v79);
    v57 = *(_QWORD *)(v5 + 72);
    if ( !v57 )
      goto LABEL_58;
    v58 = (volatile signed __int32 *)(v57 + 8);
    if ( &_pthread_key_create )
    {
      v59 = *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v58 & 7) + 3) < v59 || !v59 )
      {
        v60 = _InterlockedExchangeAdd(v58, 0xFFFFFFFF);
        goto LABEL_159;
      }
      __asan_report_store4(v58);
    }
    v64 = *(_BYTE *)(((v57 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v57 + 8) & 7) + 3) >= v64 && v64 )
    {
      __asan_report_load4(v57 + 8);
      goto LABEL_175;
    }
    v60 = *(_DWORD *)(v57 + 8);
    *(_DWORD *)(v57 + 8) = v60 - 1;
LABEL_159:
    if ( v60 != 1 )
      goto LABEL_58;
    if ( !*(_BYTE *)((v57 >> 3) + 0x7FFF8000) )
    {
      v61 = *(_QWORD *)v57 + 16LL;
      if ( !*(_BYTE *)((v61 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v57 + 16LL))(v57);
        v61 = v57 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_178;
        v62 = *(_BYTE *)((v61 >> 3) + 0x7FFF8000);
        if ( (char)((v61 & 7) + 3) < v62 || !v62 )
        {
          v63 = _InterlockedExchangeAdd((volatile signed __int32 *)v61, 0xFFFFFFFF);
          goto LABEL_166;
        }
LABEL_177:
        __asan_report_store4(v61);
LABEL_178:
        v65 = *(_BYTE *)(((v57 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v57 + 12) & 7) + 3) >= v65 && v65 )
        {
          __asan_report_load4(v57 + 12);
          goto LABEL_182;
        }
        v63 = *(_DWORD *)(v57 + 12);
        *(_DWORD *)(v57 + 12) = v63 - 1;
LABEL_166:
        if ( v63 != 1 )
          goto LABEL_58;
        if ( !*(_BYTE *)((v57 >> 3) + 0x7FFF8000) )
        {
          p_queue_mu = *(_QWORD *)v57 + 24LL;
          if ( !*(_BYTE *)((p_queue_mu >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v57 + 24LL))(v57);
            goto LABEL_58;
          }
LABEL_183:
          __asan_report_load8(p_queue_mu);
          goto LABEL_184;
        }
LABEL_182:
        p_queue_mu = v57;
        __asan_report_load8(v57);
        goto LABEL_183;
      }
LABEL_176:
      __asan_report_load8(v61);
      goto LABEL_177;
    }
LABEL_175:
    v61 = v57;
    __asan_report_load8(v57);
    goto LABEL_176;
  }
  if ( &_pthread_key_create )
  {
    p_queue_mu = (unsigned __int64)&p_monitor_queue->queue_mu_;
    LODWORD(v10) = pthread_mutex_lock(&p_monitor_queue->queue_mu_._M_mutex);
    if ( (_DWORD)v10 )
    {
LABEL_184:
      __asan_handle_no_return(p_queue_mu);
      std::__throw_system_error(v10);
    }
  }
  p_M_first = &p_monitor_queue->queue_.c._M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_first);
    goto LABEL_186;
  }
  p_M_first = &p_monitor_queue->queue_.c._M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_186:
    __asan_report_load8(p_M_first);
    goto LABEL_187;
  }
  p_M_first = &p_monitor_queue->queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_187:
    __asan_report_load8(p_M_first);
    goto LABEL_188;
  }
  p_M_first = &p_monitor_queue->queue_.c._M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_188:
    __asan_report_load8(p_M_first);
    goto LABEL_189;
  }
  p_M_first = &p_monitor_queue->queue_.c._M_impl._M_start._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_189:
    __asan_report_load8(p_M_first);
    goto LABEL_190;
  }
  p_M_first = &p_monitor_queue->queue_.c._M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_190:
    __asan_report_load8(p_M_first);
LABEL_191:
    __asan_report_load4(p_M_first);
    goto LABEL_192;
  }
  p_M_first = &p_monitor_queue->max_size_;
  v31 = *(_BYTE *)(((unsigned __int64)&p_monitor_queue->max_size_ >> 3) + 0x7FFF8000);
  if ( v31 && v31 <= 3 )
    goto LABEL_191;
  max_size = p_monitor_queue->max_size_;
  if ( !max_size
    || p_monitor_queue->queue_.c._M_impl._M_start._M_last
     - p_monitor_queue->queue_.c._M_impl._M_start._M_cur
     + 32
     * (p_monitor_queue->queue_.c._M_impl._M_finish._M_node - p_monitor_queue->queue_.c._M_impl._M_start._M_node - 1)
     + p_monitor_queue->queue_.c._M_impl._M_finish._M_cur
     - p_monitor_queue->queue_.c._M_impl._M_finish._M_first < (unsigned __int64)max_size )
  {
    p_M_first = &p_monitor_queue->queue_.c._M_impl._M_finish;
    if ( !*(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      M_cur = (unsigned __int64)p_monitor_queue->queue_.c._M_impl._M_finish._M_cur;
      p_M_last = (__int64)&p_monitor_queue->queue_.c._M_impl._M_finish._M_last;
      v35 = (unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish._M_last >> 3;
      if ( !*(_BYTE *)(v35 + 0x7FFF8000) )
      {
        if ( (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Elt_pointer)M_cur == &p_monitor_queue->queue_.c._M_impl._M_finish._M_last[-1] )
        {
LABEL_201:
          std::deque<std::shared_ptr<MonitorValue>>::_M_push_back_aux<std::shared_ptr<MonitorValue> const&>(
            &p_monitor_queue->queue_.c,
            (const std::shared_ptr<MonitorValue> *)(v5 + 64),
            (const std::shared_ptr<MonitorValue> *)v35);
          goto LABEL_113;
        }
        if ( !*(_BYTE *)((M_cur >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)M_cur = *(_QWORD *)(v5 + 64);
          v36 = *(_QWORD *)(v5 + 72);
          v37 = (volatile signed __int32 *)(M_cur + 8);
          if ( !*(_BYTE *)(((M_cur + 8) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(M_cur + 8) = v36;
            if ( !v36 )
            {
LABEL_112:
              ++p_monitor_queue->queue_.c._M_impl._M_finish._M_cur;
              goto LABEL_113;
            }
            v38 = (volatile signed __int32 *)(v36 + 8);
            if ( !&_pthread_key_create )
              goto LABEL_197;
            v39 = *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000);
            if ( (char)(((unsigned __int8)v38 & 7) + 3) < v39 || !v39 )
            {
              _InterlockedAdd(v38, 1u);
              goto LABEL_112;
            }
LABEL_196:
            v36 = __asan_report_store4(v38);
LABEL_197:
            v66 = *(_BYTE *)(((unsigned __int64)(v36 + 8) >> 3) + 0x7FFF8000);
            if ( (char)(((v36 + 8) & 7) + 3) < v66 || !v66 )
            {
              ++*(_DWORD *)(v36 + 8);
              goto LABEL_112;
            }
            __asan_report_load4(v36 + 8);
            goto LABEL_201;
          }
LABEL_195:
          v38 = v37;
          __asan_report_store8(v37);
          goto LABEL_196;
        }
LABEL_194:
        __asan_report_store8(M_cur);
        goto LABEL_195;
      }
LABEL_193:
      M_cur = p_M_last;
      __asan_report_load8(p_M_last);
      goto LABEL_194;
    }
LABEL_192:
    p_M_last = __asan_report_load8(p_M_first);
    goto LABEL_193;
  }
LABEL_113:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_monitor_queue->queue_mu_._M_mutex);
  v40 = *(_QWORD *)(v5 + 72);
  if ( v40 )
  {
    v41 = (volatile signed __int32 *)(v40 + 8);
    if ( &_pthread_key_create )
    {
      v42 = *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v41 & 7) + 3) < v42 || !v42 )
      {
        v43 = _InterlockedExchangeAdd(v41, 0xFFFFFFFF);
        goto LABEL_120;
      }
      __asan_report_store4(v41);
    }
    v68 = *(_BYTE *)(((v40 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v40 + 8) & 7) + 3) >= v68 && v68 )
    {
      __asan_report_load4(v40 + 8);
      goto LABEL_209;
    }
    v43 = *(_DWORD *)(v40 + 8);
    *(_DWORD *)(v40 + 8) = v43 - 1;
LABEL_120:
    if ( v43 != 1 )
      goto LABEL_121;
LABEL_209:
    if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
    {
      v69 = v40;
      __asan_report_load8(v40);
    }
    else
    {
      v69 = *(_QWORD *)v40 + 16LL;
      if ( !*(_BYTE *)((v69 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v40 + 16LL))(v40);
        v69 = v40 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_222;
        v70 = *(_BYTE *)((v69 >> 3) + 0x7FFF8000);
        if ( (char)((v69 & 7) + 3) < v70 || !v70 )
        {
          v71 = _InterlockedExchangeAdd((volatile signed __int32 *)v69, 0xFFFFFFFF);
          goto LABEL_215;
        }
LABEL_221:
        __asan_report_store4(v69);
LABEL_222:
        v73 = *(_BYTE *)(((v40 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v40 + 12) & 7) + 3) >= v73 && v73 )
        {
          __asan_report_load4(v40 + 12);
          goto LABEL_226;
        }
        v71 = *(_DWORD *)(v40 + 12);
        *(_DWORD *)(v40 + 12) = v71 - 1;
LABEL_215:
        if ( v71 != 1 )
          goto LABEL_121;
        if ( !*(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
        {
          v72 = *(_QWORD *)v40 + 24LL;
          if ( !*(_BYTE *)((v72 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v40 + 24LL))(v40);
            goto LABEL_121;
          }
          goto LABEL_227;
        }
LABEL_226:
        v72 = v40;
        __asan_report_load8(v40);
LABEL_227:
        v44 = (struct _Unwind_Exception *)__asan_report_load8(v72);
        common::milog::MiLogStream::~MiLogStream(&v79);
        v67 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v5 + 72);
        if ( v67 )
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v67);
        goto LABEL_127;
      }
    }
    __asan_report_load8(v69);
    goto LABEL_221;
  }
LABEL_121:
  v21 = *(char **)(v5 + 128);
  if ( v21 != (char *)(v5 + 144) )
LABEL_59:
    operator delete(v21);
LABEL_5:
  if ( v80 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 407: range 0000000014E37C3A-0000000014E38BE2
void __fastcall MonitorReport::addValue(MonitorReport *const this, ReportType type, int32_t monitor_value)
{
  unsigned __int64 ostr; // r14
  unsigned __int64 v4; // rbp
  _DWORD *v5; // r12
  char v6; // al
  __int64 v7; // rax
  common::tools::SafeQueue<std::shared_ptr<MonitorValue> > *p_monitor_queue; // rbx
  unsigned __int64 v9; // r15
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer *p_M_node; // rdi
  pthread_mutex_t *v11; // r13
  int v12; // r14d
  void *p_M_finish; // rdi
  __int64 v14; // rbx
  common::milog::MilogStringStream *p_cur; // rdi
  char v16; // al
  std::forward_iterator_tag v17; // cl
  char *cur; // rdi
  size_t v19; // rbx
  char *v20; // rdi
  unsigned __int64 v21; // rdi
  char v22; // al
  char v23; // dl
  char v24; // al
  std::string *v25; // rdi
  char v26; // dl
  char v27; // al
  unsigned __int64 p_queue_mu; // rdi
  void *p_M_first; // rdi
  char v30; // dl
  uint32_t max_size; // edx
  unsigned __int64 M_cur; // rdi
  __int64 p_M_last; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  volatile signed __int32 *v36; // rdx
  volatile signed __int32 *v37; // rdi
  char v38; // dl
  unsigned __int64 v39; // rbx
  volatile signed __int32 *v40; // rdi
  char v41; // dl
  signed __int32 v42; // eax
  struct _Unwind_Exception *v43; // rbx
  std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2> *v44; // rsi
  char *v45; // rdi
  std::forward_iterator_tag v46; // cl
  unsigned __int64 v47; // r14
  unsigned __int64 v48; // rdi
  char v49; // al
  char v50; // dl
  std::string *v51; // rdi
  char v52; // al
  char v53; // dl
  char v54; // al
  void *v55; // rdi
  unsigned __int64 v56; // rbx
  volatile signed __int32 *v57; // rdi
  char v58; // dl
  signed __int32 v59; // eax
  unsigned __int64 v60; // rdi
  char v61; // dl
  signed __int32 v62; // eax
  char v63; // dl
  char v64; // dl
  char v65; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v66; // rdi
  char v67; // dl
  unsigned __int64 v68; // rdi
  char v69; // dl
  signed __int32 v70; // eax
  unsigned __int64 v71; // rdi
  char v72; // dl
  int cur_ms_timestamp; // [rsp+18h] [rbp-120h]
  uint64_t cur_ms_timestampa; // [rsp+18h] [rbp-120h]
  uint64_t cur_ms_timestampb; // [rsp+18h] [rbp-120h]
  common::milog::MiLogStream v77; // [rsp+20h] [rbp-118h] BYREF
  char v78[248]; // [rsp+40h] [rbp-F8h] BYREF

  ostr = (unsigned __int64)this;
  v4 = (unsigned __int64)v78;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v4 = v7;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 1 4 __a2 64 16 19 monitor_val_ptr:426 96 16 7 __guard 128 32 16 lable_string:420";
  *(_QWORD *)(v4 + 16) = MonitorReport::addValue;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862725] = -202116109;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000);
  if ( v6 <= (((unsigned __int8)this + 1) & 7) && v6 )
  {
    __asan_report_load1(&this->is_run_);
  }
  else if ( !this->is_run_ )
  {
    goto LABEL_5;
  }
  p_monitor_queue = &this->monitor_queue_;
  LODWORD(v9) = (_DWORD)this + 448;
  if ( &_pthread_key_create )
  {
    cur_ms_timestamp = pthread_mutex_lock(&this->monitor_queue_.queue_mu_._M_mutex);
    if ( cur_ms_timestamp )
    {
      __asan_handle_no_return(&this->monitor_queue_.queue_mu_);
      std::__throw_system_error(cur_ms_timestamp);
    }
  }
  p_M_node = &this->monitor_queue_.queue_.c._M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((ostr + 432) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_24;
  }
  p_M_node = (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer *)(ostr + 400);
  if ( *(_BYTE *)(((ostr + 400) >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8(p_M_node);
    goto LABEL_25;
  }
  p_M_node = (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer *)(ostr + 408);
  if ( *(_BYTE *)(((ostr + 408) >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8(p_M_node);
    goto LABEL_26;
  }
  p_M_node = (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer *)(ostr + 416);
  if ( *(_BYTE *)(((ostr + 416) >> 3) + 0x7FFF8000) )
  {
LABEL_26:
    __asan_report_load8(p_M_node);
    goto LABEL_27;
  }
  p_M_node = (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer *)(ostr + 392);
  if ( *(_BYTE *)(((ostr + 392) >> 3) + 0x7FFF8000) )
  {
LABEL_27:
    __asan_report_load8(p_M_node);
    goto LABEL_28;
  }
  p_M_node = (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer *)(ostr + 376);
  if ( *(_BYTE *)(((ostr + 376) >> 3) + 0x7FFF8000) )
  {
LABEL_28:
    __asan_report_load8(p_M_node);
    goto LABEL_29;
  }
  cur_ms_timestampa = ((__int64)(*(_QWORD *)(ostr + 392) - *(_QWORD *)(ostr + 376)) >> 4)
                    + 32 * (((__int64)(*(_QWORD *)(ostr + 432) - *(_QWORD *)(ostr + 400)) >> 3) - 1)
                    + ((__int64)(*(_QWORD *)(ostr + 408) - *(_QWORD *)(ostr + 416)) >> 4);
  if ( &_pthread_key_create )
    pthread_mutex_unlock((pthread_mutex_t *)(ostr + 448));
  if ( cur_ms_timestampa > 0xEA5F )
  {
LABEL_29:
    common::milog::MiLogStream::MiLogStream(
      &v77,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/monitor_report.cpp",
      "addValue",
      415);
    v11 = (pthread_mutex_t *)(ostr + 448);
    if ( &_pthread_key_create )
    {
      v12 = pthread_mutex_lock((pthread_mutex_t *)(ostr + 448));
      if ( v12 )
      {
        __asan_handle_no_return(&p_monitor_queue->queue_mu_);
        std::__throw_system_error(v12);
      }
    }
    p_M_finish = &p_monitor_queue->queue_.c._M_impl._M_finish._M_node;
    if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_finish);
    }
    else
    {
      p_M_finish = &p_monitor_queue->queue_.c._M_impl._M_start._M_node;
      if ( !*(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      {
        p_M_finish = &p_monitor_queue->queue_.c._M_impl._M_finish;
        if ( !*(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
        {
          p_M_finish = &p_monitor_queue->queue_.c._M_impl._M_finish._M_first;
          if ( !*(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
          {
            p_M_finish = &p_monitor_queue->queue_.c._M_impl._M_start._M_last;
            if ( !*(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
            {
              p_M_finish = &p_monitor_queue->queue_.c._M_impl._M_start;
              if ( !*(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
              {
                v14 = 32
                    * (p_monitor_queue->queue_.c._M_impl._M_finish._M_node
                     - p_monitor_queue->queue_.c._M_impl._M_start._M_node
                     - 1)
                    + p_monitor_queue->queue_.c._M_impl._M_finish._M_cur
                    - p_monitor_queue->queue_.c._M_impl._M_finish._M_first
                    + p_monitor_queue->queue_.c._M_impl._M_start._M_last
                    - p_monitor_queue->queue_.c._M_impl._M_start._M_cur;
                if ( &_pthread_key_create )
                  pthread_mutex_unlock(v11);
                common::milog::MiLogStream::operator()(
                  &v77,
                  "[MonitorReport] monitor_queue_.size=%lu, max_queue_size=%u",
                  v14,
                  60000LL);
                goto LABEL_47;
              }
LABEL_46:
              __asan_report_load8(p_M_finish);
LABEL_47:
              common::milog::MiLogStream::~MiLogStream(&v77);
              goto LABEL_5;
            }
LABEL_45:
            __asan_report_load8(p_M_finish);
            goto LABEL_46;
          }
LABEL_44:
          __asan_report_load8(p_M_finish);
          goto LABEL_45;
        }
LABEL_43:
        __asan_report_load8(p_M_finish);
        goto LABEL_44;
      }
    }
    __asan_report_load8(p_M_finish);
    goto LABEL_43;
  }
  cur_ms_timestampb = common::tools::TimeUtils::getNowMs();
  *(_QWORD *)(v4 + 128) = v4 + 144;
  *(_QWORD *)(v4 + 136) = 0LL;
  *(_BYTE *)(v4 + 144) = 0;
  if ( MonitorReport::constructLabelStringFromContext((MonitorReport *const)ostr, (std::string *)(v4 + 128)) )
  {
    common::milog::MiLogStream::MiLogStream(
      &v77,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/monitor_report.cpp",
      "addValue",
      423);
    ostr = (unsigned __int64)v77.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v77.ostr_ >> 3) + 0x7FFF8000) )
    {
      p_cur = v77.ostr_;
      __asan_report_load8(v77.ostr_);
    }
    else
    {
      p_monitor_queue = (common::tools::SafeQueue<std::shared_ptr<MonitorValue> > *)(v77.ostr_->buffer_.data_ + 0x4000);
      p_cur = (common::milog::MilogStringStream *)&v77.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v77.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v77.ostr_->buffer_.cur_;
        v19 = (int)p_monitor_queue - (int)cur;
        if ( v19 > 0x2A )
          v19 = 43LL;
        memcpy(cur, "construct label string failed, report_type:", v19);
        *(_QWORD *)(ostr + 8) += v19;
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(v77.ostr_, type);
        common::milog::MiLogStream::~MiLogStream(&v77);
LABEL_58:
        v20 = *(char **)(v4 + 128);
        if ( v20 == (char *)(v4 + 144) )
          goto LABEL_5;
        goto LABEL_59;
      }
    }
    __asan_report_load8(p_cur);
    goto LABEL_62;
  }
  p_cur = (common::milog::MilogStringStream *)&common::tools::perf::MemoryPerf::is_record;
  v16 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
  if ( v16 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v16 )
  {
LABEL_62:
    __asan_report_load1(p_cur);
    goto LABEL_63;
  }
  if ( common::tools::perf::MemoryPerf::is_record )
  {
    *(_QWORD *)(v4 + 64) = 0LL;
    std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2>,MonitorValue>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2>,MonitorValue> *)(v4 + 48));
LABEL_63:
    v9 = *(_QWORD *)(v4 + 104);
    v21 = v9 + 8;
    v22 = *(_BYTE *)(((v9 + 8) >> 3) + 0x7FFF8000);
    if ( v22 && v22 <= 3 )
    {
      __asan_report_store4(v21);
    }
    else
    {
      *(_DWORD *)(v9 + 8) = 1;
      v21 = v9 + 12;
      v23 = *(_BYTE *)(((v9 + 12) >> 3) + 0x7FFF8000);
      if ( (char)(((v9 + 12) & 7) + 3) < v23 || !v23 )
      {
        *(_DWORD *)(v9 + 12) = 1;
        if ( !*(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v9 = &`vtable for'std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2>
                        + 2;
          ostr = v9 + 16;
          if ( !common::tools::perf::MemoryPerf::is_record )
            goto LABEL_75;
          v77.log_ = (common::milog::MiLog *)&v77.ostr_ptr_._M_refcount;
          std::string::_M_construct<char const*>((std::string *const)&v77, "12MonitorValue", "", v17);
LABEL_73:
          common::tools::perf::MemoryPerfRecorder::construct(
            &common::tools::perf::MemoryPerf::recorder,
            (const std::string *)&v77,
            0x38uLL);
          if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v77.log_ != &v77.ostr_ptr_._M_refcount )
            operator delete(v77.log_);
LABEL_75:
          v24 = *(_BYTE *)((ostr >> 3) + 0x7FFF8000);
          if ( v24 && v24 <= 3 )
          {
            v25 = (std::string *)ostr;
            __asan_report_store4(ostr);
          }
          else
          {
            *(_DWORD *)(v9 + 16) = type;
            v25 = (std::string *)(ostr + 4);
            v26 = *(_BYTE *)(((ostr + 4) >> 3) + 0x7FFF8000);
            if ( (char)(((ostr + 4) & 7) + 3) < v26 || !v26 )
            {
              *(_DWORD *)(ostr + 4) = monitor_value;
              v25 = (std::string *)(ostr + 8);
              if ( !*(_BYTE *)(((ostr + 8) >> 3) + 0x7FFF8000) )
              {
                *(_QWORD *)(ostr + 8) = cur_ms_timestampb;
                v25 = (std::string *)(ostr + 16);
                if ( !*(_BYTE *)(((ostr + 16) >> 3) + 0x7FFF8000) )
                {
                  *(_QWORD *)(ostr + 16) = ostr + 32;
                  std::string::_M_construct<char *>(
                    v25,
                    *(char **)(v4 + 128),
                    (char *)(*(_QWORD *)(v4 + 136) + *(_QWORD *)(v4 + 128)),
                    v17);
                  goto LABEL_86;
                }
LABEL_85:
                __asan_report_store8(v25);
LABEL_86:
                v27 = *(_BYTE *)(((ostr + 48) >> 3) + 0x7FFF8000);
                if ( !v27 || v27 > 3 )
                {
                  *(_DWORD *)(ostr + 48) = 1;
                  *(_QWORD *)(v4 + 104) = 0LL;
                  *(_QWORD *)(v4 + 72) = v9;
                  *(_QWORD *)(v4 + 64) = ostr;
                  goto LABEL_89;
                }
                v43 = (struct _Unwind_Exception *)__asan_report_store4(ostr + 48);
                if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v77.log_ != &v77.ostr_ptr_._M_refcount )
                  operator delete(v77.log_);
                v44 = *(std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2> **)(v4 + 104);
                if ( v44 )
                  common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2>,MonitorValue>::deallocate(
                    *(common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2>,MonitorValue> *const *)(v4 + 96),
                    v44,
                    1uLL);
LABEL_127:
                v45 = *(char **)(v4 + 128);
                if ( v45 != (char *)(v4 + 144) )
                  operator delete(v45);
                __asan_handle_no_return(v45);
                _Unwind_Resume(v43);
              }
LABEL_84:
              __asan_report_store8(v25);
              goto LABEL_85;
            }
          }
          __asan_report_store4(v25);
          goto LABEL_84;
        }
LABEL_72:
        __asan_report_store8(v9);
        goto LABEL_73;
      }
    }
    __asan_report_store4(v21);
    goto LABEL_72;
  }
  *(_QWORD *)(v4 + 64) = 0LL;
  std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<MonitorValue,std::allocator<MonitorValue>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<MonitorValue,std::allocator<MonitorValue>,(__gnu_cxx::_Lock_policy)2> > *)(v4 + 48));
  v47 = *(_QWORD *)(v4 + 104);
  v48 = v47 + 8;
  v49 = *(_BYTE *)(((v47 + 8) >> 3) + 0x7FFF8000);
  if ( v49 && v49 <= 3 )
  {
    __asan_report_store4(v48);
LABEL_143:
    __asan_report_store4(v48);
    goto LABEL_144;
  }
  *(_DWORD *)(v47 + 8) = 1;
  v48 = v47 + 12;
  v50 = *(_BYTE *)(((v47 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v47 + 12) & 7) + 3) >= v50 && v50 )
    goto LABEL_143;
  *(_DWORD *)(v47 + 12) = 1;
  if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
  {
LABEL_144:
    v51 = (std::string *)v47;
    __asan_report_store8(v47);
LABEL_145:
    __asan_report_store4(v51);
LABEL_146:
    __asan_report_store4(v51);
    goto LABEL_147;
  }
  *(_QWORD *)v47 = &`vtable for'std::_Sp_counted_ptr_inplace<MonitorValue,std::allocator<MonitorValue>,(__gnu_cxx::_Lock_policy)2>
                 + 2;
  v51 = (std::string *)(v47 + 16);
  v52 = *(_BYTE *)(((v47 + 16) >> 3) + 0x7FFF8000);
  if ( v52 && v52 <= 3 )
    goto LABEL_145;
  *(_DWORD *)(v47 + 16) = type;
  v51 = (std::string *)(v47 + 20);
  v53 = *(_BYTE *)(((v47 + 20) >> 3) + 0x7FFF8000);
  if ( (char)(((v47 + 20) & 7) + 3) >= v53 && v53 )
    goto LABEL_146;
  *(_DWORD *)(v47 + 20) = monitor_value;
  v51 = (std::string *)(v47 + 24);
  if ( *(_BYTE *)(((v47 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_147:
    __asan_report_store8(v51);
    goto LABEL_148;
  }
  *(_QWORD *)(v47 + 24) = cur_ms_timestampb;
  v51 = (std::string *)(v47 + 32);
  if ( *(_BYTE *)(((v47 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_148:
    __asan_report_store8(v51);
    goto LABEL_149;
  }
  *(_QWORD *)(v47 + 32) = v47 + 48;
  std::string::_M_construct<char *>(
    v51,
    *(char **)(v4 + 128),
    (char *)(*(_QWORD *)(v4 + 136) + *(_QWORD *)(v4 + 128)),
    v46);
LABEL_149:
  v54 = *(_BYTE *)(((v47 + 64) >> 3) + 0x7FFF8000);
  if ( v54 && v54 <= 3 )
  {
    v43 = (struct _Unwind_Exception *)__asan_report_store4(v47 + 64);
    v55 = *(void **)(v4 + 104);
    if ( v55 )
      operator delete(v55);
    goto LABEL_127;
  }
  *(_DWORD *)(v47 + 64) = 1;
  *(_QWORD *)(v4 + 104) = 0LL;
  *(_QWORD *)(v4 + 72) = v47;
  *(_QWORD *)(v4 + 64) = v47 + 16;
LABEL_89:
  if ( !*(_QWORD *)(v4 + 64) )
  {
    common::milog::MiLogStream::MiLogStream(
      &v77,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/monitor_report.cpp",
      "addValue",
      429);
    common::milog::MiLogStream::operator()(
      &v77,
      "create MonitorValue failed, type=%u, monitor_value=%u",
      (unsigned int)type,
      (unsigned int)monitor_value);
    common::milog::MiLogStream::~MiLogStream(&v77);
    v56 = *(_QWORD *)(v4 + 72);
    if ( !v56 )
      goto LABEL_58;
    v57 = (volatile signed __int32 *)(v56 + 8);
    if ( &_pthread_key_create )
    {
      v58 = *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v57 & 7) + 3) < v58 || !v58 )
      {
        v59 = _InterlockedExchangeAdd(v57, 0xFFFFFFFF);
        goto LABEL_159;
      }
      __asan_report_store4(v57);
    }
    v63 = *(_BYTE *)(((v56 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v56 + 8) & 7) + 3) >= v63 && v63 )
    {
      __asan_report_load4(v56 + 8);
      goto LABEL_175;
    }
    v59 = *(_DWORD *)(v56 + 8);
    *(_DWORD *)(v56 + 8) = v59 - 1;
LABEL_159:
    if ( v59 != 1 )
      goto LABEL_58;
    if ( !*(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
    {
      v60 = *(_QWORD *)v56 + 16LL;
      if ( !*(_BYTE *)((v60 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v56 + 16LL))(v56);
        v60 = v56 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_178;
        v61 = *(_BYTE *)((v60 >> 3) + 0x7FFF8000);
        if ( (char)((v60 & 7) + 3) < v61 || !v61 )
        {
          v62 = _InterlockedExchangeAdd((volatile signed __int32 *)v60, 0xFFFFFFFF);
          goto LABEL_166;
        }
LABEL_177:
        __asan_report_store4(v60);
LABEL_178:
        v64 = *(_BYTE *)(((v56 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v56 + 12) & 7) + 3) >= v64 && v64 )
        {
          __asan_report_load4(v56 + 12);
          goto LABEL_182;
        }
        v62 = *(_DWORD *)(v56 + 12);
        *(_DWORD *)(v56 + 12) = v62 - 1;
LABEL_166:
        if ( v62 != 1 )
          goto LABEL_58;
        if ( !*(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
        {
          p_queue_mu = *(_QWORD *)v56 + 24LL;
          if ( !*(_BYTE *)((p_queue_mu >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v56 + 24LL))(v56);
            goto LABEL_58;
          }
LABEL_183:
          __asan_report_load8(p_queue_mu);
          goto LABEL_184;
        }
LABEL_182:
        p_queue_mu = v56;
        __asan_report_load8(v56);
        goto LABEL_183;
      }
LABEL_176:
      __asan_report_load8(v60);
      goto LABEL_177;
    }
LABEL_175:
    v60 = v56;
    __asan_report_load8(v56);
    goto LABEL_176;
  }
  if ( &_pthread_key_create )
  {
    p_queue_mu = (unsigned __int64)&p_monitor_queue->queue_mu_;
    LODWORD(v9) = pthread_mutex_lock(&p_monitor_queue->queue_mu_._M_mutex);
    if ( (_DWORD)v9 )
    {
LABEL_184:
      __asan_handle_no_return(p_queue_mu);
      std::__throw_system_error(v9);
    }
  }
  p_M_first = &p_monitor_queue->queue_.c._M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_first);
    goto LABEL_186;
  }
  p_M_first = &p_monitor_queue->queue_.c._M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_186:
    __asan_report_load8(p_M_first);
    goto LABEL_187;
  }
  p_M_first = &p_monitor_queue->queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_187:
    __asan_report_load8(p_M_first);
    goto LABEL_188;
  }
  p_M_first = &p_monitor_queue->queue_.c._M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_188:
    __asan_report_load8(p_M_first);
    goto LABEL_189;
  }
  p_M_first = &p_monitor_queue->queue_.c._M_impl._M_start._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_189:
    __asan_report_load8(p_M_first);
    goto LABEL_190;
  }
  p_M_first = &p_monitor_queue->queue_.c._M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_190:
    __asan_report_load8(p_M_first);
LABEL_191:
    __asan_report_load4(p_M_first);
    goto LABEL_192;
  }
  p_M_first = &p_monitor_queue->max_size_;
  v30 = *(_BYTE *)(((unsigned __int64)&p_monitor_queue->max_size_ >> 3) + 0x7FFF8000);
  if ( v30 && v30 <= 3 )
    goto LABEL_191;
  max_size = p_monitor_queue->max_size_;
  if ( !max_size
    || p_monitor_queue->queue_.c._M_impl._M_start._M_last
     - p_monitor_queue->queue_.c._M_impl._M_start._M_cur
     + 32
     * (p_monitor_queue->queue_.c._M_impl._M_finish._M_node - p_monitor_queue->queue_.c._M_impl._M_start._M_node - 1)
     + p_monitor_queue->queue_.c._M_impl._M_finish._M_cur
     - p_monitor_queue->queue_.c._M_impl._M_finish._M_first < (unsigned __int64)max_size )
  {
    p_M_first = &p_monitor_queue->queue_.c._M_impl._M_finish;
    if ( !*(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      M_cur = (unsigned __int64)p_monitor_queue->queue_.c._M_impl._M_finish._M_cur;
      p_M_last = (__int64)&p_monitor_queue->queue_.c._M_impl._M_finish._M_last;
      v34 = (unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish._M_last >> 3;
      if ( !*(_BYTE *)(v34 + 0x7FFF8000) )
      {
        if ( (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Elt_pointer)M_cur == &p_monitor_queue->queue_.c._M_impl._M_finish._M_last[-1] )
        {
LABEL_201:
          std::deque<std::shared_ptr<MonitorValue>>::_M_push_back_aux<std::shared_ptr<MonitorValue> const&>(
            &p_monitor_queue->queue_.c,
            (const std::shared_ptr<MonitorValue> *)(v4 + 64),
            (const std::shared_ptr<MonitorValue> *)v34);
          goto LABEL_113;
        }
        if ( !*(_BYTE *)((M_cur >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)M_cur = *(_QWORD *)(v4 + 64);
          v35 = *(_QWORD *)(v4 + 72);
          v36 = (volatile signed __int32 *)(M_cur + 8);
          if ( !*(_BYTE *)(((M_cur + 8) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(M_cur + 8) = v35;
            if ( !v35 )
            {
LABEL_112:
              ++p_monitor_queue->queue_.c._M_impl._M_finish._M_cur;
              goto LABEL_113;
            }
            v37 = (volatile signed __int32 *)(v35 + 8);
            if ( !&_pthread_key_create )
              goto LABEL_197;
            v38 = *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000);
            if ( (char)(((unsigned __int8)v37 & 7) + 3) < v38 || !v38 )
            {
              _InterlockedAdd(v37, 1u);
              goto LABEL_112;
            }
LABEL_196:
            v35 = __asan_report_store4(v37);
LABEL_197:
            v65 = *(_BYTE *)(((unsigned __int64)(v35 + 8) >> 3) + 0x7FFF8000);
            if ( (char)(((v35 + 8) & 7) + 3) < v65 || !v65 )
            {
              ++*(_DWORD *)(v35 + 8);
              goto LABEL_112;
            }
            __asan_report_load4(v35 + 8);
            goto LABEL_201;
          }
LABEL_195:
          v37 = v36;
          __asan_report_store8(v36);
          goto LABEL_196;
        }
LABEL_194:
        __asan_report_store8(M_cur);
        goto LABEL_195;
      }
LABEL_193:
      M_cur = p_M_last;
      __asan_report_load8(p_M_last);
      goto LABEL_194;
    }
LABEL_192:
    p_M_last = __asan_report_load8(p_M_first);
    goto LABEL_193;
  }
LABEL_113:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_monitor_queue->queue_mu_._M_mutex);
  v39 = *(_QWORD *)(v4 + 72);
  if ( v39 )
  {
    v40 = (volatile signed __int32 *)(v39 + 8);
    if ( &_pthread_key_create )
    {
      v41 = *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v40 & 7) + 3) < v41 || !v41 )
      {
        v42 = _InterlockedExchangeAdd(v40, 0xFFFFFFFF);
        goto LABEL_120;
      }
      __asan_report_store4(v40);
    }
    v67 = *(_BYTE *)(((v39 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v39 + 8) & 7) + 3) >= v67 && v67 )
    {
      __asan_report_load4(v39 + 8);
      goto LABEL_209;
    }
    v42 = *(_DWORD *)(v39 + 8);
    *(_DWORD *)(v39 + 8) = v42 - 1;
LABEL_120:
    if ( v42 != 1 )
      goto LABEL_121;
LABEL_209:
    if ( *(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
    {
      v68 = v39;
      __asan_report_load8(v39);
    }
    else
    {
      v68 = *(_QWORD *)v39 + 16LL;
      if ( !*(_BYTE *)((v68 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v39 + 16LL))(v39);
        v68 = v39 + 12;
        if ( !&_pthread_key_create )
          goto LABEL_222;
        v69 = *(_BYTE *)((v68 >> 3) + 0x7FFF8000);
        if ( (char)((v68 & 7) + 3) < v69 || !v69 )
        {
          v70 = _InterlockedExchangeAdd((volatile signed __int32 *)v68, 0xFFFFFFFF);
          goto LABEL_215;
        }
LABEL_221:
        __asan_report_store4(v68);
LABEL_222:
        v72 = *(_BYTE *)(((v39 + 12) >> 3) + 0x7FFF8000);
        if ( (char)(((v39 + 12) & 7) + 3) >= v72 && v72 )
        {
          __asan_report_load4(v39 + 12);
          goto LABEL_226;
        }
        v70 = *(_DWORD *)(v39 + 12);
        *(_DWORD *)(v39 + 12) = v70 - 1;
LABEL_215:
        if ( v70 != 1 )
          goto LABEL_121;
        if ( !*(_BYTE *)((v39 >> 3) + 0x7FFF8000) )
        {
          v71 = *(_QWORD *)v39 + 24LL;
          if ( !*(_BYTE *)((v71 >> 3) + 0x7FFF8000) )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v39 + 24LL))(v39);
            goto LABEL_121;
          }
          goto LABEL_227;
        }
LABEL_226:
        v71 = v39;
        __asan_report_load8(v39);
LABEL_227:
        v43 = (struct _Unwind_Exception *)__asan_report_load8(v71);
        common::milog::MiLogStream::~MiLogStream(&v77);
        v66 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 72);
        if ( v66 )
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v66);
        goto LABEL_127;
      }
    }
    __asan_report_load8(v68);
    goto LABEL_221;
  }
LABEL_121:
  v20 = *(char **)(v4 + 128);
  if ( v20 != (char *)(v4 + 144) )
LABEL_59:
    operator delete(v20);
LABEL_5:
  if ( v78 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 437: range 0000000014E36D22-0000000014E37C34
void __fastcall MonitorReport::addValue(
        MonitorReport *const this,
        unsigned int type,
        unsigned int monitor_value,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rbp
  _DWORD *v5; // r12
  char v6; // al
  __int64 v7; // rax
  common::tools::SafeQueue<std::shared_ptr<MonitorValue> > *p_monitor_queue; // rbx
  std::mutex *p_queue_mu; // r14
  int v10; // r15d
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer *p_M_node; // rdi
  unsigned __int64 v12; // r15
  bool *v13; // rdi
  char v14; // al
  std::forward_iterator_tag v15; // cl
  char v16; // al
  char v17; // dl
  pthread_mutex_t *p_M_mutex; // r13
  int v19; // r14d
  void *p_M_finish; // rdi
  __int64 v21; // rbx
  char v22; // al
  std::string *v23; // rdi
  char v24; // dl
  __int64 v25; // rax
  char v26; // al
  unsigned __int64 v27; // rdi
  void *p_M_first; // rdi
  char v29; // dl
  uint32_t max_size; // edx
  unsigned __int64 M_cur; // rdi
  __int64 p_M_last; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  volatile signed __int32 *v35; // rdx
  volatile signed __int32 *v36; // rdi
  char v37; // dl
  volatile signed __int32 *v38; // rbx
  volatile signed __int32 *v39; // rdi
  char v40; // dl
  signed __int32 v41; // eax
  volatile signed __int32 *v42; // rdi
  char v43; // dl
  signed __int32 v44; // eax
  __int64 v45; // rax
  unsigned __int64 v46; // rdi
  struct _Unwind_Exception *v47; // rbx
  common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2>,MonitorValue> *M_p; // rdi
  std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2> *v49; // rsi
  std::forward_iterator_tag v50; // cl
  unsigned __int64 v51; // r14
  unsigned __int64 v52; // rdi
  char v53; // al
  char v54; // dl
  std::string *v55; // rdi
  char v56; // al
  char v57; // dl
  __int64 v58; // rax
  char v59; // al
  struct _Unwind_Exception *v60; // rbx
  void *v61; // rdi
  volatile signed __int32 *v62; // rdi
  char v63; // dl
  signed __int32 v64; // eax
  volatile signed __int32 *v65; // rdi
  char v66; // dl
  signed __int32 v67; // eax
  char v68; // dl
  char v69; // dl
  char v70; // cl
  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *v71; // rdi
  char v72; // dl
  char v73; // dl
  struct _Unwind_Exception *v74; // rbx
  uint64_t cur_ms_timestamp; // [rsp+18h] [rbp-E0h]
  std::string v78; // [rsp+20h] [rbp-D8h] BYREF
  char v79[184]; // [rsp+40h] [rbp-B8h] BYREF

  v4 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v4 = v7;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 1 4 __a2 64 16 19 monitor_val_ptr:450 96 16 7 __guard";
  *(_QWORD *)(v4 + 16) = MonitorReport::addValue;
  v5 = (_DWORD *)(v4 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000);
  if ( v6 <= (((unsigned __int8)this + 1) & 7) && v6 )
  {
    __asan_report_load1(&this->is_run_);
  }
  else if ( !this->is_run_ )
  {
    goto LABEL_5;
  }
  p_monitor_queue = &this->monitor_queue_;
  p_queue_mu = &this->monitor_queue_.queue_mu_;
  if ( &_pthread_key_create )
  {
    v10 = pthread_mutex_lock(&p_queue_mu->_M_mutex);
    if ( v10 )
    {
      __asan_handle_no_return(p_queue_mu);
      std::__throw_system_error(v10);
    }
  }
  p_M_node = &this->monitor_queue_.queue_.c._M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_node);
    goto LABEL_33;
  }
  p_M_node = &p_monitor_queue->queue_.c._M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    __asan_report_load8(p_M_node);
    goto LABEL_34;
  }
  p_M_node = (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer *)&p_monitor_queue->queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_load8(p_M_node);
    goto LABEL_35;
  }
  p_M_node = (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer *)&p_monitor_queue->queue_.c._M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_load8(p_M_node);
    goto LABEL_36;
  }
  p_M_node = (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer *)&p_monitor_queue->queue_.c._M_impl._M_start._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_36:
    __asan_report_load8(p_M_node);
    goto LABEL_37;
  }
  p_M_node = (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer *)&p_monitor_queue->queue_.c._M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_load8(p_M_node);
    goto LABEL_38;
  }
  v12 = 32
      * (p_monitor_queue->queue_.c._M_impl._M_finish._M_node - p_monitor_queue->queue_.c._M_impl._M_start._M_node - 1)
      + p_monitor_queue->queue_.c._M_impl._M_finish._M_cur
      - p_monitor_queue->queue_.c._M_impl._M_finish._M_first
      + p_monitor_queue->queue_.c._M_impl._M_start._M_last
      - p_monitor_queue->queue_.c._M_impl._M_start._M_cur;
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_queue_mu->_M_mutex);
  if ( v12 > 0xEA5F )
  {
LABEL_38:
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v78,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/monitor_report.cpp",
      "addValue",
      445);
    p_M_mutex = &p_monitor_queue->queue_mu_._M_mutex;
    if ( &_pthread_key_create )
    {
      v19 = pthread_mutex_lock(&p_monitor_queue->queue_mu_._M_mutex);
      if ( v19 )
      {
        __asan_handle_no_return(&p_monitor_queue->queue_mu_);
        std::__throw_system_error(v19);
      }
    }
    p_M_finish = &p_monitor_queue->queue_.c._M_impl._M_finish._M_node;
    if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(p_M_finish);
    }
    else
    {
      p_M_finish = &p_monitor_queue->queue_.c._M_impl._M_start._M_node;
      if ( !*(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
      {
        p_M_finish = &p_monitor_queue->queue_.c._M_impl._M_finish;
        if ( !*(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
        {
          p_M_finish = &p_monitor_queue->queue_.c._M_impl._M_finish._M_first;
          if ( !*(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
          {
            p_M_finish = &p_monitor_queue->queue_.c._M_impl._M_start._M_last;
            if ( !*(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
            {
              p_M_finish = &p_monitor_queue->queue_.c._M_impl._M_start;
              if ( !*(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
              {
                v21 = 32
                    * (p_monitor_queue->queue_.c._M_impl._M_finish._M_node
                     - p_monitor_queue->queue_.c._M_impl._M_start._M_node
                     - 1)
                    + p_monitor_queue->queue_.c._M_impl._M_finish._M_cur
                    - p_monitor_queue->queue_.c._M_impl._M_finish._M_first
                    + p_monitor_queue->queue_.c._M_impl._M_start._M_last
                    - p_monitor_queue->queue_.c._M_impl._M_start._M_cur;
                if ( &_pthread_key_create )
                  pthread_mutex_unlock(p_M_mutex);
                common::milog::MiLogStream::operator()(
                  (common::milog::MiLogStream *const)&v78,
                  "[MonitorReport] monitor_queue_.size=%lu, max_queue_size=%u",
                  v21,
                  60000LL);
                goto LABEL_56;
              }
LABEL_55:
              __asan_report_load8(p_M_finish);
LABEL_56:
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v78);
              goto LABEL_5;
            }
LABEL_54:
            __asan_report_load8(p_M_finish);
            goto LABEL_55;
          }
LABEL_53:
          __asan_report_load8(p_M_finish);
          goto LABEL_54;
        }
LABEL_52:
        __asan_report_load8(p_M_finish);
        goto LABEL_53;
      }
    }
    __asan_report_load8(p_M_finish);
    goto LABEL_52;
  }
  cur_ms_timestamp = common::tools::TimeUtils::getNowMs();
  v13 = &common::tools::perf::MemoryPerf::is_record;
  v14 = *(_BYTE *)(((unsigned __int64)&common::tools::perf::MemoryPerf::is_record >> 3) + 0x7FFF8000);
  if ( v14 <= (char)((unsigned __int64)&common::tools::perf::MemoryPerf::is_record & 7) && v14 )
  {
    __asan_report_load1(&common::tools::perf::MemoryPerf::is_record);
    goto LABEL_58;
  }
  if ( common::tools::perf::MemoryPerf::is_record )
  {
    *(_QWORD *)(v4 + 64) = 0LL;
    std::__allocate_guarded<common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2>,MonitorValue>>((common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2>,MonitorValue> *)(v4 + 48));
    v12 = *(_QWORD *)(v4 + 104);
    v13 = (bool *)(v12 + 8);
    v16 = *(_BYTE *)(((v12 + 8) >> 3) + 0x7FFF8000);
    if ( !v16 || v16 > 3 )
    {
      *(_DWORD *)(v12 + 8) = 1;
      v13 = (bool *)(v12 + 12);
      v17 = *(_BYTE *)(((v12 + 12) >> 3) + 0x7FFF8000);
      if ( (char)(((v12 + 12) & 7) + 3) < v17 || !v17 )
      {
        *(_DWORD *)(v12 + 12) = 1;
        if ( !*(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v12 = &`vtable for'std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2>
                         + 2;
          p_queue_mu = (std::mutex *)(v12 + 16);
          if ( !common::tools::perf::MemoryPerf::is_record )
            goto LABEL_63;
          v78._M_dataplus._M_p = v78._anon_0._M_local_buf;
          std::string::_M_construct<char const*>(&v78, "12MonitorValue", "", v15);
LABEL_61:
          common::tools::perf::MemoryPerfRecorder::construct(&common::tools::perf::MemoryPerf::recorder, &v78, 0x38uLL);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v78._M_dataplus._M_p != &v78._anon_0 )
            operator delete(v78._M_dataplus._M_p);
LABEL_63:
          v22 = *(_BYTE *)(((unsigned __int64)p_queue_mu >> 3) + 0x7FFF8000);
          if ( v22 && v22 <= 3 )
          {
            v23 = (std::string *)p_queue_mu;
            __asan_report_store4(p_queue_mu);
          }
          else
          {
            *(_DWORD *)(v12 + 16) = type;
            v23 = (std::string *)((char *)&p_queue_mu->_M_mutex.__align + 4);
            v24 = *(_BYTE *)((((unsigned __int64)&p_queue_mu->_M_mutex.__align + 4) >> 3) + 0x7FFF8000);
            if ( (char)((((_BYTE)p_queue_mu + 4) & 7) + 3) < v24 || !v24 )
            {
              p_queue_mu->_M_mutex.__data.__count = monitor_value;
              v23 = (std::string *)(&p_queue_mu->_M_mutex.__align + 1);
              if ( !*(_BYTE *)(((unsigned __int64)(&p_queue_mu->_M_mutex.__align + 1) >> 3) + 0x7FFF8000) )
              {
                *(&p_queue_mu->_M_mutex.__align + 1) = cur_ms_timestamp;
                v23 = (std::string *)(&p_queue_mu->_M_mutex.__align + 2);
                if ( !*(_BYTE *)(((unsigned __int64)(&p_queue_mu->_M_mutex.__align + 2) >> 3) + 0x7FFF8000) )
                {
                  *(&p_queue_mu->_M_mutex.__align + 2) = (__int64)&p_queue_mu->_M_mutex.__data.__list.__next;
                  if ( !*(_BYTE *)((a4 >> 3) + 0x7FFF8000) )
                  {
                    v25 = a4 + 8;
                    if ( !*(_BYTE *)(((a4 + 8) >> 3) + 0x7FFF8000) )
                    {
                      std::string::_M_construct<char *>(
                        v23,
                        *(char **)a4,
                        (char *)(*(_QWORD *)(a4 + 8) + *(_QWORD *)a4),
                        v15);
                      goto LABEL_78;
                    }
LABEL_77:
                    __asan_report_load8(v25);
LABEL_78:
                    v26 = *(_BYTE *)(((unsigned __int64)(&p_queue_mu[1]._M_mutex.__align + 1) >> 3) + 0x7FFF8000);
                    if ( v26 && v26 <= 3 )
                    {
                      v47 = (struct _Unwind_Exception *)__asan_report_store4(&p_queue_mu[1]._M_mutex.__align + 1);
                      M_p = (common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2>,MonitorValue> *)v78._M_dataplus._M_p;
                      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v78._M_dataplus._M_p != &v78._anon_0 )
                        operator delete(v78._M_dataplus._M_p);
                      v49 = *(std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2> **)(v4 + 104);
                      if ( v49 )
                      {
                        M_p = *(common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2>,MonitorValue> **)(v4 + 96);
                        common::tools::perf::allocator<std::_Sp_counted_ptr_inplace<MonitorValue,common::tools::perf::allocator<MonitorValue,MonitorValue>,(__gnu_cxx::_Lock_policy)2>,MonitorValue>::deallocate(
                          M_p,
                          v49,
                          1uLL);
                      }
                      __asan_handle_no_return(M_p);
                      _Unwind_Resume(v47);
                    }
                    p_queue_mu[1]._M_mutex.__data.__owner = 1;
                    *(_QWORD *)(v4 + 104) = 0LL;
                    *(_QWORD *)(v4 + 72) = v12;
                    *(_QWORD *)(v4 + 64) = p_queue_mu;
                    goto LABEL_81;
                  }
LABEL_76:
                  v25 = __asan_report_load8(a4);
                  goto LABEL_77;
                }
LABEL_75:
                __asan_report_store8(v23);
                goto LABEL_76;
              }
LABEL_74:
              __asan_report_store8(v23);
              goto LABEL_75;
            }
          }
          __asan_report_store4(v23);
          goto LABEL_74;
        }
LABEL_60:
        __asan_report_store8(v12);
        goto LABEL_61;
      }
LABEL_59:
      __asan_report_store4(v13);
      goto LABEL_60;
    }
LABEL_58:
    __asan_report_store4(v13);
    goto LABEL_59;
  }
  *(_QWORD *)(v4 + 64) = 0LL;
  std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<MonitorValue,std::allocator<MonitorValue>,(__gnu_cxx::_Lock_policy)2>>>((std::allocator<std::_Sp_counted_ptr_inplace<MonitorValue,std::allocator<MonitorValue>,(__gnu_cxx::_Lock_policy)2> > *)(v4 + 48));
  v51 = *(_QWORD *)(v4 + 104);
  v52 = v51 + 8;
  v53 = *(_BYTE *)(((v51 + 8) >> 3) + 0x7FFF8000);
  if ( v53 && v53 <= 3 )
  {
    __asan_report_store4(v52);
LABEL_143:
    __asan_report_store4(v52);
    goto LABEL_144;
  }
  *(_DWORD *)(v51 + 8) = 1;
  v52 = v51 + 12;
  v54 = *(_BYTE *)(((v51 + 12) >> 3) + 0x7FFF8000);
  if ( (char)(((v51 + 12) & 7) + 3) >= v54 && v54 )
    goto LABEL_143;
  *(_DWORD *)(v51 + 12) = 1;
  if ( *(_BYTE *)((v51 >> 3) + 0x7FFF8000) )
  {
LABEL_144:
    v55 = (std::string *)v51;
    __asan_report_store8(v51);
LABEL_145:
    __asan_report_store4(v55);
LABEL_146:
    __asan_report_store4(v55);
    goto LABEL_147;
  }
  *(_QWORD *)v51 = &`vtable for'std::_Sp_counted_ptr_inplace<MonitorValue,std::allocator<MonitorValue>,(__gnu_cxx::_Lock_policy)2>
                 + 2;
  v55 = (std::string *)(v51 + 16);
  v56 = *(_BYTE *)(((v51 + 16) >> 3) + 0x7FFF8000);
  if ( v56 && v56 <= 3 )
    goto LABEL_145;
  *(_DWORD *)(v51 + 16) = type;
  v55 = (std::string *)(v51 + 20);
  v57 = *(_BYTE *)(((v51 + 20) >> 3) + 0x7FFF8000);
  if ( (char)(((v51 + 20) & 7) + 3) >= v57 && v57 )
    goto LABEL_146;
  *(_DWORD *)(v51 + 20) = monitor_value;
  v55 = (std::string *)(v51 + 24);
  if ( *(_BYTE *)(((v51 + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_147:
    __asan_report_store8(v55);
    goto LABEL_148;
  }
  *(_QWORD *)(v51 + 24) = cur_ms_timestamp;
  v55 = (std::string *)(v51 + 32);
  if ( *(_BYTE *)(((v51 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_148:
    __asan_report_store8(v55);
    goto LABEL_149;
  }
  *(_QWORD *)(v51 + 32) = v51 + 48;
  if ( *(_BYTE *)((a4 >> 3) + 0x7FFF8000) )
  {
LABEL_149:
    v58 = __asan_report_load8(a4);
    goto LABEL_150;
  }
  v58 = a4 + 8;
  if ( !*(_BYTE *)(((a4 + 8) >> 3) + 0x7FFF8000) )
  {
    std::string::_M_construct<char *>(v55, *(char **)a4, (char *)(*(_QWORD *)(a4 + 8) + *(_QWORD *)a4), v50);
    goto LABEL_151;
  }
LABEL_150:
  __asan_report_load8(v58);
LABEL_151:
  v59 = *(_BYTE *)(((v51 + 64) >> 3) + 0x7FFF8000);
  if ( v59 && v59 <= 3 )
  {
    v60 = (struct _Unwind_Exception *)__asan_report_store4(v51 + 64);
    v61 = *(void **)(v4 + 104);
    if ( v61 )
      operator delete(v61);
    __asan_handle_no_return(v61);
    _Unwind_Resume(v60);
  }
  *(_DWORD *)(v51 + 64) = 1;
  *(_QWORD *)(v4 + 104) = 0LL;
  *(_QWORD *)(v4 + 72) = v51;
  *(_QWORD *)(v4 + 64) = v51 + 16;
LABEL_81:
  if ( !*(_QWORD *)(v4 + 64) )
  {
    common::milog::MiLogStream::MiLogStream(
      (common::milog::MiLogStream *const)&v78,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/monitor_report.cpp",
      "addValue",
      453);
    common::milog::MiLogStream::operator()(
      (common::milog::MiLogStream *const)&v78,
      "create MonitorValue failed, type=%u, monitor_value=%u",
      type,
      monitor_value);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v78);
    v38 = *(volatile signed __int32 **)(v4 + 72);
    if ( !v38 )
      goto LABEL_5;
    v62 = v38 + 2;
    if ( &_pthread_key_create )
    {
      v63 = *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v62 & 7) + 3) < v63 || !v63 )
      {
        v64 = _InterlockedExchangeAdd(v62, 0xFFFFFFFF);
        goto LABEL_162;
      }
      __asan_report_store4(v62);
    }
    v68 = *(_BYTE *)(((unsigned __int64)(v38 + 2) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v38 + 8) & 7) + 3) >= v68 && v68 )
    {
      __asan_report_load4(v38 + 2);
      goto LABEL_178;
    }
    v64 = *((_DWORD *)v38 + 2);
    *((_DWORD *)v38 + 2) = v64 - 1;
LABEL_162:
    if ( v64 != 1 )
      goto LABEL_5;
    if ( !*(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
    {
      v65 = (volatile signed __int32 *)(*(_QWORD *)v38 + 16LL);
      if ( !*(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        v65 = v38 + 3;
        if ( !&_pthread_key_create )
          goto LABEL_181;
        v66 = *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v65 & 7) + 3) < v66 || !v66 )
        {
          v67 = _InterlockedExchangeAdd(v65, 0xFFFFFFFF);
          goto LABEL_169;
        }
LABEL_180:
        __asan_report_store4(v65);
LABEL_181:
        v69 = *(_BYTE *)(((unsigned __int64)(v38 + 3) >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v38 + 12) & 7) + 3) >= v69 && v69 )
        {
          __asan_report_load4(v38 + 3);
          goto LABEL_185;
        }
        v67 = *((_DWORD *)v38 + 3);
        *((_DWORD *)v38 + 3) = v67 - 1;
LABEL_169:
        if ( v67 != 1 )
          goto LABEL_5;
        if ( !*(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
        {
          v45 = *(_QWORD *)v38;
          v27 = *(_QWORD *)v38 + 24LL;
          if ( !*(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
            goto LABEL_122;
          goto LABEL_186;
        }
LABEL_185:
        v27 = (unsigned __int64)v38;
        __asan_report_load8(v38);
LABEL_186:
        __asan_report_load8(v27);
        goto LABEL_187;
      }
LABEL_179:
      __asan_report_load8(v65);
      goto LABEL_180;
    }
LABEL_178:
    v65 = v38;
    __asan_report_load8(v38);
    goto LABEL_179;
  }
  if ( &_pthread_key_create )
  {
    v27 = (unsigned __int64)&p_monitor_queue->queue_mu_;
    LODWORD(v12) = pthread_mutex_lock(&p_monitor_queue->queue_mu_._M_mutex);
    if ( (_DWORD)v12 )
    {
LABEL_187:
      __asan_handle_no_return(v27);
      std::__throw_system_error(v12);
    }
  }
  p_M_first = &p_monitor_queue->queue_.c._M_impl._M_finish._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(p_M_first);
    goto LABEL_189;
  }
  p_M_first = &p_monitor_queue->queue_.c._M_impl._M_start._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start._M_node >> 3) + 0x7FFF8000) )
  {
LABEL_189:
    __asan_report_load8(p_M_first);
    goto LABEL_190;
  }
  p_M_first = &p_monitor_queue->queue_.c._M_impl._M_finish;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
  {
LABEL_190:
    __asan_report_load8(p_M_first);
    goto LABEL_191;
  }
  p_M_first = &p_monitor_queue->queue_.c._M_impl._M_finish._M_first;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish._M_first >> 3) + 0x7FFF8000) )
  {
LABEL_191:
    __asan_report_load8(p_M_first);
    goto LABEL_192;
  }
  p_M_first = &p_monitor_queue->queue_.c._M_impl._M_start._M_last;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
  {
LABEL_192:
    __asan_report_load8(p_M_first);
    goto LABEL_193;
  }
  p_M_first = &p_monitor_queue->queue_.c._M_impl._M_start;
  if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
  {
LABEL_193:
    __asan_report_load8(p_M_first);
LABEL_194:
    __asan_report_load4(p_M_first);
    goto LABEL_195;
  }
  p_M_first = &p_monitor_queue->max_size_;
  v29 = *(_BYTE *)(((unsigned __int64)&p_monitor_queue->max_size_ >> 3) + 0x7FFF8000);
  if ( v29 && v29 <= 3 )
    goto LABEL_194;
  max_size = p_monitor_queue->max_size_;
  if ( !max_size
    || p_monitor_queue->queue_.c._M_impl._M_start._M_last
     - p_monitor_queue->queue_.c._M_impl._M_start._M_cur
     + 32
     * (p_monitor_queue->queue_.c._M_impl._M_finish._M_node - p_monitor_queue->queue_.c._M_impl._M_start._M_node - 1)
     + p_monitor_queue->queue_.c._M_impl._M_finish._M_cur
     - p_monitor_queue->queue_.c._M_impl._M_finish._M_first < (unsigned __int64)max_size )
  {
    p_M_first = &p_monitor_queue->queue_.c._M_impl._M_finish;
    if ( !*(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
      M_cur = (unsigned __int64)p_monitor_queue->queue_.c._M_impl._M_finish._M_cur;
      p_M_last = (__int64)&p_monitor_queue->queue_.c._M_impl._M_finish._M_last;
      v33 = (unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish._M_last >> 3;
      if ( !*(_BYTE *)(v33 + 0x7FFF8000) )
      {
        if ( (std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Elt_pointer)M_cur == &p_monitor_queue->queue_.c._M_impl._M_finish._M_last[-1] )
        {
LABEL_204:
          std::deque<std::shared_ptr<MonitorValue>>::_M_push_back_aux<std::shared_ptr<MonitorValue> const&>(
            &p_monitor_queue->queue_.c,
            (const std::shared_ptr<MonitorValue> *)(v4 + 64),
            (const std::shared_ptr<MonitorValue> *)v33);
          goto LABEL_105;
        }
        if ( !*(_BYTE *)((M_cur >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)M_cur = *(_QWORD *)(v4 + 64);
          v34 = *(_QWORD *)(v4 + 72);
          v35 = (volatile signed __int32 *)(M_cur + 8);
          if ( !*(_BYTE *)(((M_cur + 8) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(M_cur + 8) = v34;
            if ( !v34 )
            {
LABEL_104:
              ++p_monitor_queue->queue_.c._M_impl._M_finish._M_cur;
              goto LABEL_105;
            }
            v36 = (volatile signed __int32 *)(v34 + 8);
            if ( !&_pthread_key_create )
              goto LABEL_200;
            v37 = *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000);
            if ( (char)(((unsigned __int8)v36 & 7) + 3) < v37 || !v37 )
            {
              _InterlockedAdd(v36, 1u);
              goto LABEL_104;
            }
LABEL_199:
            v34 = __asan_report_store4(v36);
LABEL_200:
            v70 = *(_BYTE *)(((unsigned __int64)(v34 + 8) >> 3) + 0x7FFF8000);
            if ( (char)(((v34 + 8) & 7) + 3) < v70 || !v70 )
            {
              ++*(_DWORD *)(v34 + 8);
              goto LABEL_104;
            }
            __asan_report_load4(v34 + 8);
            goto LABEL_204;
          }
LABEL_198:
          v36 = v35;
          __asan_report_store8(v35);
          goto LABEL_199;
        }
LABEL_197:
        __asan_report_store8(M_cur);
        goto LABEL_198;
      }
LABEL_196:
      M_cur = p_M_last;
      __asan_report_load8(p_M_last);
      goto LABEL_197;
    }
LABEL_195:
    p_M_last = __asan_report_load8(p_M_first);
    goto LABEL_196;
  }
LABEL_105:
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_monitor_queue->queue_mu_._M_mutex);
  v38 = *(volatile signed __int32 **)(v4 + 72);
  if ( v38 )
  {
    v39 = v38 + 2;
    if ( &_pthread_key_create )
    {
      v40 = *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000);
      if ( (char)(((unsigned __int8)v39 & 7) + 3) < v40 || !v40 )
      {
        v41 = _InterlockedExchangeAdd(v39, 0xFFFFFFFF);
        goto LABEL_112;
      }
      __asan_report_store4(v39);
    }
    v72 = *(_BYTE *)(((unsigned __int64)(v38 + 2) >> 3) + 0x7FFF8000);
    if ( (char)((((_BYTE)v38 + 8) & 7) + 3) >= v72 && v72 )
    {
      __asan_report_load4(v38 + 2);
      goto LABEL_213;
    }
    v41 = *((_DWORD *)v38 + 2);
    *((_DWORD *)v38 + 2) = v41 - 1;
LABEL_112:
    if ( v41 != 1 )
      goto LABEL_5;
    if ( !*(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
    {
      v42 = (volatile signed __int32 *)(*(_QWORD *)v38 + 16LL);
      if ( !*(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
      {
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 16LL))(v38);
        v42 = v38 + 3;
        if ( !&_pthread_key_create )
          goto LABEL_216;
        v43 = *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000);
        if ( (char)(((unsigned __int8)v42 & 7) + 3) < v43 || !v43 )
        {
          v44 = _InterlockedExchangeAdd(v42, 0xFFFFFFFF);
          goto LABEL_119;
        }
LABEL_215:
        __asan_report_store4(v42);
LABEL_216:
        v73 = *(_BYTE *)(((unsigned __int64)(v38 + 3) >> 3) + 0x7FFF8000);
        if ( (char)((((_BYTE)v38 + 12) & 7) + 3) >= v73 && v73 )
        {
          __asan_report_load4(v38 + 3);
          goto LABEL_220;
        }
        v44 = *((_DWORD *)v38 + 3);
        *((_DWORD *)v38 + 3) = v44 - 1;
LABEL_119:
        if ( v44 != 1 )
          goto LABEL_5;
        if ( !*(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
        {
          v45 = *(_QWORD *)v38;
          v46 = *(_QWORD *)v38 + 24LL;
          if ( !*(_BYTE *)((v46 >> 3) + 0x7FFF8000) )
          {
LABEL_122:
            (*(void (__fastcall **)(volatile signed __int32 *))(v45 + 24))(v38);
            goto LABEL_5;
          }
LABEL_221:
          v74 = (struct _Unwind_Exception *)__asan_report_load8(v46);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v78);
          v71 = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v4 + 72);
          if ( v71 )
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release(v71);
          __asan_handle_no_return(v71);
          _Unwind_Resume(v74);
        }
LABEL_220:
        v46 = (unsigned __int64)v38;
        __asan_report_load8(v38);
        goto LABEL_221;
      }
LABEL_214:
      __asan_report_load8(v42);
      goto LABEL_215;
    }
LABEL_213:
    v42 = v38;
    __asan_report_load8(v38);
    goto LABEL_214;
  }
LABEL_5:
  if ( v79 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 461: range 0000000014E2ECB4-0000000014E2F251
int32_t __fastcall MonitorReport::constructLabelStringFromContext(MonitorReport *const this, std::string *lable_string)
{
  const std::string *ostr; // rbp
  unsigned __int64 v3; // r15
  _DWORD *v4; // r14
  int32_t ContextData; // eax
  __int64 v6; // rax
  void *p_cur; // rdi
  _BYTE *M_p; // rdi
  char v9; // al
  const std::string *i; // rax
  char *cur; // rdi
  size_t v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  char v16; // dl
  char *v17; // rdi
  char *v18; // rdi
  std::_Rb_tree_node_base *v20; // [rsp+8h] [rbp-190h]
  int32_t v21; // [rsp+14h] [rbp-184h]
  std::string v22; // [rsp+20h] [rbp-178h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-158h] BYREF
  char v24[312]; // [rsp+60h] [rbp-138h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      v3 = v6;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 32 15 encoded_key:472 112 32 17 encoded_value:473 176 48 13 lable_map:462";
  *(_QWORD *)(v3 + 16) = MonitorReport::constructLabelStringFromContext;
  v4 = (_DWORD *)(v3 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862727] = -202116109;
  *(_DWORD *)(v3 + 184) = 0;
  *(_QWORD *)(v3 + 192) = 0LL;
  *(_QWORD *)(v3 + 200) = v3 + 184;
  *(_QWORD *)(v3 + 208) = v3 + 184;
  *(_QWORD *)(v3 + 216) = 0LL;
  ContextData = MonitorReportUtils::getContextData((std::map<std::string,std::string> *)(v3 + 176));
  v21 = ContextData;
  if ( ContextData )
  {
    common::milog::MiLogStream::MiLogStream(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/monitor_report.cpp",
      "constructLabelStringFromContext",
      465);
    ostr = (const std::string *)v23.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v23.ostr_ >> 3) + 0x7FFF8000) )
    {
      p_cur = v23.ostr_;
      __asan_report_load8(v23.ostr_);
    }
    else
    {
      p_cur = &v23.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v23.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v23.ostr_->buffer_.cur_;
        v12 = (size_t)&v23.ostr_->buffer_.data_[-(int)cur + 0x4000];
        if ( v12 > 0x16 )
          v12 = 23LL;
        memcpy(cur, "get context data failed", v12);
        ostr->_M_string_length += v12;
        common::milog::MiLogStream::~MiLogStream(&v23);
        v21 = -1;
        goto LABEL_53;
      }
    }
    __asan_report_load8(p_cur);
    goto LABEL_18;
  }
  p_cur = &lable_string->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&lable_string->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8(p_cur);
    goto LABEL_19;
  }
  lable_string->_M_string_length = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)lable_string >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    M_p = lable_string;
    __asan_report_load8(lable_string);
LABEL_20:
    __asan_report_store1(M_p);
    goto LABEL_21;
  }
  M_p = lable_string->_M_dataplus._M_p;
  v9 = *(_BYTE *)(((unsigned __int64)lable_string->_M_dataplus._M_p >> 3) + 0x7FFF8000);
  if ( v9 <= ((__int64)lable_string->_M_dataplus._M_p & 7) && v9 )
    goto LABEL_20;
  *M_p = 0;
  for ( i = *(const std::string **)(v3 + 200); ; i = (const std::string *)std::_Rb_tree_increment(v20) )
  {
    v20 = (std::_Rb_tree_node_base *)i;
    if ( i == (const std::string *)(v3 + 184) )
      break;
    ostr = i + 2;
    common::tools::StringUtils::urlEncode((std::string *)(v3 + 48), i + 1);
LABEL_21:
    common::tools::StringUtils::urlEncode((std::string *)(v3 + 112), ostr);
    std::operator+<char>(&v22, "/", (const std::string *)(v3 + 48));
    if ( v22._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
    {
      __asan_handle_no_return(&v22);
      std::__throw_length_error("basic_string::append");
    }
    v13 = std::string::_M_append(&v22, "/", 1LL);
    v23.log_ = (common::milog::MiLog *)&v23.ostr_ptr_._M_refcount;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    {
      v13 = __asan_report_load8(v13);
    }
    else
    {
      v14 = v13 + 16;
      if ( *(_QWORD *)v13 != v13 + 16 )
      {
        v23.log_ = *(common::milog::MiLog **)v13;
        v15 = v13 + 16;
        if ( *(_BYTE *)(((v13 + 16) >> 3) + 0x7FFF8000) )
          goto LABEL_37;
        v23.ostr_ptr_._M_refcount._M_pi = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v13 + 16);
        goto LABEL_28;
      }
    }
    v15 = v14;
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v14 >> 3) + 0x7FFF8000) <= (unsigned __int8)(v14 & 7)
      || *(_BYTE *)(((v13 + 31) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v13 + 31) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v13 + 31) & 7) )
    {
      __asan_report_load_n(v14, 16LL);
LABEL_37:
      __asan_report_load8(v15);
LABEL_38:
      __asan_report_load8(v15);
      goto LABEL_39;
    }
    *(__m128i *)&v23.ostr_ptr_._M_refcount._M_pi = _mm_loadu_si128((const __m128i *)(v13 + 16));
LABEL_28:
    v15 = v13 + 8;
    if ( *(_BYTE *)(((v13 + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_38;
    v23.ostr_ptr_._M_ptr = *(std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type **)(v13 + 8);
    *(_QWORD *)v13 = v14;
    *(_QWORD *)(v13 + 8) = 0LL;
    v15 = v13 + 16;
    v16 = *(_BYTE *)(((v13 + 16) >> 3) + 0x7FFF8000);
    if ( v16 > (char)((v13 + 16) & 7) || !v16 )
    {
      *(_BYTE *)(v13 + 16) = 0;
      std::string::_M_append(lable_string, v23.log_, v23.ostr_ptr_._M_ptr);
      goto LABEL_40;
    }
LABEL_39:
    __asan_report_store1(v15);
LABEL_40:
    if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v23.log_ != &v23.ostr_ptr_._M_refcount )
      operator delete(v23.log_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v22._M_dataplus._M_p != &v22._anon_0 )
      operator delete(v22._M_dataplus._M_p);
    std::string::_M_append(lable_string, *(_QWORD *)(v3 + 112), *(_QWORD *)(v3 + 120));
    v17 = *(char **)(v3 + 112);
    if ( v17 != (char *)(v3 + 128) )
      operator delete(v17);
    v18 = *(char **)(v3 + 48);
    if ( v18 != (char *)(v3 + 64) )
      operator delete(v18);
  }
  if ( *(_BYTE *)(((unsigned __int64)&lable_string->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&lable_string->_M_string_length);
  }
  else if ( lable_string->_M_string_length )
  {
    goto LABEL_53;
  }
  v21 = -1;
LABEL_53:
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *const)(v3 + 176),
    *(std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type *)(v3 + 192));
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v21;
};

// Line 487: range 0000000014E2F256-0000000014E2F8E3
int32_t __fastcall MonitorReport::constructLabelStringFromContextIgnoreLabelKey(
        MonitorReport *const this,
        std::string *lable_string,
        const std::string *ignore_label_key)
{
  const std::string *v3; // r12
  std::_Rb_tree_node_base *v5; // rbx
  common::milog::MilogStringStream *ostr; // rbp
  _DWORD *v7; // r15
  int32_t ContextData; // eax
  __int64 v9; // rax
  void *p_cur; // rdi
  _BYTE *M_p; // rdi
  char v12; // al
  char *cur; // rdi
  size_t v14; // rbx
  size_t M_parent; // rdx
  const std::string *v16; // rdi
  bool v17; // al
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdi
  char v21; // dl
  char *data; // rdi
  char *v23; // rdi
  std::string *str; // [rsp+0h] [rbp-1A8h]
  std::_Rb_tree_node_base *v26; // [rsp+8h] [rbp-1A0h]
  unsigned __int64 v27; // [rsp+18h] [rbp-190h]
  int32_t v28; // [rsp+24h] [rbp-184h]
  std::string v29; // [rsp+30h] [rbp-178h] BYREF
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-158h] BYREF
  char v31[312]; // [rsp+70h] [rbp-138h] BYREF

  v27 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v9 = __asan_stack_malloc_2(256LL);
    if ( v9 )
      v27 = v9;
  }
  v5 = (std::_Rb_tree_node_base *)(v27 + 256);
  ostr = (common::milog::MilogStringStream *)(v27 + 256);
  *(_QWORD *)v27 = 1102416563LL;
  *(_QWORD *)(v27 + 8) = "3 48 32 15 encoded_key:502 112 32 17 encoded_value:503 176 48 13 lable_map:488";
  *(_QWORD *)(v27 + 16) = MonitorReport::constructLabelStringFromContextIgnoreLabelKey;
  v7 = (_DWORD *)(v27 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862722] = -219021312;
  v7[536862723] = 62194;
  v7[536862724] = -219021312;
  v7[536862725] = 62194;
  v7[536862727] = -202116109;
  *(_DWORD *)(v27 + 184) = 0;
  *(_QWORD *)(v27 + 192) = 0LL;
  *(_QWORD *)(v27 + 200) = v27 + 184;
  *(_QWORD *)(v27 + 208) = v27 + 184;
  *(_QWORD *)(v27 + 216) = 0LL;
  ContextData = MonitorReportUtils::getContextData((std::map<std::string,std::string> *)(v27 + 176));
  v28 = ContextData;
  if ( ContextData )
  {
    common::milog::MiLogStream::MiLogStream(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/monitor_report.cpp",
      "constructLabelStringFromContextIgnoreLabelKey",
      491);
    ostr = v30.ostr_;
    if ( *(_BYTE *)(((unsigned __int64)v30.ostr_ >> 3) + 0x7FFF8000) )
    {
      p_cur = v30.ostr_;
      __asan_report_load8(v30.ostr_);
    }
    else
    {
      p_cur = &v30.ostr_->buffer_.cur_;
      if ( !*(_BYTE *)(((unsigned __int64)&v30.ostr_->buffer_.cur_ >> 3) + 0x7FFF8000) )
      {
        cur = v30.ostr_->buffer_.cur_;
        v14 = (size_t)&v30.ostr_->buffer_.data_[-(int)cur + 0x4000];
        if ( v14 > 0x16 )
          v14 = 23LL;
        memcpy(cur, "get context data failed", v14);
        ostr->buffer_.cur_ += v14;
        common::milog::MiLogStream::~MiLogStream(&v30);
        v28 = -1;
        goto LABEL_67;
      }
    }
    __asan_report_load8(p_cur);
    goto LABEL_18;
  }
  p_cur = &lable_string->_M_string_length;
  if ( *(_BYTE *)(((unsigned __int64)&lable_string->_M_string_length >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_store8(p_cur);
    goto LABEL_19;
  }
  lable_string->_M_string_length = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)lable_string >> 3) + 0x7FFF8000) )
  {
LABEL_19:
    M_p = lable_string;
    __asan_report_load8(lable_string);
LABEL_20:
    __asan_report_store1(M_p);
    goto LABEL_21;
  }
  M_p = lable_string->_M_dataplus._M_p;
  v12 = *(_BYTE *)(((unsigned __int64)lable_string->_M_dataplus._M_p >> 3) + 0x7FFF8000);
  if ( v12 <= ((__int64)lable_string->_M_dataplus._M_p & 7) && v12 )
    goto LABEL_20;
  *M_p = 0;
  v5 = *(std::_Rb_tree_node_base **)(v27 + 200);
  v26 = (std::_Rb_tree_node_base *)(v27 + 184);
  while ( v5 != v26 )
  {
    v3 = (const std::string *)&v5[1];
    str = (std::string *)&v5[2];
    M_p = &v5[1]._M_parent;
    if ( *(_BYTE *)(((unsigned __int64)&v5[1]._M_parent >> 3) + 0x7FFF8000) )
    {
LABEL_21:
      __asan_report_load8(M_p);
LABEL_22:
      __asan_report_load8(M_p);
LABEL_23:
      v16 = ignore_label_key;
      if ( *(_BYTE *)(((unsigned __int64)ignore_label_key >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(ignore_label_key);
      }
      else
      {
        v16 = v3;
        if ( !*(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
        {
          if ( M_parent )
          {
            v17 = memcmp(v3->_M_dataplus._M_p, ignore_label_key->_M_dataplus._M_p, M_parent) == 0;
            goto LABEL_63;
          }
          goto LABEL_29;
        }
      }
      __asan_report_load8(v16);
LABEL_29:
      v17 = 1;
      goto LABEL_63;
    }
    M_parent = (size_t)v5[1]._M_parent;
    M_p = &ignore_label_key->_M_string_length;
    if ( *(_BYTE *)(((unsigned __int64)&ignore_label_key->_M_string_length >> 3) + 0x7FFF8000) )
      goto LABEL_22;
    if ( M_parent == ignore_label_key->_M_string_length )
      goto LABEL_23;
    v17 = 0;
LABEL_63:
    if ( v17 )
      goto LABEL_57;
    common::tools::StringUtils::urlEncode((std::string *)&ostr[-13], v3);
    common::tools::StringUtils::urlEncode((std::string *)&ostr[-9], str);
    std::operator+<char>(&v29, "/", (const std::string *)&ostr[-13]);
    if ( v29._M_string_length == 0x3FFFFFFFFFFFFFFFLL )
    {
      __asan_handle_no_return(&v29);
      std::__throw_length_error("basic_string::append");
    }
    v18 = std::string::_M_append(&v29, "/", 1LL);
    v30.log_ = (common::milog::MiLog *)&v30.ostr_ptr_._M_refcount;
    if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
    {
      v18 = __asan_report_load8(v18);
    }
    else
    {
      v19 = v18 + 16;
      if ( *(_QWORD *)v18 != v18 + 16 )
      {
        v30.log_ = *(common::milog::MiLog **)v18;
        v20 = v18 + 16;
        if ( *(_BYTE *)(((v18 + 16) >> 3) + 0x7FFF8000) )
          goto LABEL_46;
        v30.ostr_ptr_._M_refcount._M_pi = *(std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(v18 + 16);
        goto LABEL_37;
      }
    }
    v20 = v19;
    if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v19 >> 3) + 0x7FFF8000) <= (unsigned __int8)(v19 & 7)
      || *(_BYTE *)(((v18 + 31) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v18 + 31) >> 3) + 0x7FFF8000) <= (unsigned __int8)((v18 + 31) & 7) )
    {
      __asan_report_load_n(v19, 16LL);
LABEL_46:
      __asan_report_load8(v20);
LABEL_47:
      __asan_report_load8(v20);
LABEL_48:
      __asan_report_store1(v20);
      goto LABEL_49;
    }
    *(__m128i *)&v30.ostr_ptr_._M_refcount._M_pi = _mm_loadu_si128((const __m128i *)(v18 + 16));
LABEL_37:
    v20 = v18 + 8;
    if ( *(_BYTE *)(((v18 + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_47;
    v30.ostr_ptr_._M_ptr = *(std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type **)(v18 + 8);
    *(_QWORD *)v18 = v19;
    *(_QWORD *)(v18 + 8) = 0LL;
    v20 = v18 + 16;
    v21 = *(_BYTE *)(((v18 + 16) >> 3) + 0x7FFF8000);
    if ( v21 <= (char)((v18 + 16) & 7) && v21 )
      goto LABEL_48;
    *(_BYTE *)(v18 + 16) = 0;
    std::string::_M_append(lable_string, v30.log_, v30.ostr_ptr_._M_ptr);
LABEL_49:
    if ( (std::__shared_count<(__gnu_cxx::_Lock_policy)2> *)v30.log_ != &v30.ostr_ptr_._M_refcount )
      operator delete(v30.log_);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v29._M_dataplus._M_p != &v29._anon_0 )
      operator delete(v29._M_dataplus._M_p);
    std::string::_M_append(lable_string, ostr[-9].buffer_.data_, ostr[-9].buffer_.cur_);
    data = ostr[-9].buffer_.data_;
    if ( data != (char *)&ostr[-8] )
      operator delete(data);
    v23 = ostr[-13].buffer_.data_;
    if ( v23 != (char *)&ostr[-12] )
      operator delete(v23);
LABEL_57:
    v5 = (std::_Rb_tree_node_base *)std::_Rb_tree_increment(v5);
  }
  if ( *(_BYTE *)(((unsigned __int64)&lable_string->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&lable_string->_M_string_length);
  }
  else if ( lable_string->_M_string_length )
  {
    goto LABEL_67;
  }
  v28 = -1;
LABEL_67:
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > > *const)(v27 + 176),
    *(std::_Rb_tree<std::string,std::pair<const std::string,std::string >,std::_Select1st<std::pair<const std::string,std::string > >,std::less<std::string >,std::allocator<std::pair<const std::string,std::string > > >::_Link_type *)(v27 + 192));
  if ( v31 == (char *)v27 )
  {
    *(_QWORD *)((v27 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v27 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v27 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v27 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v27 = 1172321806LL;
    *(_QWORD *)((v27 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v27 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v27 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v27 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v28;
};

// Line 517: range 0000000014E3007A-0000000014E3023B
int32_t __fastcall MonitorReport::start(MonitorReport *const this)
{
  int v1; // ebp
  bool *p_is_run; // rax
  std::_Bind<void (MonitorReport::*(MonitorReport*))()> *v3; // rdx
  common::tools::ThreadGroup *p_thread_group; // r12
  std::mutex *p_thread_mu; // rbx
  std::mutex *v6; // rdi
  _QWORD v8[2]; // [rsp+0h] [rbp-58h] BYREF
  MonitorReport *thisa; // [rsp+10h] [rbp-48h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-38h] BYREF

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(this);
    goto LABEL_9;
  }
  if ( !this->is_init_ )
  {
LABEL_9:
    common::milog::MiLogStream::MiLogStream(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "src/utils/monitor_report.cpp",
      "start",
      520);
    common::milog::MiLogStream::operator()(&v10, "[MonitorReport] not init yet");
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
  p_is_run = &this->is_run_;
  v3 = (std::_Bind<void (MonitorReport::*(MonitorReport*))()> *)*(unsigned __int8 *)(((unsigned __int64)&this->is_run_ >> 3)
                                                                                   + 0x7FFF8000);
  if ( (char)v3 <= (((unsigned __int8)this + 1) & 7) && (_BYTE)v3 )
  {
    v6 = (std::mutex *)&this->is_run_;
    __asan_report_store1(p_is_run);
    goto LABEL_11;
  }
  this->is_run_ = 1;
  p_thread_group = &this->thread_group_;
  v8[0] = MonitorReport::workThread;
  v8[1] = 0LL;
  thisa = this;
  p_thread_mu = &this->thread_group_.thread_mu_;
  if ( &_pthread_key_create )
  {
    v6 = &this->thread_group_.thread_mu_;
    v1 = pthread_mutex_lock(&v6->_M_mutex);
    if ( v1 )
    {
LABEL_11:
      __asan_handle_no_return(v6);
      std::__throw_system_error(v1);
    }
  }
  std::vector<std::thread>::emplace_back<std::_Bind<void (MonitorReport::*)(void) ()(MonitorReport*)> &>(
    &p_thread_group->thread_vec_,
    (std::_Bind<void (MonitorReport::*(MonitorReport*))()> *)v8,
    v3);
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_thread_mu->_M_mutex);
  common::milog::MiLogStream::MiLogStream(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/utils/monitor_report.cpp",
    "start",
    528);
  common::milog::MiLogStream::operator()(&v10, "[MonitorReport] started");
  common::milog::MiLogStream::~MiLogStream(&v10);
  return 0;
};

// Line 550: range 0000000014E2FD98-0000000014E30078
int32_t __fastcall MonitorReport::final(MonitorReport *const this)
{
  unsigned __int64 M_pi; // rbx
  common::tools::SafeQueue<std::shared_ptr<MonitorValue> > *p_monitor_queue; // rbp
  std::mutex *p_queue_mu; // r12
  std::mutex *v4; // rdi
  unsigned int v5; // eax
  unsigned __int64 v6; // rax
  signed __int32 v7; // eax
  unsigned __int64 p_M_start; // rdi
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Elt_pointer M_cur; // rax
  char v10; // cl
  char v11; // dl
  unsigned __int64 v12; // rdi
  volatile signed __int32 *v13; // rax
  char v14; // cl
  signed __int32 v15; // eax
  char v16; // dl

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_store1(this);
    goto LABEL_6;
  }
  this->is_init_ = 0;
  p_monitor_queue = &this->monitor_queue_;
  p_queue_mu = &this->monitor_queue_.queue_mu_;
  if ( &_pthread_key_create )
  {
    v4 = &this->monitor_queue_.queue_mu_;
    v5 = pthread_mutex_lock(&v4->_M_mutex);
    M_pi = v5;
    if ( v5 )
    {
      __asan_handle_no_return(v4);
      std::__throw_system_error(M_pi);
    }
  }
  while ( 1 )
  {
    this = (MonitorReport *const)&p_monitor_queue->queue_.c._M_impl._M_finish;
    if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
    {
LABEL_6:
      __asan_report_load8(this);
LABEL_7:
      __asan_report_load8(this);
LABEL_8:
      __asan_report_load8(this);
LABEL_9:
      __asan_report_load8(this);
LABEL_10:
      v6 = __asan_report_load8(this);
LABEL_11:
      v7 = _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF);
      goto LABEL_12;
    }
    this = (MonitorReport *const)&p_monitor_queue->queue_.c._M_impl._M_start;
    if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
      goto LABEL_7;
    if ( p_monitor_queue->queue_.c._M_impl._M_finish._M_cur == p_monitor_queue->queue_.c._M_impl._M_start._M_cur )
      break;
    this = (MonitorReport *const)&p_monitor_queue->queue_.c._M_impl._M_start;
    if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
      goto LABEL_8;
    M_cur = p_monitor_queue->queue_.c._M_impl._M_start._M_cur;
    this = (MonitorReport *const)&p_monitor_queue->queue_.c._M_impl._M_start._M_last;
    if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start._M_last >> 3) + 0x7FFF8000) )
      goto LABEL_9;
    if ( M_cur == p_monitor_queue->queue_.c._M_impl._M_start._M_last - 1 )
      goto LABEL_51;
    this = (MonitorReport *const)&M_cur->_M_refcount;
    if ( *(_BYTE *)(((unsigned __int64)&M_cur->_M_refcount >> 3) + 0x7FFF8000) )
      goto LABEL_10;
    M_pi = (unsigned __int64)M_cur->_M_refcount._M_pi;
    if ( !M_pi )
      goto LABEL_13;
    v6 = M_pi + 8;
    if ( &_pthread_key_create )
    {
      v10 = *(_BYTE *)((v6 >> 3) + 0x7FFF8000);
      if ( (char)((v6 & 7) + 3) < v10 || !v10 )
        goto LABEL_11;
      __asan_report_store4(M_pi + 8);
    }
    v11 = *(_BYTE *)(((M_pi + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((M_pi + 8) & 7) + 3) >= v11 && v11 )
    {
      __asan_report_load4(M_pi + 8);
      goto LABEL_31;
    }
    v7 = *(_DWORD *)(M_pi + 8);
    *(_DWORD *)(M_pi + 8) = v7 - 1;
LABEL_12:
    if ( v7 != 1 )
      goto LABEL_13;
LABEL_31:
    v12 = M_pi;
    if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(M_pi);
LABEL_42:
      __asan_report_load8(v12);
LABEL_43:
      __asan_report_store4(v12);
LABEL_44:
      p_M_start = M_pi + 12;
      v16 = *(_BYTE *)(((M_pi + 12) >> 3) + 0x7FFF8000);
      if ( (char)(((M_pi + 12) & 7) + 3) >= v16 && v16 )
      {
        __asan_report_load4(p_M_start);
LABEL_48:
        __asan_report_load8(p_M_start);
LABEL_49:
        __asan_report_load8(p_M_start);
        goto LABEL_50;
      }
      v15 = *(_DWORD *)(M_pi + 12);
      *(_DWORD *)(M_pi + 12) = v15 - 1;
      goto LABEL_37;
    }
    v12 = *(_QWORD *)M_pi + 16LL;
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      goto LABEL_42;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 16LL))(M_pi);
    v13 = (volatile signed __int32 *)(M_pi + 12);
    if ( !&_pthread_key_create )
      goto LABEL_44;
    v12 = M_pi + 12;
    v14 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v13 & 7) + 3) >= v14 && v14 )
      goto LABEL_43;
    v15 = _InterlockedExchangeAdd(v13, 0xFFFFFFFF);
LABEL_37:
    if ( v15 == 1 )
    {
      p_M_start = M_pi;
      if ( *(_BYTE *)((M_pi >> 3) + 0x7FFF8000) )
        goto LABEL_48;
      p_M_start = *(_QWORD *)M_pi + 24LL;
      if ( *(_BYTE *)((p_M_start >> 3) + 0x7FFF8000) )
        goto LABEL_49;
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)M_pi + 24LL))(M_pi);
    }
LABEL_13:
    p_M_start = (unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start;
    if ( *(_BYTE *)(((unsigned __int64)&p_monitor_queue->queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
    {
LABEL_50:
      __asan_report_load8(p_M_start);
LABEL_51:
      std::deque<std::shared_ptr<MonitorValue>>::_M_pop_front_aux(&p_monitor_queue->queue_.c);
    }
    else
    {
      ++p_monitor_queue->queue_.c._M_impl._M_start._M_cur;
    }
  }
  if ( &_pthread_key_create )
    pthread_mutex_unlock(&p_queue_mu->_M_mutex);
  return 0;
};

// Line 557: range 0000000014E34CDC-0000000014E35C23
void __fastcall MonitorReport::workThread(MonitorReport *const this)
{
  unsigned __int64 v2; // r15
  _DWORD *v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rdi
  void *v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  void *v10; // rdi
  pthread_t v11; // rax
  uint32_t Now; // eax
  void *p_M_finish; // rdi
  std::shared_ptr<MonitorValue> **v14; // rax
  std::size_t v15; // rax
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Elt_pointer M_last; // rax
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Elt_pointer M_cur; // rsi
  std::shared_ptr<MonitorValue> *v18; // rax
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int128 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rsi
  __int64 v26; // rdi
  unsigned __int64 v27; // rbx
  __int64 v28; // rsi
  std::shared_ptr<MonitorValue> *v29; // rax
  __int64 v30; // r8
  __int64 v31; // rsi
  std::shared_ptr<MonitorValue> *v32; // rax
  __int64 v33; // r8
  __int64 v34; // r14
  __int64 i; // r13
  unsigned __int64 v36; // rax
  signed __int32 v37; // eax
  char v38; // cl
  char v39; // dl
  unsigned __int64 v40; // rdi
  volatile signed __int32 *v41; // rax
  char v42; // cl
  signed __int32 v43; // eax
  unsigned __int64 v44; // rdi
  char v45; // dl
  void *v46; // rdi
  std::deque<std::shared_ptr<MonitorValue>>::iterator v47; // [rsp-20h] [rbp-358h]
  std::deque<std::shared_ptr<MonitorValue>>::iterator v48; // [rsp-20h] [rbp-358h]
  std::deque<std::shared_ptr<MonitorValue>>::iterator v49; // [rsp-20h] [rbp-358h]
  std::deque<std::shared_ptr<MonitorValue>>::iterator v50; // [rsp-20h] [rbp-358h]
  size_t cur_time; // [rsp+0h] [rbp-338h]
  size_t cur_timea; // [rsp+0h] [rbp-338h]
  uint32_t cur_timeb; // [rsp+0h] [rbp-338h]
  uint32_t next_report_time; // [rsp+18h] [rbp-320h]
  int v55; // [rsp+1Ch] [rbp-31Ch]
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Elt_pointer M_first; // [rsp+28h] [rbp-310h]
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Map_pointer M_node; // [rsp+38h] [rbp-300h]
  std::_Deque_iterator<std::shared_ptr<MonitorValue>,std::shared_ptr<MonitorValue>&,std::shared_ptr<MonitorValue>*>::_Elt_pointer v58; // [rsp+48h] [rbp-2F0h]
  std::shared_ptr<MonitorValue> **v59; // [rsp+58h] [rbp-2E0h]
  __int64 v60; // [rsp+68h] [rbp-2D0h]
  __int64 v61; // [rsp+78h] [rbp-2C0h]
  __int64 v62; // [rsp+88h] [rbp-2B0h]
  std::shared_ptr<MonitorValue> **v63; // [rsp+98h] [rbp-2A0h]
  __int64 v64; // [rsp+A8h] [rbp-290h]
  __int64 v65; // [rsp+B8h] [rbp-280h]
  __int64 v66; // [rsp+C8h] [rbp-270h]
  std::shared_ptr<MonitorValue> **v67; // [rsp+D8h] [rbp-260h]
  char v68[600]; // [rsp+E0h] [rbp-258h] BYREF

  v2 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v2 = v4;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 24 14 report_vec:564 96 32 6 __last 160 32 7 __first 224 32 6 __last 288 32 7 __first 352 4"
                        "8 22 monitor_report_map:565 432 80 16 report_queue:570";
  *(_QWORD *)(v2 + 16) = MonitorReport::workThread;
  v3 = (_DWORD *)(v2 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862724] = -218959118;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -219021312;
  v3[536862733] = 62194;
  v3[536862736] = -202116109;
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)(v2 + 288),
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/utils/monitor_report.cpp",
    "workThread",
    558);
  common::milog::MiLogStream::operator()(
    (common::milog::MiLogStream *const)(v2 + 288),
    "[MonitorReport] workThread start");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)(v2 + 288),
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/utils/monitor_report.cpp",
    "workThread",
    560);
  v5 = *(_QWORD *)(v2 + 312);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
  {
    v6 = *(_QWORD *)(v2 + 312);
    __asan_report_load8(v6);
    goto LABEL_16;
  }
  v6 = v5 + 8;
  if ( *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8(v6);
LABEL_17:
    v9 = v5;
    __asan_report_load8(v5);
    goto LABEL_18;
  }
  v7 = *(void **)(v5 + 8);
  cur_time = *(_DWORD *)v5 + 0x4000 - (int)v7;
  if ( cur_time > 0xC )
    cur_time = 13LL;
  memcpy(v7, "[THREAD] tid:", cur_time);
  *(_QWORD *)(v5 + 8) += cur_time;
  v8 = syscall(186LL);
  common::tools::StringStream<common::tools::FixedBuffer<16384>>::operator<<(
    *(common::tools::StringStream<common::tools::FixedBuffer<16384> > *const *)(v2 + 312),
    v8);
  v5 = *(_QWORD *)(v2 + 312);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  v9 = v5 + 8;
  if ( *(_BYTE *)(((v5 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    Now = __asan_report_load8(v9);
    goto LABEL_19;
  }
  v10 = *(void **)(v5 + 8);
  cur_timea = *(_DWORD *)v5 + 0x4000 - (int)v10;
  if ( cur_timea > 0xE )
    cur_timea = 15LL;
  memcpy(v10, " monitor thread", cur_timea);
  *(_QWORD *)(v5 + 8) += cur_timea;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
  v11 = pthread_self();
  pthread_setname_np(v11, "monitor");
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 48) = 0LL;
  *(_DWORD *)(v2 + 360) = 0;
  *(_QWORD *)(v2 + 368) = 0LL;
  *(_QWORD *)(v2 + 376) = v2 + 360;
  *(_QWORD *)(v2 + 384) = v2 + 360;
  *(_QWORD *)(v2 + 392) = 0LL;
  next_report_time = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      Now = common::tools::TimeUtils::getNow();
LABEL_19:
      cur_timeb = Now;
      *(_QWORD *)(v2 + 432) = 0LL;
      *(_QWORD *)(v2 + 440) = 0LL;
      *(_QWORD *)(v2 + 448) = 0LL;
      *(_QWORD *)(v2 + 456) = 0LL;
      *(_QWORD *)(v2 + 464) = 0LL;
      *(_QWORD *)(v2 + 472) = 0LL;
      *(_QWORD *)(v2 + 480) = 0LL;
      *(_QWORD *)(v2 + 488) = 0LL;
      *(_QWORD *)(v2 + 496) = 0LL;
      *(_QWORD *)(v2 + 504) = 0LL;
      std::_Deque_base<std::shared_ptr<MonitorValue>>::_M_initialize_map(
        (std::_Deque_base<std::shared_ptr<MonitorValue>> *const)(v2 + 432),
        0LL);
      if ( &_pthread_key_create )
      {
        v55 = pthread_mutex_lock(&this->monitor_queue_.queue_mu_._M_mutex);
        if ( v55 )
        {
          __asan_handle_no_return(&this->monitor_queue_.queue_mu_);
          std::__throw_system_error(v55);
        }
      }
      p_M_finish = &this->monitor_queue_.queue_.c._M_impl._M_finish;
      if ( *(_BYTE *)(((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8(p_M_finish);
LABEL_44:
        __asan_report_load8(p_M_finish);
LABEL_45:
        __asan_report_load_n(p_M_finish, 32LL);
LABEL_46:
        __asan_report_load_n(p_M_finish, 32LL);
LABEL_47:
        __asan_report_load8(p_M_finish);
LABEL_48:
        __asan_report_load8(p_M_finish);
LABEL_49:
        __asan_report_load_n(p_M_finish, 32LL);
LABEL_50:
        __asan_report_load_n(p_M_finish, 32LL);
LABEL_51:
        __asan_report_load8(p_M_finish);
LABEL_52:
        __asan_report_store_n(p_M_finish, 32LL);
        goto LABEL_53;
      }
      p_M_finish = &this->monitor_queue_.queue_.c._M_impl._M_start;
      if ( *(_BYTE *)(((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) )
        goto LABEL_44;
      if ( this->monitor_queue_.queue_.c._M_impl._M_finish._M_cur != this->monitor_queue_.queue_.c._M_impl._M_start._M_cur )
      {
        *(__m128i *)(v2 + 288) = _mm_load_si128((const __m128i *)(v2 + 448));
        *(__m128i *)(v2 + 304) = _mm_load_si128((const __m128i *)(v2 + 464));
        p_M_finish = &this->monitor_queue_.queue_.c._M_impl._M_start;
        if ( *(_BYTE *)((((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3)
                      + 0x7FFF8000) != 0
          && *(_BYTE *)((((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3)
                      + 0x7FFF8000) <= (((unsigned __int8)this - 105) & 7)
          || *(char *)(((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) < 0 )
        {
          goto LABEL_45;
        }
        *(__m128i *)(v2 + 448) = _mm_loadu_si128((const __m128i *)&this->monitor_queue_.queue_.c._M_impl._M_start);
        *(__m128i *)(v2 + 464) = _mm_loadu_si128((const __m128i *)&this->monitor_queue_.queue_.c._M_impl._M_start._M_last);
        *(__m128i *)&this->monitor_queue_.queue_.c._M_impl._M_start._M_cur = _mm_load_si128((const __m128i *)(v2 + 288));
        *(__m128i *)&this->monitor_queue_.queue_.c._M_impl._M_start._M_last = _mm_load_si128((const __m128i *)(v2 + 304));
        *(__m128i *)(v2 + 288) = _mm_load_si128((const __m128i *)(v2 + 480));
        *(__m128i *)(v2 + 304) = _mm_load_si128((const __m128i *)(v2 + 496));
        p_M_finish = &this->monitor_queue_.queue_.c._M_impl._M_finish;
        if ( *(_BYTE *)((((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3)
                      + 0x7FFF8000) != 0
          && *(_BYTE *)((((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3)
                      + 0x7FFF8000) <= (((unsigned __int8)this - 73) & 7)
          || *(char *)(((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) < 0 )
        {
          goto LABEL_46;
        }
        *(__m128i *)(v2 + 480) = _mm_loadu_si128((const __m128i *)&this->monitor_queue_.queue_.c._M_impl._M_finish);
        *(__m128i *)(v2 + 496) = _mm_loadu_si128((const __m128i *)&this->monitor_queue_.queue_.c._M_impl._M_finish._M_last);
        *(__m128i *)&this->monitor_queue_.queue_.c._M_impl._M_finish._M_cur = _mm_load_si128((const __m128i *)(v2 + 288));
        *(__m128i *)&this->monitor_queue_.queue_.c._M_impl._M_finish._M_last = _mm_load_si128((const __m128i *)(v2 + 304));
        v14 = *(std::shared_ptr<MonitorValue> ***)(v2 + 432);
        p_M_finish = &this->monitor_queue_;
        if ( *(_BYTE *)(((unsigned __int64)&this->monitor_queue_ >> 3) + 0x7FFF8000) )
          goto LABEL_47;
        *(_QWORD *)(v2 + 432) = this->monitor_queue_.queue_.c._M_impl._M_map;
        this->monitor_queue_.queue_.c._M_impl._M_map = v14;
        v15 = *(_QWORD *)(v2 + 440);
        p_M_finish = &this->monitor_queue_.queue_.c._M_impl._M_map_size;
        if ( *(_BYTE *)(((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_map_size >> 3) + 0x7FFF8000) )
          goto LABEL_48;
        *(_QWORD *)(v2 + 440) = this->monitor_queue_.queue_.c._M_impl._M_map_size;
        this->monitor_queue_.queue_.c._M_impl._M_map_size = v15;
        p_M_finish = &this->monitor_queue_.queue_.c._M_impl._M_start;
        if ( *(_BYTE *)((((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3)
                      + 0x7FFF8000) != 0
          && *(_BYTE *)((((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_start._M_node + 7) >> 3)
                      + 0x7FFF8000) <= (((unsigned __int8)this - 105) & 7)
          || *(char *)(((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_start >> 3) + 0x7FFF8000) < 0 )
        {
          goto LABEL_49;
        }
        M_first = this->monitor_queue_.queue_.c._M_impl._M_start._M_first;
        M_last = this->monitor_queue_.queue_.c._M_impl._M_start._M_last;
        M_node = this->monitor_queue_.queue_.c._M_impl._M_start._M_node;
        *(_QWORD *)(v2 + 160) = this->monitor_queue_.queue_.c._M_impl._M_start._M_cur;
        *(_QWORD *)(v2 + 168) = M_first;
        *(_QWORD *)(v2 + 176) = M_last;
        *(_QWORD *)(v2 + 184) = M_node;
        p_M_finish = &this->monitor_queue_.queue_.c._M_impl._M_finish;
        if ( *(_BYTE *)((((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3)
                      + 0x7FFF8000) != 0
          && *(_BYTE *)((((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3)
                      + 0x7FFF8000) <= (((unsigned __int8)this - 73) & 7)
          || *(char *)(((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) < 0 )
        {
          goto LABEL_50;
        }
        M_cur = this->monitor_queue_.queue_.c._M_impl._M_finish._M_cur;
        v58 = this->monitor_queue_.queue_.c._M_impl._M_finish._M_first;
        v18 = this->monitor_queue_.queue_.c._M_impl._M_finish._M_last;
        v59 = this->monitor_queue_.queue_.c._M_impl._M_finish._M_node;
        *(__m128i *)(v2 + 288) = _mm_load_si128((const __m128i *)(v2 + 160));
        *(__m128i *)(v2 + 304) = _mm_load_si128((const __m128i *)(v2 + 176));
        *(_QWORD *)(v2 + 224) = M_cur;
        *(_QWORD *)(v2 + 232) = v58;
        *(_QWORD *)(v2 + 240) = v18;
        *(_QWORD *)(v2 + 248) = v59;
        v47._M_node = v59;
        v47._M_last = v18;
        *(_OWORD *)&v47._M_cur = *(_OWORD *)(v2 + 224);
        std::deque<std::shared_ptr<MonitorValue>>::_M_destroy_data_aux(
          &this->monitor_queue_.queue_.c,
          *(std::deque<std::shared_ptr<MonitorValue>>::iterator *)(v2 + 288),
          v47);
        p_M_finish = &this->monitor_queue_.queue_.c._M_impl._M_finish._M_node;
        if ( *(_BYTE *)(((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_finish._M_node >> 3) + 0x7FFF8000) )
          goto LABEL_51;
        std::_Deque_base<std::shared_ptr<MonitorValue>>::_M_destroy_nodes(
          &this->monitor_queue_.queue_.c,
          (std::_Deque_base<std::shared_ptr<MonitorValue>>::_Map_pointer)(*(_QWORD *)(v2 + 184) + 8LL),
          this->monitor_queue_.queue_.c._M_impl._M_finish._M_node + 1);
        p_M_finish = &this->monitor_queue_.queue_.c._M_impl._M_finish;
        if ( *(_BYTE *)((((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3)
                      + 0x7FFF8000) != 0
          && *(_BYTE *)((((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_finish._M_node + 7) >> 3)
                      + 0x7FFF8000) <= (((unsigned __int8)this - 73) & 7)
          || *(char *)(((unsigned __int64)&this->monitor_queue_.queue_.c._M_impl._M_finish >> 3) + 0x7FFF8000) < 0 )
        {
          goto LABEL_52;
        }
        *(__m128i *)&this->monitor_queue_.queue_.c._M_impl._M_finish._M_cur = _mm_load_si128((const __m128i *)(v2 + 160));
        *(__m128i *)&this->monitor_queue_.queue_.c._M_impl._M_finish._M_last = _mm_load_si128((const __m128i *)(v2 + 176));
      }
      if ( &_pthread_key_create )
        pthread_mutex_unlock(&this->monitor_queue_.queue_mu_._M_mutex);
      if ( *(_QWORD *)(v2 + 480) != *(_QWORD *)(v2 + 448) )
        MonitorReport::accumMonitorValue(
          this,
          (std::queue<std::shared_ptr<MonitorValue>> *)(v2 + 432),
          (MonitorReport::MonitorReportMap *)(v2 + 352));
LABEL_53:
      if ( next_report_time > cur_timeb )
        break;
      MonitorReport::reportValueToDb(this, (MonitorReport::MonitorReportMap *)(v2 + 352));
      std::_Rb_tree<std::pair<ReportType,std::string>,std::pair<std::pair<ReportType,std::string> const,std::shared_ptr<MonitorValue>>,std::_Select1st<std::pair<std::pair<ReportType,std::string> const,std::shared_ptr<MonitorValue>>>,std::less<std::pair<ReportType,std::string>>,std::allocator<std::pair<std::pair<ReportType,std::string> const,std::shared_ptr<MonitorValue>>>>::_M_erase(
        (std::_Rb_tree<std::pair<ReportType,std::string >,std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> >,std::_Select1st<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > >,std::less<std::pair<ReportType,std::string > >,std::allocator<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > > > *const)(v2 + 352),
        *(std::_Rb_tree<std::pair<ReportType,std::string >,std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> >,std::_Select1st<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > >,std::less<std::pair<ReportType,std::string > >,std::allocator<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > > >::_Link_type *)(v2 + 368));
      *(_QWORD *)(v2 + 368) = 0LL;
      *(_QWORD *)(v2 + 376) = v2 + 360;
      *(_QWORD *)(v2 + 384) = v2 + 360;
      *(_QWORD *)(v2 + 392) = 0LL;
      next_report_time = cur_timeb + 30;
      v28 = *(_QWORD *)(v2 + 480);
      v62 = *(_QWORD *)(v2 + 488);
      v29 = *(std::shared_ptr<MonitorValue> **)(v2 + 496);
      v63 = *(std::shared_ptr<MonitorValue> ***)(v2 + 504);
      v60 = *(_QWORD *)(v2 + 456);
      v30 = *(_QWORD *)(v2 + 464);
      v61 = *(_QWORD *)(v2 + 472);
      *(_QWORD *)(v2 + 288) = *(_QWORD *)(v2 + 448);
      *(_QWORD *)(v2 + 296) = v60;
      *(_QWORD *)(v2 + 304) = v30;
      *(_QWORD *)(v2 + 312) = v61;
      *(_QWORD *)(v2 + 224) = v28;
      *(_QWORD *)(v2 + 232) = v62;
      *(_QWORD *)(v2 + 240) = v29;
      *(_QWORD *)(v2 + 248) = v63;
      v49._M_node = v63;
      v49._M_last = v29;
      *(_OWORD *)&v49._M_cur = *(_OWORD *)(v2 + 224);
      std::deque<std::shared_ptr<MonitorValue>>::_M_destroy_data_aux(
        (std::deque<std::shared_ptr<MonitorValue>> *const)(v2 + 432),
        *(std::deque<std::shared_ptr<MonitorValue>>::iterator *)(v2 + 288),
        v49);
      std::_Deque_base<std::shared_ptr<MonitorValue>>::~_Deque_base((std::_Deque_base<std::shared_ptr<MonitorValue>> *const)(v2 + 432));
    }
    v19 = *(_BYTE *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000);
    if ( v19 > (((unsigned __int8)this + 1) & 7) || !v19 )
      break;
    __asan_report_load1(&this->is_run_);
LABEL_60:
    usleep(0x3E8u);
    v31 = *(_QWORD *)(v2 + 480);
    v66 = *(_QWORD *)(v2 + 488);
    v32 = *(std::shared_ptr<MonitorValue> **)(v2 + 496);
    v67 = *(std::shared_ptr<MonitorValue> ***)(v2 + 504);
    v64 = *(_QWORD *)(v2 + 456);
    v33 = *(_QWORD *)(v2 + 464);
    v65 = *(_QWORD *)(v2 + 472);
    *(_QWORD *)(v2 + 288) = *(_QWORD *)(v2 + 448);
    *(_QWORD *)(v2 + 296) = v64;
    *(_QWORD *)(v2 + 304) = v33;
    *(_QWORD *)(v2 + 312) = v65;
    *(_QWORD *)(v2 + 224) = v31;
    *(_QWORD *)(v2 + 232) = v66;
    *(_QWORD *)(v2 + 240) = v32;
    *(_QWORD *)(v2 + 248) = v67;
    v50._M_node = v67;
    v50._M_last = v32;
    *(_OWORD *)&v50._M_cur = *(_OWORD *)(v2 + 224);
    std::deque<std::shared_ptr<MonitorValue>>::_M_destroy_data_aux(
      (std::deque<std::shared_ptr<MonitorValue>> *const)(v2 + 432),
      *(std::deque<std::shared_ptr<MonitorValue>>::iterator *)(v2 + 288),
      v50);
    std::_Deque_base<std::shared_ptr<MonitorValue>>::~_Deque_base((std::_Deque_base<std::shared_ptr<MonitorValue>> *const)(v2 + 432));
  }
  if ( this->is_run_ )
    goto LABEL_60;
  v20 = *(_QWORD *)(v2 + 480);
  v21 = *(_QWORD *)(v2 + 488);
  *(_QWORD *)(v2 + 160) = v20;
  *(_QWORD *)(v2 + 168) = v21;
  v22 = *(_OWORD *)(v2 + 496);
  *(_OWORD *)(v2 + 176) = v22;
  v23 = *(_QWORD *)(v2 + 448);
  v24 = *(_QWORD *)(v2 + 456);
  *(_QWORD *)(v2 + 96) = v23;
  *(_QWORD *)(v2 + 104) = v24;
  v25 = *(_QWORD *)(v2 + 464);
  v26 = *(_QWORD *)(v2 + 472);
  *(_QWORD *)(v2 + 112) = v25;
  *(_QWORD *)(v2 + 120) = v26;
  *(_QWORD *)(v2 + 288) = v23;
  *(_QWORD *)(v2 + 296) = v24;
  *(_QWORD *)(v2 + 304) = v25;
  *(_QWORD *)(v2 + 312) = v26;
  *(_QWORD *)(v2 + 224) = v20;
  *(_QWORD *)(v2 + 232) = v21;
  *(_OWORD *)(v2 + 240) = v22;
  v27 = v2 + 432;
  *(_OWORD *)&v48._M_last = v22;
  *(_OWORD *)&v48._M_cur = *(_OWORD *)(v2 + 224);
  std::deque<std::shared_ptr<MonitorValue>>::_M_destroy_data_aux(
    (std::deque<std::shared_ptr<MonitorValue>> *const)(v2 + 432),
    *(std::deque<std::shared_ptr<MonitorValue>>::iterator *)(v2 + 288),
    v48);
  std::_Deque_base<std::shared_ptr<MonitorValue>>::~_Deque_base((std::_Deque_base<std::shared_ptr<MonitorValue>> *const)(v2 + 432));
  common::milog::MiLogStream::MiLogStream(
    (common::milog::MiLogStream *const)(v2 + 288),
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "src/utils/monitor_report.cpp",
    "workThread",
    596);
  common::milog::MiLogStream::operator()(
    (common::milog::MiLogStream *const)(v2 + 288),
    "[MonitorReport] workThread stop");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
  std::_Rb_tree<std::pair<ReportType,std::string>,std::pair<std::pair<ReportType,std::string> const,std::shared_ptr<MonitorValue>>,std::_Select1st<std::pair<std::pair<ReportType,std::string> const,std::shared_ptr<MonitorValue>>>,std::less<std::pair<ReportType,std::string>>,std::allocator<std::pair<std::pair<ReportType,std::string> const,std::shared_ptr<MonitorValue>>>>::_M_erase(
    (std::_Rb_tree<std::pair<ReportType,std::string >,std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> >,std::_Select1st<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > >,std::less<std::pair<ReportType,std::string > >,std::allocator<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > > > *const)(v2 + 352),
    *(std::_Rb_tree<std::pair<ReportType,std::string >,std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> >,std::_Select1st<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > >,std::less<std::pair<ReportType,std::string > >,std::allocator<std::pair<const std::pair<ReportType,std::string >,std::shared_ptr<MonitorValue> > > >::_Link_type *)(v2 + 368));
  v34 = *(_QWORD *)(v2 + 40);
  for ( i = *(_QWORD *)(v2 + 32); v34 != i; i += 16LL )
  {
    if ( *(_BYTE *)(((unsigned __int64)(i + 8) >> 3) + 0x7FFF8000) )
    {
      v36 = __asan_report_load8(i + 8);
LABEL_62:
      v37 = _InterlockedExchangeAdd((volatile signed __int32 *)v36, 0xFFFFFFFF);
      goto LABEL_63;
    }
    v27 = *(_QWORD *)(i + 8);
    if ( !v27 )
      continue;
    v36 = v27 + 8;
    if ( &_pthread_key_create )
    {
      v38 = *(_BYTE *)((v36 >> 3) + 0x7FFF8000);
      if ( (char)((v36 & 7) + 3) < v38 || !v38 )
        goto LABEL_62;
      __asan_report_store4(v27 + 8);
    }
    v39 = *(_BYTE *)(((v27 + 8) >> 3) + 0x7FFF8000);
    if ( (char)(((v27 + 8) & 7) + 3) >= v39 && v39 )
    {
      __asan_report_load4(v27 + 8);
      goto LABEL_76;
    }
    v37 = *(_DWORD *)(v27 + 8);
    *(_DWORD *)(v27 + 8) = v37 - 1;
LABEL_63:
    if ( v37 != 1 )
      continue;
LABEL_76:
    v40 = v27;
    if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(v27);
LABEL_87:
      __asan_report_load8(v40);
LABEL_88:
      __asan_report_store4(v40);
LABEL_89:
      v44 = v27 + 12;
      v45 = *(_BYTE *)(((v27 + 12) >> 3) + 0x7FFF8000);
      if ( (char)(((v27 + 12) & 7) + 3) >= v45 && v45 )
      {
        __asan_report_load4(v44);
LABEL_93:
        __asan_report_load8(v44);
LABEL_94:
        __asan_report_load8(v44);
        break;
      }
      v43 = *(_DWORD *)(v27 + 12);
      *(_DWORD *)(v27 + 12) = v43 - 1;
      goto LABEL_82;
    }
    v40 = *(_QWORD *)v27 + 16LL;
    if ( *(_BYTE *)((v40 >> 3) + 0x7FFF8000) )
      goto LABEL_87;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v27 + 16LL))(v27);
    v41 = (volatile signed __int32 *)(v27 + 12);
    if ( !&_pthread_key_create )
      goto LABEL_89;
    v40 = v27 + 12;
    v42 = *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000);
    if ( (char)(((unsigned __int8)v41 & 7) + 3) >= v42 && v42 )
      goto LABEL_88;
    v43 = _InterlockedExchangeAdd(v41, 0xFFFFFFFF);
LABEL_82:
    if ( v43 == 1 )
    {
      v44 = v27;
      if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
        goto LABEL_93;
      v44 = *(_QWORD *)v27 + 24LL;
      if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
        goto LABEL_94;
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v27 + 24LL))(v27);
    }
  }
  v46 = *(void **)(v2 + 32);
  if ( v46 )
    operator delete(v46);
  if ( v68 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
};

// Line 597: range 0000000014E38BE7-0000000014E38BFE
void __cdecl GLOBAL__sub_I_monitor_report_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 597: range 0000000014E2E310-0000000014E2E958
void __fastcall __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  _BYTE *v2; // rax

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src/utils/monitor_report.cpp");
    if ( __priority != 0xFFFF )
    {
LABEL_3:
      __asan_after_dynamic_init();
      return;
    }
    std::ios_base::Init::Init(&std::__ioinit);
    __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
    if ( !`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ )
    {
      `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ = 1;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
        &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
        &_dso_handle);
    }
    if ( !`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ )
    {
      `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ = 1;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::~tss_ptr,
        &boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
        &_dso_handle);
    }
    if ( !`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id )
    {
      `guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id = 1;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::strand_service>::~service_id,
        &boost::asio::detail::service_base<boost::asio::detail::strand_service>::id,
        &_dso_handle);
    }
    if ( !`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ )
    {
      `guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ = 1;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::~tss_ptr,
        &boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_,
        &_dso_handle);
    }
    if ( !`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ )
    {
      `guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ = 1;
      __cxa_atexit(
        (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
        &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
        &_dso_handle);
    }
    if ( !`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero )
    {
      `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = 1;
      if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) )
      {
        __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        goto LABEL_24;
      }
      common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits
                                                                           + 9;
    }
    v2 = `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
    if ( `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id[0] )
    {
LABEL_18:
      if ( !`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id )
      {
        `guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      if ( !`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero )
      {
        `guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = 1;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
        {
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
          JUMPOUT(0x14E2E557LL);
        }
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits
                                                                            + 9;
      }
      goto LABEL_3;
    }
LABEL_24:
    *v2 = 1;
    __cxa_atexit(
      (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
      &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
      &_dso_handle);
    goto LABEL_18;
  }
};
