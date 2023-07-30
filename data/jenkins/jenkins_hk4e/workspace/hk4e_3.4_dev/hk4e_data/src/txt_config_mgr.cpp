// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_config_mgr.cpp

// Line 214: range 000000000CD4098C-000000000CD4F4FF
int32_t __cdecl TxtConfigMgr::loadConfig(TxtConfigMgr *const this, HK4EDesignConfig *config)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int v7; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rax
  common::milog::MiLogStream *v101; // rax
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rax
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // rax
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // rax
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // rax
  common::milog::MiLogStream *v114; // rax
  common::milog::MiLogStream *v115; // rax
  common::milog::MiLogStream *v116; // rax
  common::milog::MiLogStream *v117; // rax
  common::milog::MiLogStream *v118; // rax
  common::milog::MiLogStream *v119; // rax
  common::milog::MiLogStream *v120; // rax
  common::milog::MiLogStream *v121; // rax
  common::milog::MiLogStream *v122; // rax
  common::milog::MiLogStream *v123; // rax
  common::milog::MiLogStream *v124; // rax
  common::milog::MiLogStream *v125; // rax
  common::milog::MiLogStream *v126; // rax
  common::milog::MiLogStream *v127; // rax
  common::milog::MiLogStream *v128; // rax
  common::milog::MiLogStream *v129; // rax
  common::milog::MiLogStream *v130; // rax
  common::milog::MiLogStream *v131; // rax
  common::milog::MiLogStream *v132; // rax
  common::milog::MiLogStream *v133; // rax
  common::milog::MiLogStream *v134; // rax
  common::milog::MiLogStream *v135; // rax
  common::milog::MiLogStream *v136; // rax
  common::milog::MiLogStream *v137; // rax
  common::milog::MiLogStream *v138; // rax
  common::milog::MiLogStream *v139; // rax
  common::milog::MiLogStream *v140; // rax
  common::milog::MiLogStream *v141; // rax
  common::milog::MiLogStream *v142; // rax
  common::milog::MiLogStream *v143; // rax
  common::milog::MiLogStream *v144; // rax
  common::milog::MiLogStream *v145; // rax
  common::milog::MiLogStream *v146; // rax
  common::milog::MiLogStream *v147; // rax
  common::milog::MiLogStream *v148; // rax
  common::milog::MiLogStream *v149; // rax
  common::milog::MiLogStream *v150; // rax
  common::milog::MiLogStream *v151; // rax
  common::milog::MiLogStream *v152; // rax
  common::milog::MiLogStream *v153; // rax
  common::milog::MiLogStream *v154; // rax
  common::milog::MiLogStream *v155; // rax
  common::milog::MiLogStream *v156; // rax
  common::milog::MiLogStream *v157; // rax
  common::milog::MiLogStream *v158; // rax
  common::milog::MiLogStream *v159; // rax
  common::milog::MiLogStream *v160; // rax
  common::milog::MiLogStream *v161; // rax
  common::milog::MiLogStream *v162; // rax
  common::milog::MiLogStream *v163; // rax
  common::milog::MiLogStream *v164; // rax
  common::milog::MiLogStream *v165; // rax
  common::milog::MiLogStream *v166; // rax
  common::milog::MiLogStream *v167; // rax
  common::milog::MiLogStream *v168; // rax
  common::milog::MiLogStream *v169; // rax
  common::milog::MiLogStream *v170; // rax
  common::milog::MiLogStream *v171; // rax
  common::milog::MiLogStream *v172; // rax
  common::milog::MiLogStream *v173; // rax
  common::milog::MiLogStream *v174; // rax
  common::milog::MiLogStream *v175; // rax
  common::milog::MiLogStream *v176; // rax
  common::milog::MiLogStream *v177; // rax
  common::milog::MiLogStream *v178; // rax
  common::milog::MiLogStream *v179; // rax
  common::milog::MiLogStream *v180; // rax
  common::milog::MiLogStream *v181; // rax
  common::milog::MiLogStream *v182; // rax
  common::milog::MiLogStream *v183; // rax
  common::milog::MiLogStream *v184; // rax
  common::milog::MiLogStream *v185; // rax
  common::milog::MiLogStream *v186; // rax
  common::milog::MiLogStream *v187; // rax
  common::milog::MiLogStream *v188; // rax
  common::milog::MiLogStream *v189; // rax
  common::milog::MiLogStream *v190; // rax
  common::milog::MiLogStream *v191; // rax
  common::milog::MiLogStream *v192; // rax
  common::milog::MiLogStream *v193; // rax
  common::milog::MiLogStream *v194; // rax
  common::milog::MiLogStream *v195; // rax
  common::milog::MiLogStream *v196; // rax
  common::milog::MiLogStream *v197; // rax
  common::milog::MiLogStream *v198; // rax
  common::milog::MiLogStream *v199; // rax
  common::milog::MiLogStream *v200; // rax
  common::milog::MiLogStream *v201; // rax
  common::milog::MiLogStream *v202; // rax
  common::milog::MiLogStream *v203; // rax
  common::milog::MiLogStream *v204; // rax
  common::milog::MiLogStream *v205; // rax
  common::milog::MiLogStream *v206; // rax
  common::milog::MiLogStream *v207; // rax
  common::milog::MiLogStream *v208; // rax
  common::milog::MiLogStream *v209; // rax
  common::milog::MiLogStream *v210; // rax
  common::milog::MiLogStream *v211; // rax
  common::milog::MiLogStream *v212; // rax
  common::milog::MiLogStream *v213; // rax
  common::milog::MiLogStream *v214; // rax
  common::milog::MiLogStream *v215; // rax
  common::milog::MiLogStream *v216; // rax
  common::milog::MiLogStream *v217; // rax
  common::milog::MiLogStream *v218; // rax
  common::milog::MiLogStream *v219; // rax
  common::milog::MiLogStream *v220; // rax
  common::milog::MiLogStream *v221; // rax
  common::milog::MiLogStream *v222; // rax
  common::milog::MiLogStream *v223; // rax
  common::milog::MiLogStream *v224; // rax
  common::milog::MiLogStream *v225; // rax
  common::milog::MiLogStream *v226; // rax
  common::milog::MiLogStream *v227; // rax
  common::milog::MiLogStream *v228; // rax
  common::milog::MiLogStream *v229; // rax
  common::milog::MiLogStream *v230; // rax
  common::milog::MiLogStream *v231; // rax
  common::milog::MiLogStream *v232; // rax
  common::milog::MiLogStream *v233; // rax
  common::milog::MiLogStream *v234; // rax
  common::milog::MiLogStream *v235; // rax
  common::milog::MiLogStream *v236; // rax
  common::milog::MiLogStream *v237; // rax
  common::milog::MiLogStream *v238; // rax
  common::milog::MiLogStream *v239; // rax
  common::milog::MiLogStream *v240; // rax
  common::milog::MiLogStream *v241; // rax
  common::milog::MiLogStream *v242; // rax
  common::milog::MiLogStream *v243; // rax
  common::milog::MiLogStream *v244; // rax
  common::milog::MiLogStream *v245; // rax
  common::milog::MiLogStream *v246; // rax
  common::milog::MiLogStream *v247; // rax
  common::milog::MiLogStream *v248; // rax
  common::milog::MiLogStream *v249; // rax
  common::milog::MiLogStream *v250; // rax
  common::milog::MiLogStream *v251; // rax
  common::milog::MiLogStream *v252; // rax
  common::milog::MiLogStream *v253; // rax
  common::milog::MiLogStream *v254; // rax
  common::milog::MiLogStream *v255; // rax
  common::milog::MiLogStream *v256; // rax
  common::milog::MiLogStream *v257; // rax
  common::milog::MiLogStream *v258; // rax
  common::milog::MiLogStream *v259; // rax
  common::milog::MiLogStream *v260; // rax
  common::milog::MiLogStream *v261; // rax
  common::milog::MiLogStream *v262; // rax
  common::milog::MiLogStream *v263; // rax
  common::milog::MiLogStream *v264; // rax
  common::milog::MiLogStream *v265; // rax
  common::milog::MiLogStream *v266; // rax
  common::milog::MiLogStream *v267; // rax
  common::milog::MiLogStream *v268; // rax
  common::milog::MiLogStream *v269; // rax
  common::milog::MiLogStream *v270; // rax
  common::milog::MiLogStream *v271; // rax
  common::milog::MiLogStream *v272; // rax
  common::milog::MiLogStream *v273; // rax
  common::milog::MiLogStream *v274; // rax
  common::milog::MiLogStream *v275; // rax
  common::milog::MiLogStream *v276; // rax
  common::milog::MiLogStream *v277; // rax
  common::milog::MiLogStream *v278; // rax
  common::milog::MiLogStream *v279; // rax
  common::milog::MiLogStream *v280; // rax
  common::milog::MiLogStream *v281; // rax
  common::milog::MiLogStream *v282; // rax
  common::milog::MiLogStream *v283; // rax
  common::milog::MiLogStream *v284; // rax
  common::milog::MiLogStream *v285; // rax
  common::milog::MiLogStream *v286; // rax
  common::milog::MiLogStream *v287; // rax
  common::milog::MiLogStream *v288; // rax
  common::milog::MiLogStream *v289; // rax
  common::milog::MiLogStream *v290; // rax
  common::milog::MiLogStream *v291; // rax
  common::milog::MiLogStream *v292; // rax
  common::milog::MiLogStream *v293; // rax
  common::milog::MiLogStream *v294; // rax
  common::milog::MiLogStream *v295; // rax
  common::milog::MiLogStream *v296; // rax
  common::milog::MiLogStream *v297; // rax
  common::milog::MiLogStream *v298; // rax
  common::milog::MiLogStream *v299; // rax
  common::milog::MiLogStream *v300; // rax
  common::milog::MiLogStream *v301; // rax
  common::milog::MiLogStream *v302; // rax
  common::milog::MiLogStream *v303; // rax
  common::milog::MiLogStream *v304; // rax
  common::milog::MiLogStream *v305; // rax
  common::milog::MiLogStream *v306; // rax
  common::milog::MiLogStream *v307; // rax
  common::milog::MiLogStream *v308; // rax
  common::milog::MiLogStream *v309; // rax
  common::milog::MiLogStream *v310; // rax
  common::milog::MiLogStream *v311; // rax
  common::milog::MiLogStream *v312; // rax
  common::milog::MiLogStream *v313; // rax
  common::milog::MiLogStream *v314; // rax
  common::milog::MiLogStream *v315; // rax
  common::milog::MiLogStream *v316; // rax
  common::milog::MiLogStream *v317; // rax
  common::milog::MiLogStream *v318; // rax
  common::milog::MiLogStream *v319; // rax
  common::milog::MiLogStream *v320; // rax
  common::milog::MiLogStream *v321; // rax
  common::milog::MiLogStream *v322; // rax
  common::milog::MiLogStream *v323; // rax
  common::milog::MiLogStream *v324; // rax
  common::milog::MiLogStream *v325; // rax
  common::milog::MiLogStream *v326; // rax
  common::milog::MiLogStream *v327; // rax
  common::milog::MiLogStream *v328; // rax
  common::milog::MiLogStream *v329; // rax
  common::milog::MiLogStream *v330; // rax
  common::milog::MiLogStream *v331; // rax
  common::milog::MiLogStream *v332; // rax
  common::milog::MiLogStream *v333; // rax
  common::milog::MiLogStream *v334; // rax
  common::milog::MiLogStream *v335; // rax
  common::milog::MiLogStream *v336; // rax
  common::milog::MiLogStream *v337; // rax
  common::milog::MiLogStream *v338; // rax
  common::milog::MiLogStream *v339; // rax
  common::milog::MiLogStream *v340; // rax
  common::milog::MiLogStream *v341; // rax
  common::milog::MiLogStream *v342; // rax
  common::milog::MiLogStream *v343; // rax
  common::milog::MiLogStream *v344; // rax
  common::milog::MiLogStream *v345; // rax
  common::milog::MiLogStream *v346; // rax
  common::milog::MiLogStream *v347; // rax
  common::milog::MiLogStream *v348; // rax
  common::milog::MiLogStream *v349; // rax
  common::milog::MiLogStream *v350; // rax
  common::milog::MiLogStream *v351; // rax
  common::milog::MiLogStream *v352; // rax
  common::milog::MiLogStream *v353; // rax
  common::milog::MiLogStream *v354; // rax
  common::milog::MiLogStream *v355; // rax
  common::milog::MiLogStream *v356; // rax
  common::milog::MiLogStream *v357; // rax
  common::milog::MiLogStream *v358; // rax
  common::milog::MiLogStream *v359; // rax
  common::milog::MiLogStream *v360; // rax
  common::milog::MiLogStream *v361; // rax
  int32_t v362; // ebx
  char v364[11520]; // [rsp+20h] [rbp-2D00h] BYREF

  v2 = (common::milog::MiLogStream *)v364;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_8(11488LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"179 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unknown> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 <unknown> 2208 32 9 <unknown> 2272 32 9 <unknown> 2336 32 9 <unknown> 2400 32 9 <unknown> 2464 32 9 <unknown> 2528 32 9 <unknown> 2592 32 9 <unknown> 2656 32 9 <unknown> 2720 32 9 <unknown> 2784 32 9 <unknown> 2848 32 9 <unknown> 2912 32 9 <unknown> 2976 32 9 <unknown> 3040 32 9 <unknown> 3104 32 9 <unknown> 3168 32 9 <unknown> 3232 32 9 <unknown> 3296 32 9 <unknown> 3360 32 9 <unknown> 3424 32 9 <unknown> 3488 32 9 <unknown> 3552 32 9 <unknown> 3616 32 9 <unknown> 3680 32 9 <unknown> 3744 32 9 <unknown> 3808 32 9 <unknown> 3872 32 9 <unknown> 3936 32 9 <unknown> 4000 32 9 <unknown> 4064 32 9 <unknown> 4128 32 9 <unknown> 4192 32 9 <unknown> 4256 32 9 <unknown> 4320 32 9 <unknown> 4384 32 9 <unknown> 4448 32 9 <unknown> 4512 32 9 <unknown> 4576 32 9 <unknown> 4640 32 9 <unknown> 4704 32 9 <unknown> 4768 32 9 <unknown> 4832 32 9 <unknown> 4896 32 9 <unknown> 4960 32 9 <unknown> 5024 32 9 <unknown> 5088 32 9 <unknown> 5152 32 9 <unknown> 5216 32 9 <unknown> 5280 32 9 <unknown> 5344 32 9 <unknown> 5408 32 9 <unknown> 5472 32 9 <unknown> 5536 32 9 <unknown> 5600 32 9 <unknown> 5664 32 9 <unknown> 5728 32 9 <unknown> 5792 32 9 <unknown> 5856 32 9 <unknown> 5920 32 9 <unknown> 5984 32 9 <unknown> 6048 32 9 <unknown> 6112 32 9 <unknown> 6176 32 9 <unknown> 6240 32 9 <unknown> 6304 32 9 <unknown> 6368 32 9 <unknown> 6432 32 9 <unknown> 6496 32 9 <unknown> 6560 32 9 <unknown> 6624 32 9 <unknown> 6688 32 9 <unknown> 6752 32 9 <unknown> 6816 32 9 <unknown> 6880 32 9 <unknown> 6944 32 9 <unknown> 7008 32 9 <unknown> 7072 32 9 <unknown> 7136 32 9 <unknown> 7200 32 9 <unknown> 7264 32 9 <unknown> 7328 32 9 <unknown> 7392 32 9 <unknown> 7456 32 9 <unknown> 7520 32 9 <unknown> 7584 32 9 <unknown> 7648 32 9 <unknown> 7712 32 9 <unknown> 7776 32 9 <unknown> 7840 32 9 <unknown> 7904 32 9 <unknown> 7968 32 9 <unknown> 8032 32 9 <unknown> 8096 32 9 <unknown> 8160 32 9 <unknown> 8224 32 9 <unknown> 8288 32 9 <unknown> 8352 32 9 <unknown> 8416 32 9 <unknown> 8480 32 9 <unknown> 8544 32 9 <unknown> 8608 32 9 <unknown> 8672 32 9 <unknown> 8736 32 9 <unknown> 8800 32 9 <unknown> 8864 32 9 <unknown> 8928 32 9 <unknown> 8992 32 9 <unknown> 9056 32 9 <unknown> 9120 32 9 <unknown> 9184 32 9 <unknown> 9248 32 9 <unknown> 9312 32 9 <unknown> 9376 32 9 <unknown> 9440 32 9 <unknown> 9504 32 9 <unknown> 9568 32 9 <unknown> 9632 32 9 <unknown> 9696 32 9 <unknown> 9760 32 9 <unknown> 9824 32 9 <unknown> 9888 32 9 <unknown> 9952 32 9 <unknown> 10016 32 9 <unknown> 10080 32 9 <unknown> 10144 32 9 <unknown> 10208 32 9 <unknown> 10272 32 9 <unknown> 10336 32 9 <unknown> 10400 32 9 <unknown> 10464 32 9 <unknown> 10528 32 9 <unknown> 10592 32 9 <unknown> 10656 32 9 <unknown> 10720 32 9 <unknown> 10784 32 9 <unknown> 10848 32 9 <unknown> 10912 32 9 <unknown> 10976 32 9 <unknown> 11040 32 9 <unknown> 11104 32 9 <unknown> 11168 32 9 <unknown> 11232 32 9 <unknown> 11296 32 9 <unknown> 11360 32 9 <unknown> 11424 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)TxtConfigMgr::loadConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862752] = -218959118;
  v4[536862754] = -218959118;
  v4[536862756] = -218959118;
  v4[536862758] = -218959118;
  v4[536862760] = -218959118;
  v4[536862762] = -218959118;
  v4[536862764] = -218959118;
  v4[536862766] = -218959118;
  v4[536862768] = -218959118;
  v4[536862770] = -218959118;
  v4[536862772] = -218959118;
  v4[536862774] = -218959118;
  v4[536862776] = -218959118;
  v4[536862778] = -218959118;
  v4[536862780] = -218959118;
  v4[536862782] = -218959118;
  v4[536862784] = -218959118;
  v4[536862786] = -218959118;
  v4[536862788] = -218959118;
  v4[536862790] = -218959118;
  v4[536862792] = -218959118;
  v4[536862794] = -218959118;
  v4[536862796] = -218959118;
  v4[536862798] = -218959118;
  v4[536862800] = -218959118;
  v4[536862802] = -218959118;
  v4[536862804] = -218959118;
  v4[536862806] = -218959118;
  v4[536862808] = -218959118;
  v4[536862810] = -218959118;
  v4[536862812] = -218959118;
  v4[536862814] = -218959118;
  v4[536862816] = -218959118;
  v4[536862818] = -218959118;
  v4[536862820] = -218959118;
  v4[536862822] = -218959118;
  v4[536862824] = -218959118;
  v4[536862826] = -218959118;
  v4[536862828] = -218959118;
  v4[536862830] = -218959118;
  v4[536862832] = -218959118;
  v4[536862834] = -218959118;
  v4[536862836] = -218959118;
  v4[536862838] = -218959118;
  v4[536862840] = -218959118;
  v4[536862842] = -218959118;
  v4[536862844] = -218959118;
  v4[536862846] = -218959118;
  v4[536862848] = -218959118;
  v4[536862850] = -218959118;
  v4[536862852] = -218959118;
  v4[536862854] = -218959118;
  v4[536862856] = -218959118;
  v4[536862858] = -218959118;
  v4[536862860] = -218959118;
  v4[536862862] = -218959118;
  v4[536862864] = -218959118;
  v4[536862866] = -218959118;
  v4[536862868] = -218959118;
  v4[536862870] = -218959118;
  v4[536862872] = -218959118;
  v4[536862874] = -218959118;
  v4[536862876] = -218959118;
  v4[536862878] = -218959118;
  v4[536862880] = -218959118;
  v4[536862882] = -218959118;
  v4[536862884] = -218959118;
  v4[536862886] = -218959118;
  v4[536862888] = -218959118;
  v4[536862890] = -218959118;
  v4[536862892] = -218959118;
  v4[536862894] = -218959118;
  v4[536862896] = -218959118;
  v4[536862898] = -218959118;
  v4[536862900] = -218959118;
  v4[536862902] = -218959118;
  v4[536862904] = -218959118;
  v4[536862906] = -218959118;
  v4[536862908] = -218959118;
  v4[536862910] = -218959118;
  v4[536862912] = -218959118;
  v4[536862914] = -218959118;
  v4[536862916] = -218959118;
  v4[536862918] = -218959118;
  v4[536862920] = -218959118;
  v4[536862922] = -218959118;
  v4[536862924] = -218959118;
  v4[536862926] = -218959118;
  v4[536862928] = -218959118;
  v4[536862930] = -218959118;
  v4[536862932] = -218959118;
  v4[536862934] = -218959118;
  v4[536862936] = -218959118;
  v4[536862938] = -218959118;
  v4[536862940] = -218959118;
  v4[536862942] = -218959118;
  v4[536862944] = -218959118;
  v4[536862946] = -218959118;
  v4[536862948] = -218959118;
  v4[536862950] = -218959118;
  v4[536862952] = -218959118;
  v4[536862954] = -218959118;
  v4[536862956] = -218959118;
  v4[536862958] = -218959118;
  v4[536862960] = -218959118;
  v4[536862962] = -218959118;
  v4[536862964] = -218959118;
  v4[536862966] = -218959118;
  v4[536862968] = -218959118;
  v4[536862970] = -218959118;
  v4[536862972] = -218959118;
  v4[536862974] = -218959118;
  v4[536862976] = -218959118;
  v4[536862978] = -218959118;
  v4[536862980] = -218959118;
  v4[536862982] = -218959118;
  v4[536862984] = -218959118;
  v4[536862986] = -218959118;
  v4[536862988] = -218959118;
  v4[536862990] = -218959118;
  v4[536862992] = -218959118;
  v4[536862994] = -218959118;
  v4[536862996] = -218959118;
  v4[536862998] = -218959118;
  v4[536863000] = -218959118;
  v4[536863002] = -218959118;
  v4[536863004] = -218959118;
  v4[536863006] = -218959118;
  v4[536863008] = -218959118;
  v4[536863010] = -218959118;
  v4[536863012] = -218959118;
  v4[536863014] = -218959118;
  v4[536863016] = -218959118;
  v4[536863018] = -218959118;
  v4[536863020] = -218959118;
  v4[536863022] = -218959118;
  v4[536863024] = -218959118;
  v4[536863026] = -218959118;
  v4[536863028] = -218959118;
  v4[536863030] = -218959118;
  v4[536863032] = -218959118;
  v4[536863034] = -218959118;
  v4[536863036] = -218959118;
  v4[536863038] = -218959118;
  v4[536863040] = -218959118;
  v4[536863042] = -218959118;
  v4[536863044] = -218959118;
  v4[536863046] = -218959118;
  v4[536863048] = -218959118;
  v4[536863050] = -218959118;
  v4[536863052] = -218959118;
  v4[536863054] = -218959118;
  v4[536863056] = -218959118;
  v4[536863058] = -218959118;
  v4[536863060] = -218959118;
  v4[536863062] = -218959118;
  v4[536863064] = -218959118;
  v4[536863066] = -218959118;
  v4[536863068] = -218959118;
  v4[536863070] = -218959118;
  v4[536863072] = -218959118;
  v4[536863074] = -218959118;
  v4[536863076] = -218959118;
  v4[536863078] = -202116109;
  if ( ConstValueExcelConfigMgr::loadConfig(&this->const_value_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v5, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    v7 = -1;
  }
  else if ( data::AvatarExcelConfigMgrBase::loadConfig(&this->avatar_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[3], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    v7 = -1;
  }
  else if ( data::AvatarTalentExcelConfigMgrBase::loadConfig(&this->avatar_talent_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    v7 = -1;
  }
  else if ( data::AvatarSkillExcelConfigMgrBase::loadConfig(&this->avatar_skill_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[7], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    v7 = -1;
  }
  else if ( data::AvatarExtraPropExcelConfigMgrBase::loadConfig(&this->avatar_extra_prop_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[9] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[9], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    v7 = -1;
  }
  else if ( data::ElementExcelConfigMgrBase::loadConfig(&this->element_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[11] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[11].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[11].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[11], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    v7 = -1;
  }
  else if ( data::ReliquaryExcelConfigMgrBase::loadConfig(&this->reliquary_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[13] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[13].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[13].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[13], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 13,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 13);
    v7 = -1;
  }
  else if ( data::GadgetExcelConfigMgrBase::loadConfig(&this->gadget_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[15] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[15].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[15].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[15], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 15,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 15);
    v7 = -1;
  }
  else if ( data::GatherExcelConfigMgrBase::loadConfig(&this->gather_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[17] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[17].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[17].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[17], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 17,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 17);
    v7 = -1;
  }
  else if ( data::GrowCurveExcelConfigMgrBase::loadConfig(&this->grow_curve_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[19] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[19].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[19].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[19], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 19,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v25 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v24, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v25, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 19);
    v7 = -1;
  }
  else if ( data::MaterialExcelConfigMgrBase::loadConfig(&this->material_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[21] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[21].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[21].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[21], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 21,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v27, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 21);
    v7 = -1;
  }
  else if ( ItemExcelConfigMgr::loadConfig(&this->item_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[23] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[23].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[23].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[23], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 23,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v29 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v28, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v29, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 23);
    v7 = -1;
  }
  else if ( data::MonsterExcelConfigMgrBase::loadConfig(&this->monster_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[25] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[25].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[25].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[25], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 25,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v31 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v30, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v31, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 25);
    v7 = -1;
  }
  else if ( data::NpcExcelConfigMgrBase::loadConfig(&this->npc_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[27] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[27].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[27].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[27], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 27,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v33 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v32, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v33, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 27);
    v7 = -1;
  }
  else if ( data::QuestExcelConfigMgrBase::loadConfig(&this->quest_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[29] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[29].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[29].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[29], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 29,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v35 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v34, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v35, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 29);
    v7 = -1;
  }
  else if ( data::SceneExcelConfigMgrBase::loadConfig(&this->scene_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[31] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[31].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[31].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[31], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 31,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 31,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v37 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v36, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v37, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 31);
    v7 = -1;
  }
  else if ( data::ShopExcelConfigMgrBase::loadConfig(&this->shop_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[33] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[33].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[33].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[33], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 33,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 33,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v39 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v38, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v39, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 33);
    v7 = -1;
  }
  else if ( data::WeaponExcelConfigMgrBase::loadConfig(&this->weapon_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[35] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[35].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[35].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[35], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 35,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 35,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v41 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v40, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v41, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 35);
    v7 = -1;
  }
  else if ( data::WorldAreaExcelConfigMgrBase::loadConfig(&this->world_area_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[37] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[37].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[37].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[37], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 37,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 37,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v43 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v42, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v43, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 37);
    v7 = -1;
  }
  else if ( data::DungeonExcelConfigMgrBase::loadConfig(&this->dungeon_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[39] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[39].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[39].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[39], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 39,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 39,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v45 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v44, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v45, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 39);
    v7 = -1;
  }
  else if ( data::GearExcelConfigMgrBase::loadConfig(&this->gear_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[41] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[41].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[41].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[41], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 41,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 41,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v47 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v46, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v47, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 41);
    v7 = -1;
  }
  else if ( data::ReminderExcelConfigMgrBase::loadConfig(&this->reminder_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[43] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[43].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[43].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[43], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 43,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 43,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v49 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v48, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v49, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 43);
    v7 = -1;
  }
  else if ( data::WeatherExcelConfigMgrBase::loadConfig(&this->weather_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[45] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[45].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[45].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[45], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 45,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 45,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v51 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v50, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v51, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 45);
    v7 = -1;
  }
  else if ( data::TrialAvatarExcelConfigMgrBase::loadConfig(&this->trial_avatar_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[47] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[47].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[47].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[47], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 47,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 47,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v53 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v52, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v53, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 47);
    v7 = -1;
  }
  else if ( data::BoredExcelConfigMgrBase::loadConfig(&this->bored_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[49] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[49].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[49].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[49], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 49,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 49,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v55 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v54, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v55, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 49);
    v7 = -1;
  }
  else if ( data::PlayerExcelConfigMgrBase::loadConfig(&this->player_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[51] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[51].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[51].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[51], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 51,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 51,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v57 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v56, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v57, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 51);
    v7 = -1;
  }
  else if ( data::SensitiveWordExcelConfigMgrBase::loadConfig(&this->sensitive_word_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[53] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[53].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[53].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[53], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 53,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 53,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v59 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v58, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v59, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 53);
    v7 = -1;
  }
  else if ( data::EquipAffixExcelConfigMgrBase::loadConfig(&this->equip_affix_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[55] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[55].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[55].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[55], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 55,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 55,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v61 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v60, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v61, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 55);
    v7 = -1;
  }
  else if ( data::RewardExcelConfigMgrBase::loadConfig(&this->reward_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[57] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[57].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[57].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[57], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 57,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 57,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v63 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v62, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v63, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 57);
    v7 = -1;
  }
  else if ( data::EnvAnimalExcelConfigMgrBase::loadConfig(&this->env_animal_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[59] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[59].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[59].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[59], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 59,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v64 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 59,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v65 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v64, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v65, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 59);
    v7 = -1;
  }
  else if ( data::DropExcelConfigMgrBase::loadConfig(&this->drop_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[61] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[61].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[61].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[61], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 61,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 61,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v67 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v66, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v67, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 61);
    v7 = -1;
  }
  else if ( data::BuffExcelConfigMgrBase::loadConfig(&this->buff_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[63] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[63].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[63].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[63], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 63,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v68 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 63,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v69 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v68, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v69, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 63);
    v7 = -1;
  }
  else if ( data::CookExcelConfigMgrBase::loadConfig(&this->cook_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[65] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[65].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[65].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[65], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 65,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v70 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 65,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v71 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v70, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v71, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 65);
    v7 = -1;
  }
  else if ( data::CompoundExcelConfigMgrBase::loadConfig(&this->compound_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[67] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[67].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[67].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[67], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 67,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v72 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 67,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v73 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v72, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v73, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 67);
    v7 = -1;
  }
  else if ( data::OpenStateExcelConfigMgrBase::loadConfig(&this->open_state_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[69] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[69].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[69].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[69], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 69,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v74 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 69,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v75 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v74, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v75, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 69);
    v7 = -1;
  }
  else if ( data::LevelSuppressExcelConfigMgrBase::loadConfig(&this->level_suppress_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[71] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[71].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[71].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[71], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 71,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v76 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 71,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v77 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v76, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v77, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 71);
    v7 = -1;
  }
  else if ( data::DailyTaskExcelConfigMgrBase::loadConfig(&this->daily_task_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[73] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[73].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[73].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[73], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 73,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v78 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 73,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v79 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v78, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v79, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 73);
    v7 = -1;
  }
  else if ( data::RandTaskExcelConfigMgrBase::loadConfig(&this->rand_task_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[75] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[75].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[75].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[75], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 75,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 75,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v81 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v80, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v81, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 75);
    v7 = -1;
  }
  else if ( FetterExcelConfigMgr::loadConfig(&this->fetter_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[77] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[77].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[77].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[77], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 77,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v82 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 77,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v83 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v82, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v83, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 77);
    v7 = -1;
  }
  else if ( data::ExpeditionDataExcelConfigMgrBase::loadConfig(&this->expedition_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[79] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[79].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[79].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[79], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 79,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v84 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 79,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v85 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v84, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v85, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 79);
    v7 = -1;
  }
  else if ( data::GachaExcelConfigMgrBase::loadConfig(&this->gacha_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[81] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[81].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[81].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[81], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 81,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v86 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 81,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v87 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v86, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v87, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 81);
    v7 = -1;
  }
  else if ( data::CombineExcelConfigMgrBase::loadConfig(&this->combine_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[83] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[83].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[83].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[83], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 83,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v88 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 83,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v89 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v88, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v89, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 83);
    v7 = -1;
  }
  else if ( data::RefreshPolicyExcelConfigMgrBase::loadConfig(&this->refresh_policy_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[85] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[85].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[85].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[85], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 85,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v90 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 85,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v91 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v90, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v91, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 85);
    v7 = -1;
  }
  else if ( data::GivingExcelConfigMgrBase::loadConfig(&this->giving_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[87] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[87].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[87].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[87], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 87,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v92 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 87,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v93 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v92, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v93, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 87);
    v7 = -1;
  }
  else if ( data::ForgeExcelConfigMgrBase::loadConfig(&this->forge_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[89] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[89].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[89].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[89], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 89,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v94 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 89,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v95 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v94, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v95, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 89);
    v7 = -1;
  }
  else if ( data::InvestigationExcelConfigMgrBase::loadConfig(&this->investigation_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[91] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[91].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[91].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[91], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 91,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v96 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 91,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v97 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v96, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v97, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 91);
    v7 = -1;
  }
  else if ( data::HandbookQuestGuideExcelConfigMgrBase::loadConfig(&this->handbook_quest_guide_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[93] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[93].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[93].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[93], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 93,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v98 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 93,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v99 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v98, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v99, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 93);
    v7 = -1;
  }
  else if ( data::ActivitySeaLampExcelConfigMgrBase::loadConfig(&this->activity_sea_lamp_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[95] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[95].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[95].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[95], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 95,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v100 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 95,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v101 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v100, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v101, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 95);
    v7 = -1;
  }
  else if ( data::WatcherExcelConfigMgrBase::loadConfig(&this->watcher_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[97] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[97].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[97].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[97], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 97,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v102 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 97,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v103 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v102, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v103, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 97);
    v7 = -1;
  }
  else if ( data::DungeonEntryDataConfigMgrBase::loadConfig(&this->dungeon_entry_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[99] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[99].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[99].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[99], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 99,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v104 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 99,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v105 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v104, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v105, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 99);
    v7 = -1;
  }
  else if ( data::TowerExcelConfigMgrBase::loadConfig(&this->tower_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[101] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[101].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[101].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[101], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 101,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v106 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 101,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v107 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v106, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v107, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 101);
    v7 = -1;
  }
  else if ( data::MailExcelConfigMgrBase::loadConfig(&this->mail_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[103] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[103].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[103].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[103], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 103,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v108 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 103,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v109 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v108, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v109, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 103);
    v7 = -1;
  }
  else if ( ItemLimitExcelConfigMgr::loadConfig(&this->item_limit_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[105] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[105].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[105].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[105], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 105,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v110 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 105,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v111 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v110, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v111, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 105);
    v7 = -1;
  }
  else if ( data::AbilityPropExcelConfigMgrBase::loadConfig(&this->ability_prop_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[107] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[107].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[107].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[107], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 107,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v112 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 107,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v113 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v112, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v113, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 107);
    v7 = -1;
  }
  else if ( data::SignInExcelConfigMgrBase::loadConfig(&this->sign_in_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[109] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[109].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[109].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[109], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 109,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v114 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 109,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v115 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v114, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v115, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 109);
    v7 = -1;
  }
  else if ( data::BlossomExcelConfigMgrBase::loadConfig(&this->blossom_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[111] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[111].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[111].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[111], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 111,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v116 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 111,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v117 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v116, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v117, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 111);
    v7 = -1;
  }
  else if ( data::BattlePassExcelConfigMgrBase::loadConfig(&this->battle_pass_excel_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[113] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[113].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[113].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[113], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 113,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v118 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 113,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v119 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v118, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v119, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 113);
    v7 = -1;
  }
  else if ( data::ShopmallExcelConfigMgrBase::loadConfig(&this->shopmall_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[115] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[115].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[115].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[115], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 115,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v120 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 115,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v121 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v120, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v121, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 115);
    v7 = -1;
  }
  else if ( data::BargainExcelConfigMgrBase::loadConfig(&this->bargain_excel_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[117] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[117].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[117].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[117], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 117,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v122 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 117,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v123 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v122, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v123, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 117);
    v7 = -1;
  }
  else if ( data::TeamResonanceExcelConfigMgrBase::loadConfig(&this->team_resonance_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[119] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[119].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[119].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[119], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 119,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v124 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 119,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v125 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v124, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v125, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 119);
    v7 = -1;
  }
  else if ( data::TrialAvatarActivityExcelConfigMgrBase::loadConfig(&this->trial_avatar_activity_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[121] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[121].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[121].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[121], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 121,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v126 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 121,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v127 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v126, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v127, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 121);
    v7 = -1;
  }
  else if ( data::ActivitySalesmanExcelConfigMgrBase::loadConfig(&this->activity_salesman_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[123] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[123].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[123].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[123], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 123,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v128 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 123,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v129 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v128, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v129, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 123);
    v7 = -1;
  }
  else if ( data::AvatarFashionExcelConfigMgrBase::loadConfig(&this->avatar_fashion_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[125] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[125].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[125].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[125], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 125,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v130 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 125,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v131 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v130, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v131, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 125);
    v7 = -1;
  }
  else if ( data::NewActivityExcelConfigMgrBase::loadConfig(&this->new_activity_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[127] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[127].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[127].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[127], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 127,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v132 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 127,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v133 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v132, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v133, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 127);
    v7 = -1;
  }
  else if ( data::MpPlayExcelConfigMgrBase::loadConfig(&this->mp_play_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[129] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[129].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[129].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[129], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 129,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v134 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 129,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v135 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v134, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v135, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 129);
    v7 = -1;
  }
  else if ( data::AchievementExcelConfigMgrBase::loadConfig(&this->achievement_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[131] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[131].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[131].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[131], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 131,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v136 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 131,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v137 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v136, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v137, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 131);
    v7 = -1;
  }
  else if ( data::CodexExcelConfigMgrBase::loadConfig(&this->codex_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[133] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[133].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[133].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[133], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 133,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v138 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 133,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v139 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v138, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v139, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 133);
    v7 = -1;
  }
  else if ( data::PersonalLineExcelConfigMgrBase::loadConfig(&this->personal_line_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[135] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[135].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[135].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[135], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 135,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v140 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 135,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v141 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v140, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v141, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 135);
    v7 = -1;
  }
  else if ( data::ExploreExcelConfigMgrBase::loadConfig(&this->explore_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[137] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[137].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[137].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[137], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 137,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v142 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 137,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v143 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v142, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v143, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 137);
    v7 = -1;
  }
  else if ( data::ReviseLevelGrowExcelConfigMgrBase::loadConfig(&this->revise_level_grow_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[139] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[139].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[139].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[139], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 139,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v144 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 139,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v145 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v144, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v145, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 139);
    v7 = -1;
  }
  else if ( data::ActivityDeliveryExcelConfigMgrBase::loadConfig(&this->activity_delivery_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[141] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[141].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[141].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[141], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 141,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v146 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 141,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v147 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v146, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v147, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 141);
    v7 = -1;
  }
  else if ( data::ActivityAsterExcelConfigMgrBase::loadConfig(&this->activity_aster_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[143] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[143].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[143].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[143], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 143,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v148 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 143,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v149 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v148, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v149, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 143);
    v7 = -1;
  }
  else if ( data::HuntingExcelConfigMgrBase::loadConfig(&this->hunting_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[145] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[145].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[145].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[145], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 145,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v150 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 145,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v151 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v150, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v151, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 145);
    v7 = -1;
  }
  else if ( data::FeatureTagExcelConfigMgrBase::loadConfig(&this->feature_tag_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[147] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[147].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[147].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[147], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 147,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v152 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 147,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v153 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v152, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v153, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 147);
    v7 = -1;
  }
  else if ( data::ReputationExcelConfigMgrBase::loadConfig(&this->reputation_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[149] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[149].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[149].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[149], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 149,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v154 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 149,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v155 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v154, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v155, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 149);
    v7 = -1;
  }
  else if ( data::ActivityAbilityGroupExcelConfigMgrBase::loadConfig(&this->activity_ability_group_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[151] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[151].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[151].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[151], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 151,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v156 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 151,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v157 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v156, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v157, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 151);
    v7 = -1;
  }
  else if ( data::CoopExcelConfigMgrBase::loadConfig(&this->coop_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[153] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[153].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[153].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[153], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 153,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v158 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 153,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v159 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v158, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v159, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 153);
    v7 = -1;
  }
  else if ( data::ActivityShopExcelConfigMgrBase::loadConfig(&this->activity_shop_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[155] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[155].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[155].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[155], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 155,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v160 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 155,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v161 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v160, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v161, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 155);
    v7 = -1;
  }
  else if ( data::ActivityFlightExcelConfigMgrBase::loadConfig(&this->activity_flight_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[157] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[157].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[157].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[157], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 157,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v162 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 157,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v163 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v162, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v163, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 157);
    v7 = -1;
  }
  else if ( data::StrengthenExcelConfigMgrBase::loadConfig(&this->strengthen_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[159] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[159].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[159].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[159], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 159,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v164 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 159,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v165 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v164, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v165, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 159);
    v7 = -1;
  }
  else if ( data::ActivityDragonSpineExcelConfigMgrBase::loadConfig(&this->activity_dragon_spine_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[161] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[161].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[161].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[161], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 161,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v166 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 161,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v167 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v166, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v167, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 161);
    v7 = -1;
  }
  else if ( data::OfferingExcelConfigMgrBase::loadConfig(&this->offering_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[163] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[163].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[163].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[163], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 163,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v168 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 163,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v169 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v168, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v169, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 163);
    v7 = -1;
  }
  else if ( data::ActivityEffigyChallengeExcelConfigMgrBase::loadConfig(
              &this->activity_effigy_challenge_config_mgr,
              config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[165] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[165].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[165].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[165], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 165,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v170 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 165,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v171 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v170, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v171, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 165);
    v7 = -1;
  }
  else if ( data::ActivityTreasureMapExcelConfigMgrBase::loadConfig(&this->activity_treasure_map_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[167] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[167].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[167].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[167], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 167,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v172 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 167,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v173 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v172, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v173, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 167);
    v7 = -1;
  }
  else if ( data::ReunionExcelConfigMgrBase::loadConfig(&this->reunion_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[169] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[169].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[169].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[169], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 169,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v174 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 169,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v175 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v174, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v175, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 169);
    v7 = -1;
  }
  else if ( data::DungeonElementChallengeExcelConfigMgrBase::loadConfig(
              &this->dungeon_element_challenge_config_mgr,
              config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[171] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[171].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[171].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[171], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 171,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v176 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 171,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v177 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v176, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v177, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 171);
    v7 = -1;
  }
  else if ( data::RoutineExcelConfigMgrBase::loadConfig(&this->routine_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[173] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[173].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[173].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[173], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 173,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v178 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 173,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v179 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v178, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v179, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 173);
    v7 = -1;
  }
  else if ( data::CombatTemplateExcelConfigMgrBase::loadConfig(&this->combat_template_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[175] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[175].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[175].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[175], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 175,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v180 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 175,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v181 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v180, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v181, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 175);
    v7 = -1;
  }
  else if ( data::MiracleRingExcelConfigMgrBase::loadConfig(&this->miracle_ring_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[177] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[177].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[177].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[177], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 177,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v182 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 177,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v183 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v182, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v183, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 177);
    v7 = -1;
  }
  else if ( data::ActivityBlessingExcelConfigMgrBase::loadConfig(&this->activity_blessing_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[179] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[179].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[179].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[179], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 179,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v184 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 179,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v185 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v184, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v185, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 179);
    v7 = -1;
  }
  else if ( data::ActivityExpeditionExcelConfigMgrBase::loadConfig(&this->activity_expedition_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[181] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[181].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[181].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[181], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 181,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v186 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 181,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v187 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v186, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v187, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 181);
    v7 = -1;
  }
  else if ( data::OpActivityExcelConfigMgrBase::loadConfig(&this->op_activity_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[183] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[183].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[183].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[183], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 183,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v188 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 183,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v189 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v188, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v189, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 183);
    v7 = -1;
  }
  else if ( data::TreatreMechanicusExcelConfigMgrBase::loadConfig(&this->mechanicus_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[185] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[185].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[185].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[185], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 185,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v190 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 185,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v191 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v190, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v191, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 185);
    v7 = -1;
  }
  else if ( data::DraftExcelConfigMgrBase::loadConfig(&this->draft_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[187] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[187].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[187].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[187], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 187,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v192 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 187,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v193 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v192, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v193, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 187);
    v7 = -1;
  }
  else if ( data::GalleryExcelConfigMgrBase::loadConfig(&this->gallery_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[189] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[189].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[189].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[189], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 189,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v194 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 189,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v195 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v194, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v195, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 189);
    v7 = -1;
  }
  else if ( data::OverflowTransformExcelConfigMgrBase::loadConfig(&this->overflow_transform_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[191] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[191].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[191].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[191], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 191,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v196 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 191,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v197 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v196, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v197, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 191);
    v7 = -1;
  }
  else if ( data::HomeWorldExcelConfigMgrBase::loadConfig(&this->home_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[193] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[193].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[193].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[193], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 193,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v198 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 193,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v199 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v198, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v199, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 193);
    v7 = -1;
  }
  else if ( data::ActivityFleurFairExcelConfigMgrBase::loadConfig(&this->activity_fleur_fair_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[195] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[195].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[195].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[195], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 195,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v200 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 195,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v201 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v200, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v201, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 195);
    v7 = -1;
  }
  else if ( data::ActivityArenaChallengeExcelConfigMgrBase::loadConfig(
              &this->activity_arena_challenge_config_mgr,
              config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[197] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[197].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[197].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[197], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 197,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v202 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 197,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v203 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v202, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v203, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 197);
    v7 = -1;
  }
  else if ( data::ActivityRegionSearchMgrBase::loadConfig(&this->region_search_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[199] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[199].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[199].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[199], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 199,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v204 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 199,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v205 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v204, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v205, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 199);
    v7 = -1;
  }
  else if ( data::ActivityMusicGameConfigMgrBase::loadConfig(&this->activity_music_game_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[201] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[201].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[201].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[201], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 201,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v206 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 201,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v207 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v206, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v207, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 201);
    v7 = -1;
  }
  else if ( data::TreeTypeExcelConfigMgrBase::loadConfig(&this->tree_type_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[203] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[203].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[203].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[203], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 203,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v208 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 203,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v209 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v208, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v209, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 203);
    v7 = -1;
  }
  else if ( data::ExclusiveRuleExcelConfigMgrBase::loadConfig(&this->exclusive_rule_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[205] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[205].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[205].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[205], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 205,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v210 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 205,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v211 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v210, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v211, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 205);
    v7 = -1;
  }
  else if ( data::ActivityMistTrialExcelConfigMgrBase::loadConfig(&this->activity_mist_trial_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[207] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[207].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[207].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[207], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 207,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v212 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 207,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v213 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v212, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v213, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 207);
    v7 = -1;
  }
  else if ( data::ActivityHideAndSeekConfigMgrBase::loadConfig(&this->activity_hide_and_seek_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[209] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[209].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[209].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[209], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 209,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v214 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 209,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v215 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v214, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v215, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 209);
    v7 = -1;
  }
  else if ( data::ActivityChannellerSlabExcelConfigMgrBase::loadConfig(
              &this->activity_channeller_slab_config_mgr,
              config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[211] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[211].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[211].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[211], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 211,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v216 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 211,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v217 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v216, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v217, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 211);
    v7 = -1;
  }
  else if ( data::ActivityMimiTomoExcelConfigMgrBase::loadConfig(&this->activity_find_hilichurl_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[213] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[213].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[213].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[213], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 213,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v218 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 213,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v219 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v218, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v219, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 213);
    v7 = -1;
  }
  else if ( data::H5ActivityExcelConfigMgrBase::loadConfig(&this->h5_activity_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[215] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[215].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[215].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[215], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 215,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v220 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 215,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v221 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v220, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v221, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 215);
    v7 = -1;
  }
  else if ( data::MatchExcelConfigMgrBase::loadConfig(&this->match_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[217] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[217].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[217].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[217], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 217,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v222 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 217,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v223 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v222, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v223, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 217);
    v7 = -1;
  }
  else if ( data::ExhibitionExcelConfigMgrBase::loadConfig(&this->exhibition_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[219] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[219].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[219].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[219], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 219,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v224 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 219,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v225 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v224, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v225, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 219);
    v7 = -1;
  }
  else if ( data::StatLogFilterExcelConfigMgrBase::loadConfig(&this->stat_log_filter_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[221] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[221].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[221].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[221], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 221,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v226 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 221,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v227 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v226, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v227, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 221);
    v7 = -1;
  }
  else if ( data::ActivitySummerTimeExcelConfigMgrBase::loadConfig(&this->activity_summer_time_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[223] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[223].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[223].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[223], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 223,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v228 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 223,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v229 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v228, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v229, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 223);
    v7 = -1;
  }
  else if ( data::ActivityBuoyantCombatExcelConfigMgrBase::loadConfig(&this->activity_buoyant_combat_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[225] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[225].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[225].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[225], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 225,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v230 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 225,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v231 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v230, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v231, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 225);
    v7 = -1;
  }
  else if ( data::ActivityBounceConjuringExcelConfigMgrBase::loadConfig(
              &this->activity_bounce_conjuring_config_mgr,
              config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[227] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[227].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[227].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[227], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 227,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v232 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 227,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v233 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v232, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v233, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 227);
    v7 = -1;
  }
  else if ( data::ActivityEchoShellExcelConfigMgrBase::loadConfig(&this->activity_echo_shell_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[229] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[229].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[229].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[229], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 229,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v234 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 229,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v235 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v234, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v235, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 229);
    v7 = -1;
  }
  else if ( data::ActivityBlitzRushExcelConfigMgrBase::loadConfig(&this->activity_blitz_rush_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[231] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[231].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[231].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[231], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 231,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v236 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 231,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v237 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v236, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v237, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 231);
    v7 = -1;
  }
  else if ( data::ActivityChessExcelConfigMgrBase::loadConfig(&this->activity_chess_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[233] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[233].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[233].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[233], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 233,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v238 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 233,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v239 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v238, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v239, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 233);
    v7 = -1;
  }
  else if ( data::WidgetCameraExcelConfigMgrBase::loadConfig(&this->widget_camera_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[235] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[235].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[235].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[235], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 235,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v240 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 235,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v241 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v240, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v241, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 235);
    v7 = -1;
  }
  else if ( data::ActivitySumoExcelConfigMgrBase::loadConfig(&this->activity_sumo_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[237] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[237].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[237].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[237], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 237,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v242 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 237,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v243 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v242, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v243, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 237);
    v7 = -1;
  }
  else if ( data::ActivityGroupLinksExcelConfigMgrBase::loadConfig(&this->activity_group_links_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[239] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[239].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[239].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[239], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 239,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v244 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 239,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v245 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v244, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v245, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 239);
    v7 = -1;
  }
  else if ( data::ActivityLunaRiteExcelConfigMgrBase::loadConfig(&this->activity_luna_rite_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[241] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[241].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[241].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[241], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 241,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v246 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 241,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v247 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v246, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v247, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 241);
    v7 = -1;
  }
  else if ( data::FishExcelConfigMgrBase::loadConfig(&this->fish_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[243] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[243].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[243].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[243], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 243,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v248 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 243,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v249 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v248, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v249, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 243);
    v7 = -1;
  }
  else if ( data::ActivityMoonfinTrialExcelConfigMgrBase::loadConfig(&this->activity_moonfin_trial_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[245] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[245].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[245].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[245], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 245,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v250 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 245,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v251 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v250, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v251, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 245);
    v7 = -1;
  }
  else if ( data::ActivityRogueExcelConfigMgrBase::loadConfig(&this->activity_rogue_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[247] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[247].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[247].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[247], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 247,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v252 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 247,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v253 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v252, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v253, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 247);
    v7 = -1;
  }
  else if ( data::ActivityPlantFlowerExcelConfigMgrBase::loadConfig(&this->activity_plant_flower_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[249] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[249].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[249].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[249], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 249,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v254 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 249,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v255 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v254, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v255, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 249);
    v7 = -1;
  }
  else if ( data::WidgetExcelConfigMgrBase::loadConfig(&this->widget_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[251] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[251].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[251].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[251], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 251,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v256 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 251,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v257 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v256, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v257, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 251);
    v7 = -1;
  }
  else if ( data::AbilityOverrideExcelConfigMgrBase::loadConfig(&this->ability_override_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[253] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[253].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[253].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[253], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 253,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v258 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 253,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v259 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v258, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v259, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 253);
    v7 = -1;
  }
  else if ( data::ActivityDigExcelConfigMgrBase::loadConfig(&this->activity_dig_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[255] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[255].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[255].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[255], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 255,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v260 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 255,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v261 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v260, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v261, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 255);
    v7 = -1;
  }
  else if ( data::ActivityHachiExcelConfigMgrBase::loadConfig(&this->activity_hachi_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[257] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[257].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[257].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[257], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 257,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v262 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 257,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v263 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v262, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v263, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 257);
    v7 = -1;
  }
  else if ( data::ActivityWinterCampExcelConfigMgrBase::loadConfig(&this->activity_winter_camp_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[259] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[259].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[259].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[259], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 259,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v264 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 259,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v265 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v264, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v265, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 259);
    v7 = -1;
  }
  else if ( data::LevelTagExcelConfigMgrBase::loadConfig(&this->level_tag_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[261] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[261].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[261].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[261], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 261,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v266 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 261,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v267 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v266, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v267, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 261);
    v7 = -1;
  }
  else if ( data::CustomLevelExcelConfigMgrBase::loadConfig(&this->custom_dungeon_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[263] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[263].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[263].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[263], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 263,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v268 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 263,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v269 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v268, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v269, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 263);
    v7 = -1;
  }
  else if ( data::FireworksExcelConfigMgrBase::loadConfig(&this->fireworks_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[265] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[265].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[265].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[265], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 265,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v270 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 265,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v271 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v270, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v271, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 265);
    v7 = -1;
  }
  else if ( data::ActivityPotionExcelConfigMgrBase::loadConfig(&this->activity_potion_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[267] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[267].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[267].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[267], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 267,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v272 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 267,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v273 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v272, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v273, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 267);
    v7 = -1;
  }
  else if ( data::ActivityTanukiTravelExcelConfigMgrBase::loadConfig(&this->activity_tanuki_travel_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[269] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[269].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[269].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[269], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 269,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v274 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 269,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v275 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v274, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v275, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 269);
    v7 = -1;
  }
  else if ( data::GCGGameExcelConfigMgrBase::loadConfig(&this->gcg_game_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[271] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[271].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[271].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[271], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 271,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v276 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 271,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v277 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v276, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v277, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 271);
    v7 = -1;
  }
  else if ( data::GCGDeckExcelConfigMgrBase::loadConfig(&this->gcg_deck_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[273] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[273].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[273].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[273], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 273,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v278 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 273,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v279 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v278, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v279, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 273);
    v7 = -1;
  }
  else if ( data::GCGPlayingExcelConfigMgrBase::loadConfig(&this->gcg_playing_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[275] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[275].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[275].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[275], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 275,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v280 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 275,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v281 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v280, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v281, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 275);
    v7 = -1;
  }
  else if ( data::GCGGrowthExcelConfigMgrBase::loadConfig(&this->gcg_growth_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[277] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[277].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[277].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[277], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 277,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v282 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 277,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v283 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v282, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v283, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 277);
    v7 = -1;
  }
  else if ( data::ActivityMichiaeMatsuriExcelConfigMgrBase::loadConfig(
              &this->activity_michiae_matsuri_config_mgr,
              config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[279] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[279].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[279].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[279], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 279,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v284 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 279,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v285 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v284, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v285, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 279);
    v7 = -1;
  }
  else if ( data::MultistageExcelConfigMgrBase::loadConfig(&this->multistage_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[281] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[281].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[281].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[281], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 281,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v286 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 281,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v287 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v286, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v287, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 281);
    v7 = -1;
  }
  else if ( data::ActivityBartenderExcelConfigMgrBase::loadConfig(&this->activity_bartender_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[283] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[283].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[283].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[283], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 283,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v288 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 283,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v289 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v288, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v289, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 283);
    v7 = -1;
  }
  else if ( data::DisplayItemExcelConfigMgrBase::loadConfig(&this->display_item_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[285] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[285].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[285].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[285], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 285,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v290 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 285,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v291 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v290, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v291, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 285);
    v7 = -1;
  }
  else if ( data::UIInteractExcelConfigMgrBase::loadConfig(&this->ui_interact_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[287] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[287].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[287].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[287], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 287,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v292 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 287,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v293 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v292, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v293, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 287);
    v7 = -1;
  }
  else if ( data::ShareCDExcelConfigMgrBase::loadConfig(&this->share_cd_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[289] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[289].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[289].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[289], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 289,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v294 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 289,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v295 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v294, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v295, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 289);
    v7 = -1;
  }
  else if ( data::ActivityCrystalLinkExcelConfigMgrBase::loadConfig(&this->activity_crystal_link_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[291] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[291].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[291].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[291], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 291,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v296 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 291,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v297 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v296, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v297, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 291);
    v7 = -1;
  }
  else if ( data::ActivityIrodoriExcelConfigMgrBase::loadConfig(&this->activity_irodori_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[293] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[293].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[293].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[293], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 293,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v298 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 293,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v299 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v298, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v299, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 293);
    v7 = -1;
  }
  else if ( data::ActivitySpiceExcelConfigMgrBase::loadConfig(&this->activity_spice_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[295] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[295].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[295].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[295], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 295,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v300 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 295,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v301 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v300, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v301, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 295);
    v7 = -1;
  }
  else if ( data::ActivityPhotographExcelConfigMgrBase::loadConfig(&this->activity_photograph_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[297] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[297].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[297].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[297], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 297,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v302 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 297,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v303 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v302, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v303, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 297);
    v7 = -1;
  }
  else if ( data::GroupTagExcelConfigMgrBase::loadConfig(&this->group_tag_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[299] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[299].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[299].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[299], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 299,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v304 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 299,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v305 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v304, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v305, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 299);
    v7 = -1;
  }
  else if ( data::ActivityGachaExcelConfigMgrBase::loadConfig(&this->activity_gacha_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[301] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[301].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[301].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[301], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 301,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v306 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 301,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v307 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v306, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v307, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 301);
    v7 = -1;
  }
  else if ( data::ActivityLumianceStoneChallengeExcelConfigMgrBase::loadConfig(
              &this->activity_luminance_stone_challenge_config_mgr,
              config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[303] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[303].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[303].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[303], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 303,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v308 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 303,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v309 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v308, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v309, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 303);
    v7 = -1;
  }
  else if ( data::ActivityRogueDiaryExcelConfigMgrBase::loadConfig(&this->activity_rogue_diary_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[305] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[305].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[305].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[305], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 305,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v310 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 305,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v311 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v310, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v311, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 305);
    v7 = -1;
  }
  else if ( data::GadgetArgumentExcelConfigMgrBase::loadConfig(&this->gadget_argument_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[307] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[307].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[307].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[307], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 307,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v312 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 307,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v313 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v312, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v313, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 307);
    v7 = -1;
  }
  else if ( data::ActivityGearExcelConfigMgrBase::loadConfig(&this->activity_gear_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[309] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[309].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[309].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[309], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 309,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v314 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 309,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v315 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v314, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v315, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 309);
    v7 = -1;
  }
  else if ( data::ActivitySummerTimeV2ExcelConfigMgrBase::loadConfig(&this->activity_summer_time_v2_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[311] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[311].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[311].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[311], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 311,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v316 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 311,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v317 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v316, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v317, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 311);
    v7 = -1;
  }
  else if ( data::CatalogExcelConfigMgrBase::loadConfig(&this->catalog_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[313] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[313].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[313].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[313], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 313,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v318 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 313,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v319 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v318, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v319, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 313);
    v7 = -1;
  }
  else if ( data::RegionPlayLevelExcelConfigMgrBase::loadConfig(&this->region_play_level_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[315] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[315].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[315].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[315], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 315,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v320 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 315,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v321 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v320, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v321, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 315);
    v7 = -1;
  }
  else if ( data::ActivityIslandPartyExcelConfigMgrBase::loadConfig(&this->activity_island_party_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[317] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[317].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[317].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[317], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 317,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v322 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 317,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v323 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v322, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v323, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 317);
    v7 = -1;
  }
  else if ( data::ActivityGravenInnocenceExcelConfigMgrBase::loadConfig(&this->activity_graven_innocence_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[319] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[319].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[319].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[319], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 319,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v324 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 319,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v325 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v324, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v325, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 319);
    v7 = -1;
  }
  else if ( data::ActivityInstableSprayExcelConfigMgrBase::loadConfig(&this->activity_instable_spray_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[321] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[321].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[321].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[321], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 321,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v326 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 321,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v327 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v326, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v327, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 321);
    v7 = -1;
  }
  else if ( data::ActivityMuqadasPotionExcelConfigMgrBase::loadConfig(&this->activity_muqadas_potion_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[323] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[323].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[323].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[323], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 323,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v328 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 323,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v329 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v328, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v329, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 323);
    v7 = -1;
  }
  else if ( data::ActivityTreasureSeelieExcelConfigMgrBase::loadConfig(
              &this->activity_treasure_seelie_config_mgr,
              config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[325] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[325].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[325].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[325], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 325,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v330 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 325,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v331 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v330, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v331, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 325);
    v7 = -1;
  }
  else if ( data::InferenceExcelConfigMgrBase::loadConfig(&this->inference_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[327] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[327].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[327].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[327], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 327,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v332 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 327,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v333 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v332, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v333, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 327);
    v7 = -1;
  }
  else if ( data::ActivityWindFieldConfigMgrBase::loadConfig(&this->activity_wind_field_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[329] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[329].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[329].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[329], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 329,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v334 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 329,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v335 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v334, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v335, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 329);
    v7 = -1;
  }
  else if ( data::ActivityVintageExcelConfigMgrBase::loadConfig(&this->activity_vintage_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[331] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[331].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[331].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[331], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 331,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v336 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 331,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v337 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v336, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v337, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 331);
    v7 = -1;
  }
  else if ( data::ActivityRockBoardExploreExcelConfigMgrBase::loadConfig(
              &this->activity_rock_board_explore_config_mgr,
              config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[333] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[333].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[333].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[333], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 333,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v338 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 333,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v339 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v338, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v339, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 333);
    v7 = -1;
  }
  else if ( data::ActivityVintageMarketExcelConfigMgrBase::loadConfig(&this->activity_vintage_market_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[335] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[335].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[335].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[335], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 335,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v340 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 335,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v341 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v340, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v341, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 335);
    v7 = -1;
  }
  else if ( data::ActivityFungusFighterExcelConfigMgrBase::loadConfig(&this->activity_fungus_fighter_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[337] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[337].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[337].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[337], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 337,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v342 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 337,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v343 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v342, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v343, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 337);
    v7 = -1;
  }
  else if ( data::ActivityCharAmusementExcelConfigMgrBase::loadConfig(&this->activity_char_amusement_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[339] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[339].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[339].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[339], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 339,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v344 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 339,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v345 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v344, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v345, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 339);
    v7 = -1;
  }
  else if ( data::ActivityEffigyChallengeV2ExcelConfigMgrBase::loadConfig(
              &this->activity_effigy_challenge_v2_config_mgr,
              config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[341] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[341].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[341].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[341], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 341,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v346 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 341,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v347 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v346, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v347, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 341);
    v7 = -1;
  }
  else if ( data::RenameExcelConfigMgrBase::loadConfig(&this->rename_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[343] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[343].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[343].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[343], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 343,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v348 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 343,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v349 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v348, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v349, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 343);
    v7 = -1;
  }
  else if ( data::ActivityCoinCollectExcelConfigMgrBase::loadConfig(&this->activity_coin_collect_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[345] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[345].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[345].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[345], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 345,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v350 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 345,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v351 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v350, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v351, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 345);
    v7 = -1;
  }
  else if ( data::ActivityBrickBreakerExcelConfigMgrBase::loadConfig(&this->activity_brick_breaker_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[347] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[347].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[347].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[347], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 347,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v352 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 347,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v353 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v352, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v353, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 347);
    v7 = -1;
  }
  else if ( data::ActivityElectroherculesBattleExcelConfigMgrBase::loadConfig(
              &this->activity_electrohercules_battle_config_mgr,
              config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[349] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[349].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[349].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[349], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 349,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v354 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 349,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v355 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v354, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v355, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 349);
    v7 = -1;
  }
  else if ( data::ActivityTeamChainExcelConfigMgrBase::loadConfig(&this->activity_team_chain_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[351] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[351].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[351].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[351], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 351,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v356 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 351,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v357 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v356, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v357, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 351);
    v7 = -1;
  }
  else if ( data::ActivitySeaLampV3ExcelConfigMgrBase::loadConfig(&this->activity_sea_lamp_v3_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[353] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[353].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[353].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[353], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 353,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v358 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 353,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v359 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v358, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v359, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 353);
    v7 = -1;
  }
  else if ( data::ActivityDuelHeartConfigMgrBase::loadConfig(&this->activity_duel_heart_config_mgr, config) )
  {
    if ( *(char *)(((unsigned __int64)&v2[355] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[355].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[355].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[355], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 355,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "loadConfig",
      215);
    v360 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 355,
             (const char (*)[16])"[CONFIG_ERROR] ");
    v361 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v360, (const char (*)[11])"loadConfig");
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v361, (const char (*)[7])"failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 355);
    v7 = -1;
  }
  else
  {
    v7 = 0;
  }
  v362 = v7;
  if ( v364 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8048) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8050) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8058) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8060) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8068) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8070) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8078) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8080) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8088) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8090) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8098) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF80A0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF80A8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF80B0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF80B8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF80C0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF80C8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF80D0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF80D8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF80E0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF80E8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF80F0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF80F8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8100) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8108) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8110) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8118) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8120) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8128) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8130) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8138) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8140) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8148) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8150) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8158) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8160) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8168) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8170) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8178) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8180) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8188) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8190) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8198) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF81A0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF81A8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF81B0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF81B8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF81C0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF81C8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF81D0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF81D8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF81E0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF81E8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF81F0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF81F8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8200) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8208) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8210) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8218) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8220) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8228) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8230) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8238) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8240) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8248) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8250) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8258) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8260) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8268) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8270) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8278) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8280) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8288) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8290) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8298) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF82A0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF82A8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF82B0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF82B8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF82C0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF82C8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF82D0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF82D8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF82E0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF82E8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF82F0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF82F8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8300) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8308) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8310) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8318) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8320) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8328) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8330) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8338) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8340) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8348) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8350) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8358) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8360) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8368) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8370) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8378) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8380) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8388) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8390) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8398) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF83A0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF83A8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF83B0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF83B8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF83C0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF83C8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF83D0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF83D8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF83E0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF83E8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF83F0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF83F8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8400) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8408) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8410) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8418) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8420) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8428) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8430) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8438) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8440) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8448) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8450) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8458) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8460) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8468) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8470) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8478) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8480) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8488) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8490) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8498) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF84A0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF84A8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF84B0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF84B8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF84C0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF84C8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF84D0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF84D8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF84E0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF84E8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF84F0) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF84F8) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8500) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8508) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8510) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8518) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8520) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8528) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8530) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8538) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8540) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8548) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8550) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8558) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8560) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8568) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8570) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8578) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8580) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8588) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8590) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8598) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    __asan_stack_free_8(v2, 11488LL, v364);
  }
  return v362;
};

