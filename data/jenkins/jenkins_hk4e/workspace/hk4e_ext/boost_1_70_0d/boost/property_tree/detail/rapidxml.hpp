// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/boost_1_70_0d/boost/property_tree/detail/rapidxml.hpp

// Line 219: range 000000000C282E9C-000000000C282EC9
const char *__fastcall boost::property_tree::detail::rapidxml::parse_error::what(
        const boost::property_tree::detail::rapidxml::parse_error *const this)
{
  if ( !*(_BYTE *)(((unsigned __int64)&this->m_what >> 3) + 0x7FFF8000) )
    return this->m_what;
  __asan_report_load8();
  return (const char *)boost::any::holder<boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string>>>::type((const boost::any::holder<boost::property_tree::string_path<std::string,boost::property_tree::id_translator<std::string > > > *const)&this->m_what);
};

// Line 583: range 000000000C28F4BC-000000000C2903ED
void *__fastcall boost::property_tree::detail::rapidxml::memory_pool<char>::allocate_aligned(
        boost::property_tree::detail::rapidxml::memory_pool<char> *const this,
        std::size_t size)
{
  std::size_t v2; // rbp
  void *result; // rax
  std::size_t v5; // r12
  unsigned __int64 v6; // r12
  boost::property_tree::detail::rapidxml::memory_pool<char>::boost_ptree_raw_alloc_func **p_m_alloc_func; // rdi
  boost::property_tree::detail::rapidxml::memory_pool<char>::boost_ptree_raw_alloc_func *m_alloc_func; // rax
  char *v9; // rax
  char **v10; // rdi
  _QWORD *v11; // rdi
  char *v12; // rax
  char **p_m_end; // rdx
  char *v14; // rbp
  boost::property_tree::detail::rapidxml::xml_document<char> *p_m_ptr; // rdi

  if ( *(_BYTE *)(((unsigned __int64)&this->m_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_16;
  }
  v2 = size;
  result = &this->m_ptr[-LODWORD(this->m_ptr) & 7];
  if ( *(_BYTE *)(((unsigned __int64)&this->m_end >> 3) + 0x7FFF8000) )
  {
LABEL_16:
    __asan_report_load8();
    goto LABEL_17;
  }
  if ( (char *)((unsigned __int64)result + size) <= this->m_end )
    goto LABEL_13;
  if ( size <= 0x10000 )
  {
    v5 = 0x10000LL;
    goto LABEL_6;
  }
LABEL_17:
  v5 = size;
LABEL_6:
  v6 = v5 + 22;
  p_m_alloc_func = &this->m_alloc_func;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_alloc_func >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_19;
  }
  m_alloc_func = this->m_alloc_func;
  if ( m_alloc_func )
  {
    p_m_alloc_func = (boost::property_tree::detail::rapidxml::memory_pool<char>::boost_ptree_raw_alloc_func **)v6;
    v9 = (char *)m_alloc_func(v6);
    if ( v9 )
      goto LABEL_9;
LABEL_19:
    __asan_handle_no_return(p_m_alloc_func);
    __assert_fail(
      "memory",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property_t"
      "ree/detail/rapidxml.hpp",
      0x23Eu,
      "char* boost::property_tree::detail::rapidxml::memory_pool<Ch>::allocate_raw(std::size_t) [with Ch = char; std::siz"
      "e_t = long unsigned int]");
  }
  v9 = (char *)operator new[](v6);
LABEL_9:
  v10 = (char **)&v9[-(int)v9 & 7];
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_22;
  }
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
LABEL_22:
    __asan_report_store8();
    goto LABEL_23;
  }
  *v10 = this->m_begin;
  this->m_begin = v9;
  v11 = v10 + 1;
  v12 = &v9[v6];
  p_m_end = &this->m_end;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_end >> 3) + 0x7FFF8000) )
  {
LABEL_23:
    p_m_ptr = (boost::property_tree::detail::rapidxml::xml_document<char> *)p_m_end;
    __asan_report_store8();
    goto LABEL_24;
  }
  this->m_end = v12;
  result = (char *)v11 + (-(int)v11 & 7);
LABEL_13:
  v14 = (char *)result + v2;
  p_m_ptr = (boost::property_tree::detail::rapidxml::xml_document<char> *)&this->m_ptr;
  if ( !*(_BYTE *)(((unsigned __int64)&this->m_ptr >> 3) + 0x7FFF8000) )
  {
    this->m_ptr = v14;
    return result;
  }
LABEL_24:
  __asan_report_store8();
  return boost::property_tree::detail::rapidxml::xml_document<char>::parse_node<3072>(p_m_ptr, (char **)size);
};

// Line 1495: range 000000000C29A2C4-000000000C29A63C
void __fastcall boost::property_tree::detail::rapidxml::xml_document<char>::insert_coded_character<0>(
        char **text,
        unsigned __int64 code)
{
  unsigned __int64 v2; // rbx
  char v3; // al
  char *v4; // rdx
  char v5; // cl
  char v6; // al
  char *v7; // rdx
  char v8; // cl
  char v9; // cl
  char v10; // al
  char *v11; // rdx
  char v12; // cl
  char v13; // cl
  char v14; // cl
  char v15; // al
  unsigned __int64 exception; // rbp
  __int64 v17; // rax

  v2 = (unsigned __int64)text;
  if ( code <= 0x7F )
  {
    if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      text = (char **)*text;
      v3 = *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000);
      if ( v3 > ((unsigned __int8)text & 7) || !v3 )
      {
        *(_BYTE *)text = code;
        ++*(_QWORD *)v2;
        return;
      }
    }
    __asan_report_store1(text, code);
  }
  if ( code <= 0x7FF )
  {
    if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      v4 = *text;
      text = (char **)(*text + 1);
      v5 = *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000);
      if ( v5 > ((unsigned __int8)text & 7) || !v5 )
      {
        v4[1] = code & 0x3F | 0x80;
        code = (unsigned int)(code >> 6) | 0xFFFFFFC0;
        text = *(char ***)v2;
        v6 = *(_BYTE *)((*(_QWORD *)v2 >> 3) + 0x7FFF8000LL);
        if ( v6 > (*(_BYTE *)v2 & 7) || !v6 )
        {
          *(_BYTE *)text = code;
          *(_QWORD *)v2 += 2LL;
          return;
        }
        goto LABEL_17;
      }
    }
    __asan_report_store1(text, code);
LABEL_17:
    __asan_report_store1(text, code);
  }
  if ( code > 0xFFFF )
    goto LABEL_31;
  if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_28:
    __asan_report_store1(text, code);
    goto LABEL_29;
  }
  v7 = *text;
  text = (char **)(*text + 2);
  v8 = *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000);
  if ( v8 <= ((unsigned __int8)text & 7) && v8 )
    goto LABEL_28;
  v7[2] = code & 0x3F | 0x80;
  text = (char **)(*(_QWORD *)v2 + 1LL);
  v9 = *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000);
  if ( v9 > ((*(_BYTE *)v2 + 1) & 7) || !v9 )
  {
    *(_BYTE *)(*(_QWORD *)v2 + 1LL) = (code >> 6) & 0x3F | 0x80;
    code = (unsigned int)(code >> 12) | 0xFFFFFFE0;
    text = *(char ***)v2;
    v10 = *(_BYTE *)((*(_QWORD *)v2 >> 3) + 0x7FFF8000LL);
    if ( v10 > (*(_BYTE *)v2 & 7) || !v10 )
    {
      *(_BYTE *)text = code;
      *(_QWORD *)v2 += 3LL;
      return;
    }
    goto LABEL_30;
  }
LABEL_29:
  __asan_report_store1(text, code);
LABEL_30:
  __asan_report_store1(text, code);
LABEL_31:
  if ( code > 0x10FFFF )
    goto LABEL_47;
  if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_43:
    __asan_report_store1(text, code);
LABEL_44:
    __asan_report_store1(text, code);
LABEL_45:
    __asan_report_store1(text, code);
LABEL_46:
    __asan_report_store1(text, code);
LABEL_47:
    exception = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = *(_QWORD *)v2;
    if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
      v17 = __asan_report_store8();
    *(_QWORD *)exception = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
    if ( *(_BYTE *)(((exception + 8) >> 3) + 0x7FFF8000) )
      v17 = __asan_report_store8();
    *(_QWORD *)(exception + 8) = "invalid numeric character entity";
    if ( *(_BYTE *)(((exception + 16) >> 3) + 0x7FFF8000) )
      v17 = __asan_report_store8();
    *(_QWORD *)(exception + 16) = v17;
    __asan_handle_no_return(exception + 16);
    _cxa_throw(
      (void *)exception,
      (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
      (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
  }
  v11 = *text;
  text = (char **)(*text + 3);
  v12 = *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000);
  if ( v12 <= ((unsigned __int8)text & 7) && v12 )
    goto LABEL_43;
  v11[3] = code & 0x3F | 0x80;
  text = (char **)(*(_QWORD *)v2 + 2LL);
  v13 = *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000);
  if ( v13 <= ((*(_BYTE *)v2 + 2) & 7) && v13 )
    goto LABEL_44;
  *(_BYTE *)(*(_QWORD *)v2 + 2LL) = (code >> 6) & 0x3F | 0x80;
  text = (char **)(*(_QWORD *)v2 + 1LL);
  v14 = *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000);
  if ( v14 <= ((*(_BYTE *)v2 + 1) & 7) && v14 )
    goto LABEL_45;
  *(_BYTE *)(*(_QWORD *)v2 + 1LL) = (code >> 12) & 0x3F | 0x80;
  code = (unsigned int)(code >> 18) | 0xFFFFFFF0;
  text = *(char ***)v2;
  v15 = *(_BYTE *)((*(_QWORD *)v2 >> 3) + 0x7FFF8000LL);
  if ( v15 <= (*(_BYTE *)v2 & 7) && v15 )
    goto LABEL_46;
  *(_BYTE *)text = code;
  *(_QWORD *)v2 += 4LL;
};

// Line 2032: range 000000000C29A642-000000000C29D16B
boost::property_tree::detail::rapidxml::xml_node<char> *__fastcall boost::property_tree::detail::rapidxml::xml_document<char>::parse_element<0>(
        boost::property_tree::detail::rapidxml::xml_document<char> *const this,
        char **text)
{
  char **m; // rbp
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rbx
  char **p_m_ptr; // rdi
  unsigned __int64 v6; // r15
  boost::property_tree::detail::rapidxml::memory_pool<char>::boost_ptree_raw_alloc_func *m_alloc_func; // rax
  char *v8; // rax
  char **v9; // rdi
  _QWORD *v10; // rdi
  char *v11; // rax
  char *v12; // rdi
  char v13; // al
  unsigned __int64 i; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  __int64 v17; // rdx
  char v18; // dl
  char v19; // cl
  signed __int64 v20; // rax
  char *v21; // rdi
  unsigned __int64 v22; // rax
  unsigned __int64 exception; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  char v26; // dl
  char v27; // cl
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 j; // rdx
  const unsigned __int8 *v32; // rdi
  char v33; // dl
  char v34; // cl
  boost::property_tree::detail::rapidxml::memory_pool<char> *v35; // r13
  char **p_m_end; // rdi
  boost::property_tree::detail::rapidxml::memory_pool<char>::boost_ptree_raw_alloc_func *v37; // rax
  char *v38; // rax
  char **v39; // rbx
  boost::property_tree::detail::rapidxml::memory_pool<char> *v40; // rdi
  char *v41; // rax
  char *v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rbx
  __int64 v46; // rdx
  char v47; // cl
  unsigned __int64 v48; // rsi
  char v49; // dl
  char *v50; // rax
  char *v51; // rdx
  unsigned __int64 v52; // rax
  boost::property_tree::detail::rapidxml::memory_pool<char> *v53; // rdi
  char v54; // dl
  unsigned __int64 v55; // rbx
  __int64 v56; // rax
  __int64 k; // rax
  char v58; // al
  char v59; // dl
  char m_begin; // r14
  char **v61; // r13
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rax
  char v66; // al
  char v67; // dl
  char v68; // dl
  __int64 v69; // rax
  char v70; // al
  char v71; // al
  unsigned __int64 v72; // rdi
  char v73; // al
  char v74; // al
  char v75; // al
  char v76; // al
  char v77; // dl
  char v78; // al
  char v79; // al
  char v80; // al
  char v81; // al
  char v82; // al
  char v83; // dl
  char v84; // cl
  unsigned __int64 v85; // rsi
  char v86; // cl
  char v87; // dl
  unsigned __int64 v88; // rdi
  char v89; // al
  char v90; // al
  char v91; // dl
  unsigned __int64 v92; // rdi
  char v93; // al
  char v94; // al
  char v95; // dl
  char v96; // al
  unsigned __int64 v97; // rbp
  unsigned __int64 v98; // rdx
  unsigned __int64 v99; // rsi
  int v100; // eax
  unsigned __int8 v101; // al
  char v102; // al
  char v103; // dl
  char v104; // al
  int v105; // eax
  unsigned __int8 v106; // al
  char v107; // al
  char v108; // cl
  char v109; // cl
  __int64 v110; // rsi
  __int64 v111; // rcx
  unsigned __int64 v112; // rdi
  __int64 v113; // rsi
  char v114; // dl
  char v115; // cl
  __int64 v116; // rcx
  unsigned __int64 v117; // rdi
  __int64 v118; // rsi
  __int64 v119; // rcx
  char v120; // dl
  char v121; // cl
  __int64 v122; // rcx
  unsigned __int64 v123; // rdi
  __int64 v124; // rsi
  __int64 v125; // rcx
  __int64 v126; // rcx
  char v127; // dl
  char v128; // cl
  unsigned __int64 v129; // rbx
  __int64 v130; // rax
  unsigned __int64 v131; // rbx
  char v132; // al
  char v133; // cl
  unsigned __int64 v134; // rax
  char v135; // cl
  unsigned __int64 v136; // rdi
  unsigned __int64 v137; // rdx
  __int64 n; // rdx
  char v139; // dl
  char v140; // cl
  __int64 v141; // rcx
  char v142; // cl
  char v143; // cl
  unsigned __int64 v144; // rdi
  char v145; // cl
  char v146; // cl
  char v147; // cl
  char v148; // cl
  char v149; // cl
  _BYTE *v150; // r8
  char v151; // cl
  char v152; // cl
  char v153; // cl
  char v154; // cl
  char v155; // cl
  char v156; // cl
  char v157; // r8
  char v158; // r8
  char v159; // cl
  unsigned __int64 v160; // rdi
  char v161; // cl
  char v162; // cl
  char v163; // cl
  unsigned __int64 v164; // rdi
  char v165; // cl
  char v166; // cl
  char v167; // cl
  char v168; // cl
  unsigned __int64 v169; // rax
  unsigned __int64 v170; // rsi
  unsigned __int64 v171; // rsi
  int v172; // ecx
  unsigned __int8 v173; // cl
  char v174; // cl
  char v175; // r8
  char v176; // cl
  char v177; // r8
  _BYTE *v178; // rdi
  char v179; // r8
  char v180; // cl
  _BYTE *v181; // rdi
  char v182; // r8
  char v183; // r8
  char v184; // cl
  _BYTE *v185; // rdi
  char v186; // r8
  char v187; // r8
  char v188; // r8
  char v189; // cl
  unsigned __int64 v190; // r14
  unsigned __int64 v191; // rbx
  int v192; // ecx
  unsigned __int8 v193; // cl
  char v194; // cl
  char v195; // r8
  char v196; // cl
  char v197; // dl
  _BYTE *v198; // rdi
  char v199; // r8
  char v200; // cl
  _BYTE *v201; // rdi
  char v202; // r8
  char v203; // r8
  char v204; // cl
  _BYTE *v205; // rdi
  char v206; // r8
  char v207; // r8
  char v208; // r8
  char v209; // cl
  unsigned __int64 v210; // r14
  unsigned __int64 v211; // rbx
  unsigned __int64 v212; // rbp
  unsigned __int64 v213; // rbx
  char v214; // cl
  char v215; // r8
  char v216; // cl
  _BYTE *v217; // rdx
  char **v218; // rdi
  char **v219; // rax
  char v220; // dl
  char *v221; // rdx
  char *v222; // rax
  __int64 v223; // rdx
  unsigned __int64 v224; // rax
  char v225; // dl
  unsigned __int64 v226; // rax
  unsigned __int64 v227; // rbx
  __int64 v228; // rax
  __int64 v229; // rdx
  char v230; // cl
  char v231; // dl
  char **v232; // rdi
  char v233; // al
  char v234; // dl
  char **v235; // rax
  char v236; // dl
  char v237; // dl
  char *v238; // rax
  char *v239; // rdi
  __int64 v240; // rax
  unsigned __int64 v241; // rdi
  char v242; // al
  unsigned __int64 v244; // rbx
  __int64 v245; // rax
  unsigned __int64 v246; // rbx
  __int64 v247; // rax
  unsigned __int64 v249; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v250; // [rsp+20h] [rbp-98h]
  char v251[120]; // [rsp+40h] [rbp-78h] BYREF

  v3 = (unsigned __int64)text;
  v249 = (unsigned __int64)v251;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v249 = v15;
  }
  *(_QWORD *)v249 = 1102416563LL;
  *(_QWORD *)(v249 + 8) = "1 32 8 9 dest:1570";
  *(_QWORD *)(v249 + 16) = boost::property_tree::detail::rapidxml::xml_document<char>::parse_element<0>;
  v250 = v249 >> 3;
  *(_DWORD *)(v250 + 2147450880) = -235802127;
  *(_DWORD *)(v250 + 2147450884) = -202116352;
  v4 = (unsigned __int64)&this->boost::property_tree::detail::rapidxml::memory_pool<char>;
  p_m_ptr = &this->m_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_25;
  }
  v6 = (unsigned __int64)&this->m_ptr[-LODWORD(this->m_ptr) & 7];
  p_m_ptr = &this->m_end;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_end >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8();
LABEL_26:
    __asan_report_load8();
    goto LABEL_27;
  }
  if ( (char *)(v6 + 96) <= this->m_end )
    goto LABEL_12;
  p_m_ptr = (char **)&this->m_alloc_func;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_alloc_func >> 3) + 0x7FFF8000) )
    goto LABEL_26;
  m_alloc_func = this->m_alloc_func;
  if ( m_alloc_func )
  {
    p_m_ptr = (char **)65558;
    v8 = (char *)m_alloc_func(65558LL);
    if ( v8 )
      goto LABEL_8;
LABEL_27:
    __asan_handle_no_return(p_m_ptr);
    __assert_fail(
      "memory",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property_t"
      "ree/detail/rapidxml.hpp",
      0x23Eu,
      "char* boost::property_tree::detail::rapidxml::memory_pool<Ch>::allocate_raw(std::size_t) [with Ch = char; std::siz"
      "e_t = long unsigned int]");
  }
  v8 = (char *)operator new[](0x10016uLL);
LABEL_8:
  v9 = (char **)&v8[-(int)v8 & 7];
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_30;
  }
  text = &this->m_name;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_store8();
    goto LABEL_31;
  }
  *v9 = this->m_begin;
  text = &this->m_name;
  this->m_begin = v8;
  v10 = v9 + 1;
  v11 = v8 + 65558;
  if ( *(_BYTE *)(((v4 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store8();
    goto LABEL_32;
  }
  *(_QWORD *)(v4 + 16) = v11;
  v6 = (unsigned __int64)v10 + (-(int)v10 & 7);
LABEL_12:
  if ( *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_store8();
    goto LABEL_33;
  }
  *(_QWORD *)(v4 + 8) = v6 + 96;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    v12 = (char *)v6;
    __asan_report_store8();
    goto LABEL_34;
  }
  *(_QWORD *)v6 = 0LL;
  v12 = (char *)(v6 + 8);
  if ( *(_BYTE *)(((v6 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_store8();
    goto LABEL_35;
  }
  *(_QWORD *)(v6 + 8) = 0LL;
  v12 = (char *)(v6 + 32);
  if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_store8();
LABEL_36:
    __asan_report_store4(v12);
    goto LABEL_37;
  }
  *(_QWORD *)(v6 + 32) = 0LL;
  v12 = (char *)(v6 + 40);
  v13 = *(_BYTE *)(((v6 + 40) >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_36;
  *(_DWORD *)(v6 + 40) = 1;
  if ( *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8();
    goto LABEL_38;
  }
  *(_QWORD *)(v6 + 48) = 0LL;
  if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_store8();
    goto LABEL_39;
  }
  *(_QWORD *)(v6 + 64) = 0LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    v16 = v3;
    __asan_report_load8();
    goto LABEL_40;
  }
  text = *(char ***)v3;
  for ( i = *(_QWORD *)v3; ; ++i )
  {
    v16 = i;
    v18 = *(_BYTE *)((i >> 3) + 0x7FFF8000);
    if ( v18 <= (char)(i & 7) && v18 )
    {
LABEL_40:
      i = __asan_report_load1(v16);
    }
    else
    {
      LOBYTE(v17) = *(_BYTE *)i;
      if ( (unsigned int)*(char *)i <= 0x7F )
      {
        v17 = (char)v17;
        goto LABEL_48;
      }
    }
    v17 = 122LL;
LABEL_48:
    v19 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v17] >> 3)
                   + 0x7FFF8000);
    if ( v19 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v17] & 7) )
    {
      if ( v19 )
        break;
    }
    if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v17] )
      goto LABEL_51;
  }
  i = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v17]);
LABEL_51:
  *(_QWORD *)v3 = i;
  if ( text == (char **)i )
  {
    exception = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v24 = *(_QWORD *)v3;
    if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
      v24 = __asan_report_store8();
    *(_QWORD *)exception = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
    if ( *(_BYTE *)(((exception + 8) >> 3) + 0x7FFF8000) )
      v24 = __asan_report_store8();
    *(_QWORD *)(exception + 8) = "expected element name";
    if ( *(_BYTE *)(((exception + 16) >> 3) + 0x7FFF8000) )
      v24 = __asan_report_store8();
    *(_QWORD *)(exception + 16) = v24;
    __asan_handle_no_return(exception + 16);
    _cxa_throw(
      (void *)exception,
      (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
      (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
  }
  v20 = i - (_QWORD)text;
  *(_QWORD *)v6 = text;
  v21 = (char *)(v6 + 16);
  if ( *(_BYTE *)(((v6 + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_64;
  }
  *(_QWORD *)(v6 + 16) = v20;
  v22 = *(_QWORD *)v3;
  while ( 2 )
  {
    v21 = (char *)v22;
    v26 = *(_BYTE *)((v22 >> 3) + 0x7FFF8000);
    if ( v26 <= (char)(v22 & 7) && v26 )
    {
LABEL_64:
      v22 = __asan_report_load1(v21);
    }
    else
    {
      LOBYTE(v25) = *(_BYTE *)v22;
      if ( (unsigned int)*(char *)v22 <= 0x7F )
      {
        v25 = (char)v25;
        goto LABEL_72;
      }
    }
    v25 = 122LL;
LABEL_72:
    v27 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v25] >> 3)
                   + 0x7FFF8000);
    v28 = (unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v25] & 7;
    if ( v27 > (char)v28 || !v27 )
    {
      if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v25] )
        goto LABEL_75;
      ++v22;
      continue;
    }
    break;
  }
  v22 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v25]);
LABEL_75:
  *(_QWORD *)v3 = v22;
LABEL_683:
  v232 = (char **)v3;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_77:
    __asan_report_load1(v232);
    goto LABEL_78;
  }
  m = *(char ***)v3;
  v232 = *(char ***)v3;
  v233 = *(_BYTE *)((*(_QWORD *)v3 >> 3) + 0x7FFF8000LL);
  if ( v233 <= (*(_BYTE *)v3 & 7) && v233 )
    goto LABEL_77;
  LOBYTE(v29) = *(_BYTE *)m;
  if ( (unsigned int)*(char *)m <= 0x7F )
  {
    v29 = (char)v29;
    goto LABEL_688;
  }
LABEL_78:
  v29 = 122LL;
LABEL_688:
  v32 = &boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_name[v29];
  v234 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_name[v29] >> 3)
                  + 0x7FFF8000);
  if ( v234 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_name[v29] & 7)
    && v234 )
  {
    __asan_report_load1(v32);
LABEL_80:
    v30 = __asan_report_load1(v32);
LABEL_81:
    for ( j = 122LL; ; j = (char)j )
    {
      v34 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_name[j] >> 3)
                     + 0x7FFF8000);
      if ( v34 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_name[j] & 7) )
      {
        if ( v34 )
          break;
      }
      if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_name[j] )
        goto LABEL_91;
      ++v30;
LABEL_84:
      v32 = (const unsigned __int8 *)v30;
      v33 = *(_BYTE *)((v30 >> 3) + 0x7FFF8000);
      if ( v33 <= (char)(v30 & 7) && v33 )
        goto LABEL_80;
      LOBYTE(j) = *(_BYTE *)v30;
      if ( (unsigned int)*(char *)v30 > 0x7F )
        goto LABEL_81;
    }
    v30 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_name[j]);
LABEL_91:
    *(_QWORD *)v3 = v30;
    if ( m == (char **)v30 )
    {
      v45 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
      if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)v45 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
      if ( *(_BYTE *)(((v45 + 8) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v45 + 8) = "expected attribute name";
      if ( *(_BYTE *)(((v45 + 16) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v45 + 16) = m;
      __asan_handle_no_return(v45 + 16);
      _cxa_throw(
        (void *)v45,
        (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
        (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
    }
    v35 = &this->boost::property_tree::detail::rapidxml::memory_pool<char>;
    p_m_end = &this->m_ptr;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ptr >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_128:
      __asan_report_load8();
LABEL_129:
      __asan_report_load8();
LABEL_130:
      __asan_handle_no_return(p_m_end);
      __assert_fail(
        "memory",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property"
        "_tree/detail/rapidxml.hpp",
        0x23Eu,
        "char* boost::property_tree::detail::rapidxml::memory_pool<Ch>::allocate_raw(std::size_t) [with Ch = char; std::s"
        "ize_t = long unsigned int]");
    }
    v4 = (unsigned __int64)&this->m_ptr[-LODWORD(this->m_ptr) & 7];
    p_m_end = &this->m_end;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_end >> 3) + 0x7FFF8000) )
      goto LABEL_128;
    if ( (char *)(v4 + 56) > this->m_end )
    {
      p_m_end = (char **)&this->m_alloc_func;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_alloc_func >> 3) + 0x7FFF8000) )
        goto LABEL_129;
      v37 = this->m_alloc_func;
      if ( v37 )
      {
        p_m_end = (char **)65558;
        v38 = (char *)v37(65558LL);
        if ( !v38 )
          goto LABEL_130;
      }
      else
      {
        v38 = (char *)operator new[](0x10016uLL);
      }
      v39 = (char **)&v38[-(int)v38 & 7];
      v40 = &this->boost::property_tree::detail::rapidxml::memory_pool<char>;
      if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
LABEL_133:
        __asan_report_store8();
LABEL_134:
        __asan_report_store8();
LABEL_135:
        __asan_report_store8();
LABEL_136:
        __asan_report_store8();
LABEL_137:
        __asan_report_store8();
LABEL_138:
        __asan_report_store8();
LABEL_139:
        __asan_report_load8();
LABEL_140:
        __asan_report_store8();
LABEL_141:
        __asan_handle_no_return(v40);
        __assert_fail(
          "attribute && !attribute->parent()",
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/proper"
          "ty_tree/detail/rapidxml.hpp",
          0x4B3u,
          "void boost::property_tree::detail::rapidxml::xml_node<Ch>::append_attribute(boost::property_tree::detail::rapi"
          "dxml::xml_attribute<Ch>*) [with Ch = char]");
      }
      v40 = (boost::property_tree::detail::rapidxml::memory_pool<char> *)&v38[-(int)v38 & 7];
      if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
        goto LABEL_133;
      *v39 = this->m_begin;
      this->m_begin = v38;
      v41 = v38 + 65558;
      v40 = (boost::property_tree::detail::rapidxml::memory_pool<char> *)&this->m_end;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_end >> 3) + 0x7FFF8000) )
        goto LABEL_134;
      this->m_end = v41;
      v4 = (unsigned __int64)v39 + (-((_DWORD)v39 + 8) & 7) + 8;
    }
    v40 = (boost::property_tree::detail::rapidxml::memory_pool<char> *)&this->m_ptr;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ptr >> 3) + 0x7FFF8000) )
      goto LABEL_135;
    this->m_ptr = (char *)(v4 + 56);
    v40 = (boost::property_tree::detail::rapidxml::memory_pool<char> *)v4;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      goto LABEL_136;
    *(_QWORD *)v4 = 0LL;
    v40 = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v4 + 8);
    if ( *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_137;
    *(_QWORD *)(v4 + 8) = 0LL;
    v40 = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v4 + 32);
    if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
      goto LABEL_138;
    *(_QWORD *)(v4 + 32) = 0LL;
    v40 = (boost::property_tree::detail::rapidxml::memory_pool<char> *)v3;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      goto LABEL_139;
    v42 = (char *)(*(_QWORD *)v3 - (_QWORD)m);
    *(_QWORD *)v4 = m;
    v40 = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v4 + 16);
    if ( *(_BYTE *)(((v4 + 16) >> 3) + 0x7FFF8000) )
      goto LABEL_140;
    *(_QWORD *)(v4 + 16) = v42;
    if ( !v4 || *(_QWORD *)(v4 + 32) )
      goto LABEL_141;
    if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      if ( !*(_QWORD *)(v6 + 64) )
      {
LABEL_146:
        if ( *(_BYTE *)(((v4 + 40) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store8();
          goto LABEL_149;
        }
        *(_QWORD *)(v4 + 40) = 0LL;
        *(_QWORD *)(v6 + 64) = v4;
LABEL_116:
        if ( !*(_BYTE *)(((v6 + 72) >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)(v6 + 72) = v4;
          if ( !*(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v4 + 32) = v6;
            if ( !*(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)(v4 + 48) = 0LL;
              v44 = *(_QWORD *)v3;
              goto LABEL_158;
            }
LABEL_151:
            v44 = __asan_report_store8();
LABEL_152:
            LOBYTE(v46) = *(_BYTE *)v44;
            if ( (unsigned int)*(char *)v44 <= 0x7F )
            {
              v46 = (char)v46;
              goto LABEL_154;
            }
            while ( 1 )
            {
              v46 = 122LL;
LABEL_154:
              v47 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v46] >> 3)
                             + 0x7FFF8000);
              v48 = (unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v46] & 7;
              if ( v47 <= (char)v48 )
              {
                if ( v47 )
                  break;
              }
              if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v46] )
                goto LABEL_163;
              ++v44;
LABEL_158:
              v49 = *(_BYTE *)((v44 >> 3) + 0x7FFF8000);
              if ( v49 > (char)(v44 & 7) || !v49 )
                goto LABEL_152;
              v44 = __asan_report_load1(v44);
            }
            v44 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v46]);
LABEL_163:
            *(_QWORD *)v3 = v44;
            if ( *(_BYTE *)v44 != 61 )
            {
              v55 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
              if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v56 = *(_QWORD *)v3;
              if ( *(_BYTE *)((v55 >> 3) + 0x7FFF8000) )
                v56 = __asan_report_store8();
              *(_QWORD *)v55 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
              if ( *(_BYTE *)(((v55 + 8) >> 3) + 0x7FFF8000) )
                v56 = __asan_report_store8();
              *(_QWORD *)(v55 + 8) = "expected =";
              if ( *(_BYTE *)(((v55 + 16) >> 3) + 0x7FFF8000) )
                v56 = __asan_report_store8();
              *(_QWORD *)(v55 + 16) = v56;
              __asan_handle_no_return(v55 + 16);
              _cxa_throw(
                (void *)v55,
                (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
            }
            *(_QWORD *)v3 = v44 + 1;
            if ( *(_QWORD *)v4 )
              v50 = *(char **)v4;
            else
              v50 = (char *)&boost::property_tree::detail::rapidxml::xml_base<char>::nullstr(void)::zero;
            if ( *(_QWORD *)v4 )
              v51 = *(char **)(v4 + 16);
            else
              v51 = 0LL;
            v52 = (unsigned __int64)&v50[(_QWORD)v51];
            v53 = (boost::property_tree::detail::rapidxml::memory_pool<char> *)v52;
            v54 = *(_BYTE *)((v52 >> 3) + 0x7FFF8000);
            if ( v54 > (char)(v52 & 7) || !v54 )
            {
              *(_BYTE *)v52 = 0;
              v35 = *(boost::property_tree::detail::rapidxml::memory_pool<char> **)v3;
              goto LABEL_187;
            }
            __asan_report_store1(v52, v48);
LABEL_183:
            __asan_report_load1(v53);
LABEL_184:
            for ( k = 122LL; ; k = (char)k )
            {
              v59 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[k] >> 3)
                             + 0x7FFF8000);
              if ( v59 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[k] & 7) )
              {
                if ( v59 )
                  break;
              }
              if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[k] )
                goto LABEL_194;
              v35 = (boost::property_tree::detail::rapidxml::memory_pool<char> *)((char *)v35 + 1);
LABEL_187:
              v53 = v35;
              v58 = *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000);
              if ( v58 <= ((unsigned __int8)v35 & 7) && v58 )
                goto LABEL_183;
              LOBYTE(k) = v35->m_begin;
              if ( (unsigned int)SLOBYTE(v35->m_begin) > 0x7F )
                goto LABEL_184;
            }
            __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[k]);
LABEL_194:
            *(_QWORD *)v3 = v35;
            m_begin = (char)v35->m_begin;
            if ( m_begin != 34 && m_begin != 39 )
            {
              v63 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
              if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v64 = *(_QWORD *)v3;
              if ( *(_BYTE *)((v63 >> 3) + 0x7FFF8000) )
                v64 = __asan_report_store8();
              *(_QWORD *)v63 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
              if ( *(_BYTE *)(((v63 + 8) >> 3) + 0x7FFF8000) )
                v64 = __asan_report_store8();
              *(_QWORD *)(v63 + 8) = "expected ' or \"";
              if ( *(_BYTE *)(((v63 + 16) >> 3) + 0x7FFF8000) )
                v64 = __asan_report_store8();
              *(_QWORD *)(v63 + 16) = v64;
              __asan_handle_no_return(v63 + 16);
              _cxa_throw(
                (void *)v63,
                (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
            }
            v61 = (char **)((char *)&v35->m_begin + 1);
            *(_QWORD *)v3 = v61;
            if ( m_begin != 39 )
            {
              v62 = *(_QWORD *)v3;
              goto LABEL_407;
            }
            for ( m = v61; ; m = (char **)((char *)m + 1) )
            {
              v66 = *(_BYTE *)(((unsigned __int64)m >> 3) + 0x7FFF8000);
              if ( v66 <= ((unsigned __int8)m & 7) && v66 )
              {
                __asan_report_load1(m);
              }
              else
              {
                LOBYTE(v65) = *(_BYTE *)m;
                if ( (unsigned int)*(char *)m <= 0x7F )
                {
                  v65 = (char)v65;
                  goto LABEL_215;
                }
              }
              v65 = 122LL;
LABEL_215:
              v67 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_1_pure[v65] >> 3)
                             + 0x7FFF8000);
              if ( v67 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_1_pure[v65] & 7)
                && v67 )
              {
                __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_1_pure[v65]);
LABEL_218:
                *(_QWORD *)v3 = m;
                *(_QWORD *)(v249 + 32) = m;
LABEL_389:
                while ( 2 )
                {
                  while ( 2 )
                  {
                    v132 = *(_BYTE *)(((unsigned __int64)m >> 3) + 0x7FFF8000);
                    if ( v132 <= ((unsigned __int8)m & 7) && v132 )
                    {
                      __asan_report_load1(m);
                    }
                    else
                    {
                      v68 = *(_BYTE *)m;
                      if ( (unsigned int)*(char *)m <= 0x7F )
                      {
                        v69 = v68;
                        goto LABEL_393;
                      }
                    }
                    v69 = 122LL;
LABEL_393:
                    v133 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_1[v69] >> 3)
                                    + 0x7FFF8000);
                    v85 = (unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_1[v69] & 7;
                    if ( v133 <= (char)v85 && v133 )
                    {
                      __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_1[v69]);
LABEL_222:
                      v70 = *(_BYTE *)((((unsigned __int64)m + 1) >> 3) + 0x7FFF8000);
                      if ( v70 <= (((unsigned __int8)m + 1) & 7) && v70 )
                      {
                        v71 = __asan_report_load1((char *)m + 1);
                      }
                      else
                      {
                        v71 = *((_BYTE *)m + 1);
                        if ( v71 == 103 )
                          goto LABEL_284;
                        if ( v71 > 103 )
                        {
                          if ( v71 == 108 )
                            goto LABEL_296;
                          if ( v71 != 113 )
                            goto LABEL_397;
                          v72 = (unsigned __int64)m + 2;
                          v73 = *(_BYTE *)((((unsigned __int64)m + 2) >> 3) + 0x7FFF8000);
                          if ( v73 > (((unsigned __int8)m + 2) & 7) || !v73 )
                          {
                            if ( *((_BYTE *)m + 2) != 117 )
                              goto LABEL_397;
                            v72 = (unsigned __int64)m + 3;
                            v74 = *(_BYTE *)((((unsigned __int64)m + 3) >> 3) + 0x7FFF8000);
                            if ( v74 > (((unsigned __int8)m + 3) & 7) || !v74 )
                            {
                              if ( *((_BYTE *)m + 3) != 111 )
                                goto LABEL_397;
                              v72 = (unsigned __int64)m + 4;
                              v75 = *(_BYTE *)((((unsigned __int64)m + 4) >> 3) + 0x7FFF8000);
                              if ( v75 > (((unsigned __int8)m + 4) & 7) || !v75 )
                              {
                                if ( *((_BYTE *)m + 4) != 116 )
                                  goto LABEL_397;
                                v72 = (unsigned __int64)m + 5;
                                v76 = *(_BYTE *)((((unsigned __int64)m + 5) >> 3) + 0x7FFF8000);
                                if ( v76 > (((unsigned __int8)m + 5) & 7) || !v76 )
                                {
                                  if ( *((_BYTE *)m + 5) != 59 )
                                    goto LABEL_397;
                                  v72 = *(_QWORD *)(v249 + 32);
                                  v77 = *(_BYTE *)((v72 >> 3) + 0x7FFF8000);
                                  if ( v77 > (*(_BYTE *)(v249 + 32) & 7) || !v77 )
                                  {
                                    *(_BYTE *)(*(_QWORD *)(v249 + 32))++ = 34;
                                    m = (char **)((char *)m + 6);
                                    continue;
                                  }
LABEL_283:
                                  __asan_report_store1(v72, v85);
LABEL_284:
                                  v88 = (unsigned __int64)m + 2;
                                  v89 = *(_BYTE *)((((unsigned __int64)m + 2) >> 3) + 0x7FFF8000);
                                  if ( v89 <= (((unsigned __int8)m + 2) & 7) && v89 )
                                  {
                                    __asan_report_load1(v88);
                                  }
                                  else
                                  {
                                    if ( *((_BYTE *)m + 2) != 116 )
                                      goto LABEL_397;
                                    v88 = (unsigned __int64)m + 3;
                                    v90 = *(_BYTE *)((((unsigned __int64)m + 3) >> 3) + 0x7FFF8000);
                                    if ( v90 > (((unsigned __int8)m + 3) & 7) || !v90 )
                                    {
                                      if ( *((_BYTE *)m + 3) != 59 )
                                        goto LABEL_397;
                                      v88 = *(_QWORD *)(v249 + 32);
                                      v91 = *(_BYTE *)((v88 >> 3) + 0x7FFF8000);
                                      if ( v91 > (*(_BYTE *)(v249 + 32) & 7) || !v91 )
                                      {
                                        *(_BYTE *)(*(_QWORD *)(v249 + 32))++ = 62;
                                        m = (char **)((char *)m + 4);
                                        continue;
                                      }
LABEL_295:
                                      __asan_report_store1(v88, v85);
LABEL_296:
                                      v92 = (unsigned __int64)m + 2;
                                      v93 = *(_BYTE *)((((unsigned __int64)m + 2) >> 3) + 0x7FFF8000);
                                      if ( v93 <= (((unsigned __int8)m + 2) & 7) && v93 )
                                      {
                                        __asan_report_load1(v92);
LABEL_306:
                                        __asan_report_load1(v92);
LABEL_307:
                                        __asan_report_store1(v92, v85);
LABEL_308:
                                        v96 = *(_BYTE *)((((unsigned __int64)m + 2) >> 3) + 0x7FFF8000);
                                        if ( v96 <= (((unsigned __int8)m + 2) & 7) && v96 )
                                        {
                                          __asan_report_load1((char *)m + 2);
                                        }
                                        else if ( *((_BYTE *)m + 2) != 120 )
                                        {
                                          v97 = (unsigned __int64)m + 2;
                                          v98 = 0LL;
                                          while ( 1 )
                                          {
                                            v107 = *(_BYTE *)((v97 >> 3) + 0x7FFF8000);
                                            if ( v107 <= (char)(v97 & 7) && v107 )
                                            {
                                              v105 = __asan_report_load1(v97);
                                            }
                                            else
                                            {
                                              v105 = *(unsigned __int8 *)v97;
                                              v108 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v97] >> 3)
                                                              + 0x7FFF8000);
                                              if ( v108 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(_BYTE *)v97] & 7)
                                                && v108 )
                                              {
                                                __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v97]);
LABEL_335:
                                                if ( v98 <= 0x7F )
                                                {
                                                  v109 = *(_BYTE *)((*(_QWORD *)(v249 + 32) >> 3) + 0x7FFF8000LL);
                                                  v110 = *(_QWORD *)(v249 + 32) & 7LL;
                                                  if ( v109 > (char)v110 || !v109 )
                                                  {
                                                    *(_BYTE *)(*(_QWORD *)(v249 + 32))++ = v98;
                                                    goto LABEL_323;
                                                  }
                                                  __asan_report_store1(*(_QWORD *)(v249 + 32), v110);
                                                }
                                                if ( v98 <= 0x7FF )
                                                {
                                                  v111 = *(_QWORD *)(v249 + 32);
                                                  v112 = v111 + 1;
                                                  v113 = *(unsigned __int8 *)(((unsigned __int64)(v111 + 1) >> 3)
                                                                            + 0x7FFF8000);
                                                  if ( (char)v113 <= ((v111 + 1) & 7) && (_BYTE)v113 )
                                                  {
                                                    __asan_report_store1(v112, v113);
                                                  }
                                                  else
                                                  {
                                                    *(_BYTE *)(v111 + 1) = v98 & 0x3F | 0x80;
                                                    v114 = (v98 >> 6) | 0xC0;
                                                    v112 = *(_QWORD *)(v249 + 32);
                                                    v115 = *(_BYTE *)((v112 >> 3) + 0x7FFF8000);
                                                    v113 = v112 & 7;
                                                    if ( v115 > (char)(v112 & 7) || !v115 )
                                                    {
                                                      **(_BYTE **)(v249 + 32) = v114;
                                                      *(_QWORD *)(v249 + 32) += 2LL;
                                                      goto LABEL_323;
                                                    }
                                                  }
                                                  __asan_report_store1(v112, v113);
                                                }
                                                if ( v98 > 0xFFFF )
                                                  goto LABEL_359;
                                                v116 = *(_QWORD *)(v249 + 32);
                                                v117 = v116 + 2;
                                                v118 = *(unsigned __int8 *)(((unsigned __int64)(v116 + 2) >> 3)
                                                                          + 0x7FFF8000);
                                                if ( (char)v118 <= ((v116 + 2) & 7) && (_BYTE)v118 )
                                                {
                                                  __asan_report_store1(v117, v118);
                                                }
                                                else
                                                {
                                                  *(_BYTE *)(v116 + 2) = v98 & 0x3F | 0x80;
                                                  v119 = *(_QWORD *)(v249 + 32);
                                                  v117 = v119 + 1;
                                                  v118 = *(unsigned __int8 *)(((unsigned __int64)(v119 + 1) >> 3)
                                                                            + 0x7FFF8000);
                                                  if ( (char)v118 > ((v119 + 1) & 7) || !(_BYTE)v118 )
                                                  {
                                                    *(_BYTE *)(v119 + 1) = (v98 >> 6) & 0x3F | 0x80;
                                                    v120 = (v98 >> 12) | 0xE0;
                                                    v117 = *(_QWORD *)(v249 + 32);
                                                    v121 = *(_BYTE *)((v117 >> 3) + 0x7FFF8000);
                                                    v118 = v117 & 7;
                                                    if ( v121 > (char)(v117 & 7) || !v121 )
                                                    {
                                                      **(_BYTE **)(v249 + 32) = v120;
                                                      *(_QWORD *)(v249 + 32) += 3LL;
                                                      goto LABEL_323;
                                                    }
LABEL_358:
                                                    __asan_report_store1(v117, v118);
LABEL_359:
                                                    if ( v98 > 0x10FFFF )
                                                      goto LABEL_373;
                                                    v122 = *(_QWORD *)(v249 + 32);
                                                    v123 = v122 + 3;
                                                    v124 = *(unsigned __int8 *)(((unsigned __int64)(v122 + 3) >> 3)
                                                                              + 0x7FFF8000);
                                                    if ( (char)v124 <= ((v122 + 3) & 7) && (_BYTE)v124 )
                                                    {
                                                      __asan_report_store1(v123, v124);
                                                    }
                                                    else
                                                    {
                                                      *(_BYTE *)(v122 + 3) = v98 & 0x3F | 0x80;
                                                      v125 = *(_QWORD *)(v249 + 32);
                                                      v123 = v125 + 2;
                                                      v124 = *(unsigned __int8 *)(((unsigned __int64)(v125 + 2) >> 3)
                                                                                + 0x7FFF8000);
                                                      if ( (char)v124 > ((v125 + 2) & 7) || !(_BYTE)v124 )
                                                      {
                                                        *(_BYTE *)(v125 + 2) = (v98 >> 6) & 0x3F | 0x80;
                                                        v126 = *(_QWORD *)(v249 + 32);
                                                        v123 = v126 + 1;
                                                        v124 = *(unsigned __int8 *)(((unsigned __int64)(v126 + 1) >> 3)
                                                                                  + 0x7FFF8000);
                                                        if ( (char)v124 > ((v126 + 1) & 7) || !(_BYTE)v124 )
                                                        {
                                                          *(_BYTE *)(v126 + 1) = (v98 >> 12) & 0x3F | 0x80;
                                                          v127 = (v98 >> 18) | 0xF0;
                                                          v123 = *(_QWORD *)(v249 + 32);
                                                          v128 = *(_BYTE *)((v123 >> 3) + 0x7FFF8000);
                                                          v124 = v123 & 7;
                                                          if ( v128 > (char)(v123 & 7) || !v128 )
                                                          {
                                                            **(_BYTE **)(v249 + 32) = v127;
                                                            *(_QWORD *)(v249 + 32) += 4LL;
                                                            goto LABEL_323;
                                                          }
LABEL_372:
                                                          __asan_report_store1(v123, v124);
LABEL_373:
                                                          v129 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                                                          v130 = *(_QWORD *)(v249 + 32);
                                                          if ( *(_BYTE *)((v129 >> 3) + 0x7FFF8000) )
                                                            v130 = __asan_report_store8();
                                                          *(_QWORD *)v129 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error
                                                                          + 2;
                                                          if ( *(_BYTE *)(((v129 + 8) >> 3) + 0x7FFF8000) )
                                                            v130 = __asan_report_store8();
                                                          *(_QWORD *)(v129 + 8) = "invalid numeric character entity";
                                                          if ( *(_BYTE *)(((v129 + 16) >> 3) + 0x7FFF8000) )
                                                            v130 = __asan_report_store8();
                                                          *(_QWORD *)(v129 + 16) = v130;
                                                          __asan_handle_no_return(v129 + 16);
                                                          _cxa_throw(
                                                            (void *)v129,
                                                            (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                                                            (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                                                        }
LABEL_371:
                                                        __asan_report_store1(v123, v124);
                                                        goto LABEL_372;
                                                      }
                                                    }
                                                    __asan_report_store1(v123, v124);
                                                    goto LABEL_371;
                                                  }
                                                }
                                                __asan_report_store1(v117, v118);
                                                goto LABEL_358;
                                              }
                                            }
                                            v106 = boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[v105];
                                            if ( v106 == 0xFF )
                                              goto LABEL_335;
                                            v98 = v106 + 10 * v98;
                                            ++v97;
                                          }
                                        }
                                        v97 = (unsigned __int64)m + 3;
                                        v99 = 0LL;
                                        while ( 1 )
                                        {
                                          v102 = *(_BYTE *)((v97 >> 3) + 0x7FFF8000);
                                          if ( v102 <= (char)(v97 & 7) && v102 )
                                          {
                                            v100 = __asan_report_load1(v97);
                                          }
                                          else
                                          {
                                            v100 = *(unsigned __int8 *)v97;
                                            v103 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v97] >> 3)
                                                            + 0x7FFF8000);
                                            if ( v103 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(_BYTE *)v97] & 7)
                                              && v103 )
                                            {
                                              __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v97]);
LABEL_322:
                                              boost::property_tree::detail::rapidxml::xml_document<char>::insert_coded_character<0>(
                                                (char **)(v249 + 32),
                                                v99);
LABEL_323:
                                              v104 = *(_BYTE *)((v97 >> 3) + 0x7FFF8000);
                                              if ( v104 <= (char)(v97 & 7) && v104 )
                                              {
                                                __asan_report_load1(v97);
                                              }
                                              else if ( *(_BYTE *)v97 == 59 )
                                              {
                                                m = (char **)(v97 + 1);
                                                goto LABEL_389;
                                              }
                                              v131 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                                              if ( *(_BYTE *)((v131 >> 3) + 0x7FFF8000) )
                                                __asan_report_store8();
                                              *(_QWORD *)v131 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error
                                                              + 2;
                                              if ( *(_BYTE *)(((v131 + 8) >> 3) + 0x7FFF8000) )
                                                __asan_report_store8();
                                              *(_QWORD *)(v131 + 8) = "expected ;";
                                              if ( *(_BYTE *)(((v131 + 16) >> 3) + 0x7FFF8000) )
                                                __asan_report_store8();
                                              *(_QWORD *)(v131 + 16) = v97;
                                              __asan_handle_no_return(v131 + 16);
                                              _cxa_throw(
                                                (void *)v131,
                                                (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                                                (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                                            }
                                          }
                                          v101 = boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[v100];
                                          if ( v101 == 0xFF )
                                            goto LABEL_322;
                                          v99 = v101 + 16 * v99;
                                          ++v97;
                                        }
                                      }
                                      if ( *((_BYTE *)m + 2) != 116 )
                                        goto LABEL_397;
                                      v92 = (unsigned __int64)m + 3;
                                      v94 = *(_BYTE *)((((unsigned __int64)m + 3) >> 3) + 0x7FFF8000);
                                      if ( v94 <= (((unsigned __int8)m + 3) & 7) && v94 )
                                        goto LABEL_306;
                                      if ( *((_BYTE *)m + 3) != 59 )
                                        goto LABEL_397;
                                      v92 = *(_QWORD *)(v249 + 32);
                                      v95 = *(_BYTE *)((v92 >> 3) + 0x7FFF8000);
                                      if ( v95 <= (*(_BYTE *)(v249 + 32) & 7) && v95 )
                                        goto LABEL_307;
                                      *(_BYTE *)(*(_QWORD *)(v249 + 32))++ = 60;
                                      m = (char **)((char *)m + 4);
                                      continue;
                                    }
                                  }
                                  __asan_report_load1(v88);
                                  goto LABEL_295;
                                }
LABEL_282:
                                __asan_report_load1(v72);
                                goto LABEL_283;
                              }
LABEL_281:
                              __asan_report_load1(v72);
                              goto LABEL_282;
                            }
LABEL_280:
                            __asan_report_load1(v72);
                            goto LABEL_281;
                          }
LABEL_279:
                          __asan_report_load1(v72);
                          goto LABEL_280;
                        }
                      }
                      if ( v71 == 35 )
                        goto LABEL_308;
                      if ( v71 != 97 )
                        goto LABEL_397;
                      v78 = *(_BYTE *)((((unsigned __int64)m + 2) >> 3) + 0x7FFF8000);
                      if ( v78 <= (((unsigned __int8)m + 2) & 7) && v78 )
                      {
                        v79 = __asan_report_load1((char *)m + 2);
                      }
                      else
                      {
                        v79 = *((_BYTE *)m + 2);
                        if ( v79 != 109 )
                          goto LABEL_249;
                      }
                      v72 = (unsigned __int64)m + 3;
                      v84 = *(_BYTE *)((((unsigned __int64)m + 3) >> 3) + 0x7FFF8000);
                      v85 = ((_BYTE)m + 3) & 7;
                      if ( v84 <= (char)v85 && v84 )
                      {
                        __asan_report_load1(v72);
                      }
                      else
                      {
                        if ( *((_BYTE *)m + 3) != 112 )
                          goto LABEL_249;
                        v72 = (unsigned __int64)m + 4;
                        v86 = *(_BYTE *)((((unsigned __int64)m + 4) >> 3) + 0x7FFF8000);
                        v85 = ((_BYTE)m + 4) & 7;
                        if ( v86 > (char)v85 || !v86 )
                        {
                          if ( *((_BYTE *)m + 4) == 59 )
                          {
                            v72 = *(_QWORD *)(v249 + 32);
                            v87 = *(_BYTE *)((v72 >> 3) + 0x7FFF8000);
                            if ( v87 > (*(_BYTE *)(v249 + 32) & 7) || !v87 )
                            {
                              *(_BYTE *)(*(_QWORD *)(v249 + 32))++ = 38;
                              m = (char **)((char *)m + 5);
                              continue;
                            }
LABEL_274:
                            __asan_report_store1(v72, v85);
LABEL_275:
                            __asan_report_load1(v72);
                            goto LABEL_276;
                          }
LABEL_249:
                          if ( v79 != 112 )
                            goto LABEL_397;
                          v72 = (unsigned __int64)m + 3;
                          v80 = *(_BYTE *)((((unsigned __int64)m + 3) >> 3) + 0x7FFF8000);
                          if ( v80 <= (((unsigned __int8)m + 3) & 7) && v80 )
                            goto LABEL_275;
                          if ( *((_BYTE *)m + 3) != 111 )
                            goto LABEL_397;
                          v72 = (unsigned __int64)m + 4;
                          v81 = *(_BYTE *)((((unsigned __int64)m + 4) >> 3) + 0x7FFF8000);
                          if ( v81 <= (((unsigned __int8)m + 4) & 7) && v81 )
                          {
LABEL_276:
                            __asan_report_load1(v72);
                          }
                          else
                          {
                            if ( *((_BYTE *)m + 4) != 115 )
                              goto LABEL_397;
                            v72 = (unsigned __int64)m + 5;
                            v82 = *(_BYTE *)((((unsigned __int64)m + 5) >> 3) + 0x7FFF8000);
                            if ( v82 > (((unsigned __int8)m + 5) & 7) || !v82 )
                            {
                              if ( *((_BYTE *)m + 5) != 59 )
                                goto LABEL_397;
                              v72 = *(_QWORD *)(v249 + 32);
                              v83 = *(_BYTE *)((v72 >> 3) + 0x7FFF8000);
                              if ( v83 > (*(_BYTE *)(v249 + 32) & 7) || !v83 )
                              {
                                *(_BYTE *)(*(_QWORD *)(v249 + 32))++ = 39;
                                m = (char **)((char *)m + 6);
                                continue;
                              }
                              goto LABEL_278;
                            }
                          }
                          __asan_report_load1(v72);
LABEL_278:
                          __asan_report_store1(v72, v85);
                          goto LABEL_279;
                        }
                      }
                      __asan_report_load1(v72);
                      goto LABEL_274;
                    }
                    break;
                  }
                  if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_1[v69] )
                    goto LABEL_400;
                  if ( v68 == 38 )
                    goto LABEL_222;
LABEL_397:
                  m = (char **)((char *)m + 1);
                  v134 = *(_QWORD *)(v249 + 32);
                  *(_QWORD *)(v249 + 32) = v134 + 1;
                  v135 = *(_BYTE *)((v134 >> 3) + 0x7FFF8000);
                  v85 = v134 & 7;
                  if ( v135 > (char)v85 || !v135 )
                  {
                    *(_BYTE *)v134 = v68;
                    continue;
                  }
                  break;
                }
                __asan_report_store1(v134, v85);
LABEL_400:
                v136 = v3;
                if ( !*(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                {
                  *(_QWORD *)v3 = m;
                  v137 = *(_QWORD *)(v249 + 32);
                  goto LABEL_642;
                }
                __asan_report_store8();
LABEL_403:
                v62 = __asan_report_load1(v136);
LABEL_404:
                for ( n = 122LL; ; n = (char)n )
                {
                  v140 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_2_pure[n] >> 3)
                                  + 0x7FFF8000);
                  if ( v140 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_2_pure[n] & 7) )
                  {
                    if ( v140 )
                      break;
                  }
                  if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_2_pure[n] )
                    goto LABEL_414;
                  ++v62;
LABEL_407:
                  v136 = v62;
                  v139 = *(_BYTE *)((v62 >> 3) + 0x7FFF8000);
                  if ( v139 <= (char)(v62 & 7) && v139 )
                    goto LABEL_403;
                  LOBYTE(n) = *(_BYTE *)v62;
                  if ( (unsigned int)*(char *)v62 > 0x7F )
                    goto LABEL_404;
                }
                v62 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_2_pure[n]);
LABEL_414:
                *(_QWORD *)v3 = v62;
                v137 = v62;
                while ( 2 )
                {
                  v214 = *(_BYTE *)((v62 >> 3) + 0x7FFF8000);
                  v85 = v62 & 7;
                  if ( v214 <= (char)v85 && v214 )
                  {
                    v62 = __asan_report_load1(v62);
                  }
                  else
                  {
                    v85 = *(unsigned __int8 *)v62;
                    if ( (unsigned int)(char)v85 <= 0x7F )
                    {
                      v141 = (char)v85;
                      goto LABEL_634;
                    }
                  }
                  v141 = 122LL;
LABEL_634:
                  v215 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_2[v141] >> 3)
                                  + 0x7FFF8000);
                  if ( v215 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_2[v141] & 7)
                    && v215 )
                  {
                    v62 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_2[v141]);
                  }
                  else
                  {
                    if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_2[v141] )
                      goto LABEL_641;
                    if ( (_BYTE)v85 != 38 )
                      goto LABEL_638;
                  }
                  v142 = *(_BYTE *)(((v62 + 1) >> 3) + 0x7FFF8000);
                  if ( v142 <= (char)((v62 + 1) & 7) && v142 )
                  {
                    v62 = __asan_report_load1(v62 + 1);
LABEL_440:
                    if ( v143 == 35 )
                      goto LABEL_504;
                    if ( v143 != 97 )
                      goto LABEL_638;
                    v151 = *(_BYTE *)(((v62 + 2) >> 3) + 0x7FFF8000);
                    if ( v151 <= (char)((v62 + 2) & 7) && v151 )
                    {
                      v62 = __asan_report_load1(v62 + 2);
                    }
                    else
                    {
                      v152 = *(_BYTE *)(v62 + 2);
                      if ( v152 != 109 )
                        goto LABEL_445;
                    }
                    v144 = v62 + 3;
                    v157 = *(_BYTE *)(((v62 + 3) >> 3) + 0x7FFF8000);
                    if ( v157 <= (char)((v62 + 3) & 7) && v157 )
                    {
                      __asan_report_load1(v144);
                    }
                    else
                    {
                      if ( *(_BYTE *)(v62 + 3) != 112 )
                        goto LABEL_445;
                      v144 = v62 + 4;
                      v158 = *(_BYTE *)(((v62 + 4) >> 3) + 0x7FFF8000);
                      if ( v158 > (char)((v62 + 4) & 7) || !v158 )
                      {
                        if ( *(_BYTE *)(v62 + 4) == 59 )
                        {
                          v144 = v137;
                          v159 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                          v85 = v137 & 7;
                          if ( v159 > (char)v85 || !v159 )
                          {
                            *(_BYTE *)v137 = 38;
                            v150 = (_BYTE *)(v137 + 1);
                            v62 += 5LL;
                            goto LABEL_629;
                          }
LABEL_470:
                          __asan_report_store1(v144, v85);
LABEL_471:
                          __asan_report_load1(v144);
                          goto LABEL_472;
                        }
LABEL_445:
                        if ( v152 != 112 )
                          goto LABEL_638;
                        v144 = v62 + 3;
                        v153 = *(_BYTE *)(((v62 + 3) >> 3) + 0x7FFF8000);
                        if ( v153 <= (char)((v62 + 3) & 7) && v153 )
                          goto LABEL_471;
                        if ( *(_BYTE *)(v62 + 3) != 111 )
                          goto LABEL_638;
                        v144 = v62 + 4;
                        v154 = *(_BYTE *)(((v62 + 4) >> 3) + 0x7FFF8000);
                        if ( v154 <= (char)((v62 + 4) & 7) && v154 )
                        {
LABEL_472:
                          __asan_report_load1(v144);
                        }
                        else
                        {
                          if ( *(_BYTE *)(v62 + 4) != 115 )
                            goto LABEL_638;
                          v144 = v62 + 5;
                          v155 = *(_BYTE *)(((v62 + 5) >> 3) + 0x7FFF8000);
                          if ( v155 > (char)((v62 + 5) & 7) || !v155 )
                          {
                            if ( *(_BYTE *)(v62 + 5) != 59 )
                              goto LABEL_638;
                            v144 = v137;
                            v156 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                            v85 = v137 & 7;
                            if ( v156 > (char)v85 || !v156 )
                            {
                              *(_BYTE *)v137 = 39;
                              v150 = (_BYTE *)(v137 + 1);
                              v62 += 6LL;
                              goto LABEL_629;
                            }
                            goto LABEL_474;
                          }
                        }
                        __asan_report_load1(v144);
LABEL_474:
                        __asan_report_store1(v144, v85);
LABEL_475:
                        __asan_report_load1(v144);
LABEL_476:
                        __asan_report_load1(v144);
LABEL_477:
                        __asan_report_load1(v144);
LABEL_478:
                        __asan_report_load1(v144);
                        goto LABEL_479;
                      }
                    }
                    __asan_report_load1(v144);
                    goto LABEL_470;
                  }
                  v143 = *(_BYTE *)(v62 + 1);
                  if ( v143 == 103 )
                    goto LABEL_480;
                  if ( v143 <= 103 )
                    goto LABEL_440;
                  if ( v143 == 108 )
                    goto LABEL_492;
                  if ( v143 != 113 )
                    goto LABEL_638;
                  v144 = v62 + 2;
                  v145 = *(_BYTE *)(((v62 + 2) >> 3) + 0x7FFF8000);
                  if ( v145 <= (char)((v62 + 2) & 7) && v145 )
                    goto LABEL_475;
                  if ( *(_BYTE *)(v62 + 2) != 117 )
                    goto LABEL_638;
                  v144 = v62 + 3;
                  v146 = *(_BYTE *)(((v62 + 3) >> 3) + 0x7FFF8000);
                  if ( v146 <= (char)((v62 + 3) & 7) && v146 )
                    goto LABEL_476;
                  if ( *(_BYTE *)(v62 + 3) != 111 )
                    goto LABEL_638;
                  v144 = v62 + 4;
                  v147 = *(_BYTE *)(((v62 + 4) >> 3) + 0x7FFF8000);
                  if ( v147 <= (char)((v62 + 4) & 7) && v147 )
                    goto LABEL_477;
                  if ( *(_BYTE *)(v62 + 4) != 116 )
                    goto LABEL_638;
                  v144 = v62 + 5;
                  v148 = *(_BYTE *)(((v62 + 5) >> 3) + 0x7FFF8000);
                  if ( v148 <= (char)((v62 + 5) & 7) && v148 )
                    goto LABEL_478;
                  if ( *(_BYTE *)(v62 + 5) != 59 )
                    goto LABEL_638;
                  v144 = v137;
                  v149 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                  v85 = v137 & 7;
                  if ( v149 > (char)v85 || !v149 )
                  {
                    *(_BYTE *)v137 = 34;
                    v150 = (_BYTE *)(v137 + 1);
                    v62 += 6LL;
                    goto LABEL_629;
                  }
LABEL_479:
                  v62 = __asan_report_store1(v144, v85);
LABEL_480:
                  v160 = v62 + 2;
                  v161 = *(_BYTE *)(((v62 + 2) >> 3) + 0x7FFF8000);
                  if ( v161 <= (char)((v62 + 2) & 7) && v161 )
                  {
                    __asan_report_load1(v160);
LABEL_490:
                    __asan_report_load1(v160);
                    goto LABEL_491;
                  }
                  if ( *(_BYTE *)(v62 + 2) != 116 )
                    goto LABEL_638;
                  v160 = v62 + 3;
                  v162 = *(_BYTE *)(((v62 + 3) >> 3) + 0x7FFF8000);
                  if ( v162 <= (char)((v62 + 3) & 7) && v162 )
                    goto LABEL_490;
                  if ( *(_BYTE *)(v62 + 3) != 59 )
                    goto LABEL_638;
                  v160 = v137;
                  v163 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                  v85 = v137 & 7;
                  if ( v163 > (char)v85 || !v163 )
                  {
                    *(_BYTE *)v137 = 62;
                    v150 = (_BYTE *)(v137 + 1);
                    v62 += 4LL;
                    goto LABEL_629;
                  }
LABEL_491:
                  v62 = __asan_report_store1(v160, v85);
LABEL_492:
                  v164 = v62 + 2;
                  v165 = *(_BYTE *)(((v62 + 2) >> 3) + 0x7FFF8000);
                  if ( v165 <= (char)((v62 + 2) & 7) && v165 )
                  {
                    __asan_report_load1(v164);
LABEL_502:
                    __asan_report_load1(v164);
LABEL_503:
                    v62 = __asan_report_store1(v164, v85);
LABEL_504:
                    v168 = *(_BYTE *)(((v62 + 2) >> 3) + 0x7FFF8000);
                    if ( v168 <= (char)((v62 + 2) & 7) && v168 )
                    {
                      v62 = __asan_report_load1(v62 + 2);
                    }
                    else if ( *(_BYTE *)(v62 + 2) != 120 )
                    {
                      v169 = v62 + 2;
                      v170 = 0LL;
                      while ( 1 )
                      {
                        v194 = *(_BYTE *)((v169 >> 3) + 0x7FFF8000);
                        if ( v194 <= (char)(v169 & 7) && v194 )
                        {
                          v169 = __asan_report_load1(v169);
                        }
                        else
                        {
                          v192 = *(unsigned __int8 *)v169;
                          v195 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v169] >> 3)
                                          + 0x7FFF8000);
                          if ( v195 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(_BYTE *)v169] & 7)
                            && v195 )
                          {
                            v169 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v169]);
LABEL_571:
                            if ( v170 <= 0x7F )
                            {
                              v196 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                              if ( v196 > (char)(v137 & 7) || !v196 )
                              {
                                *(_BYTE *)v137 = v170;
                                v150 = (_BYTE *)(v137 + 1);
                                goto LABEL_575;
                              }
                              v169 = __asan_report_store1(v137, v170);
                            }
                            if ( v170 <= 0x7FF )
                            {
                              v198 = (_BYTE *)(v137 + 1);
                              v199 = *(_BYTE *)(((v137 + 1) >> 3) + 0x7FFF8000);
                              if ( v199 <= (char)((v137 + 1) & 7) && v199 )
                              {
                                __asan_report_store1(v198, v170);
                              }
                              else
                              {
                                *(_BYTE *)(v137 + 1) = v170 & 0x3F | 0x80;
                                v170 = (unsigned int)(v170 >> 6) | 0xFFFFFFC0;
                                v198 = (_BYTE *)v137;
                                v200 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                                if ( v200 > (char)(v137 & 7) || !v200 )
                                {
                                  *(_BYTE *)v137 = v170;
                                  v150 = (_BYTE *)(v137 + 2);
                                  goto LABEL_575;
                                }
                              }
                              v169 = __asan_report_store1(v198, v170);
                            }
                            if ( v170 > 0xFFFF )
                              goto LABEL_599;
                            v201 = (_BYTE *)(v137 + 2);
                            v202 = *(_BYTE *)(((v137 + 2) >> 3) + 0x7FFF8000);
                            if ( v202 <= (char)((v137 + 2) & 7) && v202 )
                            {
                              __asan_report_store1(v201, v170);
                            }
                            else
                            {
                              *(_BYTE *)(v137 + 2) = v170 & 0x3F | 0x80;
                              v201 = (_BYTE *)(v137 + 1);
                              v203 = *(_BYTE *)(((v137 + 1) >> 3) + 0x7FFF8000);
                              if ( v203 > (char)((v137 + 1) & 7) || !v203 )
                              {
                                *(_BYTE *)(v137 + 1) = (v170 >> 6) & 0x3F | 0x80;
                                v170 = (unsigned int)(v170 >> 12) | 0xFFFFFFE0;
                                v201 = (_BYTE *)v137;
                                v204 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                                if ( v204 > (char)(v137 & 7) || !v204 )
                                {
                                  *(_BYTE *)v137 = v170;
                                  v150 = (_BYTE *)(v137 + 3);
                                  goto LABEL_575;
                                }
LABEL_598:
                                v169 = __asan_report_store1(v201, v170);
LABEL_599:
                                if ( v170 > 0x10FFFF )
                                  goto LABEL_613;
                                v205 = (_BYTE *)(v137 + 3);
                                v206 = *(_BYTE *)(((v137 + 3) >> 3) + 0x7FFF8000);
                                if ( v206 <= (char)((v137 + 3) & 7) && v206 )
                                {
                                  __asan_report_store1(v205, v170);
                                }
                                else
                                {
                                  *(_BYTE *)(v137 + 3) = v170 & 0x3F | 0x80;
                                  v205 = (_BYTE *)(v137 + 2);
                                  v207 = *(_BYTE *)(((v137 + 2) >> 3) + 0x7FFF8000);
                                  if ( v207 > (char)((v137 + 2) & 7) || !v207 )
                                  {
                                    *(_BYTE *)(v137 + 2) = (v170 >> 6) & 0x3F | 0x80;
                                    v205 = (_BYTE *)(v137 + 1);
                                    v208 = *(_BYTE *)(((v137 + 1) >> 3) + 0x7FFF8000);
                                    if ( v208 > (char)((v137 + 1) & 7) || !v208 )
                                    {
                                      *(_BYTE *)(v137 + 1) = (v170 >> 12) & 0x3F | 0x80;
                                      v170 = (unsigned int)(v170 >> 18) | 0xFFFFFFF0;
                                      v205 = (_BYTE *)v137;
                                      v209 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                                      if ( v209 > (char)(v137 & 7) || !v209 )
                                      {
                                        *(_BYTE *)v137 = v170;
                                        v150 = (_BYTE *)(v137 + 4);
                                        goto LABEL_575;
                                      }
LABEL_612:
                                      __asan_report_store1(v205, v170);
LABEL_613:
                                      v210 = v137;
                                      v211 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                                      if ( *(_BYTE *)((v211 >> 3) + 0x7FFF8000) )
                                        __asan_report_store8();
                                      *(_QWORD *)v211 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error
                                                      + 2;
                                      if ( *(_BYTE *)(((v211 + 8) >> 3) + 0x7FFF8000) )
                                        __asan_report_store8();
                                      *(_QWORD *)(v211 + 8) = "invalid numeric character entity";
                                      if ( *(_BYTE *)(((v211 + 16) >> 3) + 0x7FFF8000) )
                                        __asan_report_store8();
                                      *(_QWORD *)(v211 + 16) = v210;
                                      __asan_handle_no_return(v211 + 16);
                                      _cxa_throw(
                                        (void *)v211,
                                        (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                                        (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                                    }
LABEL_611:
                                    __asan_report_store1(v205, v170);
                                    goto LABEL_612;
                                  }
                                }
                                __asan_report_store1(v205, v170);
                                goto LABEL_611;
                              }
                            }
                            __asan_report_store1(v201, v170);
                            goto LABEL_598;
                          }
                        }
                        v193 = boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[v192];
                        if ( v193 == 0xFF )
                          goto LABEL_571;
                        v170 = v193 + 10 * v170;
                        ++v169;
                      }
                    }
                    v169 = v62 + 3;
                    v171 = 0LL;
                    while ( 1 )
                    {
                      v174 = *(_BYTE *)((v169 >> 3) + 0x7FFF8000);
                      if ( v174 <= (char)(v169 & 7) && v174 )
                      {
                        v169 = __asan_report_load1(v169);
                      }
                      else
                      {
                        v172 = *(unsigned __int8 *)v169;
                        v175 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v169] >> 3)
                                        + 0x7FFF8000);
                        if ( v175 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(_BYTE *)v169] & 7)
                          && v175 )
                        {
                          v169 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v169]);
LABEL_518:
                          if ( v171 <= 0x7F )
                          {
                            v176 = v171;
                            v177 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                            v171 = v137 & 7;
                            if ( v177 > (char)v171 || !v177 )
                            {
                              *(_BYTE *)v137 = v176;
                              v150 = (_BYTE *)(v137 + 1);
LABEL_575:
                              v197 = *(_BYTE *)((v169 >> 3) + 0x7FFF8000);
                              if ( v197 <= (char)(v169 & 7) && v197 )
                              {
                                v169 = __asan_report_load1(v169);
                              }
                              else if ( *(_BYTE *)v169 == 59 )
                              {
                                v62 = v169 + 1;
                                goto LABEL_629;
                              }
                              v212 = v169;
                              v213 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                              if ( *(_BYTE *)((v213 >> 3) + 0x7FFF8000) )
                                __asan_report_store8();
                              *(_QWORD *)v213 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                              if ( *(_BYTE *)(((v213 + 8) >> 3) + 0x7FFF8000) )
                                __asan_report_store8();
                              *(_QWORD *)(v213 + 8) = "expected ;";
                              if ( *(_BYTE *)(((v213 + 16) >> 3) + 0x7FFF8000) )
                                __asan_report_store8();
                              *(_QWORD *)(v213 + 16) = v212;
                              __asan_handle_no_return(v213 + 16);
                              _cxa_throw(
                                (void *)v213,
                                (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                                (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                            }
                            v169 = __asan_report_store1(v137, v171);
                          }
                          if ( v171 <= 0x7FF )
                          {
                            v178 = (_BYTE *)(v137 + 1);
                            v179 = *(_BYTE *)(((v137 + 1) >> 3) + 0x7FFF8000);
                            if ( v179 <= (char)((v137 + 1) & 7) && v179 )
                            {
                              __asan_report_store1(v178, v171);
                            }
                            else
                            {
                              *(_BYTE *)(v137 + 1) = v171 & 0x3F | 0x80;
                              v180 = (v171 >> 6) | 0xC0;
                              v178 = (_BYTE *)v137;
                              v171 = *(unsigned __int8 *)((v137 >> 3) + 0x7FFF8000);
                              if ( (char)v171 > (char)(v137 & 7) || !(_BYTE)v171 )
                              {
                                *(_BYTE *)v137 = v180;
                                v150 = (_BYTE *)(v137 + 2);
                                goto LABEL_575;
                              }
                            }
                            v169 = __asan_report_store1(v178, v171);
                          }
                          if ( v171 > 0xFFFF )
                            goto LABEL_542;
                          v181 = (_BYTE *)(v137 + 2);
                          v182 = *(_BYTE *)(((v137 + 2) >> 3) + 0x7FFF8000);
                          if ( v182 <= (char)((v137 + 2) & 7) && v182 )
                          {
                            __asan_report_store1(v181, v171);
                          }
                          else
                          {
                            *(_BYTE *)(v137 + 2) = v171 & 0x3F | 0x80;
                            v181 = (_BYTE *)(v137 + 1);
                            v183 = *(_BYTE *)(((v137 + 1) >> 3) + 0x7FFF8000);
                            if ( v183 > (char)((v137 + 1) & 7) || !v183 )
                            {
                              *(_BYTE *)(v137 + 1) = (v171 >> 6) & 0x3F | 0x80;
                              v184 = (v171 >> 12) | 0xE0;
                              v181 = (_BYTE *)v137;
                              v171 = *(unsigned __int8 *)((v137 >> 3) + 0x7FFF8000);
                              if ( (char)v171 > (char)(v137 & 7) || !(_BYTE)v171 )
                              {
                                *(_BYTE *)v137 = v184;
                                v150 = (_BYTE *)(v137 + 3);
                                goto LABEL_575;
                              }
LABEL_541:
                              v169 = __asan_report_store1(v181, v171);
LABEL_542:
                              if ( v171 > 0x10FFFF )
                                goto LABEL_556;
                              v185 = (_BYTE *)(v137 + 3);
                              v186 = *(_BYTE *)(((v137 + 3) >> 3) + 0x7FFF8000);
                              if ( v186 <= (char)((v137 + 3) & 7) && v186 )
                              {
                                __asan_report_store1(v185, v171);
                              }
                              else
                              {
                                *(_BYTE *)(v137 + 3) = v171 & 0x3F | 0x80;
                                v185 = (_BYTE *)(v137 + 2);
                                v187 = *(_BYTE *)(((v137 + 2) >> 3) + 0x7FFF8000);
                                if ( v187 > (char)((v137 + 2) & 7) || !v187 )
                                {
                                  *(_BYTE *)(v137 + 2) = (v171 >> 6) & 0x3F | 0x80;
                                  v185 = (_BYTE *)(v137 + 1);
                                  v188 = *(_BYTE *)(((v137 + 1) >> 3) + 0x7FFF8000);
                                  if ( v188 > (char)((v137 + 1) & 7) || !v188 )
                                  {
                                    *(_BYTE *)(v137 + 1) = (v171 >> 12) & 0x3F | 0x80;
                                    v189 = (v171 >> 18) | 0xF0;
                                    v185 = (_BYTE *)v137;
                                    v171 = *(unsigned __int8 *)((v137 >> 3) + 0x7FFF8000);
                                    if ( (char)v171 > (char)(v137 & 7) || !(_BYTE)v171 )
                                    {
                                      *(_BYTE *)v137 = v189;
                                      v150 = (_BYTE *)(v137 + 4);
                                      goto LABEL_575;
                                    }
LABEL_555:
                                    __asan_report_store1(v185, v171);
LABEL_556:
                                    v190 = v137;
                                    v191 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                                    if ( *(_BYTE *)((v191 >> 3) + 0x7FFF8000) )
                                      __asan_report_store8();
                                    *(_QWORD *)v191 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error
                                                    + 2;
                                    if ( *(_BYTE *)(((v191 + 8) >> 3) + 0x7FFF8000) )
                                      __asan_report_store8();
                                    *(_QWORD *)(v191 + 8) = "invalid numeric character entity";
                                    if ( *(_BYTE *)(((v191 + 16) >> 3) + 0x7FFF8000) )
                                      __asan_report_store8();
                                    *(_QWORD *)(v191 + 16) = v190;
                                    __asan_handle_no_return(v191 + 16);
                                    _cxa_throw(
                                      (void *)v191,
                                      (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                                      (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                                  }
LABEL_554:
                                  __asan_report_store1(v185, v171);
                                  goto LABEL_555;
                                }
                              }
                              __asan_report_store1(v185, v171);
                              goto LABEL_554;
                            }
                          }
                          __asan_report_store1(v181, v171);
                          goto LABEL_541;
                        }
                      }
                      v173 = boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[v172];
                      if ( v173 == 0xFF )
                        goto LABEL_518;
                      v171 = v173 + 16 * v171;
                      ++v169;
                    }
                  }
                  if ( *(_BYTE *)(v62 + 2) == 116 )
                  {
                    v164 = v62 + 3;
                    v166 = *(_BYTE *)(((v62 + 3) >> 3) + 0x7FFF8000);
                    if ( v166 <= (char)((v62 + 3) & 7) && v166 )
                      goto LABEL_502;
                    if ( *(_BYTE *)(v62 + 3) == 59 )
                    {
                      v164 = v137;
                      v167 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                      v85 = v137 & 7;
                      if ( v167 > (char)v85 || !v167 )
                      {
                        *(_BYTE *)v137 = 60;
                        v150 = (_BYTE *)(v137 + 1);
                        v62 += 4LL;
                        goto LABEL_629;
                      }
                      goto LABEL_503;
                    }
                  }
LABEL_638:
                  ++v62;
                  v150 = (_BYTE *)(v137 + 1);
                  v216 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                  if ( v216 > (char)(v137 & 7) || !v216 )
                  {
                    *(_BYTE *)v137 = v85;
LABEL_629:
                    v137 = (unsigned __int64)v150;
                    continue;
                  }
                  break;
                }
                v62 = __asan_report_store1(v137, v85);
LABEL_641:
                *(_QWORD *)v3 = v62;
LABEL_642:
                v217 = (_BYTE *)(v137 - (_QWORD)v61);
                v218 = (char **)(v4 + 8);
                if ( *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store8();
LABEL_656:
                  __asan_report_store8();
LABEL_657:
                  __asan_report_load8();
LABEL_658:
                  __asan_report_load1(v218);
LABEL_659:
                  v227 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  v228 = *(_QWORD *)v3;
                  if ( *(_BYTE *)((v227 >> 3) + 0x7FFF8000) )
                    v228 = __asan_report_store8();
                  *(_QWORD *)v227 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                  if ( *(_BYTE *)(((v227 + 8) >> 3) + 0x7FFF8000) )
                    v228 = __asan_report_store8();
                  *(_QWORD *)(v227 + 8) = "expected ' or \"";
                  if ( *(_BYTE *)(((v227 + 16) >> 3) + 0x7FFF8000) )
                    v228 = __asan_report_store8();
                  *(_QWORD *)(v227 + 16) = v228;
                  __asan_handle_no_return(v227 + 16);
                  _cxa_throw(
                    (void *)v227,
                    (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                    (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                }
                *(_QWORD *)(v4 + 8) = v61;
                v218 = (char **)(v4 + 24);
                if ( *(_BYTE *)(((v4 + 24) >> 3) + 0x7FFF8000) )
                  goto LABEL_656;
                *(_QWORD *)(v4 + 24) = v217;
                v218 = (char **)v3;
                if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                  goto LABEL_657;
                v219 = *(char ***)v3;
                v218 = *(char ***)v3;
                v220 = *(_BYTE *)((*(_QWORD *)v3 >> 3) + 0x7FFF8000LL);
                if ( v220 <= (*(_BYTE *)v3 & 7) && v220 )
                  goto LABEL_658;
                if ( m_begin != *(_BYTE *)v219 )
                  goto LABEL_659;
                *(_QWORD *)v3 = (char *)v219 + 1;
                v221 = *(char **)(v4 + 8);
                if ( v221 )
                  v222 = *(char **)(v4 + 8);
                else
                  v222 = (char *)&boost::property_tree::detail::rapidxml::xml_base<char>::nullstr(void)::zero;
                if ( v221 )
                  v223 = *(_QWORD *)(v4 + 24);
                else
                  v223 = 0LL;
                v224 = (unsigned __int64)&v222[v223];
                v225 = *(_BYTE *)((v224 >> 3) + 0x7FFF8000);
                if ( v225 > (char)(v224 & 7) || !v225 )
                {
                  *(_BYTE *)v224 = 0;
                  v226 = *(_QWORD *)v3;
                  goto LABEL_677;
                }
                v226 = __asan_report_store1(v224, v85);
LABEL_671:
                LOBYTE(v229) = *(_BYTE *)v226;
                if ( (unsigned int)*(char *)v226 <= 0x7F )
                {
                  v229 = (char)v229;
                  goto LABEL_673;
                }
                while ( 1 )
                {
                  v229 = 122LL;
LABEL_673:
                  v230 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v229] >> 3)
                                  + 0x7FFF8000);
                  v28 = (unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v229] & 7;
                  if ( v230 <= (char)v28 )
                  {
                    if ( v230 )
                      break;
                  }
                  if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v229] )
                    goto LABEL_682;
                  ++v226;
LABEL_677:
                  v231 = *(_BYTE *)((v226 >> 3) + 0x7FFF8000);
                  if ( v231 > (char)(v226 & 7) || !v231 )
                    goto LABEL_671;
                  v226 = __asan_report_load1(v226);
                }
                v226 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v229]);
LABEL_682:
                *(_QWORD *)v3 = v226;
                goto LABEL_683;
              }
              if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_1_pure[v65] )
                goto LABEL_218;
            }
          }
LABEL_150:
          __asan_report_store8();
          goto LABEL_151;
        }
LABEL_149:
        __asan_report_store8();
        goto LABEL_150;
      }
      if ( !*(_BYTE *)(((v6 + 72) >> 3) + 0x7FFF8000) )
      {
        v43 = *(_QWORD *)(v6 + 72);
        if ( !*(_BYTE *)(((v4 + 40) >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)(v4 + 40) = v43;
          if ( !*(_BYTE *)(((unsigned __int64)(v43 + 48) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v43 + 48) = v4;
            goto LABEL_116;
          }
          goto LABEL_145;
        }
LABEL_144:
        __asan_report_store8();
LABEL_145:
        __asan_report_store8();
        goto LABEL_146;
      }
    }
    __asan_report_load8();
    goto LABEL_144;
  }
  if ( boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_name[v29] )
  {
    v30 = (unsigned __int64)m + 1;
    *(_QWORD *)v3 = (char *)m + 1;
    goto LABEL_84;
  }
  v235 = *(char ***)v3;
  v236 = **(_BYTE **)v3;
  if ( v236 != 62 )
  {
    if ( v236 != 47 )
    {
      v246 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v247 = *(_QWORD *)v3;
      if ( *(_BYTE *)((v246 >> 3) + 0x7FFF8000) )
        v247 = __asan_report_store8();
      *(_QWORD *)v246 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
      if ( *(_BYTE *)(((v246 + 8) >> 3) + 0x7FFF8000) )
        v247 = __asan_report_store8();
      *(_QWORD *)(v246 + 8) = "expected >";
      if ( *(_BYTE *)(((v246 + 16) >> 3) + 0x7FFF8000) )
        v247 = __asan_report_store8();
      *(_QWORD *)(v246 + 16) = v247;
      __asan_handle_no_return(v246 + 16);
      _cxa_throw(
        (void *)v246,
        (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
        (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
    }
    *(_QWORD *)v3 = (char *)v235 + 1;
    v237 = *(_BYTE *)((((unsigned __int64)v235 + 1) >> 3) + 0x7FFF8000);
    if ( v237 <= (((unsigned __int8)v235 + 1) & 7) && v237 )
    {
      __asan_report_load1((char *)v235 + 1);
    }
    else if ( *((_BYTE *)v235 + 1) == 62 )
    {
      *(_QWORD *)v3 = (char *)v235 + 2;
      goto LABEL_698;
    }
    v244 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v245 = *(_QWORD *)v3;
    if ( *(_BYTE *)((v244 >> 3) + 0x7FFF8000) )
      v245 = __asan_report_store8();
    *(_QWORD *)v244 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
    if ( *(_BYTE *)(((v244 + 8) >> 3) + 0x7FFF8000) )
      v245 = __asan_report_store8();
    *(_QWORD *)(v244 + 8) = "expected >";
    if ( *(_BYTE *)(((v244 + 16) >> 3) + 0x7FFF8000) )
      v245 = __asan_report_store8();
    *(_QWORD *)(v244 + 16) = v245;
    __asan_handle_no_return(v244 + 16);
    _cxa_throw(
      (void *)v244,
      (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
      (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
  }
  *(_QWORD *)v3 = (char *)v235 + 1;
  v28 = v3;
  boost::property_tree::detail::rapidxml::xml_document<char>::parse_node_contents<0>(
    this,
    (char **)v3,
    (boost::property_tree::detail::rapidxml::xml_node<char> *)v6);
LABEL_698:
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else
  {
    v238 = *(char **)v6;
    if ( *(_QWORD *)v6 )
    {
      v239 = *(char **)v6;
      goto LABEL_701;
    }
  }
  v239 = (char *)&boost::property_tree::detail::rapidxml::xml_base<char>::nullstr(void)::zero;
LABEL_701:
  if ( !v238 )
    goto LABEL_732;
  if ( *(_BYTE *)(((v6 + 16) >> 3) + 0x7FFF8000) )
  {
    v239 = (char *)(v6 + 16);
    __asan_report_load8();
LABEL_732:
    v240 = 0LL;
    goto LABEL_704;
  }
  v240 = *(_QWORD *)(v6 + 16);
LABEL_704:
  v241 = (unsigned __int64)&v239[v240];
  v242 = *(_BYTE *)((v241 >> 3) + 0x7FFF8000);
  if ( v242 <= (char)(v241 & 7) && v242 )
  {
    __asan_report_store1(v241, v28);
    goto LABEL_734;
  }
  *(_BYTE *)v241 = 0;
  v4 = v249;
  if ( v251 != (char *)v249 )
  {
LABEL_734:
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v249 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    return (boost::property_tree::detail::rapidxml::xml_node<char> *)v6;
  }
  *(_QWORD *)((v249 >> 3) + 0x7FFF8000) = 0LL;
  return (boost::property_tree::detail::rapidxml::xml_node<char> *)v6;
};

// Line 2032: range 000000000C29F986-000000000C2A24AF
boost::property_tree::detail::rapidxml::xml_node<char> *__fastcall boost::property_tree::detail::rapidxml::xml_document<char>::parse_element<64>(
        boost::property_tree::detail::rapidxml::xml_document<char> *const this,
        char **text)
{
  char **m; // rbp
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rbx
  char **p_m_ptr; // rdi
  unsigned __int64 v6; // r15
  boost::property_tree::detail::rapidxml::memory_pool<char>::boost_ptree_raw_alloc_func *m_alloc_func; // rax
  char *v8; // rax
  char **v9; // rdi
  _QWORD *v10; // rdi
  char *v11; // rax
  char *v12; // rdi
  char v13; // al
  unsigned __int64 i; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  __int64 v17; // rdx
  char v18; // dl
  char v19; // cl
  signed __int64 v20; // rax
  char *v21; // rdi
  unsigned __int64 v22; // rax
  unsigned __int64 exception; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  char v26; // dl
  char v27; // cl
  unsigned __int64 v28; // rsi
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 j; // rdx
  const unsigned __int8 *v32; // rdi
  char v33; // dl
  char v34; // cl
  boost::property_tree::detail::rapidxml::memory_pool<char> *v35; // r13
  char **p_m_end; // rdi
  boost::property_tree::detail::rapidxml::memory_pool<char>::boost_ptree_raw_alloc_func *v37; // rax
  char *v38; // rax
  char **v39; // rbx
  boost::property_tree::detail::rapidxml::memory_pool<char> *v40; // rdi
  char *v41; // rax
  char *v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rbx
  __int64 v46; // rdx
  char v47; // cl
  unsigned __int64 v48; // rsi
  char v49; // dl
  char *v50; // rax
  char *v51; // rdx
  unsigned __int64 v52; // rax
  boost::property_tree::detail::rapidxml::memory_pool<char> *v53; // rdi
  char v54; // dl
  unsigned __int64 v55; // rbx
  __int64 v56; // rax
  __int64 k; // rax
  char v58; // al
  char v59; // dl
  char m_begin; // r14
  char **v61; // r13
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rax
  char v66; // al
  char v67; // dl
  char v68; // dl
  __int64 v69; // rax
  char v70; // al
  char v71; // al
  unsigned __int64 v72; // rdi
  char v73; // al
  char v74; // al
  char v75; // al
  char v76; // al
  char v77; // dl
  char v78; // al
  char v79; // al
  char v80; // al
  char v81; // al
  char v82; // al
  char v83; // dl
  char v84; // cl
  unsigned __int64 v85; // rsi
  char v86; // cl
  char v87; // dl
  unsigned __int64 v88; // rdi
  char v89; // al
  char v90; // al
  char v91; // dl
  unsigned __int64 v92; // rdi
  char v93; // al
  char v94; // al
  char v95; // dl
  char v96; // al
  unsigned __int64 v97; // rbp
  unsigned __int64 v98; // rdx
  unsigned __int64 v99; // rsi
  int v100; // eax
  unsigned __int8 v101; // al
  char v102; // al
  char v103; // dl
  char v104; // al
  int v105; // eax
  unsigned __int8 v106; // al
  char v107; // al
  char v108; // cl
  char v109; // cl
  __int64 v110; // rsi
  __int64 v111; // rcx
  unsigned __int64 v112; // rdi
  __int64 v113; // rsi
  char v114; // dl
  char v115; // cl
  __int64 v116; // rcx
  unsigned __int64 v117; // rdi
  __int64 v118; // rsi
  __int64 v119; // rcx
  char v120; // dl
  char v121; // cl
  __int64 v122; // rcx
  unsigned __int64 v123; // rdi
  __int64 v124; // rsi
  __int64 v125; // rcx
  __int64 v126; // rcx
  char v127; // dl
  char v128; // cl
  unsigned __int64 v129; // rbx
  __int64 v130; // rax
  unsigned __int64 v131; // rbx
  char v132; // al
  char v133; // cl
  unsigned __int64 v134; // rax
  char v135; // cl
  unsigned __int64 v136; // rdi
  unsigned __int64 v137; // rdx
  __int64 n; // rdx
  char v139; // dl
  char v140; // cl
  __int64 v141; // rcx
  char v142; // cl
  char v143; // cl
  unsigned __int64 v144; // rdi
  char v145; // cl
  char v146; // cl
  char v147; // cl
  char v148; // cl
  char v149; // cl
  _BYTE *v150; // r8
  char v151; // cl
  char v152; // cl
  char v153; // cl
  char v154; // cl
  char v155; // cl
  char v156; // cl
  char v157; // r8
  char v158; // r8
  char v159; // cl
  unsigned __int64 v160; // rdi
  char v161; // cl
  char v162; // cl
  char v163; // cl
  unsigned __int64 v164; // rdi
  char v165; // cl
  char v166; // cl
  char v167; // cl
  char v168; // cl
  unsigned __int64 v169; // rax
  unsigned __int64 v170; // rsi
  unsigned __int64 v171; // rsi
  int v172; // ecx
  unsigned __int8 v173; // cl
  char v174; // cl
  char v175; // r8
  char v176; // cl
  char v177; // r8
  _BYTE *v178; // rdi
  char v179; // r8
  char v180; // cl
  _BYTE *v181; // rdi
  char v182; // r8
  char v183; // r8
  char v184; // cl
  _BYTE *v185; // rdi
  char v186; // r8
  char v187; // r8
  char v188; // r8
  char v189; // cl
  unsigned __int64 v190; // r14
  unsigned __int64 v191; // rbx
  int v192; // ecx
  unsigned __int8 v193; // cl
  char v194; // cl
  char v195; // r8
  char v196; // cl
  char v197; // dl
  _BYTE *v198; // rdi
  char v199; // r8
  char v200; // cl
  _BYTE *v201; // rdi
  char v202; // r8
  char v203; // r8
  char v204; // cl
  _BYTE *v205; // rdi
  char v206; // r8
  char v207; // r8
  char v208; // r8
  char v209; // cl
  unsigned __int64 v210; // r14
  unsigned __int64 v211; // rbx
  unsigned __int64 v212; // rbp
  unsigned __int64 v213; // rbx
  char v214; // cl
  char v215; // r8
  char v216; // cl
  _BYTE *v217; // rdx
  char **v218; // rdi
  char **v219; // rax
  char v220; // dl
  char *v221; // rdx
  char *v222; // rax
  __int64 v223; // rdx
  unsigned __int64 v224; // rax
  char v225; // dl
  unsigned __int64 v226; // rax
  unsigned __int64 v227; // rbx
  __int64 v228; // rax
  __int64 v229; // rdx
  char v230; // cl
  char v231; // dl
  char **v232; // rdi
  char v233; // al
  char v234; // dl
  char **v235; // rax
  char v236; // dl
  char v237; // dl
  char *v238; // rax
  char *v239; // rdi
  __int64 v240; // rax
  unsigned __int64 v241; // rdi
  char v242; // al
  unsigned __int64 v244; // rbx
  __int64 v245; // rax
  unsigned __int64 v246; // rbx
  __int64 v247; // rax
  unsigned __int64 v249; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v250; // [rsp+20h] [rbp-98h]
  char v251[120]; // [rsp+40h] [rbp-78h] BYREF

  v3 = (unsigned __int64)text;
  v249 = (unsigned __int64)v251;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v15 = __asan_stack_malloc_0(64LL);
    if ( v15 )
      v249 = v15;
  }
  *(_QWORD *)v249 = 1102416563LL;
  *(_QWORD *)(v249 + 8) = "1 32 8 9 dest:1570";
  *(_QWORD *)(v249 + 16) = boost::property_tree::detail::rapidxml::xml_document<char>::parse_element<64>;
  v250 = v249 >> 3;
  *(_DWORD *)(v250 + 2147450880) = -235802127;
  *(_DWORD *)(v250 + 2147450884) = -202116352;
  v4 = (unsigned __int64)&this->boost::property_tree::detail::rapidxml::memory_pool<char>;
  p_m_ptr = &this->m_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_ptr >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_25;
  }
  v6 = (unsigned __int64)&this->m_ptr[-LODWORD(this->m_ptr) & 7];
  p_m_ptr = &this->m_end;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_end >> 3) + 0x7FFF8000) )
  {
LABEL_25:
    __asan_report_load8();
LABEL_26:
    __asan_report_load8();
    goto LABEL_27;
  }
  if ( (char *)(v6 + 96) <= this->m_end )
    goto LABEL_12;
  p_m_ptr = (char **)&this->m_alloc_func;
  if ( *(_BYTE *)(((unsigned __int64)&this->m_alloc_func >> 3) + 0x7FFF8000) )
    goto LABEL_26;
  m_alloc_func = this->m_alloc_func;
  if ( m_alloc_func )
  {
    p_m_ptr = (char **)65558;
    v8 = (char *)m_alloc_func(65558LL);
    if ( v8 )
      goto LABEL_8;
LABEL_27:
    __asan_handle_no_return(p_m_ptr);
    __assert_fail(
      "memory",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property_t"
      "ree/detail/rapidxml.hpp",
      0x23Eu,
      "char* boost::property_tree::detail::rapidxml::memory_pool<Ch>::allocate_raw(std::size_t) [with Ch = char; std::siz"
      "e_t = long unsigned int]");
  }
  v8 = (char *)operator new[](0x10016uLL);
LABEL_8:
  v9 = (char **)&v8[-(int)v8 & 7];
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_30;
  }
  text = &this->m_name;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
LABEL_30:
    __asan_report_store8();
    goto LABEL_31;
  }
  *v9 = this->m_begin;
  text = &this->m_name;
  this->m_begin = v8;
  v10 = v9 + 1;
  v11 = v8 + 65558;
  if ( *(_BYTE *)(((v4 + 16) >> 3) + 0x7FFF8000) )
  {
LABEL_31:
    __asan_report_store8();
    goto LABEL_32;
  }
  *(_QWORD *)(v4 + 16) = v11;
  v6 = (unsigned __int64)v10 + (-(int)v10 & 7);
LABEL_12:
  if ( *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_32:
    __asan_report_store8();
    goto LABEL_33;
  }
  *(_QWORD *)(v4 + 8) = v6 + 96;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
LABEL_33:
    v12 = (char *)v6;
    __asan_report_store8();
    goto LABEL_34;
  }
  *(_QWORD *)v6 = 0LL;
  v12 = (char *)(v6 + 8);
  if ( *(_BYTE *)(((v6 + 8) >> 3) + 0x7FFF8000) )
  {
LABEL_34:
    __asan_report_store8();
    goto LABEL_35;
  }
  *(_QWORD *)(v6 + 8) = 0LL;
  v12 = (char *)(v6 + 32);
  if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_35:
    __asan_report_store8();
LABEL_36:
    __asan_report_store4(v12);
    goto LABEL_37;
  }
  *(_QWORD *)(v6 + 32) = 0LL;
  v12 = (char *)(v6 + 40);
  v13 = *(_BYTE *)(((v6 + 40) >> 3) + 0x7FFF8000);
  if ( v13 && v13 <= 3 )
    goto LABEL_36;
  *(_DWORD *)(v6 + 40) = 1;
  if ( *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) )
  {
LABEL_37:
    __asan_report_store8();
    goto LABEL_38;
  }
  *(_QWORD *)(v6 + 48) = 0LL;
  if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
  {
LABEL_38:
    __asan_report_store8();
    goto LABEL_39;
  }
  *(_QWORD *)(v6 + 64) = 0LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
LABEL_39:
    v16 = v3;
    __asan_report_load8();
    goto LABEL_40;
  }
  text = *(char ***)v3;
  for ( i = *(_QWORD *)v3; ; ++i )
  {
    v16 = i;
    v18 = *(_BYTE *)((i >> 3) + 0x7FFF8000);
    if ( v18 <= (char)(i & 7) && v18 )
    {
LABEL_40:
      i = __asan_report_load1(v16);
    }
    else
    {
      LOBYTE(v17) = *(_BYTE *)i;
      if ( (unsigned int)*(char *)i <= 0x7F )
      {
        v17 = (char)v17;
        goto LABEL_48;
      }
    }
    v17 = 122LL;
LABEL_48:
    v19 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v17] >> 3)
                   + 0x7FFF8000);
    if ( v19 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v17] & 7) )
    {
      if ( v19 )
        break;
    }
    if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v17] )
      goto LABEL_51;
  }
  i = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v17]);
LABEL_51:
  *(_QWORD *)v3 = i;
  if ( text == (char **)i )
  {
    exception = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v24 = *(_QWORD *)v3;
    if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
      v24 = __asan_report_store8();
    *(_QWORD *)exception = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
    if ( *(_BYTE *)(((exception + 8) >> 3) + 0x7FFF8000) )
      v24 = __asan_report_store8();
    *(_QWORD *)(exception + 8) = "expected element name";
    if ( *(_BYTE *)(((exception + 16) >> 3) + 0x7FFF8000) )
      v24 = __asan_report_store8();
    *(_QWORD *)(exception + 16) = v24;
    __asan_handle_no_return(exception + 16);
    _cxa_throw(
      (void *)exception,
      (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
      (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
  }
  v20 = i - (_QWORD)text;
  *(_QWORD *)v6 = text;
  v21 = (char *)(v6 + 16);
  if ( *(_BYTE *)(((v6 + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_64;
  }
  *(_QWORD *)(v6 + 16) = v20;
  v22 = *(_QWORD *)v3;
  while ( 2 )
  {
    v21 = (char *)v22;
    v26 = *(_BYTE *)((v22 >> 3) + 0x7FFF8000);
    if ( v26 <= (char)(v22 & 7) && v26 )
    {
LABEL_64:
      v22 = __asan_report_load1(v21);
    }
    else
    {
      LOBYTE(v25) = *(_BYTE *)v22;
      if ( (unsigned int)*(char *)v22 <= 0x7F )
      {
        v25 = (char)v25;
        goto LABEL_72;
      }
    }
    v25 = 122LL;
LABEL_72:
    v27 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v25] >> 3)
                   + 0x7FFF8000);
    v28 = (unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v25] & 7;
    if ( v27 > (char)v28 || !v27 )
    {
      if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v25] )
        goto LABEL_75;
      ++v22;
      continue;
    }
    break;
  }
  v22 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v25]);
LABEL_75:
  *(_QWORD *)v3 = v22;
LABEL_683:
  v232 = (char **)v3;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_77:
    __asan_report_load1(v232);
    goto LABEL_78;
  }
  m = *(char ***)v3;
  v232 = *(char ***)v3;
  v233 = *(_BYTE *)((*(_QWORD *)v3 >> 3) + 0x7FFF8000LL);
  if ( v233 <= (*(_BYTE *)v3 & 7) && v233 )
    goto LABEL_77;
  LOBYTE(v29) = *(_BYTE *)m;
  if ( (unsigned int)*(char *)m <= 0x7F )
  {
    v29 = (char)v29;
    goto LABEL_688;
  }
LABEL_78:
  v29 = 122LL;
LABEL_688:
  v32 = &boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_name[v29];
  v234 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_name[v29] >> 3)
                  + 0x7FFF8000);
  if ( v234 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_name[v29] & 7)
    && v234 )
  {
    __asan_report_load1(v32);
LABEL_80:
    v30 = __asan_report_load1(v32);
LABEL_81:
    for ( j = 122LL; ; j = (char)j )
    {
      v34 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_name[j] >> 3)
                     + 0x7FFF8000);
      if ( v34 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_name[j] & 7) )
      {
        if ( v34 )
          break;
      }
      if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_name[j] )
        goto LABEL_91;
      ++v30;
LABEL_84:
      v32 = (const unsigned __int8 *)v30;
      v33 = *(_BYTE *)((v30 >> 3) + 0x7FFF8000);
      if ( v33 <= (char)(v30 & 7) && v33 )
        goto LABEL_80;
      LOBYTE(j) = *(_BYTE *)v30;
      if ( (unsigned int)*(char *)v30 > 0x7F )
        goto LABEL_81;
    }
    v30 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_name[j]);
LABEL_91:
    *(_QWORD *)v3 = v30;
    if ( m == (char **)v30 )
    {
      v45 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
      if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)v45 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
      if ( *(_BYTE *)(((v45 + 8) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v45 + 8) = "expected attribute name";
      if ( *(_BYTE *)(((v45 + 16) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(_QWORD *)(v45 + 16) = m;
      __asan_handle_no_return(v45 + 16);
      _cxa_throw(
        (void *)v45,
        (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
        (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
    }
    v35 = &this->boost::property_tree::detail::rapidxml::memory_pool<char>;
    p_m_end = &this->m_ptr;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ptr >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_128:
      __asan_report_load8();
LABEL_129:
      __asan_report_load8();
LABEL_130:
      __asan_handle_no_return(p_m_end);
      __assert_fail(
        "memory",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property"
        "_tree/detail/rapidxml.hpp",
        0x23Eu,
        "char* boost::property_tree::detail::rapidxml::memory_pool<Ch>::allocate_raw(std::size_t) [with Ch = char; std::s"
        "ize_t = long unsigned int]");
    }
    v4 = (unsigned __int64)&this->m_ptr[-LODWORD(this->m_ptr) & 7];
    p_m_end = &this->m_end;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_end >> 3) + 0x7FFF8000) )
      goto LABEL_128;
    if ( (char *)(v4 + 56) > this->m_end )
    {
      p_m_end = (char **)&this->m_alloc_func;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_alloc_func >> 3) + 0x7FFF8000) )
        goto LABEL_129;
      v37 = this->m_alloc_func;
      if ( v37 )
      {
        p_m_end = (char **)65558;
        v38 = (char *)v37(65558LL);
        if ( !v38 )
          goto LABEL_130;
      }
      else
      {
        v38 = (char *)operator new[](0x10016uLL);
      }
      v39 = (char **)&v38[-(int)v38 & 7];
      v40 = &this->boost::property_tree::detail::rapidxml::memory_pool<char>;
      if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
LABEL_133:
        __asan_report_store8();
LABEL_134:
        __asan_report_store8();
LABEL_135:
        __asan_report_store8();
LABEL_136:
        __asan_report_store8();
LABEL_137:
        __asan_report_store8();
LABEL_138:
        __asan_report_store8();
LABEL_139:
        __asan_report_load8();
LABEL_140:
        __asan_report_store8();
LABEL_141:
        __asan_handle_no_return(v40);
        __assert_fail(
          "attribute && !attribute->parent()",
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/proper"
          "ty_tree/detail/rapidxml.hpp",
          0x4B3u,
          "void boost::property_tree::detail::rapidxml::xml_node<Ch>::append_attribute(boost::property_tree::detail::rapi"
          "dxml::xml_attribute<Ch>*) [with Ch = char]");
      }
      v40 = (boost::property_tree::detail::rapidxml::memory_pool<char> *)&v38[-(int)v38 & 7];
      if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
        goto LABEL_133;
      *v39 = this->m_begin;
      this->m_begin = v38;
      v41 = v38 + 65558;
      v40 = (boost::property_tree::detail::rapidxml::memory_pool<char> *)&this->m_end;
      if ( *(_BYTE *)(((unsigned __int64)&this->m_end >> 3) + 0x7FFF8000) )
        goto LABEL_134;
      this->m_end = v41;
      v4 = (unsigned __int64)v39 + (-((_DWORD)v39 + 8) & 7) + 8;
    }
    v40 = (boost::property_tree::detail::rapidxml::memory_pool<char> *)&this->m_ptr;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ptr >> 3) + 0x7FFF8000) )
      goto LABEL_135;
    this->m_ptr = (char *)(v4 + 56);
    v40 = (boost::property_tree::detail::rapidxml::memory_pool<char> *)v4;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      goto LABEL_136;
    *(_QWORD *)v4 = 0LL;
    v40 = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v4 + 8);
    if ( *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_137;
    *(_QWORD *)(v4 + 8) = 0LL;
    v40 = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v4 + 32);
    if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
      goto LABEL_138;
    *(_QWORD *)(v4 + 32) = 0LL;
    v40 = (boost::property_tree::detail::rapidxml::memory_pool<char> *)v3;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      goto LABEL_139;
    v42 = (char *)(*(_QWORD *)v3 - (_QWORD)m);
    *(_QWORD *)v4 = m;
    v40 = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v4 + 16);
    if ( *(_BYTE *)(((v4 + 16) >> 3) + 0x7FFF8000) )
      goto LABEL_140;
    *(_QWORD *)(v4 + 16) = v42;
    if ( !v4 || *(_QWORD *)(v4 + 32) )
      goto LABEL_141;
    if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
    }
    else
    {
      if ( !*(_QWORD *)(v6 + 64) )
      {
LABEL_146:
        if ( *(_BYTE *)(((v4 + 40) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store8();
          goto LABEL_149;
        }
        *(_QWORD *)(v4 + 40) = 0LL;
        *(_QWORD *)(v6 + 64) = v4;
LABEL_116:
        if ( !*(_BYTE *)(((v6 + 72) >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)(v6 + 72) = v4;
          if ( !*(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v4 + 32) = v6;
            if ( !*(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) )
            {
              *(_QWORD *)(v4 + 48) = 0LL;
              v44 = *(_QWORD *)v3;
              goto LABEL_158;
            }
LABEL_151:
            v44 = __asan_report_store8();
LABEL_152:
            LOBYTE(v46) = *(_BYTE *)v44;
            if ( (unsigned int)*(char *)v44 <= 0x7F )
            {
              v46 = (char)v46;
              goto LABEL_154;
            }
            while ( 1 )
            {
              v46 = 122LL;
LABEL_154:
              v47 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v46] >> 3)
                             + 0x7FFF8000);
              v48 = (unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v46] & 7;
              if ( v47 <= (char)v48 )
              {
                if ( v47 )
                  break;
              }
              if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v46] )
                goto LABEL_163;
              ++v44;
LABEL_158:
              v49 = *(_BYTE *)((v44 >> 3) + 0x7FFF8000);
              if ( v49 > (char)(v44 & 7) || !v49 )
                goto LABEL_152;
              v44 = __asan_report_load1(v44);
            }
            v44 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v46]);
LABEL_163:
            *(_QWORD *)v3 = v44;
            if ( *(_BYTE *)v44 != 61 )
            {
              v55 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
              if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v56 = *(_QWORD *)v3;
              if ( *(_BYTE *)((v55 >> 3) + 0x7FFF8000) )
                v56 = __asan_report_store8();
              *(_QWORD *)v55 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
              if ( *(_BYTE *)(((v55 + 8) >> 3) + 0x7FFF8000) )
                v56 = __asan_report_store8();
              *(_QWORD *)(v55 + 8) = "expected =";
              if ( *(_BYTE *)(((v55 + 16) >> 3) + 0x7FFF8000) )
                v56 = __asan_report_store8();
              *(_QWORD *)(v55 + 16) = v56;
              __asan_handle_no_return(v55 + 16);
              _cxa_throw(
                (void *)v55,
                (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
            }
            *(_QWORD *)v3 = v44 + 1;
            if ( *(_QWORD *)v4 )
              v50 = *(char **)v4;
            else
              v50 = (char *)&boost::property_tree::detail::rapidxml::xml_base<char>::nullstr(void)::zero;
            if ( *(_QWORD *)v4 )
              v51 = *(char **)(v4 + 16);
            else
              v51 = 0LL;
            v52 = (unsigned __int64)&v50[(_QWORD)v51];
            v53 = (boost::property_tree::detail::rapidxml::memory_pool<char> *)v52;
            v54 = *(_BYTE *)((v52 >> 3) + 0x7FFF8000);
            if ( v54 > (char)(v52 & 7) || !v54 )
            {
              *(_BYTE *)v52 = 0;
              v35 = *(boost::property_tree::detail::rapidxml::memory_pool<char> **)v3;
              goto LABEL_187;
            }
            __asan_report_store1(v52, v48);
LABEL_183:
            __asan_report_load1(v53);
LABEL_184:
            for ( k = 122LL; ; k = (char)k )
            {
              v59 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[k] >> 3)
                             + 0x7FFF8000);
              if ( v59 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[k] & 7) )
              {
                if ( v59 )
                  break;
              }
              if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[k] )
                goto LABEL_194;
              v35 = (boost::property_tree::detail::rapidxml::memory_pool<char> *)((char *)v35 + 1);
LABEL_187:
              v53 = v35;
              v58 = *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000);
              if ( v58 <= ((unsigned __int8)v35 & 7) && v58 )
                goto LABEL_183;
              LOBYTE(k) = v35->m_begin;
              if ( (unsigned int)SLOBYTE(v35->m_begin) > 0x7F )
                goto LABEL_184;
            }
            __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[k]);
LABEL_194:
            *(_QWORD *)v3 = v35;
            m_begin = (char)v35->m_begin;
            if ( m_begin != 34 && m_begin != 39 )
            {
              v63 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
              if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v64 = *(_QWORD *)v3;
              if ( *(_BYTE *)((v63 >> 3) + 0x7FFF8000) )
                v64 = __asan_report_store8();
              *(_QWORD *)v63 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
              if ( *(_BYTE *)(((v63 + 8) >> 3) + 0x7FFF8000) )
                v64 = __asan_report_store8();
              *(_QWORD *)(v63 + 8) = "expected ' or \"";
              if ( *(_BYTE *)(((v63 + 16) >> 3) + 0x7FFF8000) )
                v64 = __asan_report_store8();
              *(_QWORD *)(v63 + 16) = v64;
              __asan_handle_no_return(v63 + 16);
              _cxa_throw(
                (void *)v63,
                (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
            }
            v61 = (char **)((char *)&v35->m_begin + 1);
            *(_QWORD *)v3 = v61;
            if ( m_begin != 39 )
            {
              v62 = *(_QWORD *)v3;
              goto LABEL_407;
            }
            for ( m = v61; ; m = (char **)((char *)m + 1) )
            {
              v66 = *(_BYTE *)(((unsigned __int64)m >> 3) + 0x7FFF8000);
              if ( v66 <= ((unsigned __int8)m & 7) && v66 )
              {
                __asan_report_load1(m);
              }
              else
              {
                LOBYTE(v65) = *(_BYTE *)m;
                if ( (unsigned int)*(char *)m <= 0x7F )
                {
                  v65 = (char)v65;
                  goto LABEL_215;
                }
              }
              v65 = 122LL;
LABEL_215:
              v67 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_1_pure[v65] >> 3)
                             + 0x7FFF8000);
              if ( v67 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_1_pure[v65] & 7)
                && v67 )
              {
                __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_1_pure[v65]);
LABEL_218:
                *(_QWORD *)v3 = m;
                *(_QWORD *)(v249 + 32) = m;
LABEL_389:
                while ( 2 )
                {
                  while ( 2 )
                  {
                    v132 = *(_BYTE *)(((unsigned __int64)m >> 3) + 0x7FFF8000);
                    if ( v132 <= ((unsigned __int8)m & 7) && v132 )
                    {
                      __asan_report_load1(m);
                    }
                    else
                    {
                      v68 = *(_BYTE *)m;
                      if ( (unsigned int)*(char *)m <= 0x7F )
                      {
                        v69 = v68;
                        goto LABEL_393;
                      }
                    }
                    v69 = 122LL;
LABEL_393:
                    v133 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_1[v69] >> 3)
                                    + 0x7FFF8000);
                    v85 = (unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_1[v69] & 7;
                    if ( v133 <= (char)v85 && v133 )
                    {
                      __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_1[v69]);
LABEL_222:
                      v70 = *(_BYTE *)((((unsigned __int64)m + 1) >> 3) + 0x7FFF8000);
                      if ( v70 <= (((unsigned __int8)m + 1) & 7) && v70 )
                      {
                        v71 = __asan_report_load1((char *)m + 1);
                      }
                      else
                      {
                        v71 = *((_BYTE *)m + 1);
                        if ( v71 == 103 )
                          goto LABEL_284;
                        if ( v71 > 103 )
                        {
                          if ( v71 == 108 )
                            goto LABEL_296;
                          if ( v71 != 113 )
                            goto LABEL_397;
                          v72 = (unsigned __int64)m + 2;
                          v73 = *(_BYTE *)((((unsigned __int64)m + 2) >> 3) + 0x7FFF8000);
                          if ( v73 > (((unsigned __int8)m + 2) & 7) || !v73 )
                          {
                            if ( *((_BYTE *)m + 2) != 117 )
                              goto LABEL_397;
                            v72 = (unsigned __int64)m + 3;
                            v74 = *(_BYTE *)((((unsigned __int64)m + 3) >> 3) + 0x7FFF8000);
                            if ( v74 > (((unsigned __int8)m + 3) & 7) || !v74 )
                            {
                              if ( *((_BYTE *)m + 3) != 111 )
                                goto LABEL_397;
                              v72 = (unsigned __int64)m + 4;
                              v75 = *(_BYTE *)((((unsigned __int64)m + 4) >> 3) + 0x7FFF8000);
                              if ( v75 > (((unsigned __int8)m + 4) & 7) || !v75 )
                              {
                                if ( *((_BYTE *)m + 4) != 116 )
                                  goto LABEL_397;
                                v72 = (unsigned __int64)m + 5;
                                v76 = *(_BYTE *)((((unsigned __int64)m + 5) >> 3) + 0x7FFF8000);
                                if ( v76 > (((unsigned __int8)m + 5) & 7) || !v76 )
                                {
                                  if ( *((_BYTE *)m + 5) != 59 )
                                    goto LABEL_397;
                                  v72 = *(_QWORD *)(v249 + 32);
                                  v77 = *(_BYTE *)((v72 >> 3) + 0x7FFF8000);
                                  if ( v77 > (*(_BYTE *)(v249 + 32) & 7) || !v77 )
                                  {
                                    *(_BYTE *)(*(_QWORD *)(v249 + 32))++ = 34;
                                    m = (char **)((char *)m + 6);
                                    continue;
                                  }
LABEL_283:
                                  __asan_report_store1(v72, v85);
LABEL_284:
                                  v88 = (unsigned __int64)m + 2;
                                  v89 = *(_BYTE *)((((unsigned __int64)m + 2) >> 3) + 0x7FFF8000);
                                  if ( v89 <= (((unsigned __int8)m + 2) & 7) && v89 )
                                  {
                                    __asan_report_load1(v88);
                                  }
                                  else
                                  {
                                    if ( *((_BYTE *)m + 2) != 116 )
                                      goto LABEL_397;
                                    v88 = (unsigned __int64)m + 3;
                                    v90 = *(_BYTE *)((((unsigned __int64)m + 3) >> 3) + 0x7FFF8000);
                                    if ( v90 > (((unsigned __int8)m + 3) & 7) || !v90 )
                                    {
                                      if ( *((_BYTE *)m + 3) != 59 )
                                        goto LABEL_397;
                                      v88 = *(_QWORD *)(v249 + 32);
                                      v91 = *(_BYTE *)((v88 >> 3) + 0x7FFF8000);
                                      if ( v91 > (*(_BYTE *)(v249 + 32) & 7) || !v91 )
                                      {
                                        *(_BYTE *)(*(_QWORD *)(v249 + 32))++ = 62;
                                        m = (char **)((char *)m + 4);
                                        continue;
                                      }
LABEL_295:
                                      __asan_report_store1(v88, v85);
LABEL_296:
                                      v92 = (unsigned __int64)m + 2;
                                      v93 = *(_BYTE *)((((unsigned __int64)m + 2) >> 3) + 0x7FFF8000);
                                      if ( v93 <= (((unsigned __int8)m + 2) & 7) && v93 )
                                      {
                                        __asan_report_load1(v92);
LABEL_306:
                                        __asan_report_load1(v92);
LABEL_307:
                                        __asan_report_store1(v92, v85);
LABEL_308:
                                        v96 = *(_BYTE *)((((unsigned __int64)m + 2) >> 3) + 0x7FFF8000);
                                        if ( v96 <= (((unsigned __int8)m + 2) & 7) && v96 )
                                        {
                                          __asan_report_load1((char *)m + 2);
                                        }
                                        else if ( *((_BYTE *)m + 2) != 120 )
                                        {
                                          v97 = (unsigned __int64)m + 2;
                                          v98 = 0LL;
                                          while ( 1 )
                                          {
                                            v107 = *(_BYTE *)((v97 >> 3) + 0x7FFF8000);
                                            if ( v107 <= (char)(v97 & 7) && v107 )
                                            {
                                              v105 = __asan_report_load1(v97);
                                            }
                                            else
                                            {
                                              v105 = *(unsigned __int8 *)v97;
                                              v108 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v97] >> 3)
                                                              + 0x7FFF8000);
                                              if ( v108 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(_BYTE *)v97] & 7)
                                                && v108 )
                                              {
                                                __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v97]);
LABEL_335:
                                                if ( v98 <= 0x7F )
                                                {
                                                  v109 = *(_BYTE *)((*(_QWORD *)(v249 + 32) >> 3) + 0x7FFF8000LL);
                                                  v110 = *(_QWORD *)(v249 + 32) & 7LL;
                                                  if ( v109 > (char)v110 || !v109 )
                                                  {
                                                    *(_BYTE *)(*(_QWORD *)(v249 + 32))++ = v98;
                                                    goto LABEL_323;
                                                  }
                                                  __asan_report_store1(*(_QWORD *)(v249 + 32), v110);
                                                }
                                                if ( v98 <= 0x7FF )
                                                {
                                                  v111 = *(_QWORD *)(v249 + 32);
                                                  v112 = v111 + 1;
                                                  v113 = *(unsigned __int8 *)(((unsigned __int64)(v111 + 1) >> 3)
                                                                            + 0x7FFF8000);
                                                  if ( (char)v113 <= ((v111 + 1) & 7) && (_BYTE)v113 )
                                                  {
                                                    __asan_report_store1(v112, v113);
                                                  }
                                                  else
                                                  {
                                                    *(_BYTE *)(v111 + 1) = v98 & 0x3F | 0x80;
                                                    v114 = (v98 >> 6) | 0xC0;
                                                    v112 = *(_QWORD *)(v249 + 32);
                                                    v115 = *(_BYTE *)((v112 >> 3) + 0x7FFF8000);
                                                    v113 = v112 & 7;
                                                    if ( v115 > (char)(v112 & 7) || !v115 )
                                                    {
                                                      **(_BYTE **)(v249 + 32) = v114;
                                                      *(_QWORD *)(v249 + 32) += 2LL;
                                                      goto LABEL_323;
                                                    }
                                                  }
                                                  __asan_report_store1(v112, v113);
                                                }
                                                if ( v98 > 0xFFFF )
                                                  goto LABEL_359;
                                                v116 = *(_QWORD *)(v249 + 32);
                                                v117 = v116 + 2;
                                                v118 = *(unsigned __int8 *)(((unsigned __int64)(v116 + 2) >> 3)
                                                                          + 0x7FFF8000);
                                                if ( (char)v118 <= ((v116 + 2) & 7) && (_BYTE)v118 )
                                                {
                                                  __asan_report_store1(v117, v118);
                                                }
                                                else
                                                {
                                                  *(_BYTE *)(v116 + 2) = v98 & 0x3F | 0x80;
                                                  v119 = *(_QWORD *)(v249 + 32);
                                                  v117 = v119 + 1;
                                                  v118 = *(unsigned __int8 *)(((unsigned __int64)(v119 + 1) >> 3)
                                                                            + 0x7FFF8000);
                                                  if ( (char)v118 > ((v119 + 1) & 7) || !(_BYTE)v118 )
                                                  {
                                                    *(_BYTE *)(v119 + 1) = (v98 >> 6) & 0x3F | 0x80;
                                                    v120 = (v98 >> 12) | 0xE0;
                                                    v117 = *(_QWORD *)(v249 + 32);
                                                    v121 = *(_BYTE *)((v117 >> 3) + 0x7FFF8000);
                                                    v118 = v117 & 7;
                                                    if ( v121 > (char)(v117 & 7) || !v121 )
                                                    {
                                                      **(_BYTE **)(v249 + 32) = v120;
                                                      *(_QWORD *)(v249 + 32) += 3LL;
                                                      goto LABEL_323;
                                                    }
LABEL_358:
                                                    __asan_report_store1(v117, v118);
LABEL_359:
                                                    if ( v98 > 0x10FFFF )
                                                      goto LABEL_373;
                                                    v122 = *(_QWORD *)(v249 + 32);
                                                    v123 = v122 + 3;
                                                    v124 = *(unsigned __int8 *)(((unsigned __int64)(v122 + 3) >> 3)
                                                                              + 0x7FFF8000);
                                                    if ( (char)v124 <= ((v122 + 3) & 7) && (_BYTE)v124 )
                                                    {
                                                      __asan_report_store1(v123, v124);
                                                    }
                                                    else
                                                    {
                                                      *(_BYTE *)(v122 + 3) = v98 & 0x3F | 0x80;
                                                      v125 = *(_QWORD *)(v249 + 32);
                                                      v123 = v125 + 2;
                                                      v124 = *(unsigned __int8 *)(((unsigned __int64)(v125 + 2) >> 3)
                                                                                + 0x7FFF8000);
                                                      if ( (char)v124 > ((v125 + 2) & 7) || !(_BYTE)v124 )
                                                      {
                                                        *(_BYTE *)(v125 + 2) = (v98 >> 6) & 0x3F | 0x80;
                                                        v126 = *(_QWORD *)(v249 + 32);
                                                        v123 = v126 + 1;
                                                        v124 = *(unsigned __int8 *)(((unsigned __int64)(v126 + 1) >> 3)
                                                                                  + 0x7FFF8000);
                                                        if ( (char)v124 > ((v126 + 1) & 7) || !(_BYTE)v124 )
                                                        {
                                                          *(_BYTE *)(v126 + 1) = (v98 >> 12) & 0x3F | 0x80;
                                                          v127 = (v98 >> 18) | 0xF0;
                                                          v123 = *(_QWORD *)(v249 + 32);
                                                          v128 = *(_BYTE *)((v123 >> 3) + 0x7FFF8000);
                                                          v124 = v123 & 7;
                                                          if ( v128 > (char)(v123 & 7) || !v128 )
                                                          {
                                                            **(_BYTE **)(v249 + 32) = v127;
                                                            *(_QWORD *)(v249 + 32) += 4LL;
                                                            goto LABEL_323;
                                                          }
LABEL_372:
                                                          __asan_report_store1(v123, v124);
LABEL_373:
                                                          v129 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                                                          v130 = *(_QWORD *)(v249 + 32);
                                                          if ( *(_BYTE *)((v129 >> 3) + 0x7FFF8000) )
                                                            v130 = __asan_report_store8();
                                                          *(_QWORD *)v129 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error
                                                                          + 2;
                                                          if ( *(_BYTE *)(((v129 + 8) >> 3) + 0x7FFF8000) )
                                                            v130 = __asan_report_store8();
                                                          *(_QWORD *)(v129 + 8) = "invalid numeric character entity";
                                                          if ( *(_BYTE *)(((v129 + 16) >> 3) + 0x7FFF8000) )
                                                            v130 = __asan_report_store8();
                                                          *(_QWORD *)(v129 + 16) = v130;
                                                          __asan_handle_no_return(v129 + 16);
                                                          _cxa_throw(
                                                            (void *)v129,
                                                            (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                                                            (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                                                        }
LABEL_371:
                                                        __asan_report_store1(v123, v124);
                                                        goto LABEL_372;
                                                      }
                                                    }
                                                    __asan_report_store1(v123, v124);
                                                    goto LABEL_371;
                                                  }
                                                }
                                                __asan_report_store1(v117, v118);
                                                goto LABEL_358;
                                              }
                                            }
                                            v106 = boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[v105];
                                            if ( v106 == 0xFF )
                                              goto LABEL_335;
                                            v98 = v106 + 10 * v98;
                                            ++v97;
                                          }
                                        }
                                        v97 = (unsigned __int64)m + 3;
                                        v99 = 0LL;
                                        while ( 1 )
                                        {
                                          v102 = *(_BYTE *)((v97 >> 3) + 0x7FFF8000);
                                          if ( v102 <= (char)(v97 & 7) && v102 )
                                          {
                                            v100 = __asan_report_load1(v97);
                                          }
                                          else
                                          {
                                            v100 = *(unsigned __int8 *)v97;
                                            v103 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v97] >> 3)
                                                            + 0x7FFF8000);
                                            if ( v103 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(_BYTE *)v97] & 7)
                                              && v103 )
                                            {
                                              __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v97]);
LABEL_322:
                                              boost::property_tree::detail::rapidxml::xml_document<char>::insert_coded_character<64>(
                                                (char **)(v249 + 32),
                                                v99);
LABEL_323:
                                              v104 = *(_BYTE *)((v97 >> 3) + 0x7FFF8000);
                                              if ( v104 <= (char)(v97 & 7) && v104 )
                                              {
                                                __asan_report_load1(v97);
                                              }
                                              else if ( *(_BYTE *)v97 == 59 )
                                              {
                                                m = (char **)(v97 + 1);
                                                goto LABEL_389;
                                              }
                                              v131 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                                              if ( *(_BYTE *)((v131 >> 3) + 0x7FFF8000) )
                                                __asan_report_store8();
                                              *(_QWORD *)v131 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error
                                                              + 2;
                                              if ( *(_BYTE *)(((v131 + 8) >> 3) + 0x7FFF8000) )
                                                __asan_report_store8();
                                              *(_QWORD *)(v131 + 8) = "expected ;";
                                              if ( *(_BYTE *)(((v131 + 16) >> 3) + 0x7FFF8000) )
                                                __asan_report_store8();
                                              *(_QWORD *)(v131 + 16) = v97;
                                              __asan_handle_no_return(v131 + 16);
                                              _cxa_throw(
                                                (void *)v131,
                                                (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                                                (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                                            }
                                          }
                                          v101 = boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[v100];
                                          if ( v101 == 0xFF )
                                            goto LABEL_322;
                                          v99 = v101 + 16 * v99;
                                          ++v97;
                                        }
                                      }
                                      if ( *((_BYTE *)m + 2) != 116 )
                                        goto LABEL_397;
                                      v92 = (unsigned __int64)m + 3;
                                      v94 = *(_BYTE *)((((unsigned __int64)m + 3) >> 3) + 0x7FFF8000);
                                      if ( v94 <= (((unsigned __int8)m + 3) & 7) && v94 )
                                        goto LABEL_306;
                                      if ( *((_BYTE *)m + 3) != 59 )
                                        goto LABEL_397;
                                      v92 = *(_QWORD *)(v249 + 32);
                                      v95 = *(_BYTE *)((v92 >> 3) + 0x7FFF8000);
                                      if ( v95 <= (*(_BYTE *)(v249 + 32) & 7) && v95 )
                                        goto LABEL_307;
                                      *(_BYTE *)(*(_QWORD *)(v249 + 32))++ = 60;
                                      m = (char **)((char *)m + 4);
                                      continue;
                                    }
                                  }
                                  __asan_report_load1(v88);
                                  goto LABEL_295;
                                }
LABEL_282:
                                __asan_report_load1(v72);
                                goto LABEL_283;
                              }
LABEL_281:
                              __asan_report_load1(v72);
                              goto LABEL_282;
                            }
LABEL_280:
                            __asan_report_load1(v72);
                            goto LABEL_281;
                          }
LABEL_279:
                          __asan_report_load1(v72);
                          goto LABEL_280;
                        }
                      }
                      if ( v71 == 35 )
                        goto LABEL_308;
                      if ( v71 != 97 )
                        goto LABEL_397;
                      v78 = *(_BYTE *)((((unsigned __int64)m + 2) >> 3) + 0x7FFF8000);
                      if ( v78 <= (((unsigned __int8)m + 2) & 7) && v78 )
                      {
                        v79 = __asan_report_load1((char *)m + 2);
                      }
                      else
                      {
                        v79 = *((_BYTE *)m + 2);
                        if ( v79 != 109 )
                          goto LABEL_249;
                      }
                      v72 = (unsigned __int64)m + 3;
                      v84 = *(_BYTE *)((((unsigned __int64)m + 3) >> 3) + 0x7FFF8000);
                      v85 = ((_BYTE)m + 3) & 7;
                      if ( v84 <= (char)v85 && v84 )
                      {
                        __asan_report_load1(v72);
                      }
                      else
                      {
                        if ( *((_BYTE *)m + 3) != 112 )
                          goto LABEL_249;
                        v72 = (unsigned __int64)m + 4;
                        v86 = *(_BYTE *)((((unsigned __int64)m + 4) >> 3) + 0x7FFF8000);
                        v85 = ((_BYTE)m + 4) & 7;
                        if ( v86 > (char)v85 || !v86 )
                        {
                          if ( *((_BYTE *)m + 4) == 59 )
                          {
                            v72 = *(_QWORD *)(v249 + 32);
                            v87 = *(_BYTE *)((v72 >> 3) + 0x7FFF8000);
                            if ( v87 > (*(_BYTE *)(v249 + 32) & 7) || !v87 )
                            {
                              *(_BYTE *)(*(_QWORD *)(v249 + 32))++ = 38;
                              m = (char **)((char *)m + 5);
                              continue;
                            }
LABEL_274:
                            __asan_report_store1(v72, v85);
LABEL_275:
                            __asan_report_load1(v72);
                            goto LABEL_276;
                          }
LABEL_249:
                          if ( v79 != 112 )
                            goto LABEL_397;
                          v72 = (unsigned __int64)m + 3;
                          v80 = *(_BYTE *)((((unsigned __int64)m + 3) >> 3) + 0x7FFF8000);
                          if ( v80 <= (((unsigned __int8)m + 3) & 7) && v80 )
                            goto LABEL_275;
                          if ( *((_BYTE *)m + 3) != 111 )
                            goto LABEL_397;
                          v72 = (unsigned __int64)m + 4;
                          v81 = *(_BYTE *)((((unsigned __int64)m + 4) >> 3) + 0x7FFF8000);
                          if ( v81 <= (((unsigned __int8)m + 4) & 7) && v81 )
                          {
LABEL_276:
                            __asan_report_load1(v72);
                          }
                          else
                          {
                            if ( *((_BYTE *)m + 4) != 115 )
                              goto LABEL_397;
                            v72 = (unsigned __int64)m + 5;
                            v82 = *(_BYTE *)((((unsigned __int64)m + 5) >> 3) + 0x7FFF8000);
                            if ( v82 > (((unsigned __int8)m + 5) & 7) || !v82 )
                            {
                              if ( *((_BYTE *)m + 5) != 59 )
                                goto LABEL_397;
                              v72 = *(_QWORD *)(v249 + 32);
                              v83 = *(_BYTE *)((v72 >> 3) + 0x7FFF8000);
                              if ( v83 > (*(_BYTE *)(v249 + 32) & 7) || !v83 )
                              {
                                *(_BYTE *)(*(_QWORD *)(v249 + 32))++ = 39;
                                m = (char **)((char *)m + 6);
                                continue;
                              }
                              goto LABEL_278;
                            }
                          }
                          __asan_report_load1(v72);
LABEL_278:
                          __asan_report_store1(v72, v85);
                          goto LABEL_279;
                        }
                      }
                      __asan_report_load1(v72);
                      goto LABEL_274;
                    }
                    break;
                  }
                  if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_1[v69] )
                    goto LABEL_400;
                  if ( v68 == 38 )
                    goto LABEL_222;
LABEL_397:
                  m = (char **)((char *)m + 1);
                  v134 = *(_QWORD *)(v249 + 32);
                  *(_QWORD *)(v249 + 32) = v134 + 1;
                  v135 = *(_BYTE *)((v134 >> 3) + 0x7FFF8000);
                  v85 = v134 & 7;
                  if ( v135 > (char)v85 || !v135 )
                  {
                    *(_BYTE *)v134 = v68;
                    continue;
                  }
                  break;
                }
                __asan_report_store1(v134, v85);
LABEL_400:
                v136 = v3;
                if ( !*(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                {
                  *(_QWORD *)v3 = m;
                  v137 = *(_QWORD *)(v249 + 32);
                  goto LABEL_642;
                }
                __asan_report_store8();
LABEL_403:
                v62 = __asan_report_load1(v136);
LABEL_404:
                for ( n = 122LL; ; n = (char)n )
                {
                  v140 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_2_pure[n] >> 3)
                                  + 0x7FFF8000);
                  if ( v140 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_2_pure[n] & 7) )
                  {
                    if ( v140 )
                      break;
                  }
                  if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_2_pure[n] )
                    goto LABEL_414;
                  ++v62;
LABEL_407:
                  v136 = v62;
                  v139 = *(_BYTE *)((v62 >> 3) + 0x7FFF8000);
                  if ( v139 <= (char)(v62 & 7) && v139 )
                    goto LABEL_403;
                  LOBYTE(n) = *(_BYTE *)v62;
                  if ( (unsigned int)*(char *)v62 > 0x7F )
                    goto LABEL_404;
                }
                v62 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_2_pure[n]);
LABEL_414:
                *(_QWORD *)v3 = v62;
                v137 = v62;
                while ( 2 )
                {
                  v214 = *(_BYTE *)((v62 >> 3) + 0x7FFF8000);
                  v85 = v62 & 7;
                  if ( v214 <= (char)v85 && v214 )
                  {
                    v62 = __asan_report_load1(v62);
                  }
                  else
                  {
                    v85 = *(unsigned __int8 *)v62;
                    if ( (unsigned int)(char)v85 <= 0x7F )
                    {
                      v141 = (char)v85;
                      goto LABEL_634;
                    }
                  }
                  v141 = 122LL;
LABEL_634:
                  v215 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_2[v141] >> 3)
                                  + 0x7FFF8000);
                  if ( v215 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_2[v141] & 7)
                    && v215 )
                  {
                    v62 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_2[v141]);
                  }
                  else
                  {
                    if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_2[v141] )
                      goto LABEL_641;
                    if ( (_BYTE)v85 != 38 )
                      goto LABEL_638;
                  }
                  v142 = *(_BYTE *)(((v62 + 1) >> 3) + 0x7FFF8000);
                  if ( v142 <= (char)((v62 + 1) & 7) && v142 )
                  {
                    v62 = __asan_report_load1(v62 + 1);
LABEL_440:
                    if ( v143 == 35 )
                      goto LABEL_504;
                    if ( v143 != 97 )
                      goto LABEL_638;
                    v151 = *(_BYTE *)(((v62 + 2) >> 3) + 0x7FFF8000);
                    if ( v151 <= (char)((v62 + 2) & 7) && v151 )
                    {
                      v62 = __asan_report_load1(v62 + 2);
                    }
                    else
                    {
                      v152 = *(_BYTE *)(v62 + 2);
                      if ( v152 != 109 )
                        goto LABEL_445;
                    }
                    v144 = v62 + 3;
                    v157 = *(_BYTE *)(((v62 + 3) >> 3) + 0x7FFF8000);
                    if ( v157 <= (char)((v62 + 3) & 7) && v157 )
                    {
                      __asan_report_load1(v144);
                    }
                    else
                    {
                      if ( *(_BYTE *)(v62 + 3) != 112 )
                        goto LABEL_445;
                      v144 = v62 + 4;
                      v158 = *(_BYTE *)(((v62 + 4) >> 3) + 0x7FFF8000);
                      if ( v158 > (char)((v62 + 4) & 7) || !v158 )
                      {
                        if ( *(_BYTE *)(v62 + 4) == 59 )
                        {
                          v144 = v137;
                          v159 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                          v85 = v137 & 7;
                          if ( v159 > (char)v85 || !v159 )
                          {
                            *(_BYTE *)v137 = 38;
                            v150 = (_BYTE *)(v137 + 1);
                            v62 += 5LL;
                            goto LABEL_629;
                          }
LABEL_470:
                          __asan_report_store1(v144, v85);
LABEL_471:
                          __asan_report_load1(v144);
                          goto LABEL_472;
                        }
LABEL_445:
                        if ( v152 != 112 )
                          goto LABEL_638;
                        v144 = v62 + 3;
                        v153 = *(_BYTE *)(((v62 + 3) >> 3) + 0x7FFF8000);
                        if ( v153 <= (char)((v62 + 3) & 7) && v153 )
                          goto LABEL_471;
                        if ( *(_BYTE *)(v62 + 3) != 111 )
                          goto LABEL_638;
                        v144 = v62 + 4;
                        v154 = *(_BYTE *)(((v62 + 4) >> 3) + 0x7FFF8000);
                        if ( v154 <= (char)((v62 + 4) & 7) && v154 )
                        {
LABEL_472:
                          __asan_report_load1(v144);
                        }
                        else
                        {
                          if ( *(_BYTE *)(v62 + 4) != 115 )
                            goto LABEL_638;
                          v144 = v62 + 5;
                          v155 = *(_BYTE *)(((v62 + 5) >> 3) + 0x7FFF8000);
                          if ( v155 > (char)((v62 + 5) & 7) || !v155 )
                          {
                            if ( *(_BYTE *)(v62 + 5) != 59 )
                              goto LABEL_638;
                            v144 = v137;
                            v156 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                            v85 = v137 & 7;
                            if ( v156 > (char)v85 || !v156 )
                            {
                              *(_BYTE *)v137 = 39;
                              v150 = (_BYTE *)(v137 + 1);
                              v62 += 6LL;
                              goto LABEL_629;
                            }
                            goto LABEL_474;
                          }
                        }
                        __asan_report_load1(v144);
LABEL_474:
                        __asan_report_store1(v144, v85);
LABEL_475:
                        __asan_report_load1(v144);
LABEL_476:
                        __asan_report_load1(v144);
LABEL_477:
                        __asan_report_load1(v144);
LABEL_478:
                        __asan_report_load1(v144);
                        goto LABEL_479;
                      }
                    }
                    __asan_report_load1(v144);
                    goto LABEL_470;
                  }
                  v143 = *(_BYTE *)(v62 + 1);
                  if ( v143 == 103 )
                    goto LABEL_480;
                  if ( v143 <= 103 )
                    goto LABEL_440;
                  if ( v143 == 108 )
                    goto LABEL_492;
                  if ( v143 != 113 )
                    goto LABEL_638;
                  v144 = v62 + 2;
                  v145 = *(_BYTE *)(((v62 + 2) >> 3) + 0x7FFF8000);
                  if ( v145 <= (char)((v62 + 2) & 7) && v145 )
                    goto LABEL_475;
                  if ( *(_BYTE *)(v62 + 2) != 117 )
                    goto LABEL_638;
                  v144 = v62 + 3;
                  v146 = *(_BYTE *)(((v62 + 3) >> 3) + 0x7FFF8000);
                  if ( v146 <= (char)((v62 + 3) & 7) && v146 )
                    goto LABEL_476;
                  if ( *(_BYTE *)(v62 + 3) != 111 )
                    goto LABEL_638;
                  v144 = v62 + 4;
                  v147 = *(_BYTE *)(((v62 + 4) >> 3) + 0x7FFF8000);
                  if ( v147 <= (char)((v62 + 4) & 7) && v147 )
                    goto LABEL_477;
                  if ( *(_BYTE *)(v62 + 4) != 116 )
                    goto LABEL_638;
                  v144 = v62 + 5;
                  v148 = *(_BYTE *)(((v62 + 5) >> 3) + 0x7FFF8000);
                  if ( v148 <= (char)((v62 + 5) & 7) && v148 )
                    goto LABEL_478;
                  if ( *(_BYTE *)(v62 + 5) != 59 )
                    goto LABEL_638;
                  v144 = v137;
                  v149 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                  v85 = v137 & 7;
                  if ( v149 > (char)v85 || !v149 )
                  {
                    *(_BYTE *)v137 = 34;
                    v150 = (_BYTE *)(v137 + 1);
                    v62 += 6LL;
                    goto LABEL_629;
                  }
LABEL_479:
                  v62 = __asan_report_store1(v144, v85);
LABEL_480:
                  v160 = v62 + 2;
                  v161 = *(_BYTE *)(((v62 + 2) >> 3) + 0x7FFF8000);
                  if ( v161 <= (char)((v62 + 2) & 7) && v161 )
                  {
                    __asan_report_load1(v160);
LABEL_490:
                    __asan_report_load1(v160);
                    goto LABEL_491;
                  }
                  if ( *(_BYTE *)(v62 + 2) != 116 )
                    goto LABEL_638;
                  v160 = v62 + 3;
                  v162 = *(_BYTE *)(((v62 + 3) >> 3) + 0x7FFF8000);
                  if ( v162 <= (char)((v62 + 3) & 7) && v162 )
                    goto LABEL_490;
                  if ( *(_BYTE *)(v62 + 3) != 59 )
                    goto LABEL_638;
                  v160 = v137;
                  v163 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                  v85 = v137 & 7;
                  if ( v163 > (char)v85 || !v163 )
                  {
                    *(_BYTE *)v137 = 62;
                    v150 = (_BYTE *)(v137 + 1);
                    v62 += 4LL;
                    goto LABEL_629;
                  }
LABEL_491:
                  v62 = __asan_report_store1(v160, v85);
LABEL_492:
                  v164 = v62 + 2;
                  v165 = *(_BYTE *)(((v62 + 2) >> 3) + 0x7FFF8000);
                  if ( v165 <= (char)((v62 + 2) & 7) && v165 )
                  {
                    __asan_report_load1(v164);
LABEL_502:
                    __asan_report_load1(v164);
LABEL_503:
                    v62 = __asan_report_store1(v164, v85);
LABEL_504:
                    v168 = *(_BYTE *)(((v62 + 2) >> 3) + 0x7FFF8000);
                    if ( v168 <= (char)((v62 + 2) & 7) && v168 )
                    {
                      v62 = __asan_report_load1(v62 + 2);
                    }
                    else if ( *(_BYTE *)(v62 + 2) != 120 )
                    {
                      v169 = v62 + 2;
                      v170 = 0LL;
                      while ( 1 )
                      {
                        v194 = *(_BYTE *)((v169 >> 3) + 0x7FFF8000);
                        if ( v194 <= (char)(v169 & 7) && v194 )
                        {
                          v169 = __asan_report_load1(v169);
                        }
                        else
                        {
                          v192 = *(unsigned __int8 *)v169;
                          v195 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v169] >> 3)
                                          + 0x7FFF8000);
                          if ( v195 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(_BYTE *)v169] & 7)
                            && v195 )
                          {
                            v169 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v169]);
LABEL_571:
                            if ( v170 <= 0x7F )
                            {
                              v196 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                              if ( v196 > (char)(v137 & 7) || !v196 )
                              {
                                *(_BYTE *)v137 = v170;
                                v150 = (_BYTE *)(v137 + 1);
                                goto LABEL_575;
                              }
                              v169 = __asan_report_store1(v137, v170);
                            }
                            if ( v170 <= 0x7FF )
                            {
                              v198 = (_BYTE *)(v137 + 1);
                              v199 = *(_BYTE *)(((v137 + 1) >> 3) + 0x7FFF8000);
                              if ( v199 <= (char)((v137 + 1) & 7) && v199 )
                              {
                                __asan_report_store1(v198, v170);
                              }
                              else
                              {
                                *(_BYTE *)(v137 + 1) = v170 & 0x3F | 0x80;
                                v170 = (unsigned int)(v170 >> 6) | 0xFFFFFFC0;
                                v198 = (_BYTE *)v137;
                                v200 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                                if ( v200 > (char)(v137 & 7) || !v200 )
                                {
                                  *(_BYTE *)v137 = v170;
                                  v150 = (_BYTE *)(v137 + 2);
                                  goto LABEL_575;
                                }
                              }
                              v169 = __asan_report_store1(v198, v170);
                            }
                            if ( v170 > 0xFFFF )
                              goto LABEL_599;
                            v201 = (_BYTE *)(v137 + 2);
                            v202 = *(_BYTE *)(((v137 + 2) >> 3) + 0x7FFF8000);
                            if ( v202 <= (char)((v137 + 2) & 7) && v202 )
                            {
                              __asan_report_store1(v201, v170);
                            }
                            else
                            {
                              *(_BYTE *)(v137 + 2) = v170 & 0x3F | 0x80;
                              v201 = (_BYTE *)(v137 + 1);
                              v203 = *(_BYTE *)(((v137 + 1) >> 3) + 0x7FFF8000);
                              if ( v203 > (char)((v137 + 1) & 7) || !v203 )
                              {
                                *(_BYTE *)(v137 + 1) = (v170 >> 6) & 0x3F | 0x80;
                                v170 = (unsigned int)(v170 >> 12) | 0xFFFFFFE0;
                                v201 = (_BYTE *)v137;
                                v204 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                                if ( v204 > (char)(v137 & 7) || !v204 )
                                {
                                  *(_BYTE *)v137 = v170;
                                  v150 = (_BYTE *)(v137 + 3);
                                  goto LABEL_575;
                                }
LABEL_598:
                                v169 = __asan_report_store1(v201, v170);
LABEL_599:
                                if ( v170 > 0x10FFFF )
                                  goto LABEL_613;
                                v205 = (_BYTE *)(v137 + 3);
                                v206 = *(_BYTE *)(((v137 + 3) >> 3) + 0x7FFF8000);
                                if ( v206 <= (char)((v137 + 3) & 7) && v206 )
                                {
                                  __asan_report_store1(v205, v170);
                                }
                                else
                                {
                                  *(_BYTE *)(v137 + 3) = v170 & 0x3F | 0x80;
                                  v205 = (_BYTE *)(v137 + 2);
                                  v207 = *(_BYTE *)(((v137 + 2) >> 3) + 0x7FFF8000);
                                  if ( v207 > (char)((v137 + 2) & 7) || !v207 )
                                  {
                                    *(_BYTE *)(v137 + 2) = (v170 >> 6) & 0x3F | 0x80;
                                    v205 = (_BYTE *)(v137 + 1);
                                    v208 = *(_BYTE *)(((v137 + 1) >> 3) + 0x7FFF8000);
                                    if ( v208 > (char)((v137 + 1) & 7) || !v208 )
                                    {
                                      *(_BYTE *)(v137 + 1) = (v170 >> 12) & 0x3F | 0x80;
                                      v170 = (unsigned int)(v170 >> 18) | 0xFFFFFFF0;
                                      v205 = (_BYTE *)v137;
                                      v209 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                                      if ( v209 > (char)(v137 & 7) || !v209 )
                                      {
                                        *(_BYTE *)v137 = v170;
                                        v150 = (_BYTE *)(v137 + 4);
                                        goto LABEL_575;
                                      }
LABEL_612:
                                      __asan_report_store1(v205, v170);
LABEL_613:
                                      v210 = v137;
                                      v211 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                                      if ( *(_BYTE *)((v211 >> 3) + 0x7FFF8000) )
                                        __asan_report_store8();
                                      *(_QWORD *)v211 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error
                                                      + 2;
                                      if ( *(_BYTE *)(((v211 + 8) >> 3) + 0x7FFF8000) )
                                        __asan_report_store8();
                                      *(_QWORD *)(v211 + 8) = "invalid numeric character entity";
                                      if ( *(_BYTE *)(((v211 + 16) >> 3) + 0x7FFF8000) )
                                        __asan_report_store8();
                                      *(_QWORD *)(v211 + 16) = v210;
                                      __asan_handle_no_return(v211 + 16);
                                      _cxa_throw(
                                        (void *)v211,
                                        (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                                        (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                                    }
LABEL_611:
                                    __asan_report_store1(v205, v170);
                                    goto LABEL_612;
                                  }
                                }
                                __asan_report_store1(v205, v170);
                                goto LABEL_611;
                              }
                            }
                            __asan_report_store1(v201, v170);
                            goto LABEL_598;
                          }
                        }
                        v193 = boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[v192];
                        if ( v193 == 0xFF )
                          goto LABEL_571;
                        v170 = v193 + 10 * v170;
                        ++v169;
                      }
                    }
                    v169 = v62 + 3;
                    v171 = 0LL;
                    while ( 1 )
                    {
                      v174 = *(_BYTE *)((v169 >> 3) + 0x7FFF8000);
                      if ( v174 <= (char)(v169 & 7) && v174 )
                      {
                        v169 = __asan_report_load1(v169);
                      }
                      else
                      {
                        v172 = *(unsigned __int8 *)v169;
                        v175 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v169] >> 3)
                                        + 0x7FFF8000);
                        if ( v175 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(_BYTE *)v169] & 7)
                          && v175 )
                        {
                          v169 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v169]);
LABEL_518:
                          if ( v171 <= 0x7F )
                          {
                            v176 = v171;
                            v177 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                            v171 = v137 & 7;
                            if ( v177 > (char)v171 || !v177 )
                            {
                              *(_BYTE *)v137 = v176;
                              v150 = (_BYTE *)(v137 + 1);
LABEL_575:
                              v197 = *(_BYTE *)((v169 >> 3) + 0x7FFF8000);
                              if ( v197 <= (char)(v169 & 7) && v197 )
                              {
                                v169 = __asan_report_load1(v169);
                              }
                              else if ( *(_BYTE *)v169 == 59 )
                              {
                                v62 = v169 + 1;
                                goto LABEL_629;
                              }
                              v212 = v169;
                              v213 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                              if ( *(_BYTE *)((v213 >> 3) + 0x7FFF8000) )
                                __asan_report_store8();
                              *(_QWORD *)v213 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                              if ( *(_BYTE *)(((v213 + 8) >> 3) + 0x7FFF8000) )
                                __asan_report_store8();
                              *(_QWORD *)(v213 + 8) = "expected ;";
                              if ( *(_BYTE *)(((v213 + 16) >> 3) + 0x7FFF8000) )
                                __asan_report_store8();
                              *(_QWORD *)(v213 + 16) = v212;
                              __asan_handle_no_return(v213 + 16);
                              _cxa_throw(
                                (void *)v213,
                                (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                                (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                            }
                            v169 = __asan_report_store1(v137, v171);
                          }
                          if ( v171 <= 0x7FF )
                          {
                            v178 = (_BYTE *)(v137 + 1);
                            v179 = *(_BYTE *)(((v137 + 1) >> 3) + 0x7FFF8000);
                            if ( v179 <= (char)((v137 + 1) & 7) && v179 )
                            {
                              __asan_report_store1(v178, v171);
                            }
                            else
                            {
                              *(_BYTE *)(v137 + 1) = v171 & 0x3F | 0x80;
                              v180 = (v171 >> 6) | 0xC0;
                              v178 = (_BYTE *)v137;
                              v171 = *(unsigned __int8 *)((v137 >> 3) + 0x7FFF8000);
                              if ( (char)v171 > (char)(v137 & 7) || !(_BYTE)v171 )
                              {
                                *(_BYTE *)v137 = v180;
                                v150 = (_BYTE *)(v137 + 2);
                                goto LABEL_575;
                              }
                            }
                            v169 = __asan_report_store1(v178, v171);
                          }
                          if ( v171 > 0xFFFF )
                            goto LABEL_542;
                          v181 = (_BYTE *)(v137 + 2);
                          v182 = *(_BYTE *)(((v137 + 2) >> 3) + 0x7FFF8000);
                          if ( v182 <= (char)((v137 + 2) & 7) && v182 )
                          {
                            __asan_report_store1(v181, v171);
                          }
                          else
                          {
                            *(_BYTE *)(v137 + 2) = v171 & 0x3F | 0x80;
                            v181 = (_BYTE *)(v137 + 1);
                            v183 = *(_BYTE *)(((v137 + 1) >> 3) + 0x7FFF8000);
                            if ( v183 > (char)((v137 + 1) & 7) || !v183 )
                            {
                              *(_BYTE *)(v137 + 1) = (v171 >> 6) & 0x3F | 0x80;
                              v184 = (v171 >> 12) | 0xE0;
                              v181 = (_BYTE *)v137;
                              v171 = *(unsigned __int8 *)((v137 >> 3) + 0x7FFF8000);
                              if ( (char)v171 > (char)(v137 & 7) || !(_BYTE)v171 )
                              {
                                *(_BYTE *)v137 = v184;
                                v150 = (_BYTE *)(v137 + 3);
                                goto LABEL_575;
                              }
LABEL_541:
                              v169 = __asan_report_store1(v181, v171);
LABEL_542:
                              if ( v171 > 0x10FFFF )
                                goto LABEL_556;
                              v185 = (_BYTE *)(v137 + 3);
                              v186 = *(_BYTE *)(((v137 + 3) >> 3) + 0x7FFF8000);
                              if ( v186 <= (char)((v137 + 3) & 7) && v186 )
                              {
                                __asan_report_store1(v185, v171);
                              }
                              else
                              {
                                *(_BYTE *)(v137 + 3) = v171 & 0x3F | 0x80;
                                v185 = (_BYTE *)(v137 + 2);
                                v187 = *(_BYTE *)(((v137 + 2) >> 3) + 0x7FFF8000);
                                if ( v187 > (char)((v137 + 2) & 7) || !v187 )
                                {
                                  *(_BYTE *)(v137 + 2) = (v171 >> 6) & 0x3F | 0x80;
                                  v185 = (_BYTE *)(v137 + 1);
                                  v188 = *(_BYTE *)(((v137 + 1) >> 3) + 0x7FFF8000);
                                  if ( v188 > (char)((v137 + 1) & 7) || !v188 )
                                  {
                                    *(_BYTE *)(v137 + 1) = (v171 >> 12) & 0x3F | 0x80;
                                    v189 = (v171 >> 18) | 0xF0;
                                    v185 = (_BYTE *)v137;
                                    v171 = *(unsigned __int8 *)((v137 >> 3) + 0x7FFF8000);
                                    if ( (char)v171 > (char)(v137 & 7) || !(_BYTE)v171 )
                                    {
                                      *(_BYTE *)v137 = v189;
                                      v150 = (_BYTE *)(v137 + 4);
                                      goto LABEL_575;
                                    }
LABEL_555:
                                    __asan_report_store1(v185, v171);
LABEL_556:
                                    v190 = v137;
                                    v191 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                                    if ( *(_BYTE *)((v191 >> 3) + 0x7FFF8000) )
                                      __asan_report_store8();
                                    *(_QWORD *)v191 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error
                                                    + 2;
                                    if ( *(_BYTE *)(((v191 + 8) >> 3) + 0x7FFF8000) )
                                      __asan_report_store8();
                                    *(_QWORD *)(v191 + 8) = "invalid numeric character entity";
                                    if ( *(_BYTE *)(((v191 + 16) >> 3) + 0x7FFF8000) )
                                      __asan_report_store8();
                                    *(_QWORD *)(v191 + 16) = v190;
                                    __asan_handle_no_return(v191 + 16);
                                    _cxa_throw(
                                      (void *)v191,
                                      (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                                      (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                                  }
LABEL_554:
                                  __asan_report_store1(v185, v171);
                                  goto LABEL_555;
                                }
                              }
                              __asan_report_store1(v185, v171);
                              goto LABEL_554;
                            }
                          }
                          __asan_report_store1(v181, v171);
                          goto LABEL_541;
                        }
                      }
                      v173 = boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[v172];
                      if ( v173 == 0xFF )
                        goto LABEL_518;
                      v171 = v173 + 16 * v171;
                      ++v169;
                    }
                  }
                  if ( *(_BYTE *)(v62 + 2) == 116 )
                  {
                    v164 = v62 + 3;
                    v166 = *(_BYTE *)(((v62 + 3) >> 3) + 0x7FFF8000);
                    if ( v166 <= (char)((v62 + 3) & 7) && v166 )
                      goto LABEL_502;
                    if ( *(_BYTE *)(v62 + 3) == 59 )
                    {
                      v164 = v137;
                      v167 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                      v85 = v137 & 7;
                      if ( v167 > (char)v85 || !v167 )
                      {
                        *(_BYTE *)v137 = 60;
                        v150 = (_BYTE *)(v137 + 1);
                        v62 += 4LL;
                        goto LABEL_629;
                      }
                      goto LABEL_503;
                    }
                  }
LABEL_638:
                  ++v62;
                  v150 = (_BYTE *)(v137 + 1);
                  v216 = *(_BYTE *)((v137 >> 3) + 0x7FFF8000);
                  if ( v216 > (char)(v137 & 7) || !v216 )
                  {
                    *(_BYTE *)v137 = v85;
LABEL_629:
                    v137 = (unsigned __int64)v150;
                    continue;
                  }
                  break;
                }
                v62 = __asan_report_store1(v137, v85);
LABEL_641:
                *(_QWORD *)v3 = v62;
LABEL_642:
                v217 = (_BYTE *)(v137 - (_QWORD)v61);
                v218 = (char **)(v4 + 8);
                if ( *(_BYTE *)(((v4 + 8) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store8();
LABEL_656:
                  __asan_report_store8();
LABEL_657:
                  __asan_report_load8();
LABEL_658:
                  __asan_report_load1(v218);
LABEL_659:
                  v227 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  v228 = *(_QWORD *)v3;
                  if ( *(_BYTE *)((v227 >> 3) + 0x7FFF8000) )
                    v228 = __asan_report_store8();
                  *(_QWORD *)v227 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                  if ( *(_BYTE *)(((v227 + 8) >> 3) + 0x7FFF8000) )
                    v228 = __asan_report_store8();
                  *(_QWORD *)(v227 + 8) = "expected ' or \"";
                  if ( *(_BYTE *)(((v227 + 16) >> 3) + 0x7FFF8000) )
                    v228 = __asan_report_store8();
                  *(_QWORD *)(v227 + 16) = v228;
                  __asan_handle_no_return(v227 + 16);
                  _cxa_throw(
                    (void *)v227,
                    (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                    (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                }
                *(_QWORD *)(v4 + 8) = v61;
                v218 = (char **)(v4 + 24);
                if ( *(_BYTE *)(((v4 + 24) >> 3) + 0x7FFF8000) )
                  goto LABEL_656;
                *(_QWORD *)(v4 + 24) = v217;
                v218 = (char **)v3;
                if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
                  goto LABEL_657;
                v219 = *(char ***)v3;
                v218 = *(char ***)v3;
                v220 = *(_BYTE *)((*(_QWORD *)v3 >> 3) + 0x7FFF8000LL);
                if ( v220 <= (*(_BYTE *)v3 & 7) && v220 )
                  goto LABEL_658;
                if ( m_begin != *(_BYTE *)v219 )
                  goto LABEL_659;
                *(_QWORD *)v3 = (char *)v219 + 1;
                v221 = *(char **)(v4 + 8);
                if ( v221 )
                  v222 = *(char **)(v4 + 8);
                else
                  v222 = (char *)&boost::property_tree::detail::rapidxml::xml_base<char>::nullstr(void)::zero;
                if ( v221 )
                  v223 = *(_QWORD *)(v4 + 24);
                else
                  v223 = 0LL;
                v224 = (unsigned __int64)&v222[v223];
                v225 = *(_BYTE *)((v224 >> 3) + 0x7FFF8000);
                if ( v225 > (char)(v224 & 7) || !v225 )
                {
                  *(_BYTE *)v224 = 0;
                  v226 = *(_QWORD *)v3;
                  goto LABEL_677;
                }
                v226 = __asan_report_store1(v224, v85);
LABEL_671:
                LOBYTE(v229) = *(_BYTE *)v226;
                if ( (unsigned int)*(char *)v226 <= 0x7F )
                {
                  v229 = (char)v229;
                  goto LABEL_673;
                }
                while ( 1 )
                {
                  v229 = 122LL;
LABEL_673:
                  v230 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v229] >> 3)
                                  + 0x7FFF8000);
                  v28 = (unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v229] & 7;
                  if ( v230 <= (char)v28 )
                  {
                    if ( v230 )
                      break;
                  }
                  if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v229] )
                    goto LABEL_682;
                  ++v226;
LABEL_677:
                  v231 = *(_BYTE *)((v226 >> 3) + 0x7FFF8000);
                  if ( v231 > (char)(v226 & 7) || !v231 )
                    goto LABEL_671;
                  v226 = __asan_report_load1(v226);
                }
                v226 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v229]);
LABEL_682:
                *(_QWORD *)v3 = v226;
                goto LABEL_683;
              }
              if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_data_1_pure[v65] )
                goto LABEL_218;
            }
          }
LABEL_150:
          __asan_report_store8();
          goto LABEL_151;
        }
LABEL_149:
        __asan_report_store8();
        goto LABEL_150;
      }
      if ( !*(_BYTE *)(((v6 + 72) >> 3) + 0x7FFF8000) )
      {
        v43 = *(_QWORD *)(v6 + 72);
        if ( !*(_BYTE *)(((v4 + 40) >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)(v4 + 40) = v43;
          if ( !*(_BYTE *)(((unsigned __int64)(v43 + 48) >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)(v43 + 48) = v4;
            goto LABEL_116;
          }
          goto LABEL_145;
        }
LABEL_144:
        __asan_report_store8();
LABEL_145:
        __asan_report_store8();
        goto LABEL_146;
      }
    }
    __asan_report_load8();
    goto LABEL_144;
  }
  if ( boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_attribute_name[v29] )
  {
    v30 = (unsigned __int64)m + 1;
    *(_QWORD *)v3 = (char *)m + 1;
    goto LABEL_84;
  }
  v235 = *(char ***)v3;
  v236 = **(_BYTE **)v3;
  if ( v236 != 62 )
  {
    if ( v236 != 47 )
    {
      v246 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v247 = *(_QWORD *)v3;
      if ( *(_BYTE *)((v246 >> 3) + 0x7FFF8000) )
        v247 = __asan_report_store8();
      *(_QWORD *)v246 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
      if ( *(_BYTE *)(((v246 + 8) >> 3) + 0x7FFF8000) )
        v247 = __asan_report_store8();
      *(_QWORD *)(v246 + 8) = "expected >";
      if ( *(_BYTE *)(((v246 + 16) >> 3) + 0x7FFF8000) )
        v247 = __asan_report_store8();
      *(_QWORD *)(v246 + 16) = v247;
      __asan_handle_no_return(v246 + 16);
      _cxa_throw(
        (void *)v246,
        (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
        (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
    }
    *(_QWORD *)v3 = (char *)v235 + 1;
    v237 = *(_BYTE *)((((unsigned __int64)v235 + 1) >> 3) + 0x7FFF8000);
    if ( v237 <= (((unsigned __int8)v235 + 1) & 7) && v237 )
    {
      __asan_report_load1((char *)v235 + 1);
    }
    else if ( *((_BYTE *)v235 + 1) == 62 )
    {
      *(_QWORD *)v3 = (char *)v235 + 2;
      goto LABEL_698;
    }
    v244 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v245 = *(_QWORD *)v3;
    if ( *(_BYTE *)((v244 >> 3) + 0x7FFF8000) )
      v245 = __asan_report_store8();
    *(_QWORD *)v244 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
    if ( *(_BYTE *)(((v244 + 8) >> 3) + 0x7FFF8000) )
      v245 = __asan_report_store8();
    *(_QWORD *)(v244 + 8) = "expected >";
    if ( *(_BYTE *)(((v244 + 16) >> 3) + 0x7FFF8000) )
      v245 = __asan_report_store8();
    *(_QWORD *)(v244 + 16) = v245;
    __asan_handle_no_return(v244 + 16);
    _cxa_throw(
      (void *)v244,
      (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
      (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
  }
  *(_QWORD *)v3 = (char *)v235 + 1;
  v28 = v3;
  boost::property_tree::detail::rapidxml::xml_document<char>::parse_node_contents<64>(
    this,
    (char **)v3,
    (boost::property_tree::detail::rapidxml::xml_node<char> *)v6);
LABEL_698:
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else
  {
    v238 = *(char **)v6;
    if ( *(_QWORD *)v6 )
    {
      v239 = *(char **)v6;
      goto LABEL_701;
    }
  }
  v239 = (char *)&boost::property_tree::detail::rapidxml::xml_base<char>::nullstr(void)::zero;
LABEL_701:
  if ( !v238 )
    goto LABEL_732;
  if ( *(_BYTE *)(((v6 + 16) >> 3) + 0x7FFF8000) )
  {
    v239 = (char *)(v6 + 16);
    __asan_report_load8();
LABEL_732:
    v240 = 0LL;
    goto LABEL_704;
  }
  v240 = *(_QWORD *)(v6 + 16);
LABEL_704:
  v241 = (unsigned __int64)&v239[v240];
  v242 = *(_BYTE *)((v241 >> 3) + 0x7FFF8000);
  if ( v242 <= (char)(v241 & 7) && v242 )
  {
    __asan_report_store1(v241, v28);
    goto LABEL_734;
  }
  *(_BYTE *)v241 = 0;
  v4 = v249;
  if ( v251 != (char *)v249 )
  {
LABEL_734:
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v249 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    return (boost::property_tree::detail::rapidxml::xml_node<char> *)v6;
  }
  *(_QWORD *)((v249 >> 3) + 0x7FFF8000) = 0LL;
  return (boost::property_tree::detail::rapidxml::xml_node<char> *)v6;
};

// Line 2076: range 000000000C29D170-000000000C29DF0B
boost::property_tree::detail::rapidxml::xml_node<char> *__fastcall boost::property_tree::detail::rapidxml::xml_document<char>::parse_node<0>(
        boost::property_tree::detail::rapidxml::xml_document<char> *const this,
        char **text)
{
  char *v2; // rbp
  _BYTE *v4; // rax
  char v5; // dl
  boost::property_tree::detail::rapidxml::xml_node<char> *result; // rax
  _BYTE *v7; // rsi
  char v8; // dl
  _BYTE *v9; // rdi
  char v10; // al
  char v11; // al
  char v12; // al
  __int64 v13; // rax
  char v14; // dl
  char *v15; // rax
  char v16; // dl
  char v17; // cl
  unsigned __int64 exception; // rbp
  __int64 v19; // rax
  char *v20; // rax
  char v21; // dl
  char v22; // cl
  unsigned __int64 v23; // rbp
  __int64 v24; // rax
  char v25; // cl
  char v26; // dl
  char *v27; // rax
  char v28; // dl
  char v29; // dl
  char *v30; // rax
  char v31; // dl
  char v32; // cl
  char v33; // cl
  unsigned __int64 v34; // rbp
  __int64 v35; // rax
  char v36; // cl
  _BYTE *v37; // rdx
  char v38; // cl
  _BYTE *v39; // rdx
  char v40; // cl
  _BYTE *v41; // rdx
  char v42; // cl
  _BYTE *v43; // rdx
  char v44; // cl
  boost::property_tree::detail::rapidxml::xml_document<char> *v45; // rdx
  char v46; // cl
  char *v47; // rax
  char v48; // dl
  char v49; // si
  char v50; // si
  void *p_m_value; // rdi
  char v52; // dl
  char *v53; // rdx
  _BYTE *p_m_value_size; // rdi
  char v55; // dl
  unsigned __int64 v56; // rbp
  __int64 v57; // rax
  _BYTE *v58; // rdi
  char v59; // dl
  char v60; // dl
  char v61; // dl
  char v62; // dl
  char v63; // dl
  char v64; // dl
  char v65; // dl
  __int64 v66; // rdx
  char v67; // cl
  char *v68; // rax
  char v69; // dl
  int v70; // eax
  char v71; // cl
  unsigned __int64 v72; // rbp
  __int64 v73; // rax
  unsigned __int64 v74; // rbp
  __int64 v75; // rax
  unsigned __int64 v76; // rbp
  __int64 v77; // rax

  if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_8:
    v4 = (_BYTE *)__asan_report_load1(v4);
    goto LABEL_9;
  }
  v4 = *text;
  v5 = *(_BYTE *)(((unsigned __int64)*text >> 3) + 0x7FFF8000);
  if ( v5 <= (*(_BYTE *)text & 7) && v5 )
    goto LABEL_8;
  if ( *v4 != 33 )
  {
    if ( *v4 != 63 )
      return boost::property_tree::detail::rapidxml::xml_document<char>::parse_element<0>(this, text);
LABEL_9:
    v7 = v4 + 1;
    *text = v4 + 1;
    v8 = *(_BYTE *)(((unsigned __int64)(v4 + 1) >> 3) + 0x7FFF8000);
    if ( v8 <= (((unsigned __int8)v4 + 1) & 7) && v8 )
    {
      v9 = v4 + 1;
      __asan_report_load1(v4 + 1);
    }
    else
    {
      if ( v4[1] != 88 && v4[1] != 120 )
        goto LABEL_52;
      v9 = v4 + 2;
      v10 = *(_BYTE *)(((unsigned __int64)(v4 + 2) >> 3) + 0x7FFF8000);
      if ( v10 > (((unsigned __int8)v7 + 1) & 7) || !v10 )
      {
        if ( v7[1] != 77 && v7[1] != 109 )
          goto LABEL_52;
        v9 = v7 + 2;
        v11 = *(_BYTE *)(((unsigned __int64)(v7 + 2) >> 3) + 0x7FFF8000);
        if ( v11 > (((unsigned __int8)v7 + 2) & 7) || !v11 )
        {
          if ( v7[2] != 76 && v7[2] != 108 )
            goto LABEL_52;
          v9 = v7 + 3;
          v12 = *(_BYTE *)(((unsigned __int64)(v7 + 3) >> 3) + 0x7FFF8000);
          if ( v12 > (((unsigned __int8)v7 + 3) & 7) || !v12 )
          {
            LOBYTE(v13) = v7[3];
            if ( (unsigned int)(char)v13 <= 0x7F )
            {
              v13 = (char)v13;
LABEL_22:
              v14 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v13] >> 3)
                             + 0x7FFF8000);
              if ( v14 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v13] & 7)
                && v14 )
              {
                v15 = (char *)__asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v13]);
                goto LABEL_32;
              }
              if ( boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v13] )
              {
                for ( *text = v7 + 4; ; *text = v15 + 1 )
                {
                  v15 = *text;
                  v16 = **text;
                  if ( v16 == 63 )
                  {
                    v17 = *(_BYTE *)(((unsigned __int64)(v15 + 1) >> 3) + 0x7FFF8000);
                    if ( v17 <= (((unsigned __int8)v15 + 1) & 7) && v17 )
                    {
                      __asan_report_load1(v15 + 1);
LABEL_39:
                      exception = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                      if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      v19 = (__int64)*text;
                      if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
                        v19 = __asan_report_store8();
                      *(_QWORD *)exception = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                      if ( *(_BYTE *)(((exception + 8) >> 3) + 0x7FFF8000) )
                        v19 = __asan_report_store8();
                      *(_QWORD *)(exception + 8) = "unexpected end of data";
                      if ( *(_BYTE *)(((exception + 16) >> 3) + 0x7FFF8000) )
                        v19 = __asan_report_store8();
                      *(_QWORD *)(exception + 16) = v19;
                      __asan_handle_no_return(exception + 16);
                      _cxa_throw(
                        (void *)exception,
                        (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                        (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                    }
LABEL_32:
                    if ( v15[1] == 62 )
                      break;
                  }
                  if ( !v16 )
                    goto LABEL_39;
                }
                *text = v15 + 2;
                return 0LL;
              }
              else
              {
LABEL_52:
                while ( 1 )
                {
                  v20 = *text;
                  v21 = **text;
                  if ( v21 == 63 )
                  {
                    v22 = *(_BYTE *)(((unsigned __int64)(v20 + 1) >> 3) + 0x7FFF8000);
                    if ( v22 <= (((unsigned __int8)v20 + 1) & 7) && v22 )
                    {
                      __asan_report_load1(v20 + 1);
LABEL_56:
                      v23 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                      if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      v24 = (__int64)*text;
                      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
                        v24 = __asan_report_store8();
                      *(_QWORD *)v23 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                      if ( *(_BYTE *)(((v23 + 8) >> 3) + 0x7FFF8000) )
                        v24 = __asan_report_store8();
                      *(_QWORD *)(v23 + 8) = "unexpected end of data";
                      if ( *(_BYTE *)(((v23 + 16) >> 3) + 0x7FFF8000) )
                        v24 = __asan_report_store8();
                      *(_QWORD *)(v23 + 16) = v24;
                      __asan_handle_no_return(v23 + 16);
                      _cxa_throw(
                        (void *)v23,
                        (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                        (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                    }
                    if ( v20[1] == 62 )
                      break;
                  }
                  if ( !v21 )
                    goto LABEL_56;
                  *text = v20 + 1;
                }
                *text = v20 + 2;
                return 0LL;
              }
            }
LABEL_30:
            v13 = 122LL;
            goto LABEL_22;
          }
LABEL_29:
          __asan_report_load1(v9);
          goto LABEL_30;
        }
LABEL_28:
        __asan_report_load1(v9);
        goto LABEL_29;
      }
    }
    __asan_report_load1(v9);
    goto LABEL_28;
  }
  v25 = *(_BYTE *)(((unsigned __int64)(v4 + 1) >> 3) + 0x7FFF8000);
  if ( v25 <= (((unsigned __int8)v4 + 1) & 7) && v25 )
  {
    v4 = (_BYTE *)__asan_report_load1(v4 + 1);
LABEL_76:
    v29 = *(_BYTE *)(((unsigned __int64)(v4 + 2) >> 3) + 0x7FFF8000);
    if ( v29 <= (((unsigned __int8)v4 + 2) & 7) && v29 )
    {
      v30 = (char *)__asan_report_load1(v4 + 2);
      goto LABEL_81;
    }
    if ( v4[2] != 45 )
      goto LABEL_71;
    for ( *text = v4 + 3; ; *text = v30 + 1 )
    {
      v30 = *text;
      v31 = **text;
      if ( v31 == 45 )
      {
        v32 = *(_BYTE *)(((unsigned __int64)(v30 + 1) >> 3) + 0x7FFF8000);
        if ( v32 <= (((unsigned __int8)v30 + 1) & 7) && v32 )
        {
          v30 = (char *)__asan_report_load1(v30 + 1);
        }
        else
        {
LABEL_81:
          if ( v30[1] != 45 )
            goto LABEL_82;
        }
        v33 = *(_BYTE *)(((unsigned __int64)(v30 + 2) >> 3) + 0x7FFF8000);
        if ( v33 <= (((unsigned __int8)v30 + 2) & 7) && v33 )
        {
          __asan_report_load1(v30 + 2);
LABEL_93:
          v34 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
          if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v35 = (__int64)*text;
          if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
            v35 = __asan_report_store8();
          *(_QWORD *)v34 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
          if ( *(_BYTE *)(((v34 + 8) >> 3) + 0x7FFF8000) )
            v35 = __asan_report_store8();
          *(_QWORD *)(v34 + 8) = "unexpected end of data";
          if ( *(_BYTE *)(((v34 + 16) >> 3) + 0x7FFF8000) )
            v35 = __asan_report_store8();
          *(_QWORD *)(v34 + 16) = v35;
          __asan_handle_no_return(v34 + 16);
          _cxa_throw(
            (void *)v34,
            (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
            (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
        }
        if ( v30[2] == 62 )
        {
          *text = v30 + 3;
          return 0LL;
        }
      }
LABEL_82:
      if ( !v31 )
        goto LABEL_93;
    }
  }
  v26 = v4[1];
  if ( v26 == 68 )
    goto LABEL_168;
  if ( v26 != 91 )
  {
    if ( v26 != 45 )
      goto LABEL_71;
    goto LABEL_76;
  }
  v36 = *(_BYTE *)(((unsigned __int64)(v4 + 2) >> 3) + 0x7FFF8000);
  if ( v36 <= (((unsigned __int8)v4 + 2) & 7) && v36 )
  {
    __asan_report_load1(v4 + 2);
LABEL_122:
    __asan_report_load1(v37);
LABEL_123:
    __asan_report_load1(v39);
LABEL_124:
    __asan_report_load1(v41);
LABEL_125:
    __asan_report_load1(v43);
    goto LABEL_126;
  }
  if ( v4[2] != 67 )
    goto LABEL_71;
  v37 = v4 + 3;
  v38 = *(_BYTE *)(((unsigned __int64)(v4 + 3) >> 3) + 0x7FFF8000);
  if ( v38 <= (((unsigned __int8)v4 + 3) & 7) && v38 )
    goto LABEL_122;
  if ( v4[3] != 68 )
    goto LABEL_71;
  v39 = v4 + 4;
  v40 = *(_BYTE *)(((unsigned __int64)(v4 + 4) >> 3) + 0x7FFF8000);
  if ( v40 <= (((unsigned __int8)v4 + 4) & 7) && v40 )
    goto LABEL_123;
  if ( v4[4] != 65 )
    goto LABEL_71;
  v41 = v4 + 5;
  v42 = *(_BYTE *)(((unsigned __int64)(v4 + 5) >> 3) + 0x7FFF8000);
  if ( v42 <= (((unsigned __int8)v4 + 5) & 7) && v42 )
    goto LABEL_124;
  if ( v4[5] != 84 )
    goto LABEL_71;
  v43 = v4 + 6;
  v44 = *(_BYTE *)(((unsigned __int64)(v4 + 6) >> 3) + 0x7FFF8000);
  if ( v44 <= (((unsigned __int8)v4 + 6) & 7) && v44 )
    goto LABEL_125;
  if ( v4[6] != 65 )
    goto LABEL_71;
  v45 = (boost::property_tree::detail::rapidxml::xml_document<char> *)(v4 + 7);
  v46 = *(_BYTE *)(((unsigned __int64)(v4 + 7) >> 3) + 0x7FFF8000);
  if ( v46 <= (((unsigned __int8)v4 + 7) & 7) && v46 )
  {
LABEL_126:
    this = v45;
    v47 = (char *)__asan_report_load1(v45);
    goto LABEL_127;
  }
  if ( v4[7] != 91 )
    goto LABEL_71;
  v2 = v4 + 8;
  for ( *text = v4 + 8; ; *text = v47 + 1 )
  {
    v47 = *text;
    v48 = **text;
    if ( v48 == 93 )
    {
      v49 = *(_BYTE *)(((unsigned __int64)(v47 + 1) >> 3) + 0x7FFF8000);
      if ( v49 <= (((unsigned __int8)v47 + 1) & 7) && v49 )
      {
        this = (boost::property_tree::detail::rapidxml::xml_document<char> *const)(v47 + 1);
        v47 = (char *)__asan_report_load1(v47 + 1);
      }
      else
      {
LABEL_127:
        if ( v47[1] != 93 )
          goto LABEL_128;
      }
      v50 = *(_BYTE *)(((unsigned __int64)(v47 + 2) >> 3) + 0x7FFF8000);
      if ( v50 <= (((unsigned __int8)v47 + 2) & 7) && v50 )
      {
        __asan_report_load1(v47 + 2);
LABEL_150:
        v56 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
        if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v57 = (__int64)*text;
        if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
          v57 = __asan_report_store8();
        *(_QWORD *)v56 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
        if ( *(_BYTE *)(((v56 + 8) >> 3) + 0x7FFF8000) )
          v57 = __asan_report_store8();
        *(_QWORD *)(v56 + 8) = "unexpected end of data";
        if ( *(_BYTE *)(((v56 + 16) >> 3) + 0x7FFF8000) )
          v57 = __asan_report_store8();
        *(_QWORD *)(v56 + 16) = v57;
        __asan_handle_no_return(v56 + 16);
        _cxa_throw(
          (void *)v56,
          (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
          (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
      }
      if ( v47[2] == 62 )
        break;
    }
LABEL_128:
    if ( !v48 )
      goto LABEL_150;
  }
  result = (boost::property_tree::detail::rapidxml::xml_node<char> *)boost::property_tree::detail::rapidxml::memory_pool<char>::allocate_aligned(
                                                                       &this->boost::property_tree::detail::rapidxml::memory_pool<char>,
                                                                       0x60uLL);
  if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
  {
    p_m_value = result;
    __asan_report_store8();
    goto LABEL_160;
  }
  result->m_name = 0LL;
  p_m_value = &result->m_value;
  if ( *(_BYTE *)(((unsigned __int64)&result->m_value >> 3) + 0x7FFF8000) )
  {
LABEL_160:
    __asan_report_store8();
    goto LABEL_161;
  }
  result->m_value = 0LL;
  p_m_value = &result->m_parent;
  if ( *(_BYTE *)(((unsigned __int64)&result->m_parent >> 3) + 0x7FFF8000) )
  {
LABEL_161:
    __asan_report_store8();
LABEL_162:
    __asan_report_store4(p_m_value);
    goto LABEL_163;
  }
  result->m_parent = 0LL;
  p_m_value = &result->m_type;
  v52 = *(_BYTE *)(((unsigned __int64)&result->m_type >> 3) + 0x7FFF8000);
  if ( v52 && v52 <= 3 )
    goto LABEL_162;
  result->m_type = node_cdata;
  if ( *(_BYTE *)(((unsigned __int64)&result->m_first_node >> 3) + 0x7FFF8000) )
  {
LABEL_163:
    __asan_report_store8();
    goto LABEL_164;
  }
  result->m_first_node = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&result->m_first_attribute >> 3) + 0x7FFF8000) )
  {
LABEL_164:
    __asan_report_store8();
    goto LABEL_165;
  }
  result->m_first_attribute = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
  {
LABEL_165:
    p_m_value_size = text;
    __asan_report_load8();
    goto LABEL_166;
  }
  v53 = (char *)(*text - v2);
  result->m_value = v2;
  p_m_value_size = &result->m_value_size;
  if ( *(_BYTE *)(((unsigned __int64)&result->m_value_size >> 3) + 0x7FFF8000) )
  {
LABEL_166:
    __asan_report_store8();
    goto LABEL_167;
  }
  result->m_value_size = (std::size_t)v53;
  p_m_value_size = *text;
  v55 = *(_BYTE *)(((unsigned __int64)*text >> 3) + 0x7FFF8000);
  if ( v55 > (*(_BYTE *)text & 7) || !v55 )
  {
    *p_m_value_size = 0;
    *text += 3;
    return result;
  }
LABEL_167:
  v4 = (_BYTE *)__asan_report_store1(p_m_value_size, 96LL);
LABEL_168:
  v58 = v4 + 2;
  v59 = *(_BYTE *)(((unsigned __int64)(v4 + 2) >> 3) + 0x7FFF8000);
  if ( v59 <= (((unsigned __int8)v4 + 2) & 7) && v59 )
  {
    __asan_report_load1(v58);
LABEL_199:
    __asan_report_load1(v58);
LABEL_200:
    __asan_report_load1(v58);
LABEL_201:
    __asan_report_load1(v58);
LABEL_202:
    __asan_report_load1(v58);
    goto LABEL_203;
  }
  if ( v4[2] != 79 )
    goto LABEL_71;
  v58 = v4 + 3;
  v60 = *(_BYTE *)(((unsigned __int64)(v4 + 3) >> 3) + 0x7FFF8000);
  if ( v60 <= (((unsigned __int8)v4 + 3) & 7) && v60 )
    goto LABEL_199;
  if ( v4[3] != 67 )
    goto LABEL_71;
  v58 = v4 + 4;
  v61 = *(_BYTE *)(((unsigned __int64)(v4 + 4) >> 3) + 0x7FFF8000);
  if ( v61 <= (((unsigned __int8)v4 + 4) & 7) && v61 )
    goto LABEL_200;
  if ( v4[4] != 84 )
    goto LABEL_71;
  v58 = v4 + 5;
  v62 = *(_BYTE *)(((unsigned __int64)(v4 + 5) >> 3) + 0x7FFF8000);
  if ( v62 <= (((unsigned __int8)v4 + 5) & 7) && v62 )
    goto LABEL_201;
  if ( v4[5] != 89 )
    goto LABEL_71;
  v58 = v4 + 6;
  v63 = *(_BYTE *)(((unsigned __int64)(v4 + 6) >> 3) + 0x7FFF8000);
  if ( v63 <= (((unsigned __int8)v4 + 6) & 7) && v63 )
    goto LABEL_202;
  if ( v4[6] != 80 )
    goto LABEL_71;
  v58 = v4 + 7;
  v64 = *(_BYTE *)(((unsigned __int64)(v4 + 7) >> 3) + 0x7FFF8000);
  if ( v64 <= (((unsigned __int8)v4 + 7) & 7) && v64 )
  {
LABEL_203:
    __asan_report_load1(v58);
LABEL_204:
    v4 = (_BYTE *)__asan_report_load1(v58);
    goto LABEL_205;
  }
  if ( v4[7] != 69 )
  {
LABEL_71:
    for ( *text = v4 + 1; ; *text = v27 + 1 )
    {
      v27 = *text;
      v28 = **text;
      if ( v28 == 62 )
        break;
      if ( !v28 )
      {
        v76 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
        if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v77 = (__int64)*text;
        if ( *(_BYTE *)((v76 >> 3) + 0x7FFF8000) )
          v77 = __asan_report_store8();
        *(_QWORD *)v76 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
        if ( *(_BYTE *)(((v76 + 8) >> 3) + 0x7FFF8000) )
          v77 = __asan_report_store8();
        *(_QWORD *)(v76 + 8) = "unexpected end of data";
        if ( *(_BYTE *)(((v76 + 16) >> 3) + 0x7FFF8000) )
          v77 = __asan_report_store8();
        *(_QWORD *)(v76 + 16) = v77;
        __asan_handle_no_return(v76 + 16);
        _cxa_throw(
          (void *)v76,
          (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
          (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
      }
    }
    *text = v27 + 1;
    return 0LL;
  }
  v58 = v4 + 8;
  v65 = *(_BYTE *)(((unsigned __int64)(v4 + 8) >> 3) + 0x7FFF8000);
  if ( v65 <= (((unsigned __int8)v4 + 8) & 7) && v65 )
    goto LABEL_204;
  LOBYTE(v66) = v4[8];
  if ( (unsigned int)(char)v66 > 0x7F )
  {
LABEL_205:
    v66 = 122LL;
    goto LABEL_190;
  }
  v66 = (char)v66;
LABEL_190:
  v67 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v66] >> 3)
                 + 0x7FFF8000);
  if ( v67 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v66] & 7)
    && v67 )
  {
    v68 = (char *)__asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v66]);
    goto LABEL_207;
  }
  if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v66] )
    goto LABEL_71;
  *text = v4 + 9;
  while ( 1 )
  {
    v68 = *text;
    v69 = **text;
    if ( v69 == 62 )
      break;
    if ( !v69 )
    {
      v74 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
      if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v75 = (__int64)*text;
      if ( *(_BYTE *)((v74 >> 3) + 0x7FFF8000) )
        v75 = __asan_report_store8();
      *(_QWORD *)v74 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
      if ( *(_BYTE *)(((v74 + 8) >> 3) + 0x7FFF8000) )
        v75 = __asan_report_store8();
      *(_QWORD *)(v74 + 8) = "unexpected end of data";
      if ( *(_BYTE *)(((v74 + 16) >> 3) + 0x7FFF8000) )
        v75 = __asan_report_store8();
      *(_QWORD *)(v74 + 16) = v75;
      __asan_handle_no_return(v74 + 16);
      _cxa_throw(
        (void *)v74,
        (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
        (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
    }
    if ( v69 == 91 )
    {
LABEL_207:
      *text = v68 + 1;
      v70 = 1;
      while ( v70 > 0 )
      {
        v71 = **text;
        if ( v71 == 93 )
        {
          --v70;
        }
        else if ( v71 <= 93 )
        {
          if ( !v71 )
          {
            v72 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
            if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v73 = (__int64)*text;
            if ( *(_BYTE *)((v72 >> 3) + 0x7FFF8000) )
              v73 = __asan_report_store8();
            *(_QWORD *)v72 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
            if ( *(_BYTE *)(((v72 + 8) >> 3) + 0x7FFF8000) )
              v73 = __asan_report_store8();
            *(_QWORD *)(v72 + 8) = "unexpected end of data";
            if ( *(_BYTE *)(((v72 + 16) >> 3) + 0x7FFF8000) )
              v73 = __asan_report_store8();
            *(_QWORD *)(v72 + 16) = v73;
            __asan_handle_no_return(v72 + 16);
            _cxa_throw(
              (void *)v72,
              (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
              (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
          }
          if ( v71 == 91 )
            ++v70;
        }
        ++*text;
      }
    }
    else
    {
      *text = v68 + 1;
    }
  }
  *text = v68 + 1;
  return 0LL;
};

// Line 2076: range 000000000C2A24B4-000000000C2A33C5
boost::property_tree::detail::rapidxml::xml_node<char> *__fastcall boost::property_tree::detail::rapidxml::xml_document<char>::parse_node<64>(
        boost::property_tree::detail::rapidxml::xml_document<char> *const this,
        char **text)
{
  char *v2; // rbp
  __int64 v4; // rax
  char v5; // dl
  boost::property_tree::detail::rapidxml::xml_node<char> *result; // rax
  _BYTE *v7; // rsi
  char v8; // dl
  _BYTE *v9; // rdi
  char v10; // al
  char v11; // al
  char v12; // al
  __int64 v13; // rax
  char v14; // dl
  char *v15; // rax
  char v16; // dl
  char v17; // cl
  unsigned __int64 exception; // rbp
  __int64 v19; // rax
  char *v20; // rax
  char v21; // dl
  char v22; // cl
  unsigned __int64 v23; // rbp
  __int64 v24; // rax
  char v25; // cl
  char v26; // dl
  char *v27; // rax
  char v28; // dl
  char v29; // cl
  char *v30; // rax
  char v31; // dl
  char v32; // si
  char v33; // si
  void *p_m_value; // rdi
  char v35; // dl
  char *v36; // rdx
  char v37; // dl
  unsigned __int64 v38; // rbp
  __int64 v39; // rax
  char v40; // cl
  __int64 v41; // rdx
  char v42; // cl
  __int64 v43; // rdx
  char v44; // cl
  __int64 v45; // rdx
  char v46; // cl
  __int64 v47; // rdx
  char v48; // cl
  boost::property_tree::detail::rapidxml::xml_document<char> *v49; // rdx
  char v50; // cl
  char *v51; // rax
  char v52; // dl
  char v53; // si
  char v54; // si
  void *p_m_parent; // rdi
  char v56; // dl
  char *v57; // rdx
  _BYTE *p_m_value_size; // rdi
  char v59; // dl
  unsigned __int64 v60; // rbp
  __int64 v61; // rax
  __int64 v62; // rdi
  char v63; // dl
  char v64; // dl
  char v65; // dl
  char v66; // dl
  char v67; // dl
  char v68; // dl
  char v69; // dl
  __int64 v70; // rdx
  char v71; // cl
  char *v72; // rax
  char v73; // dl
  int v74; // eax
  char v75; // cl
  unsigned __int64 v76; // rbp
  __int64 v77; // rax
  unsigned __int64 v78; // rbp
  __int64 v79; // rax
  unsigned __int64 v80; // rbp
  __int64 v81; // rax

  if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_8:
    v4 = __asan_report_load1(v4);
    goto LABEL_9;
  }
  v4 = (__int64)*text;
  v5 = *(_BYTE *)(((unsigned __int64)*text >> 3) + 0x7FFF8000);
  if ( v5 <= (*(_BYTE *)text & 7) && v5 )
    goto LABEL_8;
  if ( *(_BYTE *)v4 != 33 )
  {
    if ( *(_BYTE *)v4 != 63 )
      return boost::property_tree::detail::rapidxml::xml_document<char>::parse_element<64>(this, text);
LABEL_9:
    v7 = (_BYTE *)(v4 + 1);
    *text = (char *)(v4 + 1);
    v8 = *(_BYTE *)(((unsigned __int64)(v4 + 1) >> 3) + 0x7FFF8000);
    if ( v8 <= ((v4 + 1) & 7) && v8 )
    {
      v9 = (_BYTE *)(v4 + 1);
      __asan_report_load1(v4 + 1);
    }
    else
    {
      if ( *(_BYTE *)(v4 + 1) != 88 && *(_BYTE *)(v4 + 1) != 120 )
        goto LABEL_52;
      v9 = (_BYTE *)(v4 + 2);
      v10 = *(_BYTE *)(((unsigned __int64)(v4 + 2) >> 3) + 0x7FFF8000);
      if ( v10 > (((unsigned __int8)v7 + 1) & 7) || !v10 )
      {
        if ( v7[1] != 77 && v7[1] != 109 )
          goto LABEL_52;
        v9 = v7 + 2;
        v11 = *(_BYTE *)(((unsigned __int64)(v7 + 2) >> 3) + 0x7FFF8000);
        if ( v11 > (((unsigned __int8)v7 + 2) & 7) || !v11 )
        {
          if ( v7[2] != 76 && v7[2] != 108 )
            goto LABEL_52;
          v9 = v7 + 3;
          v12 = *(_BYTE *)(((unsigned __int64)(v7 + 3) >> 3) + 0x7FFF8000);
          if ( v12 > (((unsigned __int8)v7 + 3) & 7) || !v12 )
          {
            LOBYTE(v13) = v7[3];
            if ( (unsigned int)(char)v13 <= 0x7F )
            {
              v13 = (char)v13;
LABEL_22:
              v14 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v13] >> 3)
                             + 0x7FFF8000);
              if ( v14 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v13] & 7)
                && v14 )
              {
                v15 = (char *)__asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v13]);
                goto LABEL_32;
              }
              if ( boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v13] )
              {
                for ( *text = v7 + 4; ; *text = v15 + 1 )
                {
                  v15 = *text;
                  v16 = **text;
                  if ( v16 == 63 )
                  {
                    v17 = *(_BYTE *)(((unsigned __int64)(v15 + 1) >> 3) + 0x7FFF8000);
                    if ( v17 <= (((unsigned __int8)v15 + 1) & 7) && v17 )
                    {
                      __asan_report_load1(v15 + 1);
LABEL_39:
                      exception = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                      if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      v19 = (__int64)*text;
                      if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
                        v19 = __asan_report_store8();
                      *(_QWORD *)exception = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                      if ( *(_BYTE *)(((exception + 8) >> 3) + 0x7FFF8000) )
                        v19 = __asan_report_store8();
                      *(_QWORD *)(exception + 8) = "unexpected end of data";
                      if ( *(_BYTE *)(((exception + 16) >> 3) + 0x7FFF8000) )
                        v19 = __asan_report_store8();
                      *(_QWORD *)(exception + 16) = v19;
                      __asan_handle_no_return(exception + 16);
                      _cxa_throw(
                        (void *)exception,
                        (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                        (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                    }
LABEL_32:
                    if ( v15[1] == 62 )
                      break;
                  }
                  if ( !v16 )
                    goto LABEL_39;
                }
                *text = v15 + 2;
                return 0LL;
              }
              else
              {
LABEL_52:
                while ( 1 )
                {
                  v20 = *text;
                  v21 = **text;
                  if ( v21 == 63 )
                  {
                    v22 = *(_BYTE *)(((unsigned __int64)(v20 + 1) >> 3) + 0x7FFF8000);
                    if ( v22 <= (((unsigned __int8)v20 + 1) & 7) && v22 )
                    {
                      __asan_report_load1(v20 + 1);
LABEL_56:
                      v23 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                      if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      v24 = (__int64)*text;
                      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
                        v24 = __asan_report_store8();
                      *(_QWORD *)v23 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                      if ( *(_BYTE *)(((v23 + 8) >> 3) + 0x7FFF8000) )
                        v24 = __asan_report_store8();
                      *(_QWORD *)(v23 + 8) = "unexpected end of data";
                      if ( *(_BYTE *)(((v23 + 16) >> 3) + 0x7FFF8000) )
                        v24 = __asan_report_store8();
                      *(_QWORD *)(v23 + 16) = v24;
                      __asan_handle_no_return(v23 + 16);
                      _cxa_throw(
                        (void *)v23,
                        (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                        (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                    }
                    if ( v20[1] == 62 )
                      break;
                  }
                  if ( !v21 )
                    goto LABEL_56;
                  *text = v20 + 1;
                }
                *text = v20 + 2;
                return 0LL;
              }
            }
LABEL_30:
            v13 = 122LL;
            goto LABEL_22;
          }
LABEL_29:
          __asan_report_load1(v9);
          goto LABEL_30;
        }
LABEL_28:
        __asan_report_load1(v9);
        goto LABEL_29;
      }
    }
    __asan_report_load1(v9);
    goto LABEL_28;
  }
  v25 = *(_BYTE *)(((unsigned __int64)(v4 + 1) >> 3) + 0x7FFF8000);
  if ( v25 <= ((v4 + 1) & 7) && v25 )
  {
    this = (boost::property_tree::detail::rapidxml::xml_document<char> *const)(v4 + 1);
    v4 = __asan_report_load1(v4 + 1);
  }
  else
  {
    v26 = *(_BYTE *)(v4 + 1);
    if ( v26 == 68 )
      goto LABEL_188;
    if ( v26 == 91 )
      goto LABEL_122;
    if ( v26 != 45 )
    {
LABEL_71:
      for ( *text = (char *)(v4 + 1); ; *text = v27 + 1 )
      {
        v27 = *text;
        v28 = **text;
        if ( v28 == 62 )
          break;
        if ( !v28 )
        {
          v80 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
          if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v81 = (__int64)*text;
          if ( *(_BYTE *)((v80 >> 3) + 0x7FFF8000) )
            v81 = __asan_report_store8();
          *(_QWORD *)v80 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
          if ( *(_BYTE *)(((v80 + 8) >> 3) + 0x7FFF8000) )
            v81 = __asan_report_store8();
          *(_QWORD *)(v80 + 8) = "unexpected end of data";
          if ( *(_BYTE *)(((v80 + 16) >> 3) + 0x7FFF8000) )
            v81 = __asan_report_store8();
          *(_QWORD *)(v80 + 16) = v81;
          __asan_handle_no_return(v80 + 16);
          _cxa_throw(
            (void *)v80,
            (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
            (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
        }
      }
      *text = v27 + 1;
      return 0LL;
    }
  }
  v29 = *(_BYTE *)(((unsigned __int64)(v4 + 2) >> 3) + 0x7FFF8000);
  if ( v29 <= ((v4 + 2) & 7) && v29 )
  {
    this = (boost::property_tree::detail::rapidxml::xml_document<char> *const)(v4 + 2);
    v30 = (char *)__asan_report_load1(v4 + 2);
    goto LABEL_81;
  }
  if ( *(_BYTE *)(v4 + 2) != 45 )
    goto LABEL_71;
  v2 = (char *)(v4 + 3);
  for ( *text = (char *)(v4 + 3); ; *text = v30 + 1 )
  {
    v30 = *text;
    v31 = **text;
    if ( v31 == 45 )
    {
      v32 = *(_BYTE *)(((unsigned __int64)(v30 + 1) >> 3) + 0x7FFF8000);
      if ( v32 <= (((unsigned __int8)v30 + 1) & 7) && v32 )
      {
        this = (boost::property_tree::detail::rapidxml::xml_document<char> *const)(v30 + 1);
        v30 = (char *)__asan_report_load1(v30 + 1);
      }
      else
      {
LABEL_81:
        if ( v30[1] != 45 )
          goto LABEL_82;
      }
      v33 = *(_BYTE *)(((unsigned __int64)(v30 + 2) >> 3) + 0x7FFF8000);
      if ( v33 <= (((unsigned __int8)v30 + 2) & 7) && v33 )
      {
        __asan_report_load1(v30 + 2);
LABEL_104:
        v38 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
        if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v39 = (__int64)*text;
        if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
          v39 = __asan_report_store8();
        *(_QWORD *)v38 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
        if ( *(_BYTE *)(((v38 + 8) >> 3) + 0x7FFF8000) )
          v39 = __asan_report_store8();
        *(_QWORD *)(v38 + 8) = "unexpected end of data";
        if ( *(_BYTE *)(((v38 + 16) >> 3) + 0x7FFF8000) )
          v39 = __asan_report_store8();
        *(_QWORD *)(v38 + 16) = v39;
        __asan_handle_no_return(v38 + 16);
        _cxa_throw(
          (void *)v38,
          (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
          (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
      }
      if ( v30[2] == 62 )
        break;
    }
LABEL_82:
    if ( !v31 )
      goto LABEL_104;
  }
  result = (boost::property_tree::detail::rapidxml::xml_node<char> *)boost::property_tree::detail::rapidxml::memory_pool<char>::allocate_aligned(
                                                                       &this->boost::property_tree::detail::rapidxml::memory_pool<char>,
                                                                       0x60uLL);
  if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
  {
    p_m_value = result;
    __asan_report_store8();
    goto LABEL_114;
  }
  result->m_name = 0LL;
  p_m_value = &result->m_value;
  if ( *(_BYTE *)(((unsigned __int64)&result->m_value >> 3) + 0x7FFF8000) )
  {
LABEL_114:
    __asan_report_store8();
    goto LABEL_115;
  }
  result->m_value = 0LL;
  p_m_value = &result->m_parent;
  if ( *(_BYTE *)(((unsigned __int64)&result->m_parent >> 3) + 0x7FFF8000) )
  {
LABEL_115:
    __asan_report_store8();
LABEL_116:
    __asan_report_store4(p_m_value);
    goto LABEL_117;
  }
  result->m_parent = 0LL;
  p_m_value = &result->m_type;
  v35 = *(_BYTE *)(((unsigned __int64)&result->m_type >> 3) + 0x7FFF8000);
  if ( v35 && v35 <= 3 )
    goto LABEL_116;
  result->m_type = node_comment;
  if ( *(_BYTE *)(((unsigned __int64)&result->m_first_node >> 3) + 0x7FFF8000) )
  {
LABEL_117:
    __asan_report_store8();
    goto LABEL_118;
  }
  result->m_first_node = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&result->m_first_attribute >> 3) + 0x7FFF8000) )
  {
LABEL_118:
    __asan_report_store8();
    goto LABEL_119;
  }
  result->m_first_attribute = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
  {
LABEL_119:
    this = (boost::property_tree::detail::rapidxml::xml_document<char> *const)text;
    __asan_report_load8();
    goto LABEL_120;
  }
  v36 = (char *)(*text - v2);
  result->m_value = v2;
  this = (boost::property_tree::detail::rapidxml::xml_document<char> *const)&result->m_value_size;
  if ( *(_BYTE *)(((unsigned __int64)&result->m_value_size >> 3) + 0x7FFF8000) )
  {
LABEL_120:
    __asan_report_store8();
    goto LABEL_121;
  }
  result->m_value_size = (std::size_t)v36;
  this = (boost::property_tree::detail::rapidxml::xml_document<char> *const)*text;
  v37 = *(_BYTE *)(((unsigned __int64)*text >> 3) + 0x7FFF8000);
  if ( v37 > (*(_BYTE *)text & 7) || !v37 )
  {
    LOBYTE(this->m_name) = 0;
    *text += 3;
    return result;
  }
LABEL_121:
  v4 = __asan_report_store1(this, 96LL);
LABEL_122:
  v40 = *(_BYTE *)(((unsigned __int64)(v4 + 2) >> 3) + 0x7FFF8000);
  if ( v40 <= ((v4 + 2) & 7) && v40 )
  {
    __asan_report_load1(v4 + 2);
LABEL_142:
    __asan_report_load1(v41);
LABEL_143:
    __asan_report_load1(v43);
LABEL_144:
    __asan_report_load1(v45);
LABEL_145:
    __asan_report_load1(v47);
    goto LABEL_146;
  }
  if ( *(_BYTE *)(v4 + 2) != 67 )
    goto LABEL_71;
  v41 = v4 + 3;
  v42 = *(_BYTE *)(((unsigned __int64)(v4 + 3) >> 3) + 0x7FFF8000);
  if ( v42 <= ((v4 + 3) & 7) && v42 )
    goto LABEL_142;
  if ( *(_BYTE *)(v4 + 3) != 68 )
    goto LABEL_71;
  v43 = v4 + 4;
  v44 = *(_BYTE *)(((unsigned __int64)(v4 + 4) >> 3) + 0x7FFF8000);
  if ( v44 <= ((v4 + 4) & 7) && v44 )
    goto LABEL_143;
  if ( *(_BYTE *)(v4 + 4) != 65 )
    goto LABEL_71;
  v45 = v4 + 5;
  v46 = *(_BYTE *)(((unsigned __int64)(v4 + 5) >> 3) + 0x7FFF8000);
  if ( v46 <= ((v4 + 5) & 7) && v46 )
    goto LABEL_144;
  if ( *(_BYTE *)(v4 + 5) != 84 )
    goto LABEL_71;
  v47 = v4 + 6;
  v48 = *(_BYTE *)(((unsigned __int64)(v4 + 6) >> 3) + 0x7FFF8000);
  if ( v48 <= ((v4 + 6) & 7) && v48 )
    goto LABEL_145;
  if ( *(_BYTE *)(v4 + 6) != 65 )
    goto LABEL_71;
  v49 = (boost::property_tree::detail::rapidxml::xml_document<char> *)(v4 + 7);
  v50 = *(_BYTE *)(((unsigned __int64)(v4 + 7) >> 3) + 0x7FFF8000);
  if ( v50 <= ((v4 + 7) & 7) && v50 )
  {
LABEL_146:
    this = v49;
    v51 = (char *)__asan_report_load1(v49);
    goto LABEL_147;
  }
  if ( *(_BYTE *)(v4 + 7) != 91 )
    goto LABEL_71;
  v2 = (char *)(v4 + 8);
  *text = (char *)(v4 + 8);
  while ( 2 )
  {
    v51 = *text;
    v52 = **text;
    if ( v52 != 93 )
      goto LABEL_148;
    v53 = *(_BYTE *)(((unsigned __int64)(v51 + 1) >> 3) + 0x7FFF8000);
    if ( v53 <= (((unsigned __int8)v51 + 1) & 7) && v53 )
    {
      this = (boost::property_tree::detail::rapidxml::xml_document<char> *const)(v51 + 1);
      v51 = (char *)__asan_report_load1(v51 + 1);
      break;
    }
LABEL_147:
    if ( v51[1] != 93 )
    {
LABEL_148:
      if ( !v52 )
        goto LABEL_170;
      *text = v51 + 1;
      continue;
    }
    break;
  }
  v54 = *(_BYTE *)(((unsigned __int64)(v51 + 2) >> 3) + 0x7FFF8000);
  if ( v54 <= (((unsigned __int8)v51 + 2) & 7) && v54 )
  {
    __asan_report_load1(v51 + 2);
LABEL_170:
    v60 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
    if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v61 = (__int64)*text;
    if ( *(_BYTE *)((v60 >> 3) + 0x7FFF8000) )
      v61 = __asan_report_store8();
    *(_QWORD *)v60 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
    if ( *(_BYTE *)(((v60 + 8) >> 3) + 0x7FFF8000) )
      v61 = __asan_report_store8();
    *(_QWORD *)(v60 + 8) = "unexpected end of data";
    if ( *(_BYTE *)(((v60 + 16) >> 3) + 0x7FFF8000) )
      v61 = __asan_report_store8();
    *(_QWORD *)(v60 + 16) = v61;
    __asan_handle_no_return(v60 + 16);
    _cxa_throw(
      (void *)v60,
      (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
      (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
  }
  if ( v51[2] != 62 )
    goto LABEL_148;
  result = (boost::property_tree::detail::rapidxml::xml_node<char> *)boost::property_tree::detail::rapidxml::memory_pool<char>::allocate_aligned(
                                                                       &this->boost::property_tree::detail::rapidxml::memory_pool<char>,
                                                                       0x60uLL);
  if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
  {
    p_m_parent = result;
    __asan_report_store8();
    goto LABEL_180;
  }
  result->m_name = 0LL;
  p_m_parent = &result->m_value;
  if ( *(_BYTE *)(((unsigned __int64)&result->m_value >> 3) + 0x7FFF8000) )
  {
LABEL_180:
    __asan_report_store8();
    goto LABEL_181;
  }
  result->m_value = 0LL;
  p_m_parent = &result->m_parent;
  if ( *(_BYTE *)(((unsigned __int64)&result->m_parent >> 3) + 0x7FFF8000) )
  {
LABEL_181:
    __asan_report_store8();
LABEL_182:
    __asan_report_store4(p_m_parent);
    goto LABEL_183;
  }
  result->m_parent = 0LL;
  p_m_parent = &result->m_type;
  v56 = *(_BYTE *)(((unsigned __int64)&result->m_type >> 3) + 0x7FFF8000);
  if ( v56 && v56 <= 3 )
    goto LABEL_182;
  result->m_type = node_cdata;
  if ( *(_BYTE *)(((unsigned __int64)&result->m_first_node >> 3) + 0x7FFF8000) )
  {
LABEL_183:
    __asan_report_store8();
    goto LABEL_184;
  }
  result->m_first_node = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&result->m_first_attribute >> 3) + 0x7FFF8000) )
  {
LABEL_184:
    __asan_report_store8();
    goto LABEL_185;
  }
  result->m_first_attribute = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
  {
LABEL_185:
    p_m_value_size = text;
    __asan_report_load8();
    goto LABEL_186;
  }
  v57 = (char *)(*text - v2);
  result->m_value = v2;
  p_m_value_size = &result->m_value_size;
  if ( *(_BYTE *)(((unsigned __int64)&result->m_value_size >> 3) + 0x7FFF8000) )
  {
LABEL_186:
    __asan_report_store8();
    goto LABEL_187;
  }
  result->m_value_size = (std::size_t)v57;
  p_m_value_size = *text;
  v59 = *(_BYTE *)(((unsigned __int64)*text >> 3) + 0x7FFF8000);
  if ( v59 > (*(_BYTE *)text & 7) || !v59 )
  {
    *p_m_value_size = 0;
    *text += 3;
    return result;
  }
LABEL_187:
  v4 = __asan_report_store1(p_m_value_size, 96LL);
LABEL_188:
  v62 = v4 + 2;
  v63 = *(_BYTE *)(((unsigned __int64)(v4 + 2) >> 3) + 0x7FFF8000);
  if ( v63 <= ((v4 + 2) & 7) && v63 )
  {
    __asan_report_load1(v62);
LABEL_219:
    __asan_report_load1(v62);
LABEL_220:
    __asan_report_load1(v62);
LABEL_221:
    __asan_report_load1(v62);
LABEL_222:
    __asan_report_load1(v62);
LABEL_223:
    __asan_report_load1(v62);
LABEL_224:
    v4 = __asan_report_load1(v62);
    goto LABEL_225;
  }
  if ( *(_BYTE *)(v4 + 2) != 79 )
    goto LABEL_71;
  v62 = v4 + 3;
  v64 = *(_BYTE *)(((unsigned __int64)(v4 + 3) >> 3) + 0x7FFF8000);
  if ( v64 <= ((v4 + 3) & 7) && v64 )
    goto LABEL_219;
  if ( *(_BYTE *)(v4 + 3) != 67 )
    goto LABEL_71;
  v62 = v4 + 4;
  v65 = *(_BYTE *)(((unsigned __int64)(v4 + 4) >> 3) + 0x7FFF8000);
  if ( v65 <= ((v4 + 4) & 7) && v65 )
    goto LABEL_220;
  if ( *(_BYTE *)(v4 + 4) != 84 )
    goto LABEL_71;
  v62 = v4 + 5;
  v66 = *(_BYTE *)(((unsigned __int64)(v4 + 5) >> 3) + 0x7FFF8000);
  if ( v66 <= ((v4 + 5) & 7) && v66 )
    goto LABEL_221;
  if ( *(_BYTE *)(v4 + 5) != 89 )
    goto LABEL_71;
  v62 = v4 + 6;
  v67 = *(_BYTE *)(((unsigned __int64)(v4 + 6) >> 3) + 0x7FFF8000);
  if ( v67 <= ((v4 + 6) & 7) && v67 )
    goto LABEL_222;
  if ( *(_BYTE *)(v4 + 6) != 80 )
    goto LABEL_71;
  v62 = v4 + 7;
  v68 = *(_BYTE *)(((unsigned __int64)(v4 + 7) >> 3) + 0x7FFF8000);
  if ( v68 <= ((v4 + 7) & 7) && v68 )
    goto LABEL_223;
  if ( *(_BYTE *)(v4 + 7) != 69 )
    goto LABEL_71;
  v62 = v4 + 8;
  v69 = *(_BYTE *)(((unsigned __int64)(v4 + 8) >> 3) + 0x7FFF8000);
  if ( v69 <= ((v4 + 8) & 7) && v69 )
    goto LABEL_224;
  LOBYTE(v70) = *(_BYTE *)(v4 + 8);
  if ( (unsigned int)(char)v70 > 0x7F )
  {
LABEL_225:
    v70 = 122LL;
    goto LABEL_210;
  }
  v70 = (char)v70;
LABEL_210:
  v71 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v70] >> 3)
                 + 0x7FFF8000);
  if ( v71 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v70] & 7)
    && v71 )
  {
    v72 = (char *)__asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v70]);
    goto LABEL_227;
  }
  if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v70] )
    goto LABEL_71;
  *text = (char *)(v4 + 9);
  while ( 1 )
  {
    v72 = *text;
    v73 = **text;
    if ( v73 == 62 )
      break;
    if ( !v73 )
    {
      v78 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
      if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v79 = (__int64)*text;
      if ( *(_BYTE *)((v78 >> 3) + 0x7FFF8000) )
        v79 = __asan_report_store8();
      *(_QWORD *)v78 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
      if ( *(_BYTE *)(((v78 + 8) >> 3) + 0x7FFF8000) )
        v79 = __asan_report_store8();
      *(_QWORD *)(v78 + 8) = "unexpected end of data";
      if ( *(_BYTE *)(((v78 + 16) >> 3) + 0x7FFF8000) )
        v79 = __asan_report_store8();
      *(_QWORD *)(v78 + 16) = v79;
      __asan_handle_no_return(v78 + 16);
      _cxa_throw(
        (void *)v78,
        (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
        (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
    }
    if ( v73 == 91 )
    {
LABEL_227:
      *text = v72 + 1;
      v74 = 1;
      while ( v74 > 0 )
      {
        v75 = **text;
        if ( v75 == 93 )
        {
          --v74;
        }
        else if ( v75 <= 93 )
        {
          if ( !v75 )
          {
            v76 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
            if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v77 = (__int64)*text;
            if ( *(_BYTE *)((v76 >> 3) + 0x7FFF8000) )
              v77 = __asan_report_store8();
            *(_QWORD *)v76 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
            if ( *(_BYTE *)(((v76 + 8) >> 3) + 0x7FFF8000) )
              v77 = __asan_report_store8();
            *(_QWORD *)(v76 + 8) = "unexpected end of data";
            if ( *(_BYTE *)(((v76 + 16) >> 3) + 0x7FFF8000) )
              v77 = __asan_report_store8();
            *(_QWORD *)(v76 + 16) = v77;
            __asan_handle_no_return(v76 + 16);
            _cxa_throw(
              (void *)v76,
              (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
              (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
          }
          if ( v75 == 91 )
            ++v74;
        }
        ++*text;
      }
    }
    else
    {
      *text = v72 + 1;
    }
  }
  *text = v72 + 1;
  return 0LL;
};

// Line 2165: range 000000000C29DF10-000000000C29F980
void __fastcall boost::property_tree::detail::rapidxml::xml_document<char>::parse_node_contents<0>(
        boost::property_tree::detail::rapidxml::xml_document<char> *const this,
        char **text,
        boost::property_tree::detail::rapidxml::xml_node<char> *node)
{
  char *v6; // rax
  __int64 v7; // rax
  void *v8; // rdi
  char *v9; // r12
  char v10; // al
  char v11; // al
  char v12; // dl
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  char v15; // dl
  char v16; // cl
  __int64 v17; // rdx
  char v18; // dl
  char v19; // cl
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdi
  char v23; // dl
  boost::property_tree::detail::rapidxml::xml_node<char> *m_last_node; // rdx
  unsigned __int64 exception; // rbx
  __int64 v26; // rax
  char **v27; // rdi
  unsigned __int64 v28; // rax
  __int64 i; // rdx
  char v30; // dl
  char v31; // cl
  unsigned __int64 v32; // rsi
  unsigned __int64 j; // rbx
  __int64 v34; // rdx
  char v35; // dl
  char v36; // dl
  unsigned __int64 v37; // rdi
  char v38; // dl
  char v39; // dl
  char v40; // dl
  char v41; // dl
  char v42; // dl
  _BYTE *v43; // rdi
  char v44; // dl
  char v45; // dl
  char v46; // dl
  char v47; // dl
  char v48; // dl
  char v49; // dl
  char v50; // cl
  char v51; // cl
  char v52; // dl
  unsigned __int64 v53; // rdi
  char v54; // dl
  char v55; // dl
  char v56; // dl
  unsigned __int64 v57; // rdi
  char v58; // dl
  char v59; // dl
  char v60; // dl
  char v61; // dl
  unsigned __int64 v62; // r15
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  int v65; // eax
  unsigned __int8 v66; // al
  char v67; // dl
  char v68; // dl
  char v69; // dl
  _BYTE *v70; // rdi
  char v71; // dl
  char v72; // dl
  _BYTE *v73; // rdi
  char v74; // dl
  char v75; // dl
  char v76; // dl
  _BYTE *v77; // rdi
  char v78; // dl
  char v79; // dl
  char v80; // dl
  char v81; // dl
  unsigned __int64 v82; // rbp
  int v83; // eax
  unsigned __int8 v84; // al
  char v85; // dl
  char v86; // dl
  char v87; // dl
  char v88; // al
  _BYTE *v89; // rdi
  char v90; // dl
  char v91; // dl
  _BYTE *v92; // rdi
  char v93; // dl
  char v94; // dl
  char v95; // dl
  _BYTE *v96; // rdi
  char v97; // dl
  char v98; // dl
  char v99; // dl
  char v100; // dl
  unsigned __int64 v101; // rbp
  unsigned __int64 v102; // rbx
  char v103; // dl
  char v104; // cl
  char v105; // dl
  char **p_m_ptr; // rdi
  unsigned __int64 v107; // rax
  boost::property_tree::detail::rapidxml::memory_pool<char>::boost_ptree_raw_alloc_func *m_alloc_func; // rax
  char *v109; // rax
  char **v110; // rdx
  boost::property_tree::detail::rapidxml::memory_pool<char> *p_m_end; // rdi
  _QWORD *v112; // rdx
  char *v113; // rax
  char v114; // dl
  std::size_t v115; // rcx
  boost::property_tree::detail::rapidxml::xml_node<char> *v116; // rdx
  char *m_value; // rax
  char **p_m_value_size; // rdi
  char v119; // dl
  unsigned __int64 v120; // rsi
  char v121; // dl
  char v122; // dl

  while ( 1 )
  {
    v8 = text;
    if ( !*(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
      break;
    __asan_report_load8();
LABEL_3:
    __asan_report_load1(v8);
LABEL_4:
    __asan_report_load8();
LABEL_5:
    if ( v6[1] == 47 )
      goto LABEL_17;
    *text = v6 + 1;
    v7 = (__int64)boost::property_tree::detail::rapidxml::xml_document<char>::parse_node<0>(this, text);
    if ( v7 )
    {
      v22 = v7 + 32;
      if ( *(_BYTE *)(((unsigned __int64)(v7 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
LABEL_68:
        __asan_report_load4(v22);
LABEL_69:
        __asan_handle_no_return(v22);
        __assert_fail(
          "child && !child->parent() && child->type() != node_document",
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/proper"
          "ty_tree/detail/rapidxml.hpp",
          0x43Bu,
          "void boost::property_tree::detail::rapidxml::xml_node<Ch>::append_node(boost::property_tree::detail::rapidxml:"
          ":xml_node<Ch>*) [with Ch = char]");
      }
      if ( *(_QWORD *)(v7 + 32) )
        goto LABEL_69;
      v22 = v7 + 40;
      v23 = *(_BYTE *)(((unsigned __int64)(v7 + 40) >> 3) + 0x7FFF8000);
      if ( v23 && v23 <= 3 )
        goto LABEL_68;
      if ( !*(_DWORD *)(v7 + 40) )
        goto LABEL_69;
      if ( *(_BYTE *)(((unsigned __int64)&node->m_first_node >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
LABEL_71:
        __asan_report_load8();
LABEL_72:
        __asan_report_store8();
LABEL_73:
        v7 = __asan_report_store8();
        goto LABEL_74;
      }
      if ( node->m_first_node )
      {
        if ( *(_BYTE *)(((unsigned __int64)&node->m_last_node >> 3) + 0x7FFF8000) )
          goto LABEL_71;
        m_last_node = node->m_last_node;
        if ( *(_BYTE *)(((unsigned __int64)(v7 + 80) >> 3) + 0x7FFF8000) )
          goto LABEL_72;
        *(_QWORD *)(v7 + 80) = m_last_node;
        if ( !*(_BYTE *)(((unsigned __int64)&m_last_node->m_next_sibling >> 3) + 0x7FFF8000) )
        {
          m_last_node->m_next_sibling = (boost::property_tree::detail::rapidxml::xml_node<char> *)v7;
          goto LABEL_63;
        }
        goto LABEL_73;
      }
LABEL_74:
      if ( *(_BYTE *)(((unsigned __int64)(v7 + 80) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store8();
LABEL_77:
        __asan_report_store8();
LABEL_78:
        __asan_report_store8();
LABEL_79:
        __asan_report_store8();
LABEL_80:
        exception = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
        if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v26 = (__int64)*text;
        if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
          v26 = __asan_report_store8();
        *(_QWORD *)exception = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
        if ( *(_BYTE *)(((exception + 8) >> 3) + 0x7FFF8000) )
          v26 = __asan_report_store8();
        *(_QWORD *)(exception + 8) = "unexpected end of data";
        if ( *(_BYTE *)(((exception + 16) >> 3) + 0x7FFF8000) )
          v26 = __asan_report_store8();
        *(_QWORD *)(exception + 16) = v26;
        __asan_handle_no_return(exception + 16);
        _cxa_throw(
          (void *)exception,
          (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
          (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
      }
      *(_QWORD *)(v7 + 80) = 0LL;
      node->m_first_node = (boost::property_tree::detail::rapidxml::xml_node<char> *)v7;
LABEL_63:
      if ( *(_BYTE *)(((unsigned __int64)&node->m_last_node >> 3) + 0x7FFF8000) )
        goto LABEL_77;
      node->m_last_node = (boost::property_tree::detail::rapidxml::xml_node<char> *)v7;
      if ( *(_BYTE *)(((unsigned __int64)(v7 + 32) >> 3) + 0x7FFF8000) )
        goto LABEL_78;
      *(_QWORD *)(v7 + 32) = node;
      if ( *(_BYTE *)(((unsigned __int64)(v7 + 88) >> 3) + 0x7FFF8000) )
        goto LABEL_79;
      *(_QWORD *)(v7 + 88) = 0LL;
    }
  }
  v9 = *text;
  v8 = *text;
  v10 = *(_BYTE *)(((unsigned __int64)*text >> 3) + 0x7FFF8000);
  if ( v10 <= (*(_BYTE *)text & 7) && v10 )
    goto LABEL_3;
  v11 = *v9;
  while ( 1 )
  {
    if ( !v11 )
      goto LABEL_80;
    if ( v11 == 60 )
      break;
    v27 = text;
    if ( !*(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
    {
      *text = v9;
      v28 = (unsigned __int64)v9;
      goto LABEL_96;
    }
    __asan_report_store8();
LABEL_92:
    v28 = __asan_report_load1(v27);
LABEL_93:
    for ( i = 122LL; ; i = (char)i )
    {
      v31 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text_pure_no_ws[i] >> 3)
                     + 0x7FFF8000);
      v32 = (unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text_pure_no_ws[i] & 7;
      if ( v31 <= (char)v32 )
      {
        if ( v31 )
          break;
      }
      if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text_pure_no_ws[i] )
        goto LABEL_103;
      ++v28;
LABEL_96:
      v27 = (char **)v28;
      v30 = *(_BYTE *)((v28 >> 3) + 0x7FFF8000);
      if ( v30 <= (char)(v28 & 7) && v30 )
        goto LABEL_92;
      LOBYTE(i) = *(_BYTE *)v28;
      if ( (unsigned int)*(char *)v28 > 0x7F )
        goto LABEL_93;
    }
    v28 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text_pure_no_ws[i]);
LABEL_103:
    *text = (char *)v28;
    for ( j = v28; ; j = (unsigned __int64)v43 )
    {
      v103 = *(_BYTE *)((v28 >> 3) + 0x7FFF8000);
      if ( v103 <= (char)(v28 & 7) && v103 )
      {
        v28 = __asan_report_load1(v28);
      }
      else
      {
        v32 = *(unsigned __int8 *)v28;
        if ( (unsigned int)(char)v32 <= 0x7F )
        {
          v34 = (char)v32;
          goto LABEL_323;
        }
      }
      v34 = 122LL;
LABEL_323:
      v104 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text[v34] >> 3)
                      + 0x7FFF8000);
      if ( v104 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text[v34] & 7)
        && v104 )
      {
        v28 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text[v34]);
      }
      else
      {
        if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text[v34] )
          goto LABEL_330;
        if ( (_BYTE)v32 != 38 )
          goto LABEL_327;
      }
      v35 = *(_BYTE *)(((v28 + 1) >> 3) + 0x7FFF8000);
      if ( v35 <= (char)((v28 + 1) & 7) && v35 )
      {
        v28 = __asan_report_load1(v28 + 1);
LABEL_129:
        if ( v36 == 35 )
          goto LABEL_193;
        if ( v36 != 97 )
          goto LABEL_327;
        v44 = *(_BYTE *)(((v28 + 2) >> 3) + 0x7FFF8000);
        if ( v44 <= (char)((v28 + 2) & 7) && v44 )
        {
          v28 = __asan_report_load1(v28 + 2);
        }
        else
        {
          v45 = *(_BYTE *)(v28 + 2);
          if ( v45 != 109 )
            goto LABEL_134;
        }
        v37 = v28 + 3;
        v50 = *(_BYTE *)(((v28 + 3) >> 3) + 0x7FFF8000);
        if ( v50 <= (char)((v28 + 3) & 7) && v50 )
        {
          __asan_report_load1(v37);
        }
        else
        {
          if ( *(_BYTE *)(v28 + 3) != 112 )
            goto LABEL_134;
          v37 = v28 + 4;
          v51 = *(_BYTE *)(((v28 + 4) >> 3) + 0x7FFF8000);
          if ( v51 > (char)((v28 + 4) & 7) || !v51 )
          {
            if ( *(_BYTE *)(v28 + 4) == 59 )
            {
              v37 = j;
              v52 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
              if ( v52 > (char)(j & 7) || !v52 )
              {
                *(_BYTE *)j = 38;
                v43 = (_BYTE *)(j + 1);
                v28 += 5LL;
                continue;
              }
LABEL_159:
              __asan_report_store1(v37, v32);
LABEL_160:
              __asan_report_load1(v37);
              goto LABEL_161;
            }
LABEL_134:
            if ( v45 != 112 )
              goto LABEL_327;
            v37 = v28 + 3;
            v46 = *(_BYTE *)(((v28 + 3) >> 3) + 0x7FFF8000);
            if ( v46 <= (char)((v28 + 3) & 7) && v46 )
              goto LABEL_160;
            if ( *(_BYTE *)(v28 + 3) != 111 )
              goto LABEL_327;
            v37 = v28 + 4;
            v47 = *(_BYTE *)(((v28 + 4) >> 3) + 0x7FFF8000);
            if ( v47 <= (char)((v28 + 4) & 7) && v47 )
            {
LABEL_161:
              __asan_report_load1(v37);
            }
            else
            {
              if ( *(_BYTE *)(v28 + 4) != 115 )
                goto LABEL_327;
              v37 = v28 + 5;
              v48 = *(_BYTE *)(((v28 + 5) >> 3) + 0x7FFF8000);
              if ( v48 > (char)((v28 + 5) & 7) || !v48 )
              {
                if ( *(_BYTE *)(v28 + 5) != 59 )
                  goto LABEL_327;
                v37 = j;
                v49 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
                if ( v49 > (char)(j & 7) || !v49 )
                {
                  *(_BYTE *)j = 39;
                  v43 = (_BYTE *)(j + 1);
                  v28 += 6LL;
                  continue;
                }
LABEL_163:
                __asan_report_store1(v37, v32);
LABEL_164:
                __asan_report_load1(v37);
LABEL_165:
                __asan_report_load1(v37);
LABEL_166:
                __asan_report_load1(v37);
LABEL_167:
                __asan_report_load1(v37);
LABEL_168:
                v28 = __asan_report_store1(v37, v32);
                goto LABEL_169;
              }
            }
            __asan_report_load1(v37);
            goto LABEL_163;
          }
        }
        __asan_report_load1(v37);
        goto LABEL_159;
      }
      v36 = *(_BYTE *)(v28 + 1);
      if ( v36 != 103 )
      {
        if ( v36 <= 103 )
          goto LABEL_129;
        if ( v36 == 108 )
          goto LABEL_181;
        if ( v36 != 113 )
          goto LABEL_327;
        v37 = v28 + 2;
        v38 = *(_BYTE *)(((v28 + 2) >> 3) + 0x7FFF8000);
        if ( v38 <= (char)((v28 + 2) & 7) && v38 )
          goto LABEL_164;
        if ( *(_BYTE *)(v28 + 2) != 117 )
          goto LABEL_327;
        v37 = v28 + 3;
        v39 = *(_BYTE *)(((v28 + 3) >> 3) + 0x7FFF8000);
        if ( v39 <= (char)((v28 + 3) & 7) && v39 )
          goto LABEL_165;
        if ( *(_BYTE *)(v28 + 3) != 111 )
          goto LABEL_327;
        v37 = v28 + 4;
        v40 = *(_BYTE *)(((v28 + 4) >> 3) + 0x7FFF8000);
        if ( v40 <= (char)((v28 + 4) & 7) && v40 )
          goto LABEL_166;
        if ( *(_BYTE *)(v28 + 4) != 116 )
          goto LABEL_327;
        v37 = v28 + 5;
        v41 = *(_BYTE *)(((v28 + 5) >> 3) + 0x7FFF8000);
        if ( v41 <= (char)((v28 + 5) & 7) && v41 )
          goto LABEL_167;
        if ( *(_BYTE *)(v28 + 5) != 59 )
          goto LABEL_327;
        v37 = j;
        v42 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
        if ( v42 > (char)(j & 7) || !v42 )
        {
          *(_BYTE *)j = 34;
          v43 = (_BYTE *)(j + 1);
          v28 += 6LL;
          continue;
        }
        goto LABEL_168;
      }
LABEL_169:
      v53 = v28 + 2;
      v54 = *(_BYTE *)(((v28 + 2) >> 3) + 0x7FFF8000);
      if ( v54 <= (char)((v28 + 2) & 7) && v54 )
      {
        __asan_report_load1(v53);
      }
      else
      {
        if ( *(_BYTE *)(v28 + 2) != 116 )
          goto LABEL_327;
        v53 = v28 + 3;
        v55 = *(_BYTE *)(((v28 + 3) >> 3) + 0x7FFF8000);
        if ( v55 > (char)((v28 + 3) & 7) || !v55 )
        {
          if ( *(_BYTE *)(v28 + 3) != 59 )
            goto LABEL_327;
          v53 = j;
          v56 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
          if ( v56 > (char)(j & 7) || !v56 )
          {
            *(_BYTE *)j = 62;
            v43 = (_BYTE *)(j + 1);
            v28 += 4LL;
            continue;
          }
          goto LABEL_180;
        }
      }
      __asan_report_load1(v53);
LABEL_180:
      v28 = __asan_report_store1(v53, v32);
LABEL_181:
      v57 = v28 + 2;
      v58 = *(_BYTE *)(((v28 + 2) >> 3) + 0x7FFF8000);
      if ( v58 <= (char)((v28 + 2) & 7) && v58 )
      {
        __asan_report_load1(v57);
LABEL_191:
        __asan_report_load1(v57);
LABEL_192:
        v28 = __asan_report_store1(v57, v32);
LABEL_193:
        v61 = *(_BYTE *)(((v28 + 2) >> 3) + 0x7FFF8000);
        if ( v61 <= (char)((v28 + 2) & 7) && v61 )
        {
          v28 = __asan_report_load1(v28 + 2);
        }
        else if ( *(_BYTE *)(v28 + 2) != 120 )
        {
          v62 = v28 + 2;
          v63 = 0LL;
          while ( 1 )
          {
            v85 = *(_BYTE *)((v62 >> 3) + 0x7FFF8000);
            if ( v85 <= (char)(v62 & 7) && v85 )
            {
              v83 = __asan_report_load1(v62);
            }
            else
            {
              v83 = *(unsigned __int8 *)v62;
              v86 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v62] >> 3)
                             + 0x7FFF8000);
              v32 = (unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v62] & 7;
              if ( v86 <= (char)v32 && v86 )
              {
                __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v62]);
LABEL_260:
                if ( v63 <= 0x7F )
                {
                  v87 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
                  if ( v87 > (char)(j & 7) || !v87 )
                  {
                    *(_BYTE *)j = v63;
                    v43 = (_BYTE *)(j + 1);
                    goto LABEL_264;
                  }
                  __asan_report_store1(j, v32);
                }
                if ( v63 <= 0x7FF )
                {
                  v89 = (_BYTE *)(j + 1);
                  v90 = *(_BYTE *)(((j + 1) >> 3) + 0x7FFF8000);
                  v32 = ((_BYTE)j + 1) & 7;
                  if ( v90 <= (char)v32 && v90 )
                  {
                    __asan_report_store1(v89, v32);
                  }
                  else
                  {
                    *(_BYTE *)(j + 1) = v63 & 0x3F | 0x80;
                    v89 = (_BYTE *)j;
                    v91 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
                    if ( v91 > (char)(j & 7) || !v91 )
                    {
                      *(_BYTE *)j = (v63 >> 6) | 0xC0;
                      v43 = (_BYTE *)(j + 2);
                      goto LABEL_264;
                    }
                  }
                  __asan_report_store1(v89, v32);
                }
                if ( v63 > 0xFFFF )
                  goto LABEL_288;
                v92 = (_BYTE *)(j + 2);
                v93 = *(_BYTE *)(((j + 2) >> 3) + 0x7FFF8000);
                v32 = ((_BYTE)j + 2) & 7;
                if ( v93 <= (char)v32 && v93 )
                {
                  __asan_report_store1(v92, v32);
                }
                else
                {
                  *(_BYTE *)(j + 2) = v63 & 0x3F | 0x80;
                  v92 = (_BYTE *)(j + 1);
                  v94 = *(_BYTE *)(((j + 1) >> 3) + 0x7FFF8000);
                  v32 = ((_BYTE)j + 1) & 7;
                  if ( v94 > (char)v32 || !v94 )
                  {
                    *(_BYTE *)(j + 1) = (v63 >> 6) & 0x3F | 0x80;
                    v92 = (_BYTE *)j;
                    v95 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
                    if ( v95 > (char)(j & 7) || !v95 )
                    {
                      *(_BYTE *)j = (v63 >> 12) | 0xE0;
                      v43 = (_BYTE *)(j + 3);
                      goto LABEL_264;
                    }
LABEL_287:
                    __asan_report_store1(v92, v32);
LABEL_288:
                    if ( v63 > 0x10FFFF )
                      goto LABEL_302;
                    v96 = (_BYTE *)(j + 3);
                    v97 = *(_BYTE *)(((j + 3) >> 3) + 0x7FFF8000);
                    v32 = ((_BYTE)j + 3) & 7;
                    if ( v97 <= (char)v32 && v97 )
                    {
                      __asan_report_store1(v96, v32);
                    }
                    else
                    {
                      *(_BYTE *)(j + 3) = v63 & 0x3F | 0x80;
                      v96 = (_BYTE *)(j + 2);
                      v98 = *(_BYTE *)(((j + 2) >> 3) + 0x7FFF8000);
                      v32 = ((_BYTE)j + 2) & 7;
                      if ( v98 > (char)v32 || !v98 )
                      {
                        *(_BYTE *)(j + 2) = (v63 >> 6) & 0x3F | 0x80;
                        v96 = (_BYTE *)(j + 1);
                        v99 = *(_BYTE *)(((j + 1) >> 3) + 0x7FFF8000);
                        v32 = ((_BYTE)j + 1) & 7;
                        if ( v99 > (char)v32 || !v99 )
                        {
                          *(_BYTE *)(j + 1) = (v63 >> 12) & 0x3F | 0x80;
                          v96 = (_BYTE *)j;
                          v100 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
                          if ( v100 > (char)(j & 7) || !v100 )
                          {
                            *(_BYTE *)j = (v63 >> 18) | 0xF0;
                            v43 = (_BYTE *)(j + 4);
                            goto LABEL_264;
                          }
LABEL_301:
                          __asan_report_store1(v96, v32);
LABEL_302:
                          v101 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                          if ( *(_BYTE *)((v101 >> 3) + 0x7FFF8000) )
                            __asan_report_store8();
                          *(_QWORD *)v101 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                          if ( *(_BYTE *)(((v101 + 8) >> 3) + 0x7FFF8000) )
                            __asan_report_store8();
                          *(_QWORD *)(v101 + 8) = "invalid numeric character entity";
                          if ( *(_BYTE *)(((v101 + 16) >> 3) + 0x7FFF8000) )
                            __asan_report_store8();
                          *(_QWORD *)(v101 + 16) = j;
                          __asan_handle_no_return(v101 + 16);
                          _cxa_throw(
                            (void *)v101,
                            (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                            (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                        }
LABEL_300:
                        __asan_report_store1(v96, v32);
                        goto LABEL_301;
                      }
                    }
                    __asan_report_store1(v96, v32);
                    goto LABEL_300;
                  }
                }
                __asan_report_store1(v92, v32);
                goto LABEL_287;
              }
            }
            v84 = boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[v83];
            if ( v84 == 0xFF )
              goto LABEL_260;
            v63 = v84 + 10 * v63;
            ++v62;
          }
        }
        v62 = v28 + 3;
        v64 = 0LL;
        while ( 1 )
        {
          v67 = *(_BYTE *)((v62 >> 3) + 0x7FFF8000);
          if ( v67 <= (char)(v62 & 7) && v67 )
          {
            v65 = __asan_report_load1(v62);
          }
          else
          {
            v65 = *(unsigned __int8 *)v62;
            v68 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v62] >> 3)
                           + 0x7FFF8000);
            v32 = (unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v62] & 7;
            if ( v68 <= (char)v32 && v68 )
            {
              __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v62]);
LABEL_207:
              if ( v64 <= 0x7F )
              {
                v69 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
                if ( v69 > (char)(j & 7) || !v69 )
                {
                  *(_BYTE *)j = v64;
                  v43 = (_BYTE *)(j + 1);
LABEL_264:
                  v88 = *(_BYTE *)((v62 >> 3) + 0x7FFF8000);
                  if ( v88 <= (char)(v62 & 7) && v88 )
                  {
                    __asan_report_load1(v62);
                  }
                  else if ( *(_BYTE *)v62 == 59 )
                  {
                    v28 = v62 + 1;
                    goto LABEL_318;
                  }
                  v102 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                  if ( *(_BYTE *)((v102 >> 3) + 0x7FFF8000) )
                    __asan_report_store8();
                  *(_QWORD *)v102 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                  if ( *(_BYTE *)(((v102 + 8) >> 3) + 0x7FFF8000) )
                    __asan_report_store8();
                  *(_QWORD *)(v102 + 8) = "expected ;";
                  if ( *(_BYTE *)(((v102 + 16) >> 3) + 0x7FFF8000) )
                    __asan_report_store8();
                  *(_QWORD *)(v102 + 16) = v62;
                  __asan_handle_no_return(v102 + 16);
                  _cxa_throw(
                    (void *)v102,
                    (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                    (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                }
                __asan_report_store1(j, v32);
              }
              if ( v64 <= 0x7FF )
              {
                v70 = (_BYTE *)(j + 1);
                v71 = *(_BYTE *)(((j + 1) >> 3) + 0x7FFF8000);
                v32 = ((_BYTE)j + 1) & 7;
                if ( v71 <= (char)v32 && v71 )
                {
                  __asan_report_store1(v70, v32);
                }
                else
                {
                  *(_BYTE *)(j + 1) = v64 & 0x3F | 0x80;
                  v70 = (_BYTE *)j;
                  v72 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
                  if ( v72 > (char)(j & 7) || !v72 )
                  {
                    *(_BYTE *)j = (v64 >> 6) | 0xC0;
                    v43 = (_BYTE *)(j + 2);
                    goto LABEL_264;
                  }
                }
                __asan_report_store1(v70, v32);
              }
              if ( v64 > 0xFFFF )
                goto LABEL_231;
              v73 = (_BYTE *)(j + 2);
              v74 = *(_BYTE *)(((j + 2) >> 3) + 0x7FFF8000);
              v32 = ((_BYTE)j + 2) & 7;
              if ( v74 <= (char)v32 && v74 )
              {
                __asan_report_store1(v73, v32);
              }
              else
              {
                *(_BYTE *)(j + 2) = v64 & 0x3F | 0x80;
                v73 = (_BYTE *)(j + 1);
                v75 = *(_BYTE *)(((j + 1) >> 3) + 0x7FFF8000);
                v32 = ((_BYTE)j + 1) & 7;
                if ( v75 > (char)v32 || !v75 )
                {
                  *(_BYTE *)(j + 1) = (v64 >> 6) & 0x3F | 0x80;
                  v73 = (_BYTE *)j;
                  v76 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
                  if ( v76 > (char)(j & 7) || !v76 )
                  {
                    *(_BYTE *)j = (v64 >> 12) | 0xE0;
                    v43 = (_BYTE *)(j + 3);
                    goto LABEL_264;
                  }
LABEL_230:
                  __asan_report_store1(v73, v32);
LABEL_231:
                  if ( v64 > 0x10FFFF )
                    goto LABEL_245;
                  v77 = (_BYTE *)(j + 3);
                  v78 = *(_BYTE *)(((j + 3) >> 3) + 0x7FFF8000);
                  v32 = ((_BYTE)j + 3) & 7;
                  if ( v78 <= (char)v32 && v78 )
                  {
                    __asan_report_store1(v77, v32);
                  }
                  else
                  {
                    *(_BYTE *)(j + 3) = v64 & 0x3F | 0x80;
                    v77 = (_BYTE *)(j + 2);
                    v79 = *(_BYTE *)(((j + 2) >> 3) + 0x7FFF8000);
                    v32 = ((_BYTE)j + 2) & 7;
                    if ( v79 > (char)v32 || !v79 )
                    {
                      *(_BYTE *)(j + 2) = (v64 >> 6) & 0x3F | 0x80;
                      v77 = (_BYTE *)(j + 1);
                      v80 = *(_BYTE *)(((j + 1) >> 3) + 0x7FFF8000);
                      v32 = ((_BYTE)j + 1) & 7;
                      if ( v80 > (char)v32 || !v80 )
                      {
                        *(_BYTE *)(j + 1) = (v64 >> 12) & 0x3F | 0x80;
                        v77 = (_BYTE *)j;
                        v81 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
                        if ( v81 > (char)(j & 7) || !v81 )
                        {
                          *(_BYTE *)j = (v64 >> 18) | 0xF0;
                          v43 = (_BYTE *)(j + 4);
                          goto LABEL_264;
                        }
LABEL_244:
                        __asan_report_store1(v77, v32);
LABEL_245:
                        v82 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                        if ( *(_BYTE *)((v82 >> 3) + 0x7FFF8000) )
                          __asan_report_store8();
                        *(_QWORD *)v82 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                        if ( *(_BYTE *)(((v82 + 8) >> 3) + 0x7FFF8000) )
                          __asan_report_store8();
                        *(_QWORD *)(v82 + 8) = "invalid numeric character entity";
                        if ( *(_BYTE *)(((v82 + 16) >> 3) + 0x7FFF8000) )
                          __asan_report_store8();
                        *(_QWORD *)(v82 + 16) = j;
                        __asan_handle_no_return(v82 + 16);
                        _cxa_throw(
                          (void *)v82,
                          (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                          (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                      }
LABEL_243:
                      __asan_report_store1(v77, v32);
                      goto LABEL_244;
                    }
                  }
                  __asan_report_store1(v77, v32);
                  goto LABEL_243;
                }
              }
              __asan_report_store1(v73, v32);
              goto LABEL_230;
            }
          }
          v66 = boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[v65];
          if ( v66 == 0xFF )
            goto LABEL_207;
          v64 = v66 + 16 * v64;
          ++v62;
        }
      }
      if ( *(_BYTE *)(v28 + 2) == 116 )
      {
        v57 = v28 + 3;
        v59 = *(_BYTE *)(((v28 + 3) >> 3) + 0x7FFF8000);
        if ( v59 <= (char)((v28 + 3) & 7) && v59 )
          goto LABEL_191;
        if ( *(_BYTE *)(v28 + 3) == 59 )
        {
          v57 = j;
          v60 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
          if ( v60 > (char)(j & 7) || !v60 )
          {
            *(_BYTE *)j = 60;
            v43 = (_BYTE *)(j + 1);
            v28 += 4LL;
            continue;
          }
          goto LABEL_192;
        }
      }
LABEL_327:
      ++v28;
      v43 = (_BYTE *)(j + 1);
      v105 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
      if ( v105 <= (char)(j & 7) )
      {
        if ( v105 )
          break;
      }
      *(_BYTE *)j = v32;
LABEL_318:
      ;
    }
    v28 = __asan_report_store1(j, v32);
LABEL_330:
    *text = (char *)v28;
    p_m_ptr = &this->m_ptr;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ptr >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_375:
      __asan_report_load8();
LABEL_376:
      __asan_report_load8();
      goto LABEL_377;
    }
    v107 = (unsigned __int64)&this->m_ptr[-LODWORD(this->m_ptr) & 7];
    p_m_ptr = &this->m_end;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_end >> 3) + 0x7FFF8000) )
      goto LABEL_375;
    if ( (char *)(v107 + 96) <= this->m_end )
      goto LABEL_340;
    p_m_ptr = (char **)&this->m_alloc_func;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_alloc_func >> 3) + 0x7FFF8000) )
      goto LABEL_376;
    m_alloc_func = this->m_alloc_func;
    if ( m_alloc_func )
    {
      p_m_ptr = (char **)65558;
      v109 = (char *)m_alloc_func(65558LL);
      if ( v109 )
        goto LABEL_336;
LABEL_377:
      __asan_handle_no_return(p_m_ptr);
      __assert_fail(
        "memory",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property"
        "_tree/detail/rapidxml.hpp",
        0x23Eu,
        "char* boost::property_tree::detail::rapidxml::memory_pool<Ch>::allocate_raw(std::size_t) [with Ch = char; std::s"
        "ize_t = long unsigned int]");
    }
    v109 = (char *)operator new[](0x10016uLL);
LABEL_336:
    v110 = (char **)&v109[-(int)v109 & 7];
    p_m_end = &this->boost::property_tree::detail::rapidxml::memory_pool<char>;
    if ( *(_BYTE *)(((unsigned __int64)&this->boost::property_tree::detail::rapidxml::memory_pool<char> >> 3)
                  + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_380:
      __asan_report_store8();
LABEL_381:
      __asan_report_store8();
LABEL_382:
      __asan_report_store8();
LABEL_383:
      __asan_report_store8();
LABEL_384:
      __asan_report_store8();
LABEL_385:
      __asan_report_store4(p_m_end);
LABEL_386:
      __asan_report_store8();
LABEL_387:
      __asan_report_store8();
LABEL_388:
      __asan_report_store8();
LABEL_389:
      __asan_report_store8();
LABEL_390:
      __asan_handle_no_return(p_m_end);
      __assert_fail(
        "child && !child->parent() && child->type() != node_document",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property"
        "_tree/detail/rapidxml.hpp",
        0x43Bu,
        "void boost::property_tree::detail::rapidxml::xml_node<Ch>::append_node(boost::property_tree::detail::rapidxml::x"
        "ml_node<Ch>*) [with Ch = char]");
    }
    p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)&v109[-(int)v109 & 7];
    if ( *(_BYTE *)(((unsigned __int64)v110 >> 3) + 0x7FFF8000) )
      goto LABEL_380;
    *v110 = this->m_begin;
    this->m_begin = v109;
    v112 = v110 + 1;
    v113 = v109 + 65558;
    p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)&this->m_end;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_end >> 3) + 0x7FFF8000) )
      goto LABEL_381;
    this->m_end = v113;
    v107 = (unsigned __int64)v112 + (-(int)v112 & 7);
LABEL_340:
    p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)&this->m_ptr;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ptr >> 3) + 0x7FFF8000) )
      goto LABEL_382;
    this->m_ptr = (char *)(v107 + 96);
    p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)v107;
    if ( *(_BYTE *)((v107 >> 3) + 0x7FFF8000) )
      goto LABEL_383;
    *(_QWORD *)v107 = 0LL;
    p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v107 + 32);
    if ( *(_BYTE *)(((v107 + 32) >> 3) + 0x7FFF8000) )
      goto LABEL_384;
    *(_QWORD *)(v107 + 32) = 0LL;
    p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v107 + 40);
    v114 = *(_BYTE *)(((v107 + 40) >> 3) + 0x7FFF8000);
    if ( v114 && v114 <= 3 )
      goto LABEL_385;
    *(_DWORD *)(v107 + 40) = 2;
    p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v107 + 48);
    if ( *(_BYTE *)(((v107 + 48) >> 3) + 0x7FFF8000) )
      goto LABEL_386;
    *(_QWORD *)(v107 + 48) = 0LL;
    p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v107 + 64);
    if ( *(_BYTE *)(((v107 + 64) >> 3) + 0x7FFF8000) )
      goto LABEL_387;
    *(_QWORD *)(v107 + 64) = 0LL;
    v115 = j - (_QWORD)v9;
    p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v107 + 8);
    if ( *(_BYTE *)(((v107 + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_388;
    *(_QWORD *)(v107 + 8) = v9;
    p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v107 + 24);
    if ( *(_BYTE *)(((v107 + 24) >> 3) + 0x7FFF8000) )
      goto LABEL_389;
    *(_QWORD *)(v107 + 24) = v115;
    if ( !v107 || *(_QWORD *)(v107 + 32) || !*(_DWORD *)(v107 + 40) )
      goto LABEL_390;
    if ( *(_BYTE *)(((unsigned __int64)&node->m_first_node >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_392:
      __asan_report_load8();
LABEL_393:
      __asan_report_store8();
      goto LABEL_394;
    }
    if ( !node->m_first_node )
      goto LABEL_395;
    if ( *(_BYTE *)(((unsigned __int64)&node->m_last_node >> 3) + 0x7FFF8000) )
      goto LABEL_392;
    v116 = node->m_last_node;
    if ( *(_BYTE *)(((v107 + 80) >> 3) + 0x7FFF8000) )
      goto LABEL_393;
    *(_QWORD *)(v107 + 80) = v116;
    if ( !*(_BYTE *)(((unsigned __int64)&v116->m_next_sibling >> 3) + 0x7FFF8000) )
    {
      v116->m_next_sibling = (boost::property_tree::detail::rapidxml::xml_node<char> *)v107;
      goto LABEL_358;
    }
LABEL_394:
    v107 = __asan_report_store8();
LABEL_395:
    if ( *(_BYTE *)(((v107 + 80) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8();
LABEL_398:
      __asan_report_store8();
LABEL_399:
      __asan_report_store8();
LABEL_400:
      __asan_report_store8();
LABEL_401:
      __asan_report_load8();
LABEL_402:
      m_value = (char *)&boost::property_tree::detail::rapidxml::xml_base<char>::nullstr(void)::zero;
      goto LABEL_363;
    }
    *(_QWORD *)(v107 + 80) = 0LL;
    node->m_first_node = (boost::property_tree::detail::rapidxml::xml_node<char> *)v107;
LABEL_358:
    if ( *(_BYTE *)(((unsigned __int64)&node->m_last_node >> 3) + 0x7FFF8000) )
      goto LABEL_398;
    node->m_last_node = (boost::property_tree::detail::rapidxml::xml_node<char> *)v107;
    if ( *(_BYTE *)(((v107 + 32) >> 3) + 0x7FFF8000) )
      goto LABEL_399;
    *(_QWORD *)(v107 + 32) = node;
    if ( *(_BYTE *)(((v107 + 88) >> 3) + 0x7FFF8000) )
      goto LABEL_400;
    *(_QWORD *)(v107 + 88) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&node->m_value >> 3) + 0x7FFF8000) )
      goto LABEL_401;
    m_value = node->m_value;
    if ( !m_value )
      goto LABEL_402;
LABEL_363:
    p_m_value_size = (char **)m_value;
    v119 = *(_BYTE *)(((unsigned __int64)m_value >> 3) + 0x7FFF8000);
    v120 = (unsigned __int8)m_value & 7;
    if ( v119 <= (char)v120 && v119 )
    {
      __asan_report_load1(m_value);
LABEL_404:
      __asan_report_store8();
LABEL_405:
      __asan_report_load8();
LABEL_406:
      __asan_report_load1(p_m_value_size);
LABEL_407:
      __asan_report_store1(p_m_value_size, v120);
      boost::property_tree::detail::rapidxml::xml_document<char>::insert_coded_character<64>(p_m_value_size, v120);
      return;
    }
    if ( *m_value )
      goto LABEL_368;
    node->m_value = v9;
    p_m_value_size = (char **)&node->m_value_size;
    if ( *(_BYTE *)(((unsigned __int64)&node->m_value_size >> 3) + 0x7FFF8000) )
      goto LABEL_404;
    node->m_value_size = v115;
LABEL_368:
    p_m_value_size = text;
    if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
      goto LABEL_405;
    p_m_value_size = (char **)*text;
    v121 = *(_BYTE *)(((unsigned __int64)*text >> 3) + 0x7FFF8000);
    if ( v121 <= (*(_BYTE *)text & 7) && v121 )
      goto LABEL_406;
    v11 = **text;
    p_m_value_size = (char **)j;
    v122 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
    if ( v122 <= (char)(j & 7) && v122 )
      goto LABEL_407;
    *(_BYTE *)j = 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
    goto LABEL_4;
  v6 = *text;
  v12 = *(_BYTE *)(((unsigned __int64)(*text + 1) >> 3) + 0x7FFF8000);
  if ( v12 > ((*(_BYTE *)text + 1) & 7) || !v12 )
    goto LABEL_5;
  v6 = (char *)__asan_report_load1(*text + 1);
LABEL_17:
  v13 = (unsigned __int64)(v6 + 2);
  *text = (char *)v13;
  while ( 2 )
  {
    v15 = *(_BYTE *)((v13 >> 3) + 0x7FFF8000);
    if ( v15 <= (char)(v13 & 7) && v15 )
    {
      v13 = __asan_report_load1(v13);
    }
    else
    {
      LOBYTE(v14) = *(_BYTE *)v13;
      if ( (unsigned int)*(char *)v13 <= 0x7F )
      {
        v14 = (char)v14;
        goto LABEL_26;
      }
    }
    v14 = 122LL;
LABEL_26:
    v16 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v14] >> 3)
                   + 0x7FFF8000);
    if ( v16 > ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v14] & 7)
      || !v16 )
    {
      if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v14] )
        goto LABEL_29;
      ++v13;
      continue;
    }
    break;
  }
  v13 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v14]);
LABEL_29:
  *text = (char *)v13;
  while ( 2 )
  {
    v18 = *(_BYTE *)((v13 >> 3) + 0x7FFF8000);
    if ( v18 <= (char)(v13 & 7) && v18 )
    {
      v13 = __asan_report_load1(v13);
    }
    else
    {
      LOBYTE(v17) = *(_BYTE *)v13;
      if ( (unsigned int)*(char *)v13 <= 0x7F )
      {
        v17 = (char)v17;
        goto LABEL_38;
      }
    }
    v17 = 122LL;
LABEL_38:
    v19 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v17] >> 3)
                   + 0x7FFF8000);
    if ( v19 > ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v17] & 7)
      || !v19 )
    {
      if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v17] )
        goto LABEL_41;
      ++v13;
      continue;
    }
    break;
  }
  v13 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v17]);
LABEL_41:
  *text = (char *)v13;
  if ( *(_BYTE *)v13 != 62 )
  {
    v20 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
    if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v21 = (__int64)*text;
    if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
      v21 = __asan_report_store8();
    *(_QWORD *)v20 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
    if ( *(_BYTE *)(((v20 + 8) >> 3) + 0x7FFF8000) )
      v21 = __asan_report_store8();
    *(_QWORD *)(v20 + 8) = "expected >";
    if ( *(_BYTE *)(((v20 + 16) >> 3) + 0x7FFF8000) )
      v21 = __asan_report_store8();
    *(_QWORD *)(v20 + 16) = v21;
    __asan_handle_no_return(v20 + 16);
    _cxa_throw(
      (void *)v20,
      (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
      (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
  }
  *text = (char *)(v13 + 1);
};

// Line 2165: range 000000000C2903F2-000000000C29587B
void __fastcall boost::property_tree::detail::rapidxml::xml_document<char>::parse_node_contents<3072>(
        boost::property_tree::detail::rapidxml::xml_document<char> *const this,
        char **text,
        boost::property_tree::detail::rapidxml::xml_node<char> *node)
{
  char *v3; // r14
  double v4; // xmm0_8
  unsigned __int64 i; // rax
  __int64 v9; // rdx
  char **v10; // rdi
  char v11; // dl
  char v12; // cl
  char v13; // al
  char **v14; // rdi
  char *v15; // rax
  char v16; // dl
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // dl
  char v21; // cl
  __int64 v22; // rdx
  char v23; // dl
  char v24; // cl
  unsigned __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rdi
  char v28; // dl
  boost::property_tree::detail::rapidxml::xml_node<char> *v29; // rdx
  unsigned __int64 v30; // rbp
  __int64 v31; // rax
  char **v32; // rdi
  unsigned __int64 v33; // rax
  __int64 j; // rdx
  char v35; // dl
  char v36; // cl
  unsigned __int64 v37; // r13
  char v38; // cl
  __int64 v39; // rdx
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rdi
  __int64 v42; // rsi
  char v43; // dl
  char v44; // dl
  char v45; // r8
  char v46; // r8
  char v47; // dl
  unsigned __int64 v48; // rdi
  __int64 v49; // rsi
  char v50; // dl
  unsigned __int64 v51; // rdi
  char v52; // dl
  char v53; // dl
  unsigned __int64 v54; // r15
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rcx
  int v57; // eax
  unsigned __int8 v58; // al
  char v59; // dl
  char v60; // dl
  char v61; // dl
  _BYTE *v62; // rdi
  char v63; // dl
  __int64 v64; // rsi
  char v65; // dl
  _BYTE *v66; // rdi
  char v67; // dl
  __int64 v68; // rsi
  char v69; // dl
  char v70; // dl
  _BYTE *v71; // rdi
  char v72; // dl
  __int64 v73; // rsi
  char v74; // dl
  char v75; // dl
  char v76; // dl
  unsigned __int64 v77; // rbx
  int v78; // eax
  unsigned __int8 v79; // al
  char v80; // dl
  char v81; // dl
  char v82; // dl
  char v83; // al
  _BYTE *v84; // rdi
  char v85; // dl
  __int64 v86; // rsi
  char v87; // dl
  _BYTE *v88; // rdi
  char v89; // dl
  __int64 v90; // rsi
  char v91; // dl
  char v92; // dl
  _BYTE *v93; // rdi
  char v94; // dl
  __int64 v95; // rsi
  char v96; // dl
  char v97; // dl
  char v98; // dl
  unsigned __int64 exception; // rbx
  unsigned __int64 v100; // rbx
  unsigned __int64 v101; // rdi
  char v102; // dl
  __int64 k; // rdx
  char v104; // dl
  char v105; // cl
  unsigned __int64 v106; // rsi
  char v107; // dl
  char v108; // si
  const unsigned __int8 *v109; // rsi
  char v110; // dl
  char v111; // al
  char **p_m_ptr; // rdi
  unsigned __int64 v113; // rax
  boost::property_tree::detail::rapidxml::memory_pool<char>::boost_ptree_raw_alloc_func *m_alloc_func; // rax
  char *v115; // rax
  char **v116; // rdx
  boost::property_tree::detail::rapidxml::memory_pool<char> *p_m_end; // rdi
  _QWORD *v118; // rdx
  char *v119; // rax
  char v120; // dl
  std::size_t v121; // rcx
  boost::property_tree::detail::rapidxml::xml_node<char> *m_last_node; // rdx
  char *m_value; // rax
  boost::property_tree::detail::rapidxml::xml_document<char> *p_m_value_size; // rdi
  char v125; // dl
  char **v126; // rsi
  char v127; // dl
  char v128; // dl

  while ( 2 )
  {
    v10 = text;
    if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
    {
      v4 = __asan_report_load8();
      goto LABEL_3;
    }
    for ( i = (unsigned __int64)*text; ; ++i )
    {
      v10 = (char **)i;
      v11 = *(_BYTE *)((i >> 3) + 0x7FFF8000);
      if ( v11 <= (char)(i & 7) && v11 )
      {
LABEL_3:
        i = __asan_report_load1(v10);
      }
      else
      {
        LOBYTE(v9) = *(_BYTE *)i;
        if ( (unsigned int)*(char *)i <= 0x7F )
        {
          v9 = (char)v9;
          goto LABEL_11;
        }
      }
      v9 = 122LL;
LABEL_11:
      v12 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v9] >> 3)
                     + 0x7FFF8000);
      if ( v12 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v9] & 7) )
      {
        if ( v12 )
          break;
      }
      if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v9] )
        goto LABEL_14;
    }
    i = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v9]);
LABEL_14:
    *text = (char *)i;
    v13 = *(_BYTE *)i;
after_data_node:
    if ( !v13 )
      goto LABEL_89;
    if ( v13 != 60 )
    {
      v32 = text;
      if ( !*(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
      {
        v3 = *text;
        v33 = (unsigned __int64)*text;
        goto LABEL_105;
      }
      v4 = __asan_report_load8();
LABEL_101:
      v33 = __asan_report_load1(v32);
LABEL_102:
      for ( j = 122LL; ; j = (char)j )
      {
        v36 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text_pure_with_ws[j] >> 3)
                       + 0x7FFF8000);
        if ( v36 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text_pure_with_ws[j] & 7) )
        {
          if ( v36 )
            break;
        }
        if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text_pure_with_ws[j] )
          goto LABEL_112;
        ++v33;
LABEL_105:
        v32 = (char **)v33;
        v35 = *(_BYTE *)((v33 >> 3) + 0x7FFF8000);
        if ( v35 <= (char)(v33 & 7) && v35 )
          goto LABEL_101;
        LOBYTE(j) = *(_BYTE *)v33;
        if ( (unsigned int)*(char *)v33 > 0x7F )
          goto LABEL_102;
      }
      v33 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text_pure_with_ws[j]);
LABEL_112:
      *text = (char *)v33;
      v37 = v33;
LABEL_343:
      while ( 1 )
      {
        v107 = *(_BYTE *)((v33 >> 3) + 0x7FFF8000);
        if ( v107 <= (char)(v33 & 7) )
        {
          if ( v107 )
            break;
        }
        v38 = *(_BYTE *)v33;
        if ( (unsigned int)*(char *)v33 > 0x7F )
          goto LABEL_114;
        v39 = v38;
LABEL_347:
        v108 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text[v39] >> 3)
                        + 0x7FFF8000);
        if ( v108 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text[v39] & 7)
          && v108 )
        {
          v33 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text[v39]);
        }
        else
        {
          if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text[v39] )
            goto LABEL_357;
          if ( v38 != 38 )
          {
LABEL_351:
            v109 = (const unsigned __int8 *)*(unsigned __int8 *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v39] >> 3)
                                                               + 0x7FFF8000);
            if ( (char)v109 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v39] & 7)
              && (_BYTE)v109 )
            {
              v33 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v39]);
LABEL_327:
              v101 = v37;
              v102 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
              if ( v102 > (char)(v37 & 7) || !v102 )
              {
                *(_BYTE *)v37++ = 32;
                ++v33;
                goto LABEL_335;
              }
              __asan_report_store1(v37, v109);
LABEL_331:
              v33 = __asan_report_load1(v101);
LABEL_332:
              for ( k = 122LL; ; k = (char)k )
              {
                v105 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[k] >> 3)
                                + 0x7FFF8000);
                v106 = (unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[k] & 7;
                if ( v105 <= (char)v106 )
                {
                  if ( v105 )
                    break;
                }
                if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[k] )
                  goto LABEL_343;
                ++v33;
LABEL_335:
                v101 = v33;
                v104 = *(_BYTE *)((v33 >> 3) + 0x7FFF8000);
                if ( v104 <= (char)(v33 & 7) && v104 )
                  goto LABEL_331;
                LOBYTE(k) = *(_BYTE *)v33;
                if ( (unsigned int)*(char *)v33 > 0x7F )
                  goto LABEL_332;
              }
              v33 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[k]);
LABEL_342:
              *(_BYTE *)v37 = v38;
              v37 = v106;
              continue;
            }
            v109 = boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace;
            if ( boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v39] )
              goto LABEL_327;
            ++v33;
            v106 = v37 + 1;
            v110 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
            if ( v110 > (char)(v37 & 7) || !v110 )
              goto LABEL_342;
            v33 = __asan_report_store1(v37, v106);
LABEL_357:
            *text = (char *)v33;
            v111 = *(_BYTE *)(((v37 - 1) >> 3) + 0x7FFF8000);
            if ( v111 <= (char)((v37 - 1) & 7) && v111 )
            {
              __asan_report_load1(v37 - 1);
            }
            else if ( *(_BYTE *)(v37 - 1) != 32 )
            {
              goto LABEL_360;
            }
            --v37;
LABEL_360:
            p_m_ptr = &this->m_ptr;
            if ( *(_BYTE *)(((unsigned __int64)&this->m_ptr >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8();
LABEL_407:
              __asan_report_load8();
LABEL_408:
              __asan_report_load8();
              goto LABEL_409;
            }
            v113 = (unsigned __int64)&this->m_ptr[-LODWORD(this->m_ptr) & 7];
            p_m_ptr = &this->m_end;
            if ( *(_BYTE *)(((unsigned __int64)&this->m_end >> 3) + 0x7FFF8000) )
              goto LABEL_407;
            if ( (char *)(v113 + 96) <= this->m_end )
              goto LABEL_370;
            p_m_ptr = (char **)&this->m_alloc_func;
            if ( *(_BYTE *)(((unsigned __int64)&this->m_alloc_func >> 3) + 0x7FFF8000) )
              goto LABEL_408;
            m_alloc_func = this->m_alloc_func;
            if ( m_alloc_func )
            {
              p_m_ptr = (char **)65558;
              v115 = (char *)((__int64 (__fastcall *)(__int64, double))m_alloc_func)(65558LL, v4);
              if ( v115 )
                goto LABEL_366;
LABEL_409:
              __asan_handle_no_return(p_m_ptr);
              __assert_fail(
                "memory",
                "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/"
                "property_tree/detail/rapidxml.hpp",
                0x23Eu,
                "char* boost::property_tree::detail::rapidxml::memory_pool<Ch>::allocate_raw(std::size_t) [with Ch = char"
                "; std::size_t = long unsigned int]");
            }
            v115 = (char *)operator new[](0x10016uLL);
LABEL_366:
            v116 = (char **)&v115[-(int)v115 & 7];
            p_m_end = &this->boost::property_tree::detail::rapidxml::memory_pool<char>;
            if ( *(_BYTE *)(((unsigned __int64)&this->boost::property_tree::detail::rapidxml::memory_pool<char> >> 3)
                          + 0x7FFF8000) )
            {
              __asan_report_load8();
LABEL_412:
              __asan_report_store8();
LABEL_413:
              __asan_report_store8();
LABEL_414:
              __asan_report_store8();
LABEL_415:
              __asan_report_store8();
LABEL_416:
              __asan_report_store8();
LABEL_417:
              __asan_report_store4(p_m_end);
LABEL_418:
              __asan_report_store8();
LABEL_419:
              __asan_report_store8();
LABEL_420:
              __asan_report_store8();
LABEL_421:
              __asan_report_store8();
LABEL_422:
              __asan_handle_no_return(p_m_end);
              __assert_fail(
                "child && !child->parent() && child->type() != node_document",
                "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/"
                "property_tree/detail/rapidxml.hpp",
                0x43Bu,
                "void boost::property_tree::detail::rapidxml::xml_node<Ch>::append_node(boost::property_tree::detail::rap"
                "idxml::xml_node<Ch>*) [with Ch = char]");
            }
            p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)&v115[-(int)v115 & 7];
            if ( *(_BYTE *)(((unsigned __int64)v116 >> 3) + 0x7FFF8000) )
              goto LABEL_412;
            *v116 = this->m_begin;
            this->m_begin = v115;
            v118 = v116 + 1;
            v119 = v115 + 65558;
            p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)&this->m_end;
            if ( *(_BYTE *)(((unsigned __int64)&this->m_end >> 3) + 0x7FFF8000) )
              goto LABEL_413;
            this->m_end = v119;
            v113 = (unsigned __int64)v118 + (-(int)v118 & 7);
LABEL_370:
            p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)&this->m_ptr;
            if ( *(_BYTE *)(((unsigned __int64)&this->m_ptr >> 3) + 0x7FFF8000) )
              goto LABEL_414;
            this->m_ptr = (char *)(v113 + 96);
            p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)v113;
            if ( *(_BYTE *)((v113 >> 3) + 0x7FFF8000) )
              goto LABEL_415;
            *(_QWORD *)v113 = 0LL;
            p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v113 + 32);
            if ( *(_BYTE *)(((v113 + 32) >> 3) + 0x7FFF8000) )
              goto LABEL_416;
            *(_QWORD *)(v113 + 32) = 0LL;
            p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v113 + 40);
            v120 = *(_BYTE *)(((v113 + 40) >> 3) + 0x7FFF8000);
            if ( v120 && v120 <= 3 )
              goto LABEL_417;
            *(_DWORD *)(v113 + 40) = 2;
            p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v113 + 48);
            if ( *(_BYTE *)(((v113 + 48) >> 3) + 0x7FFF8000) )
              goto LABEL_418;
            *(_QWORD *)(v113 + 48) = 0LL;
            p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v113 + 64);
            if ( *(_BYTE *)(((v113 + 64) >> 3) + 0x7FFF8000) )
              goto LABEL_419;
            *(_QWORD *)(v113 + 64) = 0LL;
            v121 = v37 - (_QWORD)v3;
            p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v113 + 8);
            if ( *(_BYTE *)(((v113 + 8) >> 3) + 0x7FFF8000) )
              goto LABEL_420;
            *(_QWORD *)(v113 + 8) = v3;
            p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v113 + 24);
            if ( *(_BYTE *)(((v113 + 24) >> 3) + 0x7FFF8000) )
              goto LABEL_421;
            *(_QWORD *)(v113 + 24) = v121;
            if ( !v113 || *(_QWORD *)(v113 + 32) || !*(_DWORD *)(v113 + 40) )
              goto LABEL_422;
            if ( *(_BYTE *)(((unsigned __int64)&node->m_first_node >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8();
LABEL_424:
              v4 = __asan_report_load8();
LABEL_425:
              __asan_report_store8();
              goto LABEL_426;
            }
            if ( !node->m_first_node )
              goto LABEL_427;
            if ( *(_BYTE *)(((unsigned __int64)&node->m_last_node >> 3) + 0x7FFF8000) )
              goto LABEL_424;
            m_last_node = node->m_last_node;
            if ( *(_BYTE *)(((v113 + 80) >> 3) + 0x7FFF8000) )
              goto LABEL_425;
            *(_QWORD *)(v113 + 80) = m_last_node;
            if ( !*(_BYTE *)(((unsigned __int64)&m_last_node->m_next_sibling >> 3) + 0x7FFF8000) )
            {
              m_last_node->m_next_sibling = (boost::property_tree::detail::rapidxml::xml_node<char> *)v113;
              goto LABEL_388;
            }
LABEL_426:
            v113 = __asan_report_store8();
LABEL_427:
            if ( *(_BYTE *)(((v113 + 80) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store8();
LABEL_430:
              __asan_report_store8();
LABEL_431:
              __asan_report_store8();
LABEL_432:
              __asan_report_store8();
LABEL_433:
              v4 = __asan_report_load8();
LABEL_434:
              m_value = (char *)&boost::property_tree::detail::rapidxml::xml_base<char>::nullstr(void)::zero;
              goto LABEL_393;
            }
            *(_QWORD *)(v113 + 80) = 0LL;
            node->m_first_node = (boost::property_tree::detail::rapidxml::xml_node<char> *)v113;
LABEL_388:
            if ( *(_BYTE *)(((unsigned __int64)&node->m_last_node >> 3) + 0x7FFF8000) )
              goto LABEL_430;
            node->m_last_node = (boost::property_tree::detail::rapidxml::xml_node<char> *)v113;
            if ( *(_BYTE *)(((v113 + 32) >> 3) + 0x7FFF8000) )
              goto LABEL_431;
            *(_QWORD *)(v113 + 32) = node;
            if ( *(_BYTE *)(((v113 + 88) >> 3) + 0x7FFF8000) )
              goto LABEL_432;
            *(_QWORD *)(v113 + 88) = 0LL;
            if ( *(_BYTE *)(((unsigned __int64)&node->m_value >> 3) + 0x7FFF8000) )
              goto LABEL_433;
            m_value = node->m_value;
            if ( !m_value )
              goto LABEL_434;
LABEL_393:
            p_m_value_size = (boost::property_tree::detail::rapidxml::xml_document<char> *)m_value;
            v125 = *(_BYTE *)(((unsigned __int64)m_value >> 3) + 0x7FFF8000);
            v126 = (char **)((unsigned __int8)m_value & 7);
            if ( v125 <= (char)v126 && v125 )
            {
              __asan_report_load1(m_value);
LABEL_436:
              __asan_report_store8();
LABEL_437:
              __asan_report_load8();
LABEL_438:
              __asan_report_load1(p_m_value_size);
LABEL_439:
              __asan_report_store1(p_m_value_size, v126);
              boost::property_tree::detail::rapidxml::xml_document<char>::parse_element<3072>(p_m_value_size, v126);
              return;
            }
            if ( *m_value )
              goto LABEL_398;
            node->m_value = v3;
            p_m_value_size = (boost::property_tree::detail::rapidxml::xml_document<char> *)&node->m_value_size;
            if ( *(_BYTE *)(((unsigned __int64)&node->m_value_size >> 3) + 0x7FFF8000) )
              goto LABEL_436;
            node->m_value_size = v121;
LABEL_398:
            p_m_value_size = (boost::property_tree::detail::rapidxml::xml_document<char> *)text;
            if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
              goto LABEL_437;
            p_m_value_size = (boost::property_tree::detail::rapidxml::xml_document<char> *)*text;
            v127 = *(_BYTE *)(((unsigned __int64)*text >> 3) + 0x7FFF8000);
            if ( v127 <= (*(_BYTE *)text & 7) && v127 )
              goto LABEL_438;
            v13 = **text;
            p_m_value_size = (boost::property_tree::detail::rapidxml::xml_document<char> *)v37;
            v128 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
            if ( v128 <= (char)(v37 & 7) && v128 )
              goto LABEL_439;
            *(_BYTE *)v37 = 0;
            goto after_data_node;
          }
        }
        v40 = *(unsigned __int8 *)(((v33 + 1) >> 3) + 0x7FFF8000);
        if ( (char)v40 <= (char)((v33 + 1) & 7) && (_BYTE)v40 )
        {
          v33 = __asan_report_load1(v33 + 1);
LABEL_138:
          if ( (_BYTE)v40 == 35 )
            goto LABEL_202;
          if ( (_BYTE)v40 != 97 )
            goto LABEL_351;
          v42 = *(unsigned __int8 *)(((v33 + 2) >> 3) + 0x7FFF8000);
          if ( (char)v42 <= (char)((v33 + 2) & 7) && (_BYTE)v42 )
          {
            v33 = __asan_report_load1(v33 + 2);
          }
          else
          {
            v42 = *(unsigned __int8 *)(v33 + 2);
            if ( (_BYTE)v42 != 109 )
              goto LABEL_143;
          }
          v41 = v33 + 3;
          v45 = *(_BYTE *)(((v33 + 3) >> 3) + 0x7FFF8000);
          if ( v45 <= (char)((v33 + 3) & 7) && v45 )
          {
            __asan_report_load1(v41);
LABEL_167:
            __asan_report_load1(v41);
LABEL_168:
            __asan_report_store1(v41, v42);
LABEL_169:
            __asan_report_load1(v41);
LABEL_170:
            __asan_report_load1(v41);
LABEL_171:
            __asan_report_load1(v41);
LABEL_172:
            __asan_report_store1(v41, v42);
LABEL_173:
            __asan_report_load1(v41);
LABEL_174:
            __asan_report_load1(v41);
LABEL_175:
            __asan_report_load1(v41);
LABEL_176:
            __asan_report_load1(v41);
LABEL_177:
            v33 = __asan_report_store1(v41, v42);
            goto LABEL_178;
          }
          if ( *(_BYTE *)(v33 + 3) != 112 )
            goto LABEL_143;
          v41 = v33 + 4;
          v46 = *(_BYTE *)(((v33 + 4) >> 3) + 0x7FFF8000);
          if ( v46 <= (char)((v33 + 4) & 7) && v46 )
            goto LABEL_167;
          if ( *(_BYTE *)(v33 + 4) == 59 )
          {
            v41 = v37;
            v47 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
            if ( v47 <= (char)(v37 & 7) && v47 )
              goto LABEL_168;
            *(_BYTE *)v37++ = 38;
            v33 += 5LL;
          }
          else
          {
LABEL_143:
            if ( (_BYTE)v42 != 112 )
              goto LABEL_351;
            v41 = v33 + 3;
            v42 = *(unsigned __int8 *)(((v33 + 3) >> 3) + 0x7FFF8000);
            if ( (char)v42 <= (char)((v33 + 3) & 7) && (_BYTE)v42 )
              goto LABEL_169;
            if ( *(_BYTE *)(v33 + 3) != 111 )
              goto LABEL_351;
            v41 = v33 + 4;
            v42 = *(unsigned __int8 *)(((v33 + 4) >> 3) + 0x7FFF8000);
            if ( (char)v42 <= (char)((v33 + 4) & 7) && (_BYTE)v42 )
              goto LABEL_170;
            if ( *(_BYTE *)(v33 + 4) != 115 )
              goto LABEL_351;
            v41 = v33 + 5;
            v42 = *(unsigned __int8 *)(((v33 + 5) >> 3) + 0x7FFF8000);
            if ( (char)v42 <= (char)((v33 + 5) & 7) && (_BYTE)v42 )
              goto LABEL_171;
            if ( *(_BYTE *)(v33 + 5) != 59 )
              goto LABEL_351;
            v41 = v37;
            v44 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
            if ( v44 <= (char)(v37 & 7) && v44 )
              goto LABEL_172;
            *(_BYTE *)v37++ = 39;
            v33 += 6LL;
          }
        }
        else
        {
          v40 = *(unsigned __int8 *)(v33 + 1);
          if ( (_BYTE)v40 == 103 )
          {
LABEL_178:
            v48 = v33 + 2;
            v49 = *(unsigned __int8 *)(((v33 + 2) >> 3) + 0x7FFF8000);
            if ( (char)v49 <= (char)((v33 + 2) & 7) && (_BYTE)v49 )
            {
              __asan_report_load1(v48);
LABEL_188:
              __asan_report_load1(v48);
LABEL_189:
              v33 = __asan_report_store1(v48, v49);
              goto LABEL_190;
            }
            if ( *(_BYTE *)(v33 + 2) != 116 )
              goto LABEL_351;
            v48 = v33 + 3;
            v49 = *(unsigned __int8 *)(((v33 + 3) >> 3) + 0x7FFF8000);
            if ( (char)v49 <= (char)((v33 + 3) & 7) && (_BYTE)v49 )
              goto LABEL_188;
            if ( *(_BYTE *)(v33 + 3) != 59 )
              goto LABEL_351;
            v48 = v37;
            v50 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
            if ( v50 <= (char)(v37 & 7) && v50 )
              goto LABEL_189;
            *(_BYTE *)v37++ = 62;
            v33 += 4LL;
          }
          else
          {
            if ( (char)v40 <= 103 )
              goto LABEL_138;
            if ( (_BYTE)v40 == 108 )
            {
LABEL_190:
              v51 = v33 + 2;
              v40 = *(unsigned __int8 *)(((v33 + 2) >> 3) + 0x7FFF8000);
              if ( (char)v40 <= (char)((v33 + 2) & 7) && (_BYTE)v40 )
              {
                __asan_report_load1(v51);
LABEL_200:
                __asan_report_load1(v51);
LABEL_201:
                v33 = __asan_report_store1(v51, v40);
LABEL_202:
                v53 = *(_BYTE *)(((v33 + 2) >> 3) + 0x7FFF8000);
                if ( v53 <= (char)((v33 + 2) & 7) && v53 )
                {
                  v33 = __asan_report_load1(v33 + 2);
                }
                else if ( *(_BYTE *)(v33 + 2) != 120 )
                {
                  v54 = v33 + 2;
                  v55 = 0LL;
                  while ( 1 )
                  {
                    v80 = *(_BYTE *)((v54 >> 3) + 0x7FFF8000);
                    if ( v80 <= (char)(v54 & 7) && v80 )
                    {
                      v78 = __asan_report_load1(v54);
                    }
                    else
                    {
                      v78 = *(unsigned __int8 *)v54;
                      v81 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v54] >> 3)
                                     + 0x7FFF8000);
                      v40 = (unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v54] & 7;
                      if ( v81 <= (char)v40 && v81 )
                      {
                        __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v54]);
LABEL_269:
                        if ( v55 <= 0x7F )
                        {
                          v82 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
                          if ( v82 > (char)(v37 & 7) || !v82 )
                          {
                            *(_BYTE *)v37++ = v55;
                            goto LABEL_273;
                          }
                          __asan_report_store1(v37, v40);
                        }
                        if ( v55 <= 0x7FF )
                        {
                          v84 = (_BYTE *)(v37 + 1);
                          v85 = *(_BYTE *)(((v37 + 1) >> 3) + 0x7FFF8000);
                          v86 = ((_BYTE)v37 + 1) & 7;
                          if ( v85 <= (char)v86 && v85 )
                          {
                            __asan_report_store1(v84, v86);
                          }
                          else
                          {
                            *(_BYTE *)(v37 + 1) = v55 & 0x3F | 0x80;
                            v84 = (_BYTE *)v37;
                            v87 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
                            if ( v87 > (char)(v37 & 7) || !v87 )
                            {
                              *(_BYTE *)v37 = (v55 >> 6) | 0xC0;
                              v37 += 2LL;
                              goto LABEL_273;
                            }
                          }
                          __asan_report_store1(v84, v86);
                        }
                        if ( v55 > 0xFFFF )
                          goto LABEL_297;
                        v88 = (_BYTE *)(v37 + 2);
                        v89 = *(_BYTE *)(((v37 + 2) >> 3) + 0x7FFF8000);
                        v90 = ((_BYTE)v37 + 2) & 7;
                        if ( v89 <= (char)v90 && v89 )
                        {
                          __asan_report_store1(v88, v90);
                        }
                        else
                        {
                          *(_BYTE *)(v37 + 2) = v55 & 0x3F | 0x80;
                          v88 = (_BYTE *)(v37 + 1);
                          v91 = *(_BYTE *)(((v37 + 1) >> 3) + 0x7FFF8000);
                          v90 = ((_BYTE)v37 + 1) & 7;
                          if ( v91 > (char)v90 || !v91 )
                          {
                            *(_BYTE *)(v37 + 1) = (v55 >> 6) & 0x3F | 0x80;
                            v88 = (_BYTE *)v37;
                            v92 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
                            if ( v92 > (char)(v37 & 7) || !v92 )
                            {
                              *(_BYTE *)v37 = (v55 >> 12) | 0xE0;
                              v37 += 3LL;
                              goto LABEL_273;
                            }
LABEL_296:
                            __asan_report_store1(v88, v90);
LABEL_297:
                            if ( v55 > 0x10FFFF )
                              goto LABEL_311;
                            v93 = (_BYTE *)(v37 + 3);
                            v94 = *(_BYTE *)(((v37 + 3) >> 3) + 0x7FFF8000);
                            v95 = ((_BYTE)v37 + 3) & 7;
                            if ( v94 <= (char)v95 && v94 )
                            {
                              __asan_report_store1(v93, v95);
                            }
                            else
                            {
                              *(_BYTE *)(v37 + 3) = v55 & 0x3F | 0x80;
                              v93 = (_BYTE *)(v37 + 2);
                              v96 = *(_BYTE *)(((v37 + 2) >> 3) + 0x7FFF8000);
                              v95 = ((_BYTE)v37 + 2) & 7;
                              if ( v96 > (char)v95 || !v96 )
                              {
                                *(_BYTE *)(v37 + 2) = (v55 >> 6) & 0x3F | 0x80;
                                v93 = (_BYTE *)(v37 + 1);
                                v97 = *(_BYTE *)(((v37 + 1) >> 3) + 0x7FFF8000);
                                v95 = ((_BYTE)v37 + 1) & 7;
                                if ( v97 > (char)v95 || !v97 )
                                {
                                  *(_BYTE *)(v37 + 1) = (v55 >> 12) & 0x3F | 0x80;
                                  v93 = (_BYTE *)v37;
                                  v98 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
                                  if ( v98 > (char)(v37 & 7) || !v98 )
                                  {
                                    *(_BYTE *)v37 = (v55 >> 18) | 0xF0;
                                    v37 += 4LL;
                                    goto LABEL_273;
                                  }
LABEL_310:
                                  __asan_report_store1(v93, v95);
LABEL_311:
                                  exception = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                                  if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
                                    __asan_report_store8();
                                  *(_QWORD *)exception = &`vtable for'boost::property_tree::detail::rapidxml::parse_error
                                                       + 2;
                                  if ( *(_BYTE *)(((exception + 8) >> 3) + 0x7FFF8000) )
                                    __asan_report_store8();
                                  *(_QWORD *)(exception + 8) = "invalid numeric character entity";
                                  if ( *(_BYTE *)(((exception + 16) >> 3) + 0x7FFF8000) )
                                    __asan_report_store8();
                                  *(_QWORD *)(exception + 16) = v37;
                                  __asan_handle_no_return(exception + 16);
                                  _cxa_throw(
                                    (void *)exception,
                                    (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                                    (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                                }
LABEL_309:
                                __asan_report_store1(v93, v95);
                                goto LABEL_310;
                              }
                            }
                            __asan_report_store1(v93, v95);
                            goto LABEL_309;
                          }
                        }
                        __asan_report_store1(v88, v90);
                        goto LABEL_296;
                      }
                    }
                    v79 = boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[v78];
                    if ( v79 == 0xFF )
                      goto LABEL_269;
                    v55 = v79 + 10 * v55;
                    ++v54;
                  }
                }
                v54 = v33 + 3;
                v56 = 0LL;
                while ( 1 )
                {
                  v59 = *(_BYTE *)((v54 >> 3) + 0x7FFF8000);
                  if ( v59 <= (char)(v54 & 7) && v59 )
                  {
                    v57 = __asan_report_load1(v54);
                  }
                  else
                  {
                    v57 = *(unsigned __int8 *)v54;
                    v60 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v54] >> 3)
                                   + 0x7FFF8000);
                    v40 = (unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v54] & 7;
                    if ( v60 <= (char)v40 && v60 )
                    {
                      __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v54]);
LABEL_216:
                      if ( v56 <= 0x7F )
                      {
                        v61 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
                        if ( v61 > (char)(v37 & 7) || !v61 )
                        {
                          *(_BYTE *)v37++ = v56;
LABEL_273:
                          v83 = *(_BYTE *)((v54 >> 3) + 0x7FFF8000);
                          if ( v83 <= (char)(v54 & 7) && v83 )
                          {
                            __asan_report_load1(v54);
                          }
                          else if ( *(_BYTE *)v54 == 59 )
                          {
                            v33 = v54 + 1;
                            goto LABEL_343;
                          }
                          v100 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                          if ( *(_BYTE *)((v100 >> 3) + 0x7FFF8000) )
                            __asan_report_store8();
                          *(_QWORD *)v100 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                          if ( *(_BYTE *)(((v100 + 8) >> 3) + 0x7FFF8000) )
                            __asan_report_store8();
                          *(_QWORD *)(v100 + 8) = "expected ;";
                          if ( *(_BYTE *)(((v100 + 16) >> 3) + 0x7FFF8000) )
                            __asan_report_store8();
                          *(_QWORD *)(v100 + 16) = v54;
                          __asan_handle_no_return(v100 + 16);
                          _cxa_throw(
                            (void *)v100,
                            (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                            (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                        }
                        __asan_report_store1(v37, v40);
                      }
                      if ( v56 <= 0x7FF )
                      {
                        v62 = (_BYTE *)(v37 + 1);
                        v63 = *(_BYTE *)(((v37 + 1) >> 3) + 0x7FFF8000);
                        v64 = ((_BYTE)v37 + 1) & 7;
                        if ( v63 <= (char)v64 && v63 )
                        {
                          __asan_report_store1(v62, v64);
                        }
                        else
                        {
                          *(_BYTE *)(v37 + 1) = v56 & 0x3F | 0x80;
                          v62 = (_BYTE *)v37;
                          v65 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
                          if ( v65 > (char)(v37 & 7) || !v65 )
                          {
                            *(_BYTE *)v37 = (v56 >> 6) | 0xC0;
                            v37 += 2LL;
                            goto LABEL_273;
                          }
                        }
                        __asan_report_store1(v62, v64);
                      }
                      if ( v56 > 0xFFFF )
                        goto LABEL_240;
                      v66 = (_BYTE *)(v37 + 2);
                      v67 = *(_BYTE *)(((v37 + 2) >> 3) + 0x7FFF8000);
                      v68 = ((_BYTE)v37 + 2) & 7;
                      if ( v67 <= (char)v68 && v67 )
                      {
                        __asan_report_store1(v66, v68);
                      }
                      else
                      {
                        *(_BYTE *)(v37 + 2) = v56 & 0x3F | 0x80;
                        v66 = (_BYTE *)(v37 + 1);
                        v69 = *(_BYTE *)(((v37 + 1) >> 3) + 0x7FFF8000);
                        v68 = ((_BYTE)v37 + 1) & 7;
                        if ( v69 > (char)v68 || !v69 )
                        {
                          *(_BYTE *)(v37 + 1) = (v56 >> 6) & 0x3F | 0x80;
                          v66 = (_BYTE *)v37;
                          v70 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
                          if ( v70 > (char)(v37 & 7) || !v70 )
                          {
                            *(_BYTE *)v37 = (v56 >> 12) | 0xE0;
                            v37 += 3LL;
                            goto LABEL_273;
                          }
LABEL_239:
                          __asan_report_store1(v66, v68);
LABEL_240:
                          if ( v56 > 0x10FFFF )
                            goto LABEL_254;
                          v71 = (_BYTE *)(v37 + 3);
                          v72 = *(_BYTE *)(((v37 + 3) >> 3) + 0x7FFF8000);
                          v73 = ((_BYTE)v37 + 3) & 7;
                          if ( v72 <= (char)v73 && v72 )
                          {
                            __asan_report_store1(v71, v73);
                          }
                          else
                          {
                            *(_BYTE *)(v37 + 3) = v56 & 0x3F | 0x80;
                            v71 = (_BYTE *)(v37 + 2);
                            v74 = *(_BYTE *)(((v37 + 2) >> 3) + 0x7FFF8000);
                            v73 = ((_BYTE)v37 + 2) & 7;
                            if ( v74 > (char)v73 || !v74 )
                            {
                              *(_BYTE *)(v37 + 2) = (v56 >> 6) & 0x3F | 0x80;
                              v71 = (_BYTE *)(v37 + 1);
                              v75 = *(_BYTE *)(((v37 + 1) >> 3) + 0x7FFF8000);
                              v73 = ((_BYTE)v37 + 1) & 7;
                              if ( v75 > (char)v73 || !v75 )
                              {
                                *(_BYTE *)(v37 + 1) = (v56 >> 12) & 0x3F | 0x80;
                                v71 = (_BYTE *)v37;
                                v76 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
                                if ( v76 > (char)(v37 & 7) || !v76 )
                                {
                                  *(_BYTE *)v37 = (v56 >> 18) | 0xF0;
                                  v37 += 4LL;
                                  goto LABEL_273;
                                }
LABEL_253:
                                __asan_report_store1(v71, v73);
LABEL_254:
                                v77 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                                if ( *(_BYTE *)((v77 >> 3) + 0x7FFF8000) )
                                  __asan_report_store8();
                                *(_QWORD *)v77 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                                if ( *(_BYTE *)(((v77 + 8) >> 3) + 0x7FFF8000) )
                                  __asan_report_store8();
                                *(_QWORD *)(v77 + 8) = "invalid numeric character entity";
                                if ( *(_BYTE *)(((v77 + 16) >> 3) + 0x7FFF8000) )
                                  __asan_report_store8();
                                *(_QWORD *)(v77 + 16) = v37;
                                __asan_handle_no_return(v77 + 16);
                                _cxa_throw(
                                  (void *)v77,
                                  (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                                  (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                              }
LABEL_252:
                              __asan_report_store1(v71, v73);
                              goto LABEL_253;
                            }
                          }
                          __asan_report_store1(v71, v73);
                          goto LABEL_252;
                        }
                      }
                      __asan_report_store1(v66, v68);
                      goto LABEL_239;
                    }
                  }
                  v58 = boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[v57];
                  if ( v58 == 0xFF )
                    goto LABEL_216;
                  v56 = v58 + 16 * v56;
                  ++v54;
                }
              }
              if ( *(_BYTE *)(v33 + 2) != 116 )
                goto LABEL_351;
              v51 = v33 + 3;
              v40 = *(unsigned __int8 *)(((v33 + 3) >> 3) + 0x7FFF8000);
              if ( (char)v40 <= (char)((v33 + 3) & 7) && (_BYTE)v40 )
                goto LABEL_200;
              if ( *(_BYTE *)(v33 + 3) != 59 )
                goto LABEL_351;
              v51 = v37;
              v52 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
              if ( v52 <= (char)(v37 & 7) && v52 )
                goto LABEL_201;
              *(_BYTE *)v37++ = 60;
              v33 += 4LL;
            }
            else
            {
              if ( (_BYTE)v40 != 113 )
                goto LABEL_351;
              v41 = v33 + 2;
              v42 = *(unsigned __int8 *)(((v33 + 2) >> 3) + 0x7FFF8000);
              if ( (char)v42 <= (char)((v33 + 2) & 7) && (_BYTE)v42 )
                goto LABEL_173;
              if ( *(_BYTE *)(v33 + 2) != 117 )
                goto LABEL_351;
              v41 = v33 + 3;
              v42 = *(unsigned __int8 *)(((v33 + 3) >> 3) + 0x7FFF8000);
              if ( (char)v42 <= (char)((v33 + 3) & 7) && (_BYTE)v42 )
                goto LABEL_174;
              if ( *(_BYTE *)(v33 + 3) != 111 )
                goto LABEL_351;
              v41 = v33 + 4;
              v42 = *(unsigned __int8 *)(((v33 + 4) >> 3) + 0x7FFF8000);
              if ( (char)v42 <= (char)((v33 + 4) & 7) && (_BYTE)v42 )
                goto LABEL_175;
              if ( *(_BYTE *)(v33 + 4) != 116 )
                goto LABEL_351;
              v41 = v33 + 5;
              v42 = *(unsigned __int8 *)(((v33 + 5) >> 3) + 0x7FFF8000);
              if ( (char)v42 <= (char)((v33 + 5) & 7) && (_BYTE)v42 )
                goto LABEL_176;
              if ( *(_BYTE *)(v33 + 5) != 59 )
                goto LABEL_351;
              v41 = v37;
              v43 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
              if ( v43 <= (char)(v37 & 7) && v43 )
                goto LABEL_177;
              *(_BYTE *)v37++ = 34;
              v33 += 6LL;
            }
          }
        }
      }
      v33 = __asan_report_load1(v33);
LABEL_114:
      v39 = 122LL;
      goto LABEL_347;
    }
    v14 = text;
    if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_25:
      v15 = (char *)__asan_report_load1(v14);
      break;
    }
    v15 = *text;
    v14 = (char **)(*text + 1);
    v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
    if ( v16 <= ((*(_BYTE *)text + 1) & 7) && v16 )
      goto LABEL_25;
    if ( v15[1] != 47 )
    {
      *text = v15 + 1;
      v17 = (__int64)boost::property_tree::detail::rapidxml::xml_document<char>::parse_node<3072>(this, text);
      if ( !v17 )
        continue;
      v27 = v17 + 32;
      if ( *(_BYTE *)(((unsigned __int64)(v17 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else
      {
        if ( *(_QWORD *)(v17 + 32) )
          goto LABEL_78;
        v27 = v17 + 40;
        v28 = *(_BYTE *)(((unsigned __int64)(v17 + 40) >> 3) + 0x7FFF8000);
        if ( !v28 || v28 > 3 )
        {
          if ( *(_DWORD *)(v17 + 40) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&node->m_first_node >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8();
            }
            else
            {
              if ( !node->m_first_node )
                goto LABEL_83;
              if ( !*(_BYTE *)(((unsigned __int64)&node->m_last_node >> 3) + 0x7FFF8000) )
              {
                v29 = node->m_last_node;
                if ( !*(_BYTE *)(((unsigned __int64)(v17 + 80) >> 3) + 0x7FFF8000) )
                {
                  *(_QWORD *)(v17 + 80) = v29;
                  if ( !*(_BYTE *)(((unsigned __int64)&v29->m_next_sibling >> 3) + 0x7FFF8000) )
                  {
                    v29->m_next_sibling = (boost::property_tree::detail::rapidxml::xml_node<char> *)v17;
                    goto LABEL_72;
                  }
LABEL_82:
                  v17 = __asan_report_store8();
LABEL_83:
                  if ( *(_BYTE *)(((unsigned __int64)(v17 + 80) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store8();
                  }
                  else
                  {
                    *(_QWORD *)(v17 + 80) = 0LL;
                    node->m_first_node = (boost::property_tree::detail::rapidxml::xml_node<char> *)v17;
LABEL_72:
                    if ( !*(_BYTE *)(((unsigned __int64)&node->m_last_node >> 3) + 0x7FFF8000) )
                    {
                      node->m_last_node = (boost::property_tree::detail::rapidxml::xml_node<char> *)v17;
                      if ( !*(_BYTE *)(((unsigned __int64)(v17 + 32) >> 3) + 0x7FFF8000) )
                      {
                        *(_QWORD *)(v17 + 32) = node;
                        if ( !*(_BYTE *)(((unsigned __int64)(v17 + 88) >> 3) + 0x7FFF8000) )
                        {
                          *(_QWORD *)(v17 + 88) = 0LL;
                          continue;
                        }
LABEL_88:
                        __asan_report_store8();
LABEL_89:
                        v30 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                        if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
                          __asan_report_load8();
                        v31 = (__int64)*text;
                        if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
                          v31 = __asan_report_store8();
                        *(_QWORD *)v30 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                        if ( *(_BYTE *)(((v30 + 8) >> 3) + 0x7FFF8000) )
                          v31 = __asan_report_store8();
                        *(_QWORD *)(v30 + 8) = "unexpected end of data";
                        if ( *(_BYTE *)(((v30 + 16) >> 3) + 0x7FFF8000) )
                          v31 = __asan_report_store8();
                        *(_QWORD *)(v30 + 16) = v31;
                        __asan_handle_no_return(v30 + 16);
                        _cxa_throw(
                          (void *)v30,
                          (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                          (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                      }
LABEL_87:
                      __asan_report_store8();
                      goto LABEL_88;
                    }
                  }
                  __asan_report_store8();
                  goto LABEL_87;
                }
LABEL_81:
                __asan_report_store8();
                goto LABEL_82;
              }
            }
            v4 = __asan_report_load8();
            goto LABEL_81;
          }
LABEL_78:
          __asan_handle_no_return(v27);
          __assert_fail(
            "child && !child->parent() && child->type() != node_document",
            "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/prop"
            "erty_tree/detail/rapidxml.hpp",
            0x43Bu,
            "void boost::property_tree::detail::rapidxml::xml_node<Ch>::append_node(boost::property_tree::detail::rapidxm"
            "l::xml_node<Ch>*) [with Ch = char]");
        }
      }
      __asan_report_load4(v27);
      goto LABEL_78;
    }
    break;
  }
  v18 = (unsigned __int64)(v15 + 2);
  *text = (char *)v18;
  while ( 2 )
  {
    v20 = *(_BYTE *)((v18 >> 3) + 0x7FFF8000);
    if ( v20 <= (char)(v18 & 7) && v20 )
    {
      v18 = __asan_report_load1(v18);
    }
    else
    {
      LOBYTE(v19) = *(_BYTE *)v18;
      if ( (unsigned int)*(char *)v18 <= 0x7F )
      {
        v19 = (char)v19;
        goto LABEL_35;
      }
    }
    v19 = 122LL;
LABEL_35:
    v21 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v19] >> 3)
                   + 0x7FFF8000);
    if ( v21 > ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v19] & 7)
      || !v21 )
    {
      if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v19] )
        goto LABEL_38;
      ++v18;
      continue;
    }
    break;
  }
  v18 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v19]);
LABEL_38:
  *text = (char *)v18;
  while ( 2 )
  {
    v23 = *(_BYTE *)((v18 >> 3) + 0x7FFF8000);
    if ( v23 <= (char)(v18 & 7) && v23 )
    {
      v18 = __asan_report_load1(v18);
    }
    else
    {
      LOBYTE(v22) = *(_BYTE *)v18;
      if ( (unsigned int)*(char *)v18 <= 0x7F )
      {
        v22 = (char)v22;
        goto LABEL_47;
      }
    }
    v22 = 122LL;
LABEL_47:
    v24 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v22] >> 3)
                   + 0x7FFF8000);
    if ( v24 > ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v22] & 7)
      || !v24 )
    {
      if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v22] )
        goto LABEL_50;
      ++v18;
      continue;
    }
    break;
  }
  v18 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v22]);
LABEL_50:
  *text = (char *)v18;
  if ( *(_BYTE *)v18 != 62 )
  {
    v25 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
    if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v26 = (__int64)*text;
    if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      v26 = __asan_report_store8();
    *(_QWORD *)v25 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
    if ( *(_BYTE *)(((v25 + 8) >> 3) + 0x7FFF8000) )
      v26 = __asan_report_store8();
    *(_QWORD *)(v25 + 8) = "expected >";
    if ( *(_BYTE *)(((v25 + 16) >> 3) + 0x7FFF8000) )
      v26 = __asan_report_store8();
    *(_QWORD *)(v25 + 16) = v26;
    __asan_handle_no_return(v25 + 16);
    _cxa_throw(
      (void *)v25,
      (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
      (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
  }
  *text = (char *)(v18 + 1);
};

// Line 2165: range 000000000C295880-000000000C29A10A
void __fastcall boost::property_tree::detail::rapidxml::xml_document<char>::parse_node_contents<3136>(
        boost::property_tree::detail::rapidxml::xml_document<char> *const this,
        char **text,
        boost::property_tree::detail::rapidxml::xml_node<char> *node)
{
  char *v3; // r14
  double v4; // xmm0_8
  unsigned __int64 i; // rax
  __int64 v9; // rdx
  char **v10; // rdi
  char v11; // dl
  char v12; // cl
  char v13; // al
  char **v14; // rdi
  char *v15; // rax
  char v16; // dl
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // dl
  char v21; // cl
  __int64 v22; // rdx
  char v23; // dl
  char v24; // cl
  unsigned __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rdi
  char v28; // dl
  boost::property_tree::detail::rapidxml::xml_node<char> *v29; // rdx
  unsigned __int64 v30; // rbp
  __int64 v31; // rax
  char **v32; // rdi
  unsigned __int64 v33; // rax
  __int64 j; // rdx
  char v35; // dl
  char v36; // cl
  unsigned __int64 v37; // r13
  char v38; // cl
  __int64 v39; // rdx
  unsigned __int64 v40; // rsi
  unsigned __int64 v41; // rdi
  __int64 v42; // rsi
  char v43; // dl
  char v44; // dl
  char v45; // r8
  char v46; // r8
  char v47; // dl
  unsigned __int64 v48; // rdi
  __int64 v49; // rsi
  char v50; // dl
  unsigned __int64 v51; // rdi
  char v52; // dl
  char v53; // dl
  unsigned __int64 v54; // r15
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rcx
  int v57; // eax
  unsigned __int8 v58; // al
  char v59; // dl
  char v60; // dl
  char v61; // dl
  _BYTE *v62; // rdi
  char v63; // dl
  __int64 v64; // rsi
  char v65; // dl
  _BYTE *v66; // rdi
  char v67; // dl
  __int64 v68; // rsi
  char v69; // dl
  char v70; // dl
  _BYTE *v71; // rdi
  char v72; // dl
  __int64 v73; // rsi
  char v74; // dl
  char v75; // dl
  char v76; // dl
  unsigned __int64 v77; // rbx
  int v78; // eax
  unsigned __int8 v79; // al
  char v80; // dl
  char v81; // dl
  char v82; // dl
  char v83; // al
  _BYTE *v84; // rdi
  char v85; // dl
  __int64 v86; // rsi
  char v87; // dl
  _BYTE *v88; // rdi
  char v89; // dl
  __int64 v90; // rsi
  char v91; // dl
  char v92; // dl
  _BYTE *v93; // rdi
  char v94; // dl
  __int64 v95; // rsi
  char v96; // dl
  char v97; // dl
  char v98; // dl
  unsigned __int64 exception; // rbx
  unsigned __int64 v100; // rbx
  unsigned __int64 v101; // rdi
  char v102; // dl
  __int64 k; // rdx
  char v104; // dl
  char v105; // cl
  unsigned __int64 v106; // rsi
  char v107; // dl
  char v108; // si
  const unsigned __int8 *v109; // rsi
  char v110; // dl
  char v111; // al
  char **p_m_ptr; // rdi
  unsigned __int64 v113; // rax
  boost::property_tree::detail::rapidxml::memory_pool<char>::boost_ptree_raw_alloc_func *m_alloc_func; // rax
  char *v115; // rax
  char **v116; // rdx
  boost::property_tree::detail::rapidxml::memory_pool<char> *p_m_end; // rdi
  _QWORD *v118; // rdx
  char *v119; // rax
  char v120; // dl
  std::size_t v121; // rcx
  boost::property_tree::detail::rapidxml::xml_node<char> *m_last_node; // rdx
  char *m_value; // rax
  boost::property_tree::detail::rapidxml::xml_document<char> *p_m_value_size; // rdi
  char v125; // dl
  char **v126; // rsi
  char v127; // dl
  char v128; // dl

  while ( 2 )
  {
    v10 = text;
    if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
    {
      v4 = __asan_report_load8();
      goto LABEL_3;
    }
    for ( i = (unsigned __int64)*text; ; ++i )
    {
      v10 = (char **)i;
      v11 = *(_BYTE *)((i >> 3) + 0x7FFF8000);
      if ( v11 <= (char)(i & 7) && v11 )
      {
LABEL_3:
        i = __asan_report_load1(v10);
      }
      else
      {
        LOBYTE(v9) = *(_BYTE *)i;
        if ( (unsigned int)*(char *)i <= 0x7F )
        {
          v9 = (char)v9;
          goto LABEL_11;
        }
      }
      v9 = 122LL;
LABEL_11:
      v12 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v9] >> 3)
                     + 0x7FFF8000);
      if ( v12 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v9] & 7) )
      {
        if ( v12 )
          break;
      }
      if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v9] )
        goto LABEL_14;
    }
    i = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v9]);
LABEL_14:
    *text = (char *)i;
    v13 = *(_BYTE *)i;
after_data_node:
    if ( !v13 )
      goto LABEL_89;
    if ( v13 != 60 )
    {
      v32 = text;
      if ( !*(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
      {
        v3 = *text;
        v33 = (unsigned __int64)*text;
        goto LABEL_105;
      }
      v4 = __asan_report_load8();
LABEL_101:
      v33 = __asan_report_load1(v32);
LABEL_102:
      for ( j = 122LL; ; j = (char)j )
      {
        v36 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text_pure_with_ws[j] >> 3)
                       + 0x7FFF8000);
        if ( v36 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text_pure_with_ws[j] & 7) )
        {
          if ( v36 )
            break;
        }
        if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text_pure_with_ws[j] )
          goto LABEL_112;
        ++v33;
LABEL_105:
        v32 = (char **)v33;
        v35 = *(_BYTE *)((v33 >> 3) + 0x7FFF8000);
        if ( v35 <= (char)(v33 & 7) && v35 )
          goto LABEL_101;
        LOBYTE(j) = *(_BYTE *)v33;
        if ( (unsigned int)*(char *)v33 > 0x7F )
          goto LABEL_102;
      }
      v33 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text_pure_with_ws[j]);
LABEL_112:
      *text = (char *)v33;
      v37 = v33;
LABEL_343:
      while ( 1 )
      {
        v107 = *(_BYTE *)((v33 >> 3) + 0x7FFF8000);
        if ( v107 <= (char)(v33 & 7) )
        {
          if ( v107 )
            break;
        }
        v38 = *(_BYTE *)v33;
        if ( (unsigned int)*(char *)v33 > 0x7F )
          goto LABEL_114;
        v39 = v38;
LABEL_347:
        v108 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text[v39] >> 3)
                        + 0x7FFF8000);
        if ( v108 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text[v39] & 7)
          && v108 )
        {
          v33 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text[v39]);
        }
        else
        {
          if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text[v39] )
            goto LABEL_357;
          if ( v38 != 38 )
          {
LABEL_351:
            v109 = (const unsigned __int8 *)*(unsigned __int8 *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v39] >> 3)
                                                               + 0x7FFF8000);
            if ( (char)v109 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v39] & 7)
              && (_BYTE)v109 )
            {
              v33 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v39]);
LABEL_327:
              v101 = v37;
              v102 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
              if ( v102 > (char)(v37 & 7) || !v102 )
              {
                *(_BYTE *)v37++ = 32;
                ++v33;
                goto LABEL_335;
              }
              __asan_report_store1(v37, v109);
LABEL_331:
              v33 = __asan_report_load1(v101);
LABEL_332:
              for ( k = 122LL; ; k = (char)k )
              {
                v105 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[k] >> 3)
                                + 0x7FFF8000);
                v106 = (unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[k] & 7;
                if ( v105 <= (char)v106 )
                {
                  if ( v105 )
                    break;
                }
                if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[k] )
                  goto LABEL_343;
                ++v33;
LABEL_335:
                v101 = v33;
                v104 = *(_BYTE *)((v33 >> 3) + 0x7FFF8000);
                if ( v104 <= (char)(v33 & 7) && v104 )
                  goto LABEL_331;
                LOBYTE(k) = *(_BYTE *)v33;
                if ( (unsigned int)*(char *)v33 > 0x7F )
                  goto LABEL_332;
              }
              v33 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[k]);
LABEL_342:
              *(_BYTE *)v37 = v38;
              v37 = v106;
              continue;
            }
            v109 = boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace;
            if ( boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v39] )
              goto LABEL_327;
            ++v33;
            v106 = v37 + 1;
            v110 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
            if ( v110 > (char)(v37 & 7) || !v110 )
              goto LABEL_342;
            v33 = __asan_report_store1(v37, v106);
LABEL_357:
            *text = (char *)v33;
            v111 = *(_BYTE *)(((v37 - 1) >> 3) + 0x7FFF8000);
            if ( v111 <= (char)((v37 - 1) & 7) && v111 )
            {
              __asan_report_load1(v37 - 1);
            }
            else if ( *(_BYTE *)(v37 - 1) != 32 )
            {
              goto LABEL_360;
            }
            --v37;
LABEL_360:
            p_m_ptr = &this->m_ptr;
            if ( *(_BYTE *)(((unsigned __int64)&this->m_ptr >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8();
LABEL_407:
              __asan_report_load8();
LABEL_408:
              __asan_report_load8();
              goto LABEL_409;
            }
            v113 = (unsigned __int64)&this->m_ptr[-LODWORD(this->m_ptr) & 7];
            p_m_ptr = &this->m_end;
            if ( *(_BYTE *)(((unsigned __int64)&this->m_end >> 3) + 0x7FFF8000) )
              goto LABEL_407;
            if ( (char *)(v113 + 96) <= this->m_end )
              goto LABEL_370;
            p_m_ptr = (char **)&this->m_alloc_func;
            if ( *(_BYTE *)(((unsigned __int64)&this->m_alloc_func >> 3) + 0x7FFF8000) )
              goto LABEL_408;
            m_alloc_func = this->m_alloc_func;
            if ( m_alloc_func )
            {
              p_m_ptr = (char **)65558;
              v115 = (char *)((__int64 (__fastcall *)(__int64, double))m_alloc_func)(65558LL, v4);
              if ( v115 )
                goto LABEL_366;
LABEL_409:
              __asan_handle_no_return(p_m_ptr);
              __assert_fail(
                "memory",
                "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/"
                "property_tree/detail/rapidxml.hpp",
                0x23Eu,
                "char* boost::property_tree::detail::rapidxml::memory_pool<Ch>::allocate_raw(std::size_t) [with Ch = char"
                "; std::size_t = long unsigned int]");
            }
            v115 = (char *)operator new[](0x10016uLL);
LABEL_366:
            v116 = (char **)&v115[-(int)v115 & 7];
            p_m_end = &this->boost::property_tree::detail::rapidxml::memory_pool<char>;
            if ( *(_BYTE *)(((unsigned __int64)&this->boost::property_tree::detail::rapidxml::memory_pool<char> >> 3)
                          + 0x7FFF8000) )
            {
              __asan_report_load8();
LABEL_412:
              __asan_report_store8();
LABEL_413:
              __asan_report_store8();
LABEL_414:
              __asan_report_store8();
LABEL_415:
              __asan_report_store8();
LABEL_416:
              __asan_report_store8();
LABEL_417:
              __asan_report_store4(p_m_end);
LABEL_418:
              __asan_report_store8();
LABEL_419:
              __asan_report_store8();
LABEL_420:
              __asan_report_store8();
LABEL_421:
              __asan_report_store8();
LABEL_422:
              __asan_handle_no_return(p_m_end);
              __assert_fail(
                "child && !child->parent() && child->type() != node_document",
                "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/"
                "property_tree/detail/rapidxml.hpp",
                0x43Bu,
                "void boost::property_tree::detail::rapidxml::xml_node<Ch>::append_node(boost::property_tree::detail::rap"
                "idxml::xml_node<Ch>*) [with Ch = char]");
            }
            p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)&v115[-(int)v115 & 7];
            if ( *(_BYTE *)(((unsigned __int64)v116 >> 3) + 0x7FFF8000) )
              goto LABEL_412;
            *v116 = this->m_begin;
            this->m_begin = v115;
            v118 = v116 + 1;
            v119 = v115 + 65558;
            p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)&this->m_end;
            if ( *(_BYTE *)(((unsigned __int64)&this->m_end >> 3) + 0x7FFF8000) )
              goto LABEL_413;
            this->m_end = v119;
            v113 = (unsigned __int64)v118 + (-(int)v118 & 7);
LABEL_370:
            p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)&this->m_ptr;
            if ( *(_BYTE *)(((unsigned __int64)&this->m_ptr >> 3) + 0x7FFF8000) )
              goto LABEL_414;
            this->m_ptr = (char *)(v113 + 96);
            p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)v113;
            if ( *(_BYTE *)((v113 >> 3) + 0x7FFF8000) )
              goto LABEL_415;
            *(_QWORD *)v113 = 0LL;
            p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v113 + 32);
            if ( *(_BYTE *)(((v113 + 32) >> 3) + 0x7FFF8000) )
              goto LABEL_416;
            *(_QWORD *)(v113 + 32) = 0LL;
            p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v113 + 40);
            v120 = *(_BYTE *)(((v113 + 40) >> 3) + 0x7FFF8000);
            if ( v120 && v120 <= 3 )
              goto LABEL_417;
            *(_DWORD *)(v113 + 40) = 2;
            p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v113 + 48);
            if ( *(_BYTE *)(((v113 + 48) >> 3) + 0x7FFF8000) )
              goto LABEL_418;
            *(_QWORD *)(v113 + 48) = 0LL;
            p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v113 + 64);
            if ( *(_BYTE *)(((v113 + 64) >> 3) + 0x7FFF8000) )
              goto LABEL_419;
            *(_QWORD *)(v113 + 64) = 0LL;
            v121 = v37 - (_QWORD)v3;
            p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v113 + 8);
            if ( *(_BYTE *)(((v113 + 8) >> 3) + 0x7FFF8000) )
              goto LABEL_420;
            *(_QWORD *)(v113 + 8) = v3;
            p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v113 + 24);
            if ( *(_BYTE *)(((v113 + 24) >> 3) + 0x7FFF8000) )
              goto LABEL_421;
            *(_QWORD *)(v113 + 24) = v121;
            if ( !v113 || *(_QWORD *)(v113 + 32) || !*(_DWORD *)(v113 + 40) )
              goto LABEL_422;
            if ( *(_BYTE *)(((unsigned __int64)&node->m_first_node >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8();
LABEL_424:
              v4 = __asan_report_load8();
LABEL_425:
              __asan_report_store8();
              goto LABEL_426;
            }
            if ( !node->m_first_node )
              goto LABEL_427;
            if ( *(_BYTE *)(((unsigned __int64)&node->m_last_node >> 3) + 0x7FFF8000) )
              goto LABEL_424;
            m_last_node = node->m_last_node;
            if ( *(_BYTE *)(((v113 + 80) >> 3) + 0x7FFF8000) )
              goto LABEL_425;
            *(_QWORD *)(v113 + 80) = m_last_node;
            if ( !*(_BYTE *)(((unsigned __int64)&m_last_node->m_next_sibling >> 3) + 0x7FFF8000) )
            {
              m_last_node->m_next_sibling = (boost::property_tree::detail::rapidxml::xml_node<char> *)v113;
              goto LABEL_388;
            }
LABEL_426:
            v113 = __asan_report_store8();
LABEL_427:
            if ( *(_BYTE *)(((v113 + 80) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store8();
LABEL_430:
              __asan_report_store8();
LABEL_431:
              __asan_report_store8();
LABEL_432:
              __asan_report_store8();
LABEL_433:
              v4 = __asan_report_load8();
LABEL_434:
              m_value = (char *)&boost::property_tree::detail::rapidxml::xml_base<char>::nullstr(void)::zero;
              goto LABEL_393;
            }
            *(_QWORD *)(v113 + 80) = 0LL;
            node->m_first_node = (boost::property_tree::detail::rapidxml::xml_node<char> *)v113;
LABEL_388:
            if ( *(_BYTE *)(((unsigned __int64)&node->m_last_node >> 3) + 0x7FFF8000) )
              goto LABEL_430;
            node->m_last_node = (boost::property_tree::detail::rapidxml::xml_node<char> *)v113;
            if ( *(_BYTE *)(((v113 + 32) >> 3) + 0x7FFF8000) )
              goto LABEL_431;
            *(_QWORD *)(v113 + 32) = node;
            if ( *(_BYTE *)(((v113 + 88) >> 3) + 0x7FFF8000) )
              goto LABEL_432;
            *(_QWORD *)(v113 + 88) = 0LL;
            if ( *(_BYTE *)(((unsigned __int64)&node->m_value >> 3) + 0x7FFF8000) )
              goto LABEL_433;
            m_value = node->m_value;
            if ( !m_value )
              goto LABEL_434;
LABEL_393:
            p_m_value_size = (boost::property_tree::detail::rapidxml::xml_document<char> *)m_value;
            v125 = *(_BYTE *)(((unsigned __int64)m_value >> 3) + 0x7FFF8000);
            v126 = (char **)((unsigned __int8)m_value & 7);
            if ( v125 <= (char)v126 && v125 )
            {
              __asan_report_load1(m_value);
LABEL_436:
              __asan_report_store8();
LABEL_437:
              __asan_report_load8();
LABEL_438:
              __asan_report_load1(p_m_value_size);
LABEL_439:
              __asan_report_store1(p_m_value_size, v126);
              boost::property_tree::detail::rapidxml::xml_document<char>::parse_element<3136>(p_m_value_size, v126);
              return;
            }
            if ( *m_value )
              goto LABEL_398;
            node->m_value = v3;
            p_m_value_size = (boost::property_tree::detail::rapidxml::xml_document<char> *)&node->m_value_size;
            if ( *(_BYTE *)(((unsigned __int64)&node->m_value_size >> 3) + 0x7FFF8000) )
              goto LABEL_436;
            node->m_value_size = v121;
LABEL_398:
            p_m_value_size = (boost::property_tree::detail::rapidxml::xml_document<char> *)text;
            if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
              goto LABEL_437;
            p_m_value_size = (boost::property_tree::detail::rapidxml::xml_document<char> *)*text;
            v127 = *(_BYTE *)(((unsigned __int64)*text >> 3) + 0x7FFF8000);
            if ( v127 <= (*(_BYTE *)text & 7) && v127 )
              goto LABEL_438;
            v13 = **text;
            p_m_value_size = (boost::property_tree::detail::rapidxml::xml_document<char> *)v37;
            v128 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
            if ( v128 <= (char)(v37 & 7) && v128 )
              goto LABEL_439;
            *(_BYTE *)v37 = 0;
            goto after_data_node;
          }
        }
        v40 = *(unsigned __int8 *)(((v33 + 1) >> 3) + 0x7FFF8000);
        if ( (char)v40 <= (char)((v33 + 1) & 7) && (_BYTE)v40 )
        {
          v33 = __asan_report_load1(v33 + 1);
LABEL_138:
          if ( (_BYTE)v40 == 35 )
            goto LABEL_202;
          if ( (_BYTE)v40 != 97 )
            goto LABEL_351;
          v42 = *(unsigned __int8 *)(((v33 + 2) >> 3) + 0x7FFF8000);
          if ( (char)v42 <= (char)((v33 + 2) & 7) && (_BYTE)v42 )
          {
            v33 = __asan_report_load1(v33 + 2);
          }
          else
          {
            v42 = *(unsigned __int8 *)(v33 + 2);
            if ( (_BYTE)v42 != 109 )
              goto LABEL_143;
          }
          v41 = v33 + 3;
          v45 = *(_BYTE *)(((v33 + 3) >> 3) + 0x7FFF8000);
          if ( v45 <= (char)((v33 + 3) & 7) && v45 )
          {
            __asan_report_load1(v41);
LABEL_167:
            __asan_report_load1(v41);
LABEL_168:
            __asan_report_store1(v41, v42);
LABEL_169:
            __asan_report_load1(v41);
LABEL_170:
            __asan_report_load1(v41);
LABEL_171:
            __asan_report_load1(v41);
LABEL_172:
            __asan_report_store1(v41, v42);
LABEL_173:
            __asan_report_load1(v41);
LABEL_174:
            __asan_report_load1(v41);
LABEL_175:
            __asan_report_load1(v41);
LABEL_176:
            __asan_report_load1(v41);
LABEL_177:
            v33 = __asan_report_store1(v41, v42);
            goto LABEL_178;
          }
          if ( *(_BYTE *)(v33 + 3) != 112 )
            goto LABEL_143;
          v41 = v33 + 4;
          v46 = *(_BYTE *)(((v33 + 4) >> 3) + 0x7FFF8000);
          if ( v46 <= (char)((v33 + 4) & 7) && v46 )
            goto LABEL_167;
          if ( *(_BYTE *)(v33 + 4) == 59 )
          {
            v41 = v37;
            v47 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
            if ( v47 <= (char)(v37 & 7) && v47 )
              goto LABEL_168;
            *(_BYTE *)v37++ = 38;
            v33 += 5LL;
          }
          else
          {
LABEL_143:
            if ( (_BYTE)v42 != 112 )
              goto LABEL_351;
            v41 = v33 + 3;
            v42 = *(unsigned __int8 *)(((v33 + 3) >> 3) + 0x7FFF8000);
            if ( (char)v42 <= (char)((v33 + 3) & 7) && (_BYTE)v42 )
              goto LABEL_169;
            if ( *(_BYTE *)(v33 + 3) != 111 )
              goto LABEL_351;
            v41 = v33 + 4;
            v42 = *(unsigned __int8 *)(((v33 + 4) >> 3) + 0x7FFF8000);
            if ( (char)v42 <= (char)((v33 + 4) & 7) && (_BYTE)v42 )
              goto LABEL_170;
            if ( *(_BYTE *)(v33 + 4) != 115 )
              goto LABEL_351;
            v41 = v33 + 5;
            v42 = *(unsigned __int8 *)(((v33 + 5) >> 3) + 0x7FFF8000);
            if ( (char)v42 <= (char)((v33 + 5) & 7) && (_BYTE)v42 )
              goto LABEL_171;
            if ( *(_BYTE *)(v33 + 5) != 59 )
              goto LABEL_351;
            v41 = v37;
            v44 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
            if ( v44 <= (char)(v37 & 7) && v44 )
              goto LABEL_172;
            *(_BYTE *)v37++ = 39;
            v33 += 6LL;
          }
        }
        else
        {
          v40 = *(unsigned __int8 *)(v33 + 1);
          if ( (_BYTE)v40 == 103 )
          {
LABEL_178:
            v48 = v33 + 2;
            v49 = *(unsigned __int8 *)(((v33 + 2) >> 3) + 0x7FFF8000);
            if ( (char)v49 <= (char)((v33 + 2) & 7) && (_BYTE)v49 )
            {
              __asan_report_load1(v48);
LABEL_188:
              __asan_report_load1(v48);
LABEL_189:
              v33 = __asan_report_store1(v48, v49);
              goto LABEL_190;
            }
            if ( *(_BYTE *)(v33 + 2) != 116 )
              goto LABEL_351;
            v48 = v33 + 3;
            v49 = *(unsigned __int8 *)(((v33 + 3) >> 3) + 0x7FFF8000);
            if ( (char)v49 <= (char)((v33 + 3) & 7) && (_BYTE)v49 )
              goto LABEL_188;
            if ( *(_BYTE *)(v33 + 3) != 59 )
              goto LABEL_351;
            v48 = v37;
            v50 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
            if ( v50 <= (char)(v37 & 7) && v50 )
              goto LABEL_189;
            *(_BYTE *)v37++ = 62;
            v33 += 4LL;
          }
          else
          {
            if ( (char)v40 <= 103 )
              goto LABEL_138;
            if ( (_BYTE)v40 == 108 )
            {
LABEL_190:
              v51 = v33 + 2;
              v40 = *(unsigned __int8 *)(((v33 + 2) >> 3) + 0x7FFF8000);
              if ( (char)v40 <= (char)((v33 + 2) & 7) && (_BYTE)v40 )
              {
                __asan_report_load1(v51);
LABEL_200:
                __asan_report_load1(v51);
LABEL_201:
                v33 = __asan_report_store1(v51, v40);
LABEL_202:
                v53 = *(_BYTE *)(((v33 + 2) >> 3) + 0x7FFF8000);
                if ( v53 <= (char)((v33 + 2) & 7) && v53 )
                {
                  v33 = __asan_report_load1(v33 + 2);
                }
                else if ( *(_BYTE *)(v33 + 2) != 120 )
                {
                  v54 = v33 + 2;
                  v55 = 0LL;
                  while ( 1 )
                  {
                    v80 = *(_BYTE *)((v54 >> 3) + 0x7FFF8000);
                    if ( v80 <= (char)(v54 & 7) && v80 )
                    {
                      v78 = __asan_report_load1(v54);
                    }
                    else
                    {
                      v78 = *(unsigned __int8 *)v54;
                      v81 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v54] >> 3)
                                     + 0x7FFF8000);
                      v40 = (unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v54] & 7;
                      if ( v81 <= (char)v40 && v81 )
                      {
                        __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v54]);
LABEL_269:
                        if ( v55 <= 0x7F )
                        {
                          v82 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
                          if ( v82 > (char)(v37 & 7) || !v82 )
                          {
                            *(_BYTE *)v37++ = v55;
                            goto LABEL_273;
                          }
                          __asan_report_store1(v37, v40);
                        }
                        if ( v55 <= 0x7FF )
                        {
                          v84 = (_BYTE *)(v37 + 1);
                          v85 = *(_BYTE *)(((v37 + 1) >> 3) + 0x7FFF8000);
                          v86 = ((_BYTE)v37 + 1) & 7;
                          if ( v85 <= (char)v86 && v85 )
                          {
                            __asan_report_store1(v84, v86);
                          }
                          else
                          {
                            *(_BYTE *)(v37 + 1) = v55 & 0x3F | 0x80;
                            v84 = (_BYTE *)v37;
                            v87 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
                            if ( v87 > (char)(v37 & 7) || !v87 )
                            {
                              *(_BYTE *)v37 = (v55 >> 6) | 0xC0;
                              v37 += 2LL;
                              goto LABEL_273;
                            }
                          }
                          __asan_report_store1(v84, v86);
                        }
                        if ( v55 > 0xFFFF )
                          goto LABEL_297;
                        v88 = (_BYTE *)(v37 + 2);
                        v89 = *(_BYTE *)(((v37 + 2) >> 3) + 0x7FFF8000);
                        v90 = ((_BYTE)v37 + 2) & 7;
                        if ( v89 <= (char)v90 && v89 )
                        {
                          __asan_report_store1(v88, v90);
                        }
                        else
                        {
                          *(_BYTE *)(v37 + 2) = v55 & 0x3F | 0x80;
                          v88 = (_BYTE *)(v37 + 1);
                          v91 = *(_BYTE *)(((v37 + 1) >> 3) + 0x7FFF8000);
                          v90 = ((_BYTE)v37 + 1) & 7;
                          if ( v91 > (char)v90 || !v91 )
                          {
                            *(_BYTE *)(v37 + 1) = (v55 >> 6) & 0x3F | 0x80;
                            v88 = (_BYTE *)v37;
                            v92 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
                            if ( v92 > (char)(v37 & 7) || !v92 )
                            {
                              *(_BYTE *)v37 = (v55 >> 12) | 0xE0;
                              v37 += 3LL;
                              goto LABEL_273;
                            }
LABEL_296:
                            __asan_report_store1(v88, v90);
LABEL_297:
                            if ( v55 > 0x10FFFF )
                              goto LABEL_311;
                            v93 = (_BYTE *)(v37 + 3);
                            v94 = *(_BYTE *)(((v37 + 3) >> 3) + 0x7FFF8000);
                            v95 = ((_BYTE)v37 + 3) & 7;
                            if ( v94 <= (char)v95 && v94 )
                            {
                              __asan_report_store1(v93, v95);
                            }
                            else
                            {
                              *(_BYTE *)(v37 + 3) = v55 & 0x3F | 0x80;
                              v93 = (_BYTE *)(v37 + 2);
                              v96 = *(_BYTE *)(((v37 + 2) >> 3) + 0x7FFF8000);
                              v95 = ((_BYTE)v37 + 2) & 7;
                              if ( v96 > (char)v95 || !v96 )
                              {
                                *(_BYTE *)(v37 + 2) = (v55 >> 6) & 0x3F | 0x80;
                                v93 = (_BYTE *)(v37 + 1);
                                v97 = *(_BYTE *)(((v37 + 1) >> 3) + 0x7FFF8000);
                                v95 = ((_BYTE)v37 + 1) & 7;
                                if ( v97 > (char)v95 || !v97 )
                                {
                                  *(_BYTE *)(v37 + 1) = (v55 >> 12) & 0x3F | 0x80;
                                  v93 = (_BYTE *)v37;
                                  v98 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
                                  if ( v98 > (char)(v37 & 7) || !v98 )
                                  {
                                    *(_BYTE *)v37 = (v55 >> 18) | 0xF0;
                                    v37 += 4LL;
                                    goto LABEL_273;
                                  }
LABEL_310:
                                  __asan_report_store1(v93, v95);
LABEL_311:
                                  exception = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                                  if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
                                    __asan_report_store8();
                                  *(_QWORD *)exception = &`vtable for'boost::property_tree::detail::rapidxml::parse_error
                                                       + 2;
                                  if ( *(_BYTE *)(((exception + 8) >> 3) + 0x7FFF8000) )
                                    __asan_report_store8();
                                  *(_QWORD *)(exception + 8) = "invalid numeric character entity";
                                  if ( *(_BYTE *)(((exception + 16) >> 3) + 0x7FFF8000) )
                                    __asan_report_store8();
                                  *(_QWORD *)(exception + 16) = v37;
                                  __asan_handle_no_return(exception + 16);
                                  _cxa_throw(
                                    (void *)exception,
                                    (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                                    (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                                }
LABEL_309:
                                __asan_report_store1(v93, v95);
                                goto LABEL_310;
                              }
                            }
                            __asan_report_store1(v93, v95);
                            goto LABEL_309;
                          }
                        }
                        __asan_report_store1(v88, v90);
                        goto LABEL_296;
                      }
                    }
                    v79 = boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[v78];
                    if ( v79 == 0xFF )
                      goto LABEL_269;
                    v55 = v79 + 10 * v55;
                    ++v54;
                  }
                }
                v54 = v33 + 3;
                v56 = 0LL;
                while ( 1 )
                {
                  v59 = *(_BYTE *)((v54 >> 3) + 0x7FFF8000);
                  if ( v59 <= (char)(v54 & 7) && v59 )
                  {
                    v57 = __asan_report_load1(v54);
                  }
                  else
                  {
                    v57 = *(unsigned __int8 *)v54;
                    v60 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v54] >> 3)
                                   + 0x7FFF8000);
                    v40 = (unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v54] & 7;
                    if ( v60 <= (char)v40 && v60 )
                    {
                      __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v54]);
LABEL_216:
                      if ( v56 <= 0x7F )
                      {
                        v61 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
                        if ( v61 > (char)(v37 & 7) || !v61 )
                        {
                          *(_BYTE *)v37++ = v56;
LABEL_273:
                          v83 = *(_BYTE *)((v54 >> 3) + 0x7FFF8000);
                          if ( v83 <= (char)(v54 & 7) && v83 )
                          {
                            __asan_report_load1(v54);
                          }
                          else if ( *(_BYTE *)v54 == 59 )
                          {
                            v33 = v54 + 1;
                            goto LABEL_343;
                          }
                          v100 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                          if ( *(_BYTE *)((v100 >> 3) + 0x7FFF8000) )
                            __asan_report_store8();
                          *(_QWORD *)v100 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                          if ( *(_BYTE *)(((v100 + 8) >> 3) + 0x7FFF8000) )
                            __asan_report_store8();
                          *(_QWORD *)(v100 + 8) = "expected ;";
                          if ( *(_BYTE *)(((v100 + 16) >> 3) + 0x7FFF8000) )
                            __asan_report_store8();
                          *(_QWORD *)(v100 + 16) = v54;
                          __asan_handle_no_return(v100 + 16);
                          _cxa_throw(
                            (void *)v100,
                            (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                            (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                        }
                        __asan_report_store1(v37, v40);
                      }
                      if ( v56 <= 0x7FF )
                      {
                        v62 = (_BYTE *)(v37 + 1);
                        v63 = *(_BYTE *)(((v37 + 1) >> 3) + 0x7FFF8000);
                        v64 = ((_BYTE)v37 + 1) & 7;
                        if ( v63 <= (char)v64 && v63 )
                        {
                          __asan_report_store1(v62, v64);
                        }
                        else
                        {
                          *(_BYTE *)(v37 + 1) = v56 & 0x3F | 0x80;
                          v62 = (_BYTE *)v37;
                          v65 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
                          if ( v65 > (char)(v37 & 7) || !v65 )
                          {
                            *(_BYTE *)v37 = (v56 >> 6) | 0xC0;
                            v37 += 2LL;
                            goto LABEL_273;
                          }
                        }
                        __asan_report_store1(v62, v64);
                      }
                      if ( v56 > 0xFFFF )
                        goto LABEL_240;
                      v66 = (_BYTE *)(v37 + 2);
                      v67 = *(_BYTE *)(((v37 + 2) >> 3) + 0x7FFF8000);
                      v68 = ((_BYTE)v37 + 2) & 7;
                      if ( v67 <= (char)v68 && v67 )
                      {
                        __asan_report_store1(v66, v68);
                      }
                      else
                      {
                        *(_BYTE *)(v37 + 2) = v56 & 0x3F | 0x80;
                        v66 = (_BYTE *)(v37 + 1);
                        v69 = *(_BYTE *)(((v37 + 1) >> 3) + 0x7FFF8000);
                        v68 = ((_BYTE)v37 + 1) & 7;
                        if ( v69 > (char)v68 || !v69 )
                        {
                          *(_BYTE *)(v37 + 1) = (v56 >> 6) & 0x3F | 0x80;
                          v66 = (_BYTE *)v37;
                          v70 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
                          if ( v70 > (char)(v37 & 7) || !v70 )
                          {
                            *(_BYTE *)v37 = (v56 >> 12) | 0xE0;
                            v37 += 3LL;
                            goto LABEL_273;
                          }
LABEL_239:
                          __asan_report_store1(v66, v68);
LABEL_240:
                          if ( v56 > 0x10FFFF )
                            goto LABEL_254;
                          v71 = (_BYTE *)(v37 + 3);
                          v72 = *(_BYTE *)(((v37 + 3) >> 3) + 0x7FFF8000);
                          v73 = ((_BYTE)v37 + 3) & 7;
                          if ( v72 <= (char)v73 && v72 )
                          {
                            __asan_report_store1(v71, v73);
                          }
                          else
                          {
                            *(_BYTE *)(v37 + 3) = v56 & 0x3F | 0x80;
                            v71 = (_BYTE *)(v37 + 2);
                            v74 = *(_BYTE *)(((v37 + 2) >> 3) + 0x7FFF8000);
                            v73 = ((_BYTE)v37 + 2) & 7;
                            if ( v74 > (char)v73 || !v74 )
                            {
                              *(_BYTE *)(v37 + 2) = (v56 >> 6) & 0x3F | 0x80;
                              v71 = (_BYTE *)(v37 + 1);
                              v75 = *(_BYTE *)(((v37 + 1) >> 3) + 0x7FFF8000);
                              v73 = ((_BYTE)v37 + 1) & 7;
                              if ( v75 > (char)v73 || !v75 )
                              {
                                *(_BYTE *)(v37 + 1) = (v56 >> 12) & 0x3F | 0x80;
                                v71 = (_BYTE *)v37;
                                v76 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
                                if ( v76 > (char)(v37 & 7) || !v76 )
                                {
                                  *(_BYTE *)v37 = (v56 >> 18) | 0xF0;
                                  v37 += 4LL;
                                  goto LABEL_273;
                                }
LABEL_253:
                                __asan_report_store1(v71, v73);
LABEL_254:
                                v77 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                                if ( *(_BYTE *)((v77 >> 3) + 0x7FFF8000) )
                                  __asan_report_store8();
                                *(_QWORD *)v77 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                                if ( *(_BYTE *)(((v77 + 8) >> 3) + 0x7FFF8000) )
                                  __asan_report_store8();
                                *(_QWORD *)(v77 + 8) = "invalid numeric character entity";
                                if ( *(_BYTE *)(((v77 + 16) >> 3) + 0x7FFF8000) )
                                  __asan_report_store8();
                                *(_QWORD *)(v77 + 16) = v37;
                                __asan_handle_no_return(v77 + 16);
                                _cxa_throw(
                                  (void *)v77,
                                  (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                                  (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                              }
LABEL_252:
                              __asan_report_store1(v71, v73);
                              goto LABEL_253;
                            }
                          }
                          __asan_report_store1(v71, v73);
                          goto LABEL_252;
                        }
                      }
                      __asan_report_store1(v66, v68);
                      goto LABEL_239;
                    }
                  }
                  v58 = boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[v57];
                  if ( v58 == 0xFF )
                    goto LABEL_216;
                  v56 = v58 + 16 * v56;
                  ++v54;
                }
              }
              if ( *(_BYTE *)(v33 + 2) != 116 )
                goto LABEL_351;
              v51 = v33 + 3;
              v40 = *(unsigned __int8 *)(((v33 + 3) >> 3) + 0x7FFF8000);
              if ( (char)v40 <= (char)((v33 + 3) & 7) && (_BYTE)v40 )
                goto LABEL_200;
              if ( *(_BYTE *)(v33 + 3) != 59 )
                goto LABEL_351;
              v51 = v37;
              v52 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
              if ( v52 <= (char)(v37 & 7) && v52 )
                goto LABEL_201;
              *(_BYTE *)v37++ = 60;
              v33 += 4LL;
            }
            else
            {
              if ( (_BYTE)v40 != 113 )
                goto LABEL_351;
              v41 = v33 + 2;
              v42 = *(unsigned __int8 *)(((v33 + 2) >> 3) + 0x7FFF8000);
              if ( (char)v42 <= (char)((v33 + 2) & 7) && (_BYTE)v42 )
                goto LABEL_173;
              if ( *(_BYTE *)(v33 + 2) != 117 )
                goto LABEL_351;
              v41 = v33 + 3;
              v42 = *(unsigned __int8 *)(((v33 + 3) >> 3) + 0x7FFF8000);
              if ( (char)v42 <= (char)((v33 + 3) & 7) && (_BYTE)v42 )
                goto LABEL_174;
              if ( *(_BYTE *)(v33 + 3) != 111 )
                goto LABEL_351;
              v41 = v33 + 4;
              v42 = *(unsigned __int8 *)(((v33 + 4) >> 3) + 0x7FFF8000);
              if ( (char)v42 <= (char)((v33 + 4) & 7) && (_BYTE)v42 )
                goto LABEL_175;
              if ( *(_BYTE *)(v33 + 4) != 116 )
                goto LABEL_351;
              v41 = v33 + 5;
              v42 = *(unsigned __int8 *)(((v33 + 5) >> 3) + 0x7FFF8000);
              if ( (char)v42 <= (char)((v33 + 5) & 7) && (_BYTE)v42 )
                goto LABEL_176;
              if ( *(_BYTE *)(v33 + 5) != 59 )
                goto LABEL_351;
              v41 = v37;
              v43 = *(_BYTE *)((v37 >> 3) + 0x7FFF8000);
              if ( v43 <= (char)(v37 & 7) && v43 )
                goto LABEL_177;
              *(_BYTE *)v37++ = 34;
              v33 += 6LL;
            }
          }
        }
      }
      v33 = __asan_report_load1(v33);
LABEL_114:
      v39 = 122LL;
      goto LABEL_347;
    }
    v14 = text;
    if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_25:
      v15 = (char *)__asan_report_load1(v14);
      break;
    }
    v15 = *text;
    v14 = (char **)(*text + 1);
    v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
    if ( v16 <= ((*(_BYTE *)text + 1) & 7) && v16 )
      goto LABEL_25;
    if ( v15[1] != 47 )
    {
      *text = v15 + 1;
      v17 = (__int64)boost::property_tree::detail::rapidxml::xml_document<char>::parse_node<3136>(this, text);
      if ( !v17 )
        continue;
      v27 = v17 + 32;
      if ( *(_BYTE *)(((unsigned __int64)(v17 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else
      {
        if ( *(_QWORD *)(v17 + 32) )
          goto LABEL_78;
        v27 = v17 + 40;
        v28 = *(_BYTE *)(((unsigned __int64)(v17 + 40) >> 3) + 0x7FFF8000);
        if ( !v28 || v28 > 3 )
        {
          if ( *(_DWORD *)(v17 + 40) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&node->m_first_node >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8();
            }
            else
            {
              if ( !node->m_first_node )
                goto LABEL_83;
              if ( !*(_BYTE *)(((unsigned __int64)&node->m_last_node >> 3) + 0x7FFF8000) )
              {
                v29 = node->m_last_node;
                if ( !*(_BYTE *)(((unsigned __int64)(v17 + 80) >> 3) + 0x7FFF8000) )
                {
                  *(_QWORD *)(v17 + 80) = v29;
                  if ( !*(_BYTE *)(((unsigned __int64)&v29->m_next_sibling >> 3) + 0x7FFF8000) )
                  {
                    v29->m_next_sibling = (boost::property_tree::detail::rapidxml::xml_node<char> *)v17;
                    goto LABEL_72;
                  }
LABEL_82:
                  v17 = __asan_report_store8();
LABEL_83:
                  if ( *(_BYTE *)(((unsigned __int64)(v17 + 80) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store8();
                  }
                  else
                  {
                    *(_QWORD *)(v17 + 80) = 0LL;
                    node->m_first_node = (boost::property_tree::detail::rapidxml::xml_node<char> *)v17;
LABEL_72:
                    if ( !*(_BYTE *)(((unsigned __int64)&node->m_last_node >> 3) + 0x7FFF8000) )
                    {
                      node->m_last_node = (boost::property_tree::detail::rapidxml::xml_node<char> *)v17;
                      if ( !*(_BYTE *)(((unsigned __int64)(v17 + 32) >> 3) + 0x7FFF8000) )
                      {
                        *(_QWORD *)(v17 + 32) = node;
                        if ( !*(_BYTE *)(((unsigned __int64)(v17 + 88) >> 3) + 0x7FFF8000) )
                        {
                          *(_QWORD *)(v17 + 88) = 0LL;
                          continue;
                        }
LABEL_88:
                        __asan_report_store8();
LABEL_89:
                        v30 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                        if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
                          __asan_report_load8();
                        v31 = (__int64)*text;
                        if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
                          v31 = __asan_report_store8();
                        *(_QWORD *)v30 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                        if ( *(_BYTE *)(((v30 + 8) >> 3) + 0x7FFF8000) )
                          v31 = __asan_report_store8();
                        *(_QWORD *)(v30 + 8) = "unexpected end of data";
                        if ( *(_BYTE *)(((v30 + 16) >> 3) + 0x7FFF8000) )
                          v31 = __asan_report_store8();
                        *(_QWORD *)(v30 + 16) = v31;
                        __asan_handle_no_return(v30 + 16);
                        _cxa_throw(
                          (void *)v30,
                          (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                          (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                      }
LABEL_87:
                      __asan_report_store8();
                      goto LABEL_88;
                    }
                  }
                  __asan_report_store8();
                  goto LABEL_87;
                }
LABEL_81:
                __asan_report_store8();
                goto LABEL_82;
              }
            }
            v4 = __asan_report_load8();
            goto LABEL_81;
          }
LABEL_78:
          __asan_handle_no_return(v27);
          __assert_fail(
            "child && !child->parent() && child->type() != node_document",
            "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/prop"
            "erty_tree/detail/rapidxml.hpp",
            0x43Bu,
            "void boost::property_tree::detail::rapidxml::xml_node<Ch>::append_node(boost::property_tree::detail::rapidxm"
            "l::xml_node<Ch>*) [with Ch = char]");
        }
      }
      __asan_report_load4(v27);
      goto LABEL_78;
    }
    break;
  }
  v18 = (unsigned __int64)(v15 + 2);
  *text = (char *)v18;
  while ( 2 )
  {
    v20 = *(_BYTE *)((v18 >> 3) + 0x7FFF8000);
    if ( v20 <= (char)(v18 & 7) && v20 )
    {
      v18 = __asan_report_load1(v18);
    }
    else
    {
      LOBYTE(v19) = *(_BYTE *)v18;
      if ( (unsigned int)*(char *)v18 <= 0x7F )
      {
        v19 = (char)v19;
        goto LABEL_35;
      }
    }
    v19 = 122LL;
LABEL_35:
    v21 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v19] >> 3)
                   + 0x7FFF8000);
    if ( v21 > ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v19] & 7)
      || !v21 )
    {
      if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v19] )
        goto LABEL_38;
      ++v18;
      continue;
    }
    break;
  }
  v18 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v19]);
LABEL_38:
  *text = (char *)v18;
  while ( 2 )
  {
    v23 = *(_BYTE *)((v18 >> 3) + 0x7FFF8000);
    if ( v23 <= (char)(v18 & 7) && v23 )
    {
      v18 = __asan_report_load1(v18);
    }
    else
    {
      LOBYTE(v22) = *(_BYTE *)v18;
      if ( (unsigned int)*(char *)v18 <= 0x7F )
      {
        v22 = (char)v22;
        goto LABEL_47;
      }
    }
    v22 = 122LL;
LABEL_47:
    v24 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v22] >> 3)
                   + 0x7FFF8000);
    if ( v24 > ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v22] & 7)
      || !v24 )
    {
      if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v22] )
        goto LABEL_50;
      ++v18;
      continue;
    }
    break;
  }
  v18 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v22]);
LABEL_50:
  *text = (char *)v18;
  if ( *(_BYTE *)v18 != 62 )
  {
    v25 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
    if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v26 = (__int64)*text;
    if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
      v26 = __asan_report_store8();
    *(_QWORD *)v25 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
    if ( *(_BYTE *)(((v25 + 8) >> 3) + 0x7FFF8000) )
      v26 = __asan_report_store8();
    *(_QWORD *)(v25 + 8) = "expected >";
    if ( *(_BYTE *)(((v25 + 16) >> 3) + 0x7FFF8000) )
      v26 = __asan_report_store8();
    *(_QWORD *)(v25 + 16) = v26;
    __asan_handle_no_return(v25 + 16);
    _cxa_throw(
      (void *)v25,
      (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
      (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
  }
  *text = (char *)(v18 + 1);
};

// Line 2165: range 000000000C2A33CA-000000000C2A5F41
void __fastcall boost::property_tree::detail::rapidxml::xml_document<char>::parse_node_contents<64>(
        boost::property_tree::detail::rapidxml::xml_document<char> *const this,
        char **text,
        boost::property_tree::detail::rapidxml::xml_node<char> *node)
{
  char *v6; // rax
  __int64 v7; // rax
  void *v8; // rdi
  char *v9; // r12
  char v10; // al
  char v11; // al
  char v12; // dl
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  char v15; // dl
  char v16; // cl
  __int64 v17; // rdx
  char v18; // dl
  char v19; // cl
  unsigned __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdi
  char v23; // dl
  boost::property_tree::detail::rapidxml::xml_node<char> *m_last_node; // rdx
  unsigned __int64 exception; // rbx
  __int64 v26; // rax
  char **v27; // rdi
  unsigned __int64 v28; // rax
  __int64 i; // rdx
  char v30; // dl
  char v31; // cl
  unsigned __int64 v32; // rsi
  unsigned __int64 j; // rbx
  __int64 v34; // rdx
  char v35; // dl
  char v36; // dl
  unsigned __int64 v37; // rdi
  char v38; // dl
  char v39; // dl
  char v40; // dl
  char v41; // dl
  char v42; // dl
  _BYTE *v43; // rdi
  char v44; // dl
  char v45; // dl
  char v46; // dl
  char v47; // dl
  char v48; // dl
  char v49; // dl
  char v50; // cl
  char v51; // cl
  char v52; // dl
  unsigned __int64 v53; // rdi
  char v54; // dl
  char v55; // dl
  char v56; // dl
  unsigned __int64 v57; // rdi
  char v58; // dl
  char v59; // dl
  char v60; // dl
  char v61; // dl
  unsigned __int64 v62; // r15
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  int v65; // eax
  unsigned __int8 v66; // al
  char v67; // dl
  char v68; // dl
  char v69; // dl
  _BYTE *v70; // rdi
  char v71; // dl
  char v72; // dl
  _BYTE *v73; // rdi
  char v74; // dl
  char v75; // dl
  char v76; // dl
  _BYTE *v77; // rdi
  char v78; // dl
  char v79; // dl
  char v80; // dl
  char v81; // dl
  unsigned __int64 v82; // rbp
  int v83; // eax
  unsigned __int8 v84; // al
  char v85; // dl
  char v86; // dl
  char v87; // dl
  char v88; // al
  _BYTE *v89; // rdi
  char v90; // dl
  char v91; // dl
  _BYTE *v92; // rdi
  char v93; // dl
  char v94; // dl
  char v95; // dl
  _BYTE *v96; // rdi
  char v97; // dl
  char v98; // dl
  char v99; // dl
  char v100; // dl
  unsigned __int64 v101; // rbp
  unsigned __int64 v102; // rbx
  char v103; // dl
  char v104; // cl
  char v105; // dl
  char **p_m_ptr; // rdi
  unsigned __int64 v107; // rax
  boost::property_tree::detail::rapidxml::memory_pool<char>::boost_ptree_raw_alloc_func *m_alloc_func; // rax
  char *v109; // rax
  char **v110; // rdx
  boost::property_tree::detail::rapidxml::memory_pool<char> *p_m_end; // rdi
  _QWORD *v112; // rdx
  char *v113; // rax
  char v114; // dl
  std::size_t v115; // rcx
  boost::property_tree::detail::rapidxml::xml_node<char> *v116; // rdx
  char *m_value; // rax
  boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *p_m_value_size; // rdi
  char v119; // dl
  boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> >::parent_ref v120; // rsi
  char v121; // dl
  char v122; // dl

  while ( 1 )
  {
    v8 = text;
    if ( !*(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
      break;
    __asan_report_load8();
LABEL_3:
    __asan_report_load1(v8);
LABEL_4:
    __asan_report_load8();
LABEL_5:
    if ( v6[1] == 47 )
      goto LABEL_17;
    *text = v6 + 1;
    v7 = (__int64)boost::property_tree::detail::rapidxml::xml_document<char>::parse_node<64>(this, text);
    if ( v7 )
    {
      v22 = v7 + 32;
      if ( *(_BYTE *)(((unsigned __int64)(v7 + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
LABEL_68:
        __asan_report_load4(v22);
LABEL_69:
        __asan_handle_no_return(v22);
        __assert_fail(
          "child && !child->parent() && child->type() != node_document",
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/proper"
          "ty_tree/detail/rapidxml.hpp",
          0x43Bu,
          "void boost::property_tree::detail::rapidxml::xml_node<Ch>::append_node(boost::property_tree::detail::rapidxml:"
          ":xml_node<Ch>*) [with Ch = char]");
      }
      if ( *(_QWORD *)(v7 + 32) )
        goto LABEL_69;
      v22 = v7 + 40;
      v23 = *(_BYTE *)(((unsigned __int64)(v7 + 40) >> 3) + 0x7FFF8000);
      if ( v23 && v23 <= 3 )
        goto LABEL_68;
      if ( !*(_DWORD *)(v7 + 40) )
        goto LABEL_69;
      if ( *(_BYTE *)(((unsigned __int64)&node->m_first_node >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
LABEL_71:
        __asan_report_load8();
LABEL_72:
        __asan_report_store8();
LABEL_73:
        v7 = __asan_report_store8();
        goto LABEL_74;
      }
      if ( node->m_first_node )
      {
        if ( *(_BYTE *)(((unsigned __int64)&node->m_last_node >> 3) + 0x7FFF8000) )
          goto LABEL_71;
        m_last_node = node->m_last_node;
        if ( *(_BYTE *)(((unsigned __int64)(v7 + 80) >> 3) + 0x7FFF8000) )
          goto LABEL_72;
        *(_QWORD *)(v7 + 80) = m_last_node;
        if ( !*(_BYTE *)(((unsigned __int64)&m_last_node->m_next_sibling >> 3) + 0x7FFF8000) )
        {
          m_last_node->m_next_sibling = (boost::property_tree::detail::rapidxml::xml_node<char> *)v7;
          goto LABEL_63;
        }
        goto LABEL_73;
      }
LABEL_74:
      if ( *(_BYTE *)(((unsigned __int64)(v7 + 80) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store8();
LABEL_77:
        __asan_report_store8();
LABEL_78:
        __asan_report_store8();
LABEL_79:
        __asan_report_store8();
LABEL_80:
        exception = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
        if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v26 = (__int64)*text;
        if ( *(_BYTE *)((exception >> 3) + 0x7FFF8000) )
          v26 = __asan_report_store8();
        *(_QWORD *)exception = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
        if ( *(_BYTE *)(((exception + 8) >> 3) + 0x7FFF8000) )
          v26 = __asan_report_store8();
        *(_QWORD *)(exception + 8) = "unexpected end of data";
        if ( *(_BYTE *)(((exception + 16) >> 3) + 0x7FFF8000) )
          v26 = __asan_report_store8();
        *(_QWORD *)(exception + 16) = v26;
        __asan_handle_no_return(exception + 16);
        _cxa_throw(
          (void *)exception,
          (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
          (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
      }
      *(_QWORD *)(v7 + 80) = 0LL;
      node->m_first_node = (boost::property_tree::detail::rapidxml::xml_node<char> *)v7;
LABEL_63:
      if ( *(_BYTE *)(((unsigned __int64)&node->m_last_node >> 3) + 0x7FFF8000) )
        goto LABEL_77;
      node->m_last_node = (boost::property_tree::detail::rapidxml::xml_node<char> *)v7;
      if ( *(_BYTE *)(((unsigned __int64)(v7 + 32) >> 3) + 0x7FFF8000) )
        goto LABEL_78;
      *(_QWORD *)(v7 + 32) = node;
      if ( *(_BYTE *)(((unsigned __int64)(v7 + 88) >> 3) + 0x7FFF8000) )
        goto LABEL_79;
      *(_QWORD *)(v7 + 88) = 0LL;
    }
  }
  v9 = *text;
  v8 = *text;
  v10 = *(_BYTE *)(((unsigned __int64)*text >> 3) + 0x7FFF8000);
  if ( v10 <= (*(_BYTE *)text & 7) && v10 )
    goto LABEL_3;
  v11 = *v9;
  while ( 1 )
  {
    if ( !v11 )
      goto LABEL_80;
    if ( v11 == 60 )
      break;
    v27 = text;
    if ( !*(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
    {
      *text = v9;
      v28 = (unsigned __int64)v9;
      goto LABEL_96;
    }
    __asan_report_store8();
LABEL_92:
    v28 = __asan_report_load1(v27);
LABEL_93:
    for ( i = 122LL; ; i = (char)i )
    {
      v31 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text_pure_no_ws[i] >> 3)
                     + 0x7FFF8000);
      v32 = (unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text_pure_no_ws[i] & 7;
      if ( v31 <= (char)v32 )
      {
        if ( v31 )
          break;
      }
      if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text_pure_no_ws[i] )
        goto LABEL_103;
      ++v28;
LABEL_96:
      v27 = (char **)v28;
      v30 = *(_BYTE *)((v28 >> 3) + 0x7FFF8000);
      if ( v30 <= (char)(v28 & 7) && v30 )
        goto LABEL_92;
      LOBYTE(i) = *(_BYTE *)v28;
      if ( (unsigned int)*(char *)v28 > 0x7F )
        goto LABEL_93;
    }
    v28 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text_pure_no_ws[i]);
LABEL_103:
    *text = (char *)v28;
    for ( j = v28; ; j = (unsigned __int64)v43 )
    {
      v103 = *(_BYTE *)((v28 >> 3) + 0x7FFF8000);
      if ( v103 <= (char)(v28 & 7) && v103 )
      {
        v28 = __asan_report_load1(v28);
      }
      else
      {
        v32 = *(unsigned __int8 *)v28;
        if ( (unsigned int)(char)v32 <= 0x7F )
        {
          v34 = (char)v32;
          goto LABEL_323;
        }
      }
      v34 = 122LL;
LABEL_323:
      v104 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text[v34] >> 3)
                      + 0x7FFF8000);
      if ( v104 <= ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text[v34] & 7)
        && v104 )
      {
        v28 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text[v34]);
      }
      else
      {
        if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_text[v34] )
          goto LABEL_330;
        if ( (_BYTE)v32 != 38 )
          goto LABEL_327;
      }
      v35 = *(_BYTE *)(((v28 + 1) >> 3) + 0x7FFF8000);
      if ( v35 <= (char)((v28 + 1) & 7) && v35 )
      {
        v28 = __asan_report_load1(v28 + 1);
LABEL_129:
        if ( v36 == 35 )
          goto LABEL_193;
        if ( v36 != 97 )
          goto LABEL_327;
        v44 = *(_BYTE *)(((v28 + 2) >> 3) + 0x7FFF8000);
        if ( v44 <= (char)((v28 + 2) & 7) && v44 )
        {
          v28 = __asan_report_load1(v28 + 2);
        }
        else
        {
          v45 = *(_BYTE *)(v28 + 2);
          if ( v45 != 109 )
            goto LABEL_134;
        }
        v37 = v28 + 3;
        v50 = *(_BYTE *)(((v28 + 3) >> 3) + 0x7FFF8000);
        if ( v50 <= (char)((v28 + 3) & 7) && v50 )
        {
          __asan_report_load1(v37);
        }
        else
        {
          if ( *(_BYTE *)(v28 + 3) != 112 )
            goto LABEL_134;
          v37 = v28 + 4;
          v51 = *(_BYTE *)(((v28 + 4) >> 3) + 0x7FFF8000);
          if ( v51 > (char)((v28 + 4) & 7) || !v51 )
          {
            if ( *(_BYTE *)(v28 + 4) == 59 )
            {
              v37 = j;
              v52 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
              if ( v52 > (char)(j & 7) || !v52 )
              {
                *(_BYTE *)j = 38;
                v43 = (_BYTE *)(j + 1);
                v28 += 5LL;
                continue;
              }
LABEL_159:
              __asan_report_store1(v37, v32);
LABEL_160:
              __asan_report_load1(v37);
              goto LABEL_161;
            }
LABEL_134:
            if ( v45 != 112 )
              goto LABEL_327;
            v37 = v28 + 3;
            v46 = *(_BYTE *)(((v28 + 3) >> 3) + 0x7FFF8000);
            if ( v46 <= (char)((v28 + 3) & 7) && v46 )
              goto LABEL_160;
            if ( *(_BYTE *)(v28 + 3) != 111 )
              goto LABEL_327;
            v37 = v28 + 4;
            v47 = *(_BYTE *)(((v28 + 4) >> 3) + 0x7FFF8000);
            if ( v47 <= (char)((v28 + 4) & 7) && v47 )
            {
LABEL_161:
              __asan_report_load1(v37);
            }
            else
            {
              if ( *(_BYTE *)(v28 + 4) != 115 )
                goto LABEL_327;
              v37 = v28 + 5;
              v48 = *(_BYTE *)(((v28 + 5) >> 3) + 0x7FFF8000);
              if ( v48 > (char)((v28 + 5) & 7) || !v48 )
              {
                if ( *(_BYTE *)(v28 + 5) != 59 )
                  goto LABEL_327;
                v37 = j;
                v49 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
                if ( v49 > (char)(j & 7) || !v49 )
                {
                  *(_BYTE *)j = 39;
                  v43 = (_BYTE *)(j + 1);
                  v28 += 6LL;
                  continue;
                }
LABEL_163:
                __asan_report_store1(v37, v32);
LABEL_164:
                __asan_report_load1(v37);
LABEL_165:
                __asan_report_load1(v37);
LABEL_166:
                __asan_report_load1(v37);
LABEL_167:
                __asan_report_load1(v37);
LABEL_168:
                v28 = __asan_report_store1(v37, v32);
                goto LABEL_169;
              }
            }
            __asan_report_load1(v37);
            goto LABEL_163;
          }
        }
        __asan_report_load1(v37);
        goto LABEL_159;
      }
      v36 = *(_BYTE *)(v28 + 1);
      if ( v36 != 103 )
      {
        if ( v36 <= 103 )
          goto LABEL_129;
        if ( v36 == 108 )
          goto LABEL_181;
        if ( v36 != 113 )
          goto LABEL_327;
        v37 = v28 + 2;
        v38 = *(_BYTE *)(((v28 + 2) >> 3) + 0x7FFF8000);
        if ( v38 <= (char)((v28 + 2) & 7) && v38 )
          goto LABEL_164;
        if ( *(_BYTE *)(v28 + 2) != 117 )
          goto LABEL_327;
        v37 = v28 + 3;
        v39 = *(_BYTE *)(((v28 + 3) >> 3) + 0x7FFF8000);
        if ( v39 <= (char)((v28 + 3) & 7) && v39 )
          goto LABEL_165;
        if ( *(_BYTE *)(v28 + 3) != 111 )
          goto LABEL_327;
        v37 = v28 + 4;
        v40 = *(_BYTE *)(((v28 + 4) >> 3) + 0x7FFF8000);
        if ( v40 <= (char)((v28 + 4) & 7) && v40 )
          goto LABEL_166;
        if ( *(_BYTE *)(v28 + 4) != 116 )
          goto LABEL_327;
        v37 = v28 + 5;
        v41 = *(_BYTE *)(((v28 + 5) >> 3) + 0x7FFF8000);
        if ( v41 <= (char)((v28 + 5) & 7) && v41 )
          goto LABEL_167;
        if ( *(_BYTE *)(v28 + 5) != 59 )
          goto LABEL_327;
        v37 = j;
        v42 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
        if ( v42 > (char)(j & 7) || !v42 )
        {
          *(_BYTE *)j = 34;
          v43 = (_BYTE *)(j + 1);
          v28 += 6LL;
          continue;
        }
        goto LABEL_168;
      }
LABEL_169:
      v53 = v28 + 2;
      v54 = *(_BYTE *)(((v28 + 2) >> 3) + 0x7FFF8000);
      if ( v54 <= (char)((v28 + 2) & 7) && v54 )
      {
        __asan_report_load1(v53);
      }
      else
      {
        if ( *(_BYTE *)(v28 + 2) != 116 )
          goto LABEL_327;
        v53 = v28 + 3;
        v55 = *(_BYTE *)(((v28 + 3) >> 3) + 0x7FFF8000);
        if ( v55 > (char)((v28 + 3) & 7) || !v55 )
        {
          if ( *(_BYTE *)(v28 + 3) != 59 )
            goto LABEL_327;
          v53 = j;
          v56 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
          if ( v56 > (char)(j & 7) || !v56 )
          {
            *(_BYTE *)j = 62;
            v43 = (_BYTE *)(j + 1);
            v28 += 4LL;
            continue;
          }
          goto LABEL_180;
        }
      }
      __asan_report_load1(v53);
LABEL_180:
      v28 = __asan_report_store1(v53, v32);
LABEL_181:
      v57 = v28 + 2;
      v58 = *(_BYTE *)(((v28 + 2) >> 3) + 0x7FFF8000);
      if ( v58 <= (char)((v28 + 2) & 7) && v58 )
      {
        __asan_report_load1(v57);
LABEL_191:
        __asan_report_load1(v57);
LABEL_192:
        v28 = __asan_report_store1(v57, v32);
LABEL_193:
        v61 = *(_BYTE *)(((v28 + 2) >> 3) + 0x7FFF8000);
        if ( v61 <= (char)((v28 + 2) & 7) && v61 )
        {
          v28 = __asan_report_load1(v28 + 2);
        }
        else if ( *(_BYTE *)(v28 + 2) != 120 )
        {
          v62 = v28 + 2;
          v63 = 0LL;
          while ( 1 )
          {
            v85 = *(_BYTE *)((v62 >> 3) + 0x7FFF8000);
            if ( v85 <= (char)(v62 & 7) && v85 )
            {
              v83 = __asan_report_load1(v62);
            }
            else
            {
              v83 = *(unsigned __int8 *)v62;
              v86 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v62] >> 3)
                             + 0x7FFF8000);
              v32 = (unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v62] & 7;
              if ( v86 <= (char)v32 && v86 )
              {
                __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v62]);
LABEL_260:
                if ( v63 <= 0x7F )
                {
                  v87 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
                  if ( v87 > (char)(j & 7) || !v87 )
                  {
                    *(_BYTE *)j = v63;
                    v43 = (_BYTE *)(j + 1);
                    goto LABEL_264;
                  }
                  __asan_report_store1(j, v32);
                }
                if ( v63 <= 0x7FF )
                {
                  v89 = (_BYTE *)(j + 1);
                  v90 = *(_BYTE *)(((j + 1) >> 3) + 0x7FFF8000);
                  v32 = ((_BYTE)j + 1) & 7;
                  if ( v90 <= (char)v32 && v90 )
                  {
                    __asan_report_store1(v89, v32);
                  }
                  else
                  {
                    *(_BYTE *)(j + 1) = v63 & 0x3F | 0x80;
                    v89 = (_BYTE *)j;
                    v91 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
                    if ( v91 > (char)(j & 7) || !v91 )
                    {
                      *(_BYTE *)j = (v63 >> 6) | 0xC0;
                      v43 = (_BYTE *)(j + 2);
                      goto LABEL_264;
                    }
                  }
                  __asan_report_store1(v89, v32);
                }
                if ( v63 > 0xFFFF )
                  goto LABEL_288;
                v92 = (_BYTE *)(j + 2);
                v93 = *(_BYTE *)(((j + 2) >> 3) + 0x7FFF8000);
                v32 = ((_BYTE)j + 2) & 7;
                if ( v93 <= (char)v32 && v93 )
                {
                  __asan_report_store1(v92, v32);
                }
                else
                {
                  *(_BYTE *)(j + 2) = v63 & 0x3F | 0x80;
                  v92 = (_BYTE *)(j + 1);
                  v94 = *(_BYTE *)(((j + 1) >> 3) + 0x7FFF8000);
                  v32 = ((_BYTE)j + 1) & 7;
                  if ( v94 > (char)v32 || !v94 )
                  {
                    *(_BYTE *)(j + 1) = (v63 >> 6) & 0x3F | 0x80;
                    v92 = (_BYTE *)j;
                    v95 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
                    if ( v95 > (char)(j & 7) || !v95 )
                    {
                      *(_BYTE *)j = (v63 >> 12) | 0xE0;
                      v43 = (_BYTE *)(j + 3);
                      goto LABEL_264;
                    }
LABEL_287:
                    __asan_report_store1(v92, v32);
LABEL_288:
                    if ( v63 > 0x10FFFF )
                      goto LABEL_302;
                    v96 = (_BYTE *)(j + 3);
                    v97 = *(_BYTE *)(((j + 3) >> 3) + 0x7FFF8000);
                    v32 = ((_BYTE)j + 3) & 7;
                    if ( v97 <= (char)v32 && v97 )
                    {
                      __asan_report_store1(v96, v32);
                    }
                    else
                    {
                      *(_BYTE *)(j + 3) = v63 & 0x3F | 0x80;
                      v96 = (_BYTE *)(j + 2);
                      v98 = *(_BYTE *)(((j + 2) >> 3) + 0x7FFF8000);
                      v32 = ((_BYTE)j + 2) & 7;
                      if ( v98 > (char)v32 || !v98 )
                      {
                        *(_BYTE *)(j + 2) = (v63 >> 6) & 0x3F | 0x80;
                        v96 = (_BYTE *)(j + 1);
                        v99 = *(_BYTE *)(((j + 1) >> 3) + 0x7FFF8000);
                        v32 = ((_BYTE)j + 1) & 7;
                        if ( v99 > (char)v32 || !v99 )
                        {
                          *(_BYTE *)(j + 1) = (v63 >> 12) & 0x3F | 0x80;
                          v96 = (_BYTE *)j;
                          v100 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
                          if ( v100 > (char)(j & 7) || !v100 )
                          {
                            *(_BYTE *)j = (v63 >> 18) | 0xF0;
                            v43 = (_BYTE *)(j + 4);
                            goto LABEL_264;
                          }
LABEL_301:
                          __asan_report_store1(v96, v32);
LABEL_302:
                          v101 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                          if ( *(_BYTE *)((v101 >> 3) + 0x7FFF8000) )
                            __asan_report_store8();
                          *(_QWORD *)v101 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                          if ( *(_BYTE *)(((v101 + 8) >> 3) + 0x7FFF8000) )
                            __asan_report_store8();
                          *(_QWORD *)(v101 + 8) = "invalid numeric character entity";
                          if ( *(_BYTE *)(((v101 + 16) >> 3) + 0x7FFF8000) )
                            __asan_report_store8();
                          *(_QWORD *)(v101 + 16) = j;
                          __asan_handle_no_return(v101 + 16);
                          _cxa_throw(
                            (void *)v101,
                            (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                            (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                        }
LABEL_300:
                        __asan_report_store1(v96, v32);
                        goto LABEL_301;
                      }
                    }
                    __asan_report_store1(v96, v32);
                    goto LABEL_300;
                  }
                }
                __asan_report_store1(v92, v32);
                goto LABEL_287;
              }
            }
            v84 = boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[v83];
            if ( v84 == 0xFF )
              goto LABEL_260;
            v63 = v84 + 10 * v63;
            ++v62;
          }
        }
        v62 = v28 + 3;
        v64 = 0LL;
        while ( 1 )
        {
          v67 = *(_BYTE *)((v62 >> 3) + 0x7FFF8000);
          if ( v67 <= (char)(v62 & 7) && v67 )
          {
            v65 = __asan_report_load1(v62);
          }
          else
          {
            v65 = *(unsigned __int8 *)v62;
            v68 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v62] >> 3)
                           + 0x7FFF8000);
            v32 = (unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v62] & 7;
            if ( v68 <= (char)v32 && v68 )
            {
              __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[*(unsigned __int8 *)v62]);
LABEL_207:
              if ( v64 <= 0x7F )
              {
                v69 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
                if ( v69 > (char)(j & 7) || !v69 )
                {
                  *(_BYTE *)j = v64;
                  v43 = (_BYTE *)(j + 1);
LABEL_264:
                  v88 = *(_BYTE *)((v62 >> 3) + 0x7FFF8000);
                  if ( v88 <= (char)(v62 & 7) && v88 )
                  {
                    __asan_report_load1(v62);
                  }
                  else if ( *(_BYTE *)v62 == 59 )
                  {
                    v28 = v62 + 1;
                    goto LABEL_318;
                  }
                  v102 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                  if ( *(_BYTE *)((v102 >> 3) + 0x7FFF8000) )
                    __asan_report_store8();
                  *(_QWORD *)v102 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                  if ( *(_BYTE *)(((v102 + 8) >> 3) + 0x7FFF8000) )
                    __asan_report_store8();
                  *(_QWORD *)(v102 + 8) = "expected ;";
                  if ( *(_BYTE *)(((v102 + 16) >> 3) + 0x7FFF8000) )
                    __asan_report_store8();
                  *(_QWORD *)(v102 + 16) = v62;
                  __asan_handle_no_return(v102 + 16);
                  _cxa_throw(
                    (void *)v102,
                    (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                    (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                }
                __asan_report_store1(j, v32);
              }
              if ( v64 <= 0x7FF )
              {
                v70 = (_BYTE *)(j + 1);
                v71 = *(_BYTE *)(((j + 1) >> 3) + 0x7FFF8000);
                v32 = ((_BYTE)j + 1) & 7;
                if ( v71 <= (char)v32 && v71 )
                {
                  __asan_report_store1(v70, v32);
                }
                else
                {
                  *(_BYTE *)(j + 1) = v64 & 0x3F | 0x80;
                  v70 = (_BYTE *)j;
                  v72 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
                  if ( v72 > (char)(j & 7) || !v72 )
                  {
                    *(_BYTE *)j = (v64 >> 6) | 0xC0;
                    v43 = (_BYTE *)(j + 2);
                    goto LABEL_264;
                  }
                }
                __asan_report_store1(v70, v32);
              }
              if ( v64 > 0xFFFF )
                goto LABEL_231;
              v73 = (_BYTE *)(j + 2);
              v74 = *(_BYTE *)(((j + 2) >> 3) + 0x7FFF8000);
              v32 = ((_BYTE)j + 2) & 7;
              if ( v74 <= (char)v32 && v74 )
              {
                __asan_report_store1(v73, v32);
              }
              else
              {
                *(_BYTE *)(j + 2) = v64 & 0x3F | 0x80;
                v73 = (_BYTE *)(j + 1);
                v75 = *(_BYTE *)(((j + 1) >> 3) + 0x7FFF8000);
                v32 = ((_BYTE)j + 1) & 7;
                if ( v75 > (char)v32 || !v75 )
                {
                  *(_BYTE *)(j + 1) = (v64 >> 6) & 0x3F | 0x80;
                  v73 = (_BYTE *)j;
                  v76 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
                  if ( v76 > (char)(j & 7) || !v76 )
                  {
                    *(_BYTE *)j = (v64 >> 12) | 0xE0;
                    v43 = (_BYTE *)(j + 3);
                    goto LABEL_264;
                  }
LABEL_230:
                  __asan_report_store1(v73, v32);
LABEL_231:
                  if ( v64 > 0x10FFFF )
                    goto LABEL_245;
                  v77 = (_BYTE *)(j + 3);
                  v78 = *(_BYTE *)(((j + 3) >> 3) + 0x7FFF8000);
                  v32 = ((_BYTE)j + 3) & 7;
                  if ( v78 <= (char)v32 && v78 )
                  {
                    __asan_report_store1(v77, v32);
                  }
                  else
                  {
                    *(_BYTE *)(j + 3) = v64 & 0x3F | 0x80;
                    v77 = (_BYTE *)(j + 2);
                    v79 = *(_BYTE *)(((j + 2) >> 3) + 0x7FFF8000);
                    v32 = ((_BYTE)j + 2) & 7;
                    if ( v79 > (char)v32 || !v79 )
                    {
                      *(_BYTE *)(j + 2) = (v64 >> 6) & 0x3F | 0x80;
                      v77 = (_BYTE *)(j + 1);
                      v80 = *(_BYTE *)(((j + 1) >> 3) + 0x7FFF8000);
                      v32 = ((_BYTE)j + 1) & 7;
                      if ( v80 > (char)v32 || !v80 )
                      {
                        *(_BYTE *)(j + 1) = (v64 >> 12) & 0x3F | 0x80;
                        v77 = (_BYTE *)j;
                        v81 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
                        if ( v81 > (char)(j & 7) || !v81 )
                        {
                          *(_BYTE *)j = (v64 >> 18) | 0xF0;
                          v43 = (_BYTE *)(j + 4);
                          goto LABEL_264;
                        }
LABEL_244:
                        __asan_report_store1(v77, v32);
LABEL_245:
                        v82 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
                        if ( *(_BYTE *)((v82 >> 3) + 0x7FFF8000) )
                          __asan_report_store8();
                        *(_QWORD *)v82 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
                        if ( *(_BYTE *)(((v82 + 8) >> 3) + 0x7FFF8000) )
                          __asan_report_store8();
                        *(_QWORD *)(v82 + 8) = "invalid numeric character entity";
                        if ( *(_BYTE *)(((v82 + 16) >> 3) + 0x7FFF8000) )
                          __asan_report_store8();
                        *(_QWORD *)(v82 + 16) = j;
                        __asan_handle_no_return(v82 + 16);
                        _cxa_throw(
                          (void *)v82,
                          (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
                          (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
                      }
LABEL_243:
                      __asan_report_store1(v77, v32);
                      goto LABEL_244;
                    }
                  }
                  __asan_report_store1(v77, v32);
                  goto LABEL_243;
                }
              }
              __asan_report_store1(v73, v32);
              goto LABEL_230;
            }
          }
          v66 = boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_digits[v65];
          if ( v66 == 0xFF )
            goto LABEL_207;
          v64 = v66 + 16 * v64;
          ++v62;
        }
      }
      if ( *(_BYTE *)(v28 + 2) == 116 )
      {
        v57 = v28 + 3;
        v59 = *(_BYTE *)(((v28 + 3) >> 3) + 0x7FFF8000);
        if ( v59 <= (char)((v28 + 3) & 7) && v59 )
          goto LABEL_191;
        if ( *(_BYTE *)(v28 + 3) == 59 )
        {
          v57 = j;
          v60 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
          if ( v60 > (char)(j & 7) || !v60 )
          {
            *(_BYTE *)j = 60;
            v43 = (_BYTE *)(j + 1);
            v28 += 4LL;
            continue;
          }
          goto LABEL_192;
        }
      }
LABEL_327:
      ++v28;
      v43 = (_BYTE *)(j + 1);
      v105 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
      if ( v105 <= (char)(j & 7) )
      {
        if ( v105 )
          break;
      }
      *(_BYTE *)j = v32;
LABEL_318:
      ;
    }
    v28 = __asan_report_store1(j, v32);
LABEL_330:
    *text = (char *)v28;
    p_m_ptr = &this->m_ptr;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ptr >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_375:
      __asan_report_load8();
LABEL_376:
      __asan_report_load8();
      goto LABEL_377;
    }
    v107 = (unsigned __int64)&this->m_ptr[-LODWORD(this->m_ptr) & 7];
    p_m_ptr = &this->m_end;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_end >> 3) + 0x7FFF8000) )
      goto LABEL_375;
    if ( (char *)(v107 + 96) <= this->m_end )
      goto LABEL_340;
    p_m_ptr = (char **)&this->m_alloc_func;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_alloc_func >> 3) + 0x7FFF8000) )
      goto LABEL_376;
    m_alloc_func = this->m_alloc_func;
    if ( m_alloc_func )
    {
      p_m_ptr = (char **)65558;
      v109 = (char *)m_alloc_func(65558LL);
      if ( v109 )
        goto LABEL_336;
LABEL_377:
      __asan_handle_no_return(p_m_ptr);
      __assert_fail(
        "memory",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property"
        "_tree/detail/rapidxml.hpp",
        0x23Eu,
        "char* boost::property_tree::detail::rapidxml::memory_pool<Ch>::allocate_raw(std::size_t) [with Ch = char; std::s"
        "ize_t = long unsigned int]");
    }
    v109 = (char *)operator new[](0x10016uLL);
LABEL_336:
    v110 = (char **)&v109[-(int)v109 & 7];
    p_m_end = &this->boost::property_tree::detail::rapidxml::memory_pool<char>;
    if ( *(_BYTE *)(((unsigned __int64)&this->boost::property_tree::detail::rapidxml::memory_pool<char> >> 3)
                  + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_380:
      __asan_report_store8();
LABEL_381:
      __asan_report_store8();
LABEL_382:
      __asan_report_store8();
LABEL_383:
      __asan_report_store8();
LABEL_384:
      __asan_report_store8();
LABEL_385:
      __asan_report_store4(p_m_end);
LABEL_386:
      __asan_report_store8();
LABEL_387:
      __asan_report_store8();
LABEL_388:
      __asan_report_store8();
LABEL_389:
      __asan_report_store8();
LABEL_390:
      __asan_handle_no_return(p_m_end);
      __assert_fail(
        "child && !child->parent() && child->type() != node_document",
        "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/property"
        "_tree/detail/rapidxml.hpp",
        0x43Bu,
        "void boost::property_tree::detail::rapidxml::xml_node<Ch>::append_node(boost::property_tree::detail::rapidxml::x"
        "ml_node<Ch>*) [with Ch = char]");
    }
    p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)&v109[-(int)v109 & 7];
    if ( *(_BYTE *)(((unsigned __int64)v110 >> 3) + 0x7FFF8000) )
      goto LABEL_380;
    *v110 = this->m_begin;
    this->m_begin = v109;
    v112 = v110 + 1;
    v113 = v109 + 65558;
    p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)&this->m_end;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_end >> 3) + 0x7FFF8000) )
      goto LABEL_381;
    this->m_end = v113;
    v107 = (unsigned __int64)v112 + (-(int)v112 & 7);
LABEL_340:
    p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)&this->m_ptr;
    if ( *(_BYTE *)(((unsigned __int64)&this->m_ptr >> 3) + 0x7FFF8000) )
      goto LABEL_382;
    this->m_ptr = (char *)(v107 + 96);
    p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)v107;
    if ( *(_BYTE *)((v107 >> 3) + 0x7FFF8000) )
      goto LABEL_383;
    *(_QWORD *)v107 = 0LL;
    p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v107 + 32);
    if ( *(_BYTE *)(((v107 + 32) >> 3) + 0x7FFF8000) )
      goto LABEL_384;
    *(_QWORD *)(v107 + 32) = 0LL;
    p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v107 + 40);
    v114 = *(_BYTE *)(((v107 + 40) >> 3) + 0x7FFF8000);
    if ( v114 && v114 <= 3 )
      goto LABEL_385;
    *(_DWORD *)(v107 + 40) = 2;
    p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v107 + 48);
    if ( *(_BYTE *)(((v107 + 48) >> 3) + 0x7FFF8000) )
      goto LABEL_386;
    *(_QWORD *)(v107 + 48) = 0LL;
    p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v107 + 64);
    if ( *(_BYTE *)(((v107 + 64) >> 3) + 0x7FFF8000) )
      goto LABEL_387;
    *(_QWORD *)(v107 + 64) = 0LL;
    v115 = j - (_QWORD)v9;
    p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v107 + 8);
    if ( *(_BYTE *)(((v107 + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_388;
    *(_QWORD *)(v107 + 8) = v9;
    p_m_end = (boost::property_tree::detail::rapidxml::memory_pool<char> *)(v107 + 24);
    if ( *(_BYTE *)(((v107 + 24) >> 3) + 0x7FFF8000) )
      goto LABEL_389;
    *(_QWORD *)(v107 + 24) = v115;
    if ( !v107 || *(_QWORD *)(v107 + 32) || !*(_DWORD *)(v107 + 40) )
      goto LABEL_390;
    if ( *(_BYTE *)(((unsigned __int64)&node->m_first_node >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_392:
      __asan_report_load8();
LABEL_393:
      __asan_report_store8();
      goto LABEL_394;
    }
    if ( !node->m_first_node )
      goto LABEL_395;
    if ( *(_BYTE *)(((unsigned __int64)&node->m_last_node >> 3) + 0x7FFF8000) )
      goto LABEL_392;
    v116 = node->m_last_node;
    if ( *(_BYTE *)(((v107 + 80) >> 3) + 0x7FFF8000) )
      goto LABEL_393;
    *(_QWORD *)(v107 + 80) = v116;
    if ( !*(_BYTE *)(((unsigned __int64)&v116->m_next_sibling >> 3) + 0x7FFF8000) )
    {
      v116->m_next_sibling = (boost::property_tree::detail::rapidxml::xml_node<char> *)v107;
      goto LABEL_358;
    }
LABEL_394:
    v107 = __asan_report_store8();
LABEL_395:
    if ( *(_BYTE *)(((v107 + 80) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store8();
LABEL_398:
      __asan_report_store8();
LABEL_399:
      __asan_report_store8();
LABEL_400:
      __asan_report_store8();
LABEL_401:
      __asan_report_load8();
LABEL_402:
      m_value = (char *)&boost::property_tree::detail::rapidxml::xml_base<char>::nullstr(void)::zero;
      goto LABEL_363;
    }
    *(_QWORD *)(v107 + 80) = 0LL;
    node->m_first_node = (boost::property_tree::detail::rapidxml::xml_node<char> *)v107;
LABEL_358:
    if ( *(_BYTE *)(((unsigned __int64)&node->m_last_node >> 3) + 0x7FFF8000) )
      goto LABEL_398;
    node->m_last_node = (boost::property_tree::detail::rapidxml::xml_node<char> *)v107;
    if ( *(_BYTE *)(((v107 + 32) >> 3) + 0x7FFF8000) )
      goto LABEL_399;
    *(_QWORD *)(v107 + 32) = node;
    if ( *(_BYTE *)(((v107 + 88) >> 3) + 0x7FFF8000) )
      goto LABEL_400;
    *(_QWORD *)(v107 + 88) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&node->m_value >> 3) + 0x7FFF8000) )
      goto LABEL_401;
    m_value = node->m_value;
    if ( !m_value )
      goto LABEL_402;
LABEL_363:
    p_m_value_size = (boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *)m_value;
    v119 = *(_BYTE *)(((unsigned __int64)m_value >> 3) + 0x7FFF8000);
    v120.r = (boost::multi_index::detail::uintptr_type *)((unsigned __int8)m_value & 7);
    if ( v119 <= SLOBYTE(v120.r) && v119 )
    {
      __asan_report_load1(m_value);
LABEL_404:
      __asan_report_store8();
LABEL_405:
      __asan_report_load8();
LABEL_406:
      __asan_report_load1(p_m_value_size);
LABEL_407:
      __asan_report_store1(p_m_value_size, v120.r);
      boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char>>::rotate_left(
        p_m_value_size,
        v120);
      return;
    }
    if ( *m_value )
      goto LABEL_368;
    node->m_value = v9;
    p_m_value_size = (boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *)&node->m_value_size;
    if ( *(_BYTE *)(((unsigned __int64)&node->m_value_size >> 3) + 0x7FFF8000) )
      goto LABEL_404;
    node->m_value_size = v115;
LABEL_368:
    p_m_value_size = (boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *)text;
    if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
      goto LABEL_405;
    p_m_value_size = (boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *)*text;
    v121 = *(_BYTE *)(((unsigned __int64)*text >> 3) + 0x7FFF8000);
    if ( v121 <= (*(_BYTE *)text & 7) && v121 )
      goto LABEL_406;
    v11 = **text;
    p_m_value_size = (boost::multi_index::detail::ordered_index_node_impl<boost::multi_index::detail::null_augment_policy,std::allocator<char> > *)j;
    v122 = *(_BYTE *)((j >> 3) + 0x7FFF8000);
    if ( v122 <= (char)(j & 7) && v122 )
      goto LABEL_407;
    *(_BYTE *)j = 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
    goto LABEL_4;
  v6 = *text;
  v12 = *(_BYTE *)(((unsigned __int64)(*text + 1) >> 3) + 0x7FFF8000);
  if ( v12 > ((*(_BYTE *)text + 1) & 7) || !v12 )
    goto LABEL_5;
  v6 = (char *)__asan_report_load1(*text + 1);
LABEL_17:
  v13 = (unsigned __int64)(v6 + 2);
  *text = (char *)v13;
  while ( 2 )
  {
    v15 = *(_BYTE *)((v13 >> 3) + 0x7FFF8000);
    if ( v15 <= (char)(v13 & 7) && v15 )
    {
      v13 = __asan_report_load1(v13);
    }
    else
    {
      LOBYTE(v14) = *(_BYTE *)v13;
      if ( (unsigned int)*(char *)v13 <= 0x7F )
      {
        v14 = (char)v14;
        goto LABEL_26;
      }
    }
    v14 = 122LL;
LABEL_26:
    v16 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v14] >> 3)
                   + 0x7FFF8000);
    if ( v16 > ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v14] & 7)
      || !v16 )
    {
      if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v14] )
        goto LABEL_29;
      ++v13;
      continue;
    }
    break;
  }
  v13 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_node_name[v14]);
LABEL_29:
  *text = (char *)v13;
  while ( 2 )
  {
    v18 = *(_BYTE *)((v13 >> 3) + 0x7FFF8000);
    if ( v18 <= (char)(v13 & 7) && v18 )
    {
      v13 = __asan_report_load1(v13);
    }
    else
    {
      LOBYTE(v17) = *(_BYTE *)v13;
      if ( (unsigned int)*(char *)v13 <= 0x7F )
      {
        v17 = (char)v17;
        goto LABEL_38;
      }
    }
    v17 = 122LL;
LABEL_38:
    v19 = *(_BYTE *)(((unsigned __int64)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v17] >> 3)
                   + 0x7FFF8000);
    if ( v19 > ((unsigned __int8)&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v17] & 7)
      || !v19 )
    {
      if ( !boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v17] )
        goto LABEL_41;
      ++v13;
      continue;
    }
    break;
  }
  v13 = __asan_report_load1(&boost::property_tree::detail::rapidxml::internal::lookup_tables<0>::lookup_whitespace[v17]);
LABEL_41:
  *text = (char *)v13;
  if ( *(_BYTE *)v13 != 62 )
  {
    v20 = (unsigned __int64)__cxa_allocate_exception(0x18uLL);
    if ( *(_BYTE *)(((unsigned __int64)text >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v21 = (__int64)*text;
    if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
      v21 = __asan_report_store8();
    *(_QWORD *)v20 = &`vtable for'boost::property_tree::detail::rapidxml::parse_error + 2;
    if ( *(_BYTE *)(((v20 + 8) >> 3) + 0x7FFF8000) )
      v21 = __asan_report_store8();
    *(_QWORD *)(v20 + 8) = "expected >";
    if ( *(_BYTE *)(((v20 + 16) >> 3) + 0x7FFF8000) )
      v21 = __asan_report_store8();
    *(_QWORD *)(v20 + 16) = v21;
    __asan_handle_no_return(v20 + 16);
    _cxa_throw(
      (void *)v20,
      (struct type_info *)&`typeinfo for'boost::property_tree::detail::rapidxml::parse_error,
      (void (__fastcall *)(void *))boost::property_tree::detail::rapidxml::parse_error::~parse_error);
  }
  *text = (char *)(v13 + 1);
};
