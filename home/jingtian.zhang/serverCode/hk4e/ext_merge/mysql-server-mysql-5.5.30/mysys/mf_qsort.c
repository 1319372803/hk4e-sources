// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/mf_qsort.c

// Line 99: range 000000000CFC7C60-000000000CFC8A36
void __fastcall my_qsort(void *base_ptr, size_t count, size_t size, qsort_cmp cmp)
{
  char v4; // bl
  void *v7; // rsp
  size_t v8; // rdx
  size_t v9; // rax
  __int64 v10; // r13
  char *i; // r12
  bool v12; // cf
  __int64 v13; // rax
  char *v14; // rbx
  char *v15; // rdi
  char *v16; // rax
  char v17; // cl
  char *v18; // rsi
  size_t v19; // r12
  int v20; // eax
  char *v21; // rdx
  char *v22; // r13
  int v23; // eax
  char *v24; // rdx
  size_t v25; // rdi
  __int64 v26; // r12
  int v27; // eax
  char *v28; // rcx
  char *v29; // rdx
  int v30; // eax
  char *v31; // rdx
  char *v32; // rcx
  int v33; // eax
  char *v34; // rcx
  int v35; // eax
  char *v36; // rcx
  int v37; // eax
  char *v38; // rdx
  char *v39; // rcx
  int v40; // eax
  int v41; // eax
  char *v42; // rdx
  int v43; // eax
  char *v44; // rdx
  int v45; // eax
  char *v46; // r13
  char *v47; // r12
  char *v48; // rdx
  char *v49; // rbx
  char *v50; // rdi
  __int64 v51; // rax
  char *v52; // rax
  bool v53; // cc
  stack_node *v54; // rax
  char *v55; // rsi
  stack_node *v56; // rax
  char *v57; // rsi
  char v58; // al
  char v59; // dl
  char *v60; // rax
  char *v61; // rsi
  char *v62; // rax
  char *v63; // rdx
  char *v64; // rdi
  char v65; // cl
  char v66; // si
  char *v67; // rdi
  __int64 v68; // rax
  size_t v69; // rdi
  int v70; // eax
  __int64 v71; // rsi
  __int64 v72; // rax
  char *v73; // rdi
  int v74; // eax
  __int64 v75; // rax
  int v76; // eax
  __int64 v77; // rax
  __int64 v78; // rcx
  char *v79; // rdi
  int v80; // eax
  __int64 v81; // rax
  __int64 v82; // rax
  int v83; // eax
  char *v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // rax
  int v87; // eax
  char *v88; // rsi
  __int64 v89; // rax
  char *v90; // rsi
  char *v91; // rax
  char v92; // r8
  char v93; // r9
  int v94; // eax
  char *v95; // rax
  char *v96; // rdi
  char v97; // cl
  char v98; // si
  int v99; // eax
  char *v100; // rax
  char *v101; // rdx
  char *v102; // rsi
  char v103; // di
  char v104; // r8
  int v105; // eax
  char *v106; // r8
  char *v107; // rax
  char v108; // si
  char v109; // di
  int v110; // eax
  char *v111; // r8
  char *v112; // rcx
  char *v113; // rax
  char v114; // si
  char v115; // di
  int v116; // eax
  char *v117; // rax
  char *v118; // rdx
  char *v119; // rsi
  char v120; // cl
  char v121; // di
  char *v122; // rdi
  __int64 v123; // rax
  char *v124; // rsi
  __int64 v125; // rax
  int v126; // eax
  char *v127; // rdx
  char *v128; // rax
  char v129; // cl
  char v130; // si
  size_t v131; // rdi
  int v132; // eax
  char *v133; // rcx
  char *v134; // rsi
  char *v135; // rax
  char v136; // di
  char v137; // r8
  int v138; // eax
  char *v139; // rax
  char v140; // si
  char v141; // di
  char *v142; // rax
  char *v143; // rdx
  char *v144; // rcx
  char v145; // si
  char v146; // di
  char *v147; // rax
  char *v148; // rdx
  char *v149; // rcx
  char v150; // si
  char v151; // di
  __int64 v152; // rax
  char *v153; // rdi
  __int64 v154; // rax
  __int64 v155; // rax
  char *v156; // rsi
  __int64 v157; // rax
  __int64 v158; // rax
  char *v159; // rcx
  char *v160; // rax
  char v161; // si
  char v162; // di
  char *v163; // rax
  char *v164; // rdx
  char v165; // si
  char v166; // di
  char *v167; // rax
  char *v168; // rcx
  char v169; // si
  char v170; // di
  __int64 v171; // [rsp+0h] [rbp-490h] BYREF
  char *v172; // [rsp+8h] [rbp-488h]
  char *v173; // [rsp+10h] [rbp-480h]
  __int64 v174; // [rsp+18h] [rbp-478h]
  stack_node *v175; // [rsp+20h] [rbp-470h]
  char *pivot; // [rsp+28h] [rbp-468h]
  stack_node *stack_ptr; // [rsp+30h] [rbp-460h]
  char *ptr; // [rsp+38h] [rbp-458h]
  char *high; // [rsp+40h] [rbp-450h]
  size_t v180; // [rsp+48h] [rbp-448h]
  char *mid; // [rsp+50h] [rbp-440h]
  char *low; // [rsp+58h] [rbp-438h]
  stack_node stack[64]; // [rsp+60h] [rbp-430h] BYREF

  low = (char *)base_ptr;
  if ( count > 1 )
  {
    v4 = 0;
    high = (char *)base_ptr + size * (count - 1);
    v7 = alloca((int)size + 15LL);
    pivot = (char *)&v171;
    if ( size == 8 )
      v4 = ((unsigned __int8)base_ptr & 7) == 0;
    v175 = stack;
    stack_ptr = &stack[1];
    v174 = -(__int64)size;
    v180 = 2 * size;
    do
    {
      v8 = (high - low) % size;
      v9 = (high - low) / size + 1;
      if ( v9 <= 9 )
      {
        ptr = &low[size];
        if ( high >= &low[size] )
        {
          v10 = v174;
          LOBYTE(mid) = v4;
          do
          {
            if ( low < ptr )
            {
              for ( i = ptr; ; i = v14 )
              {
                v14 = &i[v10];
                if ( ((int (__fastcall *)(char *, char *, size_t))cmp)(&i[v10], i, v8) <= 0 )
                  break;
                if ( (_BYTE)mid )
                {
                  v12 = low < v14;
                  v13 = *(_QWORD *)&v14[size];
                  v8 = *(_QWORD *)v14;
                  *(_QWORD *)&v14[size] = *(_QWORD *)v14;
                  *(_QWORD *)v14 = v13;
                  if ( !v12 )
                    break;
                }
                else
                {
                  v15 = &v14[v180];
                  v16 = &i[v10];
                  do
                  {
                    v8 = (unsigned __int8)*i;
                    v17 = *v16;
                    ++i;
                    ++v16;
                    *(i - 1) = v17;
                    *(v16 - 1) = v8;
                  }
                  while ( i < v15 );
                  if ( low >= v14 )
                    break;
                }
              }
            }
            ptr += size;
          }
          while ( high >= ptr );
          v4 = (char)mid;
        }
LABEL_19:
        low = stack_ptr[-1].low;
        v18 = stack_ptr[-1].high;
        --stack_ptr;
        high = v18;
        continue;
      }
      mid = &low[size * (v9 >> 1)];
      if ( v9 > 0x28 )
      {
        v19 = size * (v9 >> 3);
        ptr = (char *)(2 * v19);
        v173 = &low[2 * v19];
        v20 = ((__int64 (__fastcall *)(char *))cmp)(v173);
        v21 = v173;
        if ( v20 >= 0 )
        {
          v22 = &low[v19];
          if ( ((int (__fastcall *)(char *))cmp)(&low[v19]) >= 0 )
          {
            v23 = cmp(v173, v22);
            v24 = v173;
            if ( v23 >= 0 )
              goto LABEL_26;
            if ( v4 )
            {
LABEL_135:
              v152 = *(_QWORD *)v22;
              *(_QWORD *)v22 = *(_QWORD *)v24;
              *(_QWORD *)v24 = v152;
LABEL_69:
              v69 = v19;
              v26 = -(__int64)v19;
              v172 = &mid[v26];
              v173 = &mid[v69];
              v70 = cmp(&mid[v69], &mid[v26]);
              v28 = v173;
              v29 = v172;
              if ( v70 < 0 )
              {
LABEL_70:
                v71 = *(_QWORD *)v29;
                v72 = *(_QWORD *)v28;
                v172 = v28;
                v173 = v29;
                v73 = mid;
                *(_QWORD *)v28 = v71;
                *(_QWORD *)v29 = v72;
                v74 = cmp(v73, v29);
                v31 = v173;
                v32 = v172;
                if ( v74 < 0 )
                {
LABEL_80:
                  v82 = *(_QWORD *)mid;
                  *(_QWORD *)mid = *(_QWORD *)v31;
                  *(_QWORD *)v31 = v82;
                  goto LABEL_81;
                }
LABEL_28:
                v173 = v32;
                v33 = ((__int64 (__fastcall *)(char *, char *, char *))cmp)(v32, mid, v31);
                v34 = v173;
                if ( v33 >= 0 )
                {
                  ptr = (char *)(high - ptr);
                  v35 = cmp(high, ptr);
                  v36 = ptr;
                  if ( v35 >= 0 )
                    goto LABEL_30;
                  if ( v4 )
                  {
LABEL_82:
                    v84 = high;
                    v85 = *(_QWORD *)v36;
                    v173 = v36;
                    v86 = *(_QWORD *)high;
                    *(_QWORD *)high = v85;
                    ptr = &v84[v26];
                    *(_QWORD *)v36 = v86;
                    v87 = cmp(&v84[v26], v36);
                    v38 = ptr;
                    v39 = v173;
                    if ( v87 < 0 )
                    {
LABEL_73:
                      v75 = *(_QWORD *)v38;
                      *(_QWORD *)v38 = *(_QWORD *)v39;
                      *(_QWORD *)v39 = v75;
                      goto LABEL_74;
                    }
LABEL_31:
                    ptr = v38;
                    v40 = ((__int64 (__fastcall *)(char *, char *, char *, char *))cmp)(high, v38, v38, v39);
                    v38 = ptr;
                    if ( v40 >= 0 )
                    {
                      v41 = cmp(ptr, v22);
                      v42 = ptr;
                      if ( v41 >= 0 )
                        goto LABEL_33;
                      v111 = &ptr[size];
                      if ( !v4 )
                      {
LABEL_101:
                        v112 = v22;
                        v113 = v42;
                        do
                        {
                          v114 = *v113;
                          v115 = *v112;
                          ++v113;
                          ++v112;
                          *(v113 - 1) = v115;
                          *(v112 - 1) = v114;
                        }
                        while ( v111 > v113 );
                        ptr = v42;
                        v116 = cmp(mid, v22);
                        v44 = ptr;
                        if ( v116 >= 0 )
                        {
LABEL_34:
                          ptr = v44;
                          v45 = cmp(v44, mid);
                          v46 = high;
                          v47 = low;
                          v48 = ptr;
                          if ( v45 < 0 )
                          {
                            if ( v4 )
                            {
                              v155 = *(_QWORD *)mid;
                              *(_QWORD *)mid = *(_QWORD *)ptr;
                              *(_QWORD *)v48 = v155;
                            }
                            else
                            {
                              v167 = mid;
                              v168 = &mid[size];
                              do
                              {
                                v169 = *v167;
                                v170 = *v48;
                                ++v167;
                                ++v48;
                                *(v167 - 1) = v170;
                                *(v48 - 1) = v169;
                              }
                              while ( v168 > v167 );
                              v46 = high;
                              v47 = low;
                            }
                          }
                          goto LABEL_35;
                        }
LABEL_104:
                        v117 = mid;
                        v118 = v22;
                        v119 = &mid[size];
                        do
                        {
                          v120 = *v117;
                          v121 = *v118;
                          ++v117;
                          ++v118;
                          *(v117 - 1) = v121;
                          *(v118 - 1) = v120;
                        }
                        while ( v119 > v117 );
                        v46 = high;
                        v47 = low;
                        goto LABEL_35;
                      }
LABEL_75:
                      v77 = *(_QWORD *)v42;
                      v78 = *(_QWORD *)v22;
                      ptr = v42;
                      v79 = mid;
                      *(_QWORD *)v42 = v78;
                      *(_QWORD *)v22 = v77;
                      v80 = cmp(v79, v22);
                      v44 = ptr;
                      if ( v80 >= 0 )
                        goto LABEL_34;
                      goto LABEL_78;
                    }
                    if ( v4 )
                    {
                      v156 = high;
                      v157 = *(_QWORD *)ptr;
                      *(_QWORD *)ptr = *(_QWORD *)high;
                      *(_QWORD *)v156 = v157;
LABEL_74:
                      ptr = v38;
                      v76 = cmp(v38, v22);
                      v42 = ptr;
                      if ( v76 < 0 )
                        goto LABEL_75;
LABEL_33:
                      ptr = v42;
                      v43 = cmp(mid, v22);
                      v44 = ptr;
                      if ( v43 >= 0 )
                        goto LABEL_34;
                      if ( !v4 )
                        goto LABEL_104;
LABEL_78:
                      v47 = low;
                      v81 = *(_QWORD *)mid;
                      *(_QWORD *)mid = *(_QWORD *)v22;
                      *(_QWORD *)v22 = v81;
                      v46 = high;
                      goto LABEL_35;
                    }
                    v159 = high;
                    v106 = &ptr[size];
                    v160 = ptr;
                    do
                    {
                      v161 = *v160;
                      v162 = *v159;
                      ++v160;
                      ++v159;
                      *(v160 - 1) = v162;
                      *(v159 - 1) = v161;
                    }
                    while ( v106 > v160 );
LABEL_100:
                    v173 = v106;
                    ptr = v38;
                    v110 = cmp(v38, v22);
                    v42 = ptr;
                    v111 = v173;
                    if ( v110 < 0 )
                      goto LABEL_101;
                    goto LABEL_33;
                  }
LABEL_95:
                  v100 = high;
                  v101 = v36;
                  v102 = &high[size];
                  do
                  {
                    v103 = *v100;
                    v104 = *v101;
                    ++v100;
                    ++v101;
                    *(v100 - 1) = v104;
                    *(v101 - 1) = v103;
                  }
                  while ( v102 > v100 );
                  v173 = v36;
                  ptr = &high[v26];
                  v105 = cmp(&high[v26], v36);
                  v38 = ptr;
                  v39 = v173;
                  if ( v105 >= 0 )
                    goto LABEL_31;
LABEL_98:
                  v106 = &v38[size];
                  v107 = v38;
                  do
                  {
                    v108 = *v107;
                    v109 = *v39;
                    ++v107;
                    ++v39;
                    *(v107 - 1) = v109;
                    *(v39 - 1) = v108;
                  }
                  while ( v106 > v107 );
                  goto LABEL_100;
                }
                if ( v4 )
                {
                  v158 = *(_QWORD *)mid;
                  *(_QWORD *)mid = *(_QWORD *)v173;
                  *(_QWORD *)v34 = v158;
LABEL_81:
                  ptr = (char *)(high - ptr);
                  v83 = cmp(high, ptr);
                  v36 = ptr;
                  if ( v83 < 0 )
                    goto LABEL_82;
LABEL_30:
                  v173 = v36;
                  ptr = &high[v26];
                  v37 = cmp(&high[v26], v36);
                  v38 = ptr;
                  v39 = v173;
                  if ( v37 >= 0 )
                    goto LABEL_31;
                  if ( v4 )
                    goto LABEL_73;
                  goto LABEL_98;
                }
                v163 = mid;
                v164 = &mid[size];
                do
                {
                  v165 = *v163;
                  v166 = *v34;
                  ++v163;
                  ++v34;
                  *(v163 - 1) = v166;
                  *(v34 - 1) = v165;
                }
                while ( v164 > v163 );
LABEL_94:
                ptr = (char *)(high - ptr);
                v99 = cmp(high, ptr);
                v36 = ptr;
                if ( v99 < 0 )
                  goto LABEL_95;
                goto LABEL_30;
              }
LABEL_27:
              v172 = v28;
              v173 = v29;
              v30 = cmp(mid, v29);
              v31 = v173;
              v32 = v172;
              if ( v30 >= 0 )
                goto LABEL_28;
              if ( v4 )
                goto LABEL_80;
LABEL_92:
              v95 = mid;
              v96 = &mid[size];
              do
              {
                v97 = *v95;
                v98 = *v31;
                ++v95;
                ++v31;
                *(v95 - 1) = v98;
                *(v31 - 1) = v97;
              }
              while ( v96 > v95 );
              goto LABEL_94;
            }
LABEL_124:
            v139 = v22;
            do
            {
              v140 = *v139;
              v141 = *v24;
              ++v139;
              ++v24;
              *(v139 - 1) = v141;
              *(v24 - 1) = v140;
            }
            while ( &v22[size] > v139 );
LABEL_116:
            v131 = v19;
            v26 = -(__int64)v19;
            v172 = &mid[v26];
            v173 = &mid[v131];
            v132 = cmp(&mid[v131], &mid[v26]);
            v28 = v173;
            v29 = v172;
            if ( v132 >= 0 )
              goto LABEL_27;
LABEL_89:
            v90 = v29;
            v91 = v28;
            do
            {
              v92 = *v91;
              v93 = *v90;
              ++v91;
              ++v90;
              *(v91 - 1) = v93;
              *(v90 - 1) = v92;
            }
            while ( &v28[size] > v91 );
            v172 = v28;
            v173 = v29;
            v94 = cmp(mid, v29);
            v31 = v173;
            v32 = v172;
            if ( v94 >= 0 )
              goto LABEL_28;
            goto LABEL_92;
          }
          if ( v4 )
          {
LABEL_68:
            v67 = low;
            v68 = *(_QWORD *)v22;
            *(_QWORD *)v22 = *(_QWORD *)low;
            *(_QWORD *)v67 = v68;
            goto LABEL_69;
          }
LABEL_114:
          v127 = low;
          v128 = v22;
          do
          {
            v129 = *v128;
            v130 = *v127;
            ++v128;
            ++v127;
            *(v128 - 1) = v130;
            *(v127 - 1) = v129;
          }
          while ( &v22[size] > v128 );
          goto LABEL_116;
        }
        if ( v4 )
        {
          v124 = low;
          v125 = *(_QWORD *)v173;
          *(_QWORD *)v173 = *(_QWORD *)low;
          *(_QWORD *)v124 = v125;
          v22 = &v124[v19];
          if ( ((int (__fastcall *)(char *))cmp)(&v124[v19]) < 0 )
            goto LABEL_68;
          v126 = cmp(v173, &v124[v19]);
          v24 = v173;
          if ( v126 < 0 )
            goto LABEL_135;
        }
        else
        {
          v133 = low;
          v134 = &v173[size];
          v135 = v173;
          do
          {
            v136 = *v135;
            v137 = *v133;
            ++v135;
            ++v133;
            *(v135 - 1) = v137;
            *(v133 - 1) = v136;
          }
          while ( v134 > v135 );
          v173 = v21;
          v22 = &low[v19];
          if ( ((int (__fastcall *)(char *))cmp)(&low[v19]) < 0 )
            goto LABEL_114;
          v138 = cmp(v173, v22);
          v24 = v173;
          if ( v138 < 0 )
            goto LABEL_124;
        }
LABEL_26:
        v25 = v19;
        v26 = -(__int64)v19;
        v172 = &mid[v26];
        v173 = &mid[v25];
        v27 = cmp(&mid[v25], &mid[v26]);
        v28 = v173;
        v29 = v172;
        if ( v27 >= 0 )
          goto LABEL_27;
        if ( v4 )
          goto LABEL_70;
        goto LABEL_89;
      }
      if ( cmp(high, low) < 0 )
      {
        if ( v4 )
        {
          v88 = low;
          v89 = *(_QWORD *)high;
          *(_QWORD *)high = *(_QWORD *)low;
          *(_QWORD *)v88 = v89;
          if ( ((int (__fastcall *)(char *))cmp)(mid) < 0 )
            goto LABEL_107;
          if ( cmp(high, mid) < 0 )
            goto LABEL_137;
        }
        else
        {
          v142 = high;
          v143 = low;
          v144 = &high[size];
          do
          {
            v145 = *v142;
            v146 = *v143;
            ++v142;
            ++v143;
            *(v142 - 1) = v146;
            *(v143 - 1) = v145;
          }
          while ( v144 > v142 );
          if ( cmp(mid, low) < 0 )
          {
LABEL_64:
            v62 = mid;
            v63 = low;
            v64 = &mid[size];
            do
            {
              v65 = *v62;
              v66 = *v63;
              ++v62;
              ++v63;
              *(v62 - 1) = v66;
              *(v63 - 1) = v65;
            }
            while ( v64 > v62 );
            goto LABEL_58;
          }
          if ( cmp(high, mid) < 0 )
          {
LABEL_131:
            v147 = mid;
            v148 = high;
            v149 = &mid[size];
            do
            {
              v150 = *v147;
              v151 = *v148;
              ++v147;
              ++v148;
              *(v147 - 1) = v151;
              *(v148 - 1) = v150;
            }
            while ( v149 > v147 );
          }
        }
      }
      else
      {
        if ( cmp(mid, low) < 0 )
        {
          if ( !v4 )
            goto LABEL_64;
LABEL_107:
          v122 = low;
          v123 = *(_QWORD *)mid;
          *(_QWORD *)mid = *(_QWORD *)low;
          *(_QWORD *)v122 = v123;
          goto LABEL_58;
        }
        if ( cmp(high, mid) < 0 )
        {
          if ( !v4 )
            goto LABEL_131;
LABEL_137:
          v153 = high;
          v154 = *(_QWORD *)mid;
          *(_QWORD *)mid = *(_QWORD *)high;
          *(_QWORD *)v153 = v154;
        }
      }
LABEL_58:
      v47 = &low[size];
      v46 = &high[-size];
LABEL_35:
      memcpy(pivot, mid, size);
      LOBYTE(mid) = v4;
      v49 = pivot;
      while ( 1 )
      {
        while ( cmp(v47, v49) < 0 )
          v47 += size;
        while ( cmp(v49, v46) < 0 )
          v46 -= size;
        v50 = v46;
        if ( v47 >= v46 )
          break;
        if ( (_BYTE)mid )
        {
          v51 = *(_QWORD *)v47;
          *(_QWORD *)v47 = *(_QWORD *)v46;
          *(_QWORD *)v46 = v51;
          v47 += size;
        }
        else
        {
          v57 = &v47[size];
          do
          {
            v58 = *v47;
            v59 = *v46;
            ++v47;
            ++v46;
            *(v47 - 1) = v59;
            *(v46 - 1) = v58;
          }
          while ( v57 > v47 );
          v47 = v57;
        }
        v46 = &v50[-size];
        if ( &v50[-size] < v47 )
        {
          v4 = (char)mid;
          goto LABEL_45;
        }
      }
      v4 = (char)mid;
      if ( v47 == v46 )
      {
        v60 = &v47[-size];
        v47 += size;
        v46 = v60;
      }
LABEL_45:
      v52 = (char *)(high - v47);
      if ( (int)v46 - (int)low > 0 )
      {
        if ( (int)v52 <= 0 )
        {
          high = v46;
        }
        else
        {
          v53 = v46 - low <= (__int64)v52;
          v54 = stack_ptr;
          if ( v53 )
          {
            v61 = high;
            stack_ptr->low = v47;
            v56 = v54 + 1;
            high = v46;
            v56[-1].high = v61;
          }
          else
          {
            v55 = low;
            stack_ptr->high = v46;
            v56 = v54 + 1;
            low = v47;
            v56[-1].low = v55;
          }
          stack_ptr = v56;
        }
        continue;
      }
      low = v47;
      if ( (int)v52 <= 0 )
        goto LABEL_19;
    }
    while ( stack_ptr > v175 );
  }
};