// Line 224: range 000000000CD4F500-000000000CD51136
int32_t __cdecl TxtConfigMgr::checkConfig(TxtConfigMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-84h]
  int reta; // [rsp+1Ch] [rbp-84h]
  int retb; // [rsp+1Ch] [rbp-84h]
  int retc; // [rsp+1Ch] [rbp-84h]
  int retd; // [rsp+1Ch] [rbp-84h]
  int rete; // [rsp+1Ch] [rbp-84h]
  int retf; // [rsp+1Ch] [rbp-84h]
  int retg; // [rsp+1Ch] [rbp-84h]
  int reth; // [rsp+1Ch] [rbp-84h]
  int reti; // [rsp+1Ch] [rbp-84h]
  int retj; // [rsp+1Ch] [rbp-84h]
  int retk; // [rsp+1Ch] [rbp-84h]
  int retl; // [rsp+1Ch] [rbp-84h]
  int retm; // [rsp+1Ch] [rbp-84h]
  int retn; // [rsp+1Ch] [rbp-84h]
  int reto; // [rsp+1Ch] [rbp-84h]
  int retp; // [rsp+1Ch] [rbp-84h]
  int retq; // [rsp+1Ch] [rbp-84h]
  int retr; // [rsp+1Ch] [rbp-84h]
  int rets; // [rsp+1Ch] [rbp-84h]
  int rett; // [rsp+1Ch] [rbp-84h]
  int retu; // [rsp+1Ch] [rbp-84h]
  int retv; // [rsp+1Ch] [rbp-84h]
  int retw; // [rsp+1Ch] [rbp-84h]
  int retx; // [rsp+1Ch] [rbp-84h]
  int rety; // [rsp+1Ch] [rbp-84h]
  int retz; // [rsp+1Ch] [rbp-84h]
  int retba; // [rsp+1Ch] [rbp-84h]
  int retbb; // [rsp+1Ch] [rbp-84h]
  int retbc; // [rsp+1Ch] [rbp-84h]
  int retbd; // [rsp+1Ch] [rbp-84h]
  int retbe; // [rsp+1Ch] [rbp-84h]
  int retbf; // [rsp+1Ch] [rbp-84h]
  int retbg; // [rsp+1Ch] [rbp-84h]
  int retbh; // [rsp+1Ch] [rbp-84h]
  int retbi; // [rsp+1Ch] [rbp-84h]
  int retbj; // [rsp+1Ch] [rbp-84h]
  int retbk; // [rsp+1Ch] [rbp-84h]
  int retbl; // [rsp+1Ch] [rbp-84h]
  int retbm; // [rsp+1Ch] [rbp-84h]
  int retbn; // [rsp+1Ch] [rbp-84h]
  int retbo; // [rsp+1Ch] [rbp-84h]
  int retbp; // [rsp+1Ch] [rbp-84h]
  int retbq; // [rsp+1Ch] [rbp-84h]
  int retbr; // [rsp+1Ch] [rbp-84h]
  int retbs; // [rsp+1Ch] [rbp-84h]
  int retbt; // [rsp+1Ch] [rbp-84h]
  int retbu; // [rsp+1Ch] [rbp-84h]
  int retbv; // [rsp+1Ch] [rbp-84h]
  int retbw; // [rsp+1Ch] [rbp-84h]
  int retbx; // [rsp+1Ch] [rbp-84h]
  int retby; // [rsp+1Ch] [rbp-84h]
  int retbz; // [rsp+1Ch] [rbp-84h]
  int retca; // [rsp+1Ch] [rbp-84h]
  int retcb; // [rsp+1Ch] [rbp-84h]
  int retcc; // [rsp+1Ch] [rbp-84h]
  int retcd; // [rsp+1Ch] [rbp-84h]
  int retce; // [rsp+1Ch] [rbp-84h]
  int retcf; // [rsp+1Ch] [rbp-84h]
  int retcg; // [rsp+1Ch] [rbp-84h]
  int retch; // [rsp+1Ch] [rbp-84h]
  int retci; // [rsp+1Ch] [rbp-84h]
  int retcj; // [rsp+1Ch] [rbp-84h]
  int retck; // [rsp+1Ch] [rbp-84h]
  int retcl; // [rsp+1Ch] [rbp-84h]
  int retcm; // [rsp+1Ch] [rbp-84h]
  int retcn; // [rsp+1Ch] [rbp-84h]
  int retco; // [rsp+1Ch] [rbp-84h]
  int retcp; // [rsp+1Ch] [rbp-84h]
  int retcq; // [rsp+1Ch] [rbp-84h]
  int retcr; // [rsp+1Ch] [rbp-84h]
  int retcs; // [rsp+1Ch] [rbp-84h]
  int retct; // [rsp+1Ch] [rbp-84h]
  int retcu; // [rsp+1Ch] [rbp-84h]
  int retcv; // [rsp+1Ch] [rbp-84h]
  int retcw; // [rsp+1Ch] [rbp-84h]
  int retcx; // [rsp+1Ch] [rbp-84h]
  int retcy; // [rsp+1Ch] [rbp-84h]
  int retcz; // [rsp+1Ch] [rbp-84h]
  int retda; // [rsp+1Ch] [rbp-84h]
  int retdb; // [rsp+1Ch] [rbp-84h]
  int retdc; // [rsp+1Ch] [rbp-84h]
  int retdd; // [rsp+1Ch] [rbp-84h]
  int retde; // [rsp+1Ch] [rbp-84h]
  int retdf; // [rsp+1Ch] [rbp-84h]
  int retdg; // [rsp+1Ch] [rbp-84h]
  int retdh; // [rsp+1Ch] [rbp-84h]
  int retdi; // [rsp+1Ch] [rbp-84h]
  int retdj; // [rsp+1Ch] [rbp-84h]
  int retdk; // [rsp+1Ch] [rbp-84h]
  int retdl; // [rsp+1Ch] [rbp-84h]
  int retdm; // [rsp+1Ch] [rbp-84h]
  int retdn; // [rsp+1Ch] [rbp-84h]
  int retdo; // [rsp+1Ch] [rbp-84h]
  int retdp; // [rsp+1Ch] [rbp-84h]
  int retdq; // [rsp+1Ch] [rbp-84h]
  int retdr; // [rsp+1Ch] [rbp-84h]
  int retds; // [rsp+1Ch] [rbp-84h]
  int retdt; // [rsp+1Ch] [rbp-84h]
  int retdu; // [rsp+1Ch] [rbp-84h]
  int retdv; // [rsp+1Ch] [rbp-84h]
  int retdw; // [rsp+1Ch] [rbp-84h]
  int retdx; // [rsp+1Ch] [rbp-84h]
  int retdy; // [rsp+1Ch] [rbp-84h]
  int retdz; // [rsp+1Ch] [rbp-84h]
  int retea; // [rsp+1Ch] [rbp-84h]
  int reteb; // [rsp+1Ch] [rbp-84h]
  int retec; // [rsp+1Ch] [rbp-84h]
  int reted; // [rsp+1Ch] [rbp-84h]
  int retee; // [rsp+1Ch] [rbp-84h]
  int retef; // [rsp+1Ch] [rbp-84h]
  int reteg; // [rsp+1Ch] [rbp-84h]
  int reteh; // [rsp+1Ch] [rbp-84h]
  int retei; // [rsp+1Ch] [rbp-84h]
  int retej; // [rsp+1Ch] [rbp-84h]
  int retek; // [rsp+1Ch] [rbp-84h]
  int retel; // [rsp+1Ch] [rbp-84h]
  int retem; // [rsp+1Ch] [rbp-84h]
  int reten; // [rsp+1Ch] [rbp-84h]
  int reteo; // [rsp+1Ch] [rbp-84h]
  int retep; // [rsp+1Ch] [rbp-84h]
  int reteq; // [rsp+1Ch] [rbp-84h]
  int reter; // [rsp+1Ch] [rbp-84h]
  int retes; // [rsp+1Ch] [rbp-84h]
  int retet; // [rsp+1Ch] [rbp-84h]
  int reteu; // [rsp+1Ch] [rbp-84h]
  int retev; // [rsp+1Ch] [rbp-84h]
  int retew; // [rsp+1Ch] [rbp-84h]
  int retex; // [rsp+1Ch] [rbp-84h]
  int retey; // [rsp+1Ch] [rbp-84h]
  int retez; // [rsp+1Ch] [rbp-84h]
  int retfa; // [rsp+1Ch] [rbp-84h]
  int retfb; // [rsp+1Ch] [rbp-84h]
  int retfc; // [rsp+1Ch] [rbp-84h]
  int retfd; // [rsp+1Ch] [rbp-84h]
  int retfe; // [rsp+1Ch] [rbp-84h]
  int retff; // [rsp+1Ch] [rbp-84h]
  int retfg; // [rsp+1Ch] [rbp-84h]
  int retfh; // [rsp+1Ch] [rbp-84h]
  int retfi; // [rsp+1Ch] [rbp-84h]
  int retfj; // [rsp+1Ch] [rbp-84h]
  int retfk; // [rsp+1Ch] [rbp-84h]
  int retfl; // [rsp+1Ch] [rbp-84h]
  int retfm; // [rsp+1Ch] [rbp-84h]
  int retfn; // [rsp+1Ch] [rbp-84h]
  int retfo; // [rsp+1Ch] [rbp-84h]
  int retfp; // [rsp+1Ch] [rbp-84h]
  int retfq; // [rsp+1Ch] [rbp-84h]
  int retfr; // [rsp+1Ch] [rbp-84h]
  int retfs; // [rsp+1Ch] [rbp-84h]
  int retft; // [rsp+1Ch] [rbp-84h]
  int retfu; // [rsp+1Ch] [rbp-84h]
  int retfv; // [rsp+1Ch] [rbp-84h]
  int retfw; // [rsp+1Ch] [rbp-84h]
  int retfx; // [rsp+1Ch] [rbp-84h]
  int retfy; // [rsp+1Ch] [rbp-84h]
  int retfz; // [rsp+1Ch] [rbp-84h]
  int retga; // [rsp+1Ch] [rbp-84h]
  int retgb; // [rsp+1Ch] [rbp-84h]
  int retgc; // [rsp+1Ch] [rbp-84h]
  int retgd; // [rsp+1Ch] [rbp-84h]
  int retge; // [rsp+1Ch] [rbp-84h]
  int retgf; // [rsp+1Ch] [rbp-84h]
  int retgg; // [rsp+1Ch] [rbp-84h]
  int retgh; // [rsp+1Ch] [rbp-84h]
  int retgi; // [rsp+1Ch] [rbp-84h]
  int retgj; // [rsp+1Ch] [rbp-84h]
  int retgk; // [rsp+1Ch] [rbp-84h]
  int retgl; // [rsp+1Ch] [rbp-84h]
  int retgm; // [rsp+1Ch] [rbp-84h]
  int retgn; // [rsp+1Ch] [rbp-84h]
  int retgo; // [rsp+1Ch] [rbp-84h]
  int retgp; // [rsp+1Ch] [rbp-84h]
  int retgq; // [rsp+1Ch] [rbp-84h]
  int retgr; // [rsp+1Ch] [rbp-84h]
  int retgs; // [rsp+1Ch] [rbp-84h]
  int retgt; // [rsp+1Ch] [rbp-84h]
  char v183[128]; // [rsp+20h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v183;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = TxtConfigMgr::checkConfig;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  ret = ConstValueExcelConfigMgr::checkConfig(&this->const_value_config_mgr, this);
  reta = AvatarExcelConfigMgr::checkConfig(&this->avatar_config_mgr, this) | ret;
  retb = AvatarTalentExcelConfigMgr::checkConfig(&this->avatar_talent_config_mgr, this) | reta;
  retc = AvatarSkillExcelConfigMgr::checkConfig(&this->avatar_skill_config_mgr, this) | retb;
  retd = AvatarExtraPropExcelConfigMgr::checkConfig(&this->avatar_extra_prop_config_mgr, this) | retc;
  rete = ElementExcelConfigMgr::checkConfig(&this->element_config_mgr, this) | retd;
  retf = ReliquaryExcelConfigMgr::checkConfig(&this->reliquary_config_mgr, this) | rete;
  retg = GadgetExcelConfigMgr::checkConfig(&this->gadget_config_mgr, this) | retf;
  reth = GatherExcelConfigMgr::checkConfig(&this->gather_config_mgr, this) | retg;
  reti = GrowCurveExcelConfigMgr::checkConfig(&this->grow_curve_config_mgr, this) | reth;
  retj = MaterialExcelConfigMgr::checkConfig(&this->material_config_mgr, this) | reti;
  retk = ItemExcelConfigMgr::checkConfig(&this->item_config_mgr, this) | retj;
  retl = MonsterExcelConfigMgr::checkConfig(&this->monster_config_mgr, this) | retk;
  retm = NpcExcelConfigMgr::checkConfig(&this->npc_config_mgr, this) | retl;
  retn = QuestExcelConfigMgr::checkConfig(&this->quest_config_mgr, this) | retm;
  reto = SceneExcelConfigMgr::checkConfig(&this->scene_config_mgr, this) | retn;
  retp = ShopExcelConfigMgr::checkConfig(&this->shop_config_mgr, this) | reto;
  retq = WeaponExcelConfigMgr::checkConfig(&this->weapon_config_mgr, this) | retp;
  retr = WorldAreaExcelConfigMgr::checkConfig(&this->world_area_config_mgr, this) | retq;
  rets = DungeonExcelConfigMgr::checkConfig(&this->dungeon_config_mgr, this) | retr;
  rett = GearExcelConfigMgr::checkConfig(&this->gear_config_mgr, this) | rets;
  retu = ReminderExcelConfigMgr::checkConfig(&this->reminder_config_mgr, this) | rett;
  retv = WeatherExcelConfigMgr::checkConfig(&this->weather_config_mgr, this) | retu;
  retw = TrialAvatarExcelConfigMgr::checkConfig(&this->trial_avatar_config_mgr, this) | retv;
  retx = BoredExcelConfigMgr::checkConfig(&this->bored_config_mgr, this) | retw;
  rety = PlayerExcelConfigMgr::checkConfig(&this->player_config_mgr, this) | retx;
  retz = SensitiveWordExcelConfigMgr::checkConfig(&this->sensitive_word_config_mgr, this) | rety;
  retba = EquipAffixExcelConfigMgr::checkConfig(&this->equip_affix_config_mgr, this) | retz;
  retbb = RewardExcelConfigMgr::checkConfig(&this->reward_config_mgr, this) | retba;
  retbc = EnvAnimalExcelConfigMgr::checkConfig(&this->env_animal_config_mgr, this) | retbb;
  retbd = DropExcelConfigMgr::checkConfig(&this->drop_config_mgr, this) | retbc;
  retbe = BuffExcelConfigMgr::checkConfig(&this->buff_config_mgr, this) | retbd;
  retbf = CookExcelConfigMgr::checkConfig(&this->cook_config_mgr, this) | retbe;
  retbg = CompoundExcelConfigMgr::checkConfig(&this->compound_config_mgr, this) | retbf;
  retbh = OpenStateExcelConfigMgr::checkConfig(&this->open_state_config_mgr, this) | retbg;
  retbi = LevelSuppressExcelConfigMgr::checkConfig(&this->level_suppress_config_mgr, this) | retbh;
  retbj = DailyTaskExcelConfigMgr::checkConfig(&this->daily_task_config_mgr, this) | retbi;
  retbk = RandTaskExcelConfigMgr::checkConfig(&this->rand_task_config_mgr, this) | retbj;
  retbl = FetterExcelConfigMgr::checkConfig(&this->fetter_config_mgr, this) | retbk;
  retbm = ExpeditionDataExcelConfigMgr::checkConfig(&this->expedition_config_mgr, this) | retbl;
  retbn = GachaExcelConfigMgr::checkConfig(&this->gacha_config_mgr, this) | retbm;
  retbo = CombineExcelConfigMgr::checkConfig(&this->combine_config_mgr, this) | retbn;
  retbp = RefreshPolicyExcelConfigMgr::checkConfig(&this->refresh_policy_config_mgr, this) | retbo;
  retbq = GivingExcelConfigMgr::checkConfig(&this->giving_config_mgr, this) | retbp;
  retbr = ForgeExcelConfigMgr::checkConfig(&this->forge_config_mgr, this) | retbq;
  retbs = InvestigationExcelConfigMgr::checkConfig(&this->investigation_config_mgr, this) | retbr;
  retbt = HandbookQuestGuideExcelConfigMgr::checkConfig(&this->handbook_quest_guide_mgr, this) | retbs;
  retbu = ActivitySeaLampExcelConfigMgr::checkConfig(&this->activity_sea_lamp_config_mgr, this) | retbt;
  retbv = WatcherExcelConfigMgr::checkConfig(&this->watcher_config_mgr, this) | retbu;
  retbw = DungeonEntryExcelConfigMgr::checkConfig(&this->dungeon_entry_config_mgr, this) | retbv;
  retbx = TowerExcelConfigMgr::checkConfig(&this->tower_config_mgr, this) | retbw;
  retby = MailExcelConfigMgr::checkConfig(&this->mail_config_mgr, this) | retbx;
  retbz = ItemLimitExcelConfigMgr::checkConfig(&this->item_limit_config_mgr, this) | retby;
  retca = AbilityPropExcelConfigMgr::checkConfig(&this->ability_prop_config_mgr, this) | retbz;
  retcb = SignInExcelConfigMgr::checkConfig(&this->sign_in_config_mgr, this) | retca;
  retcc = BlossomExcelConfigMgr::checkConfig(&this->blossom_config_mgr, this) | retcb;
  retcd = BattlePassExcelConfigMgr::checkConfig(&this->battle_pass_excel_config_mgr, this) | retcc;
  retce = ShopmallExcelConfigMgr::checkConfig(&this->shopmall_config_mgr, this) | retcd;
  retcf = BargainExcelConfigMgr::checkConfig(&this->bargain_excel_config_mgr, this) | retce;
  retcg = TeamResonanceExcelConfigMgr::checkConfig(&this->team_resonance_config_mgr, this) | retcf;
  retch = TrialAvatarActivityExcelConfigMgr::checkConfig(&this->trial_avatar_activity_config_mgr, this) | retcg;
  retci = ActivitySalesmanExcelConfigMgr::checkConfig(&this->activity_salesman_config_mgr, this) | retch;
  retcj = AvatarFashionExcelConfigMgr::checkConfig(&this->avatar_fashion_config_mgr, this) | retci;
  retck = NewActivityExcelConfigMgr::checkConfig(&this->new_activity_config_mgr, this) | retcj;
  retcl = MpPlayExcelConfigMgr::checkConfig(&this->mp_play_config_mgr, this) | retck;
  retcm = AchievementExcelConfigMgr::checkConfig(&this->achievement_config_mgr, this) | retcl;
  retcn = CodexExcelConfigMgr::checkConfig(&this->codex_config_mgr, this) | retcm;
  retco = PersonalLineExcelConfigMgr::checkConfig(&this->personal_line_config_mgr, this) | retcn;
  retcp = ExploreExcelConfigMgr::checkConfig(&this->explore_config_mgr, this) | retco;
  retcq = ReviseLevelGrowExcelConfigMgr::checkConfig(&this->revise_level_grow_config_mgr, this) | retcp;
  retcr = ActivityDeliveryExcelConfigMgr::checkConfig(&this->activity_delivery_config_mgr, this) | retcq;
  retcs = ActivityAsterExcelConfigMgr::checkConfig(&this->activity_aster_config_mgr, this) | retcr;
  retct = HuntingExcelConfigMgr::checkConfig(&this->hunting_config_mgr, this) | retcs;
  retcu = FeatureTagExcelConfigMgr::checkConfig(&this->feature_tag_config_mgr, this) | retct;
  retcv = ReputationExcelConfigMgr::checkConfig(&this->reputation_config_mgr, this) | retcu;
  retcw = ActivityAbilityGroupExcelConfigMgr::checkConfig(&this->activity_ability_group_config_mgr, this) | retcv;
  retcx = CoopExcelConfigMgr::checkConfig(&this->coop_config_mgr, this) | retcw;
  retcy = ActivityShopExcelConfigMgr::checkConfig(&this->activity_shop_config_mgr, this) | retcx;
  retcz = ActivityFlightExcelConfigMgr::checkConfig(&this->activity_flight_config_mgr, this) | retcy;
  retda = StrengthenExcelConfigMgr::checkConfig(&this->strengthen_config_mgr, this) | retcz;
  retdb = ActivityDragonSpineExcelConfigMgr::checkConfig(&this->activity_dragon_spine_config_mgr, this) | retda;
  retdc = OfferingExcelConfigMgr::checkConfig(&this->offering_config_mgr, this) | retdb;
  retdd = ActivityEffigyChallengeExcelConfigMgr::checkConfig(&this->activity_effigy_challenge_config_mgr, this) | retdc;
  retde = ActivityTreasureMapExcelConfigMgr::checkConfig(&this->activity_treasure_map_config_mgr, this) | retdd;
  retdf = ReunionExcelConfigMgr::checkConfig(&this->reunion_config_mgr, this) | retde;
  retdg = DungeonElementChallengeExcelConfigMgr::checkConfig(&this->dungeon_element_challenge_config_mgr, this) | retdf;
  retdh = RoutineExcelConfigMgr::checkConfig(&this->routine_config_mgr, this) | retdg;
  retdi = CombatTemplateExcelConfigMgr::checkConfig(&this->combat_template_config_mgr, this) | retdh;
  retdj = MiracleRingExcelConfigMgr::checkConfig(&this->miracle_ring_config_mgr, this) | retdi;
  retdk = ActivityBlessingExcelConfigMgr::checkConfig(&this->activity_blessing_config_mgr, this) | retdj;
  retdl = ActivityExpeditionExcelConfigMgr::checkConfig(&this->activity_expedition_config_mgr, this) | retdk;
  retdm = OpActivityExcelConfigMgr::checkConfig(&this->op_activity_config_mgr, this) | retdl;
  retdn = TreatreMechanicusExcelConfigMgr::checkConfig(&this->mechanicus_config_mgr, this) | retdm;
  retdo = DraftExcelConfigMgr::checkConfig(&this->draft_config_mgr, this) | retdn;
  retdp = GalleryExcelConfigMgr::checkConfig(&this->gallery_config_mgr, this) | retdo;
  retdq = OverflowTransformExcelConfigMgr::checkConfig(&this->overflow_transform_config_mgr, this) | retdp;
  retdr = HomeWorldExcelConfigMgr::checkConfig(&this->home_config_mgr, this) | retdq;
  retds = ActivityFleurFairExcelConfigMgr::checkConfig(&this->activity_fleur_fair_config_mgr, this) | retdr;
  retdt = ActivityArenaChallengeExcelConfigMgr::checkConfig(&this->activity_arena_challenge_config_mgr, this) | retds;
  retdu = RegionSearchExcelConfigMgr::checkConfig(&this->region_search_config_mgr, this) | retdt;
  retdv = ActivityMusicGameConfigMgr::checkConfig(&this->activity_music_game_config_mgr, this) | retdu;
  retdw = TreeTypeExcelConfigMgr::checkConfig(&this->tree_type_config_mgr, this) | retdv;
  retdx = ExclusiveRuleExcelConfigMgr::checkConfig(&this->exclusive_rule_config_mgr, this) | retdw;
  retdy = ActivityMistTrialExcelConfigMgr::checkConfig(&this->activity_mist_trial_config_mgr, this) | retdx;
  retdz = ActivityHideAndSeekExcelConfigMgr::checkConfig(&this->activity_hide_and_seek_config_mgr, this) | retdy;
  retea = ActivityChannellerSlabExcelConfigMgr::checkConfig(&this->activity_channeller_slab_config_mgr, this) | retdz;
  reteb = ActivityMimiTomoExcelConfigMgr::checkConfig(&this->activity_find_hilichurl_config_mgr, this) | retea;
  retec = H5ActivityExcelConfigMgr::checkConfig(&this->h5_activity_config_mgr, this) | reteb;
  reted = MatchExcelConfigMgr::checkConfig(&this->match_config_mgr, this) | retec;
  retee = ExhibitionExcelConfigMgr::checkConfig(&this->exhibition_config_mgr, this) | reted;
  retef = StatLogFilterExcelConfigMgr::checkConfig(&this->stat_log_filter_config_mgr, this) | retee;
  reteg = ActivitySummerTimeExcelConfigMgr::checkConfig(&this->activity_summer_time_config_mgr, this) | retef;
  reteh = ActivityBuoyantCombatExcelConfigMgr::checkConfig(&this->activity_buoyant_combat_config_mgr, this) | reteg;
  retei = ActivityBounceConjuringExcelConfigMgr::checkConfig(&this->activity_bounce_conjuring_config_mgr, this) | reteh;
  retej = ActivityEchoShellExcelConfigMgr::checkConfig(&this->activity_echo_shell_config_mgr, this) | retei;
  retek = ActivityBlitzRushExcelConfigMgr::checkConfig(&this->activity_blitz_rush_config_mgr, this) | retej;
  retel = ActivityChessExcelConfigMgr::checkConfig(&this->activity_chess_config_mgr, this) | retek;
  retem = WidgetCameraExcelConfigMgr::checkConfig(&this->widget_camera_config_mgr, this) | retel;
  reten = ActivitySumoExcelConfigMgr::checkConfig(&this->activity_sumo_config_mgr, this) | retem;
  reteo = ActivityGroupLinksExcelConfigMgr::checkConfig(&this->activity_group_links_config_mgr, this) | reten;
  retep = ActivityLunaRiteExcelConfigMgr::checkConfig(&this->activity_luna_rite_config_mgr, this) | reteo;
  reteq = FishExcelConfigMgr::checkConfig(&this->fish_config_mgr, this) | retep;
  reter = ActivityMoonfinTrialExcelConfigMgr::checkConfig(&this->activity_moonfin_trial_config_mgr, this) | reteq;
  retes = ActivityRogueExcelConfigMgr::checkConfig(&this->activity_rogue_config_mgr, this) | reter;
  retet = ActivityPlantFlowerExcelConfigMgr::checkConfig(&this->activity_plant_flower_config_mgr, this) | retes;
  reteu = WidgetExcelConfigMgr::checkConfig(&this->widget_config_mgr, this) | retet;
  retev = AbilityOverrideExcelConfigMgr::checkConfig(&this->ability_override_config_mgr, this) | reteu;
  retew = ActivityDigExcelConfigMgr::checkConfig(&this->activity_dig_config_mgr, this) | retev;
  retex = ActivityHachiExcelConfigMgr::checkConfig(&this->activity_hachi_config_mgr, this) | retew;
  retey = ActivityWinterCampExcelConfigMgr::checkConfig(&this->activity_winter_camp_config_mgr, this) | retex;
  retez = LevelTagExcelConfigMgr::checkConfig(&this->level_tag_config_mgr, this) | retey;
  retfa = CustomDungeonExcelConfigMgr::checkConfig(&this->custom_dungeon_config_mgr, this) | retez;
  retfb = FireworksExcelConfigMgr::checkConfig(&this->fireworks_config_mgr, this) | retfa;
  retfc = ActivityPotionExcelConfigMgr::checkConfig(&this->activity_potion_config_mgr, this) | retfb;
  retfd = ActivityTanukiTravelExcelConfigMgr::checkConfig(&this->activity_tanuki_travel_config_mgr, this) | retfc;
  retfe = GCGGameExcelConfigMgr::checkConfig(&this->gcg_game_config_mgr, this) | retfd;
  retff = GCGDeckExcelConfigMgr::checkConfig(&this->gcg_deck_config_mgr, this) | retfe;
  retfg = GCGPlayingExcelConfigMgr::checkConfig(&this->gcg_playing_config_mgr, this) | retff;
  retfh = GCGGrowthExcelConfigMgr::checkConfig(&this->gcg_growth_config_mgr, this) | retfg;
  retfi = ActivityMichiaeMatsuriExcelConfigMgr::checkConfig(&this->activity_michiae_matsuri_config_mgr, this) | retfh;
  retfj = MultistageExcelConfigMgr::checkConfig(&this->multistage_config_mgr, this) | retfi;
  retfk = ActivityBartenderExcelConfigMgr::checkConfig(&this->activity_bartender_config_mgr, this) | retfj;
  retfl = DisplayItemExcelConfigMgr::checkConfig(&this->display_item_config_mgr, this) | retfk;
  retfm = UIInteractExcelConfigMgr::checkConfig(&this->ui_interact_config_mgr, this) | retfl;
  retfn = ShareCDExcelConfigMgr::checkConfig(&this->share_cd_config_mgr, this) | retfm;
  retfo = ActivityCrystalLinkExcelConfigMgr::checkConfig(&this->activity_crystal_link_config_mgr, this) | retfn;
  retfp = ActivityIrodoriExcelConfigMgr::checkConfig(&this->activity_irodori_config_mgr, this) | retfo;
  retfq = ActivitySpiceExcelConfigMgr::checkConfig(&this->activity_spice_config_mgr, this) | retfp;
  retfr = ActivityPhotographExcelConfigMgr::checkConfig(&this->activity_photograph_config_mgr, this) | retfq;
  retfs = GroupTagExcelConfigMgr::checkConfig(&this->group_tag_config_mgr, this) | retfr;
  retft = ActivityGachaExcelConfigMgr::checkConfig(&this->activity_gacha_config_mgr, this) | retfs;
  retfu = ActivityLuminanceStoneChallengeExcelConfigMgr::checkConfig(
            &this->activity_luminance_stone_challenge_config_mgr,
            this) | retft;
  retfv = ActivityRogueDiaryExcelConfigMgr::checkConfig(&this->activity_rogue_diary_config_mgr, this) | retfu;
  retfw = GadgetArgumentExcelConfigMgr::checkConfig(&this->gadget_argument_config_mgr, this) | retfv;
  retfx = ActivityGearExcelConfigMgr::checkConfig(&this->activity_gear_config_mgr, this) | retfw;
  retfy = ActivitySummerTimeV2ExcelConfigMgr::checkConfig(&this->activity_summer_time_v2_mgr, this) | retfx;
  retfz = CatalogExcelConfigMgr::checkConfig(&this->catalog_config_mgr, this) | retfy;
  retga = RegionPlayLevelExcelConfigMgr::checkConfig(&this->region_play_level_config_mgr, this) | retfz;
  retgb = ActivityIslandPartyExcelConfigMgr::checkConfig(&this->activity_island_party_mgr, this) | retga;
  retgc = ActivityGravenInnocenceExcelConfigMgr::checkConfig(&this->activity_graven_innocence_mgr, this) | retgb;
  retgd = ActivityInstableSprayExcelConfigMgr::checkConfig(&this->activity_instable_spray_mgr, this) | retgc;
  retge = ActivityMuqadasPotionExcelConfigMgr::checkConfig(&this->activity_muqadas_potion_mgr, this) | retgd;
  retgf = ActivityTreasureSeelieExcelConfigMgr::checkConfig(&this->activity_treasure_seelie_config_mgr, this) | retge;
  retgg = InferenceExcelConfigMgr::checkConfig(&this->inference_config_mgr, this) | retgf;
  retgh = ActivityWindFieldExcelConfigMgr::checkConfig(&this->activity_wind_field_mgr, this) | retgg;
  retgi = ActivityVintageExcelConfigMgr::checkConfig(&this->activity_vintage_config_mgr, this) | retgh;
  retgj = ActivityRockBoardExploreExcelConfigMgr::checkConfig(&this->activity_rock_board_explore_config_mgr, this) | retgi;
  retgk = ActivityVintageMarketExcelConfigMgr::checkConfig(&this->activity_vintage_market_config_mgr, this) | retgj;
  retgl = ActivityFungusFighterExcelConfigMgr::checkConfig(&this->activity_fungus_fighter_config_mgr, this) | retgk;
  retgm = ActivityCharAmusementExcelConfigMgr::checkConfig(&this->activity_char_amusement_config_mgr, this) | retgl;
  retgn = ActivityEffigyChallengeV2ExcelConfigMgr::checkConfig(&this->activity_effigy_challenge_v2_config_mgr, this) | retgm;
  retgo = RenameExcelConfigMgr::checkConfig(&this->rename_config_mgr, this) | retgn;
  retgp = ActivityCoinCollectExcelConfigMgr::checkConfig(&this->activity_coin_collect_config_mgr, this) | retgo;
  retgq = ActivityBrickBreakerExcelConfigMgr::checkConfig(&this->activity_brick_breaker_config_mgr, this) | retgp;
  retgr = ActivityElectroherculesBattleExcelConfigMgr::checkConfig(
            &this->activity_electrohercules_battle_config_mgr,
            this) | retgq;
  retgs = ActivityTeamChainExcelConfigMgr::checkConfig(&this->activity_team_chain_config_mgr, this) | retgr;
  retgt = ActivitySeaLampV3ExcelConfigMgr::checkConfig(&this->activity_sea_lamp_v3_config_mgr, this) | retgs;
  if ( ActivityDuelHeartExcelConfigMgr::checkConfig(&this->activity_duel_heart_config_mgr, this) | retgt )
  {
    if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 63) & 7) >= *(_BYTE *)(((v1 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "checkConfig",
      227);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v4, (const char (*)[19])"checkConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v183 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 234: range 000000000CD51138-000000000CD52D6E
int32_t __cdecl TxtConfigMgr::rewriteConfig(TxtConfigMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-84h]
  int reta; // [rsp+1Ch] [rbp-84h]
  int retb; // [rsp+1Ch] [rbp-84h]
  int retc; // [rsp+1Ch] [rbp-84h]
  int retd; // [rsp+1Ch] [rbp-84h]
  int rete; // [rsp+1Ch] [rbp-84h]
  int retf; // [rsp+1Ch] [rbp-84h]
  int retg; // [rsp+1Ch] [rbp-84h]
  int reth; // [rsp+1Ch] [rbp-84h]
  int reti; // [rsp+1Ch] [rbp-84h]
  int retj; // [rsp+1Ch] [rbp-84h]
  int retk; // [rsp+1Ch] [rbp-84h]
  int retl; // [rsp+1Ch] [rbp-84h]
  int retm; // [rsp+1Ch] [rbp-84h]
  int retn; // [rsp+1Ch] [rbp-84h]
  int reto; // [rsp+1Ch] [rbp-84h]
  int retp; // [rsp+1Ch] [rbp-84h]
  int retq; // [rsp+1Ch] [rbp-84h]
  int retr; // [rsp+1Ch] [rbp-84h]
  int rets; // [rsp+1Ch] [rbp-84h]
  int rett; // [rsp+1Ch] [rbp-84h]
  int retu; // [rsp+1Ch] [rbp-84h]
  int retv; // [rsp+1Ch] [rbp-84h]
  int retw; // [rsp+1Ch] [rbp-84h]
  int retx; // [rsp+1Ch] [rbp-84h]
  int rety; // [rsp+1Ch] [rbp-84h]
  int retz; // [rsp+1Ch] [rbp-84h]
  int retba; // [rsp+1Ch] [rbp-84h]
  int retbb; // [rsp+1Ch] [rbp-84h]
  int retbc; // [rsp+1Ch] [rbp-84h]
  int retbd; // [rsp+1Ch] [rbp-84h]
  int retbe; // [rsp+1Ch] [rbp-84h]
  int retbf; // [rsp+1Ch] [rbp-84h]
  int retbg; // [rsp+1Ch] [rbp-84h]
  int retbh; // [rsp+1Ch] [rbp-84h]
  int retbi; // [rsp+1Ch] [rbp-84h]
  int retbj; // [rsp+1Ch] [rbp-84h]
  int retbk; // [rsp+1Ch] [rbp-84h]
  int retbl; // [rsp+1Ch] [rbp-84h]
  int retbm; // [rsp+1Ch] [rbp-84h]
  int retbn; // [rsp+1Ch] [rbp-84h]
  int retbo; // [rsp+1Ch] [rbp-84h]
  int retbp; // [rsp+1Ch] [rbp-84h]
  int retbq; // [rsp+1Ch] [rbp-84h]
  int retbr; // [rsp+1Ch] [rbp-84h]
  int retbs; // [rsp+1Ch] [rbp-84h]
  int retbt; // [rsp+1Ch] [rbp-84h]
  int retbu; // [rsp+1Ch] [rbp-84h]
  int retbv; // [rsp+1Ch] [rbp-84h]
  int retbw; // [rsp+1Ch] [rbp-84h]
  int retbx; // [rsp+1Ch] [rbp-84h]
  int retby; // [rsp+1Ch] [rbp-84h]
  int retbz; // [rsp+1Ch] [rbp-84h]
  int retca; // [rsp+1Ch] [rbp-84h]
  int retcb; // [rsp+1Ch] [rbp-84h]
  int retcc; // [rsp+1Ch] [rbp-84h]
  int retcd; // [rsp+1Ch] [rbp-84h]
  int retce; // [rsp+1Ch] [rbp-84h]
  int retcf; // [rsp+1Ch] [rbp-84h]
  int retcg; // [rsp+1Ch] [rbp-84h]
  int retch; // [rsp+1Ch] [rbp-84h]
  int retci; // [rsp+1Ch] [rbp-84h]
  int retcj; // [rsp+1Ch] [rbp-84h]
  int retck; // [rsp+1Ch] [rbp-84h]
  int retcl; // [rsp+1Ch] [rbp-84h]
  int retcm; // [rsp+1Ch] [rbp-84h]
  int retcn; // [rsp+1Ch] [rbp-84h]
  int retco; // [rsp+1Ch] [rbp-84h]
  int retcp; // [rsp+1Ch] [rbp-84h]
  int retcq; // [rsp+1Ch] [rbp-84h]
  int retcr; // [rsp+1Ch] [rbp-84h]
  int retcs; // [rsp+1Ch] [rbp-84h]
  int retct; // [rsp+1Ch] [rbp-84h]
  int retcu; // [rsp+1Ch] [rbp-84h]
  int retcv; // [rsp+1Ch] [rbp-84h]
  int retcw; // [rsp+1Ch] [rbp-84h]
  int retcx; // [rsp+1Ch] [rbp-84h]
  int retcy; // [rsp+1Ch] [rbp-84h]
  int retcz; // [rsp+1Ch] [rbp-84h]
  int retda; // [rsp+1Ch] [rbp-84h]
  int retdb; // [rsp+1Ch] [rbp-84h]
  int retdc; // [rsp+1Ch] [rbp-84h]
  int retdd; // [rsp+1Ch] [rbp-84h]
  int retde; // [rsp+1Ch] [rbp-84h]
  int retdf; // [rsp+1Ch] [rbp-84h]
  int retdg; // [rsp+1Ch] [rbp-84h]
  int retdh; // [rsp+1Ch] [rbp-84h]
  int retdi; // [rsp+1Ch] [rbp-84h]
  int retdj; // [rsp+1Ch] [rbp-84h]
  int retdk; // [rsp+1Ch] [rbp-84h]
  int retdl; // [rsp+1Ch] [rbp-84h]
  int retdm; // [rsp+1Ch] [rbp-84h]
  int retdn; // [rsp+1Ch] [rbp-84h]
  int retdo; // [rsp+1Ch] [rbp-84h]
  int retdp; // [rsp+1Ch] [rbp-84h]
  int retdq; // [rsp+1Ch] [rbp-84h]
  int retdr; // [rsp+1Ch] [rbp-84h]
  int retds; // [rsp+1Ch] [rbp-84h]
  int retdt; // [rsp+1Ch] [rbp-84h]
  int retdu; // [rsp+1Ch] [rbp-84h]
  int retdv; // [rsp+1Ch] [rbp-84h]
  int retdw; // [rsp+1Ch] [rbp-84h]
  int retdx; // [rsp+1Ch] [rbp-84h]
  int retdy; // [rsp+1Ch] [rbp-84h]
  int retdz; // [rsp+1Ch] [rbp-84h]
  int retea; // [rsp+1Ch] [rbp-84h]
  int reteb; // [rsp+1Ch] [rbp-84h]
  int retec; // [rsp+1Ch] [rbp-84h]
  int reted; // [rsp+1Ch] [rbp-84h]
  int retee; // [rsp+1Ch] [rbp-84h]
  int retef; // [rsp+1Ch] [rbp-84h]
  int reteg; // [rsp+1Ch] [rbp-84h]
  int reteh; // [rsp+1Ch] [rbp-84h]
  int retei; // [rsp+1Ch] [rbp-84h]
  int retej; // [rsp+1Ch] [rbp-84h]
  int retek; // [rsp+1Ch] [rbp-84h]
  int retel; // [rsp+1Ch] [rbp-84h]
  int retem; // [rsp+1Ch] [rbp-84h]
  int reten; // [rsp+1Ch] [rbp-84h]
  int reteo; // [rsp+1Ch] [rbp-84h]
  int retep; // [rsp+1Ch] [rbp-84h]
  int reteq; // [rsp+1Ch] [rbp-84h]
  int reter; // [rsp+1Ch] [rbp-84h]
  int retes; // [rsp+1Ch] [rbp-84h]
  int retet; // [rsp+1Ch] [rbp-84h]
  int reteu; // [rsp+1Ch] [rbp-84h]
  int retev; // [rsp+1Ch] [rbp-84h]
  int retew; // [rsp+1Ch] [rbp-84h]
  int retex; // [rsp+1Ch] [rbp-84h]
  int retey; // [rsp+1Ch] [rbp-84h]
  int retez; // [rsp+1Ch] [rbp-84h]
  int retfa; // [rsp+1Ch] [rbp-84h]
  int retfb; // [rsp+1Ch] [rbp-84h]
  int retfc; // [rsp+1Ch] [rbp-84h]
  int retfd; // [rsp+1Ch] [rbp-84h]
  int retfe; // [rsp+1Ch] [rbp-84h]
  int retff; // [rsp+1Ch] [rbp-84h]
  int retfg; // [rsp+1Ch] [rbp-84h]
  int retfh; // [rsp+1Ch] [rbp-84h]
  int retfi; // [rsp+1Ch] [rbp-84h]
  int retfj; // [rsp+1Ch] [rbp-84h]
  int retfk; // [rsp+1Ch] [rbp-84h]
  int retfl; // [rsp+1Ch] [rbp-84h]
  int retfm; // [rsp+1Ch] [rbp-84h]
  int retfn; // [rsp+1Ch] [rbp-84h]
  int retfo; // [rsp+1Ch] [rbp-84h]
  int retfp; // [rsp+1Ch] [rbp-84h]
  int retfq; // [rsp+1Ch] [rbp-84h]
  int retfr; // [rsp+1Ch] [rbp-84h]
  int retfs; // [rsp+1Ch] [rbp-84h]
  int retft; // [rsp+1Ch] [rbp-84h]
  int retfu; // [rsp+1Ch] [rbp-84h]
  int retfv; // [rsp+1Ch] [rbp-84h]
  int retfw; // [rsp+1Ch] [rbp-84h]
  int retfx; // [rsp+1Ch] [rbp-84h]
  int retfy; // [rsp+1Ch] [rbp-84h]
  int retfz; // [rsp+1Ch] [rbp-84h]
  int retga; // [rsp+1Ch] [rbp-84h]
  int retgb; // [rsp+1Ch] [rbp-84h]
  int retgc; // [rsp+1Ch] [rbp-84h]
  int retgd; // [rsp+1Ch] [rbp-84h]
  int retge; // [rsp+1Ch] [rbp-84h]
  int retgf; // [rsp+1Ch] [rbp-84h]
  int retgg; // [rsp+1Ch] [rbp-84h]
  int retgh; // [rsp+1Ch] [rbp-84h]
  int retgi; // [rsp+1Ch] [rbp-84h]
  int retgj; // [rsp+1Ch] [rbp-84h]
  int retgk; // [rsp+1Ch] [rbp-84h]
  int retgl; // [rsp+1Ch] [rbp-84h]
  int retgm; // [rsp+1Ch] [rbp-84h]
  int retgn; // [rsp+1Ch] [rbp-84h]
  int retgo; // [rsp+1Ch] [rbp-84h]
  int retgp; // [rsp+1Ch] [rbp-84h]
  int retgq; // [rsp+1Ch] [rbp-84h]
  int retgr; // [rsp+1Ch] [rbp-84h]
  int retgs; // [rsp+1Ch] [rbp-84h]
  int retgt; // [rsp+1Ch] [rbp-84h]
  char v183[128]; // [rsp+20h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v183;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = TxtConfigMgr::rewriteConfig;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  ret = ConstValueExcelConfigMgr::rewriteConfig(&this->const_value_config_mgr, this);
  reta = AvatarExcelConfigMgr::rewriteConfig(&this->avatar_config_mgr, this) | ret;
  retb = AvatarTalentExcelConfigMgr::rewriteConfig(&this->avatar_talent_config_mgr, this) | reta;
  retc = AvatarSkillExcelConfigMgr::rewriteConfig(&this->avatar_skill_config_mgr, this) | retb;
  retd = AvatarExtraPropExcelConfigMgr::rewriteConfig(&this->avatar_extra_prop_config_mgr, this) | retc;
  rete = data::ElementExcelConfigMgrBase::rewriteConfig(&this->element_config_mgr, this) | retd;
  retf = ReliquaryExcelConfigMgr::rewriteConfig(&this->reliquary_config_mgr, this) | rete;
  retg = GadgetExcelConfigMgr::rewriteConfig(&this->gadget_config_mgr, this) | retf;
  reth = GatherExcelConfigMgr::rewriteConfig(&this->gather_config_mgr, this) | retg;
  reti = GrowCurveExcelConfigMgr::rewriteConfig(&this->grow_curve_config_mgr, this) | reth;
  retj = MaterialExcelConfigMgr::rewriteConfig(&this->material_config_mgr, this) | reti;
  retk = ItemExcelConfigMgr::rewriteConfig(&this->item_config_mgr, this) | retj;
  retl = MonsterExcelConfigMgr::rewriteConfig(&this->monster_config_mgr, this) | retk;
  retm = data::NpcExcelConfigMgrBase::rewriteConfig(&this->npc_config_mgr, this) | retl;
  retn = QuestExcelConfigMgr::rewriteConfig(&this->quest_config_mgr, this) | retm;
  reto = SceneExcelConfigMgr::rewriteConfig(&this->scene_config_mgr, this) | retn;
  retp = ShopExcelConfigMgr::rewriteConfig(&this->shop_config_mgr, this) | reto;
  retq = WeaponExcelConfigMgr::rewriteConfig(&this->weapon_config_mgr, this) | retp;
  retr = WorldAreaExcelConfigMgr::rewriteConfig(&this->world_area_config_mgr, this) | retq;
  rets = DungeonExcelConfigMgr::rewriteConfig(&this->dungeon_config_mgr, this) | retr;
  rett = GearExcelConfigMgr::rewriteConfig(&this->gear_config_mgr, this) | rets;
  retu = ReminderExcelConfigMgr::rewriteConfig(&this->reminder_config_mgr, this) | rett;
  retv = WeatherExcelConfigMgr::rewriteConfig(&this->weather_config_mgr, this) | retu;
  retw = TrialAvatarExcelConfigMgr::rewriteConfig(&this->trial_avatar_config_mgr, this) | retv;
  retx = BoredExcelConfigMgr::rewriteConfig(&this->bored_config_mgr, this) | retw;
  rety = PlayerExcelConfigMgr::rewriteConfig(&this->player_config_mgr, this) | retx;
  retz = SensitiveWordExcelConfigMgr::rewriteConfig(&this->sensitive_word_config_mgr, this) | rety;
  retba = EquipAffixExcelConfigMgr::rewriteConfig(&this->equip_affix_config_mgr, this) | retz;
  retbb = RewardExcelConfigMgr::rewriteConfig(&this->reward_config_mgr, this) | retba;
  retbc = EnvAnimalExcelConfigMgr::rewriteConfig(&this->env_animal_config_mgr, this) | retbb;
  retbd = DropExcelConfigMgr::rewriteConfig(&this->drop_config_mgr, this) | retbc;
  retbe = BuffExcelConfigMgr::rewriteConfig(&this->buff_config_mgr, this) | retbd;
  retbf = CookExcelConfigMgr::rewriteConfig(&this->cook_config_mgr, this) | retbe;
  retbg = CompoundExcelConfigMgr::rewriteConfig(&this->compound_config_mgr, this) | retbf;
  retbh = OpenStateExcelConfigMgr::rewriteConfig(&this->open_state_config_mgr, this) | retbg;
  retbi = data::LevelSuppressExcelConfigMgrBase::rewriteConfig(&this->level_suppress_config_mgr, this) | retbh;
  retbj = DailyTaskExcelConfigMgr::rewriteConfig(&this->daily_task_config_mgr, this) | retbi;
  retbk = RandTaskExcelConfigMgr::rewriteConfig(&this->rand_task_config_mgr, this) | retbj;
  retbl = FetterExcelConfigMgr::rewriteConfig(&this->fetter_config_mgr, this) | retbk;
  retbm = ExpeditionDataExcelConfigMgr::rewriteConfig(&this->expedition_config_mgr, this) | retbl;
  retbn = GachaExcelConfigMgr::rewriteConfig(&this->gacha_config_mgr, this) | retbm;
  retbo = CombineExcelConfigMgr::rewriteConfig(&this->combine_config_mgr, this) | retbn;
  retbp = RefreshPolicyExcelConfigMgr::rewriteConfig(&this->refresh_policy_config_mgr, this) | retbo;
  retbq = GivingExcelConfigMgr::rewriteConfig(&this->giving_config_mgr, this) | retbp;
  retbr = ForgeExcelConfigMgr::rewriteConfig(&this->forge_config_mgr, this) | retbq;
  retbs = InvestigationExcelConfigMgr::rewriteConfig(&this->investigation_config_mgr, this) | retbr;
  retbt = data::HandbookQuestGuideExcelConfigMgrBase::rewriteConfig(&this->handbook_quest_guide_mgr, this) | retbs;
  retbu = ActivitySeaLampExcelConfigMgr::rewriteConfig(&this->activity_sea_lamp_config_mgr, this) | retbt;
  retbv = WatcherExcelConfigMgr::rewriteConfig(&this->watcher_config_mgr, this) | retbu;
  retbw = DungeonEntryExcelConfigMgr::rewriteConfig(&this->dungeon_entry_config_mgr, this) | retbv;
  retbx = TowerExcelConfigMgr::rewriteConfig(&this->tower_config_mgr, this) | retbw;
  retby = MailExcelConfigMgr::rewriteConfig(&this->mail_config_mgr, this) | retbx;
  retbz = ItemLimitExcelConfigMgr::rewriteConfig(&this->item_limit_config_mgr, this) | retby;
  retca = data::AbilityPropExcelConfigMgrBase::rewriteConfig(&this->ability_prop_config_mgr, this) | retbz;
  retcb = SignInExcelConfigMgr::rewriteConfig(&this->sign_in_config_mgr, this) | retca;
  retcc = BlossomExcelConfigMgr::rewriteConfig(&this->blossom_config_mgr, this) | retcb;
  retcd = BattlePassExcelConfigMgr::rewriteConfig(&this->battle_pass_excel_config_mgr, this) | retcc;
  retce = ShopmallExcelConfigMgr::rewriteConfig(&this->shopmall_config_mgr, this) | retcd;
  retcf = BargainExcelConfigMgr::rewriteConfig(&this->bargain_excel_config_mgr, this) | retce;
  retcg = TeamResonanceExcelConfigMgr::rewriteConfig(&this->team_resonance_config_mgr, this) | retcf;
  retch = TrialAvatarActivityExcelConfigMgr::rewriteConfig(&this->trial_avatar_activity_config_mgr, this) | retcg;
  retci = ActivitySalesmanExcelConfigMgr::rewriteConfig(&this->activity_salesman_config_mgr, this) | retch;
  retcj = AvatarFashionExcelConfigMgr::rewriteConfig(&this->avatar_fashion_config_mgr, this) | retci;
  retck = NewActivityExcelConfigMgr::rewriteConfig(&this->new_activity_config_mgr, this) | retcj;
  retcl = MpPlayExcelConfigMgr::rewriteConfig(&this->mp_play_config_mgr, this) | retck;
  retcm = AchievementExcelConfigMgr::rewriteConfig(&this->achievement_config_mgr, this) | retcl;
  retcn = CodexExcelConfigMgr::rewriteConfig(&this->codex_config_mgr, this) | retcm;
  retco = PersonalLineExcelConfigMgr::rewriteConfig(&this->personal_line_config_mgr, this) | retcn;
  retcp = ExploreExcelConfigMgr::rewriteConfig(&this->explore_config_mgr, this) | retco;
  retcq = data::ReviseLevelGrowExcelConfigMgrBase::rewriteConfig(&this->revise_level_grow_config_mgr, this) | retcp;
  retcr = ActivityDeliveryExcelConfigMgr::rewriteConfig(&this->activity_delivery_config_mgr, this) | retcq;
  retcs = ActivityAsterExcelConfigMgr::rewriteConfig(&this->activity_aster_config_mgr, this) | retcr;
  retct = HuntingExcelConfigMgr::rewriteConfig(&this->hunting_config_mgr, this) | retcs;
  retcu = FeatureTagExcelConfigMgr::rewriteConfig(&this->feature_tag_config_mgr, this) | retct;
  retcv = ReputationExcelConfigMgr::rewriteConfig(&this->reputation_config_mgr, this) | retcu;
  retcw = ActivityAbilityGroupExcelConfigMgr::rewriteConfig(&this->activity_ability_group_config_mgr, this) | retcv;
  retcx = CoopExcelConfigMgr::rewriteConfig(&this->coop_config_mgr, this) | retcw;
  retcy = ActivityShopExcelConfigMgr::rewriteConfig(&this->activity_shop_config_mgr, this) | retcx;
  retcz = ActivityFlightExcelConfigMgr::rewriteConfig(&this->activity_flight_config_mgr, this) | retcy;
  retda = StrengthenExcelConfigMgr::rewriteConfig(&this->strengthen_config_mgr, this) | retcz;
  retdb = ActivityDragonSpineExcelConfigMgr::rewriteConfig(&this->activity_dragon_spine_config_mgr, this) | retda;
  retdc = OfferingExcelConfigMgr::rewriteConfig(&this->offering_config_mgr, this) | retdb;
  retdd = ActivityEffigyChallengeExcelConfigMgr::rewriteConfig(&this->activity_effigy_challenge_config_mgr, this) | retdc;
  retde = ActivityTreasureMapExcelConfigMgr::rewriteConfig(&this->activity_treasure_map_config_mgr, this) | retdd;
  retdf = ReunionExcelConfigMgr::rewriteConfig(&this->reunion_config_mgr, this) | retde;
  retdg = DungeonElementChallengeExcelConfigMgr::rewriteConfig(&this->dungeon_element_challenge_config_mgr, this) | retdf;
  retdh = RoutineExcelConfigMgr::rewriteConfig(&this->routine_config_mgr, this) | retdg;
  retdi = CombatTemplateExcelConfigMgr::rewriteConfig(&this->combat_template_config_mgr, this) | retdh;
  retdj = MiracleRingExcelConfigMgr::rewriteConfig(&this->miracle_ring_config_mgr, this) | retdi;
  retdk = ActivityBlessingExcelConfigMgr::rewriteConfig(&this->activity_blessing_config_mgr, this) | retdj;
  retdl = ActivityExpeditionExcelConfigMgr::rewriteConfig(&this->activity_expedition_config_mgr, this) | retdk;
  retdm = OpActivityExcelConfigMgr::rewriteConfig(&this->op_activity_config_mgr, this) | retdl;
  retdn = TreatreMechanicusExcelConfigMgr::rewriteConfig(&this->mechanicus_config_mgr, this) | retdm;
  retdo = DraftExcelConfigMgr::rewriteConfig(&this->draft_config_mgr, this) | retdn;
  retdp = GalleryExcelConfigMgr::rewriteConfig(&this->gallery_config_mgr, this) | retdo;
  retdq = OverflowTransformExcelConfigMgr::rewriteConfig(&this->overflow_transform_config_mgr, this) | retdp;
  retdr = HomeWorldExcelConfigMgr::rewriteConfig(&this->home_config_mgr, this) | retdq;
  retds = ActivityFleurFairExcelConfigMgr::rewriteConfig(&this->activity_fleur_fair_config_mgr, this) | retdr;
  retdt = ActivityArenaChallengeExcelConfigMgr::rewriteConfig(&this->activity_arena_challenge_config_mgr, this) | retds;
  retdu = RegionSearchExcelConfigMgr::rewriteConfig(&this->region_search_config_mgr, this) | retdt;
  retdv = ActivityMusicGameConfigMgr::rewriteConfig(&this->activity_music_game_config_mgr, this) | retdu;
  retdw = data::TreeTypeExcelConfigMgrBase::rewriteConfig(&this->tree_type_config_mgr, this) | retdv;
  retdx = ExclusiveRuleExcelConfigMgr::rewriteConfig(&this->exclusive_rule_config_mgr, this) | retdw;
  retdy = ActivityMistTrialExcelConfigMgr::rewriteConfig(&this->activity_mist_trial_config_mgr, this) | retdx;
  retdz = ActivityHideAndSeekExcelConfigMgr::rewriteConfig(&this->activity_hide_and_seek_config_mgr, this) | retdy;
  retea = ActivityChannellerSlabExcelConfigMgr::rewriteConfig(&this->activity_channeller_slab_config_mgr, this) | retdz;
  reteb = ActivityMimiTomoExcelConfigMgr::rewriteConfig(&this->activity_find_hilichurl_config_mgr, this) | retea;
  retec = H5ActivityExcelConfigMgr::rewriteConfig(&this->h5_activity_config_mgr, this) | reteb;
  reted = MatchExcelConfigMgr::rewriteConfig(&this->match_config_mgr, this) | retec;
  retee = ExhibitionExcelConfigMgr::rewriteConfig(&this->exhibition_config_mgr, this) | reted;
  retef = StatLogFilterExcelConfigMgr::rewriteConfig(&this->stat_log_filter_config_mgr, this) | retee;
  reteg = ActivitySummerTimeExcelConfigMgr::rewriteConfig(&this->activity_summer_time_config_mgr, this) | retef;
  reteh = ActivityBuoyantCombatExcelConfigMgr::rewriteConfig(&this->activity_buoyant_combat_config_mgr, this) | reteg;
  retei = ActivityBounceConjuringExcelConfigMgr::rewriteConfig(&this->activity_bounce_conjuring_config_mgr, this) | reteh;
  retej = ActivityEchoShellExcelConfigMgr::rewriteConfig(&this->activity_echo_shell_config_mgr, this) | retei;
  retek = ActivityBlitzRushExcelConfigMgr::rewriteConfig(&this->activity_blitz_rush_config_mgr, this) | retej;
  retel = ActivityChessExcelConfigMgr::rewriteConfig(&this->activity_chess_config_mgr, this) | retek;
  retem = WidgetCameraExcelConfigMgr::rewriteConfig(&this->widget_camera_config_mgr, this) | retel;
  reten = ActivitySumoExcelConfigMgr::rewriteConfig(&this->activity_sumo_config_mgr, this) | retem;
  reteo = ActivityGroupLinksExcelConfigMgr::rewriteConfig(&this->activity_group_links_config_mgr, this) | reten;
  retep = ActivityLunaRiteExcelConfigMgr::rewriteConfig(&this->activity_luna_rite_config_mgr, this) | reteo;
  reteq = FishExcelConfigMgr::rewriteConfig(&this->fish_config_mgr, this) | retep;
  reter = ActivityMoonfinTrialExcelConfigMgr::rewriteConfig(&this->activity_moonfin_trial_config_mgr, this) | reteq;
  retes = ActivityRogueExcelConfigMgr::rewriteConfig(&this->activity_rogue_config_mgr, this) | reter;
  retet = ActivityPlantFlowerExcelConfigMgr::rewriteConfig(&this->activity_plant_flower_config_mgr, this) | retes;
  reteu = WidgetExcelConfigMgr::rewriteConfig(&this->widget_config_mgr, this) | retet;
  retev = AbilityOverrideExcelConfigMgr::rewriteConfig(&this->ability_override_config_mgr, this) | reteu;
  retew = ActivityDigExcelConfigMgr::rewriteConfig(&this->activity_dig_config_mgr, this) | retev;
  retex = ActivityHachiExcelConfigMgr::rewriteConfig(&this->activity_hachi_config_mgr, this) | retew;
  retey = ActivityWinterCampExcelConfigMgr::rewriteConfig(&this->activity_winter_camp_config_mgr, this) | retex;
  retez = LevelTagExcelConfigMgr::rewriteConfig(&this->level_tag_config_mgr, this) | retey;
  retfa = CustomDungeonExcelConfigMgr::rewriteConfig(&this->custom_dungeon_config_mgr, this) | retez;
  retfb = FireworksExcelConfigMgr::rewriteConfig(&this->fireworks_config_mgr, this) | retfa;
  retfc = ActivityPotionExcelConfigMgr::rewriteConfig(&this->activity_potion_config_mgr, this) | retfb;
  retfd = ActivityTanukiTravelExcelConfigMgr::rewriteConfig(&this->activity_tanuki_travel_config_mgr, this) | retfc;
  retfe = GCGGameExcelConfigMgr::rewriteConfig(&this->gcg_game_config_mgr, this) | retfd;
  retff = GCGDeckExcelConfigMgr::rewriteConfig(&this->gcg_deck_config_mgr, this) | retfe;
  retfg = GCGPlayingExcelConfigMgr::rewriteConfig(&this->gcg_playing_config_mgr, this) | retff;
  retfh = GCGGrowthExcelConfigMgr::rewriteConfig(&this->gcg_growth_config_mgr, this) | retfg;
  retfi = ActivityMichiaeMatsuriExcelConfigMgr::rewriteConfig(&this->activity_michiae_matsuri_config_mgr, this) | retfh;
  retfj = data::MultistageExcelConfigMgrBase::rewriteConfig(&this->multistage_config_mgr, this) | retfi;
  retfk = ActivityBartenderExcelConfigMgr::rewriteConfig(&this->activity_bartender_config_mgr, this) | retfj;
  retfl = DisplayItemExcelConfigMgr::rewriteConfig(&this->display_item_config_mgr, this) | retfk;
  retfm = UIInteractExcelConfigMgr::rewriteConfig(&this->ui_interact_config_mgr, this) | retfl;
  retfn = ShareCDExcelConfigMgr::rewriteConfig(&this->share_cd_config_mgr, this) | retfm;
  retfo = ActivityCrystalLinkExcelConfigMgr::rewriteConfig(&this->activity_crystal_link_config_mgr, this) | retfn;
  retfp = ActivityIrodoriExcelConfigMgr::rewriteConfig(&this->activity_irodori_config_mgr, this) | retfo;
  retfq = ActivitySpiceExcelConfigMgr::rewriteConfig(&this->activity_spice_config_mgr, this) | retfp;
  retfr = ActivityPhotographExcelConfigMgr::rewriteConfig(&this->activity_photograph_config_mgr, this) | retfq;
  retfs = data::GroupTagExcelConfigMgrBase::rewriteConfig(&this->group_tag_config_mgr, this) | retfr;
  retft = ActivityGachaExcelConfigMgr::rewriteConfig(&this->activity_gacha_config_mgr, this) | retfs;
  retfu = ActivityLuminanceStoneChallengeExcelConfigMgr::rewriteConfig(
            &this->activity_luminance_stone_challenge_config_mgr,
            this) | retft;
  retfv = ActivityRogueDiaryExcelConfigMgr::rewriteConfig(&this->activity_rogue_diary_config_mgr, this) | retfu;
  retfw = GadgetArgumentExcelConfigMgr::rewriteConfig(&this->gadget_argument_config_mgr, this) | retfv;
  retfx = ActivityGearExcelConfigMgr::rewriteConfig(&this->activity_gear_config_mgr, this) | retfw;
  retfy = ActivitySummerTimeV2ExcelConfigMgr::rewriteConfig(&this->activity_summer_time_v2_mgr, this) | retfx;
  retfz = CatalogExcelConfigMgr::rewriteConfig(&this->catalog_config_mgr, this) | retfy;
  retga = data::RegionPlayLevelExcelConfigMgrBase::rewriteConfig(&this->region_play_level_config_mgr, this) | retfz;
  retgb = ActivityIslandPartyExcelConfigMgr::rewriteConfig(&this->activity_island_party_mgr, this) | retga;
  retgc = ActivityGravenInnocenceExcelConfigMgr::rewriteConfig(&this->activity_graven_innocence_mgr, this) | retgb;
  retgd = ActivityInstableSprayExcelConfigMgr::rewriteConfig(&this->activity_instable_spray_mgr, this) | retgc;
  retge = data::ActivityMuqadasPotionExcelConfigMgrBase::rewriteConfig(&this->activity_muqadas_potion_mgr, this) | retgd;
  retgf = ActivityTreasureSeelieExcelConfigMgr::rewriteConfig(&this->activity_treasure_seelie_config_mgr, this) | retge;
  retgg = InferenceExcelConfigMgr::rewriteConfig(&this->inference_config_mgr, this) | retgf;
  retgh = ActivityWindFieldExcelConfigMgr::rewriteConfig(&this->activity_wind_field_mgr, this) | retgg;
  retgi = ActivityVintageExcelConfigMgr::rewriteConfig(&this->activity_vintage_config_mgr, this) | retgh;
  retgj = ActivityRockBoardExploreExcelConfigMgr::rewriteConfig(&this->activity_rock_board_explore_config_mgr, this) | retgi;
  retgk = ActivityVintageMarketExcelConfigMgr::rewriteConfig(&this->activity_vintage_market_config_mgr, this) | retgj;
  retgl = ActivityFungusFighterExcelConfigMgr::rewriteConfig(&this->activity_fungus_fighter_config_mgr, this) | retgk;
  retgm = ActivityCharAmusementExcelConfigMgr::rewriteConfig(&this->activity_char_amusement_config_mgr, this) | retgl;
  retgn = ActivityEffigyChallengeV2ExcelConfigMgr::rewriteConfig(&this->activity_effigy_challenge_v2_config_mgr, this) | retgm;
  retgo = RenameExcelConfigMgr::rewriteConfig(&this->rename_config_mgr, this) | retgn;
  retgp = ActivityCoinCollectExcelConfigMgr::rewriteConfig(&this->activity_coin_collect_config_mgr, this) | retgo;
  retgq = ActivityBrickBreakerExcelConfigMgr::rewriteConfig(&this->activity_brick_breaker_config_mgr, this) | retgp;
  retgr = ActivityElectroherculesBattleExcelConfigMgr::rewriteConfig(
            &this->activity_electrohercules_battle_config_mgr,
            this) | retgq;
  retgs = ActivityTeamChainExcelConfigMgr::rewriteConfig(&this->activity_team_chain_config_mgr, this) | retgr;
  retgt = ActivitySeaLampV3ExcelConfigMgr::rewriteConfig(&this->activity_sea_lamp_v3_config_mgr, this) | retgs;
  if ( ActivityDuelHeartExcelConfigMgr::rewriteConfig(&this->activity_duel_heart_config_mgr, this) | retgt )
  {
    if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 63) & 7) >= *(_BYTE *)(((v1 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "rewriteConfig",
      237);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v4, (const char (*)[18])"loadConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v183 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 244: range 000000000CD52D70-000000000CD549A6
int32_t __cdecl TxtConfigMgr::finalConfig(TxtConfigMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-84h]
  int reta; // [rsp+1Ch] [rbp-84h]
  int retb; // [rsp+1Ch] [rbp-84h]
  int retc; // [rsp+1Ch] [rbp-84h]
  int retd; // [rsp+1Ch] [rbp-84h]
  int rete; // [rsp+1Ch] [rbp-84h]
  int retf; // [rsp+1Ch] [rbp-84h]
  int retg; // [rsp+1Ch] [rbp-84h]
  int reth; // [rsp+1Ch] [rbp-84h]
  int reti; // [rsp+1Ch] [rbp-84h]
  int retj; // [rsp+1Ch] [rbp-84h]
  int retk; // [rsp+1Ch] [rbp-84h]
  int retl; // [rsp+1Ch] [rbp-84h]
  int retm; // [rsp+1Ch] [rbp-84h]
  int retn; // [rsp+1Ch] [rbp-84h]
  int reto; // [rsp+1Ch] [rbp-84h]
  int retp; // [rsp+1Ch] [rbp-84h]
  int retq; // [rsp+1Ch] [rbp-84h]
  int retr; // [rsp+1Ch] [rbp-84h]
  int rets; // [rsp+1Ch] [rbp-84h]
  int rett; // [rsp+1Ch] [rbp-84h]
  int retu; // [rsp+1Ch] [rbp-84h]
  int retv; // [rsp+1Ch] [rbp-84h]
  int retw; // [rsp+1Ch] [rbp-84h]
  int retx; // [rsp+1Ch] [rbp-84h]
  int rety; // [rsp+1Ch] [rbp-84h]
  int retz; // [rsp+1Ch] [rbp-84h]
  int retba; // [rsp+1Ch] [rbp-84h]
  int retbb; // [rsp+1Ch] [rbp-84h]
  int retbc; // [rsp+1Ch] [rbp-84h]
  int retbd; // [rsp+1Ch] [rbp-84h]
  int retbe; // [rsp+1Ch] [rbp-84h]
  int retbf; // [rsp+1Ch] [rbp-84h]
  int retbg; // [rsp+1Ch] [rbp-84h]
  int retbh; // [rsp+1Ch] [rbp-84h]
  int retbi; // [rsp+1Ch] [rbp-84h]
  int retbj; // [rsp+1Ch] [rbp-84h]
  int retbk; // [rsp+1Ch] [rbp-84h]
  int retbl; // [rsp+1Ch] [rbp-84h]
  int retbm; // [rsp+1Ch] [rbp-84h]
  int retbn; // [rsp+1Ch] [rbp-84h]
  int retbo; // [rsp+1Ch] [rbp-84h]
  int retbp; // [rsp+1Ch] [rbp-84h]
  int retbq; // [rsp+1Ch] [rbp-84h]
  int retbr; // [rsp+1Ch] [rbp-84h]
  int retbs; // [rsp+1Ch] [rbp-84h]
  int retbt; // [rsp+1Ch] [rbp-84h]
  int retbu; // [rsp+1Ch] [rbp-84h]
  int retbv; // [rsp+1Ch] [rbp-84h]
  int retbw; // [rsp+1Ch] [rbp-84h]
  int retbx; // [rsp+1Ch] [rbp-84h]
  int retby; // [rsp+1Ch] [rbp-84h]
  int retbz; // [rsp+1Ch] [rbp-84h]
  int retca; // [rsp+1Ch] [rbp-84h]
  int retcb; // [rsp+1Ch] [rbp-84h]
  int retcc; // [rsp+1Ch] [rbp-84h]
  int retcd; // [rsp+1Ch] [rbp-84h]
  int retce; // [rsp+1Ch] [rbp-84h]
  int retcf; // [rsp+1Ch] [rbp-84h]
  int retcg; // [rsp+1Ch] [rbp-84h]
  int retch; // [rsp+1Ch] [rbp-84h]
  int retci; // [rsp+1Ch] [rbp-84h]
  int retcj; // [rsp+1Ch] [rbp-84h]
  int retck; // [rsp+1Ch] [rbp-84h]
  int retcl; // [rsp+1Ch] [rbp-84h]
  int retcm; // [rsp+1Ch] [rbp-84h]
  int retcn; // [rsp+1Ch] [rbp-84h]
  int retco; // [rsp+1Ch] [rbp-84h]
  int retcp; // [rsp+1Ch] [rbp-84h]
  int retcq; // [rsp+1Ch] [rbp-84h]
  int retcr; // [rsp+1Ch] [rbp-84h]
  int retcs; // [rsp+1Ch] [rbp-84h]
  int retct; // [rsp+1Ch] [rbp-84h]
  int retcu; // [rsp+1Ch] [rbp-84h]
  int retcv; // [rsp+1Ch] [rbp-84h]
  int retcw; // [rsp+1Ch] [rbp-84h]
  int retcx; // [rsp+1Ch] [rbp-84h]
  int retcy; // [rsp+1Ch] [rbp-84h]
  int retcz; // [rsp+1Ch] [rbp-84h]
  int retda; // [rsp+1Ch] [rbp-84h]
  int retdb; // [rsp+1Ch] [rbp-84h]
  int retdc; // [rsp+1Ch] [rbp-84h]
  int retdd; // [rsp+1Ch] [rbp-84h]
  int retde; // [rsp+1Ch] [rbp-84h]
  int retdf; // [rsp+1Ch] [rbp-84h]
  int retdg; // [rsp+1Ch] [rbp-84h]
  int retdh; // [rsp+1Ch] [rbp-84h]
  int retdi; // [rsp+1Ch] [rbp-84h]
  int retdj; // [rsp+1Ch] [rbp-84h]
  int retdk; // [rsp+1Ch] [rbp-84h]
  int retdl; // [rsp+1Ch] [rbp-84h]
  int retdm; // [rsp+1Ch] [rbp-84h]
  int retdn; // [rsp+1Ch] [rbp-84h]
  int retdo; // [rsp+1Ch] [rbp-84h]
  int retdp; // [rsp+1Ch] [rbp-84h]
  int retdq; // [rsp+1Ch] [rbp-84h]
  int retdr; // [rsp+1Ch] [rbp-84h]
  int retds; // [rsp+1Ch] [rbp-84h]
  int retdt; // [rsp+1Ch] [rbp-84h]
  int retdu; // [rsp+1Ch] [rbp-84h]
  int retdv; // [rsp+1Ch] [rbp-84h]
  int retdw; // [rsp+1Ch] [rbp-84h]
  int retdx; // [rsp+1Ch] [rbp-84h]
  int retdy; // [rsp+1Ch] [rbp-84h]
  int retdz; // [rsp+1Ch] [rbp-84h]
  int retea; // [rsp+1Ch] [rbp-84h]
  int reteb; // [rsp+1Ch] [rbp-84h]
  int retec; // [rsp+1Ch] [rbp-84h]
  int reted; // [rsp+1Ch] [rbp-84h]
  int retee; // [rsp+1Ch] [rbp-84h]
  int retef; // [rsp+1Ch] [rbp-84h]
  int reteg; // [rsp+1Ch] [rbp-84h]
  int reteh; // [rsp+1Ch] [rbp-84h]
  int retei; // [rsp+1Ch] [rbp-84h]
  int retej; // [rsp+1Ch] [rbp-84h]
  int retek; // [rsp+1Ch] [rbp-84h]
  int retel; // [rsp+1Ch] [rbp-84h]
  int retem; // [rsp+1Ch] [rbp-84h]
  int reten; // [rsp+1Ch] [rbp-84h]
  int reteo; // [rsp+1Ch] [rbp-84h]
  int retep; // [rsp+1Ch] [rbp-84h]
  int reteq; // [rsp+1Ch] [rbp-84h]
  int reter; // [rsp+1Ch] [rbp-84h]
  int retes; // [rsp+1Ch] [rbp-84h]
  int retet; // [rsp+1Ch] [rbp-84h]
  int reteu; // [rsp+1Ch] [rbp-84h]
  int retev; // [rsp+1Ch] [rbp-84h]
  int retew; // [rsp+1Ch] [rbp-84h]
  int retex; // [rsp+1Ch] [rbp-84h]
  int retey; // [rsp+1Ch] [rbp-84h]
  int retez; // [rsp+1Ch] [rbp-84h]
  int retfa; // [rsp+1Ch] [rbp-84h]
  int retfb; // [rsp+1Ch] [rbp-84h]
  int retfc; // [rsp+1Ch] [rbp-84h]
  int retfd; // [rsp+1Ch] [rbp-84h]
  int retfe; // [rsp+1Ch] [rbp-84h]
  int retff; // [rsp+1Ch] [rbp-84h]
  int retfg; // [rsp+1Ch] [rbp-84h]
  int retfh; // [rsp+1Ch] [rbp-84h]
  int retfi; // [rsp+1Ch] [rbp-84h]
  int retfj; // [rsp+1Ch] [rbp-84h]
  int retfk; // [rsp+1Ch] [rbp-84h]
  int retfl; // [rsp+1Ch] [rbp-84h]
  int retfm; // [rsp+1Ch] [rbp-84h]
  int retfn; // [rsp+1Ch] [rbp-84h]
  int retfo; // [rsp+1Ch] [rbp-84h]
  int retfp; // [rsp+1Ch] [rbp-84h]
  int retfq; // [rsp+1Ch] [rbp-84h]
  int retfr; // [rsp+1Ch] [rbp-84h]
  int retfs; // [rsp+1Ch] [rbp-84h]
  int retft; // [rsp+1Ch] [rbp-84h]
  int retfu; // [rsp+1Ch] [rbp-84h]
  int retfv; // [rsp+1Ch] [rbp-84h]
  int retfw; // [rsp+1Ch] [rbp-84h]
  int retfx; // [rsp+1Ch] [rbp-84h]
  int retfy; // [rsp+1Ch] [rbp-84h]
  int retfz; // [rsp+1Ch] [rbp-84h]
  int retga; // [rsp+1Ch] [rbp-84h]
  int retgb; // [rsp+1Ch] [rbp-84h]
  int retgc; // [rsp+1Ch] [rbp-84h]
  int retgd; // [rsp+1Ch] [rbp-84h]
  int retge; // [rsp+1Ch] [rbp-84h]
  int retgf; // [rsp+1Ch] [rbp-84h]
  int retgg; // [rsp+1Ch] [rbp-84h]
  int retgh; // [rsp+1Ch] [rbp-84h]
  int retgi; // [rsp+1Ch] [rbp-84h]
  int retgj; // [rsp+1Ch] [rbp-84h]
  int retgk; // [rsp+1Ch] [rbp-84h]
  int retgl; // [rsp+1Ch] [rbp-84h]
  int retgm; // [rsp+1Ch] [rbp-84h]
  int retgn; // [rsp+1Ch] [rbp-84h]
  int retgo; // [rsp+1Ch] [rbp-84h]
  int retgp; // [rsp+1Ch] [rbp-84h]
  int retgq; // [rsp+1Ch] [rbp-84h]
  int retgr; // [rsp+1Ch] [rbp-84h]
  int retgs; // [rsp+1Ch] [rbp-84h]
  int retgt; // [rsp+1Ch] [rbp-84h]
  char v183[128]; // [rsp+20h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v183;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = TxtConfigMgr::finalConfig;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  ret = data::ConstValueExcelConfigMgrBase::finalConfig(&this->const_value_config_mgr, this);
  reta = data::AvatarExcelConfigMgrBase::finalConfig(&this->avatar_config_mgr, this) | ret;
  retb = data::AvatarTalentExcelConfigMgrBase::finalConfig(&this->avatar_talent_config_mgr, this) | reta;
  retc = data::AvatarSkillExcelConfigMgrBase::finalConfig(&this->avatar_skill_config_mgr, this) | retb;
  retd = data::AvatarExtraPropExcelConfigMgrBase::finalConfig(&this->avatar_extra_prop_config_mgr, this) | retc;
  rete = data::ElementExcelConfigMgrBase::finalConfig(&this->element_config_mgr, this) | retd;
  retf = data::ReliquaryExcelConfigMgrBase::finalConfig(&this->reliquary_config_mgr, this) | rete;
  retg = data::GadgetExcelConfigMgrBase::finalConfig(&this->gadget_config_mgr, this) | retf;
  reth = data::GatherExcelConfigMgrBase::finalConfig(&this->gather_config_mgr, this) | retg;
  reti = data::GrowCurveExcelConfigMgrBase::finalConfig(&this->grow_curve_config_mgr, this) | reth;
  retj = data::MaterialExcelConfigMgrBase::finalConfig(&this->material_config_mgr, this) | reti;
  retk = ItemExcelConfigMgr::finalConfig(&this->item_config_mgr, this) | retj;
  retl = data::MonsterExcelConfigMgrBase::finalConfig(&this->monster_config_mgr, this) | retk;
  retm = data::NpcExcelConfigMgrBase::finalConfig(&this->npc_config_mgr, this) | retl;
  retn = data::QuestExcelConfigMgrBase::finalConfig(&this->quest_config_mgr, this) | retm;
  reto = data::SceneExcelConfigMgrBase::finalConfig(&this->scene_config_mgr, this) | retn;
  retp = ShopExcelConfigMgr::finalConfig(&this->shop_config_mgr, this) | reto;
  retq = data::WeaponExcelConfigMgrBase::finalConfig(&this->weapon_config_mgr, this) | retp;
  retr = data::WorldAreaExcelConfigMgrBase::finalConfig(&this->world_area_config_mgr, this) | retq;
  rets = data::DungeonExcelConfigMgrBase::finalConfig(&this->dungeon_config_mgr, this) | retr;
  rett = data::GearExcelConfigMgrBase::finalConfig(&this->gear_config_mgr, this) | rets;
  retu = data::ReminderExcelConfigMgrBase::finalConfig(&this->reminder_config_mgr, this) | rett;
  retv = data::WeatherExcelConfigMgrBase::finalConfig(&this->weather_config_mgr, this) | retu;
  retw = data::TrialAvatarExcelConfigMgrBase::finalConfig(&this->trial_avatar_config_mgr, this) | retv;
  retx = data::BoredExcelConfigMgrBase::finalConfig(&this->bored_config_mgr, this) | retw;
  rety = data::PlayerExcelConfigMgrBase::finalConfig(&this->player_config_mgr, this) | retx;
  retz = data::SensitiveWordExcelConfigMgrBase::finalConfig(&this->sensitive_word_config_mgr, this) | rety;
  retba = data::EquipAffixExcelConfigMgrBase::finalConfig(&this->equip_affix_config_mgr, this) | retz;
  retbb = data::RewardExcelConfigMgrBase::finalConfig(&this->reward_config_mgr, this) | retba;
  retbc = data::EnvAnimalExcelConfigMgrBase::finalConfig(&this->env_animal_config_mgr, this) | retbb;
  retbd = data::DropExcelConfigMgrBase::finalConfig(&this->drop_config_mgr, this) | retbc;
  retbe = data::BuffExcelConfigMgrBase::finalConfig(&this->buff_config_mgr, this) | retbd;
  retbf = data::CookExcelConfigMgrBase::finalConfig(&this->cook_config_mgr, this) | retbe;
  retbg = data::CompoundExcelConfigMgrBase::finalConfig(&this->compound_config_mgr, this) | retbf;
  retbh = data::OpenStateExcelConfigMgrBase::finalConfig(&this->open_state_config_mgr, this) | retbg;
  retbi = data::LevelSuppressExcelConfigMgrBase::finalConfig(&this->level_suppress_config_mgr, this) | retbh;
  retbj = data::DailyTaskExcelConfigMgrBase::finalConfig(&this->daily_task_config_mgr, this) | retbi;
  retbk = data::RandTaskExcelConfigMgrBase::finalConfig(&this->rand_task_config_mgr, this) | retbj;
  retbl = data::FettersExcelConfigMgrBase::finalConfig(&this->fetter_config_mgr, this) | retbk;
  retbm = data::ExpeditionDataExcelConfigMgrBase::finalConfig(&this->expedition_config_mgr, this) | retbl;
  retbn = data::GachaExcelConfigMgrBase::finalConfig(&this->gacha_config_mgr, this) | retbm;
  retbo = data::CombineExcelConfigMgrBase::finalConfig(&this->combine_config_mgr, this) | retbn;
  retbp = data::RefreshPolicyExcelConfigMgrBase::finalConfig(&this->refresh_policy_config_mgr, this) | retbo;
  retbq = data::GivingExcelConfigMgrBase::finalConfig(&this->giving_config_mgr, this) | retbp;
  retbr = data::ForgeExcelConfigMgrBase::finalConfig(&this->forge_config_mgr, this) | retbq;
  retbs = data::InvestigationExcelConfigMgrBase::finalConfig(&this->investigation_config_mgr, this) | retbr;
  retbt = data::HandbookQuestGuideExcelConfigMgrBase::finalConfig(&this->handbook_quest_guide_mgr, this) | retbs;
  retbu = data::ActivitySeaLampExcelConfigMgrBase::finalConfig(&this->activity_sea_lamp_config_mgr, this) | retbt;
  retbv = data::WatcherExcelConfigMgrBase::finalConfig(&this->watcher_config_mgr, this) | retbu;
  retbw = data::DungeonEntryDataConfigMgrBase::finalConfig(&this->dungeon_entry_config_mgr, this) | retbv;
  retbx = data::TowerExcelConfigMgrBase::finalConfig(&this->tower_config_mgr, this) | retbw;
  retby = data::MailExcelConfigMgrBase::finalConfig(&this->mail_config_mgr, this) | retbx;
  retbz = data::ItemLimitExcelConfigMgrBase::finalConfig(&this->item_limit_config_mgr, this) | retby;
  retca = data::AbilityPropExcelConfigMgrBase::finalConfig(&this->ability_prop_config_mgr, this) | retbz;
  retcb = data::SignInExcelConfigMgrBase::finalConfig(&this->sign_in_config_mgr, this) | retca;
  retcc = data::BlossomExcelConfigMgrBase::finalConfig(&this->blossom_config_mgr, this) | retcb;
  retcd = data::BattlePassExcelConfigMgrBase::finalConfig(&this->battle_pass_excel_config_mgr, this) | retcc;
  retce = data::ShopmallExcelConfigMgrBase::finalConfig(&this->shopmall_config_mgr, this) | retcd;
  retcf = data::BargainExcelConfigMgrBase::finalConfig(&this->bargain_excel_config_mgr, this) | retce;
  retcg = data::TeamResonanceExcelConfigMgrBase::finalConfig(&this->team_resonance_config_mgr, this) | retcf;
  retch = data::TrialAvatarActivityExcelConfigMgrBase::finalConfig(&this->trial_avatar_activity_config_mgr, this) | retcg;
  retci = data::ActivitySalesmanExcelConfigMgrBase::finalConfig(&this->activity_salesman_config_mgr, this) | retch;
  retcj = data::AvatarFashionExcelConfigMgrBase::finalConfig(&this->avatar_fashion_config_mgr, this) | retci;
  retck = data::NewActivityExcelConfigMgrBase::finalConfig(&this->new_activity_config_mgr, this) | retcj;
  retcl = data::MpPlayExcelConfigMgrBase::finalConfig(&this->mp_play_config_mgr, this) | retck;
  retcm = data::AchievementExcelConfigMgrBase::finalConfig(&this->achievement_config_mgr, this) | retcl;
  retcn = data::CodexExcelConfigMgrBase::finalConfig(&this->codex_config_mgr, this) | retcm;
  retco = data::PersonalLineExcelConfigMgrBase::finalConfig(&this->personal_line_config_mgr, this) | retcn;
  retcp = data::ExploreExcelConfigMgrBase::finalConfig(&this->explore_config_mgr, this) | retco;
  retcq = data::ReviseLevelGrowExcelConfigMgrBase::finalConfig(&this->revise_level_grow_config_mgr, this) | retcp;
  retcr = data::ActivityDeliveryExcelConfigMgrBase::finalConfig(&this->activity_delivery_config_mgr, this) | retcq;
  retcs = data::ActivityAsterExcelConfigMgrBase::finalConfig(&this->activity_aster_config_mgr, this) | retcr;
  retct = data::HuntingExcelConfigMgrBase::finalConfig(&this->hunting_config_mgr, this) | retcs;
  retcu = data::FeatureTagExcelConfigMgrBase::finalConfig(&this->feature_tag_config_mgr, this) | retct;
  retcv = data::ReputationExcelConfigMgrBase::finalConfig(&this->reputation_config_mgr, this) | retcu;
  retcw = data::ActivityAbilityGroupExcelConfigMgrBase::finalConfig(&this->activity_ability_group_config_mgr, this) | retcv;
  retcx = data::CoopExcelConfigMgrBase::finalConfig(&this->coop_config_mgr, this) | retcw;
  retcy = data::ActivityShopExcelConfigMgrBase::finalConfig(&this->activity_shop_config_mgr, this) | retcx;
  retcz = ActivityFlightExcelConfigMgr::finalConfig(&this->activity_flight_config_mgr, this) | retcy;
  retda = data::StrengthenExcelConfigMgrBase::finalConfig(&this->strengthen_config_mgr, this) | retcz;
  retdb = data::ActivityDragonSpineExcelConfigMgrBase::finalConfig(&this->activity_dragon_spine_config_mgr, this) | retda;
  retdc = data::OfferingExcelConfigMgrBase::finalConfig(&this->offering_config_mgr, this) | retdb;
  retdd = data::ActivityEffigyChallengeExcelConfigMgrBase::finalConfig(
            &this->activity_effigy_challenge_config_mgr,
            this) | retdc;
  retde = ActivityTreasureMapExcelConfigMgr::finalConfig(&this->activity_treasure_map_config_mgr, this) | retdd;
  retdf = data::ReunionExcelConfigMgrBase::finalConfig(&this->reunion_config_mgr, this) | retde;
  retdg = data::DungeonElementChallengeExcelConfigMgrBase::finalConfig(
            &this->dungeon_element_challenge_config_mgr,
            this) | retdf;
  retdh = data::RoutineExcelConfigMgrBase::finalConfig(&this->routine_config_mgr, this) | retdg;
  retdi = data::CombatTemplateExcelConfigMgrBase::finalConfig(&this->combat_template_config_mgr, this) | retdh;
  retdj = data::MiracleRingExcelConfigMgrBase::finalConfig(&this->miracle_ring_config_mgr, this) | retdi;
  retdk = data::ActivityBlessingExcelConfigMgrBase::finalConfig(&this->activity_blessing_config_mgr, this) | retdj;
  retdl = data::ActivityExpeditionExcelConfigMgrBase::finalConfig(&this->activity_expedition_config_mgr, this) | retdk;
  retdm = data::OpActivityExcelConfigMgrBase::finalConfig(&this->op_activity_config_mgr, this) | retdl;
  retdn = data::TreatreMechanicusExcelConfigMgrBase::finalConfig(&this->mechanicus_config_mgr, this) | retdm;
  retdo = data::DraftExcelConfigMgrBase::finalConfig(&this->draft_config_mgr, this) | retdn;
  retdp = data::GalleryExcelConfigMgrBase::finalConfig(&this->gallery_config_mgr, this) | retdo;
  retdq = data::OverflowTransformExcelConfigMgrBase::finalConfig(&this->overflow_transform_config_mgr, this) | retdp;
  retdr = data::HomeWorldExcelConfigMgrBase::finalConfig(&this->home_config_mgr, this) | retdq;
  retds = data::ActivityFleurFairExcelConfigMgrBase::finalConfig(&this->activity_fleur_fair_config_mgr, this) | retdr;
  retdt = ActivityArenaChallengeExcelConfigMgr::finalConfig(&this->activity_arena_challenge_config_mgr, this) | retds;
  retdu = data::ActivityRegionSearchMgrBase::finalConfig(&this->region_search_config_mgr, this) | retdt;
  retdv = data::ActivityMusicGameConfigMgrBase::finalConfig(&this->activity_music_game_config_mgr, this) | retdu;
  retdw = data::TreeTypeExcelConfigMgrBase::finalConfig(&this->tree_type_config_mgr, this) | retdv;
  retdx = data::ExclusiveRuleExcelConfigMgrBase::finalConfig(&this->exclusive_rule_config_mgr, this) | retdw;
  retdy = data::ActivityMistTrialExcelConfigMgrBase::finalConfig(&this->activity_mist_trial_config_mgr, this) | retdx;
  retdz = data::ActivityHideAndSeekConfigMgrBase::finalConfig(&this->activity_hide_and_seek_config_mgr, this) | retdy;
  retea = data::ActivityChannellerSlabExcelConfigMgrBase::finalConfig(&this->activity_channeller_slab_config_mgr, this) | retdz;
  reteb = data::ActivityMimiTomoExcelConfigMgrBase::finalConfig(&this->activity_find_hilichurl_config_mgr, this) | retea;
  retec = data::H5ActivityExcelConfigMgrBase::finalConfig(&this->h5_activity_config_mgr, this) | reteb;
  reted = data::MatchExcelConfigMgrBase::finalConfig(&this->match_config_mgr, this) | retec;
  retee = data::ExhibitionExcelConfigMgrBase::finalConfig(&this->exhibition_config_mgr, this) | reted;
  retef = data::StatLogFilterExcelConfigMgrBase::finalConfig(&this->stat_log_filter_config_mgr, this) | retee;
  reteg = ActivitySummerTimeExcelConfigMgr::finalConfig(&this->activity_summer_time_config_mgr, this) | retef;
  reteh = data::ActivityBuoyantCombatExcelConfigMgrBase::finalConfig(&this->activity_buoyant_combat_config_mgr, this) | reteg;
  retei = data::ActivityBounceConjuringExcelConfigMgrBase::finalConfig(
            &this->activity_bounce_conjuring_config_mgr,
            this) | reteh;
  retej = data::ActivityEchoShellExcelConfigMgrBase::finalConfig(&this->activity_echo_shell_config_mgr, this) | retei;
  retek = data::ActivityBlitzRushExcelConfigMgrBase::finalConfig(&this->activity_blitz_rush_config_mgr, this) | retej;
  retel = ActivityChessExcelConfigMgr::finalConfig(&this->activity_chess_config_mgr, this) | retek;
  retem = data::WidgetCameraExcelConfigMgrBase::finalConfig(&this->widget_camera_config_mgr, this) | retel;
  reten = data::ActivitySumoExcelConfigMgrBase::finalConfig(&this->activity_sumo_config_mgr, this) | retem;
  reteo = data::ActivityGroupLinksExcelConfigMgrBase::finalConfig(&this->activity_group_links_config_mgr, this) | reten;
  retep = data::ActivityLunaRiteExcelConfigMgrBase::finalConfig(&this->activity_luna_rite_config_mgr, this) | reteo;
  reteq = data::FishExcelConfigMgrBase::finalConfig(&this->fish_config_mgr, this) | retep;
  reter = data::ActivityMoonfinTrialExcelConfigMgrBase::finalConfig(&this->activity_moonfin_trial_config_mgr, this) | reteq;
  retes = data::ActivityRogueExcelConfigMgrBase::finalConfig(&this->activity_rogue_config_mgr, this) | reter;
  retet = data::ActivityPlantFlowerExcelConfigMgrBase::finalConfig(&this->activity_plant_flower_config_mgr, this) | retes;
  reteu = data::WidgetExcelConfigMgrBase::finalConfig(&this->widget_config_mgr, this) | retet;
  retev = data::AbilityOverrideExcelConfigMgrBase::finalConfig(&this->ability_override_config_mgr, this) | reteu;
  retew = data::ActivityDigExcelConfigMgrBase::finalConfig(&this->activity_dig_config_mgr, this) | retev;
  retex = data::ActivityHachiExcelConfigMgrBase::finalConfig(&this->activity_hachi_config_mgr, this) | retew;
  retey = data::ActivityWinterCampExcelConfigMgrBase::finalConfig(&this->activity_winter_camp_config_mgr, this) | retex;
  retez = data::LevelTagExcelConfigMgrBase::finalConfig(&this->level_tag_config_mgr, this) | retey;
  retfa = data::CustomLevelExcelConfigMgrBase::finalConfig(&this->custom_dungeon_config_mgr, this) | retez;
  retfb = data::FireworksExcelConfigMgrBase::finalConfig(&this->fireworks_config_mgr, this) | retfa;
  retfc = data::ActivityPotionExcelConfigMgrBase::finalConfig(&this->activity_potion_config_mgr, this) | retfb;
  retfd = data::ActivityTanukiTravelExcelConfigMgrBase::finalConfig(&this->activity_tanuki_travel_config_mgr, this) | retfc;
  retfe = data::GCGGameExcelConfigMgrBase::finalConfig(&this->gcg_game_config_mgr, this) | retfd;
  retff = data::GCGDeckExcelConfigMgrBase::finalConfig(&this->gcg_deck_config_mgr, this) | retfe;
  retfg = data::GCGPlayingExcelConfigMgrBase::finalConfig(&this->gcg_playing_config_mgr, this) | retff;
  retfh = data::GCGGrowthExcelConfigMgrBase::finalConfig(&this->gcg_growth_config_mgr, this) | retfg;
  retfi = data::ActivityMichiaeMatsuriExcelConfigMgrBase::finalConfig(&this->activity_michiae_matsuri_config_mgr, this) | retfh;
  retfj = data::MultistageExcelConfigMgrBase::finalConfig(&this->multistage_config_mgr, this) | retfi;
  retfk = data::ActivityBartenderExcelConfigMgrBase::finalConfig(&this->activity_bartender_config_mgr, this) | retfj;
  retfl = data::DisplayItemExcelConfigMgrBase::finalConfig(&this->display_item_config_mgr, this) | retfk;
  retfm = data::UIInteractExcelConfigMgrBase::finalConfig(&this->ui_interact_config_mgr, this) | retfl;
  retfn = data::ShareCDExcelConfigMgrBase::finalConfig(&this->share_cd_config_mgr, this) | retfm;
  retfo = data::ActivityCrystalLinkExcelConfigMgrBase::finalConfig(&this->activity_crystal_link_config_mgr, this) | retfn;
  retfp = ActivityIrodoriExcelConfigMgr::finalConfig(&this->activity_irodori_config_mgr, this) | retfo;
  retfq = data::ActivitySpiceExcelConfigMgrBase::finalConfig(&this->activity_spice_config_mgr, this) | retfp;
  retfr = data::ActivityPhotographExcelConfigMgrBase::finalConfig(&this->activity_photograph_config_mgr, this) | retfq;
  retfs = data::GroupTagExcelConfigMgrBase::finalConfig(&this->group_tag_config_mgr, this) | retfr;
  retft = data::ActivityGachaExcelConfigMgrBase::finalConfig(&this->activity_gacha_config_mgr, this) | retfs;
  retfu = data::ActivityLumianceStoneChallengeExcelConfigMgrBase::finalConfig(
            &this->activity_luminance_stone_challenge_config_mgr,
            this) | retft;
  retfv = data::ActivityRogueDiaryExcelConfigMgrBase::finalConfig(&this->activity_rogue_diary_config_mgr, this) | retfu;
  retfw = data::GadgetArgumentExcelConfigMgrBase::finalConfig(&this->gadget_argument_config_mgr, this) | retfv;
  retfx = data::ActivityGearExcelConfigMgrBase::finalConfig(&this->activity_gear_config_mgr, this) | retfw;
  retfy = data::ActivitySummerTimeV2ExcelConfigMgrBase::finalConfig(&this->activity_summer_time_v2_mgr, this) | retfx;
  retfz = data::CatalogExcelConfigMgrBase::finalConfig(&this->catalog_config_mgr, this) | retfy;
  retga = data::RegionPlayLevelExcelConfigMgrBase::finalConfig(&this->region_play_level_config_mgr, this) | retfz;
  retgb = data::ActivityIslandPartyExcelConfigMgrBase::finalConfig(&this->activity_island_party_mgr, this) | retga;
  retgc = data::ActivityGravenInnocenceExcelConfigMgrBase::finalConfig(&this->activity_graven_innocence_mgr, this) | retgb;
  retgd = data::ActivityInstableSprayExcelConfigMgrBase::finalConfig(&this->activity_instable_spray_mgr, this) | retgc;
  retge = data::ActivityMuqadasPotionExcelConfigMgrBase::finalConfig(&this->activity_muqadas_potion_mgr, this) | retgd;
  retgf = data::ActivityTreasureSeelieExcelConfigMgrBase::finalConfig(&this->activity_treasure_seelie_config_mgr, this) | retge;
  retgg = data::InferenceExcelConfigMgrBase::finalConfig(&this->inference_config_mgr, this) | retgf;
  retgh = data::ActivityWindFieldConfigMgrBase::finalConfig(&this->activity_wind_field_mgr, this) | retgg;
  retgi = data::ActivityVintageExcelConfigMgrBase::finalConfig(&this->activity_vintage_config_mgr, this) | retgh;
  retgj = data::ActivityRockBoardExploreExcelConfigMgrBase::finalConfig(
            &this->activity_rock_board_explore_config_mgr,
            this) | retgi;
  retgk = data::ActivityVintageMarketExcelConfigMgrBase::finalConfig(&this->activity_vintage_market_config_mgr, this) | retgj;
  retgl = data::ActivityFungusFighterExcelConfigMgrBase::finalConfig(&this->activity_fungus_fighter_config_mgr, this) | retgk;
  retgm = data::ActivityCharAmusementExcelConfigMgrBase::finalConfig(&this->activity_char_amusement_config_mgr, this) | retgl;
  retgn = data::ActivityEffigyChallengeV2ExcelConfigMgrBase::finalConfig(
            &this->activity_effigy_challenge_v2_config_mgr,
            this) | retgm;
  retgo = data::RenameExcelConfigMgrBase::finalConfig(&this->rename_config_mgr, this) | retgn;
  retgp = data::ActivityCoinCollectExcelConfigMgrBase::finalConfig(&this->activity_coin_collect_config_mgr, this) | retgo;
  retgq = data::ActivityBrickBreakerExcelConfigMgrBase::finalConfig(&this->activity_brick_breaker_config_mgr, this) | retgp;
  retgr = data::ActivityElectroherculesBattleExcelConfigMgrBase::finalConfig(
            &this->activity_electrohercules_battle_config_mgr,
            this) | retgq;
  retgs = data::ActivityTeamChainExcelConfigMgrBase::finalConfig(&this->activity_team_chain_config_mgr, this) | retgr;
  retgt = data::ActivitySeaLampV3ExcelConfigMgrBase::finalConfig(&this->activity_sea_lamp_v3_config_mgr, this) | retgs;
  if ( data::ActivityDuelHeartConfigMgrBase::finalConfig(&this->activity_duel_heart_config_mgr, this) | retgt )
  {
    if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 63) & 7) >= *(_BYTE *)(((v1 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "finalConfig",
      247);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v4, (const char (*)[18])"loadConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v183 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 257: range 000000000CD549A8-000000000CD549BB
HK4EDesignConfig *__cdecl TxtConfigMgr::getConfig(TxtConfigMgr *const this)
{
  return (HK4EDesignConfig *)&this[-1].activity_coin_collect_config_mgr.coin_collect_skill_excel_config_map._M_h._M_single_bucket;
};

// Line 263: range 000000000CD549BC-000000000CD549CF
const HK4EDesignConfig *__cdecl TxtConfigMgr::getConfig(const TxtConfigMgr *const this)
{
  return (const HK4EDesignConfig *)&this[-1].activity_coin_collect_config_mgr.coin_collect_skill_excel_config_map._M_h._M_single_bucket;
};

// Line 269: range 000000000CD549D0-000000000CD549EF
const std::string *__cdecl TxtConfigMgr::getRegionName[abi:cxx11](TxtConfigMgr *const this)
{
  return &TxtConfigMgr::getConfig(this)->region_name;
};

// Line 275: range 000000000CD549F0-000000000CD558EC
int32_t __cdecl TxtConfigMgr::checkMuipMailItem(TxtConfigMgr *const this, const proto::ItemParamBin *item_param_bin)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::uint32 v6; // edx
  char v7; // al
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  __int64 v9; // rsi
  int ItemType; // eax
  const char *v12; // rsi
  common::milog::MiLogStream *v13; // r14
  uint32_t MuipMailHcoinLimit; // edx
  char v15; // al
  const char *v17; // rsi
  common::milog::MiLogStream *v18; // r14
  uint32_t MuipMailScoinLimit; // edx
  char v20; // al
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  const char *v27; // rsi
  common::milog::MiLogStream *v28; // r14
  uint32_t MuipMailAvatarLimit; // edx
  char v30; // al
  uint32_t MuipMailEquipLimit; // edx
  char v32; // al
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  int v36; // edx
  ConstValueExcelConfigMgr *p_const_value_config_mgr; // rcx
  __int64 v38; // rsi
  uint32_t MuipMailItemLimit; // edx
  char v40; // al
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  int32_t result; // eax
  const proto::ItemParamBin *item_param_bina; // [rsp+0h] [rbp-290h]
  google::protobuf::uint32 count; // [rsp+10h] [rbp-280h]
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+18h] [rbp-278h]
  char v48[624]; // [rsp+20h] [rbp-270h] BYREF

  item_param_bina = item_param_bin;
  v3 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 4 11 item_id:276 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 21 equip_count_li"
                        "mit:321 112 4 20 item_count_limit:334 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 3"
                        "20 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TxtConfigMgr::checkMuipMailItem;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -202116109;
  v6 = proto::ItemParamBin::item_id(item_param_bin);
  v7 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(item_param_bin) = v7 != 0;
    __asan_report_store4(v3 + 32, item_param_bin);
  }
  *(_DWORD *)(v3 + 32) = v6;
  count = proto::ItemParamBin::count(item_param_bina);
  p_item_config_mgr = &this->item_config_mgr;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v3 + 32);
  v9 = *(unsigned int *)(v3 + 32);
  ItemType = ItemExcelConfigMgr::getItemType(p_item_config_mgr, v9);
  if ( ItemType > 4 )
    goto LABEL_69;
  if ( ItemType >= 3 )
  {
    MuipMailEquipLimit = ConstValueExcelConfigMgr::getMuipMailEquipLimit(&this->const_value_config_mgr);
    v32 = *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000);
    if ( v32 != 0 && v32 <= 3 )
    {
      LOBYTE(v9) = v32 != 0;
      __asan_report_store4(v3 + 96, v9);
    }
    *(_DWORD *)(v3 + 96) = MuipMailEquipLimit;
    if ( count <= *(_DWORD *)(v3 + 96) )
    {
      v36 = 1;
    }
    else
    {
      if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_config_mgr.cpp",
        "checkMuipMailItem",
        324);
      v33 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
              (common::milog::MiLogStream *const)(v3 + 448),
              (const char (*)[8])"ItemId:");
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v3 + 32));
      v35 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v34, (const char (*)[15])" exceed limit:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v3 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 642;
      v36 = 0;
    }
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v36 )
      goto LABEL_69;
  }
  else if ( ItemType == 1 )
  {
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 32);
    if ( *(_DWORD *)(v3 + 32) == 203 )
    {
      if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_config_mgr.cpp",
        "checkMuipMailItem",
        286);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        (common::milog::MiLogStream *const)(v3 + 128),
        (const char (*)[27])"Forbid mcoin by muip mail!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      v2 = 1311;
    }
    else
    {
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      if ( *(_DWORD *)(v3 + 32) == 201
        && count > ConstValueExcelConfigMgr::getMuipMailHcoinLimit(&this->const_value_config_mgr) )
      {
        if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_config_mgr.cpp",
          "checkMuipMailItem",
          292);
        v12 = "Hcoin exceed limit:";
        v13 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                (common::milog::MiLogStream *const)(v3 + 192),
                (const char (*)[20])"Hcoin exceed limit:");
        MuipMailHcoinLimit = ConstValueExcelConfigMgr::getMuipMailHcoinLimit(&this->const_value_config_mgr);
        v15 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v15 != 0 && v15 <= 3 )
        {
          LOBYTE(v12) = v15 != 0;
          __asan_report_store4(v3 + 48, v12);
        }
        *(_DWORD *)(v3 + 48) = MuipMailHcoinLimit;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        v2 = 1312;
      }
      else
      {
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 32);
        if ( *(_DWORD *)(v3 + 32) != 202
          || count <= ConstValueExcelConfigMgr::getMuipMailScoinLimit(&this->const_value_config_mgr) )
        {
          goto LABEL_69;
        }
        if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_config_mgr.cpp",
          "checkMuipMailItem",
          298);
        v17 = "Scoin exceed limit:";
        v18 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[20])"Scoin exceed limit:");
        MuipMailScoinLimit = ConstValueExcelConfigMgr::getMuipMailScoinLimit(&this->const_value_config_mgr);
        v20 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
        if ( v20 != 0 && v20 <= 3 )
        {
          LOBYTE(v17) = v20 != 0;
          __asan_report_store4(v3 + 64, v17);
        }
        *(_DWORD *)(v3 + 64) = MuipMailScoinLimit;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 64));
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        v2 = 1313;
      }
    }
  }
  else
  {
    if ( ItemType != 2 )
    {
LABEL_69:
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
      p_const_value_config_mgr = &this->const_value_config_mgr;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      v38 = *(unsigned int *)(v3 + 32);
      MuipMailItemLimit = ConstValueExcelConfigMgr::findMuipMailItemLimit(p_const_value_config_mgr, v38);
      v40 = *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000);
      if ( v40 != 0 && v40 <= 3 )
      {
        LOBYTE(v38) = v40 != 0;
        __asan_report_store4(v3 + 112, v38);
      }
      *(_DWORD *)(v3 + 112) = MuipMailItemLimit;
      if ( count <= *(_DWORD *)(v3 + 112) )
      {
        v2 = 0;
      }
      else
      {
        *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_config_mgr.cpp",
          "checkMuipMailItem",
          337);
        v41 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                (common::milog::MiLogStream *const)(v3 + 512),
                (const char (*)[8])"ItemId:");
        v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v41,
                (const unsigned int *)(v3 + 32));
        v43 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v42, (const char (*)[15])" exceed limit:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, (const unsigned int *)(v3 + 112));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
        v2 = 1316;
      }
      goto LABEL_78;
    }
    p_material_config_mgr = &this->material_config_mgr;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 32);
    material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                            p_material_config_mgr,
                            *(_DWORD *)(v3 + 32));
    if ( material_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)material_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&material_config_ptr->material_type);
      }
      if ( material_config_ptr->material_type != MATERIAL_AVATAR
        || count <= ConstValueExcelConfigMgr::getMuipMailAvatarLimit(&this->const_value_config_mgr) )
      {
        goto LABEL_69;
      }
      if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 384, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 384),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_config_mgr.cpp",
        "checkMuipMailItem",
        313);
      v25 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
              (common::milog::MiLogStream *const)(v3 + 384),
              (const char (*)[13])"AavatarCard:");
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 32));
      v27 = " exceed limit:";
      v28 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v26, (const char (*)[15])" exceed limit:");
      MuipMailAvatarLimit = ConstValueExcelConfigMgr::getMuipMailAvatarLimit(&this->const_value_config_mgr);
      v30 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
      if ( v30 != 0 && v30 <= 3 )
      {
        LOBYTE(v27) = v30 != 0;
        __asan_report_store4(v3 + 80, v27);
      }
      *(_DWORD *)(v3 + 80) = MuipMailAvatarLimit;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 80));
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      v2 = 1315;
    }
    else
    {
      if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_config_mgr.cpp",
        "checkMuipMailItem",
        308);
      v22 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              (common::milog::MiLogStream *const)(v3 + 320),
              (const char (*)[25])"findMaterialExcelConfig ");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      v2 = 1314;
    }
  }
