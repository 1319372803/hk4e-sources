// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/script_lib_base.cpp

// Line 36: range 000000000CD2A9AA-000000000CD3C6E4
int32_t __cdecl ScriptLibBase::registerLib(ScriptLibBase *const this, lua_State_0 *lua_state_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  luabind::value_vector *v5; // rax
  luabind::value_vector *v6; // rax
  luabind::value_vector *v7; // rax
  luabind::value_vector *v8; // rax
  luabind::class_<proto::ProtEntityType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  luabind::value_vector *v12; // rax
  luabind::value_vector *v13; // rax
  luabind::value_vector *v14; // rax
  luabind::value_vector *v15; // rax
  luabind::value_vector *v16; // rax
  luabind::value_vector *v17; // rax
  luabind::value_vector *v18; // rax
  luabind::value_vector *v19; // rax
  luabind::value_vector *v20; // rax
  luabind::value_vector *v21; // rax
  luabind::value_vector *v22; // rax
  luabind::value_vector *v23; // rax
  luabind::value_vector *v24; // rax
  luabind::value_vector *v25; // rax
  luabind::value_vector *v26; // rax
  luabind::value_vector *v27; // rax
  luabind::value_vector *v28; // rax
  luabind::value_vector *v29; // rax
  luabind::value_vector *v30; // rax
  luabind::value_vector *v31; // rax
  luabind::value_vector *v32; // rax
  luabind::value_vector *v33; // rax
  luabind::value_vector *v34; // rax
  luabind::value_vector *v35; // rax
  luabind::value_vector *v36; // rax
  luabind::value_vector *v37; // rax
  luabind::value_vector *v38; // rax
  luabind::value_vector *v39; // rax
  luabind::value_vector *v40; // rax
  luabind::value_vector *v41; // rax
  luabind::value_vector *v42; // rax
  luabind::value_vector *v43; // rax
  luabind::value_vector *v44; // rax
  luabind::value_vector *v45; // rax
  luabind::value_vector *v46; // rax
  luabind::value_vector *v47; // rax
  luabind::value_vector *v48; // rax
  luabind::value_vector *v49; // rax
  luabind::value_vector *v50; // rax
  luabind::value_vector *v51; // rax
  luabind::value_vector *v52; // rax
  luabind::value_vector *v53; // rax
  luabind::value_vector *v54; // rax
  luabind::value_vector *v55; // rax
  luabind::value_vector *v56; // rax
  luabind::value_vector *v57; // rax
  luabind::value_vector *v58; // rax
  luabind::value_vector *v59; // rax
  luabind::value_vector *v60; // rax
  luabind::value_vector *v61; // rax
  luabind::value_vector *v62; // rax
  luabind::value_vector *v63; // rax
  luabind::value_vector *v64; // rax
  luabind::value_vector *v65; // rax
  luabind::value_vector *v66; // rax
  luabind::value_vector *v67; // rax
  luabind::value_vector *v68; // rax
  luabind::value_vector *v69; // rax
  luabind::value_vector *v70; // rax
  luabind::value_vector *v71; // rax
  luabind::value_vector *v72; // rax
  luabind::value_vector *v73; // rax
  luabind::value_vector *v74; // rax
  luabind::value_vector *v75; // rax
  luabind::value_vector *v76; // rax
  luabind::value_vector *v77; // rax
  luabind::value_vector *v78; // rax
  luabind::value_vector *v79; // rax
  luabind::value_vector *v80; // rax
  luabind::value_vector *v81; // rax
  luabind::value_vector *v82; // rax
  luabind::value_vector *v83; // rax
  luabind::value_vector *v84; // rax
  luabind::value_vector *v85; // rax
  luabind::value_vector *v86; // rax
  luabind::value_vector *v87; // rax
  luabind::value_vector *v88; // rax
  luabind::value_vector *v89; // rax
  luabind::value_vector *v90; // rax
  luabind::value_vector *v91; // rax
  luabind::value_vector *v92; // rax
  luabind::value_vector *v93; // rax
  luabind::value_vector *v94; // rax
  luabind::value_vector *v95; // rax
  luabind::value_vector *v96; // rax
  luabind::value_vector *v97; // rax
  luabind::value_vector *v98; // rax
  luabind::value_vector *v99; // rax
  luabind::value_vector *v100; // rax
  luabind::value_vector *v101; // rax
  luabind::value_vector *v102; // rax
  luabind::value_vector *v103; // rax
  luabind::value_vector *v104; // rax
  luabind::value_vector *v105; // rax
  luabind::value_vector *v106; // rax
  luabind::value_vector *v107; // rax
  luabind::value_vector *v108; // rax
  luabind::value_vector *v109; // rax
  luabind::value_vector *v110; // rax
  luabind::value_vector *v111; // rax
  luabind::value_vector *v112; // rax
  luabind::value_vector *v113; // rax
  luabind::value_vector *v114; // rax
  luabind::value_vector *v115; // rax
  luabind::value_vector *v116; // rax
  luabind::value_vector *v117; // rax
  luabind::value_vector *v118; // rax
  luabind::value_vector *v119; // rax
  luabind::value_vector *v120; // rax
  luabind::value_vector *v121; // rax
  luabind::value_vector *v122; // rax
  luabind::value_vector *v123; // rax
  luabind::value_vector *v124; // rax
  luabind::value_vector *v125; // rax
  luabind::value_vector *v126; // rax
  luabind::value_vector *v127; // rax
  luabind::value_vector *v128; // rax
  luabind::value_vector *v129; // rax
  luabind::value_vector *v130; // rax
  luabind::value_vector *v131; // rax
  luabind::value_vector *v132; // rax
  luabind::value_vector *v133; // rax
  luabind::value_vector *v134; // rax
  luabind::value_vector *v135; // rax
  luabind::value_vector *v136; // rax
  luabind::value_vector *v137; // rax
  luabind::class_<data::EventType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v138; // rax
  unsigned __int64 v139; // rax
  unsigned __int64 v140; // rax
  luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v141; // rax
  luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v142; // rax
  luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v143; // rax
  luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v144; // rax
  luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v145; // rax
  luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v146; // rax
  luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v147; // rax
  luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v148; // rax
  luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v149; // rax
  luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v150; // rax
  unsigned __int64 v151; // rax
  unsigned __int64 v152; // rax
  luabind::value_vector *v153; // rax
  luabind::value_vector *v154; // rax
  luabind::value_vector *v155; // rax
  luabind::class_<data::RegionShape,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v156; // rax
  unsigned __int64 v157; // rax
  unsigned __int64 v158; // rax
  luabind::value_vector *v159; // rax
  luabind::value_vector *v160; // rax
  luabind::value_vector *v161; // rax
  luabind::value_vector *v162; // rax
  luabind::value_vector *v163; // rax
  luabind::value_vector *v164; // rax
  luabind::value_vector *v165; // rax
  luabind::value_vector *v166; // rax
  luabind::value_vector *v167; // rax
  luabind::value_vector *v168; // rax
  luabind::value_vector *v169; // rax
  luabind::value_vector *v170; // rax
  luabind::value_vector *v171; // rax
  luabind::value_vector *v172; // rax
  luabind::value_vector *v173; // rax
  luabind::value_vector *v174; // rax
  luabind::value_vector *v175; // rax
  luabind::value_vector *v176; // rax
  luabind::value_vector *v177; // rax
  luabind::value_vector *v178; // rax
  luabind::class_<data::GadgetState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v179; // rax
  unsigned __int64 v180; // rax
  unsigned __int64 v181; // rax
  luabind::value_vector *v182; // rax
  luabind::value_vector *v183; // rax
  luabind::value_vector *v184; // rax
  luabind::class_<data::QuestState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v185; // rax
  unsigned __int64 v186; // rax
  unsigned __int64 v187; // rax
  luabind::value_vector *v188; // rax
  luabind::value_vector *v189; // rax
  luabind::value_vector *v190; // rax
  luabind::value_vector *v191; // rax
  luabind::value_vector *v192; // rax
  luabind::value_vector *v193; // rax
  luabind::class_<data::ElementType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v194; // rax
  unsigned __int64 v195; // rax
  unsigned __int64 v196; // rax
  luabind::value_vector *v197; // rax
  luabind::value_vector *v198; // rax
  luabind::class_<data::GadgetType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v199; // rax
  unsigned __int64 v200; // rax
  unsigned __int64 v201; // rax
  luabind::value_vector *v202; // rax
  luabind::value_vector *v203; // rax
  luabind::value_vector *v204; // rax
  luabind::class_<data::FatherChallengeProperty,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v205; // rax
  unsigned __int64 v206; // rax
  unsigned __int64 v207; // rax
  luabind::value_vector *v208; // rax
  luabind::value_vector *v209; // rax
  luabind::value_vector *v210; // rax
  luabind::class_<data::GroupKillPolicy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v211; // rax
  unsigned __int64 v212; // rax
  unsigned __int64 v213; // rax
  luabind::value_vector *v214; // rax
  luabind::value_vector *v215; // rax
  luabind::value_vector *v216; // rax
  luabind::value_vector *v217; // rax
  luabind::class_<data::StrikeType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v218; // rax
  unsigned __int64 v219; // rax
  unsigned __int64 v220; // rax
  luabind::value_vector *v221; // rax
  luabind::class_<proto::SealBattleType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v222; // rax
  unsigned __int64 v223; // rax
  unsigned __int64 v224; // rax
  luabind::class_<proto::GadgetBornType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v225; // rax
  unsigned __int64 v226; // rax
  unsigned __int64 v227; // rax
  luabind::value_vector *v228; // rax
  luabind::value_vector *v229; // rax
  luabind::value_vector *v230; // rax
  luabind::value_vector *v231; // rax
  luabind::value_vector *v232; // rax
  luabind::value_vector *v233; // rax
  luabind::class_<data::ClimateType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v234; // rax
  unsigned __int64 v235; // rax
  unsigned __int64 v236; // rax
  luabind::value_vector *v237; // rax
  luabind::value_vector *v238; // rax
  luabind::value_vector *v239; // rax
  luabind::value_vector *v240; // rax
  luabind::class_<proto::MonsterGuestBanDrop,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v241; // rax
  unsigned __int64 v242; // rax
  unsigned __int64 v243; // rax
  luabind::class_<proto::GadgetGuestBanDrop,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v244; // rax
  unsigned __int64 v245; // rax
  unsigned __int64 v246; // rax
  luabind::value_vector *v247; // rax
  luabind::value_vector *v248; // rax
  luabind::class_<data::BlossomRefreshType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v249; // rax
  unsigned __int64 v250; // rax
  unsigned __int64 v251; // rax
  luabind::value_vector *v252; // rax
  luabind::value_vector *v253; // rax
  luabind::class_<proto::BlossomScheduleState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v254; // rax
  unsigned __int64 v255; // rax
  unsigned __int64 v256; // rax
  luabind::value_vector *v257; // rax
  luabind::value_vector *v258; // rax
  luabind::class_<proto::GroupLoadStrategy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v259; // rax
  unsigned __int64 v260; // rax
  unsigned __int64 v261; // rax
  luabind::class_<proto::GadgetPlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v262; // rax
  unsigned __int64 v263; // rax
  unsigned __int64 v264; // rax
  luabind::value_vector *v265; // rax
  luabind::class_<proto::MonsterBornType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v266; // rax
  unsigned __int64 v267; // rax
  unsigned __int64 v268; // rax
  luabind::value_vector *v269; // rax
  luabind::value_vector *v270; // rax
  luabind::value_vector *v271; // rax
  luabind::value_vector *v272; // rax
  luabind::value_vector *v273; // rax
  luabind::class_<proto::ScenePlayBattleState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v274; // rax
  unsigned __int64 v275; // rax
  unsigned __int64 v276; // rax
  luabind::value_vector *v277; // rax
  luabind::value_vector *v278; // rax
  luabind::value_vector *v279; // rax
  luabind::class_<data::ChallengeEventMarkType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v280; // rax
  unsigned __int64 v281; // rax
  unsigned __int64 v282; // rax
  luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v283; // rax
  luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v284; // rax
  luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v285; // rax
  unsigned __int64 v286; // rax
  unsigned __int64 v287; // rax
  luabind::value_vector *v288; // rax
  luabind::value_vector *v289; // rax
  luabind::value_vector *v290; // rax
  luabind::value_vector *v291; // rax
  luabind::class_<data::VisionLevelType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v292; // rax
  unsigned __int64 v293; // rax
  unsigned __int64 v294; // rax
  luabind::value_vector *v295; // rax
  luabind::class_<data::RouteType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v296; // rax
  unsigned __int64 v297; // rax
  unsigned __int64 v298; // rax
  luabind::value_vector *v299; // rax
  luabind::class_<data::RouteRecordMode,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v300; // rax
  unsigned __int64 v301; // rax
  unsigned __int64 v302; // rax
  luabind::value_vector *v303; // rax
  luabind::value_vector *v304; // rax
  luabind::value_vector *v305; // rax
  luabind::value_vector *v306; // rax
  luabind::value_vector *v307; // rax
  luabind::class_<proto::MultistagePlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v308; // rax
  unsigned __int64 v309; // rax
  unsigned __int64 v310; // rax
  luabind::value_vector *v311; // rax
  luabind::value_vector *v312; // rax
  luabind::value_vector *v313; // rax
  luabind::value_vector *v314; // rax
  luabind::value_vector *v315; // rax
  luabind::value_vector *v316; // rax
  luabind::value_vector *v317; // rax
  luabind::value_vector *v318; // rax
  luabind::value_vector *v319; // rax
  luabind::value_vector *v320; // rax
  luabind::value_vector *v321; // rax
  luabind::class_<data::MultistageStageType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v322; // rax
  unsigned __int64 v323; // rax
  unsigned __int64 v324; // rax
  luabind::value_vector *v325; // rax
  luabind::value_vector *v326; // rax
  luabind::class_<proto::InBattleMechanicusCardChallengeState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v327; // rax
  unsigned __int64 v328; // rax
  unsigned __int64 v329; // rax
  luabind::class_<data::FlowSuiteOperatePolicy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v330; // rax
  unsigned __int64 v331; // rax
  unsigned __int64 v332; // rax
  luabind::value_vector *v333; // rax
  luabind::class_<data::CommonPlayerTipsType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v334; // rax
  unsigned __int64 v335; // rax
  unsigned __int64 v336; // rax
  luabind::class_<proto::GroupVariableType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v337; // rax
  unsigned __int64 v338; // rax
  unsigned __int64 v339; // rax
  luabind::class_<proto::BeginCameraSceneLookNotify_KeepRotType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v340; // rax
  unsigned __int64 v341; // rax
  unsigned __int64 v342; // rax
  luabind::value_vector *v343; // rax
  luabind::value_vector *v344; // rax
  luabind::value_vector *v345; // rax
  luabind::value_vector *v346; // rax
  luabind::class_<data::GalleryProgressScoreUIType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v347; // rax
  unsigned __int64 v348; // rax
  unsigned __int64 v349; // rax
  luabind::value_vector *v350; // rax
  luabind::value_vector *v351; // rax
  luabind::class_<proto::GalleryStopReason,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v352; // rax
  unsigned __int64 v353; // rax
  unsigned __int64 v354; // rax
  luabind::class_<data::GalleryProgressScoreType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v355; // rax
  unsigned __int64 v356; // rax
  unsigned __int64 v357; // rax
  luabind::class_<data::AranaraCollectionType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v358; // rax
  unsigned __int64 v359; // rax
  unsigned __int64 v360; // rax
  luabind::value_vector *v361; // rax
  luabind::value_vector *v362; // rax
  luabind::class_<proto::AranaraCollectionState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v363; // rax
  unsigned __int64 v364; // rax
  unsigned __int64 v365; // rax
  luabind::class_<data::ExhibitionPlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *v366; // rax
  char v368[18736]; // [rsp+10h] [rbp-4930h] BYREF

  v2 = (unsigned __int64)v368;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_9(18688LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = a5053289Unknown;
  *(_QWORD *)(v2 + 16) = ScriptLibBase::registerLib;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862732] = -218959360;
  v4[536862733] = -218959360;
  v4[536862734] = -218959360;
  v4[536862735] = -218959360;
  v4[536862736] = -218959360;
  v4[536862737] = -218959360;
  v4[536862738] = -218959360;
  v4[536862739] = -218959360;
  v4[536862740] = -218959360;
  v4[536862741] = -218959360;
  v4[536862742] = -218959360;
  v4[536862743] = -218959360;
  v4[536862744] = -218959360;
  v4[536862745] = -218959360;
  v4[536862746] = -218959360;
  v4[536862747] = -218959360;
  v4[536862748] = -218959360;
  v4[536862749] = -218959360;
  v4[536862750] = -218959360;
  v4[536862751] = -218959360;
  v4[536862752] = -218959360;
  v4[536862753] = -218959360;
  v4[536862754] = -218959360;
  v4[536862755] = -218959360;
  v4[536862756] = -218959360;
  v4[536862757] = -218959360;
  v4[536862758] = -218959360;
  v4[536862759] = -218959360;
  v4[536862760] = -218959360;
  v4[536862761] = -218959360;
  v4[536862762] = -218959360;
  v4[536862763] = -218959360;
  v4[536862764] = -218959360;
  v4[536862765] = -218959360;
  v4[536862766] = -218959360;
  v4[536862767] = -218959360;
  v4[536862768] = -218959360;
  v4[536862769] = -218959360;
  v4[536862770] = -218959360;
  v4[536862771] = -218959360;
  v4[536862772] = -218959360;
  v4[536862773] = -218959360;
  v4[536862774] = -218959360;
  v4[536862775] = -218959360;
  v4[536862776] = -218959360;
  v4[536862777] = -218959360;
  v4[536862778] = -218959360;
  v4[536862779] = -218959360;
  v4[536862780] = -218959360;
  v4[536862781] = -218959360;
  v4[536862782] = -218959360;
  v4[536862783] = -218959360;
  v4[536862784] = -218959360;
  v4[536862785] = -218959360;
  v4[536862786] = -218959360;
  v4[536862787] = -218959360;
  v4[536862788] = -218959360;
  v4[536862789] = -218959360;
  v4[536862790] = -218959360;
  v4[536862791] = -218959360;
  v4[536862792] = -218959360;
  v4[536862793] = -218959360;
  v4[536862794] = -218959360;
  v4[536862795] = -218959360;
  v4[536862796] = -218959360;
  v4[536862797] = -218959360;
  v4[536862798] = -218959360;
  v4[536862799] = -219021312;
  v4[536862800] = -219021312;
  v4[536862801] = -219021312;
  v4[536862802] = -219021312;
  v4[536862803] = -219021312;
  v4[536862804] = -219021312;
  v4[536862805] = -219021312;
  v4[536862806] = -219021312;
  v4[536862807] = -219021312;
  v4[536862808] = -219021312;
  v4[536862809] = -219021312;
  v4[536862810] = -219021312;
  v4[536862811] = -219021312;
  v4[536862812] = -219021312;
  v4[536862813] = -219021312;
  v4[536862814] = -219021312;
  v4[536862815] = -219021312;
  v4[536862816] = -219021312;
  v4[536862817] = -219021312;
  v4[536862818] = -219021312;
  v4[536862819] = -219021312;
  v4[536862820] = -219021312;
  v4[536862821] = -219021312;
  v4[536862822] = -219021312;
  v4[536862823] = -219021312;
  v4[536862824] = -219021312;
  v4[536862825] = -219021312;
  v4[536862826] = -219021312;
  v4[536862827] = -219021312;
  v4[536862828] = -219021312;
  v4[536862829] = -219021312;
  v4[536862830] = -219021312;
  v4[536862831] = -219021312;
  v4[536862832] = -219021312;
  v4[536862833] = -219021312;
  v4[536862834] = -219021312;
  v4[536862835] = -219021312;
  v4[536862836] = -219021312;
  v4[536862837] = -219021312;
  v4[536862838] = -219021312;
  v4[536862839] = -219021312;
  v4[536862840] = -219021312;
  v4[536862841] = -219021312;
  v4[536862842] = -219021312;
  v4[536862843] = -219021312;
  v4[536862844] = -219021312;
  v4[536862845] = -219021312;
  v4[536862846] = -219021312;
  v4[536862847] = -219021312;
  v4[536862848] = -219021312;
  v4[536862849] = -219021312;
  v4[536862850] = -219021312;
  v4[536862851] = -219021312;
  v4[536862852] = -219021312;
  v4[536862853] = -219021312;
  v4[536862854] = -219021312;
  v4[536862855] = -219021312;
  v4[536862856] = -219021312;
  v4[536862857] = -219021312;
  v4[536862858] = -219021312;
  v4[536862859] = -219021312;
  v4[536862860] = -219021312;
  v4[536862861] = -219021312;
  v4[536862862] = -219021312;
  v4[536862863] = -219021312;
  v4[536862864] = -219021312;
  v4[536862865] = -219021312;
  v4[536862866] = -219021312;
  v4[536862867] = -219021312;
  v4[536862868] = -219021312;
  v4[536862869] = -219021312;
  v4[536862870] = -219021312;
  v4[536862871] = -219021312;
  v4[536862872] = -219021312;
  v4[536862873] = -219021312;
  v4[536862874] = -219021312;
  v4[536862875] = -219021312;
  v4[536862876] = -219021312;
  v4[536862877] = -219021312;
  v4[536862878] = -219021312;
  v4[536862879] = -219021312;
  v4[536862880] = -219021312;
  v4[536862881] = -219021312;
  v4[536862882] = -219021312;
  v4[536862883] = -219021312;
  v4[536862884] = -219021312;
  v4[536862885] = -219021312;
  v4[536862886] = -219021312;
  v4[536862887] = -219021312;
  v4[536862888] = -219021312;
  v4[536862889] = -219021312;
  v4[536862890] = -219021312;
  v4[536862891] = -219021312;
  v4[536862892] = -219021312;
  v4[536862893] = -219021312;
  v4[536862894] = -219021312;
  v4[536862895] = -219021312;
  v4[536862896] = -219021312;
  v4[536862897] = -219021312;
  v4[536862898] = -219021312;
  v4[536862899] = -219021312;
  v4[536862900] = -219021312;
  v4[536862901] = -219021312;
  v4[536862902] = -219021312;
  v4[536862903] = -219021312;
  v4[536862904] = -219021312;
  v4[536862905] = -219021312;
  v4[536862906] = -219021312;
  v4[536862907] = -219021312;
  v4[536862908] = -219021312;
  v4[536862909] = -219021312;
  v4[536862910] = -219021312;
  v4[536862911] = -219021312;
  v4[536862912] = -219021312;
  v4[536862913] = -219021312;
  v4[536862914] = -219021312;
  v4[536862915] = -219021312;
  v4[536862916] = -219021312;
  v4[536862917] = -219021312;
  v4[536862918] = -219021312;
  v4[536862919] = -219021312;
  v4[536862920] = -219021312;
  v4[536862921] = -219021312;
  v4[536862922] = -219021312;
  v4[536862923] = -219021312;
  v4[536862924] = -219021312;
  v4[536862925] = -219021312;
  v4[536862926] = -219021312;
  v4[536862927] = -219021312;
  v4[536862928] = -219021312;
  v4[536862929] = -219021312;
  v4[536862930] = -219021312;
  v4[536862931] = -219021312;
  v4[536862932] = -219021312;
  v4[536862933] = -219021312;
  v4[536862934] = -219021312;
  v4[536862935] = -219021312;
  v4[536862936] = -219021312;
  v4[536862937] = -219021312;
  v4[536862938] = -219021312;
  v4[536862939] = -219021312;
  v4[536862940] = -219021312;
  v4[536862941] = -219021312;
  v4[536862942] = -219021312;
  v4[536862943] = -219021312;
  v4[536862944] = -219021312;
  v4[536862945] = -219021312;
  v4[536862946] = -219021312;
  v4[536862947] = -219021312;
  v4[536862948] = -219021312;
  v4[536862949] = -219021312;
  v4[536862950] = -219021312;
  v4[536862951] = -219021312;
  v4[536862952] = -219021312;
  v4[536862953] = -219021312;
  v4[536862954] = -219021312;
  v4[536862955] = -219021312;
  v4[536862956] = -219021312;
  v4[536862957] = -219021312;
  v4[536862958] = -219021312;
  v4[536862959] = -219021312;
  v4[536862960] = -219021312;
  v4[536862961] = -219021312;
  v4[536862962] = -219021312;
  v4[536862963] = -219021312;
  v4[536862964] = -219021312;
  v4[536862965] = -219021312;
  v4[536862966] = -219021312;
  v4[536862967] = -219021312;
  v4[536862968] = -219021312;
  v4[536862969] = -219021312;
  v4[536862970] = -219021312;
  v4[536862971] = -219021312;
  v4[536862972] = -219021312;
  v4[536862973] = -219021312;
  v4[536862974] = -219021312;
  v4[536862975] = -219021312;
  v4[536862976] = -219021312;
  v4[536862977] = -219021312;
  v4[536862978] = -219021312;
  v4[536862979] = -219021312;
  v4[536862980] = -219021312;
  v4[536862981] = -219021312;
  v4[536862982] = -219021312;
  v4[536862983] = -219021312;
  v4[536862984] = -219021312;
  v4[536862985] = -219021312;
  v4[536862986] = -219021312;
  v4[536862987] = -219021312;
  v4[536862988] = -219021312;
  v4[536862989] = -219021312;
  v4[536862990] = -219021312;
  v4[536862991] = -219021312;
  v4[536862992] = -219021312;
  v4[536862993] = -219021312;
  v4[536862994] = -219021312;
  v4[536862995] = -219021312;
  v4[536862996] = -219021312;
  v4[536862997] = -219021312;
  v4[536862998] = -219021312;
  v4[536862999] = -219021312;
  v4[536863000] = -219021312;
  v4[536863001] = -219021312;
  v4[536863002] = -219021312;
  v4[536863003] = -219021312;
  v4[536863004] = -219021312;
  v4[536863005] = -219021312;
  v4[536863006] = -219021312;
  v4[536863007] = -219021312;
  v4[536863008] = -219021312;
  v4[536863009] = -219021312;
  v4[536863010] = -219021312;
  v4[536863011] = -219021312;
  v4[536863012] = -219021312;
  v4[536863013] = -219021312;
  v4[536863014] = -219021312;
  v4[536863015] = -219021312;
  v4[536863016] = -219021312;
  v4[536863017] = -219021312;
  v4[536863018] = -219021312;
  v4[536863019] = -219021312;
  v4[536863020] = -219021312;
  v4[536863021] = -219021312;
  v4[536863022] = -219021312;
  v4[536863023] = -219021312;
  v4[536863024] = -219021312;
  v4[536863025] = -219021312;
  v4[536863026] = -219021312;
  v4[536863027] = -219021312;
  v4[536863028] = -219021312;
  v4[536863029] = -219021312;
  v4[536863030] = -219021312;
  v4[536863031] = -219021312;
  v4[536863032] = -219021312;
  v4[536863033] = -219021312;
  v4[536863034] = -219021312;
  v4[536863035] = -219021312;
  v4[536863036] = -219021312;
  v4[536863037] = -219021312;
  v4[536863038] = -219021312;
  v4[536863039] = -219021312;
  v4[536863040] = -219021312;
  v4[536863041] = -219021312;
  v4[536863042] = -219021312;
  v4[536863043] = -219021312;
  v4[536863044] = -219021312;
  v4[536863045] = -219021312;
  v4[536863046] = -219021312;
  v4[536863047] = -219021312;
  v4[536863048] = -219021312;
  v4[536863049] = -219021312;
  v4[536863050] = -219021312;
  v4[536863051] = -219021312;
  v4[536863052] = -219021312;
  v4[536863053] = -219021312;
  v4[536863054] = -219021312;
  v4[536863055] = -219021312;
  v4[536863056] = -219021312;
  v4[536863057] = -219021312;
  v4[536863058] = -219021312;
  v4[536863059] = -219021312;
  v4[536863060] = -219021312;
  v4[536863061] = -219021312;
  v4[536863062] = -219021312;
  v4[536863063] = -219021312;
  v4[536863064] = -219021312;
  v4[536863065] = -219021312;
  v4[536863066] = -219021312;
  v4[536863067] = -219021312;
  v4[536863068] = -219021312;
  v4[536863069] = -219021312;
  v4[536863070] = -219021312;
  v4[536863071] = -219021312;
  v4[536863072] = -219021312;
  v4[536863073] = -219021312;
  v4[536863074] = -219021312;
  v4[536863075] = -219021312;
  v4[536863076] = -219021312;
  v4[536863077] = -219021312;
  v4[536863078] = -219021312;
  v4[536863079] = -219021312;
  v4[536863080] = -219021312;
  v4[536863081] = -219021312;
  v4[536863082] = -219021312;
  v4[536863083] = -219021312;
  v4[536863084] = -219021312;
  v4[536863085] = -219021312;
  v4[536863086] = -219021312;
  v4[536863087] = -219021312;
  v4[536863088] = -219021312;
  v4[536863089] = -219021312;
  v4[536863090] = -219021312;
  v4[536863091] = -219021312;
  v4[536863092] = -219021312;
  v4[536863093] = -219021312;
  v4[536863094] = -219021312;
  v4[536863095] = -219021312;
  v4[536863096] = -219021312;
  v4[536863097] = -219021312;
  v4[536863098] = -219021312;
  v4[536863099] = -219021312;
  v4[536863100] = -219021312;
  v4[536863101] = -219021312;
  v4[536863102] = -219021312;
  v4[536863103] = -219021312;
  v4[536863104] = -219021312;
  v4[536863105] = -219021312;
  v4[536863106] = -219021312;
  v4[536863107] = -219021312;
  v4[536863108] = -219021312;
  v4[536863109] = -219021312;
  v4[536863110] = -219021312;
  v4[536863111] = -219021312;
  v4[536863112] = -219021312;
  v4[536863113] = -219021312;
  v4[536863114] = -219021312;
  v4[536863115] = -219021312;
  v4[536863116] = -219021312;
  v4[536863117] = -219021312;
  v4[536863118] = -219021312;
  v4[536863119] = -219021312;
  v4[536863120] = -219021312;
  v4[536863121] = -219021312;
  v4[536863122] = -219021312;
  v4[536863123] = -219021312;
  v4[536863124] = -219021312;
  v4[536863125] = -219021312;
  v4[536863126] = -219021312;
  v4[536863127] = -219021312;
  v4[536863128] = -219021312;
  v4[536863129] = -219021312;
  v4[536863130] = -219021312;
  v4[536863131] = -219021312;
  v4[536863132] = -219021312;
  v4[536863133] = -219021312;
  v4[536863134] = -219021312;
  v4[536863135] = -219021312;
  v4[536863136] = -219021312;
  v4[536863137] = -219021312;
  v4[536863138] = -219021312;
  v4[536863139] = -219021312;
  v4[536863140] = -219021312;
  v4[536863141] = -219021312;
  v4[536863142] = -219021312;
  v4[536863143] = -219021312;
  v4[536863144] = -219021312;
  v4[536863145] = -219021312;
  v4[536863146] = -219021312;
  v4[536863147] = -219021312;
  v4[536863148] = -234881024;
  v4[536863149] = -218959118;
  v4[536863150] = -234881024;
  v4[536863151] = -218959118;
  v4[536863152] = -234881024;
  v4[536863153] = -218959118;
  v4[536863154] = -234881024;
  v4[536863155] = -218959118;
  v4[536863156] = -234881024;
  v4[536863157] = -218959118;
  v4[536863158] = -234881024;
  v4[536863159] = -218959118;
  v4[536863160] = -234881024;
  v4[536863161] = -218959118;
  v4[536863162] = -234881024;
  v4[536863163] = -218959118;
  v4[536863164] = -234881024;
  v4[536863165] = -218959118;
  v4[536863166] = -234881024;
  v4[536863167] = -218959118;
  v4[536863168] = -234881024;
  v4[536863169] = -218959118;
  v4[536863170] = -234881024;
  v4[536863171] = -218959118;
  v4[536863172] = -234881024;
  v4[536863173] = -218959118;
  v4[536863174] = -234881024;
  v4[536863175] = -218959118;
  v4[536863176] = -234881024;
  v4[536863177] = -218959118;
  v4[536863178] = -234881024;
  v4[536863179] = -218959118;
  v4[536863180] = -234881024;
  v4[536863181] = -218959118;
  v4[536863182] = -234881024;
  v4[536863183] = -218959118;
  v4[536863184] = -234881024;
  v4[536863185] = -218959118;
  v4[536863186] = -234881024;
  v4[536863187] = -218959118;
  v4[536863188] = -234881024;
  v4[536863189] = -218959118;
  v4[536863190] = -234881024;
  v4[536863191] = -218959118;
  v4[536863192] = -234881024;
  v4[536863193] = -218959118;
  v4[536863194] = -234881024;
  v4[536863195] = -218959118;
  v4[536863196] = -234881024;
  v4[536863197] = -218959118;
  v4[536863198] = -234881024;
  v4[536863199] = -218959118;
  v4[536863200] = -234881024;
  v4[536863201] = -218959118;
  v4[536863202] = -234881024;
  v4[536863203] = -218959118;
  v4[536863204] = -234881024;
  v4[536863205] = -218959118;
  v4[536863206] = -234881024;
  v4[536863207] = -218959118;
  v4[536863208] = -234881024;
  v4[536863209] = -218959118;
  v4[536863210] = -234881024;
  v4[536863211] = -218959118;
  v4[536863212] = -234881024;
  v4[536863213] = -218959118;
  v4[536863214] = -234881024;
  v4[536863215] = -218959118;
  v4[536863216] = -234881024;
  v4[536863217] = -218959118;
  v4[536863218] = -234881024;
  v4[536863219] = -218959118;
  v4[536863220] = -234881024;
  v4[536863221] = -218959118;
  v4[536863222] = -234881024;
  v4[536863223] = -218959118;
  v4[536863224] = -234881024;
  v4[536863225] = -218959118;
  v4[536863226] = -234881024;
  v4[536863227] = -218959118;
  v4[536863229] = -218959118;
  v4[536863231] = -218959118;
  v4[536863233] = -218959118;
  v4[536863235] = -218959118;
  v4[536863237] = -218959118;
  v4[536863239] = -218959118;
  v4[536863241] = -218959118;
  v4[536863243] = -218959118;
  v4[536863245] = -218959118;
  v4[536863247] = -218959118;
  v4[536863249] = -218959118;
  v4[536863251] = -218959118;
  v4[536863253] = -218959118;
  v4[536863255] = -218959118;
  v4[536863257] = -218959118;
  v4[536863259] = -218959118;
  v4[536863261] = -218959118;
  v4[536863263] = -218959118;
  v4[536863265] = -218959118;
  v4[536863267] = -218959118;
  v4[536863269] = -218959118;
  v4[536863271] = -218959118;
  v4[536863273] = -218959118;
  v4[536863275] = -218959118;
  v4[536863277] = -218959118;
  v4[536863279] = -218959118;
  v4[536863281] = -218959118;
  v4[536863283] = -218959118;
  v4[536863285] = -218959118;
  v4[536863287] = -218959118;
  v4[536863289] = -218959118;
  v4[536863291] = -218959118;
  v4[536863293] = -218959118;
  v4[536863295] = -218959118;
  v4[536863297] = -218959118;
  v4[536863299] = -218959118;
  v4[536863301] = -218959118;
  v4[536863303] = -202116109;
  if ( *(_WORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 2528) = luabind::module(lua_state_ptr, 0LL);
  luabind::class_<proto::ProtEntityType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<proto::ProtEntityType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 13696),
    "EntityType");
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, "EntityType");
  *(luabind::detail::enum_maker<luabind::class_<proto::ProtEntityType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 32) = luabind::class_<proto::ProtEntityType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<proto::ProtEntityType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 13696), "constants");
  luabind::value::value<proto::ProtEntityType>((luabind::value *const)(v2 + 2720), "REGION", PROT_ENTITY_REGION);
  luabind::value::value<proto::ProtEntityType>((luabind::value *const)(v2 + 2688), "GADGET", PROT_ENTITY_GADGET);
  luabind::value::value<proto::ProtEntityType>((luabind::value *const)(v2 + 2656), off_1A18A3A0, PROT_ENTITY_NPC);
  luabind::value::value<proto::ProtEntityType>((luabind::value *const)(v2 + 2624), "MONSTER", PROT_ENTITY_MONSTER);
  luabind::value::value<proto::ProtEntityType>((luabind::value *const)(v2 + 2592), "AVATAR", PROT_ENTITY_AVATAR);
  luabind::value::value<proto::ProtEntityType>((luabind::value *const)(v2 + 2560), "NONE", PROT_ENTITY_NONE);
  if ( *(char *)(((v2 + 16256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 16287) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 16287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 16256, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 16256),
    (const luabind::value *const)(v2 + 2560),
    (const luabind::value *)(v2 + 2592));
  v5 = luabind::value_vector::operator,((luabind::value_vector *const)(v2 + 16256), (const luabind::value *)(v2 + 2624));
  v6 = luabind::value_vector::operator,(v5, (const luabind::value *)(v2 + 2656));
  v7 = luabind::value_vector::operator,(v6, (const luabind::value *)(v2 + 2688));
  v8 = luabind::value_vector::operator,(v7, (const luabind::value *)(v2 + 2720));
  v9 = luabind::detail::enum_maker<luabind::class_<proto::ProtEntityType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
         (luabind::detail::enum_maker<luabind::class_<proto::ProtEntityType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 32),
         v8);
  luabind::scope::scope((luabind::scope *const)(v2 + 64), v9);
  luabind::module_::operator[](v2 + 2528, v2 + 64);
  luabind::scope::~scope((luabind::scope *const)(v2 + 64));
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 16256));
  *(_DWORD *)(((v2 + 16256) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<proto::ProtEntityType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<proto::ProtEntityType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 13696));
  v10 = ((v2 + 13696) >> 3) + 2147450880;
  *(_WORD *)v10 = -1800;
  *(_BYTE *)(v10 + 2) = -8;
  *(_WORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 2752) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  v11 = ((v2 + 13760) >> 3) + 2147450880;
  *(_WORD *)v11 = 0;
  *(_BYTE *)(v11 + 2) = 0;
  luabind::class_<data::EventType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::EventType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 13760),
    "EventType");
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, "EventType");
  *(luabind::detail::enum_maker<luabind::class_<data::EventType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 96) = luabind::class_<data::EventType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::EventType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 13760), "constants");
  *(_WORD *)(((v2 + 6848) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6848),
    "EVENT_TRAINING_FUNGUS_SELECT_DONE",
    EVENT_TRAINING_FUNGUS_SELECT_DONE);
  *(_WORD *)(((v2 + 6816) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6816),
    "EVENT_CHAR_AMUSEMENT_DUNGEON_ALL_PLAYER_ENTER",
    EVENT_CHAR_AMUSEMENT_DUNGEON_ALL_PLAYER_ENTER);
  *(_WORD *)(((v2 + 6784) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6784),
    "EVENT_GADGET_CHAIN_LEVEL_CHANGE",
    EVENT_GADGET_CHAIN_LEVEL_CHANGE);
  *(_WORD *)(((v2 + 6752) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6752),
    "EVENT_GRAVEN_PHOTO_REFRESH_GROUP",
    EVENT_GRAVEN_PHOTO_REFRESH_GROUP);
  *(_WORD *)(((v2 + 6720) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6720),
    "EVENT_GCG_TAVERN_SCENE_REFRESH",
    EVENT_GCG_TAVERN_SCENE_REFRESH);
  *(_WORD *)(((v2 + 6688) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6688),
    "EVENT_CUSTOM_GADGET_SLOT_MAP_CHANGED",
    EVENT_CUSTOM_GADGET_SLOT_MAP_CHANGED);
  *(_WORD *)(((v2 + 6656) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6656),
    "EVENT_GALLERY_CANNOT_START_AFTER_COUNTDOWN",
    EVENT_GALLERY_CANNOT_START_AFTER_COUNTDOWN);
  *(_WORD *)(((v2 + 6624) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6624),
    "EVENT_PLAYER_BACK_GALLERY_REVIVE_POINT",
    EVENT_PLAYER_BACK_GALLERY_REVIVE_POINT);
  *(_WORD *)(((v2 + 6592) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6592),
    "EVENT_PLATFORM_ARRIVAL",
    EVENT_PLATFORM_ARRIVAL);
  *(_WORD *)(((v2 + 6560) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6560),
    "EVENT_GALLERY_PLAYER_LEAVE_SCENE",
    EVENT_GALLERY_PLAYER_LEAVE_SCENE);
  *(_WORD *)(((v2 + 6528) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6528),
    "EVENT_DEATH_ZONE_STATUS_CHANGE",
    EVENT_DEATH_ZONE_STATUS_CHANGE);
  *(_WORD *)(((v2 + 6496) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6496),
    "EVENT_DEATH_ZONE_OBSERVE",
    EVENT_DEATH_ZONE_OBSERVE);
  *(_WORD *)(((v2 + 6464) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6464),
    "EVENT_ARANARA_COLLECTION_COLLECTED",
    EVENT_ARANARA_COLLECTION_COLLECTED);
  *(_WORD *)(((v2 + 6432) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6432),
    "EVENT_ECHO_SHELL_INTERACT",
    EVENT_ECHO_SHELL_INTERACT);
  *(_WORD *)(((v2 + 6400) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6400),
    "EVENT_GADGET_GIVING_TAKEBACK",
    EVENT_GADGET_GIVING_TAKEBACK);
  *(_WORD *)(((v2 + 6368) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6368),
    "EVENT_ROGUE_OPEN_ACCESS",
    EVENT_ROGUE_OPEN_ACCESS);
  *(_WORD *)(((v2 + 6336) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6336),
    "EVENT_ROGUE_CREAGE_REPAIR_GADGET",
    EVENT_ROGUE_CREAGE_REPAIR_GADGET);
  *(_WORD *)(((v2 + 6304) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6304),
    "EVENT_ROGUE_CREAGE_FIGHT_GADGET",
    EVENT_ROGUE_CREAGE_FIGHT_GADGET);
  *(_WORD *)(((v2 + 6272) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6272),
    "EVENT_ROGUE_START_FIGHT",
    EVENT_ROGUE_START_FIGHT);
  *(_WORD *)(((v2 + 6240) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6240),
    "EVENT_OBSERVATION_POINT_NOTIFY",
    EVENT_OBSERVATION_POINT_NOTIFY);
  *(_WORD *)(((v2 + 6208) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6208),
    "EVENT_GADGET_GIVING_FINISHED",
    EVENT_GADGET_GIVING_FINISHED);
  *(_WORD *)(((v2 + 6176) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6176),
    "EVENT_IRODORI_MASTER_READY",
    EVENT_IRODORI_MASTER_READY);
  *(_WORD *)(((v2 + 6144) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 6144), "EVENT_PHOTO_FINISH", EVENT_PHOTO_FINISH);
  *(_WORD *)(((v2 + 6112) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 6112), "EVENT_LUA_NOTIFY", EVENT_LUA_NOTIFY);
  *(_WORD *)(((v2 + 6080) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6080),
    "EVENT_SELECT_UIINTERACT",
    EVENT_SELECT_UIINTERACT);
  *(_WORD *)(((v2 + 6048) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6048),
    "EVENT_MICHIAE_INTERACT",
    EVENT_MICHIAE_INTERACT);
  *(_WORD *)(((v2 + 6016) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 6016),
    "EVENT_CUSTOM_DUNGEON_OFFICIAL_RESTART",
    EVENT_CUSTOM_DUNGEON_OFFICIAL_RESTART);
  *(_WORD *)(((v2 + 5984) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5984),
    "EVENT_CUSTOM_DUNGEON_EXIT_TRY",
    EVENT_CUSTOM_DUNGEON_EXIT_TRY);
  *(_WORD *)(((v2 + 5952) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5952),
    "EVENT_CUSTOM_DUNGEON_OUT_STUCK",
    EVENT_CUSTOM_DUNGEON_OUT_STUCK);
  *(_WORD *)(((v2 + 5920) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5920),
    "EVENT_CUSTOM_DUNGEON_REACTIVE",
    EVENT_CUSTOM_DUNGEON_REACTIVE);
  *(_WORD *)(((v2 + 5888) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5888),
    "EVENT_CUSTOM_DUNGEON_RESTART",
    EVENT_CUSTOM_DUNGEON_RESTART);
  *(_WORD *)(((v2 + 5856) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5856),
    "EVENT_CUSTOM_DUNGEON_START",
    EVENT_CUSTOM_DUNGEON_START);
  *(_WORD *)(((v2 + 5824) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5824),
    "EVENT_ANY_MONSTER_CAPTURE_AND_DISAPPEAR",
    EVENT_ANY_MONSTER_CAPTURE_AND_DISAPPEAR);
  *(_WORD *)(((v2 + 5792) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5792),
    "EVENT_LEVEL_TAG_CHANGE",
    EVENT_LEVEL_TAG_CHANGE);
  *(_WORD *)(((v2 + 5760) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5760),
    "EVENT_ANY_MONSTER_CAPTURE",
    EVENT_ANY_MONSTER_CAPTURE);
  *(_WORD *)(((v2 + 5728) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5728),
    "EVENT_CHALLENGE_PAUSE",
    EVENT_CHALLENGE_PAUSE);
  *(_WORD *)(((v2 + 5696) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5696),
    "EVENT_ACTIVITY_INTERACT_GADGET",
    EVENT_ACTIVITY_INTERACT_GADGET);
  *(_WORD *)(((v2 + 5664) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5664),
    "EVENT_ROGUE_CELL_FINISH_SELECT_CARD",
    EVENT_ROGUE_CELL_FINISH_SELECT_CARD);
  *(_WORD *)(((v2 + 5632) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5632),
    "EVENT_ROGUE_CELL_CONSTRUCT",
    EVENT_ROGUE_CELL_CONSTRUCT);
  *(_WORD *)(((v2 + 5600) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5600),
    "EVENT_ROGUE_CELL_STATE_CHANGE",
    EVENT_ROGUE_CELL_STATE_CHANGE);
  *(_WORD *)(((v2 + 5568) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5568),
    "EVENT_FISHING_QTE_FINISH",
    EVENT_FISHING_QTE_FINISH);
  *(_WORD *)(((v2 + 5536) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5536),
    "EVENT_FISHING_TIMEOUT_FLEE",
    EVENT_FISHING_TIMEOUT_FLEE);
  *(_WORD *)(((v2 + 5504) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 5504), "EVENT_FISHING_STOP", EVENT_FISHING_STOP);
  *(_WORD *)(((v2 + 5472) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 5472), "EVENT_FISHING_START", EVENT_FISHING_START);
  *(_WORD *)(((v2 + 5440) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5440),
    "EVENT_LUNA_RITE_SACRIFICE",
    EVENT_LUNA_RITE_SACRIFICE);
  *(_WORD *)(((v2 + 5408) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5408),
    "EVENT_SUMO_SWITCH_TEAM_EVENT",
    EVENT_SUMO_SWITCH_TEAM_EVENT);
  *(_WORD *)(((v2 + 5376) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5376),
    "EVENT_USE_WIDGET_TOY_FOX_CAMERA",
    EVENT_USE_WIDGET_TOY_FOX_CAMERA);
  *(_WORD *)(((v2 + 5344) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5344),
    "EVENT_HUNTING_FINISH_FINAL",
    EVENT_HUNTING_FINISH_FINAL);
  *(_WORD *)(((v2 + 5312) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5312),
    "EVENT_GALLERY_PROGRESS_FULL",
    EVENT_GALLERY_PROGRESS_FULL);
  *(_WORD *)(((v2 + 5280) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5280),
    "EVENT_GALLERY_PROGRESS_EMPTY",
    EVENT_GALLERY_PROGRESS_EMPTY);
  *(_WORD *)(((v2 + 5248) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5248),
    "EVENT_GALLERY_PROGRESS_PASS",
    EVENT_GALLERY_PROGRESS_PASS);
  *(_WORD *)(((v2 + 5216) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5216),
    "EVENT_SCENE_MULTISTAGE_PLAY_STAGE_START",
    EVENT_SCENE_MULTISTAGE_PLAY_STAGE_START);
  *(_WORD *)(((v2 + 5184) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 5184), "EVENT_AVATAR_DIE", EVENT_AVATAR_DIE);
  *(_WORD *)(((v2 + 5152) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5152),
    "EVENT_HIDE_AND_SEEK_PLAYER_QUIT",
    EVENT_HIDE_AND_SEEK_PLAYER_QUIT);
  *(_WORD *)(((v2 + 5120) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 5120), "EVENT_SET_GAME_TIME", EVENT_SET_GAME_TIME);
  *(_WORD *)(((v2 + 5088) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5088),
    "EVENT_POOL_MONSTER_TIDE_DIE",
    EVENT_POOL_MONSTER_TIDE_DIE);
  *(_WORD *)(((v2 + 5056) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5056),
    "EVENT_POOL_MONSTER_TIDE_CREATE",
    EVENT_POOL_MONSTER_TIDE_CREATE);
  *(_WORD *)(((v2 + 5024) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 5024),
    "EVENT_POOL_MONSTER_TIDE_OVER",
    EVENT_POOL_MONSTER_TIDE_OVER);
  *(_WORD *)(((v2 + 4992) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4992),
    "EVENT_GADGETTALK_DONE",
    EVENT_GADGETTALK_DONE);
  *(_WORD *)(((v2 + 4960) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4960),
    "EVENT_FLEUR_FAIR_DUNGEON_ALL_PLAYER_ENTER",
    EVENT_FLEUR_FAIR_DUNGEON_ALL_PLAYER_ENTER);
  *(_WORD *)(((v2 + 4928) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4928),
    "EVENT_TIME_AXIS_PASS",
    EVENT_TIME_AXIS_PASS);
  *(_WORD *)(((v2 + 4896) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 4896), "EVENT_GALLERY_STOP", EVENT_GALLERY_STOP);
  *(_WORD *)(((v2 + 4864) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4864),
    "EVENT_GALLERY_PRE_START",
    EVENT_GALLERY_PRE_START);
  *(_WORD *)(((v2 + 4832) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 4832), "EVENT_GALLERY_START", EVENT_GALLERY_START);
  *(_WORD *)(((v2 + 4800) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4800),
    "EVENT_DUNGEON_AVATAR_SLIP_DIE",
    EVENT_DUNGEON_AVATAR_SLIP_DIE);
  *(_WORD *)(((v2 + 4768) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4768),
    "EVENT_MECHANICUS_PICKED_CARD",
    EVENT_MECHANICUS_PICKED_CARD);
  *(_WORD *)(((v2 + 4736) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4736),
    "EVENT_SCENE_MULTISTAGE_PLAY_END_STAGE_REQ",
    EVENT_SCENE_MULTISTAGE_PLAY_END_STAGE_REQ);
  *(_WORD *)(((v2 + 4704) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4704),
    "EVENT_SCENE_MULTISTAGE_PLAY_STAGE_END",
    EVENT_SCENE_MULTISTAGE_PLAY_STAGE_END);
  *(_WORD *)(((v2 + 4672) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4672),
    "EVENT_GENERAL_REWARD_TAKEN",
    EVENT_GENERAL_REWARD_TAKEN);
  *(_WORD *)(((v2 + 4640) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4640),
    "EVENT_DUNGEON_ALL_AVATAR_DIE",
    EVENT_DUNGEON_ALL_AVATAR_DIE);
  *(_WORD *)(((v2 + 4608) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4608),
    "EVENT_DUNGEON_REVIVE",
    EVENT_DUNGEON_REVIVE);
  *(_WORD *)(((v2 + 4576) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4576),
    "EVENT_SCENE_MP_PLAY_ALL_AVATAR_DIE",
    EVENT_SCENE_MP_PLAY_ALL_AVATAR_DIE);
  *(_WORD *)(((v2 + 4544) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4544),
    "EVENT_OFFERING_LEVELUP",
    EVENT_OFFERING_LEVELUP);
  *(_WORD *)(((v2 + 4512) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4512),
    "EVENT_SCENE_MP_PLAY_OPEN",
    EVENT_SCENE_MP_PLAY_OPEN);
  *(_WORD *)(((v2 + 4480) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4480),
    "EVENT_MONSTER_DIE_BEFORE_LEAVE_SCENE",
    EVENT_MONSTER_DIE_BEFORE_LEAVE_SCENE);
  *(_WORD *)(((v2 + 4448) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4448),
    "EVENT_SCENE_MP_PLAY_BATTLE_INTERRUPT",
    EVENT_SCENE_MP_PLAY_BATTLE_INTERRUPT);
  *(_WORD *)(((v2 + 4416) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4416),
    "EVENT_GENERAL_REWARD_DIE",
    EVENT_GENERAL_REWARD_DIE);
  *(_WORD *)(((v2 + 4384) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4384),
    "EVENT_SEAL_BATTLE_PROGRESS_DECREASE",
    EVENT_SEAL_BATTLE_PROGRESS_DECREASE);
  *(_WORD *)(((v2 + 4352) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4352),
    "EVENT_SCENE_MP_PLAY_BATTLE_RESULT",
    EVENT_SCENE_MP_PLAY_BATTLE_RESULT);
  *(_WORD *)(((v2 + 4320) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4320),
    "EVENT_SCENE_MP_PLAY_BATTLE_STAGE_CHANGE",
    EVENT_SCENE_MP_PLAY_BATTLE_STAGE_CHANGE);
  *(_WORD *)(((v2 + 4288) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4288),
    "EVENT_SCENE_MP_PLAY_BATTLE_STATE",
    EVENT_SCENE_MP_PLAY_BATTLE_STATE);
  *(_WORD *)(((v2 + 4256) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4256),
    "EVENT_SELECT_DIFFICULTY",
    EVENT_SELECT_DIFFICULTY);
  *(_WORD *)(((v2 + 4224) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4224),
    "EVENT_MP_PLAY_BATTLE",
    EVENT_MP_PLAY_BATTLE);
  *(_WORD *)(((v2 + 4192) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4192),
    "EVENT_MP_PLAY_PREPARE_INTERRUPT",
    EVENT_MP_PLAY_PREPARE_INTERRUPT);
  *(_WORD *)(((v2 + 4160) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4160),
    "EVENT_MP_PLAY_PREPARE",
    EVENT_MP_PLAY_PREPARE);
  *(_WORD *)(((v2 + 4128) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4128),
    "EVENT_GADGET_LUA_NOTIFY",
    EVENT_GADGET_LUA_NOTIFY);
  *(_WORD *)(((v2 + 4096) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4096),
    "EVENT_GADGET_PLAY_STOP",
    EVENT_GADGET_PLAY_STOP);
  *(_WORD *)(((v2 + 4064) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4064),
    "EVENT_GADGET_PLAY_START_CD",
    EVENT_GADGET_PLAY_START_CD);
  *(_WORD *)(((v2 + 4032) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4032),
    "EVENT_GADGET_PLAY_START",
    EVENT_GADGET_PLAY_START);
  *(_WORD *)(((v2 + 4000) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 4000),
    "EVENT_BLOSSOM_CHEST_DIE",
    EVENT_BLOSSOM_CHEST_DIE);
  *(_WORD *)(((v2 + 3968) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3968),
    "EVENT_BLOSSOM_PROGRESS_FINISH",
    EVENT_BLOSSOM_PROGRESS_FINISH);
  *(_WORD *)(((v2 + 3936) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3936),
    "EVENT_SEALAMP_PHASE_CHANGE",
    EVENT_SEALAMP_PHASE_CHANGE);
  *(_WORD *)(((v2 + 3904) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3904),
    "EVENT_MONSTER_TIDE_DIE",
    EVENT_MONSTER_TIDE_DIE);
  *(_WORD *)(((v2 + 3872) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3872),
    "EVENT_MONSTER_TIDE_CREATE",
    EVENT_MONSTER_TIDE_CREATE);
  *(_WORD *)(((v2 + 3840) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3840),
    "EVENT_MONSTER_TIDE_OVER",
    EVENT_MONSTER_TIDE_OVER);
  *(_WORD *)(((v2 + 3808) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3808),
    "EVENT_SPECIFIC_GADGET_HP_CHANGE",
    EVENT_SPECIFIC_GADGET_HP_CHANGE);
  *(_WORD *)(((v2 + 3776) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3776),
    "EVENT_DUNGEON_REWARD_GET",
    EVENT_DUNGEON_REWARD_GET);
  *(_WORD *)(((v2 + 3744) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 3744), "EVENT_GROUP_REFRESH", EVENT_GROUP_REFRESH);
  *(_WORD *)(((v2 + 3712) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3712),
    "EVENT_GROUP_WILL_REFRESH",
    EVENT_GROUP_WILL_REFRESH);
  *(_WORD *)(((v2 + 3680) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3680),
    "EVENT_GROUP_WILL_UNLOAD",
    EVENT_GROUP_WILL_UNLOAD);
  *(_WORD *)(((v2 + 3648) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 3648), "EVENT_GROUP_LOAD", EVENT_GROUP_LOAD);
  *(_WORD *)(((v2 + 3616) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 3616), "EVENT_QUEST_START", EVENT_QUEST_START);
  *(_WORD *)(((v2 + 3584) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3584),
    "EVENT_UNLOCK_TRANS_POINT",
    EVENT_UNLOCK_TRANS_POINT);
  *(_WORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3552),
    "EVENT_PLATFORM_REACH_POINT",
    EVENT_PLATFORM_REACH_POINT);
  *(_WORD *)(((v2 + 3520) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3520),
    "EVENT_AVATAR_NEAR_PLATFORM",
    EVENT_AVATAR_NEAR_PLATFORM);
  *(_WORD *)(((v2 + 3488) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 3488), "EVENT_CUTSCENE_END", EVENT_CUTSCENE_END);
  *(_WORD *)(((v2 + 3456) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 3456), "EVENT_CITY_LEVELUP", EVENT_CITY_LEVELUP);
  *(_WORD *)(((v2 + 3424) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3424),
    "EVENT_MONSTER_BATTLE",
    EVENT_MONSTER_BATTLE);
  *(_WORD *)(((v2 + 3392) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 3392), "EVENT_QUEST_FINISH", EVENT_QUEST_FINISH);
  *(_WORD *)(((v2 + 3360) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3360),
    "EVENT_SEAL_BATTLE_END",
    EVENT_SEAL_BATTLE_END);
  *(_WORD *)(((v2 + 3328) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 3328), "EVENT_GATHER", EVENT_GATHER);
  *(_WORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3296),
    "EVENT_CHALLENGE_FAIL",
    EVENT_CHALLENGE_FAIL);
  *(_WORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3264),
    "EVENT_CHALLENGE_SUCCESS",
    EVENT_CHALLENGE_SUCCESS);
  *(_WORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 3232), "EVENT_TIMER_EVENT", EVENT_TIMER_EVENT);
  *(_WORD *)(((v2 + 3200) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3200),
    "EVENT_CRITY_LEVELUP_UNLOCK_DUNGEON_ENTRY",
    EVENT_CITY_LEVELUP_UNLOCK_DUNGEON_ENTRY);
  *(_WORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3168),
    "EVENT_SPECIFIC_MONSTER_HP_CHANGE",
    EVENT_SPECIFIC_MONSTER_HP_CHANGE);
  *(_WORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3136),
    "EVENT_ANY_MONSTER_LIVE",
    EVENT_ANY_MONSTER_LIVE);
  *(_WORD *)(((v2 + 3104) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3104),
    "EVENT_CLIENT_EXECUTE",
    EVENT_CLIENT_EXECUTE);
  *(_WORD *)(((v2 + 3072) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 3072), "EVENT_SELECT_OPTION", EVENT_SELECT_OPTION);
  *(_WORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3040),
    "EVENT_DUNGEON_SETTLE",
    EVENT_DUNGEON_SETTLE);
  *(_WORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 3008),
    "EVENT_GADGET_STATE_CHANGE",
    EVENT_GADGET_STATE_CHANGE);
  *(_WORD *)(((v2 + 2976) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 2976), "EVENT_GADGET_CREATE", EVENT_GADGET_CREATE);
  *(_WORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 2944), "EVENT_LEAVE_REGION", EVENT_LEAVE_REGION);
  *(_WORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 2912), "EVENT_ENTER_REGION", EVENT_ENTER_REGION);
  *(_WORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 2880),
    "EVENT_VARIABLE_CHANGE",
    EVENT_VARIABLE_CHANGE);
  *(_WORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 2848),
    "EVENT_ANY_GADGET_DIE",
    EVENT_ANY_GADGET_DIE);
  *(_DWORD *)(((v2 + 16320) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>(
    (luabind::value *const)(v2 + 2816),
    "EVENT_ANY_MONSTER_DIE",
    EVENT_ANY_MONSTER_DIE);
  *(_WORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::EventType>((luabind::value *const)(v2 + 2784), "EVENT_NONE", EVENT_NONE);
  if ( *(char *)(((v2 + 16320) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 16351) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 16351) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 16320, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 16320),
    (const luabind::value *const)(v2 + 2784),
    (const luabind::value *)(v2 + 2816));
  v12 = luabind::value_vector::operator,(
          (luabind::value_vector *const)(v2 + 16320),
          (const luabind::value *)(v2 + 2848));
  v13 = luabind::value_vector::operator,(v12, (const luabind::value *)(v2 + 2880));
  v14 = luabind::value_vector::operator,(v13, (const luabind::value *)(v2 + 2912));
  v15 = luabind::value_vector::operator,(v14, (const luabind::value *)(v2 + 2944));
  v16 = luabind::value_vector::operator,(v15, (const luabind::value *)(v2 + 2976));
  v17 = luabind::value_vector::operator,(v16, (const luabind::value *)(v2 + 3008));
  v18 = luabind::value_vector::operator,(v17, (const luabind::value *)(v2 + 3040));
  v19 = luabind::value_vector::operator,(v18, (const luabind::value *)(v2 + 3072));
  v20 = luabind::value_vector::operator,(v19, (const luabind::value *)(v2 + 3104));
  v21 = luabind::value_vector::operator,(v20, (const luabind::value *)(v2 + 3136));
  v22 = luabind::value_vector::operator,(v21, (const luabind::value *)(v2 + 3168));
  v23 = luabind::value_vector::operator,(v22, (const luabind::value *)(v2 + 3200));
  v24 = luabind::value_vector::operator,(v23, (const luabind::value *)(v2 + 3232));
  v25 = luabind::value_vector::operator,(v24, (const luabind::value *)(v2 + 3264));
  v26 = luabind::value_vector::operator,(v25, (const luabind::value *)(v2 + 3296));
  v27 = luabind::value_vector::operator,(v26, (const luabind::value *)(v2 + 3328));
  v28 = luabind::value_vector::operator,(v27, (const luabind::value *)(v2 + 3360));
  v29 = luabind::value_vector::operator,(v28, (const luabind::value *)(v2 + 3392));
  v30 = luabind::value_vector::operator,(v29, (const luabind::value *)(v2 + 3424));
  v31 = luabind::value_vector::operator,(v30, (const luabind::value *)(v2 + 3456));
  v32 = luabind::value_vector::operator,(v31, (const luabind::value *)(v2 + 3488));
  v33 = luabind::value_vector::operator,(v32, (const luabind::value *)(v2 + 3520));
  v34 = luabind::value_vector::operator,(v33, (const luabind::value *)(v2 + 3552));
  v35 = luabind::value_vector::operator,(v34, (const luabind::value *)(v2 + 3584));
  v36 = luabind::value_vector::operator,(v35, (const luabind::value *)(v2 + 3616));
  v37 = luabind::value_vector::operator,(v36, (const luabind::value *)(v2 + 3648));
  v38 = luabind::value_vector::operator,(v37, (const luabind::value *)(v2 + 3680));
  v39 = luabind::value_vector::operator,(v38, (const luabind::value *)(v2 + 3712));
  v40 = luabind::value_vector::operator,(v39, (const luabind::value *)(v2 + 3744));
  v41 = luabind::value_vector::operator,(v40, (const luabind::value *)(v2 + 3776));
  v42 = luabind::value_vector::operator,(v41, (const luabind::value *)(v2 + 3808));
  v43 = luabind::value_vector::operator,(v42, (const luabind::value *)(v2 + 3840));
  v44 = luabind::value_vector::operator,(v43, (const luabind::value *)(v2 + 3872));
  v45 = luabind::value_vector::operator,(v44, (const luabind::value *)(v2 + 3904));
  v46 = luabind::value_vector::operator,(v45, (const luabind::value *)(v2 + 3936));
  v47 = luabind::value_vector::operator,(v46, (const luabind::value *)(v2 + 3968));
  v48 = luabind::value_vector::operator,(v47, (const luabind::value *)(v2 + 4000));
  v49 = luabind::value_vector::operator,(v48, (const luabind::value *)(v2 + 4032));
  v50 = luabind::value_vector::operator,(v49, (const luabind::value *)(v2 + 4064));
  v51 = luabind::value_vector::operator,(v50, (const luabind::value *)(v2 + 4096));
  v52 = luabind::value_vector::operator,(v51, (const luabind::value *)(v2 + 4128));
  v53 = luabind::value_vector::operator,(v52, (const luabind::value *)(v2 + 4160));
  v54 = luabind::value_vector::operator,(v53, (const luabind::value *)(v2 + 4192));
  v55 = luabind::value_vector::operator,(v54, (const luabind::value *)(v2 + 4224));
  v56 = luabind::value_vector::operator,(v55, (const luabind::value *)(v2 + 4256));
  v57 = luabind::value_vector::operator,(v56, (const luabind::value *)(v2 + 4288));
  v58 = luabind::value_vector::operator,(v57, (const luabind::value *)(v2 + 4320));
  v59 = luabind::value_vector::operator,(v58, (const luabind::value *)(v2 + 4352));
  v60 = luabind::value_vector::operator,(v59, (const luabind::value *)(v2 + 4384));
  v61 = luabind::value_vector::operator,(v60, (const luabind::value *)(v2 + 4416));
  v62 = luabind::value_vector::operator,(v61, (const luabind::value *)(v2 + 4448));
  v63 = luabind::value_vector::operator,(v62, (const luabind::value *)(v2 + 4480));
  v64 = luabind::value_vector::operator,(v63, (const luabind::value *)(v2 + 4512));
  v65 = luabind::value_vector::operator,(v64, (const luabind::value *)(v2 + 4544));
  v66 = luabind::value_vector::operator,(v65, (const luabind::value *)(v2 + 4576));
  v67 = luabind::value_vector::operator,(v66, (const luabind::value *)(v2 + 4608));
  v68 = luabind::value_vector::operator,(v67, (const luabind::value *)(v2 + 4640));
  v69 = luabind::value_vector::operator,(v68, (const luabind::value *)(v2 + 4672));
  v70 = luabind::value_vector::operator,(v69, (const luabind::value *)(v2 + 4704));
  v71 = luabind::value_vector::operator,(v70, (const luabind::value *)(v2 + 4736));
  v72 = luabind::value_vector::operator,(v71, (const luabind::value *)(v2 + 4768));
  v73 = luabind::value_vector::operator,(v72, (const luabind::value *)(v2 + 4800));
  v74 = luabind::value_vector::operator,(v73, (const luabind::value *)(v2 + 4832));
  v75 = luabind::value_vector::operator,(v74, (const luabind::value *)(v2 + 4864));
  v76 = luabind::value_vector::operator,(v75, (const luabind::value *)(v2 + 4896));
  v77 = luabind::value_vector::operator,(v76, (const luabind::value *)(v2 + 4928));
  v78 = luabind::value_vector::operator,(v77, (const luabind::value *)(v2 + 4960));
  v79 = luabind::value_vector::operator,(v78, (const luabind::value *)(v2 + 4992));
  v80 = luabind::value_vector::operator,(v79, (const luabind::value *)(v2 + 5024));
  v81 = luabind::value_vector::operator,(v80, (const luabind::value *)(v2 + 5056));
  v82 = luabind::value_vector::operator,(v81, (const luabind::value *)(v2 + 5088));
  v83 = luabind::value_vector::operator,(v82, (const luabind::value *)(v2 + 5120));
  v84 = luabind::value_vector::operator,(v83, (const luabind::value *)(v2 + 5152));
  v85 = luabind::value_vector::operator,(v84, (const luabind::value *)(v2 + 5184));
  v86 = luabind::value_vector::operator,(v85, (const luabind::value *)(v2 + 5216));
  v87 = luabind::value_vector::operator,(v86, (const luabind::value *)(v2 + 5248));
  v88 = luabind::value_vector::operator,(v87, (const luabind::value *)(v2 + 5280));
  v89 = luabind::value_vector::operator,(v88, (const luabind::value *)(v2 + 5312));
  v90 = luabind::value_vector::operator,(v89, (const luabind::value *)(v2 + 5344));
  v91 = luabind::value_vector::operator,(v90, (const luabind::value *)(v2 + 5376));
  v92 = luabind::value_vector::operator,(v91, (const luabind::value *)(v2 + 5408));
  v93 = luabind::value_vector::operator,(v92, (const luabind::value *)(v2 + 5440));
  v94 = luabind::value_vector::operator,(v93, (const luabind::value *)(v2 + 5472));
  v95 = luabind::value_vector::operator,(v94, (const luabind::value *)(v2 + 5504));
  v96 = luabind::value_vector::operator,(v95, (const luabind::value *)(v2 + 5536));
  v97 = luabind::value_vector::operator,(v96, (const luabind::value *)(v2 + 5568));
  v98 = luabind::value_vector::operator,(v97, (const luabind::value *)(v2 + 5600));
  v99 = luabind::value_vector::operator,(v98, (const luabind::value *)(v2 + 5632));
  v100 = luabind::value_vector::operator,(v99, (const luabind::value *)(v2 + 5664));
  v101 = luabind::value_vector::operator,(v100, (const luabind::value *)(v2 + 5696));
  v102 = luabind::value_vector::operator,(v101, (const luabind::value *)(v2 + 5728));
  v103 = luabind::value_vector::operator,(v102, (const luabind::value *)(v2 + 5760));
  v104 = luabind::value_vector::operator,(v103, (const luabind::value *)(v2 + 5792));
  v105 = luabind::value_vector::operator,(v104, (const luabind::value *)(v2 + 5824));
  v106 = luabind::value_vector::operator,(v105, (const luabind::value *)(v2 + 5856));
  v107 = luabind::value_vector::operator,(v106, (const luabind::value *)(v2 + 5888));
  v108 = luabind::value_vector::operator,(v107, (const luabind::value *)(v2 + 5920));
  v109 = luabind::value_vector::operator,(v108, (const luabind::value *)(v2 + 5952));
  v110 = luabind::value_vector::operator,(v109, (const luabind::value *)(v2 + 5984));
  v111 = luabind::value_vector::operator,(v110, (const luabind::value *)(v2 + 6016));
  v112 = luabind::value_vector::operator,(v111, (const luabind::value *)(v2 + 6048));
  v113 = luabind::value_vector::operator,(v112, (const luabind::value *)(v2 + 6080));
  v114 = luabind::value_vector::operator,(v113, (const luabind::value *)(v2 + 6112));
  v115 = luabind::value_vector::operator,(v114, (const luabind::value *)(v2 + 6144));
  v116 = luabind::value_vector::operator,(v115, (const luabind::value *)(v2 + 6176));
  v117 = luabind::value_vector::operator,(v116, (const luabind::value *)(v2 + 6208));
  v118 = luabind::value_vector::operator,(v117, (const luabind::value *)(v2 + 6240));
  v119 = luabind::value_vector::operator,(v118, (const luabind::value *)(v2 + 6272));
  v120 = luabind::value_vector::operator,(v119, (const luabind::value *)(v2 + 6304));
  v121 = luabind::value_vector::operator,(v120, (const luabind::value *)(v2 + 6336));
  v122 = luabind::value_vector::operator,(v121, (const luabind::value *)(v2 + 6368));
  v123 = luabind::value_vector::operator,(v122, (const luabind::value *)(v2 + 6400));
  v124 = luabind::value_vector::operator,(v123, (const luabind::value *)(v2 + 6432));
  v125 = luabind::value_vector::operator,(v124, (const luabind::value *)(v2 + 6464));
  v126 = luabind::value_vector::operator,(v125, (const luabind::value *)(v2 + 6496));
  v127 = luabind::value_vector::operator,(v126, (const luabind::value *)(v2 + 6528));
  v128 = luabind::value_vector::operator,(v127, (const luabind::value *)(v2 + 6560));
  v129 = luabind::value_vector::operator,(v128, (const luabind::value *)(v2 + 6592));
  v130 = luabind::value_vector::operator,(v129, (const luabind::value *)(v2 + 6624));
  v131 = luabind::value_vector::operator,(v130, (const luabind::value *)(v2 + 6656));
  v132 = luabind::value_vector::operator,(v131, (const luabind::value *)(v2 + 6688));
  v133 = luabind::value_vector::operator,(v132, (const luabind::value *)(v2 + 6720));
  v134 = luabind::value_vector::operator,(v133, (const luabind::value *)(v2 + 6752));
  v135 = luabind::value_vector::operator,(v134, (const luabind::value *)(v2 + 6784));
  v136 = luabind::value_vector::operator,(v135, (const luabind::value *)(v2 + 6816));
  v137 = luabind::value_vector::operator,(v136, (const luabind::value *)(v2 + 6848));
  v138 = luabind::detail::enum_maker<luabind::class_<data::EventType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::EventType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 96),
           v137);
  luabind::scope::scope((luabind::scope *const)(v2 + 128), v138);
  luabind::module_::operator[](v2 + 2752, v2 + 128);
  luabind::scope::~scope((luabind::scope *const)(v2 + 128));
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 16320));
  *(_DWORD *)(((v2 + 16320) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 2976) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3072) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3104) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3200) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3328) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3360) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3392) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3424) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3456) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3488) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3520) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3584) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3616) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3648) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3680) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3712) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3744) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3776) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3808) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3840) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3872) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3904) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3936) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 3968) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4000) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4032) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4064) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4096) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4128) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4160) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4192) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4224) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4256) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4288) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4320) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4352) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4384) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4416) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4448) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4480) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4512) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4544) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4576) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4608) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4640) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4672) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4704) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4736) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4768) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4800) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4832) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4864) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4896) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4928) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4960) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 4992) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5024) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5056) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5088) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5120) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5152) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5184) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5216) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5248) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5280) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5312) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5344) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5376) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5408) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5440) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5472) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5504) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5536) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5568) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5600) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5632) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5664) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5696) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5728) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5760) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5792) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5824) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5856) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5888) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5920) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5952) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 5984) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6016) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6048) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6080) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6112) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6144) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6176) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6208) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6240) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6272) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6304) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6336) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6368) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6400) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6432) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6464) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6496) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6528) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6560) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6592) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6624) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6656) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6688) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6720) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6752) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6784) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6816) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6848) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::EventType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::EventType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 13760));
  v139 = ((v2 + 13760) >> 3) + 2147450880;
  *(_WORD *)v139 = -1800;
  *(_BYTE *)(v139 + 2) = -8;
  *(_WORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6880) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 6880) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 6880) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  v140 = ((v2 + 13824) >> 3) + 2147450880;
  *(_WORD *)v140 = 0;
  *(_BYTE *)(v140 + 2) = 0;
  luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 13824),
    "Event");
  v141 = luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def_readonly<Event,data::EventType>(
           (luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 13824),
           "type",
           0LL);
  v142 = luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def_readonly<Event,std::string>(
           v141,
           "source_name",
           (std::string *)8);
  v143 = luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def_readonly<Event,unsigned int>(
           v142,
           "source_eid",
           (unsigned int *)4);
  v144 = luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def_readonly<Event,unsigned int>(
           v143,
           "target_eid",
           (unsigned int *)0x28);
  v145 = luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def_readonly<Event,int>(
           v144,
           "param1",
           (int *)0x2C);
  v146 = luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def_readonly<Event,int>(
           v145,
           "param2",
           (int *)0x30);
  v147 = luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def_readonly<Event,int>(
           v146,
           "param3",
           (int *)0x34);
  v148 = luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def_readonly<Event,int>(
           v147,
           "param4",
           (int *)0x38);
  v149 = luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def_readonly<Event,unsigned int>(
           v148,
           off_1A18A740,
           (unsigned int *)0x3C);
  v150 = luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def_readonly<Event,std::string>(
           v149,
           "param_str1",
           (std::string *)0x40);
  luabind::scope::scope((luabind::scope *const)(v2 + 160), v150);
  luabind::module_::operator[](v2 + 6880, v2 + 160);
  luabind::scope::~scope((luabind::scope *const)(v2 + 160));
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<Event,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 13824));
  v151 = ((v2 + 13824) >> 3) + 2147450880;
  *(_WORD *)v151 = -1800;
  *(_BYTE *)(v151 + 2) = -8;
  *(_WORD *)(((v2 + 6880) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6912) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 6912) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 6912) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  v152 = ((v2 + 13888) >> 3) + 2147450880;
  *(_WORD *)v152 = 0;
  *(_BYTE *)(v152 + 2) = 0;
  luabind::class_<data::RegionShape,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::RegionShape,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 13888),
    "RegionShape");
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 192, "RegionShape");
  *(luabind::detail::enum_maker<luabind::class_<data::RegionShape,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 192) = luabind::class_<data::RegionShape,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::RegionShape,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 13888), "constants");
  *(_WORD *)(((v2 + 7072) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::RegionShape>((luabind::value *const)(v2 + 7072), "POLYGON", REGION_POLYGON);
  *(_WORD *)(((v2 + 7040) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::RegionShape>((luabind::value *const)(v2 + 7040), "CYLINDER", REGION_CYLINDER);
  *(_WORD *)(((v2 + 7008) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::RegionShape>((luabind::value *const)(v2 + 7008), "CUBIC", REGION_CUBIC);
  *(_DWORD *)(((v2 + 0x4000) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 6976) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::RegionShape>((luabind::value *const)(v2 + 6976), "SPHERE", REGION_SPHERE);
  *(_WORD *)(((v2 + 6944) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::RegionShape>((luabind::value *const)(v2 + 6944), "NONE", REGION_NONE);
  if ( *(char *)(((v2 + 0x4000) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 16415) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 16415) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 0x4000, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 0x4000),
    (const luabind::value *const)(v2 + 6944),
    (const luabind::value *)(v2 + 6976));
  v153 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 0x4000),
           (const luabind::value *)(v2 + 7008));
  v154 = luabind::value_vector::operator,(v153, (const luabind::value *)(v2 + 7040));
  v155 = luabind::value_vector::operator,(v154, (const luabind::value *)(v2 + 7072));
  v156 = luabind::detail::enum_maker<luabind::class_<data::RegionShape,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::RegionShape,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 192),
           v155);
  luabind::scope::scope((luabind::scope *const)(v2 + 224), v156);
  luabind::module_::operator[](v2 + 6912, v2 + 224);
  luabind::scope::~scope((luabind::scope *const)(v2 + 224));
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 0x4000));
  *(_DWORD *)(((v2 + 0x4000) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 6944) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 6976) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7008) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7040) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7072) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::RegionShape,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::RegionShape,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 13888));
  v157 = ((v2 + 13888) >> 3) + 2147450880;
  *(_WORD *)v157 = -1800;
  *(_BYTE *)(v157 + 2) = -8;
  *(_WORD *)(((v2 + 6912) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7104) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 7104) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 7104) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
  v158 = ((v2 + 13952) >> 3) + 2147450880;
  *(_WORD *)v158 = 0;
  *(_BYTE *)(v158 + 2) = 0;
  luabind::class_<data::GadgetState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::GadgetState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 13952),
    "GadgetState");
  if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 256, "GadgetState");
  *(luabind::detail::enum_maker<luabind::class_<data::GadgetState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 256) = luabind::class_<data::GadgetState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::GadgetState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 13952), "constants");
  *(_WORD *)(((v2 + 7808) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7808), "Action03", 903);
  *(_WORD *)(((v2 + 7776) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7776), "Action02", 902);
  *(_WORD *)(((v2 + 7744) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7744), "Action01", 901);
  *(_WORD *)(((v2 + 7712) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7712), "StatueActive", 401);
  *(_WORD *)(((v2 + 7680) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7680), "CrystalDrain", 304);
  *(_WORD *)(((v2 + 7648) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7648), "CrystalExplode", 303);
  *(_WORD *)(((v2 + 7616) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7616), "CrystalResonate2", 302);
  *(_WORD *)(((v2 + 7584) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7584), "CrystalResonate1", 301);
  *(_WORD *)(((v2 + 7552) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7552), "DestroyState", 300);
  *(_WORD *)(((v2 + 7520) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7520), "GearAction2", 204);
  *(_WORD *)(((v2 + 7488) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7488), "GearAction1", 203);
  *(_WORD *)(((v2 + 7456) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7456), "GearStop", 202);
  *(_WORD *)(((v2 + 7424) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7424), "GearStart", 201);
  *(_WORD *)(((v2 + 7392) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7392), "ExcitedState", 200);
  *(_WORD *)(((v2 + 7360) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7360), "ChestRock", 106);
  *(_WORD *)(((v2 + 7328) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7328), "ChestFrozen", 105);
  *(_WORD *)(((v2 + 7296) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7296), "ChestBramble", 104);
  *(_WORD *)(((v2 + 7264) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7264), "ChestTrap", 103);
  *(_WORD *)(((v2 + 7232) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7232), "ChestOpened", 102);
  *(_WORD *)(((v2 + 7200) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7200), "ChestLocked", 101);
  *(_DWORD *)(((v2 + 16448) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 7168) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7168), "GatherDrop", 1);
  *(_WORD *)(((v2 + 7136) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 7136), "Default", 0);
  if ( *(char *)(((v2 + 16448) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 16479) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 16479) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 16448, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 16448),
    (const luabind::value *const)(v2 + 7136),
    (const luabind::value *)(v2 + 7168));
  v159 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 16448),
           (const luabind::value *)(v2 + 7200));
  v160 = luabind::value_vector::operator,(v159, (const luabind::value *)(v2 + 7232));
  v161 = luabind::value_vector::operator,(v160, (const luabind::value *)(v2 + 7264));
  v162 = luabind::value_vector::operator,(v161, (const luabind::value *)(v2 + 7296));
  v163 = luabind::value_vector::operator,(v162, (const luabind::value *)(v2 + 7328));
  v164 = luabind::value_vector::operator,(v163, (const luabind::value *)(v2 + 7360));
  v165 = luabind::value_vector::operator,(v164, (const luabind::value *)(v2 + 7392));
  v166 = luabind::value_vector::operator,(v165, (const luabind::value *)(v2 + 7424));
  v167 = luabind::value_vector::operator,(v166, (const luabind::value *)(v2 + 7456));
  v168 = luabind::value_vector::operator,(v167, (const luabind::value *)(v2 + 7488));
  v169 = luabind::value_vector::operator,(v168, (const luabind::value *)(v2 + 7520));
  v170 = luabind::value_vector::operator,(v169, (const luabind::value *)(v2 + 7552));
  v171 = luabind::value_vector::operator,(v170, (const luabind::value *)(v2 + 7584));
  v172 = luabind::value_vector::operator,(v171, (const luabind::value *)(v2 + 7616));
  v173 = luabind::value_vector::operator,(v172, (const luabind::value *)(v2 + 7648));
  v174 = luabind::value_vector::operator,(v173, (const luabind::value *)(v2 + 7680));
  v175 = luabind::value_vector::operator,(v174, (const luabind::value *)(v2 + 7712));
  v176 = luabind::value_vector::operator,(v175, (const luabind::value *)(v2 + 7744));
  v177 = luabind::value_vector::operator,(v176, (const luabind::value *)(v2 + 7776));
  v178 = luabind::value_vector::operator,(v177, (const luabind::value *)(v2 + 7808));
  v179 = luabind::detail::enum_maker<luabind::class_<data::GadgetState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::GadgetState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 256),
           v178);
  luabind::scope::scope((luabind::scope *const)(v2 + 288), v179);
  luabind::module_::operator[](v2 + 7104, v2 + 288);
  luabind::scope::~scope((luabind::scope *const)(v2 + 288));
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 16448));
  *(_DWORD *)(((v2 + 16448) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 7136) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7168) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7200) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7232) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7264) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7296) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7328) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7360) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7392) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7424) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7456) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7488) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7520) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7552) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7584) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7616) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7648) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7680) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7712) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7744) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7776) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7808) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::GadgetState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::GadgetState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 13952));
  v180 = ((v2 + 13952) >> 3) + 2147450880;
  *(_WORD *)v180 = -1800;
  *(_BYTE *)(v180 + 2) = -8;
  *(_WORD *)(((v2 + 7104) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7840) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 7840) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 7840) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
  v181 = ((v2 + 14016) >> 3) + 2147450880;
  *(_WORD *)v181 = 0;
  *(_BYTE *)(v181 + 2) = 0;
  luabind::class_<data::QuestState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::QuestState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14016),
    "QuestState");
  if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 320, "QuestState");
  *(luabind::detail::enum_maker<luabind::class_<data::QuestState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 320) = luabind::class_<data::QuestState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::QuestState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14016), "constants");
  *(_WORD *)(((v2 + 8000) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::QuestState>((luabind::value *const)(v2 + 8000), "FAILED", QUEST_STATE_FAILED);
  *(_WORD *)(((v2 + 7968) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::QuestState>((luabind::value *const)(v2 + 7968), "FINISHED", QUEST_STATE_FINISHED);
  *(_WORD *)(((v2 + 7936) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::QuestState>((luabind::value *const)(v2 + 7936), "UNFINISHED", QUEST_STATE_UNFINISHED);
  *(_DWORD *)(((v2 + 16512) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 7904) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::QuestState>((luabind::value *const)(v2 + 7904), "UNSTARTED", QUEST_STATE_UNSTARTED);
  *(_WORD *)(((v2 + 7872) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::QuestState>((luabind::value *const)(v2 + 7872), "NONE", QUEST_STATE_NONE);
  if ( *(char *)(((v2 + 16512) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 16543) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 16543) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 16512, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 16512),
    (const luabind::value *const)(v2 + 7872),
    (const luabind::value *)(v2 + 7904));
  v182 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 16512),
           (const luabind::value *)(v2 + 7936));
  v183 = luabind::value_vector::operator,(v182, (const luabind::value *)(v2 + 7968));
  v184 = luabind::value_vector::operator,(v183, (const luabind::value *)(v2 + 8000));
  v185 = luabind::detail::enum_maker<luabind::class_<data::QuestState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::QuestState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 320),
           v184);
  luabind::scope::scope((luabind::scope *const)(v2 + 352), v185);
  luabind::module_::operator[](v2 + 7840, v2 + 352);
  luabind::scope::~scope((luabind::scope *const)(v2 + 352));
  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 16512));
  *(_DWORD *)(((v2 + 16512) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 7872) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7904) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7936) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 7968) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8000) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::QuestState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::QuestState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14016));
  v186 = ((v2 + 14016) >> 3) + 2147450880;
  *(_WORD *)v186 = -1800;
  *(_BYTE *)(v186 + 2) = -8;
  *(_WORD *)(((v2 + 7840) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8032) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 8032) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 8032) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
  v187 = ((v2 + 14080) >> 3) + 2147450880;
  *(_WORD *)v187 = 0;
  *(_BYTE *)(v187 + 2) = 0;
  luabind::class_<data::ElementType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::ElementType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14080),
    "ElementType");
  if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 384, "ElementType");
  *(luabind::detail::enum_maker<luabind::class_<data::ElementType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 384) = luabind::class_<data::ElementType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::ElementType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14080), "constants");
  *(_WORD *)(((v2 + 8288) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 8288), "Rock", 8);
  *(_WORD *)(((v2 + 8256) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 8256), "Wind", 7);
  *(_WORD *)(((v2 + 8224) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 8224), off_1A18B080, 5);
  *(_WORD *)(((v2 + 0x2000) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 0x2000), "Electric", 4);
  *(_WORD *)(((v2 + 8160) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 8160), "Grass", 3);
  *(_WORD *)(((v2 + 8128) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 8128), "Water", 2);
  *(_DWORD *)(((v2 + 16576) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 8096) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 8096), "Fire", 1);
  *(_WORD *)(((v2 + 8064) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 8064), "None", 0);
  if ( *(char *)(((v2 + 16576) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 16607) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 16607) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 16576, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 16576),
    (const luabind::value *const)(v2 + 8064),
    (const luabind::value *)(v2 + 8096));
  v188 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 16576),
           (const luabind::value *)(v2 + 8128));
  v189 = luabind::value_vector::operator,(v188, (const luabind::value *)(v2 + 8160));
  v190 = luabind::value_vector::operator,(v189, (const luabind::value *)(v2 + 0x2000));
  v191 = luabind::value_vector::operator,(v190, (const luabind::value *)(v2 + 8224));
  v192 = luabind::value_vector::operator,(v191, (const luabind::value *)(v2 + 8256));
  v193 = luabind::value_vector::operator,(v192, (const luabind::value *)(v2 + 8288));
  v194 = luabind::detail::enum_maker<luabind::class_<data::ElementType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::ElementType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 384),
           v193);
  luabind::scope::scope((luabind::scope *const)(v2 + 416), v194);
  luabind::module_::operator[](v2 + 8032, v2 + 416);
  luabind::scope::~scope((luabind::scope *const)(v2 + 416));
  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 16576));
  *(_DWORD *)(((v2 + 16576) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 8064) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8096) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8128) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8160) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 0x2000) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8224) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8256) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8288) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::ElementType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::ElementType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14080));
  v195 = ((v2 + 14080) >> 3) + 2147450880;
  *(_WORD *)v195 = -1800;
  *(_BYTE *)(v195 + 2) = -8;
  *(_WORD *)(((v2 + 8032) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8320) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 8320) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 8320) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
  v196 = ((v2 + 14144) >> 3) + 2147450880;
  *(_WORD *)v196 = 0;
  *(_BYTE *)(v196 + 2) = 0;
  luabind::class_<data::GadgetType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::GadgetType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14144),
    "GadgetType");
  if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 448, "GadgetType");
  *(luabind::detail::enum_maker<luabind::class_<data::GadgetType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 448) = luabind::class_<data::GadgetType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::GadgetType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14144), "constants");
  *(_WORD *)(((v2 + 8448) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::GadgetType>(
    (luabind::value *const)(v2 + 8448),
    "GADGET_DUNGEON_PASS_CHEST",
    GADGET_DUNGEON_PASS_CHEST);
  *(_WORD *)(((v2 + 8416) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::GadgetType>(
    (luabind::value *const)(v2 + 8416),
    "GADGET_DUNGEON_SECRET_CHEST",
    GADGET_DUNGEON_SECRET_CHEST);
  *(_DWORD *)(((v2 + 16640) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 8384) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::GadgetType>((luabind::value *const)(v2 + 8384), "GADGET_WORLD_CHECT", GADGET_WORLD_CHECT);
  *(_WORD *)(((v2 + 8352) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::GadgetType>((luabind::value *const)(v2 + 8352), "GADGET_NONE", GADGET_NONE);
  if ( *(char *)(((v2 + 16640) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 16671) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 16671) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 16640, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 16640),
    (const luabind::value *const)(v2 + 8352),
    (const luabind::value *)(v2 + 8384));
  v197 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 16640),
           (const luabind::value *)(v2 + 8416));
  v198 = luabind::value_vector::operator,(v197, (const luabind::value *)(v2 + 8448));
  v199 = luabind::detail::enum_maker<luabind::class_<data::GadgetType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::GadgetType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 448),
           v198);
  luabind::scope::scope((luabind::scope *const)(v2 + 480), v199);
  luabind::module_::operator[](v2 + 8320, v2 + 480);
  luabind::scope::~scope((luabind::scope *const)(v2 + 480));
  *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 16640));
  *(_DWORD *)(((v2 + 16640) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 8352) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8384) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8416) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8448) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::GadgetType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::GadgetType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14144));
  v200 = ((v2 + 14144) >> 3) + 2147450880;
  *(_WORD *)v200 = -1800;
  *(_BYTE *)(v200 + 2) = -8;
  *(_WORD *)(((v2 + 8320) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8480) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 8480) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 8480) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
  v201 = ((v2 + 14208) >> 3) + 2147450880;
  *(_WORD *)v201 = 0;
  *(_BYTE *)(v201 + 2) = 0;
  luabind::class_<data::FatherChallengeProperty,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::FatherChallengeProperty,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14208),
    "FatherChallengeProperty");
  if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 512, "FatherChallengeProperty");
  *(luabind::detail::enum_maker<luabind::class_<data::FatherChallengeProperty,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 512) = luabind::class_<data::FatherChallengeProperty,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::FatherChallengeProperty,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14208), "constants");
  *(_WORD *)(((v2 + 8640) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::FatherChallengeProperty>((luabind::value *const)(v2 + 8640), "SUM_FAIL", SUM_FAIL);
  *(_WORD *)(((v2 + 8608) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::FatherChallengeProperty>((luabind::value *const)(v2 + 8608), "SUM_SUCC", SUM_SUCC);
  *(_WORD *)(((v2 + 8576) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::FatherChallengeProperty>((luabind::value *const)(v2 + 8576), "CUR_FAIL", CUR_FAIL);
  *(_DWORD *)(((v2 + 16704) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 8544) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::FatherChallengeProperty>((luabind::value *const)(v2 + 8544), "CUR_SUCC", CUR_SUCC);
  *(_WORD *)(((v2 + 8512) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::FatherChallengeProperty>((luabind::value *const)(v2 + 8512), "DURATION", DURATION);
  if ( *(char *)(((v2 + 16704) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 16735) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 16735) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 16704, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 16704),
    (const luabind::value *const)(v2 + 8512),
    (const luabind::value *)(v2 + 8544));
  v202 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 16704),
           (const luabind::value *)(v2 + 8576));
  v203 = luabind::value_vector::operator,(v202, (const luabind::value *)(v2 + 8608));
  v204 = luabind::value_vector::operator,(v203, (const luabind::value *)(v2 + 8640));
  v205 = luabind::detail::enum_maker<luabind::class_<data::FatherChallengeProperty,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::FatherChallengeProperty,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 512),
           v204);
  luabind::scope::scope((luabind::scope *const)(v2 + 544), v205);
  luabind::module_::operator[](v2 + 8480, v2 + 544);
  luabind::scope::~scope((luabind::scope *const)(v2 + 544));
  *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 16704));
  *(_DWORD *)(((v2 + 16704) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 8512) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8544) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8576) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8608) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8640) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::FatherChallengeProperty,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::FatherChallengeProperty,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14208));
  v206 = ((v2 + 14208) >> 3) + 2147450880;
  *(_WORD *)v206 = -1800;
  *(_BYTE *)(v206 + 2) = -8;
  *(_WORD *)(((v2 + 8480) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8672) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 8672) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 8672) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
  v207 = ((v2 + 14272) >> 3) + 2147450880;
  *(_WORD *)v207 = 0;
  *(_BYTE *)(v207 + 2) = 0;
  luabind::class_<data::GroupKillPolicy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::GroupKillPolicy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14272),
    "GroupKillPolicy");
  if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 576, "GroupKillPolicy");
  *(luabind::detail::enum_maker<luabind::class_<data::GroupKillPolicy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 576) = luabind::class_<data::GroupKillPolicy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::GroupKillPolicy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14272), "constants");
  *(_WORD *)(((v2 + 8832) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::GroupKillPolicy>((luabind::value *const)(v2 + 8832), "GROUP_KILL_NPC", GROUP_KILL_NPC);
  *(_WORD *)(((v2 + 8800) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::GroupKillPolicy>(
    (luabind::value *const)(v2 + 8800),
    "GROUP_KILL_GADGET",
    GROUP_KILL_GADGET);
  *(_WORD *)(((v2 + 8768) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::GroupKillPolicy>(
    (luabind::value *const)(v2 + 8768),
    "GROUP_KILL_MONSTER",
    GROUP_KILL_MONSTER);
  *(_DWORD *)(((v2 + 16768) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 8736) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::GroupKillPolicy>((luabind::value *const)(v2 + 8736), "GROUP_KILL_ALL", GROUP_KILL_ALL);
  *(_WORD *)(((v2 + 8704) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::GroupKillPolicy>((luabind::value *const)(v2 + 8704), "GROUP_KILL_NONE", GROUP_KILL_NONE);
  if ( *(char *)(((v2 + 16768) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 16799) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 16799) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 16768, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 16768),
    (const luabind::value *const)(v2 + 8704),
    (const luabind::value *)(v2 + 8736));
  v208 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 16768),
           (const luabind::value *)(v2 + 8768));
  v209 = luabind::value_vector::operator,(v208, (const luabind::value *)(v2 + 8800));
  v210 = luabind::value_vector::operator,(v209, (const luabind::value *)(v2 + 8832));
  v211 = luabind::detail::enum_maker<luabind::class_<data::GroupKillPolicy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::GroupKillPolicy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 576),
           v210);
  luabind::scope::scope((luabind::scope *const)(v2 + 608), v211);
  luabind::module_::operator[](v2 + 8672, v2 + 608);
  luabind::scope::~scope((luabind::scope *const)(v2 + 608));
  *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 16768));
  *(_DWORD *)(((v2 + 16768) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 8704) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8736) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8768) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8800) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8832) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::GroupKillPolicy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::GroupKillPolicy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14272));
  v212 = ((v2 + 14272) >> 3) + 2147450880;
  *(_WORD *)v212 = -1800;
  *(_BYTE *)(v212 + 2) = -8;
  *(_WORD *)(((v2 + 8672) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8864) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 8864) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 8864) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
  v213 = ((v2 + 14336) >> 3) + 2147450880;
  *(_WORD *)v213 = 0;
  *(_BYTE *)(v213 + 2) = 0;
  luabind::class_<data::StrikeType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::StrikeType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14336),
    "StrikeType");
  if ( *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 640, "StrikeType");
  *(luabind::detail::enum_maker<luabind::class_<data::StrikeType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 640) = luabind::class_<data::StrikeType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::StrikeType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14336), "constants");
  *(_WORD *)(((v2 + 9056) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 9056), "None", 5);
  *(_WORD *)(((v2 + 9024) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 9024), "Spear", 4);
  *(_WORD *)(((v2 + 8992) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 8992), "Pierce", 3);
  *(_WORD *)(((v2 + 8960) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 8960), "Blunt", 2);
  *(_DWORD *)(((v2 + 16832) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 8928) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 8928), "Slash", 1);
  *(_WORD *)(((v2 + 8896) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 8896), "Default", 0);
  if ( *(char *)(((v2 + 16832) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 16863) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 16863) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 16832, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 16832),
    (const luabind::value *const)(v2 + 8896),
    (const luabind::value *)(v2 + 8928));
  v214 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 16832),
           (const luabind::value *)(v2 + 8960));
  v215 = luabind::value_vector::operator,(v214, (const luabind::value *)(v2 + 8992));
  v216 = luabind::value_vector::operator,(v215, (const luabind::value *)(v2 + 9024));
  v217 = luabind::value_vector::operator,(v216, (const luabind::value *)(v2 + 9056));
  v218 = luabind::detail::enum_maker<luabind::class_<data::StrikeType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::StrikeType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 640),
           v217);
  luabind::scope::scope((luabind::scope *const)(v2 + 672), v218);
  luabind::module_::operator[](v2 + 8864, v2 + 672);
  luabind::scope::~scope((luabind::scope *const)(v2 + 672));
  *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 16832));
  *(_DWORD *)(((v2 + 16832) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 8896) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8928) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8960) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 8992) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9024) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9056) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::StrikeType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::StrikeType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14336));
  v219 = ((v2 + 14336) >> 3) + 2147450880;
  *(_WORD *)v219 = -1800;
  *(_BYTE *)(v219 + 2) = -8;
  *(_WORD *)(((v2 + 8864) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9088) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 9088) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 9088) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
  v220 = ((v2 + 14400) >> 3) + 2147450880;
  *(_WORD *)v220 = 0;
  *(_BYTE *)(v220 + 2) = 0;
  luabind::class_<proto::SealBattleType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<proto::SealBattleType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14400),
    "SealBattleType");
  if ( *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 704, "SealBattleType");
  *(luabind::detail::enum_maker<luabind::class_<proto::SealBattleType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 704) = luabind::class_<proto::SealBattleType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<proto::SealBattleType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14400), "constants");
  *(_WORD *)(((v2 + 9184) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::SealBattleType>(
    (luabind::value *const)(v2 + 9184),
    "ENERGY_CHARGE",
    SEAL_BATTLE_ENERGY_CHARGE);
  *(_DWORD *)(((v2 + 16896) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 9152) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::SealBattleType>(
    (luabind::value *const)(v2 + 9152),
    "KILL_MONSTER",
    SEAL_BATTLE_KILL_MONSTER);
  *(_WORD *)(((v2 + 9120) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::SealBattleType>((luabind::value *const)(v2 + 9120), "KEEP_ALIVE", SEAL_BATTLE_KEEP_ALIVE);
  if ( *(char *)(((v2 + 16896) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 16927) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 16927) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 16896, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 16896),
    (const luabind::value *const)(v2 + 9120),
    (const luabind::value *)(v2 + 9152));
  v221 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 16896),
           (const luabind::value *)(v2 + 9184));
  v222 = luabind::detail::enum_maker<luabind::class_<proto::SealBattleType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<proto::SealBattleType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 704),
           v221);
  luabind::scope::scope((luabind::scope *const)(v2 + 736), v222);
  luabind::module_::operator[](v2 + 9088, v2 + 736);
  luabind::scope::~scope((luabind::scope *const)(v2 + 736));
  *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 16896));
  *(_DWORD *)(((v2 + 16896) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 9120) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9152) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9184) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<proto::SealBattleType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<proto::SealBattleType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14400));
  v223 = ((v2 + 14400) >> 3) + 2147450880;
  *(_WORD *)v223 = -1800;
  *(_BYTE *)(v223 + 2) = -8;
  *(_WORD *)(((v2 + 9088) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9216) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 9216) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 9216) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
  v224 = ((v2 + 14464) >> 3) + 2147450880;
  *(_WORD *)v224 = 0;
  *(_BYTE *)(v224 + 2) = 0;
  luabind::class_<proto::GadgetBornType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<proto::GadgetBornType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14464),
    "GadgetBornType");
  if ( *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 768, "GadgetBornType");
  *(luabind::detail::enum_maker<luabind::class_<proto::GadgetBornType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 768) = luabind::class_<proto::GadgetBornType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<proto::GadgetBornType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14464), "constants");
  *(_DWORD *)(((v2 + 16960) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 9280) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::GadgetBornType>((luabind::value *const)(v2 + 9280), "GROUND", GADGET_BORN_GROUND);
  *(_WORD *)(((v2 + 9248) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::GadgetBornType>((luabind::value *const)(v2 + 9248), "NONE", GADGET_BORN_NONE);
  if ( *(char *)(((v2 + 16960) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 16991) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 16991) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 16960, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 16960),
    (const luabind::value *const)(v2 + 9248),
    (const luabind::value *)(v2 + 9280));
  v225 = luabind::detail::enum_maker<luabind::class_<proto::GadgetBornType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<proto::GadgetBornType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 768),
           (const luabind::value_vector *)(v2 + 16960));
  luabind::scope::scope((luabind::scope *const)(v2 + 800), v225);
  luabind::module_::operator[](v2 + 9216, v2 + 800);
  luabind::scope::~scope((luabind::scope *const)(v2 + 800));
  *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 16960));
  *(_DWORD *)(((v2 + 16960) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 9248) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9280) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<proto::GadgetBornType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<proto::GadgetBornType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14464));
  v226 = ((v2 + 14464) >> 3) + 2147450880;
  *(_WORD *)v226 = -1800;
  *(_BYTE *)(v226 + 2) = -8;
  *(_WORD *)(((v2 + 9216) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9312) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 9312) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 9312) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
  v227 = ((v2 + 14528) >> 3) + 2147450880;
  *(_WORD *)v227 = 0;
  *(_BYTE *)(v227 + 2) = 0;
  luabind::class_<data::ClimateType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::ClimateType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14528),
    "ClimateType");
  if ( *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 832, "ClimateType");
  *(luabind::detail::enum_maker<luabind::class_<data::ClimateType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 832) = luabind::class_<data::ClimateType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::ClimateType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14528), "constants");
  *(_WORD *)(((v2 + 9568) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::ClimateType>((luabind::value *const)(v2 + 9568), "CLIMATE_DESERT", CLIMATE_DESERT);
  *(_WORD *)(((v2 + 9536) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::ClimateType>((luabind::value *const)(v2 + 9536), "CLIMATE_MIST", CLIMATE_MIST);
  *(_WORD *)(((v2 + 9504) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::ClimateType>((luabind::value *const)(v2 + 9504), "CLIMATE_SNOW", CLIMATE_SNOW);
  *(_WORD *)(((v2 + 9472) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::ClimateType>(
    (luabind::value *const)(v2 + 9472),
    "CLIMATE_THUNDERSTORM",
    CLIMATE_THUNDERSTORM);
  *(_WORD *)(((v2 + 9440) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::ClimateType>((luabind::value *const)(v2 + 9440), "CLIMATE_RAIN", CLIMATE_RAIN);
  *(_WORD *)(((v2 + 9408) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::ClimateType>((luabind::value *const)(v2 + 9408), "CLIMATE_CLOUDY", CLIMATE_CLOUDY);
  *(_DWORD *)(((v2 + 17024) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 9376) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::ClimateType>((luabind::value *const)(v2 + 9376), "CLIMATE_SUNNY", CLIMATE_SUNNY);
  *(_WORD *)(((v2 + 9344) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::ClimateType>((luabind::value *const)(v2 + 9344), "CLIMATE_NONE", CLIMATE_NONE);
  if ( *(char *)(((v2 + 17024) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 17055) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 17055) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 17024, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 17024),
    (const luabind::value *const)(v2 + 9344),
    (const luabind::value *)(v2 + 9376));
  v228 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 17024),
           (const luabind::value *)(v2 + 9408));
  v229 = luabind::value_vector::operator,(v228, (const luabind::value *)(v2 + 9440));
  v230 = luabind::value_vector::operator,(v229, (const luabind::value *)(v2 + 9472));
  v231 = luabind::value_vector::operator,(v230, (const luabind::value *)(v2 + 9504));
  v232 = luabind::value_vector::operator,(v231, (const luabind::value *)(v2 + 9536));
  v233 = luabind::value_vector::operator,(v232, (const luabind::value *)(v2 + 9568));
  v234 = luabind::detail::enum_maker<luabind::class_<data::ClimateType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::ClimateType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 832),
           v233);
  luabind::scope::scope((luabind::scope *const)(v2 + 864), v234);
  luabind::module_::operator[](v2 + 9312, v2 + 864);
  luabind::scope::~scope((luabind::scope *const)(v2 + 864));
  *(_BYTE *)(((v2 + 864) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 17024));
  *(_DWORD *)(((v2 + 17024) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 9344) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9376) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9408) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9440) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9472) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9504) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9536) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9568) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 832) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::ClimateType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::ClimateType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14528));
  v235 = ((v2 + 14528) >> 3) + 2147450880;
  *(_WORD *)v235 = -1800;
  *(_BYTE *)(v235 + 2) = -8;
  *(_WORD *)(((v2 + 9312) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9600) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 9600) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 9600) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
  v236 = ((v2 + 14592) >> 3) + 2147450880;
  *(_WORD *)v236 = 0;
  *(_BYTE *)(v236 + 2) = 0;
  luabind::class_<proto::MonsterGuestBanDrop,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<proto::MonsterGuestBanDrop,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14592),
    "MonsterGuestBanDrop");
  if ( *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 896, "MonsterGuestBanDrop");
  *(luabind::detail::enum_maker<luabind::class_<proto::MonsterGuestBanDrop,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 896) = luabind::class_<proto::MonsterGuestBanDrop,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<proto::MonsterGuestBanDrop,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14592), "constans");
  *(_WORD *)(((v2 + 9792) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::MonsterGuestBanDrop>(
    (luabind::value *const)(v2 + 9792),
    "SUBFIELD",
    MONSTER_GUEST_BAN_SUBFIELD);
  *(_WORD *)(((v2 + 9760) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::MonsterGuestBanDrop>(
    (luabind::value *const)(v2 + 9760),
    "DROP_HP",
    MONSTER_GUEST_BAN_DROP_HP);
  *(_WORD *)(((v2 + 9728) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::MonsterGuestBanDrop>(
    (luabind::value *const)(v2 + 9728),
    "DIE_ACTIVITY",
    MONSTER_GUEST_BAN_DIE_ACTIVITY);
  *(_WORD *)(((v2 + 9696) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::MonsterGuestBanDrop>(
    (luabind::value *const)(v2 + 9696),
    "DIE_EXCEL",
    MONSTER_GUEST_BAN_DIE_EXCEL);
  *(_DWORD *)(((v2 + 17088) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 9664) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::MonsterGuestBanDrop>(
    (luabind::value *const)(v2 + 9664),
    "DIE_LUA",
    MONSTER_GUEST_BAN_DIE_LUA);
  *(_WORD *)(((v2 + 9632) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::MonsterGuestBanDrop>(
    (luabind::value *const)(v2 + 9632),
    "DIE_EXP",
    MONSTER_GUEST_BAN_DIE_EXP);
  if ( *(char *)(((v2 + 17088) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 17119) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 17119) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 17088, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 17088),
    (const luabind::value *const)(v2 + 9632),
    (const luabind::value *)(v2 + 9664));
  v237 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 17088),
           (const luabind::value *)(v2 + 9696));
  v238 = luabind::value_vector::operator,(v237, (const luabind::value *)(v2 + 9728));
  v239 = luabind::value_vector::operator,(v238, (const luabind::value *)(v2 + 9760));
  v240 = luabind::value_vector::operator,(v239, (const luabind::value *)(v2 + 9792));
  v241 = luabind::detail::enum_maker<luabind::class_<proto::MonsterGuestBanDrop,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<proto::MonsterGuestBanDrop,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 896),
           v240);
  luabind::scope::scope((luabind::scope *const)(v2 + 928), v241);
  luabind::module_::operator[](v2 + 9600, v2 + 928);
  luabind::scope::~scope((luabind::scope *const)(v2 + 928));
  *(_BYTE *)(((v2 + 928) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 17088));
  *(_DWORD *)(((v2 + 17088) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 9632) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9664) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9696) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9728) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9760) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9792) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 896) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<proto::MonsterGuestBanDrop,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<proto::MonsterGuestBanDrop,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14592));
  v242 = ((v2 + 14592) >> 3) + 2147450880;
  *(_WORD *)v242 = -1800;
  *(_BYTE *)(v242 + 2) = -8;
  *(_WORD *)(((v2 + 9600) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9824) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 9824) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 9824) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
  v243 = ((v2 + 14656) >> 3) + 2147450880;
  *(_WORD *)v243 = 0;
  *(_BYTE *)(v243 + 2) = 0;
  luabind::class_<proto::GadgetGuestBanDrop,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<proto::GadgetGuestBanDrop,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14656),
    "GadgetGuestBanDrop");
  if ( *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 960, "GadgetGuestBanDrop");
  *(luabind::detail::enum_maker<luabind::class_<proto::GadgetGuestBanDrop,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 960) = luabind::class_<proto::GadgetGuestBanDrop,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<proto::GadgetGuestBanDrop,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14656), "constants");
  *(_DWORD *)(((v2 + 17152) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 9888) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::GadgetGuestBanDrop>(
    (luabind::value *const)(v2 + 9888),
    "SUBFIELD",
    GADGET_GUEST_BAN_SUBFIELD);
  *(_WORD *)(((v2 + 9856) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::GadgetGuestBanDrop>(
    (luabind::value *const)(v2 + 9856),
    "DIE_LUA",
    GADGET_GUEST_BAN_DIE_LUA);
  if ( *(char *)(((v2 + 17152) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 17183) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 17183) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 17152, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 17152),
    (const luabind::value *const)(v2 + 9856),
    (const luabind::value *)(v2 + 9888));
  v244 = luabind::detail::enum_maker<luabind::class_<proto::GadgetGuestBanDrop,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<proto::GadgetGuestBanDrop,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 960),
           (const luabind::value_vector *)(v2 + 17152));
  luabind::scope::scope((luabind::scope *const)(v2 + 992), v244);
  luabind::module_::operator[](v2 + 9824, v2 + 992);
  luabind::scope::~scope((luabind::scope *const)(v2 + 992));
  *(_BYTE *)(((v2 + 992) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 17152));
  *(_DWORD *)(((v2 + 17152) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 9856) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9888) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 960) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<proto::GadgetGuestBanDrop,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<proto::GadgetGuestBanDrop,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14656));
  v245 = ((v2 + 14656) >> 3) + 2147450880;
  *(_WORD *)v245 = -1800;
  *(_BYTE *)(v245 + 2) = -8;
  *(_WORD *)(((v2 + 9824) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9920) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 9920) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 9920) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
  v246 = ((v2 + 14720) >> 3) + 2147450880;
  *(_WORD *)v246 = 0;
  *(_BYTE *)(v246 + 2) = 0;
  luabind::class_<data::BlossomRefreshType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::BlossomRefreshType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14720),
    "BlossomRefreshType");
  if ( *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 1024, "BlossomRefreshType");
  *(luabind::detail::enum_maker<luabind::class_<data::BlossomRefreshType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 1024) = luabind::class_<data::BlossomRefreshType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::BlossomRefreshType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14720), "constants");
  *(_WORD *)(((v2 + 10048) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::BlossomRefreshType>(
    (luabind::value *const)(v2 + 10048),
    "BLOSSOM_REFRESH_EXP",
    BLOSSOM_REFRESH_EXP);
  *(_WORD *)(((v2 + 10016) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::BlossomRefreshType>(
    (luabind::value *const)(v2 + 10016),
    "BLOSSOM_REFRESH_WEAPON",
    BLOSSOM_REFRESH_WEAPON);
  *(_DWORD *)(((v2 + 17216) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 9984) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::BlossomRefreshType>(
    (luabind::value *const)(v2 + 9984),
    "BLOSSOM_REFRESH_SCOIN",
    BLOSSOM_REFRESH_SCOIN);
  *(_WORD *)(((v2 + 9952) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::BlossomRefreshType>(
    (luabind::value *const)(v2 + 9952),
    "BLOSSOM_REFRESH_NONE",
    BLOSSOM_REFRESH_NONE);
  if ( *(char *)(((v2 + 17216) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 17247) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 17247) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 17216, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 17216),
    (const luabind::value *const)(v2 + 9952),
    (const luabind::value *)(v2 + 9984));
  v247 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 17216),
           (const luabind::value *)(v2 + 10016));
  v248 = luabind::value_vector::operator,(v247, (const luabind::value *)(v2 + 10048));
  v249 = luabind::detail::enum_maker<luabind::class_<data::BlossomRefreshType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::BlossomRefreshType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 1024),
           v248);
  luabind::scope::scope((luabind::scope *const)(v2 + 1056), v249);
  luabind::module_::operator[](v2 + 9920, v2 + 1056);
  luabind::scope::~scope((luabind::scope *const)(v2 + 1056));
  *(_BYTE *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 17216));
  *(_DWORD *)(((v2 + 17216) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 9952) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 9984) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10016) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10048) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::BlossomRefreshType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::BlossomRefreshType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14720));
  v250 = ((v2 + 14720) >> 3) + 2147450880;
  *(_WORD *)v250 = -1800;
  *(_BYTE *)(v250 + 2) = -8;
  *(_WORD *)(((v2 + 9920) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10080) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 10080) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 10080) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
  v251 = ((v2 + 14784) >> 3) + 2147450880;
  *(_WORD *)v251 = 0;
  *(_BYTE *)(v251 + 2) = 0;
  luabind::class_<proto::BlossomScheduleState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<proto::BlossomScheduleState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14784),
    "BlossomScheduleState");
  if ( *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 1088, "BlossomScheduleState");
  *(luabind::detail::enum_maker<luabind::class_<proto::BlossomScheduleState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 1088) = luabind::class_<proto::BlossomScheduleState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<proto::BlossomScheduleState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14784), "constants");
  *(_WORD *)(((v2 + 10208) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::BlossomScheduleState>(
    (luabind::value *const)(v2 + 10208),
    "BLOSSOM_SCHEDULE_REWARD",
    BLOSSOM_SCHEDULE_REWARD);
  *(_WORD *)(((v2 + 10176) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::BlossomScheduleState>(
    (luabind::value *const)(v2 + 10176),
    "BLOSSOM_SCHEDULE_IN_PROGRESS",
    BLOSSOM_SCHEDULE_IN_PROGRESS);
  *(_DWORD *)(((v2 + 17280) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 10144) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::BlossomScheduleState>(
    (luabind::value *const)(v2 + 10144),
    "BLOSSOM_SCHEDULE_INIT",
    BLOSSOM_SCHEDULE_INIT);
  *(_WORD *)(((v2 + 10112) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::BlossomScheduleState>(
    (luabind::value *const)(v2 + 10112),
    "BLOSSOM_SCHEDULE_NONE",
    BLOSSOM_SCHEDULE_NONE);
  if ( *(char *)(((v2 + 17280) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 17311) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 17311) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 17280, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 17280),
    (const luabind::value *const)(v2 + 10112),
    (const luabind::value *)(v2 + 10144));
  v252 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 17280),
           (const luabind::value *)(v2 + 10176));
  v253 = luabind::value_vector::operator,(v252, (const luabind::value *)(v2 + 10208));
  v254 = luabind::detail::enum_maker<luabind::class_<proto::BlossomScheduleState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<proto::BlossomScheduleState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 1088),
           v253);
  luabind::scope::scope((luabind::scope *const)(v2 + 1120), v254);
  luabind::module_::operator[](v2 + 10080, v2 + 1120);
  luabind::scope::~scope((luabind::scope *const)(v2 + 1120));
  *(_BYTE *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 17280));
  *(_DWORD *)(((v2 + 17280) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 10112) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10144) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10176) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10208) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<proto::BlossomScheduleState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<proto::BlossomScheduleState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14784));
  v255 = ((v2 + 14784) >> 3) + 2147450880;
  *(_WORD *)v255 = -1800;
  *(_BYTE *)(v255 + 2) = -8;
  *(_WORD *)(((v2 + 10080) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10240) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 10240) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 10240) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
  v256 = ((v2 + 14848) >> 3) + 2147450880;
  *(_WORD *)v256 = 0;
  *(_BYTE *)(v256 + 2) = 0;
  luabind::class_<proto::GroupLoadStrategy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<proto::GroupLoadStrategy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14848),
    "GroupLoadStrategy");
  if ( *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 1152, "GroupLoadStrategy");
  *(luabind::detail::enum_maker<luabind::class_<proto::GroupLoadStrategy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 1152) = luabind::class_<proto::GroupLoadStrategy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<proto::GroupLoadStrategy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14848), "constants");
  *(_WORD *)(((v2 + 10368) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::GroupLoadStrategy>((luabind::value *const)(v2 + 10368), "GROUP_LOAD_ALL", GROUP_LOAD_ALL);
  *(_WORD *)(((v2 + 10336) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::GroupLoadStrategy>(
    (luabind::value *const)(v2 + 10336),
    "GROUP_LOAD_MULTI",
    GROUP_LOAD_MULTI);
  *(_DWORD *)(((v2 + 17344) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 10304) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::GroupLoadStrategy>(
    (luabind::value *const)(v2 + 10304),
    "GROUP_LOAD_SINGLE",
    GROUP_LOAD_SINGLE);
  *(_WORD *)(((v2 + 10272) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::GroupLoadStrategy>(
    (luabind::value *const)(v2 + 10272),
    "GROUP_LOAD_NONE",
    GROUP_LOAD_NONE);
  if ( *(char *)(((v2 + 17344) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 17375) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 17375) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 17344, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 17344),
    (const luabind::value *const)(v2 + 10272),
    (const luabind::value *)(v2 + 10304));
  v257 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 17344),
           (const luabind::value *)(v2 + 10336));
  v258 = luabind::value_vector::operator,(v257, (const luabind::value *)(v2 + 10368));
  v259 = luabind::detail::enum_maker<luabind::class_<proto::GroupLoadStrategy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<proto::GroupLoadStrategy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 1152),
           v258);
  luabind::scope::scope((luabind::scope *const)(v2 + 1184), v259);
  luabind::module_::operator[](v2 + 10240, v2 + 1184);
  luabind::scope::~scope((luabind::scope *const)(v2 + 1184));
  *(_BYTE *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 17344));
  *(_DWORD *)(((v2 + 17344) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 10272) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10304) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10336) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10368) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<proto::GroupLoadStrategy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<proto::GroupLoadStrategy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14848));
  v260 = ((v2 + 14848) >> 3) + 2147450880;
  *(_WORD *)v260 = -1800;
  *(_BYTE *)(v260 + 2) = -8;
  *(_WORD *)(((v2 + 10240) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10400) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 10400) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 10400) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
  v261 = ((v2 + 14912) >> 3) + 2147450880;
  *(_WORD *)v261 = 0;
  *(_BYTE *)(v261 + 2) = 0;
  luabind::class_<proto::GadgetPlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<proto::GadgetPlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14912),
    "GadgetPlayType");
  if ( *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 1216, "GadgetPlayType");
  *(luabind::detail::enum_maker<luabind::class_<proto::GadgetPlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 1216) = luabind::class_<proto::GadgetPlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<proto::GadgetPlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14912), "constants");
  *(_DWORD *)(((v2 + 17408) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 10464) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::GadgetPlayType>(
    (luabind::value *const)(v2 + 10464),
    "GADGET_PLAY_CRUSIBLE",
    GADGET_PLAY_CRUSIBLE);
  *(_WORD *)(((v2 + 10432) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::GadgetPlayType>(
    (luabind::value *const)(v2 + 10432),
    "GAGDGET_PLAY_NONE",
    GADGET_PLAY_NONE);
  if ( *(char *)(((v2 + 17408) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 17439) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 17439) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 17408, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 17408),
    (const luabind::value *const)(v2 + 10432),
    (const luabind::value *)(v2 + 10464));
  v262 = luabind::detail::enum_maker<luabind::class_<proto::GadgetPlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<proto::GadgetPlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 1216),
           (const luabind::value_vector *)(v2 + 17408));
  luabind::scope::scope((luabind::scope *const)(v2 + 1248), v262);
  luabind::module_::operator[](v2 + 10400, v2 + 1248);
  luabind::scope::~scope((luabind::scope *const)(v2 + 1248));
  *(_BYTE *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 17408));
  *(_DWORD *)(((v2 + 17408) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 10432) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10464) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<proto::GadgetPlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<proto::GadgetPlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14912));
  v263 = ((v2 + 14912) >> 3) + 2147450880;
  *(_WORD *)v263 = -1800;
  *(_BYTE *)(v263 + 2) = -8;
  *(_WORD *)(((v2 + 10400) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10496) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 10496) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 10496) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
  v264 = ((v2 + 14976) >> 3) + 2147450880;
  *(_WORD *)v264 = 0;
  *(_BYTE *)(v264 + 2) = 0;
  luabind::class_<proto::MonsterBornType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<proto::MonsterBornType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14976),
    "MonsterBornType");
  if ( *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 1280, "MonsterBornType");
  *(luabind::detail::enum_maker<luabind::class_<proto::MonsterBornType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 1280) = luabind::class_<proto::MonsterBornType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<proto::MonsterBornType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14976), "constants");
  *(_WORD *)(((v2 + 10592) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::MonsterBornType>(
    (luabind::value *const)(v2 + 10592),
    "MONSTER_BORN_RANDOM",
    MONSTER_BORN_RANDOM);
  *(_DWORD *)(((v2 + 17472) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 10560) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::MonsterBornType>(
    (luabind::value *const)(v2 + 10560),
    "MONSTER_BORN_DEFAULT",
    MONSTER_BORN_DEFAULT);
  *(_WORD *)(((v2 + 10528) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::MonsterBornType>(
    (luabind::value *const)(v2 + 10528),
    "MONSTER_BORN_NONE",
    MONSTER_BORN_NONE);
  if ( *(char *)(((v2 + 17472) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 17503) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 17503) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 17472, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 17472),
    (const luabind::value *const)(v2 + 10528),
    (const luabind::value *)(v2 + 10560));
  v265 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 17472),
           (const luabind::value *)(v2 + 10592));
  v266 = luabind::detail::enum_maker<luabind::class_<proto::MonsterBornType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<proto::MonsterBornType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 1280),
           v265);
  luabind::scope::scope((luabind::scope *const)(v2 + 1312), v266);
  luabind::module_::operator[](v2 + 10496, v2 + 1312);
  luabind::scope::~scope((luabind::scope *const)(v2 + 1312));
  *(_BYTE *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 17472));
  *(_DWORD *)(((v2 + 17472) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 10528) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10560) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10592) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<proto::MonsterBornType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<proto::MonsterBornType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 14976));
  v267 = ((v2 + 14976) >> 3) + 2147450880;
  *(_WORD *)v267 = -1800;
  *(_BYTE *)(v267 + 2) = -8;
  *(_WORD *)(((v2 + 10496) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10624) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 10624) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 10624) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
  v268 = ((v2 + 15040) >> 3) + 2147450880;
  *(_WORD *)v268 = 0;
  *(_BYTE *)(v268 + 2) = 0;
  luabind::class_<proto::ScenePlayBattleState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<proto::ScenePlayBattleState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15040),
    "ScenePlayBattleState");
  if ( *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 1344, "ScenePlayBattleState");
  *(luabind::detail::enum_maker<luabind::class_<proto::ScenePlayBattleState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 1344) = luabind::class_<proto::ScenePlayBattleState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<proto::ScenePlayBattleState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15040), "constants");
  *(_WORD *)(((v2 + 10848) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::ScenePlayBattleState>(
    (luabind::value *const)(v2 + 10848),
    "SCENE_PLAY_BATTLE_STOP",
    SCENE_PLAY_BATTLE_STOP);
  *(_WORD *)(((v2 + 10816) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::ScenePlayBattleState>(
    (luabind::value *const)(v2 + 10816),
    "SCENE_PLAY_BATTLE_START",
    SCENE_PLAY_BATTLE_START);
  *(_WORD *)(((v2 + 10784) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::ScenePlayBattleState>(
    (luabind::value *const)(v2 + 10784),
    "SCENE_PLAY_BATTLE_PRESTART",
    SCENE_PLAY_BATTLE_PRESTART);
  *(_WORD *)(((v2 + 10752) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::ScenePlayBattleState>(
    (luabind::value *const)(v2 + 10752),
    "SCENE_PLAY_BATTLE_READY",
    SCENE_PLAY_BATTLE_READY);
  *(_WORD *)(((v2 + 10720) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::ScenePlayBattleState>(
    (luabind::value *const)(v2 + 10720),
    "SCENE_PLAY_BATTLE_PREPARE",
    SCENE_PLAY_BATTLE_PREPARE);
  *(_DWORD *)(((v2 + 17536) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 10688) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::ScenePlayBattleState>(
    (luabind::value *const)(v2 + 10688),
    "SCENE_PLAY_BATTLE_INIT",
    SCENE_PLAY_BATTLE_INIT);
  *(_WORD *)(((v2 + 10656) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::ScenePlayBattleState>(
    (luabind::value *const)(v2 + 10656),
    "SCENE_PLAY_BATTLE_NONE",
    SCENE_PLAY_BATTLE_NONE);
  if ( *(char *)(((v2 + 17536) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 17567) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 17567) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 17536, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 17536),
    (const luabind::value *const)(v2 + 10656),
    (const luabind::value *)(v2 + 10688));
  v269 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 17536),
           (const luabind::value *)(v2 + 10720));
  v270 = luabind::value_vector::operator,(v269, (const luabind::value *)(v2 + 10752));
  v271 = luabind::value_vector::operator,(v270, (const luabind::value *)(v2 + 10784));
  v272 = luabind::value_vector::operator,(v271, (const luabind::value *)(v2 + 10816));
  v273 = luabind::value_vector::operator,(v272, (const luabind::value *)(v2 + 10848));
  v274 = luabind::detail::enum_maker<luabind::class_<proto::ScenePlayBattleState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<proto::ScenePlayBattleState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 1344),
           v273);
  luabind::scope::scope((luabind::scope *const)(v2 + 1376), v274);
  luabind::module_::operator[](v2 + 10624, v2 + 1376);
  luabind::scope::~scope((luabind::scope *const)(v2 + 1376));
  *(_BYTE *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 17536));
  *(_DWORD *)(((v2 + 17536) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 10656) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10688) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10720) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10752) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10784) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10816) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10848) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<proto::ScenePlayBattleState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<proto::ScenePlayBattleState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15040));
  v275 = ((v2 + 15040) >> 3) + 2147450880;
  *(_WORD *)v275 = -1800;
  *(_BYTE *)(v275 + 2) = -8;
  *(_WORD *)(((v2 + 10624) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10880) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 10880) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 10880) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
  v276 = ((v2 + 15104) >> 3) + 2147450880;
  *(_WORD *)v276 = 0;
  *(_BYTE *)(v276 + 2) = 0;
  luabind::class_<data::ChallengeEventMarkType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::ChallengeEventMarkType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15104),
    "ChallengeEventMarkType");
  if ( *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 1408, "ChallengeEventMarkType");
  *(luabind::detail::enum_maker<luabind::class_<data::ChallengeEventMarkType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 1408) = luabind::class_<data::ChallengeEventMarkType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::ChallengeEventMarkType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15104), "constants");
  *(_WORD *)(((v2 + 11040) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::ChallengeEventMarkType>(
    (luabind::value *const)(v2 + 11040),
    "SUMMER_TIME_SPRINT_BOAT_GATHER_POINT",
    SUMMER_TIME_SPRINT_BOAT_GATHER_POINT);
  *(_WORD *)(((v2 + 11008) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::ChallengeEventMarkType>(
    (luabind::value *const)(v2 + 11008),
    "SUMMER_TIME_SPRINT_BOAT_TIME",
    SUMMER_TIME_SPRINT_BOAT_TIME);
  *(_WORD *)(((v2 + 10976) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::ChallengeEventMarkType>(
    (luabind::value *const)(v2 + 10976),
    "FLIGHT_GATHER_POINT",
    FLIGHT_GATHER_POINT);
  *(_DWORD *)(((v2 + 17600) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 10944) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::ChallengeEventMarkType>((luabind::value *const)(v2 + 10944), "FLIGHT_TIME", FLIGHT_TIME);
  *(_WORD *)(((v2 + 10912) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::ChallengeEventMarkType>(
    (luabind::value *const)(v2 + 10912),
    "CHALLENGE_EVENT_NONE",
    CHALLENGE_EVENT_NONE);
  if ( *(char *)(((v2 + 17600) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 17631) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 17631) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 17600, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 17600),
    (const luabind::value *const)(v2 + 10912),
    (const luabind::value *)(v2 + 10944));
  v277 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 17600),
           (const luabind::value *)(v2 + 10976));
  v278 = luabind::value_vector::operator,(v277, (const luabind::value *)(v2 + 11008));
  v279 = luabind::value_vector::operator,(v278, (const luabind::value *)(v2 + 11040));
  v280 = luabind::detail::enum_maker<luabind::class_<data::ChallengeEventMarkType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::ChallengeEventMarkType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 1408),
           v279);
  luabind::scope::scope((luabind::scope *const)(v2 + 1440), v280);
  luabind::module_::operator[](v2 + 10880, v2 + 1440);
  luabind::scope::~scope((luabind::scope *const)(v2 + 1440));
  *(_BYTE *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 17600));
  *(_DWORD *)(((v2 + 17600) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 10912) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10944) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 10976) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11008) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11040) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::ChallengeEventMarkType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::ChallengeEventMarkType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15104));
  v281 = ((v2 + 15104) >> 3) + 2147450880;
  *(_WORD *)v281 = -1800;
  *(_BYTE *)(v281 + 2) = -8;
  *(_WORD *)(((v2 + 10880) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11072) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 11072) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 11072) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
  v282 = ((v2 + 15168) >> 3) + 2147450880;
  *(_WORD *)v282 = 0;
  *(_BYTE *)(v282 + 2) = 0;
  luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15168),
    "Vector3");
  v283 = luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def_readonly<Vector3,float>(
           (luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15168),
           "x",
           0LL);
  v284 = luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def_readonly<Vector3,float>(
           v283,
           "y",
           (float *)4);
  v285 = luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::def_readonly<Vector3,float>(
           v284,
           "z",
           (float *)8);
  luabind::scope::scope((luabind::scope *const)(v2 + 1472), v285);
  luabind::module_::operator[](v2 + 11072, v2 + 1472);
  luabind::scope::~scope((luabind::scope *const)(v2 + 1472));
  *(_BYTE *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<Vector3,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15168));
  v286 = ((v2 + 15168) >> 3) + 2147450880;
  *(_WORD *)v286 = -1800;
  *(_BYTE *)(v286 + 2) = -8;
  *(_WORD *)(((v2 + 11072) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11104) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 11104) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 11104) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
  v287 = ((v2 + 15232) >> 3) + 2147450880;
  *(_WORD *)v287 = 0;
  *(_BYTE *)(v287 + 2) = 0;
  luabind::class_<data::VisionLevelType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::VisionLevelType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15232),
    "VisionLevelType");
  if ( *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 1504, "VisionLevelType");
  *(luabind::detail::enum_maker<luabind::class_<data::VisionLevelType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 1504) = luabind::class_<data::VisionLevelType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::VisionLevelType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15232), "constants");
  *(_WORD *)(((v2 + 11296) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::VisionLevelType>(
    (luabind::value *const)(v2 + 11296),
    "VISION_LEVEL_SUPER_NEARBY",
    VISION_LEVEL_SUPER_NEARBY);
  *(_WORD *)(((v2 + 11264) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::VisionLevelType>(
    (luabind::value *const)(v2 + 11264),
    "VISION_LEVEL_NEARBY",
    VISION_LEVEL_NEARBY);
  *(_WORD *)(((v2 + 11232) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::VisionLevelType>(
    (luabind::value *const)(v2 + 11232),
    "VISION_LEVEL_SUPER",
    VISION_LEVEL_SUPER);
  *(_WORD *)(((v2 + 11200) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::VisionLevelType>(
    (luabind::value *const)(v2 + 11200),
    "VISION_LEVEL_REMOTE",
    VISION_LEVEL_REMOTE);
  *(_DWORD *)(((v2 + 17664) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 11168) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::VisionLevelType>(
    (luabind::value *const)(v2 + 11168),
    "VISION_LEVEL_LITTLE_REMOTE",
    VISION_LEVEL_LITTLE_REMOTE);
  *(_WORD *)(((v2 + 11136) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::VisionLevelType>(
    (luabind::value *const)(v2 + 11136),
    "VISION_LEVEL_NORMAL",
    VISION_LEVEL_NORMAL);
  if ( *(char *)(((v2 + 17664) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 17695) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 17695) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 17664, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 17664),
    (const luabind::value *const)(v2 + 11136),
    (const luabind::value *)(v2 + 11168));
  v288 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 17664),
           (const luabind::value *)(v2 + 11200));
  v289 = luabind::value_vector::operator,(v288, (const luabind::value *)(v2 + 11232));
  v290 = luabind::value_vector::operator,(v289, (const luabind::value *)(v2 + 11264));
  v291 = luabind::value_vector::operator,(v290, (const luabind::value *)(v2 + 11296));
  v292 = luabind::detail::enum_maker<luabind::class_<data::VisionLevelType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::VisionLevelType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 1504),
           v291);
  luabind::scope::scope((luabind::scope *const)(v2 + 1536), v292);
  luabind::module_::operator[](v2 + 11104, v2 + 1536);
  luabind::scope::~scope((luabind::scope *const)(v2 + 1536));
  *(_BYTE *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 17664));
  *(_DWORD *)(((v2 + 17664) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 11136) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11168) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11200) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11232) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11264) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11296) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::VisionLevelType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::VisionLevelType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15232));
  v293 = ((v2 + 15232) >> 3) + 2147450880;
  *(_WORD *)v293 = -1800;
  *(_BYTE *)(v293 + 2) = -8;
  *(_WORD *)(((v2 + 11104) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11328) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 11328) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 11328) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
  v294 = ((v2 + 15296) >> 3) + 2147450880;
  *(_WORD *)v294 = 0;
  *(_BYTE *)(v294 + 2) = 0;
  luabind::class_<data::RouteType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::RouteType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15296),
    "RouteType");
  if ( *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 1568, "RouteType");
  *(luabind::detail::enum_maker<luabind::class_<data::RouteType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 1568) = luabind::class_<data::RouteType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::RouteType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15296), "constants");
  *(_WORD *)(((v2 + 11424) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 11424), "Loop", 2);
  *(_DWORD *)(((v2 + 17728) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 11392) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 11392), "Reciprocate", 1);
  *(_WORD *)(((v2 + 11360) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 11360), "OneWay", 0);
  if ( *(char *)(((v2 + 17728) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 17759) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 17759) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 17728, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 17728),
    (const luabind::value *const)(v2 + 11360),
    (const luabind::value *)(v2 + 11392));
  v295 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 17728),
           (const luabind::value *)(v2 + 11424));
  v296 = luabind::detail::enum_maker<luabind::class_<data::RouteType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::RouteType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 1568),
           v295);
  luabind::scope::scope((luabind::scope *const)(v2 + 1600), v296);
  luabind::module_::operator[](v2 + 11328, v2 + 1600);
  luabind::scope::~scope((luabind::scope *const)(v2 + 1600));
  *(_BYTE *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 17728));
  *(_DWORD *)(((v2 + 17728) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 11360) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11392) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11424) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::RouteType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::RouteType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15296));
  v297 = ((v2 + 15296) >> 3) + 2147450880;
  *(_WORD *)v297 = -1800;
  *(_BYTE *)(v297 + 2) = -8;
  *(_WORD *)(((v2 + 11328) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11456) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 11456) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 11456) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
  v298 = ((v2 + 15360) >> 3) + 2147450880;
  *(_WORD *)v298 = 0;
  *(_BYTE *)(v298 + 2) = 0;
  luabind::class_<data::RouteRecordMode,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::RouteRecordMode,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15360),
    "RouteRecordMode");
  if ( *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 1632, "RouteRecordMode");
  *(luabind::detail::enum_maker<luabind::class_<data::RouteRecordMode,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 1632) = luabind::class_<data::RouteRecordMode,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::RouteRecordMode,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15360), "constants");
  *(_WORD *)(((v2 + 11552) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 11552), "Reach", 2);
  *(_DWORD *)(((v2 + 17792) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 11520) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 11520), "Prereach", 1);
  *(_WORD *)(((v2 + 11488) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 11488), "None", 0);
  if ( *(char *)(((v2 + 17792) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 17823) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 17823) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 17792, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 17792),
    (const luabind::value *const)(v2 + 11488),
    (const luabind::value *)(v2 + 11520));
  v299 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 17792),
           (const luabind::value *)(v2 + 11552));
  v300 = luabind::detail::enum_maker<luabind::class_<data::RouteRecordMode,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::RouteRecordMode,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 1632),
           v299);
  luabind::scope::scope((luabind::scope *const)(v2 + 1664), v300);
  luabind::module_::operator[](v2 + 11456, v2 + 1664);
  luabind::scope::~scope((luabind::scope *const)(v2 + 1664));
  *(_BYTE *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 17792));
  *(_DWORD *)(((v2 + 17792) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 11488) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11520) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11552) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::RouteRecordMode,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::RouteRecordMode,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15360));
  v301 = ((v2 + 15360) >> 3) + 2147450880;
  *(_WORD *)v301 = -1800;
  *(_BYTE *)(v301 + 2) = -8;
  *(_WORD *)(((v2 + 11456) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11584) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 11584) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 11584) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
  v302 = ((v2 + 15424) >> 3) + 2147450880;
  *(_WORD *)v302 = 0;
  *(_BYTE *)(v302 + 2) = 0;
  luabind::class_<proto::MultistagePlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<proto::MultistagePlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15424),
    "MultistagePlayType");
  if ( *(_BYTE *)(((v2 + 1696) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 1696, "MultistagePlayType");
  *(luabind::detail::enum_maker<luabind::class_<proto::MultistagePlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 1696) = luabind::class_<proto::MultistagePlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<proto::MultistagePlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15424), "constants");
  *(_WORD *)(((v2 + 11808) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::MultistagePlayType>(
    (luabind::value *const)(v2 + 11808),
    "CharAmusement",
    MULTISTAGE_PLAY_TYPE_CHAR_AMUSEMENT);
  *(_WORD *)(((v2 + 11776) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::MultistagePlayType>(
    (luabind::value *const)(v2 + 11776),
    "IrodoriChess",
    MULTISTAGE_PLAY_TYPE_IRODORI_CHESS);
  *(_WORD *)(((v2 + 11744) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::MultistagePlayType>(
    (luabind::value *const)(v2 + 11744),
    "Chess",
    MULTISTAGE_PLAY_TYPE_CHESS);
  *(_WORD *)(((v2 + 11712) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::MultistagePlayType>(
    (luabind::value *const)(v2 + 11712),
    "BounceConjuring",
    MULTISTAGE_PLAY_TYPE_BOUNCE_CONJURING);
  *(_WORD *)(((v2 + 11680) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::MultistagePlayType>(
    (luabind::value *const)(v2 + 11680),
    "FleurFair",
    MULTISTAGE_PLAY_TYPE_FLEUR_FAIR);
  *(_DWORD *)(((v2 + 17856) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 11648) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::MultistagePlayType>(
    (luabind::value *const)(v2 + 11648),
    "Mechanicus",
    MULTISTAGE_PLAY_TYPE_MECHANICUS);
  *(_WORD *)(((v2 + 11616) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::MultistagePlayType>(
    (luabind::value *const)(v2 + 11616),
    "None",
    MULTISTAGE_PLAY_TYPE_NON);
  if ( *(char *)(((v2 + 17856) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 17887) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 17887) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 17856, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 17856),
    (const luabind::value *const)(v2 + 11616),
    (const luabind::value *)(v2 + 11648));
  v303 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 17856),
           (const luabind::value *)(v2 + 11680));
  v304 = luabind::value_vector::operator,(v303, (const luabind::value *)(v2 + 11712));
  v305 = luabind::value_vector::operator,(v304, (const luabind::value *)(v2 + 11744));
  v306 = luabind::value_vector::operator,(v305, (const luabind::value *)(v2 + 11776));
  v307 = luabind::value_vector::operator,(v306, (const luabind::value *)(v2 + 11808));
  v308 = luabind::detail::enum_maker<luabind::class_<proto::MultistagePlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<proto::MultistagePlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 1696),
           v307);
  luabind::scope::scope((luabind::scope *const)(v2 + 1728), v308);
  luabind::module_::operator[](v2 + 11584, v2 + 1728);
  luabind::scope::~scope((luabind::scope *const)(v2 + 1728));
  *(_BYTE *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 17856));
  *(_DWORD *)(((v2 + 17856) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 11616) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11648) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11680) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11712) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11744) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11776) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11808) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<proto::MultistagePlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<proto::MultistagePlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15424));
  v309 = ((v2 + 15424) >> 3) + 2147450880;
  *(_WORD *)v309 = -1800;
  *(_BYTE *)(v309 + 2) = -8;
  *(_WORD *)(((v2 + 11584) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11840) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 11840) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 11840) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 1760) >> 3) + 0x7FFF8000) = 0;
  v310 = ((v2 + 15488) >> 3) + 2147450880;
  *(_WORD *)v310 = 0;
  *(_BYTE *)(v310 + 2) = 0;
  luabind::class_<data::MultistageStageType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::MultistageStageType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15488),
    "Multistage");
  if ( *(_BYTE *)(((v2 + 1760) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 1760, "Multistage");
  *(luabind::detail::enum_maker<luabind::class_<data::MultistageStageType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 1760) = luabind::class_<data::MultistageStageType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::MultistageStageType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15488), "constants");
  *(_WORD *)(((v2 + 12256) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::MultistageStageType>(
    (luabind::value *const)(v2 + 12256),
    "CharAmusementGallery",
    MULTISTAGE_STAGE_CHAR_AMUSEMENT_GALLERY);
  *(_WORD *)(((v2 + 12224) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::MultistageStageType>(
    (luabind::value *const)(v2 + 12224),
    "CharAmusementPreview",
    MULTISTAGE_STAGE_CHAR_AMUSEMENT_PREVIEW);
  *(_WORD *)(((v2 + 12192) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::MultistageStageType>(
    (luabind::value *const)(v2 + 12192),
    "IrodoriChessKill",
    MULTISTAGE_STAGE_IRODORI_CHESS_KILL);
  *(_WORD *)(((v2 + 12160) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::MultistageStageType>(
    (luabind::value *const)(v2 + 12160),
    "IrodoriChessBuild",
    MULTISTAGE_STAGE_IRODORI_CHESS_BUILD);
  *(_WORD *)(((v2 + 12128) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::MultistageStageType>(
    (luabind::value *const)(v2 + 12128),
    "ChessKill",
    MULTISTAGE_STAGE_CHESS_KILL);
  *(_WORD *)(((v2 + 12096) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::MultistageStageType>(
    (luabind::value *const)(v2 + 12096),
    "ChessBuild",
    MULTISTAGE_STAGE_CHESS_BUILD);
  *(_WORD *)(((v2 + 12064) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::MultistageStageType>(
    (luabind::value *const)(v2 + 12064),
    "FleurFairPreview",
    MULTISTAGE_STAGE_FLEUR_FAIR_PREVIEW);
  *(_WORD *)(((v2 + 12032) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::MultistageStageType>(
    (luabind::value *const)(v2 + 12032),
    "FleurFairBoss",
    MULTISTAGE_STAGE_FLEUR_FAIR_BOSS);
  *(_WORD *)(((v2 + 12000) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::MultistageStageType>(
    (luabind::value *const)(v2 + 12000),
    "FleurFairGallery",
    MULTISTAGE_STAGE_FLEUR_FAIR_GALLERY);
  *(_WORD *)(((v2 + 11968) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::MultistageStageType>((luabind::value *const)(v2 + 11968), "Idle", MULTISTAGE_STAGE_IDLE);
  *(_WORD *)(((v2 + 11936) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::MultistageStageType>(
    (luabind::value *const)(v2 + 11936),
    "MechanicusKill",
    MULTISTAGE_STAGE_MECHANICUS_KILL);
  *(_DWORD *)(((v2 + 17920) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 11904) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::MultistageStageType>(
    (luabind::value *const)(v2 + 11904),
    "MechanicusFlipCard",
    MULTISTAGE_STAGE_MECHANICUS_FLIP_CARD);
  *(_WORD *)(((v2 + 11872) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::MultistageStageType>(
    (luabind::value *const)(v2 + 11872),
    "MechanicusBuild",
    MULTISTAGE_STAGE_MECHANICUS_BUILD);
  if ( *(char *)(((v2 + 17920) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 17951) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 17951) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 17920, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 17920),
    (const luabind::value *const)(v2 + 11872),
    (const luabind::value *)(v2 + 11904));
  v311 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 17920),
           (const luabind::value *)(v2 + 11936));
  v312 = luabind::value_vector::operator,(v311, (const luabind::value *)(v2 + 11968));
  v313 = luabind::value_vector::operator,(v312, (const luabind::value *)(v2 + 12000));
  v314 = luabind::value_vector::operator,(v313, (const luabind::value *)(v2 + 12032));
  v315 = luabind::value_vector::operator,(v314, (const luabind::value *)(v2 + 12064));
  v316 = luabind::value_vector::operator,(v315, (const luabind::value *)(v2 + 12096));
  v317 = luabind::value_vector::operator,(v316, (const luabind::value *)(v2 + 12128));
  v318 = luabind::value_vector::operator,(v317, (const luabind::value *)(v2 + 12160));
  v319 = luabind::value_vector::operator,(v318, (const luabind::value *)(v2 + 12192));
  v320 = luabind::value_vector::operator,(v319, (const luabind::value *)(v2 + 12224));
  v321 = luabind::value_vector::operator,(v320, (const luabind::value *)(v2 + 12256));
  v322 = luabind::detail::enum_maker<luabind::class_<data::MultistageStageType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::MultistageStageType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 1760),
           v321);
  luabind::scope::scope((luabind::scope *const)(v2 + 1792), v322);
  luabind::module_::operator[](v2 + 11840, v2 + 1792);
  luabind::scope::~scope((luabind::scope *const)(v2 + 1792));
  *(_BYTE *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 17920));
  *(_DWORD *)(((v2 + 17920) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 11872) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11904) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11936) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 11968) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12000) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12032) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12064) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12096) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12128) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12160) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12192) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12224) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12256) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::MultistageStageType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::MultistageStageType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15488));
  v323 = ((v2 + 15488) >> 3) + 2147450880;
  *(_WORD *)v323 = -1800;
  *(_BYTE *)(v323 + 2) = -8;
  *(_WORD *)(((v2 + 11840) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12288) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 12288) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 12288) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
  v324 = ((v2 + 15552) >> 3) + 2147450880;
  *(_WORD *)v324 = 0;
  *(_BYTE *)(v324 + 2) = 0;
  luabind::class_<proto::InBattleMechanicusCardChallengeState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<proto::InBattleMechanicusCardChallengeState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15552),
    "MechanicusChallenge");
  if ( *(_BYTE *)(((v2 + 1824) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 1824, "MechanicusChallenge");
  *(luabind::detail::enum_maker<luabind::class_<proto::InBattleMechanicusCardChallengeState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 1824) = luabind::class_<proto::InBattleMechanicusCardChallengeState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<proto::InBattleMechanicusCardChallengeState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15552), "constants");
  *(_WORD *)(((v2 + 12416) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::InBattleMechanicusCardChallengeState>(
    (luabind::value *const)(v2 + 12416),
    "Fail",
    IN_BATTLE_MECHANICUS_CARD_CHALLENGE_FAIL);
  *(_WORD *)(((v2 + 12384) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::InBattleMechanicusCardChallengeState>(
    (luabind::value *const)(v2 + 12384),
    "Success",
    IN_BATTLE_MECHANICUS_CARD_CHALLENGE_SUCCESS);
  *(_DWORD *)(((v2 + 17984) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 12352) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::InBattleMechanicusCardChallengeState>(
    (luabind::value *const)(v2 + 12352),
    "OnGoing",
    IN_BATTLE_MECHANICUS_CARD_CHALLENGE_ON_GOING);
  *(_WORD *)(((v2 + 12320) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::InBattleMechanicusCardChallengeState>(
    (luabind::value *const)(v2 + 12320),
    "None",
    IN_BATTLE_MECHANICUS_CARD_CHALLENGE_NONE);
  if ( *(char *)(((v2 + 17984) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 18015) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 18015) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 17984, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 17984),
    (const luabind::value *const)(v2 + 12320),
    (const luabind::value *)(v2 + 12352));
  v325 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 17984),
           (const luabind::value *)(v2 + 12384));
  v326 = luabind::value_vector::operator,(v325, (const luabind::value *)(v2 + 12416));
  v327 = luabind::detail::enum_maker<luabind::class_<proto::InBattleMechanicusCardChallengeState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<proto::InBattleMechanicusCardChallengeState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 1824),
           v326);
  luabind::scope::scope((luabind::scope *const)(v2 + 1856), v327);
  luabind::module_::operator[](v2 + 12288, v2 + 1856);
  luabind::scope::~scope((luabind::scope *const)(v2 + 1856));
  *(_BYTE *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 17984));
  *(_DWORD *)(((v2 + 17984) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 12320) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12352) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12384) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12416) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<proto::InBattleMechanicusCardChallengeState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<proto::InBattleMechanicusCardChallengeState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15552));
  v328 = ((v2 + 15552) >> 3) + 2147450880;
  *(_WORD *)v328 = -1800;
  *(_BYTE *)(v328 + 2) = -8;
  *(_WORD *)(((v2 + 12288) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12448) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 12448) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 12448) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 1920) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 1888) >> 3) + 0x7FFF8000) = 0;
  v329 = ((v2 + 15616) >> 3) + 2147450880;
  *(_WORD *)v329 = 0;
  *(_BYTE *)(v329 + 2) = 0;
  luabind::class_<data::FlowSuiteOperatePolicy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::FlowSuiteOperatePolicy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15616),
    "FlowSuiteOperatePolicy");
  if ( *(_BYTE *)(((v2 + 1888) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 1888, "FlowSuiteOperatePolicy");
  *(luabind::detail::enum_maker<luabind::class_<data::FlowSuiteOperatePolicy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 1888) = luabind::class_<data::FlowSuiteOperatePolicy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::FlowSuiteOperatePolicy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15616), "constants");
  *(_DWORD *)(((v2 + 18048) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 12512) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::FlowSuiteOperatePolicy>(
    (luabind::value *const)(v2 + 12512),
    "COMPLETE",
    FLOW_SUITE_OP_COMPLETE);
  *(_WORD *)(((v2 + 12480) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::FlowSuiteOperatePolicy>(
    (luabind::value *const)(v2 + 12480),
    "DEFAULT",
    FLOW_SUITE_OP_DEFAULT);
  if ( *(char *)(((v2 + 18048) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 18079) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 18079) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 18048, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 18048),
    (const luabind::value *const)(v2 + 12480),
    (const luabind::value *)(v2 + 12512));
  v330 = luabind::detail::enum_maker<luabind::class_<data::FlowSuiteOperatePolicy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::FlowSuiteOperatePolicy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 1888),
           (const luabind::value_vector *)(v2 + 18048));
  luabind::scope::scope((luabind::scope *const)(v2 + 1920), v330);
  luabind::module_::operator[](v2 + 12448, v2 + 1920);
  luabind::scope::~scope((luabind::scope *const)(v2 + 1920));
  *(_BYTE *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 18048));
  *(_DWORD *)(((v2 + 18048) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 12480) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12512) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::FlowSuiteOperatePolicy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::FlowSuiteOperatePolicy,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15616));
  v331 = ((v2 + 15616) >> 3) + 2147450880;
  *(_WORD *)v331 = -1800;
  *(_BYTE *)(v331 + 2) = -8;
  *(_WORD *)(((v2 + 12448) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12544) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 12544) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 12544) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
  v332 = ((v2 + 15680) >> 3) + 2147450880;
  *(_WORD *)v332 = 0;
  *(_BYTE *)(v332 + 2) = 0;
  luabind::class_<data::CommonPlayerTipsType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::CommonPlayerTipsType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15680),
    "CommonPlayerTipsType");
  if ( *(_BYTE *)(((v2 + 1952) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 1952, "CommonPlayerTipsType");
  *(luabind::detail::enum_maker<luabind::class_<data::CommonPlayerTipsType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 1952) = luabind::class_<data::CommonPlayerTipsType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::CommonPlayerTipsType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15680), "constants");
  *(_WORD *)(((v2 + 12640) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::CommonPlayerTipsType>(
    (luabind::value *const)(v2 + 12640),
    "COMMON_PLAYER_TIPS_TYPE_FAIL",
    COMMON_PLAYER_TIPS_TYPE_FAIL);
  *(_DWORD *)(((v2 + 18112) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 12608) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::CommonPlayerTipsType>(
    (luabind::value *const)(v2 + 12608),
    "COMMON_PLAYER_TIPS_TYPE_START",
    COMMON_PLAYER_TIPS_TYPE_START);
  *(_WORD *)(((v2 + 12576) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::CommonPlayerTipsType>(
    (luabind::value *const)(v2 + 12576),
    "COMMON_PLAYER_TIPS_TYPE_FINISH",
    COMMON_PLAYER_TIPS_TYPE_FINISH);
  if ( *(char *)(((v2 + 18112) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 18143) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 18143) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 18112, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 18112),
    (const luabind::value *const)(v2 + 12576),
    (const luabind::value *)(v2 + 12608));
  v333 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 18112),
           (const luabind::value *)(v2 + 12640));
  v334 = luabind::detail::enum_maker<luabind::class_<data::CommonPlayerTipsType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::CommonPlayerTipsType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 1952),
           v333);
  luabind::scope::scope((luabind::scope *const)(v2 + 1984), v334);
  luabind::module_::operator[](v2 + 12544, v2 + 1984);
  luabind::scope::~scope((luabind::scope *const)(v2 + 1984));
  *(_BYTE *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 18112));
  *(_DWORD *)(((v2 + 18112) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 12576) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12608) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12640) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::CommonPlayerTipsType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::CommonPlayerTipsType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15680));
  v335 = ((v2 + 15680) >> 3) + 2147450880;
  *(_WORD *)v335 = -1800;
  *(_BYTE *)(v335 + 2) = -8;
  *(_WORD *)(((v2 + 12544) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12672) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 12672) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 12672) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 2016) >> 3) + 0x7FFF8000) = 0;
  v336 = ((v2 + 15744) >> 3) + 2147450880;
  *(_WORD *)v336 = 0;
  *(_BYTE *)(v336 + 2) = 0;
  luabind::class_<proto::GroupVariableType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<proto::GroupVariableType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15744),
    "GroupVariableType");
  if ( *(_BYTE *)(((v2 + 2016) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 2016, "GroupVariableType");
  *(luabind::detail::enum_maker<luabind::class_<proto::GroupVariableType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 2016) = luabind::class_<proto::GroupVariableType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<proto::GroupVariableType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15744), "constants");
  *(_DWORD *)(((v2 + 18176) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 12736) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::GroupVariableType>(
    (luabind::value *const)(v2 + 12736),
    "VARIABLE_TYPE_LOGIC_STATE",
    VARIABLE_TYPE_LOGIC_STATE);
  *(_WORD *)(((v2 + 12704) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::GroupVariableType>(
    (luabind::value *const)(v2 + 12704),
    "VARIABLE_TYPE_NORMAL",
    VARIABLE_TYPE_NORMAL);
  if ( *(char *)(((v2 + 18176) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 18207) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 18207) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 18176, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 18176),
    (const luabind::value *const)(v2 + 12704),
    (const luabind::value *)(v2 + 12736));
  v337 = luabind::detail::enum_maker<luabind::class_<proto::GroupVariableType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<proto::GroupVariableType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 2016),
           (const luabind::value_vector *)(v2 + 18176));
  luabind::scope::scope((luabind::scope *const)(v2 + 2048), v337);
  luabind::module_::operator[](v2 + 12672, v2 + 2048);
  luabind::scope::~scope((luabind::scope *const)(v2 + 2048));
  *(_BYTE *)(((v2 + 2048) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 18176));
  *(_DWORD *)(((v2 + 18176) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 12704) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12736) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<proto::GroupVariableType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<proto::GroupVariableType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15744));
  v338 = ((v2 + 15744) >> 3) + 2147450880;
  *(_WORD *)v338 = -1800;
  *(_BYTE *)(v338 + 2) = -8;
  *(_WORD *)(((v2 + 12672) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12768) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 12768) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 12768) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
  v339 = ((v2 + 15808) >> 3) + 2147450880;
  *(_WORD *)v339 = 0;
  *(_BYTE *)(v339 + 2) = 0;
  luabind::class_<proto::BeginCameraSceneLookNotify_KeepRotType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<proto::BeginCameraSceneLookNotify_KeepRotType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15808),
    "KeepRotType");
  if ( *(_BYTE *)(((v2 + 2080) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 2080, "KeepRotType");
  *(luabind::detail::enum_maker<luabind::class_<proto::BeginCameraSceneLookNotify_KeepRotType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 2080) = luabind::class_<proto::BeginCameraSceneLookNotify_KeepRotType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<proto::BeginCameraSceneLookNotify_KeepRotType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15808), "constants");
  *(_DWORD *)(((v2 + 18240) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 12832) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::BeginCameraSceneLookNotify_KeepRotType>(
    (luabind::value *const)(v2 + 12832),
    "KEEP_ROT_XY",
    BeginCameraSceneLookNotify_KeepRotType_KEEP_ROT_XY);
  *(_WORD *)(((v2 + 12800) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::BeginCameraSceneLookNotify_KeepRotType>(
    (luabind::value *const)(v2 + 12800),
    "KEEP_ROT_X",
    BeginCameraSceneLookNotify_KeepRotType_KEEP_ROT_X);
  if ( *(char *)(((v2 + 18240) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 18271) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 18271) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 18240, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 18240),
    (const luabind::value *const)(v2 + 12800),
    (const luabind::value *)(v2 + 12832));
  v340 = luabind::detail::enum_maker<luabind::class_<proto::BeginCameraSceneLookNotify_KeepRotType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<proto::BeginCameraSceneLookNotify_KeepRotType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 2080),
           (const luabind::value_vector *)(v2 + 18240));
  luabind::scope::scope((luabind::scope *const)(v2 + 2112), v340);
  luabind::module_::operator[](v2 + 12768, v2 + 2112);
  luabind::scope::~scope((luabind::scope *const)(v2 + 2112));
  *(_BYTE *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 18240));
  *(_DWORD *)(((v2 + 18240) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 12800) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12832) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<proto::BeginCameraSceneLookNotify_KeepRotType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<proto::BeginCameraSceneLookNotify_KeepRotType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15808));
  v341 = ((v2 + 15808) >> 3) + 2147450880;
  *(_WORD *)v341 = -1800;
  *(_BYTE *)(v341 + 2) = -8;
  *(_WORD *)(((v2 + 12768) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12864) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 12864) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 12864) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 2176) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 0;
  v342 = ((v2 + 15872) >> 3) + 2147450880;
  *(_WORD *)v342 = 0;
  *(_BYTE *)(v342 + 2) = 0;
  luabind::class_<data::GalleryProgressScoreUIType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::GalleryProgressScoreUIType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15872),
    "GalleryProgressScoreUIType");
  if ( *(_BYTE *)(((v2 + 2144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 2144, "GalleryProgressScoreUIType");
  *(luabind::detail::enum_maker<luabind::class_<data::GalleryProgressScoreUIType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 2144) = luabind::class_<data::GalleryProgressScoreUIType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::GalleryProgressScoreUIType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15872), "constants");
  *(_WORD *)(((v2 + 13056) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::GalleryProgressScoreUIType>(
    (luabind::value *const)(v2 + 13056),
    "GALLERY_PROGRESS_SCORE_UI_TYPE_TREASURE",
    GALLERY_PROGRESS_SCORE_UI_TYPE_TREASURE);
  *(_WORD *)(((v2 + 13024) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::GalleryProgressScoreUIType>(
    (luabind::value *const)(v2 + 13024),
    "GALLERY_PROGRESS_SCORE_UI_TYPE_CRYSTAL_LINK",
    GALLERY_PROGRESS_SCORE_UI_TYPE_CRYSTAL_LINK);
  *(_WORD *)(((v2 + 12992) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::GalleryProgressScoreUIType>(
    (luabind::value *const)(v2 + 12992),
    "GALLERY_PROGRESS_SCORE_UI_TYPE_DIG",
    GALLERY_PROGRESS_SCORE_UI_TYPE_DIG);
  *(_WORD *)(((v2 + 12960) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::GalleryProgressScoreUIType>(
    (luabind::value *const)(v2 + 12960),
    "GALLERY_PROGRESS_SCORE_UI_TYPE_SUMO_STAGE",
    GALLERY_PROGRESS_SCORE_UI_TYPE_SUMO_STAGE);
  *(_DWORD *)(((v2 + 18304) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 12928) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::GalleryProgressScoreUIType>(
    (luabind::value *const)(v2 + 12928),
    "GALLERY_PROGRESS_SCORE_UI_TYPE_BUOYANT_COMBAT",
    GALLERY_PROGRESS_SCORE_UI_TYPE_BUOYANT_COMBAT);
  *(_WORD *)(((v2 + 12896) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::GalleryProgressScoreUIType>(
    (luabind::value *const)(v2 + 12896),
    "GALLERY_PROGRESS_SCORE_UI_TYPE_NONE",
    GALLERY_PROGRESS_SCORE_UI_TYPE_NONE);
  if ( *(char *)(((v2 + 18304) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 18335) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 18335) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 18304, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 18304),
    (const luabind::value *const)(v2 + 12896),
    (const luabind::value *)(v2 + 12928));
  v343 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 18304),
           (const luabind::value *)(v2 + 12960));
  v344 = luabind::value_vector::operator,(v343, (const luabind::value *)(v2 + 12992));
  v345 = luabind::value_vector::operator,(v344, (const luabind::value *)(v2 + 13024));
  v346 = luabind::value_vector::operator,(v345, (const luabind::value *)(v2 + 13056));
  v347 = luabind::detail::enum_maker<luabind::class_<data::GalleryProgressScoreUIType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::GalleryProgressScoreUIType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 2144),
           v346);
  luabind::scope::scope((luabind::scope *const)(v2 + 2176), v347);
  luabind::module_::operator[](v2 + 12864, v2 + 2176);
  luabind::scope::~scope((luabind::scope *const)(v2 + 2176));
  *(_BYTE *)(((v2 + 2176) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 18304));
  *(_DWORD *)(((v2 + 18304) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 12896) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12928) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12960) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 12992) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 13024) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 13056) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::GalleryProgressScoreUIType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::GalleryProgressScoreUIType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15872));
  v348 = ((v2 + 15872) >> 3) + 2147450880;
  *(_WORD *)v348 = -1800;
  *(_BYTE *)(v348 + 2) = -8;
  *(_WORD *)(((v2 + 12864) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 13088) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 13088) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 13088) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 2208) >> 3) + 0x7FFF8000) = 0;
  v349 = ((v2 + 15936) >> 3) + 2147450880;
  *(_WORD *)v349 = 0;
  *(_BYTE *)(v349 + 2) = 0;
  luabind::class_<proto::GalleryStopReason,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<proto::GalleryStopReason,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15936),
    "GalleryStopReason");
  if ( *(_BYTE *)(((v2 + 2208) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 2208, "GalleryStopReason");
  *(luabind::detail::enum_maker<luabind::class_<proto::GalleryStopReason,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 2208) = luabind::class_<proto::GalleryStopReason,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<proto::GalleryStopReason,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15936), "constants");
  *(_WORD *)(((v2 + 13216) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::GalleryStopReason>(
    (luabind::value *const)(v2 + 13216),
    "GALLERY_STOP_LUA_INTERRUPT_FAIL",
    GALLERY_STOP_LUA_INTERRUPT_FAIL);
  *(_WORD *)(((v2 + 13184) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::GalleryStopReason>(
    (luabind::value *const)(v2 + 13184),
    "GALLERY_STOP_LUA_INTERRUPT_SUCCESS",
    GALLERY_STOP_LUA_INTERRUPT_SUCCESS);
  *(_DWORD *)(((v2 + 18368) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 13152) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::GalleryStopReason>(
    (luabind::value *const)(v2 + 13152),
    "GALLERY_STOP_CLIENT_INTERRUPT",
    GALLERY_STOP_CLIENT_INTERRUPT);
  *(_WORD *)(((v2 + 13120) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::GalleryStopReason>(
    (luabind::value *const)(v2 + 13120),
    "GALLERY_STOP_TIMEUP",
    GALLERY_STOP_TIMEUP);
  if ( *(char *)(((v2 + 18368) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 18399) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 18399) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 18368, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 18368),
    (const luabind::value *const)(v2 + 13120),
    (const luabind::value *)(v2 + 13152));
  v350 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 18368),
           (const luabind::value *)(v2 + 13184));
  v351 = luabind::value_vector::operator,(v350, (const luabind::value *)(v2 + 13216));
  v352 = luabind::detail::enum_maker<luabind::class_<proto::GalleryStopReason,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<proto::GalleryStopReason,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 2208),
           v351);
  luabind::scope::scope((luabind::scope *const)(v2 + 2240), v352);
  luabind::module_::operator[](v2 + 13088, v2 + 2240);
  luabind::scope::~scope((luabind::scope *const)(v2 + 2240));
  *(_BYTE *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 18368));
  *(_DWORD *)(((v2 + 18368) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 13120) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 13152) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 13184) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 13216) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<proto::GalleryStopReason,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<proto::GalleryStopReason,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 15936));
  v353 = ((v2 + 15936) >> 3) + 2147450880;
  *(_WORD *)v353 = -1800;
  *(_BYTE *)(v353 + 2) = -8;
  *(_WORD *)(((v2 + 13088) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 13248) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 13248) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 13248) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
  v354 = ((v2 + 16000) >> 3) + 2147450880;
  *(_WORD *)v354 = 0;
  *(_BYTE *)(v354 + 2) = 0;
  luabind::class_<data::GalleryProgressScoreType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::GalleryProgressScoreType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 16000),
    "GalleryProgressScoreType");
  if ( *(_BYTE *)(((v2 + 2272) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 2272, "GalleryProgressScoreType");
  *(luabind::detail::enum_maker<luabind::class_<data::GalleryProgressScoreType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 2272) = luabind::class_<data::GalleryProgressScoreType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::GalleryProgressScoreType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 16000), "constants");
  *(_DWORD *)(((v2 + 18432) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 13312) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::GalleryProgressScoreType>(
    (luabind::value *const)(v2 + 13312),
    "GALLERY_PROGRESS_SCORE_NO_DEGRADE",
    GALLERY_PROGRESS_SCORE_NO_DEGRADE);
  *(_WORD *)(((v2 + 13280) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::GalleryProgressScoreType>(
    (luabind::value *const)(v2 + 13280),
    "GALLERY_PROGRESS_SCORE_NONE",
    GALLERY_PROGRESS_SCORE_NO_DEGRADE);
  if ( *(char *)(((v2 + 18432) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 18463) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 18463) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 18432, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 18432),
    (const luabind::value *const)(v2 + 13280),
    (const luabind::value *)(v2 + 13312));
  v355 = luabind::detail::enum_maker<luabind::class_<data::GalleryProgressScoreType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::GalleryProgressScoreType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 2272),
           (const luabind::value_vector *)(v2 + 18432));
  luabind::scope::scope((luabind::scope *const)(v2 + 2304), v355);
  luabind::module_::operator[](v2 + 13248, v2 + 2304);
  luabind::scope::~scope((luabind::scope *const)(v2 + 2304));
  *(_BYTE *)(((v2 + 2304) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 18432));
  *(_DWORD *)(((v2 + 18432) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 13280) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 13312) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::GalleryProgressScoreType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::GalleryProgressScoreType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 16000));
  v356 = ((v2 + 16000) >> 3) + 2147450880;
  *(_WORD *)v356 = -1800;
  *(_BYTE *)(v356 + 2) = -8;
  *(_WORD *)(((v2 + 13248) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 13344) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 13344) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 13344) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 2368) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 2336) >> 3) + 0x7FFF8000) = 0;
  v357 = ((v2 + 16064) >> 3) + 2147450880;
  *(_WORD *)v357 = 0;
  *(_BYTE *)(v357 + 2) = 0;
  luabind::class_<data::AranaraCollectionType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::AranaraCollectionType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 16064),
    "AranaraCollectionType");
  if ( *(_BYTE *)(((v2 + 2336) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 2336, "AranaraCollectionType");
  *(luabind::detail::enum_maker<luabind::class_<data::AranaraCollectionType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 2336) = luabind::class_<data::AranaraCollectionType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::AranaraCollectionType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 16064), "constants");
  *(_DWORD *)(((v2 + 18496) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 13408) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::AranaraCollectionType>(
    (luabind::value *const)(v2 + 13408),
    "ARANARA_COLLECTION_TYPE_CATALOG_V1",
    ARANARA_COLLECTION_TYPE_CATALOG_V1);
  *(_WORD *)(((v2 + 13376) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<data::AranaraCollectionType>(
    (luabind::value *const)(v2 + 13376),
    "ARANARA_COLLECTION_TYPE_NONE",
    ARANARA_COLLECTION_TYPE_NONE);
  if ( *(char *)(((v2 + 18496) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 18527) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 18527) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 18496, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 18496),
    (const luabind::value *const)(v2 + 13376),
    (const luabind::value *)(v2 + 13408));
  v358 = luabind::detail::enum_maker<luabind::class_<data::AranaraCollectionType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::AranaraCollectionType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 2336),
           (const luabind::value_vector *)(v2 + 18496));
  luabind::scope::scope((luabind::scope *const)(v2 + 2368), v358);
  luabind::module_::operator[](v2 + 13344, v2 + 2368);
  luabind::scope::~scope((luabind::scope *const)(v2 + 2368));
  *(_BYTE *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 18496));
  *(_DWORD *)(((v2 + 18496) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 13376) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 13408) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::AranaraCollectionType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::AranaraCollectionType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 16064));
  v359 = ((v2 + 16064) >> 3) + 2147450880;
  *(_WORD *)v359 = -1800;
  *(_BYTE *)(v359 + 2) = -8;
  *(_WORD *)(((v2 + 13344) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 13440) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 13440) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 13440) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 2432) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 2400) >> 3) + 0x7FFF8000) = 0;
  v360 = ((v2 + 16128) >> 3) + 2147450880;
  *(_WORD *)v360 = 0;
  *(_BYTE *)(v360 + 2) = 0;
  luabind::class_<proto::AranaraCollectionState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<proto::AranaraCollectionState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 16128),
    "AranaraCollectionState");
  if ( *(_BYTE *)(((v2 + 2400) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 2400, "AranaraCollectionState");
  *(luabind::detail::enum_maker<luabind::class_<proto::AranaraCollectionState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 2400) = luabind::class_<proto::AranaraCollectionState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<proto::AranaraCollectionState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 16128), "constants");
  *(_WORD *)(((v2 + 13568) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::AranaraCollectionState>(
    (luabind::value *const)(v2 + 13568),
    "ARANARA_COLLECTION_STATE_FINISHED",
    ARANARA_COLLECTION_STATE_FINISHED);
  *(_WORD *)(((v2 + 13536) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::AranaraCollectionState>(
    (luabind::value *const)(v2 + 13536),
    "ARANARA_COLLECTION_STATE_COLLECTED",
    ARANARA_COLLECTION_STATE_COLLECTED);
  *(_DWORD *)(((v2 + 18560) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 13504) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::AranaraCollectionState>(
    (luabind::value *const)(v2 + 13504),
    "ARANARA_COLLECTION_STATE_COLLECTABLE",
    ARANARA_COLLECTION_STATE_COLLECTABLE);
  *(_WORD *)(((v2 + 13472) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<proto::AranaraCollectionState>(
    (luabind::value *const)(v2 + 13472),
    "ARANARA_COLLECTION_STATE_NONE",
    ARANARA_COLLECTION_STATE_NONE);
  if ( *(char *)(((v2 + 18560) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 18591) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 18591) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 18560, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 18560),
    (const luabind::value *const)(v2 + 13472),
    (const luabind::value *)(v2 + 13504));
  v361 = luabind::value_vector::operator,(
           (luabind::value_vector *const)(v2 + 18560),
           (const luabind::value *)(v2 + 13536));
  v362 = luabind::value_vector::operator,(v361, (const luabind::value *)(v2 + 13568));
  v363 = luabind::detail::enum_maker<luabind::class_<proto::AranaraCollectionState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<proto::AranaraCollectionState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 2400),
           v362);
  luabind::scope::scope((luabind::scope *const)(v2 + 2432), v363);
  luabind::module_::operator[](v2 + 13440, v2 + 2432);
  luabind::scope::~scope((luabind::scope *const)(v2 + 2432));
  *(_BYTE *)(((v2 + 2432) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 18560));
  *(_DWORD *)(((v2 + 18560) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 13472) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 13504) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 13536) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 13568) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<proto::AranaraCollectionState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<proto::AranaraCollectionState,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 16128));
  v364 = ((v2 + 16128) >> 3) + 2147450880;
  *(_WORD *)v364 = -1800;
  *(_BYTE *)(v364 + 2) = -8;
  *(_WORD *)(((v2 + 13440) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 13600) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v2 + 13600) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  *(luabind::module_ *)(v2 + 13600) = luabind::module(lua_state_ptr, 0LL);
  *(_BYTE *)(((v2 + 2496) >> 3) + 0x7FFF8000) = 0;
  *(_BYTE *)(((v2 + 2464) >> 3) + 0x7FFF8000) = 0;
  v365 = ((v2 + 16192) >> 3) + 2147450880;
  *(_WORD *)v365 = 0;
  *(_BYTE *)(v365 + 2) = 0;
  luabind::class_<data::ExhibitionPlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::class_(
    (luabind::class_<data::ExhibitionPlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 16192),
    "ExhibitionPlayType");
  if ( *(_BYTE *)(((v2 + 2464) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 2464, "ExhibitionPlayType");
  *(luabind::detail::enum_maker<luabind::class_<data::ExhibitionPlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *)(v2 + 2464) = luabind::class_<data::ExhibitionPlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::enum_((luabind::class_<data::ExhibitionPlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 16192), "constants");
  *(_DWORD *)(((v2 + 18624) >> 3) + 0x7FFF8000) = 0;
  *(_WORD *)(((v2 + 13664) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 13664), "Gallery", 1);
  *(_WORD *)(((v2 + 13632) >> 3) + 0x7FFF8000) = 0;
  luabind::value::value<int>((luabind::value *const)(v2 + 13632), "Challenge", 0);
  if ( *(char *)(((v2 + 18624) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 18655) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 18655) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 18624, 32LL);
  }
  luabind::value::operator,(
    (luabind::value_vector *)(v2 + 18624),
    (const luabind::value *const)(v2 + 13632),
    (const luabind::value *)(v2 + 13664));
  v366 = luabind::detail::enum_maker<luabind::class_<data::ExhibitionPlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>>::operator[](
           (luabind::detail::enum_maker<luabind::class_<data::ExhibitionPlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> > *const)(v2 + 2464),
           (const luabind::value_vector *)(v2 + 18624));
  luabind::scope::scope((luabind::scope *const)(v2 + 2496), v366);
  luabind::module_::operator[](v2 + 13600, v2 + 2496);
  luabind::scope::~scope((luabind::scope *const)(v2 + 2496));
  *(_BYTE *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -8;
  luabind::value_vector::~value_vector((luabind::value_vector *const)(v2 + 18624));
  *(_DWORD *)(((v2 + 18624) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 13632) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v2 + 13664) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 2464) >> 3) + 0x7FFF8000) = -8;
  luabind::class_<data::ExhibitionPlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified>::~class_((luabind::class_<data::ExhibitionPlayType,luabind::detail::unspecified,luabind::detail::unspecified,luabind::detail::unspecified> *const)(v2 + 16192));
  if ( v368 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8918) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 2336) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_9(v2, 18688LL, v368);
  }
  return 0;
};