LABEL_78:
  result = v2;
  if ( v48 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 345: range 000000000CD558EE-000000000CD57B29
int32_t __cdecl TxtConfigMgr::checkItemParamBin(
        const TxtConfigMgr *const this,
        const proto::ItemParamBin *item_param_bin,
        data::ItemLimitType item_limit_type)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  google::protobuf::uint32 v7; // edx
  char v8; // al
  google::protobuf::uint32 v9; // edx
  char v10; // al
  google::protobuf::uint32 v11; // edx
  char v12; // al
  google::protobuf::uint32 v13; // edx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  __int64 v17; // rsi
  data::ItemType ItemType; // edx
  char v19; // al
  int v20; // eax
  unsigned int v21; // eax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v43; // rax
  uint32_t v44; // ecx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  common::milog::MiLogStream *v56; // rax
  uint32_t stack_limit; // ecx
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  WeaponExcelConfigMgr *p_weapon_config_mgr; // rcx
  uint32_t WeaponMaxPromoteLevel; // edx
  char v70; // al
  __int64 v71; // rsi
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  int v77; // eax
  WeaponExcelConfigMgr *v78; // rcx
  int v79; // esi
  uint32_t v80; // edx
  __int64 v81; // rsi
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rcx
  __int64 v85; // rsi
  common::milog::MiLogStream *v86; // rax
  uint32_t unlock_max_level; // ecx
  char v88; // al
  WeaponExcelConfigMgr *v89; // rdi
  uint32_t v90; // edx
  __int64 v91; // rsi
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  uint32_t v94; // ecx
  char v95; // al
  unsigned int v96; // ecx
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rax
  common::milog::MiLogStream *v101; // rax
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rax
  common::milog::MiLogStream *v108; // r14
  __int64 v109; // rsi
  const proto::ItemParamBin *item_param_bina; // [rsp+10h] [rbp-560h]
  const data::HomeWorldFurnitureExcelConfig *furniture_config_ptr; // [rsp+20h] [rbp-550h]
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+28h] [rbp-548h]
  const data::WeaponPromoteExcelConfig *prev_promote_config_ptr; // [rsp+30h] [rbp-540h]
  const data::WeaponPromoteExcelConfig *promote_config_ptr; // [rsp+38h] [rbp-538h]
  char v117[1328]; // [rsp+40h] [rbp-530h] BYREF

  item_param_bina = item_param_bin;
  v4 = (unsigned __int64)v117;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1280LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "26 48 4 11 item_id:346 64 4 9 count:347 80 4 9 level:348 96 4 17 promote_level:349 112 4 13 item"
                        "_type:357 128 4 21 max_promote_level:456 144 4 25 prev_unlock_max_level:463 160 4 9 <unknown> 17"
                        "6 4 24 cur_unlock_max_level:480 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 "
                        "9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9"
                        " <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9"
                        " <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = TxtConfigMgr::checkItemParamBin;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -234556924;
  v6[536862725] = -234556924;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -218959118;
  v6[536862739] = -218959118;
  v6[536862741] = -218959118;
  v6[536862743] = -218959118;
  v6[536862745] = -218959118;
  v6[536862747] = -218959118;
  v6[536862749] = -218959118;
  v6[536862751] = -218959118;
  v6[536862753] = -218959118;
  v6[536862755] = -218959118;
  v6[536862757] = -218959118;
  v6[536862759] = -202116109;
  v7 = proto::ItemParamBin::item_id(item_param_bin);
  v8 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(item_param_bin) = v8 != 0;
    __asan_report_store4(v4 + 48, item_param_bin);
  }
  *(_DWORD *)(v4 + 48) = v7;
  v9 = proto::ItemParamBin::count(item_param_bina);
  v10 = *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(item_param_bin) = v10 != 0;
    __asan_report_store4(v4 + 64, item_param_bin);
  }
  *(_DWORD *)(v4 + 64) = v9;
  v11 = proto::ItemParamBin::level(item_param_bina);
  v12 = *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(item_param_bin) = v12 != 0;
    __asan_report_store4(v4 + 80, item_param_bin);
  }
  *(_DWORD *)(v4 + 80) = v11;
  v13 = proto::ItemParamBin::promote_level(item_param_bina);
  v14 = *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(item_param_bin) = v14 != 0;
    __asan_report_store4(v4 + 96, item_param_bin);
  }
  *(_DWORD *)(v4 + 96) = v13;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v4 + 64);
  if ( !*(_DWORD *)(v4 + 64) )
  {
    if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "checkItemParamBin",
      353);
    v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            (common::milog::MiLogStream *const)(v4 + 192),
            (const char (*)[29])"addItem count is 0, item_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
    v3 = 647;
    goto LABEL_173;
  }
  p_item_config_mgr = &this->item_config_mgr;
  if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v4 + 48);
  v17 = *(unsigned int *)(v4 + 48);
  ItemType = ItemExcelConfigMgr::getItemType(p_item_config_mgr, v17);
  v19 = *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v17) = v19 != 0;
    __asan_report_store4(v4 + 112, v17);
  }
  *(_DWORD *)(v4 + 112) = ItemType;
  v20 = *(_DWORD *)(v4 + 112);
  if ( v20 == 6 )
  {
    p_home_config_mgr = &this->home_config_mgr;
    if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v4 + 48);
    furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(
                             p_home_config_mgr,
                             *(_DWORD *)(v4 + 48));
    if ( !furniture_config_ptr )
    {
      if ( *(char *)(((v4 + 704) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 735) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 735) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 704, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 704),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_config_mgr.cpp",
        "checkItemParamBin",
        437);
      v56 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              (common::milog::MiLogStream *const)(v4 + 704),
              (const char (*)[49])"findHomeWorldFurnitureExcelConfig fail, item_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 704));
      v3 = -1;
      goto LABEL_173;
    }
    if ( *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->stack_limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)furniture_config_ptr - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&furniture_config_ptr->stack_limit >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&furniture_config_ptr->stack_limit);
    }
    stack_limit = furniture_config_ptr->stack_limit;
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v4 + 64);
    if ( stack_limit < *(_DWORD *)(v4 + 64) )
    {
      if ( *(char *)(((v4 + 768) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 799) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 799) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 768, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 768),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_config_mgr.cpp",
        "checkItemParamBin",
        442);
      v58 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              (common::milog::MiLogStream *const)(v4 + 768),
              (const char (*)[45])"furniture count exceed stack limit, item_id:");
      v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, (const unsigned int *)(v4 + 48));
      v60 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v59, (const char (*)[8])" count:");
      v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, (const unsigned int *)(v4 + 64));
      v62 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v61, (const char (*)[14])" stack_limit:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, &furniture_config_ptr->stack_limit);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 768));
      v3 = 642;
      goto LABEL_173;
    }
  }
  else
  {
    if ( v20 > 4 )
    {
LABEL_101:
      if ( *(char *)(((v4 + 832) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 863) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 863) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 832, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 832),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_config_mgr.cpp",
        "checkItemParamBin",
        448);
      v63 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
              (common::milog::MiLogStream *const)(v4 + 832),
              (const char (*)[10])"item_id: ");
      v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, (const unsigned int *)(v4 + 48));
      v65 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v64, (const char (*)[8])" count:");
      v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, (const unsigned int *)(v4 + 64));
      v67 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v66, (const char (*)[24])byte_1A18F420);
      common::milog::MiLogStream::operator<<<data::ItemType,(data::ItemType*)0>(v67, (const data::ItemType *)(v4 + 112));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 832));
      v3 = -1;
      goto LABEL_173;
    }
    if ( v20 >= 3 )
    {
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 64);
      if ( *(_DWORD *)(v4 + 64) > 0xAu )
      {
        if ( *(char *)(((v4 + 640) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 640, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 640),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_config_mgr.cpp",
          "checkItemParamBin",
          428);
        v50 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                (common::milog::MiLogStream *const)(v4 + 640),
                (const char (*)[10])"item_id: ");
        v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v50,
                (const unsigned int *)(v4 + 48));
        v52 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v51, (const char (*)[8])" count:");
        v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v52,
                (const unsigned int *)(v4 + 64));
        v54 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v53, (const char (*)[17])byte_1A18F320);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &TxtConfigMgr::max_equip_max_count);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 640));
        v3 = 642;
        goto LABEL_173;
      }
      goto LABEL_104;
    }
    if ( v20 != 1 )
    {
      if ( v20 != 2 )
        goto LABEL_101;
      p_material_config_mgr = &this->material_config_mgr;
      if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 48);
      material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                              p_material_config_mgr,
                              *(_DWORD *)(v4 + 48));
      if ( !material_config_ptr )
      {
        if ( *(char *)(((v4 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_config_mgr.cpp",
          "checkItemParamBin",
          414);
        v43 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                (common::milog::MiLogStream *const)(v4 + 512),
                (const char (*)[39])"findMaterialExcelConfig fail, item_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 512));
        v3 = -1;
        goto LABEL_173;
      }
      if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->stack_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&material_config_ptr->stack_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&material_config_ptr->stack_limit);
      }
      v44 = material_config_ptr->stack_limit;
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 64);
      if ( v44 < *(_DWORD *)(v4 + 64) )
      {
        if ( *(char *)(((v4 + 576) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 576, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 576),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_config_mgr.cpp",
          "checkItemParamBin",
          419);
        v45 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                (common::milog::MiLogStream *const)(v4 + 576),
                (const char (*)[40])"item count exceed stack limit, item_id:");
        v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v45,
                (const unsigned int *)(v4 + 48));
        v47 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v46, (const char (*)[8])" count:");
        v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v47,
                (const unsigned int *)(v4 + 64));
        v49 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v48, (const char (*)[14])" stack_limit:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, &material_config_ptr->stack_limit);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 576));
        v3 = 617;
        goto LABEL_173;
      }
      goto LABEL_104;
    }
    if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v4 + 48);
    v21 = *(_DWORD *)(v4 + 48);
    if ( v21 != 203 )
    {
      if ( v21 <= 0xCB )
      {
        if ( v21 == 202 )
        {
          if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v4 + 64);
          if ( *(_DWORD *)(v4 + 64) > 0x98967Fu )
          {
            if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 320, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 320),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_config_mgr.cpp",
              "checkItemParamBin",
              377);
            v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                    (common::milog::MiLogStream *const)(v4 + 320),
                    (const char (*)[10])"item_id: ");
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    (const unsigned int *)(v4 + 48));
            v29 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v28, (const char (*)[8])" count:");
            v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v29,
                    (const unsigned int *)(v4 + 64));
            v31 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    v30,
                    (const char (*)[23])byte_1A18F140);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v31,
              &TxtConfigMgr::max_scoin_max_count);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
            v3 = 640;
            goto LABEL_173;
          }
          goto LABEL_104;
        }
        if ( v21 > 0x95 )
        {
          if ( v21 == 201 )
          {
            if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v4 + 64);
            if ( *(_DWORD *)(v4 + 64) > 0x270Fu )
            {
              if ( *(char *)(((v4 + 256) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) != 0
                && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v4 + 256, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v4 + 256),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_config_mgr.cpp",
                "checkItemParamBin",
                369);
              v22 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      (common::milog::MiLogStream *const)(v4 + 256),
                      (const char (*)[10])"item_id: ");
              v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v22,
                      (const unsigned int *)(v4 + 48));
              v24 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" count:");
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v24,
                      (const unsigned int *)(v4 + 64));
              v26 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                      v25,
                      (const char (*)[23])byte_1A18F100);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                &TxtConfigMgr::max_hcoin_max_count);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
              v3 = 640;
              goto LABEL_173;
            }
            goto LABEL_104;
          }
        }
        else if ( v21 >= 0x94 )
        {
          if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v4 + 64);
          if ( *(_DWORD *)(v4 + 64) > 0xF423Fu )
          {
            if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 384, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 384),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_config_mgr.cpp",
              "checkItemParamBin",
              386);
            v32 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                    (common::milog::MiLogStream *const)(v4 + 384),
                    (const char (*)[10])"item_id: ");
            v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v32,
                    (const unsigned int *)(v4 + 48));
            v34 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v33, (const char (*)[8])" count:");
            v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v34,
                    (const unsigned int *)(v4 + 64));
            v36 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    v35,
                    (const char (*)[35])byte_1A18F180);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v36,
              &TxtConfigMgr::max_vintage_coin_max_count);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 384));
            v3 = 640;
            goto LABEL_173;
          }
          goto LABEL_104;
        }
      }
      goto LABEL_56;
    }
    if ( item_limit_type != ITEM_LIMIT_REBATE )
    {
LABEL_56:
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 64);
      if ( *(_DWORD *)(v4 + 64) > 0x270Fu )
      {
        if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 448, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_config_mgr.cpp",
          "checkItemParamBin",
          402);
        v37 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                (common::milog::MiLogStream *const)(v4 + 448),
                (const char (*)[10])"item_id: ");
        v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v37,
                (const unsigned int *)(v4 + 48));
        v39 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v38, (const char (*)[8])" count:");
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v39,
                (const unsigned int *)(v4 + 64));
        v41 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v40, (const char (*)[29])byte_1A18F1E0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v41,
          &TxtConfigMgr::max_virtual_material_max_count);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 448));
        v3 = 640;
        goto LABEL_173;
      }
    }
  }
LABEL_104:
  if ( *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v4 + 112);
  if ( *(_DWORD *)(v4 + 112) == 4 )
  {
    p_weapon_config_mgr = &this->weapon_config_mgr;
    if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v4 + 48);
    v71 = *(unsigned int *)(v4 + 48);
    WeaponMaxPromoteLevel = WeaponExcelConfigMgr::getWeaponMaxPromoteLevel(p_weapon_config_mgr, v71);
    v70 = *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000);
    LOBYTE(v71) = v70 != 0;
    if ( v70 != 0 && v70 <= 3 )
      __asan_report_store4(v4 + 128, v71);
    *(_DWORD *)(v4 + 128) = WeaponMaxPromoteLevel;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v4 + 96);
    if ( *(_DWORD *)(v4 + 96) > *(_DWORD *)(v4 + 128) )
    {
      if ( *(char *)(((v4 + 896) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 927) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 927) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 896, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 896),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_config_mgr.cpp",
        "checkItemParamBin",
        459);
      v72 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
              (common::milog::MiLogStream *const)(v4 + 896),
              (const char (*)[10])"item_id: ");
      v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, (const unsigned int *)(v4 + 48));
      v74 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v73, (const char (*)[16])" promote_level:");
      v75 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v74, (const unsigned int *)(v4 + 96));
      v76 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v75, (const char (*)[27])byte_1A18F4A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v76, (const unsigned int *)(v4 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 896));
      v3 = 644;
      v77 = 0;
      goto LABEL_159;
    }
    if ( *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v4 + 144, v71);
    *(_DWORD *)(v4 + 144) = 0;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v4 + 96);
    if ( *(_DWORD *)(v4 + 96) )
    {
      v78 = &this->weapon_config_mgr;
      v79 = *(_DWORD *)(v4 + 96) - 1;
      if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 48);
      v80 = v79;
      v81 = *(unsigned int *)(v4 + 48);
      prev_promote_config_ptr = WeaponExcelConfigMgr::findWeaponPromoteExcelConfig(v78, v81, v80);
      if ( !prev_promote_config_ptr )
      {
        if ( *(char *)(((v4 + 960) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 991) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 991) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 960, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 960),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_config_mgr.cpp",
          "checkItemParamBin",
          469);
        v82 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                (common::milog::MiLogStream *const)(v4 + 960),
                (const char (*)[10])"item_id: ");
        v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v82,
                (const unsigned int *)(v4 + 48));
        v84 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v83,
                (const char (*)[16])" promote_level:");
        if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v4 + 96);
        v85 = (unsigned int)(*(_DWORD *)(v4 + 96) - 1);
        if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v4 + 160, v85);
        *(_DWORD *)(v4 + 160) = v85;
        v86 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v84,
                (const unsigned int *)(v4 + 160));
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          v86,
          (const char (*)[26])" promote config not found");
        *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 960));
        v3 = 5;
        v77 = 0;
        goto LABEL_159;
      }
      if ( *(_BYTE *)(((unsigned __int64)&prev_promote_config_ptr->unlock_max_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&prev_promote_config_ptr->unlock_max_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&prev_promote_config_ptr->unlock_max_level);
      }
      unlock_max_level = prev_promote_config_ptr->unlock_max_level;
      v88 = *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000);
      if ( v88 != 0 && v88 <= 3 )
      {
        LOBYTE(v81) = v88 != 0;
        __asan_report_store4(v4 + 144, v81);
      }
      *(_DWORD *)(v4 + 144) = unlock_max_level;
    }
    v89 = &this->weapon_config_mgr;
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) <= 3 )
    {
      v89 = (WeaponExcelConfigMgr *)(v4 + 96);
      __asan_report_load4(v4 + 96);
    }
    v90 = *(_DWORD *)(v4 + 96);
    if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
    {
      v89 = (WeaponExcelConfigMgr *)(v4 + 48);
      __asan_report_load4(v4 + 48);
    }
    v91 = *(unsigned int *)(v4 + 48);
    promote_config_ptr = WeaponExcelConfigMgr::findWeaponPromoteExcelConfig(v89, v91, v90);
    if ( promote_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&promote_config_ptr->unlock_max_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&promote_config_ptr->unlock_max_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&promote_config_ptr->unlock_max_level);
      }
      v94 = promote_config_ptr->unlock_max_level;
      v95 = *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000);
      if ( v95 != 0 && v95 <= 3 )
      {
        LOBYTE(v91) = v95 != 0;
        __asan_report_store4(v4 + 176, v91);
      }
      *(_DWORD *)(v4 + 176) = v94;
      if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 80);
      if ( *(_DWORD *)(v4 + 80) > *(_DWORD *)(v4 + 176) )
        goto LABEL_179;
      v96 = *(_DWORD *)(v4 + 80);
      if ( *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 144);
      if ( v96 >= *(_DWORD *)(v4 + 144) )
      {
        v77 = 1;
      }
      else
      {
LABEL_179:
        if ( *(char *)(((v4 + 1088) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 1119) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 1119) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 1088, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 1088),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_config_mgr.cpp",
          "checkItemParamBin",
          483);
        v97 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                (common::milog::MiLogStream *const)(v4 + 1088),
                (const char (*)[10])"item_id: ");
        v98 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v97,
                (const unsigned int *)(v4 + 48));
        v99 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                v98,
                (const char (*)[41])" level and promote_level not fit! level:");
        v100 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v99,
                 (const unsigned int *)(v4 + 80));
        v101 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 v100,
                 (const char (*)[16])" promote_level:");
        v102 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v101,
                 (const unsigned int *)(v4 + 96));
        v103 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                 v102,
                 (const char (*)[24])" prev_unlock_max_level:");
        v104 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v103,
                 (const unsigned int *)(v4 + 144));
        v105 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                 v104,
                 (const char (*)[23])" cur_unlock_max_level:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v105, (const unsigned int *)(v4 + 176));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1088));
        v3 = 645;
        v77 = 0;
      }
    }
    else
    {
      if ( *(char *)(((v4 + 1024) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 1055) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 1055) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 1024, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 1024),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_config_mgr.cpp",
        "checkItemParamBin",
        477);
      v92 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
              (common::milog::MiLogStream *const)(v4 + 1024),
              (const char (*)[10])"item_id: ");
      v93 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v92, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v93, (const char (*)[23])" promote_level invalid");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1024));
      v3 = 5;
      v77 = 0;
    }
LABEL_159:
    if ( v77 != 1 )
      goto LABEL_173;
LABEL_172:
    v3 = 0;
    goto LABEL_173;
  }
  if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v4 + 80);
  if ( !*(_DWORD *)(v4 + 80) )
  {
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v4 + 96);
    if ( !*(_DWORD *)(v4 + 96) )
      goto LABEL_172;
  }
  if ( *(char *)(((v4 + 1152) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 1183) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 1183) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 1152, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v4 + 1152),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_config_mgr.cpp",
    "checkItemParamBin",
    490);
  v106 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
           (common::milog::MiLogStream *const)(v4 + 1152),
           (const char (*)[9])"item_id ");
  v107 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v106, (const unsigned int *)(v4 + 48));
  v108 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           v107,
           (const char (*)[46])" level or promote_level != 0, item_param_bin:");
  v109 = (__int64)item_param_bina;
  if ( *(char *)(((v4 + 1216) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 1247) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 1247) >> 3) + 0x7FFF8000) )
  {
    v109 = 32LL;
    __asan_report_store_n(v4 + 1216, 32LL);
  }
  google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)(v4 + 1216), (google::protobuf::Message *)v109);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v108, (const std::string *)(v4 + 1216));
  std::string::~string((void *)(v4 + 1216));
  *(_DWORD *)(((v4 + 1216) >> 3) + 0x7FFF8000) = -117901064;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1152));
  v3 = 643;
LABEL_173:
  if ( v117 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8044) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF804C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8054) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF805C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8064) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF806C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8074) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF807C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8084) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF808C) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8094) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF809C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1280LL, v117);
  }
  return v3;
};

// Line 499: range 000000000CD57B2A-000000000CD582FB
int32_t __cdecl TxtConfigMgr::checkMergeRewardIds(
        const TxtConfigMgr *const this,
        const std::vector<unsigned int> *reward_id_vec,
        data::ItemLimitType item_limit_type)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // r14
  __int64 v10; // rsi
  int v11; // edx
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-1E4h]
  int32_t reta; // [rsp+2Ch] [rbp-1E4h]
  std::vector<proto::ItemParamBin> *__for_range; // [rsp+30h] [rbp-1E0h]
  __gnu_cxx::__normal_iterator<proto::ItemParamBin*,std::vector<proto::ItemParamBin> >::reference item_param_bin; // [rsp+38h] [rbp-1D8h]
  char v18[464]; // [rsp+40h] [rbp-1D0h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(416LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 8 15 __for_begin:512 64 8 13 __for_end:512 96 24 22 item_param_bin_vec:500 160 32 9 <unknow"
                        "n> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = TxtConfigMgr::checkMergeRewardIds;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -202116109;
  std::vector<proto::ItemParamBin>::vector((std::vector<proto::ItemParamBin> *const)(v4 + 96));
  ret = RewardExcelConfigMgr::getItemParamsByRewardIds(
          &this->reward_config_mgr,
          reward_id_vec,
          (std::vector<proto::ItemParamBin> *)(v4 + 96));
  if ( ret )
  {
    if ( *(char *)(((v4 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_config_mgr.cpp",
      "checkMergeRewardIds",
      504);
    v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           (common::milog::MiLogStream *const)(v4 + 160),
           (const char (*)[46])"getItemParamsByRewardIds fail, reward_id_vec:");
    common::milog::MiLogStream::operator<<<unsigned int>(v7, reward_id_vec);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
    *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v3 = ret;
  }
  else if ( std::vector<proto::ItemParamBin>::empty((const std::vector<proto::ItemParamBin> *const)(v4 + 96)) )
  {
    if ( *(char *)(((v4 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 96 + 95) & 7) >= *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_config_mgr.cpp",
      "checkMergeRewardIds",
      509);
    v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           (common::milog::MiLogStream *const)(v4 + 224),
           (const char (*)[44])"item_param_bin_vec is empty, reward_id_vec:");
    common::milog::MiLogStream::operator<<<unsigned int>(v8, reward_id_vec);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
    *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v3 = -1;
  }
  else
  {
    __for_range = (std::vector<proto::ItemParamBin> *)(v4 + 96);
    if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 32, reward_id_vec);
    *(std::vector<proto::ItemParamBin>::iterator *)(v4 + 32) = std::vector<proto::ItemParamBin>::begin(__for_range);
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 64, reward_id_vec);
    *(std::vector<proto::ItemParamBin>::iterator *)(v4 + 64) = std::vector<proto::ItemParamBin>::end(__for_range);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<proto::ItemParamBin *,std::vector<proto::ItemParamBin>>(
              (const __gnu_cxx::__normal_iterator<proto::ItemParamBin*,std::vector<proto::ItemParamBin> > *)(v4 + 32),
              (const __gnu_cxx::__normal_iterator<proto::ItemParamBin*,std::vector<proto::ItemParamBin> > *)(v4 + 64)) )
      {
        v11 = 1;
        goto LABEL_26;
      }
      item_param_bin = __gnu_cxx::__normal_iterator<proto::ItemParamBin *,std::vector<proto::ItemParamBin>>::operator*((const __gnu_cxx::__normal_iterator<proto::ItemParamBin*,std::vector<proto::ItemParamBin> > *const)(v4 + 32));
      reta = TxtConfigMgr::checkItemParamBin(this, item_param_bin, item_limit_type);
      if ( reta )
        break;
      __gnu_cxx::__normal_iterator<proto::ItemParamBin *,std::vector<proto::ItemParamBin>>::operator++((__gnu_cxx::__normal_iterator<proto::ItemParamBin*,std::vector<proto::ItemParamBin> > *const)(v4 + 32));
    }
    if ( *(char *)(((v4 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_config_mgr.cpp",
      "checkMergeRewardIds",
      517);
    v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           (common::milog::MiLogStream *const)(v4 + 288),
           (const char (*)[40])"checkItemParamBin fail, item_param_bin:");
    v10 = (__int64)item_param_bin;
    if ( *(char *)(((v4 + 352) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) )
    {
      v10 = 32LL;
      __asan_report_store_n(v4 + 352, 32LL);
    }
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)(v4 + 352), (google::protobuf::Message *)v10);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)(v4 + 352));
    std::string::~string((void *)(v4 + 352));
    *(_DWORD *)(((v4 + 352) >> 3) + 0x7FFF8000) = -117901064;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 288));
    *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v3 = reta;
    v11 = 0;
LABEL_26:
    *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v11 == 1 )
      v3 = 0;
  }
  std::vector<proto::ItemParamBin>::~vector((std::vector<proto::ItemParamBin> *const)(v4 + 96));
  result = v3;
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 527: range 000000000CD582FC-000000000CD5859B
uint32_t __cdecl TxtConfigMgr::getDefaultWorldMainSceneId(const TxtConfigMgr *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t DefaultWorldId; // edx
  char v6; // al
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t result; // eax
  const data::WorldExcelConfig *world_config_ptr; // [rsp+18h] [rbp-A8h]
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 20 default_world_id:528 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TxtConfigMgr::getDefaultWorldMainSceneId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  DefaultWorldId = ConstValueExcelConfigMgr::getDefaultWorldId(&this->const_value_config_mgr);
  v6 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 48, v1);
  }
  *(_DWORD *)(v2 + 48) = DefaultWorldId;
  world_config_ptr = data::SceneExcelConfigMgrBase::findWorldExcelConfig(&this->scene_config_mgr, *(_DWORD *)(v2 + 48));
  if ( world_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&world_config_ptr->main_scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&world_config_ptr->main_scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&world_config_ptr->main_scene_id);
    }
    result = world_config_ptr->main_scene_id;
  }
  else
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_config_mgr.cpp",
      "getDefaultWorldMainSceneId",
      532);
    v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[22])"findWorldExcelConfig ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 540: range 000000000CD5859C-000000000CD588CA
int32_t __cdecl TxtConfigMgr::checkOutputControlConfig(
        const TxtConfigMgr *const this,
        const data::OutputControlConfig *output_control_config,
        data::ItemLimitType item_limit_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  const char *v9; // rax
  char v11[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 17 activity_type:546 64 8 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TxtConfigMgr::checkOutputControlConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  if ( *(char *)(((unsigned __int64)&output_control_config->activity_output_limit.is_unlimited >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &output_control_config->activity_output_limit.is_unlimited,
      output_control_config,
      &output_control_config->activity_output_limit.is_unlimited);
  if ( output_control_config->activity_output_limit.is_unlimited )
  {
    result = 0;
  }
  else
  {
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, output_control_config);
    *(_DWORD *)(v3 + 48) = 0;
    if ( NewActivityExcelConfigMgr::checkAndFindActivityTypeByItemLimitType(
           &this->new_activity_config_mgr,
           item_limit_type,
           (data::NewActivityType *)(v3 + 48)) )
    {
      if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_config_mgr.cpp",
        "checkOutputControlConfig",
        549);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [126],(char *[126])0>(v7, (const char (*)[126])byte_1A18FA20);
      v9 = data::enumValToStr(item_limit_type);
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        v9 = (const char *)__asan_report_store8(v3 + 64, byte_1A18FA20);
      *(_QWORD *)(v3 + 64) = v9;
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)(v3 + 64));
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  if ( v11 == (char *)v3 )
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
  return result;
};

// Line 557: range 000000000CD588CC-000000000CD58FEA
__int64 __fastcall TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
        const TxtConfigMgr *const this,
        uint32_t drop_id,
        data::ItemLimitType item_limit_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  const char *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  const char *v18; // rax
  const data::DropExcelConfig *drop_config_ptr; // [rsp+10h] [rbp-180h]
  const data::OutputControlLimitExcelConfig *output_control_config_ptr; // [rsp+18h] [rbp-178h]
  char v22[368]; // [rsp+20h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 11 drop_id:556 64 8 9 <unknown> 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 25"
                        "6 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TxtConfigMgr::isValidDropIdAndMatchItemLimitType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 48) = drop_id;
  drop_config_ptr = data::DropExcelConfigMgrBase::findDropExcelConfig(&this->drop_config_mgr, *(_DWORD *)(v3 + 48));
  if ( !drop_config_ptr )
  {
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_config_mgr.cpp",
      "isValidDropIdAndMatchItemLimitType",
      561);
    v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[35])"findDropExcelConfig fail, drop_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0LL;
    goto LABEL_31;
  }
  if ( *(_BYTE *)(((unsigned __int64)&drop_config_ptr->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&drop_config_ptr->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&drop_config_ptr->item_limit_type);
  }
  if ( drop_config_ptr->item_limit_type == ITEM_LIMIT_NONE )
    goto LABEL_30;
  v8 = (unsigned int)drop_config_ptr->item_limit_type;
  output_control_config_ptr = data::ItemLimitExcelConfigMgrBase::findOutputControlLimitExcelConfig(
                                &this->item_limit_config_mgr,
                                (data::ItemLimitType)v8);
  if ( !output_control_config_ptr )
  {
    if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_config_mgr.cpp",
      "isValidDropIdAndMatchItemLimitType",
      569);
    v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           (common::milog::MiLogStream *const)(v3 + 192),
           (const char (*)[52])"findOutputControlLimitExcelConfig fail, limit_type:");
    v10 = common::milog::MiLogStream::operator<<<data::ItemLimitType,(data::ItemLimitType*)0>(
            v9,
            &drop_config_ptr->item_limit_type);
    v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])" drop_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    result = 0LL;
    goto LABEL_31;
  }
  if ( *(char *)(((unsigned __int64)&output_control_config_ptr->is_ignore_item_limit_type >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &output_control_config_ptr->is_ignore_item_limit_type,
      v8,
      &output_control_config_ptr->is_ignore_item_limit_type);
  if ( output_control_config_ptr->is_ignore_item_limit_type )
    goto LABEL_30;
  if ( *(_BYTE *)(((unsigned __int64)&drop_config_ptr->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&drop_config_ptr->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&drop_config_ptr->item_limit_type);
  }
  if ( item_limit_type == drop_config_ptr->item_limit_type )
  {
LABEL_30:
    result = 1LL;
    goto LABEL_31;
  }
  if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 256, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 256),
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/txt_config_mgr.cpp",
    "isValidDropIdAndMatchItemLimitType",
    574);
  v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)(v3 + 256),
          (const char (*)[32])byte_1A18FC60);
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
  v14 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v13, (const char (*)[25])byte_1A18FCA0);
  if ( *(_BYTE *)(((unsigned __int64)&drop_config_ptr->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&drop_config_ptr->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&drop_config_ptr->item_limit_type);
  }
  v15 = data::enumValToStr(drop_config_ptr->item_limit_type);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    v15 = (const char *)__asan_report_store8(v3 + 64, byte_1A18FCA0);
  *(_QWORD *)(v3 + 64) = v15;
  v16 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v14, (const char *const *)(v3 + 64));
  v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v16, (const char (*)[21])byte_1A18FCE0);
  v18 = data::enumValToStr(item_limit_type);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    v18 = (const char *)__asan_report_store8(v3 + 96, byte_1A18FCE0);
  *(_QWORD *)(v3 + 96) = v18;
  common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v17, (const char *const *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
  result = 0LL;
LABEL_31:
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 583: range 000000000CD58FEC-000000000CD5970A
__int64 __fastcall TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
        const TxtConfigMgr *const this,
        uint32_t reward_id,
        data::ItemLimitType item_limit_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  const char *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  const char *v18; // rax
  const data::RewardExcelConfig *reward_config_ptr; // [rsp+10h] [rbp-180h]
  const data::OutputControlLimitExcelConfig *output_control_config_ptr; // [rsp+18h] [rbp-178h]
  char v22[368]; // [rsp+20h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 13 reward_id:582 64 8 9 <unknown> 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TxtConfigMgr::isValidRewardIdAndMatchItemLimitType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 48) = reward_id;
  reward_config_ptr = data::RewardExcelConfigMgrBase::findRewardExcelConfig(
                        &this->reward_config_mgr,
                        *(_DWORD *)(v3 + 48));
  if ( !reward_config_ptr )
  {
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_config_mgr.cpp",
      "isValidRewardIdAndMatchItemLimitType",
      587);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[39])"findRewardExcelConfig fail, reward_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0LL;
    goto LABEL_31;
  }
  if ( *(_BYTE *)(((unsigned __int64)&reward_config_ptr->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&reward_config_ptr->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&reward_config_ptr->item_limit_type);
  }
  if ( reward_config_ptr->item_limit_type == ITEM_LIMIT_NONE )
    goto LABEL_30;
  v8 = (unsigned int)reward_config_ptr->item_limit_type;
  output_control_config_ptr = data::ItemLimitExcelConfigMgrBase::findOutputControlLimitExcelConfig(
                                &this->item_limit_config_mgr,
                                (data::ItemLimitType)v8);
  if ( !output_control_config_ptr )
  {
    if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_config_mgr.cpp",
      "isValidRewardIdAndMatchItemLimitType",
      595);
    v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           (common::milog::MiLogStream *const)(v3 + 192),
           (const char (*)[52])"findOutputControlLimitExcelConfig fail, limit_type:");
    v10 = common::milog::MiLogStream::operator<<<data::ItemLimitType,(data::ItemLimitType*)0>(
            v9,
            &reward_config_ptr->item_limit_type);
    v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" reward_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    result = 0LL;
    goto LABEL_31;
  }
  if ( *(char *)(((unsigned __int64)&output_control_config_ptr->is_ignore_item_limit_type >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &output_control_config_ptr->is_ignore_item_limit_type,
      v8,
      &output_control_config_ptr->is_ignore_item_limit_type);
  if ( output_control_config_ptr->is_ignore_item_limit_type )
    goto LABEL_30;
  if ( *(_BYTE *)(((unsigned __int64)&reward_config_ptr->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&reward_config_ptr->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&reward_config_ptr->item_limit_type);
  }
  if ( item_limit_type == reward_config_ptr->item_limit_type )
  {
LABEL_30:
    result = 1LL;
    goto LABEL_31;
  }
  if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 256, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 256),
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/txt_config_mgr.cpp",
    "isValidRewardIdAndMatchItemLimitType",
    600);
  v12 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          (common::milog::MiLogStream *const)(v3 + 256),
          (const char (*)[34])byte_1A18FEA0);
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
  v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v13, (const char (*)[27])byte_1A18FF00);
  if ( *(_BYTE *)(((unsigned __int64)&reward_config_ptr->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&reward_config_ptr->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&reward_config_ptr->item_limit_type);
  }
  v15 = data::enumValToStr(reward_config_ptr->item_limit_type);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    v15 = (const char *)__asan_report_store8(v3 + 64, byte_1A18FF00);
  *(_QWORD *)(v3 + 64) = v15;
  v16 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v14, (const char *const *)(v3 + 64));
  v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v16, (const char (*)[21])byte_1A18FCE0);
  v18 = data::enumValToStr(item_limit_type);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    v18 = (const char *)__asan_report_store8(v3 + 96, byte_1A18FCE0);
  *(_QWORD *)(v3 + 96) = v18;
  common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v17, (const char *const *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
  result = 0LL;
LABEL_31:
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 609: range 000000000CD5970C-000000000CD59A17
bool __fastcall TxtConfigMgr::isItemAllowedByOutputControl(
        const TxtConfigMgr *const this,
        uint32_t item_id,
        data::ItemLimitType item_limit_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  const char *v9; // rax
  bool result; // al
  const data::ItemConfig *item_config_ptr; // [rsp+18h] [rbp-D8h]
  char v13[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 item_id:608 64 8 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TxtConfigMgr::isItemAllowedByOutputControl;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = item_id;
  item_config_ptr = ItemExcelConfigMgr::findItemConfig(&this->item_config_mgr, *(_DWORD *)(v3 + 48));
  if ( item_config_ptr )
  {
    if ( (unsigned __int8)std::string::empty() )
      result = 1;
    else
      result = ItemLimitExcelConfigMgr::isItemAllowedByOutputControl(
                 &this->item_limit_config_mgr,
                 *(_DWORD *)(v3 + 48),
                 &item_config_ptr->control_type,
                 item_limit_type);
  }
  else
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_config_mgr.cpp",
      "isItemAllowedByOutputControl",
      613);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[30])"findItemConfig fail, item_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])" item_limit_type:");
    v9 = data::enumValToStr(item_limit_type);
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      v9 = (const char *)__asan_report_store8(v3 + 64, " item_limit_type:");
    *(_QWORD *)(v3 + 64) = v9;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)(v3 + 64));
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    result = 0;
  }
  if ( v13 == (char *)v3 )
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
  return result;
};

// Line 625: range 000000000CD59A18-000000000CD59F4A
std::pair<int,ItemIndexKey> __cdecl TxtConfigMgr::getItemIndexKey(const TxtConfigMgr *const this, uint32_t item_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rsi
  data::ItemType item_type; // eax
  void **v7; // rsi
  const data::ReliquaryExcelConfig *v8; // rax
  uint32_t rank_level; // ecx
  char v10; // dl
  const data::WeaponExcelConfig *v11; // rax
  uint32_t v12; // ecx
  char v13; // dl
  std::pair<int,ItemIndexKey> v14; // rax
  const data::ItemConfig *item_config_ptr; // [rsp+28h] [rbp-C8h]
  const data::WeaponExcelConfig *weapon_config_ptr; // [rsp+30h] [rbp-C0h]
  const data::ReliquaryExcelConfig *reliquary_config_ptr; // [rsp+38h] [rbp-B8h]
  std::pair<int,ItemIndexKey> v19; // [rsp+44h] [rbp-ACh]
  char v20[160]; // [rsp+50h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 9 <unknown> 48 4 9 <unknown> 64 8 18 item_index_key:629 96 8 18 item_index_key:633";
  *(_QWORD *)(v2 + 16) = TxtConfigMgr::getItemIndexKey;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  item_config_ptr = ItemExcelConfigMgr::findItemConfig(&this->item_config_mgr, item_id);
  if ( item_config_ptr )
  {
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 96, item_id);
    *(_DWORD *)(v2 + 96) = 0;
    if ( *(_BYTE *)(((v2 + 100) >> 3) + 0x7FFF8000) != 0
      && (char)(((v2 + 100) & 7) + 3) >= *(_BYTE *)(((v2 + 100) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v2 + 100, (((_BYTE)v2 + 100) & 7u) + 3);
    }
    *(_DWORD *)(v2 + 100) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&item_config_ptr->item_type);
    }
    *(_DWORD *)(v2 + 96) = item_config_ptr->item_type;
    item_type = item_config_ptr->item_type;
    if ( item_type == ITEM_RELIQUARY )
    {
      v7 = &`typeinfo for'data::ItemConfig;
      v8 = (const data::ReliquaryExcelConfig *)__dynamic_cast(
                                                 item_config_ptr,
                                                 (const struct __class_type_info *)&`typeinfo for'data::ItemConfig,
                                                 (const struct __class_type_info *)&`typeinfo for'data::ReliquaryExcelConfig,
                                                 0LL);
      reliquary_config_ptr = v8;
      if ( v8 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&v8->rank_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v8->rank_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v8->rank_level);
        }
        rank_level = reliquary_config_ptr->rank_level;
        v10 = *(_BYTE *)(((v2 + 100) >> 3) + 0x7FFF8000);
        LOBYTE(v7) = v10 != 0;
        if ( v10 != 0 && (char)(((v2 + 100) & 7) + 3) >= v10 )
          __asan_report_store4(v2 + 100, v7);
        *(_DWORD *)(v2 + 100) = rank_level;
      }
    }
    else if ( item_type == ITEM_WEAPON )
    {
      v7 = &`typeinfo for'data::ItemConfig;
      v11 = (const data::WeaponExcelConfig *)__dynamic_cast(
                                               item_config_ptr,
                                               (const struct __class_type_info *)&`typeinfo for'data::ItemConfig,
                                               (const struct __class_type_info *)&`typeinfo for'data::WeaponExcelConfig,
                                               0LL);
      weapon_config_ptr = v11;
      if ( v11 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&v11->rank_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v11->rank_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v11->rank_level);
        }
        v12 = weapon_config_ptr->rank_level;
        v13 = *(_BYTE *)(((v2 + 100) >> 3) + 0x7FFF8000);
        LOBYTE(v7) = v13 != 0;
        if ( v13 != 0 && (char)(((v2 + 100) & 7) + 3) >= v13 )
          __asan_report_store4(v2 + 100, v7);
        *(_DWORD *)(v2 + 100) = v12;
      }
    }
    else
    {
      v7 = (void **)((((_BYTE)v2 + 100) & 7u) + 3);
      if ( *(_BYTE *)(((v2 + 100) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 + 100) & 7) + 3) >= *(_BYTE *)(((v2 + 100) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 100, v7);
      }
      *(_DWORD *)(v2 + 100) = item_id;
    }
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48, v7);
    *(_DWORD *)(v2 + 48) = 0;
    v19 = std::make_pair<int,ItemIndexKey &>((int *)(v2 + 48), (ItemIndexKey *)(v2 + 96));
  }
  else
  {
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 64, item_id);
    *(_DWORD *)(v2 + 64) = 0;
    v5 = (((_BYTE)v2 + 68) & 7u) + 3;
    if ( *(_BYTE *)(((v2 + 68) >> 3) + 0x7FFF8000) != 0
      && (char)(((v2 + 68) & 7) + 3) >= *(_BYTE *)(((v2 + 68) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v2 + 68, v5);
    }
    *(_DWORD *)(v2 + 68) = 0;
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 32, v5);
    *(_DWORD *)(v2 + 32) = -1;
    v19 = std::make_pair<int,ItemIndexKey &>((int *)(v2 + 32), (ItemIndexKey *)(v2 + 64));
  }
  v14 = v19;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v14;
};

// Line 667: range 000000000CD59F4C-000000000CD5A29B
std::pair<int,data::OptionalLimitConfig> *__cdecl TxtConfigMgr::makeOptionalLimitConfig(
        std::pair<int,data::OptionalLimitConfig> *retstr,
        const std::string *optional_limit_config_str)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 *v5; // rdx
  __int64 v6; // rsi
  char *v7; // rsi
  int32_t v8; // edx
  char v9; // al
  char v12[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 ret:668 64 16 25 optional_limit_config:669";
  *(_QWORD *)(v2 + 16) = TxtConfigMgr::makeOptionalLimitConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, optional_limit_config_str);
  *(_DWORD *)(v2 + 48) = 0;
  v5 = &`vtable for'data::OptionalLimitConfig + 2;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, optional_limit_config_str);
  *(_QWORD *)(v2 + 64) = v5;
  if ( *(char *)(((v2 + 72) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(v2 + 72, optional_limit_config_str, v2 + 72);
  *(_BYTE *)(v2 + 72) = 0;
  v6 = (((_BYTE)v2 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((v2 + 76) >> 3) + 0x7FFF8000) != 0
    && (char)(((v2 + 76) & 7) + 3) >= *(_BYTE *)(((v2 + 76) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v2 + 76, v6);
  }
  *(_DWORD *)(v2 + 76) = 0;
  if ( (unsigned __int8)std::string::empty() )
  {
    if ( *(char *)(((v2 + 72) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(v2 + 72, v6, v2 + 72);
    *(_BYTE *)(v2 + 72) = 1;
  }
  else
  {
    if ( *(char *)(((v2 + 72) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(v2 + 72, v6, v2 + 72);
    *(_BYTE *)(v2 + 72) = 0;
    v7 = (char *)(v2 + 76);
    v8 = common::tools::StringUtils::strToNum<unsigned int>(optional_limit_config_str, (unsigned int *)(v2 + 76), 0);
    v9 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(v7) = v9 != 0;
      __asan_report_store4(v2 + 48, v7);
    }
    *(_DWORD *)(v2 + 48) = v8;
  }
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->second.limit_count + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second.limit_count + 3) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  std::make_pair<int &,data::OptionalLimitConfig &>(retstr, (int *)(v2 + 48), (data::OptionalLimitConfig *)(v2 + 64));
  data::OptionalLimitConfig::~OptionalLimitConfig((data::OptionalLimitConfig *const)(v2 + 64));
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 683: range 000000000CD5A29C-000000000CD5A3B5
std::string *__cdecl TxtConfigMgr::serializeOptionalLimitConfig[abi:cxx11](
        std::string *retstr,
        const data::OptionalLimitConfig *optional_limit_config)
{
  unsigned int limit_count; // esi

  if ( *(char *)(((unsigned __int64)&optional_limit_config->is_unlimited >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &optional_limit_config->is_unlimited,
      optional_limit_config,
      &optional_limit_config->is_unlimited);
  if ( optional_limit_config->is_unlimited )
  {
    std::string::basic_string(retstr);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&optional_limit_config->limit_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)optional_limit_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&optional_limit_config->limit_count >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&optional_limit_config->limit_count);
    }
    limit_count = optional_limit_config->limit_count;
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity
                                                            + 15) >> 3)
                                                          + 0x7FFF8000) )
    {
      limit_count = 32;
      __asan_report_store_n(retstr, 32LL);
    }
    std::to_string(retstr, limit_count);
  }
  return retstr;
};

// Line 692: range 000000000CD5A3B6-000000000CD5A3D6
bool __cdecl TxtConfigMgr::isPsnPlatform(uint32_t platform_type)
{
  return platform_type == 4 || platform_type == 8;
};

// Line 697: range 000000000CD5A3D8-000000000CD5A3E2
uint32_t __cdecl TxtConfigMgr::getPCMPlatformType()
{
  return 3;
};

// Line 702: range 000000000CD5A3E4-000000000CD5A3EE
uint32_t __cdecl TxtConfigMgr::getPsnPlatformType()
{
  return 4;
};

// Line 707: range 000000000CD5A3F0-000000000CD5A44E
bool __cdecl TxtConfigMgr::isPlatformTyepInSameOperator(uint32_t platform_one, uint32_t platform_two)
{
  bool is_one_ps; // [rsp+1Eh] [rbp-2h]
  bool is_two_ps; // [rsp+1Fh] [rbp-1h]

  is_one_ps = TxtConfigMgr::isPsnPlatform(platform_one);
  is_two_ps = TxtConfigMgr::isPsnPlatform(platform_two);
  if ( is_one_ps && is_two_ps )
    return 1;
  return !is_one_ps && !is_two_ps;
};

// Line 724: range 000000000CD5A450-000000000CD5A48E
uint32_t __cdecl TxtConfigMgr::getPlatformCategory(uint32_t platform_type)
{
  if ( !proto::PlatformType_IsValid(platform_type) )
    return 0;
  if ( TxtConfigMgr::isPsnPlatform(platform_type) )
    return 2;
  return 1;
};

// Line 739: range 000000000CD5A490-000000000CD5A701
uint32_t __cdecl TxtConfigMgr::getPlatformFlag(uint32_t platform_type)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t PlatformCategory; // edx
  char v6; // al
  common::milog::MiLogStream *v7; // rax
  uint32_t result; // eax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 21 platform_category:740 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TxtConfigMgr::getPlatformFlag;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  PlatformCategory = TxtConfigMgr::getPlatformCategory(platform_type);
  v6 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 48, v1);
  }
  *(_DWORD *)(v2 + 48) = PlatformCategory;
  if ( !*(_DWORD *)(v2 + 48) || *(_DWORD *)(v2 + 48) > 0x1Fu )
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_config_mgr.cpp",
      "getPlatformFlag",
      743);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[28])"invalid platform_category: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = 1 << *(_DWORD *)(v2 + 48);
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 750: range 000000000CD5A702-000000000CD5A80A
std::unordered_set<unsigned int> *__cdecl TxtConfigMgr::getAvatarFeatures(
        std::unordered_set<unsigned int> *retstr,
        const TxtConfigMgr *const this,
        uint32_t avatar_id)
{
  FeatureTagExcelConfigMgr *p_feature_tag_config_mgr; // rcx
  const unsigned int *M_current; // rbx
  const unsigned int *v5; // rcx
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+20h] [rbp-20h]
  const data::FeatureTagGroupExcelConfig *group_config_ptr; // [rsp+28h] [rbp-18h]

  std::unordered_set<unsigned int>::unordered_set(retstr);
  avatar_config_ptr = data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(&this->avatar_config_mgr, avatar_id);
  if ( avatar_config_ptr )
  {
    p_feature_tag_config_mgr = &this->feature_tag_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->feature_tag_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->feature_tag_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&avatar_config_ptr->feature_tag_group_id);
    }
    group_config_ptr = data::FeatureTagExcelConfigMgrBase::findFeatureTagGroupExcelConfig(
                         p_feature_tag_config_mgr,
                         avatar_config_ptr->feature_tag_group_id);
    if ( group_config_ptr )
    {
      M_current = std::vector<unsigned int>::end(&group_config_ptr->tag_i_ds)._M_current;
      v5 = std::vector<unsigned int>::begin(&group_config_ptr->tag_i_ds)._M_current;
      std::unordered_set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
        retstr,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v5,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
    }
  }
  return retstr;
};

// Line 767: range 000000000CD5A80C-000000000CD5A917
std::unordered_set<unsigned int> *__cdecl TxtConfigMgr::getMonsterFeatures(
        std::unordered_set<unsigned int> *retstr,
        const TxtConfigMgr *const this,
        uint32_t monster_id)
{
  FeatureTagExcelConfigMgr *p_feature_tag_config_mgr; // rcx
  const unsigned int *M_current; // rbx
  const unsigned int *v5; // rcx
  const data::MonsterExcelConfig *monster_config_ptr; // [rsp+20h] [rbp-20h]
  const data::FeatureTagGroupExcelConfig *group_config_ptr; // [rsp+28h] [rbp-18h]

  std::unordered_set<unsigned int>::unordered_set(retstr);
  monster_config_ptr = data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(&this->monster_config_mgr, monster_id);
  if ( monster_config_ptr )
  {
    p_feature_tag_config_mgr = &this->feature_tag_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->feature_tag_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->feature_tag_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&monster_config_ptr->feature_tag_group_id);
    }
    group_config_ptr = data::FeatureTagExcelConfigMgrBase::findFeatureTagGroupExcelConfig(
                         p_feature_tag_config_mgr,
                         monster_config_ptr->feature_tag_group_id);
    if ( group_config_ptr )
    {
      M_current = std::vector<unsigned int>::end(&group_config_ptr->tag_i_ds)._M_current;
      v5 = std::vector<unsigned int>::begin(&group_config_ptr->tag_i_ds)._M_current;
      std::unordered_set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
        retstr,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v5,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
    }
  }
  return retstr;
};

// Line 785: range 000000000CD5A918-000000000CD5AAD1
bool __cdecl TxtConfigMgr::isMonsterAnimal(const TxtConfigMgr *const this, uint32_t monster_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  bool result; // al
  char v7[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 5 s:787";
  *(_QWORD *)(v2 + 16) = TxtConfigMgr::isMonsterAnimal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 87) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 87) & 7) >= *(_BYTE *)(((v2 + 87) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 32, 56LL);
  }
  TxtConfigMgr::getMonsterFeatures((std::unordered_set<unsigned int> *)(v2 + 32), this, monster_id);
  v5 = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
         (std::unordered_set<unsigned int> *)(v2 + 32),
         TxtConfigMgr::isMonsterAnimal(unsigned int)const::ANIMAL_FEATURE_TAG_ID);
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 32));
  result = v5;
  if ( v7 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 793: range 000000000CD5AAD2-000000000CD5AAFF
bool __cdecl TxtConfigMgr::isCloudPlatform(uint32_t platform_type)
{
  if ( platform_type <= 7 )
    return platform_type >= 6;
  return platform_type - 9 <= 5;
};

// Line 813: range 000000000CD5AB00-000000000CD5AB20
bool __cdecl TxtConfigMgr::isThirdPartyCloudPlatform(uint32_t platform_type)
{
  return platform_type - 13 <= 1;
};

// Line 826: range 000000000CD5AB22-000000000CD5B722
__int64 __fastcall TxtConfigMgr::calcMailCollectState(
        const TxtConfigMgr *const this,
        const MailCheckCollectStateParam *check_param,
        uint32_t uid)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_config_id; // rax
  __int64 v7; // rsi
  uint32_t config_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  int v11; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  uint32_t send_time; // r14d
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  uint32_t v20; // ecx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  uint32_t expire_time; // ecx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdx
  char v39; // al
  __int64 result; // rax
  proto::MailCollectState state; // [rsp+20h] [rbp-1C0h]
  uint32_t delta_days; // [rsp+24h] [rbp-1BCh]
  const data::MailExcelConfig *mail_excel_config_ptr; // [rsp+28h] [rbp-1B8h]
  char v46[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 13 config_id:828 48 4 7 uid:825 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 2"
                        "56 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TxtConfigMgr::calcMailCollectState;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862723] = -218959118;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -202116109;
  *(_DWORD *)(v3 + 48) = uid;
  if ( *(_BYTE *)(((unsigned __int64)&check_param->collect_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&check_param->collect_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&check_param->collect_state);
  }
  state = check_param->collect_state;
  p_config_id = &check_param->config_id;
  v7 = (((_BYTE)check_param + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&check_param->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)check_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&check_param->config_id >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(p_config_id);
  }
  config_id = check_param->config_id;
  v9 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store4(v3 + 32, v7);
  }
  *(_DWORD *)(v3 + 32) = config_id;
  if ( state == MAIL_COLLECTIBLE_UNKONW )
  {
    if ( *(_DWORD *)(v3 + 32) )
    {
      v10 = *(unsigned int *)(v3 + 32);
      mail_excel_config_ptr = data::MailExcelConfigMgrBase::findMailExcelConfig(&this->mail_config_mgr, v10);
      if ( mail_excel_config_ptr )
      {
        if ( *(char *)(((unsigned __int64)&mail_excel_config_ptr->is_collectible >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&mail_excel_config_ptr->is_collectible, v10, &mail_excel_config_ptr->is_collectible);
        if ( mail_excel_config_ptr->is_collectible )
          v11 = 2;
        else
          v11 = 1;
        state = v11;
      }
      else
      {
        if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 64, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 64),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/txt_config_mgr.cpp",
          "calcMailCollectState",
          841);
        v12 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                (common::milog::MiLogStream *const)(v3 + 64),
                (const char (*)[42])"findMailExcelConfig fail, mail_config_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v3 + 32));
        v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
        *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
        state = MAIL_NOT_COLLECTIBLE;
      }
    }
    else
    {
      state = MAIL_NOT_COLLECTIBLE;
      if ( *(_BYTE *)(((unsigned __int64)&check_param->send_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&check_param->send_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&check_param->send_time);
      }
      send_time = check_param->send_time;
      if ( send_time < ConstValueExcelConfigMgr::getCollectibleMailMaxCheckSendTime(&this->const_value_config_mgr) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&check_param->send_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&check_param->send_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&check_param->send_time);
        }
        v20 = check_param->send_time;
        if ( *(_BYTE *)(((unsigned __int64)&check_param->expire_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)check_param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&check_param->expire_time >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4(&check_param->expire_time);
        }
        if ( v20 < check_param->expire_time )
        {
          if ( *(_BYTE *)(((unsigned __int64)&check_param->expire_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)check_param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&check_param->expire_time >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_load4(&check_param->expire_time);
          }
          expire_time = check_param->expire_time;
          if ( *(_BYTE *)(((unsigned __int64)&check_param->send_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&check_param->send_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&check_param->send_time);
          }
          delta_days = (expire_time - check_param->send_time) / 0x15180;
          if ( delta_days >= ConstValueExcelConfigMgr::getCollectibleMailMinCheckExpireDays(&this->const_value_config_mgr) )
          {
            if ( !ConstValueExcelConfigMgr::isCollectibleMailByItems(
                    &this->const_value_config_mgr,
                    &check_param->item_set) )
            {
              if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 320, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 320),
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/txt_config_mgr.cpp",
                "calcMailCollectState",
                869);
              v34 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                      (common::milog::MiLogStream *const)(v3 + 320),
                      (const char (*)[8])" items:");
              v35 = common::milog::MiLogStream::operator<<<unsigned int>(v34, &check_param->item_set);
              v36 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v35, (const char (*)[7])", uid:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v36,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
              *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
            }
            else
            {
              state = MAIL_COLLECTIBLE_UNCOLLECTED;
            }
          }
          else
          {
            if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 256, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 256),
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/txt_config_mgr.cpp",
              "calcMailCollectState",
              864);
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    (common::milog::MiLogStream *const)(v3 + 256),
                    &check_param->mail_id);
            v29 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    v28,
                    (const char (*)[26])" duration to short. send:");
            v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &check_param->send_time);
            v31 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v30, (const char (*)[10])", expire:");
            v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &check_param->expire_time);
            v33 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v32, (const char (*)[6])" uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
            *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
        else
        {
          if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 192, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 192),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/txt_config_mgr.cpp",
            "calcMailCollectState",
            858);
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  (common::milog::MiLogStream *const)(v3 + 192),
                  &check_param->mail_id);
          v22 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  v21,
                  (const char (*)[26])" duration to short. send:");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &check_param->send_time);
          v24 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v23, (const char (*)[10])", expire:");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &check_param->expire_time);
          v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
          *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      else
      {
        if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 128, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 128),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/txt_config_mgr.cpp",
          "calcMailCollectState",
          852);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                (common::milog::MiLogStream *const)(v3 + 128),
                &check_param->mail_id);
        v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v16,
                (const char (*)[21])" send time too late:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &check_param->send_time);
        v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
        *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
  }
  if ( state == MAIL_COLLECTIBLE_UNCOLLECTED )
  {
    if ( std::set<unsigned int>::empty(&check_param->item_set) )
      goto LABEL_54;
    v37 = ((_BYTE)check_param + 20) & 7;
    v38 = (*(_BYTE *)(((unsigned __int64)&check_param->is_attachment_got >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v37 >= *(_BYTE *)(((unsigned __int64)&check_param->is_attachment_got >> 3) + 0x7FFF8000));
    if ( (_BYTE)v38 )
      __asan_report_load1(&check_param->is_attachment_got, v37, v38);
    if ( check_param->is_attachment_got )
LABEL_54:
      v39 = 1;
    else
      v39 = 0;
    if ( v39 )
      state = MAIL_COLLECTIBLE_COLLECTED;
  }
  result = (unsigned int)state;
  if ( v46 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
