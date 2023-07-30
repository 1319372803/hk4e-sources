// File: /root/chuanqi.kan/hiredis-cluster-0.7.0/command.c

// Line 520: range 000000000CAC0E10-000000000CAC2C43
void __fastcall redis_parse_cmd(cmd *r)
{
  char *cmd; // r15
  char *v3; // r9
  unsigned int v4; // r14d
  __int64 v5; // rsi
  const char *v6; // r13
  int v7; // r12d
  char *v8; // rsi
  const unsigned __int16 **v9; // rax
  cmd_type_t v10; // eax
  char *v11; // rsi
  const unsigned __int16 **v12; // rax
  cmd_type_t v13; // eax
  const char *v14; // r12
  const unsigned __int16 **v15; // rax
  const unsigned __int16 *v16; // rsi
  int v17; // eax
  int v18; // edx
  int *v19; // rax
  char *errstr; // rdi
  const unsigned __int16 **v21; // rax
  cmd_type_t v22; // eax
  char *v23; // rsi
  const unsigned __int16 **v24; // rax
  cmd_type_t v25; // eax
  const char *v26; // r12
  _QWORD *v27; // rax
  const unsigned __int16 **v28; // rax
  cmd_type_t type; // eax
  const unsigned __int16 **v30; // rax
  const unsigned __int16 **v31; // rax
  char *v32; // rax
  int v33; // eax
  cmd_type_t v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  _BOOL4 v66; // eax
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // eax
  int v82; // eax
  int v83; // eax
  int v84; // eax
  int v85; // eax
  int v86; // eax
  int v87; // eax
  int v88; // eax
  int v89; // eax
  int v90; // eax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int v102; // eax
  int v103; // eax
  int v104; // eax
  int v105; // eax
  int v106; // eax
  int v107; // eax
  int v108; // eax
  int v109; // eax
  int v110; // eax
  int v111; // eax
  int v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // eax
  int v116; // eax
  int v117; // eax
  int v118; // eax
  int v119; // eax
  int v120; // eax
  int v121; // eax
  int v122; // eax
  int v123; // eax
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int v127; // eax
  int v128; // eax
  int v129; // eax
  int v130; // eax
  int v131; // eax
  int v132; // eax
  int v133; // eax
  int v134; // eax
  int v135; // eax
  int v136; // eax
  int v137; // eax
  int v138; // eax
  int v139; // eax
  int v140; // eax
  int v141; // eax
  int v142; // eax
  int v143; // eax
  int v144; // eax
  int v145; // eax
  int v146; // eax
  int v147; // eax
  int v148; // eax
  int v149; // eax
  int v150; // eax
  unsigned int rnarg; // [rsp+Ch] [rbp-4Ch]
  char *rlen; // [rsp+10h] [rbp-48h]
  char *rlena; // [rsp+10h] [rbp-48h]
  char *rlenb; // [rsp+10h] [rbp-48h]
  char *v155; // [rsp+18h] [rbp-40h]
  char *v156; // [rsp+18h] [rbp-40h]
  char *v157; // [rsp+18h] [rbp-40h]
  char *v158; // [rsp+18h] [rbp-40h]
  char *v159; // [rsp+18h] [rbp-40h]
  char *v160; // [rsp+18h] [rbp-40h]
  char *v161; // [rsp+18h] [rbp-40h]

  cmd = r->cmd;
  v3 = &cmd[r->clen];
  if ( cmd >= v3 )
    return;
  v4 = 0;
  rnarg = 0;
  v5 = 0LL;
  v6 = 0LL;
  while ( 2 )
  {
    v7 = *cmd;
    switch ( v4 )
    {
      case 0u:
      case 1u:
        if ( v6 )
        {
          v160 = v3;
          v30 = __ctype_b_loc();
          v5 = (unsigned int)v5;
          v3 = v160;
          if ( ((*v30)[(char)v7] & 0x800) != 0 )
          {
            rnarg = v7 + 10 * rnarg - 48;
          }
          else
          {
            if ( (_BYTE)v7 != 13 || !rnarg )
              goto error;
            r->narg = rnarg;
            r->narg_end = cmd;
            v4 = 2;
            v6 = 0LL;
          }
        }
        else
        {
          if ( (_BYTE)v7 != 42 )
            goto error;
          r->narg_start = cmd;
          v6 = cmd;
          v4 = 1;
          rnarg = 0;
        }
        goto LABEL_7;
      case 2u:
        if ( (_BYTE)v7 != 10 )
          goto error;
        v4 = 3;
        goto LABEL_7;
      case 3u:
        if ( !v6 )
          goto LABEL_111;
        v161 = v3;
        v31 = __ctype_b_loc();
        v5 = (unsigned int)v5;
        v3 = v161;
        if ( ((*v31)[(char)v7] & 0x800) != 0 )
          goto LABEL_133;
        if ( (_BYTE)v7 != 13 || !rnarg || !(_DWORD)v5 )
          goto error;
        --rnarg;
        v4 = 4;
        v6 = 0LL;
        goto LABEL_7;
      case 4u:
        if ( (_BYTE)v7 != 10 )
          goto error;
        v4 = 5;
        goto LABEL_7;
      case 5u:
        if ( !v6 )
          v6 = cmd;
        if ( v3 <= &v6[v5] || v6[v5] != 13 )
          goto error;
        break;
      case 6u:
        if ( (_BYTE)v7 != 10 )
          goto error;
        type = r->type;
        if ( (unsigned int)(type - 114) <= 1 )
          goto done;
        if ( (unsigned int)(type - 112) <= 1 )
LABEL_110:
          v4 = 11;
        else
          v4 = (unsigned int)(type - 85) < 2 ? 11 : 7;
        goto LABEL_7;
      case 7u:
        if ( !v6 )
          goto LABEL_111;
        v159 = v3;
        v28 = __ctype_b_loc();
        v5 = (unsigned int)v5;
        v3 = v159;
        if ( ((*v28)[(char)v7] & 0x800) != 0 )
          goto LABEL_133;
        if ( (_BYTE)v7 != 13 || !rnarg )
          goto error;
        --rnarg;
        v4 = 8;
        v6 = 0LL;
        goto LABEL_7;
      case 8u:
        if ( (_BYTE)v7 != 10 )
          goto error;
        v4 = 9;
        goto LABEL_7;
      case 9u:
        rlena = v3;
        if ( !v6 )
          v6 = cmd;
        v26 = &v6[v5];
        if ( v3 <= &v6[v5] || *v26 != 13 )
          goto error;
        v27 = hiarray_push(r->keys);
        if ( !v27 )
          goto oom;
        *v27 = v6;
        v27[1] = v26;
        cmd = (char *)&v6[v5];
        v4 = 10;
        v5 = 0LL;
        v6 = 0LL;
        v3 = rlena;
        goto LABEL_7;
      case 0xAu:
        if ( (_BYTE)v7 == 10 )
        {
          v25 = r->type;
          switch ( v25 )
          {
            case CMD_REQ_REDIS_PERSIST:
            case CMD_REQ_REDIS_PTTL:
            case CMD_REQ_REDIS_SORT:
            case CMD_REQ_REDIS_TTL:
            case CMD_REQ_REDIS_TYPE:
            case CMD_REQ_REDIS_DECR:
            case CMD_REQ_REDIS_DUMP:
            case CMD_REQ_REDIS_GET:
            case CMD_REQ_REDIS_INCR:
            case CMD_REQ_REDIS_STRLEN:
            case CMD_REQ_REDIS_HGETALL:
            case CMD_REQ_REDIS_HKEYS:
            case CMD_REQ_REDIS_HLEN:
            case CMD_REQ_REDIS_HVALS:
            case CMD_REQ_REDIS_LLEN:
            case CMD_REQ_REDIS_LPOP:
            case CMD_REQ_REDIS_PFCOUNT:
            case CMD_REQ_REDIS_RPOP:
            case CMD_REQ_REDIS_SCARD:
            case CMD_REQ_REDIS_SMEMBERS:
            case CMD_REQ_REDIS_SPOP:
            case CMD_REQ_REDIS_XLEN:
            case CMD_REQ_REDIS_ZCARD:
            case CMD_REQ_REDIS_AUTH:
              goto LABEL_113;
            default:
              switch ( v25 )
              {
                case CMD_REQ_REDIS_EXPIRE:
                case CMD_REQ_REDIS_EXPIREAT:
                case CMD_REQ_REDIS_PEXPIRE:
                case CMD_REQ_REDIS_PEXPIREAT:
                case CMD_REQ_REDIS_APPEND:
                case CMD_REQ_REDIS_DECRBY:
                case CMD_REQ_REDIS_GETBIT:
                case CMD_REQ_REDIS_GETSET:
                case CMD_REQ_REDIS_INCRBY:
                case CMD_REQ_REDIS_INCRBYFLOAT:
                case CMD_REQ_REDIS_SETNX:
                case CMD_REQ_REDIS_HEXISTS:
                case CMD_REQ_REDIS_HGET:
                case CMD_REQ_REDIS_LINDEX:
                case CMD_REQ_REDIS_LPUSHX:
                case CMD_REQ_REDIS_RPOPLPUSH:
                case CMD_REQ_REDIS_RPUSHX:
                case CMD_REQ_REDIS_SISMEMBER:
                case CMD_REQ_REDIS_ZRANK:
                case CMD_REQ_REDIS_ZREVRANK:
                case CMD_REQ_REDIS_ZSCORE:
                  if ( rnarg != 1 )
                    goto error;
                  v4 = 11;
                  break;
                default:
                  switch ( v25 )
                  {
                    case CMD_REQ_REDIS_GETRANGE:
                    case CMD_REQ_REDIS_PSETEX:
                    case CMD_REQ_REDIS_RESTORE:
                    case CMD_REQ_REDIS_SETBIT:
                    case CMD_REQ_REDIS_SETEX:
                    case CMD_REQ_REDIS_SETRANGE:
                    case CMD_REQ_REDIS_HINCRBY:
                    case CMD_REQ_REDIS_HINCRBYFLOAT:
                    case CMD_REQ_REDIS_HSET:
                    case CMD_REQ_REDIS_HSETNX:
                    case CMD_REQ_REDIS_LRANGE:
                    case CMD_REQ_REDIS_LREM:
                    case CMD_REQ_REDIS_LSET:
                    case CMD_REQ_REDIS_LTRIM:
                    case CMD_REQ_REDIS_SMOVE:
                    case CMD_REQ_REDIS_ZCOUNT:
                    case CMD_REQ_REDIS_ZINCRBY:
                    case CMD_REQ_REDIS_ZLEXCOUNT:
                    case CMD_REQ_REDIS_ZREMRANGEBYRANK:
                    case CMD_REQ_REDIS_ZREMRANGEBYLEX:
                    case CMD_REQ_REDIS_ZREMRANGEBYSCORE:
                      if ( rnarg != 2 )
                        goto error;
                      v4 = 11;
                      break;
                    default:
                      if ( v25 != CMD_REQ_REDIS_LINSERT )
                      {
                        switch ( v25 )
                        {
                          case CMD_REQ_REDIS_BITCOUNT:
                          case CMD_REQ_REDIS_SET:
                          case CMD_REQ_REDIS_HDEL:
                          case CMD_REQ_REDIS_HMGET:
                          case CMD_REQ_REDIS_HMSET:
                          case CMD_REQ_REDIS_HSCAN:
                          case CMD_REQ_REDIS_LPUSH:
                          case CMD_REQ_REDIS_PFADD:
                          case CMD_REQ_REDIS_PFMERGE:
                          case CMD_REQ_REDIS_RPUSH:
                          case CMD_REQ_REDIS_SADD:
                          case CMD_REQ_REDIS_SDIFF:
                          case CMD_REQ_REDIS_SDIFFSTORE:
                          case CMD_REQ_REDIS_SINTER:
                          case CMD_REQ_REDIS_SINTERSTORE:
                          case CMD_REQ_REDIS_SRANDMEMBER:
                          case CMD_REQ_REDIS_SREM:
                          case CMD_REQ_REDIS_SUNION:
                          case CMD_REQ_REDIS_SUNIONSTORE:
                          case CMD_REQ_REDIS_SSCAN:
                          case CMD_REQ_REDIS_XACK:
                          case CMD_REQ_REDIS_XADD:
                          case CMD_REQ_REDIS_XAUTOCLAIM:
                          case CMD_REQ_REDIS_XCLAIM:
                          case CMD_REQ_REDIS_XDEL:
                          case CMD_REQ_REDIS_XPENDING:
                          case CMD_REQ_REDIS_XRANGE:
                          case CMD_REQ_REDIS_XREVRANGE:
                          case CMD_REQ_REDIS_XTRIM:
                          case CMD_REQ_REDIS_ZADD:
                          case CMD_REQ_REDIS_ZINTERSTORE:
                          case CMD_REQ_REDIS_ZRANGE:
                          case CMD_REQ_REDIS_ZRANGEBYLEX:
                          case CMD_REQ_REDIS_ZRANGEBYSCORE:
                          case CMD_REQ_REDIS_ZREM:
                          case CMD_REQ_REDIS_ZREVRANGE:
                          case CMD_REQ_REDIS_ZREVRANGEBYSCORE:
                          case CMD_REQ_REDIS_ZUNIONSTORE:
                          case CMD_REQ_REDIS_ZSCAN:
                            if ( !rnarg )
                              goto done;
                            goto LABEL_110;
                          default:
                            if ( (unsigned int)(v25 - 1) <= 0x17
                              && ((1LL << ((unsigned __int8)v25 - 1)) & 0x800003) != 0 )
                            {
                              goto LABEL_157;
                            }
                            if ( v25 != CMD_REQ_REDIS_MSET )
                              goto LABEL_116;
                            if ( !rnarg )
                              goto done;
                            if ( (r->narg & 1) != 0 )
                              goto LABEL_110;
                            goto error;
                        }
                      }
                      if ( rnarg != 3 )
                        goto error;
                      goto LABEL_110;
                  }
                  goto LABEL_7;
              }
              goto LABEL_7;
          }
        }
        goto error;
      case 0xBu:
        if ( !v6 )
          goto LABEL_111;
        v158 = v3;
        v24 = __ctype_b_loc();
        v5 = (unsigned int)v5;
        v3 = v158;
        if ( ((*v24)[(char)v7] & 0x800) != 0 )
          goto LABEL_133;
        if ( (_BYTE)v7 != 13 || cmd - v6 <= 1 || !rnarg )
          goto error;
        --rnarg;
        v4 = 12;
        v6 = 0LL;
        goto LABEL_7;
      case 0xCu:
        if ( (_BYTE)v7 != 10 )
          goto error;
        v4 = 13;
        goto LABEL_7;
      case 0xDu:
        v23 = &cmd[v5];
        if ( v3 <= v23 || *v23 != 13 )
          goto error;
        cmd = v23;
        v4 = 14;
        v5 = 0LL;
        goto LABEL_7;
      case 0xEu:
        if ( (_BYTE)v7 != 10 )
          goto error;
        v22 = r->type;
        switch ( v22 )
        {
          case CMD_REQ_REDIS_EXPIRE:
          case CMD_REQ_REDIS_EXPIREAT:
          case CMD_REQ_REDIS_PEXPIRE:
          case CMD_REQ_REDIS_PEXPIREAT:
          case CMD_REQ_REDIS_APPEND:
          case CMD_REQ_REDIS_DECRBY:
          case CMD_REQ_REDIS_GETBIT:
          case CMD_REQ_REDIS_GETSET:
          case CMD_REQ_REDIS_INCRBY:
          case CMD_REQ_REDIS_INCRBYFLOAT:
          case CMD_REQ_REDIS_SETNX:
          case CMD_REQ_REDIS_HEXISTS:
          case CMD_REQ_REDIS_HGET:
          case CMD_REQ_REDIS_LINDEX:
          case CMD_REQ_REDIS_LPUSHX:
          case CMD_REQ_REDIS_RPOPLPUSH:
          case CMD_REQ_REDIS_RPUSHX:
          case CMD_REQ_REDIS_SISMEMBER:
          case CMD_REQ_REDIS_ZRANK:
          case CMD_REQ_REDIS_ZREVRANK:
          case CMD_REQ_REDIS_ZSCORE:
            goto LABEL_113;
          default:
            switch ( v22 )
            {
              case CMD_REQ_REDIS_GETRANGE:
              case CMD_REQ_REDIS_PSETEX:
              case CMD_REQ_REDIS_RESTORE:
              case CMD_REQ_REDIS_SETBIT:
              case CMD_REQ_REDIS_SETEX:
              case CMD_REQ_REDIS_SETRANGE:
              case CMD_REQ_REDIS_HINCRBY:
              case CMD_REQ_REDIS_HINCRBYFLOAT:
              case CMD_REQ_REDIS_HSET:
              case CMD_REQ_REDIS_HSETNX:
              case CMD_REQ_REDIS_LRANGE:
              case CMD_REQ_REDIS_LREM:
              case CMD_REQ_REDIS_LSET:
              case CMD_REQ_REDIS_LTRIM:
              case CMD_REQ_REDIS_SMOVE:
              case CMD_REQ_REDIS_ZCOUNT:
              case CMD_REQ_REDIS_ZINCRBY:
              case CMD_REQ_REDIS_ZLEXCOUNT:
              case CMD_REQ_REDIS_ZREMRANGEBYRANK:
              case CMD_REQ_REDIS_ZREMRANGEBYLEX:
              case CMD_REQ_REDIS_ZREMRANGEBYSCORE:
                if ( rnarg == 1 )
                  goto LABEL_130;
                goto error;
              default:
                if ( v22 == CMD_REQ_REDIS_LINSERT )
                {
                  if ( rnarg != 2 )
                    goto error;
LABEL_130:
                  v4 = 15;
                }
                else
                {
                  switch ( v22 )
                  {
                    case CMD_REQ_REDIS_BITCOUNT:
                    case CMD_REQ_REDIS_SET:
                    case CMD_REQ_REDIS_HDEL:
                    case CMD_REQ_REDIS_HMGET:
                    case CMD_REQ_REDIS_HMSET:
                    case CMD_REQ_REDIS_HSCAN:
                    case CMD_REQ_REDIS_LPUSH:
                    case CMD_REQ_REDIS_PFADD:
                    case CMD_REQ_REDIS_PFMERGE:
                    case CMD_REQ_REDIS_RPUSH:
                    case CMD_REQ_REDIS_SADD:
                    case CMD_REQ_REDIS_SDIFF:
                    case CMD_REQ_REDIS_SDIFFSTORE:
                    case CMD_REQ_REDIS_SINTER:
                    case CMD_REQ_REDIS_SINTERSTORE:
                    case CMD_REQ_REDIS_SRANDMEMBER:
                    case CMD_REQ_REDIS_SREM:
                    case CMD_REQ_REDIS_SUNION:
                    case CMD_REQ_REDIS_SUNIONSTORE:
                    case CMD_REQ_REDIS_SSCAN:
                    case CMD_REQ_REDIS_XACK:
                    case CMD_REQ_REDIS_XADD:
                    case CMD_REQ_REDIS_XAUTOCLAIM:
                    case CMD_REQ_REDIS_XCLAIM:
                    case CMD_REQ_REDIS_XDEL:
                    case CMD_REQ_REDIS_XPENDING:
                    case CMD_REQ_REDIS_XRANGE:
                    case CMD_REQ_REDIS_XREVRANGE:
                    case CMD_REQ_REDIS_XTRIM:
                    case CMD_REQ_REDIS_ZADD:
                    case CMD_REQ_REDIS_ZINTERSTORE:
                    case CMD_REQ_REDIS_ZRANGE:
                    case CMD_REQ_REDIS_ZRANGEBYLEX:
                    case CMD_REQ_REDIS_ZRANGEBYSCORE:
                    case CMD_REQ_REDIS_ZREM:
                    case CMD_REQ_REDIS_ZREVRANGE:
                    case CMD_REQ_REDIS_ZREVRANGEBYSCORE:
                    case CMD_REQ_REDIS_ZUNIONSTORE:
                    case CMD_REQ_REDIS_ZSCAN:
                      goto LABEL_118;
                    default:
                      if ( (unsigned int)(v22 - 112) <= 1 )
                      {
                        if ( rnarg <= 1 )
                          goto error;
                        goto LABEL_130;
                      }
                      if ( (unsigned int)(v22 - 85) <= 1 )
                      {
LABEL_147:
                        if ( !rnarg )
                          goto error;
                      }
                      else
                      {
                        if ( v22 != CMD_REQ_REDIS_MSET )
                          goto error;
LABEL_157:
                        if ( !rnarg )
                        {
done:
                          r->result = CMD_PARSE_OK;
                          return;
                        }
                      }
                      v4 = 7;
                      break;
                  }
                }
                break;
            }
            break;
        }
        goto LABEL_7;
      case 0xFu:
        if ( !v6 )
          goto LABEL_111;
        v157 = v3;
        v21 = __ctype_b_loc();
        v5 = (unsigned int)v5;
        v3 = v157;
        if ( ((*v21)[(char)v7] & 0x800) != 0 )
          goto LABEL_133;
        if ( (_BYTE)v7 != 13 || cmd - v6 <= 1 || !rnarg )
          goto error;
        --rnarg;
        v4 = 16;
        v6 = 0LL;
        goto LABEL_7;
      case 0x10u:
        if ( (_BYTE)v7 != 10 )
          goto error;
        v4 = 17;
        goto LABEL_7;
      case 0x11u:
        if ( !v6 && (unsigned int)(r->type - 112) <= 1 )
          v6 = cmd;
        v14 = &cmd[v5];
        if ( v3 <= &cmd[v5] || *v14 != 13 )
          goto error;
        if ( (unsigned int)(r->type - 112) > 1 )
        {
          cmd += v5;
          v4 = 18;
          v5 = 0LL;
        }
        else
        {
          rlen = v3;
          if ( v14 - v6 <= 0 || v6 >= v14 )
          {
LABEL_42:
            LODWORD(cmd) = (_DWORD)v14;
            goto error;
          }
          v15 = __ctype_b_loc();
          v3 = rlen;
          v16 = *v15;
          v17 = 0;
          do
          {
            v18 = *v6;
            if ( (v16[*v6] & 0x800) == 0 )
              goto LABEL_42;
            ++v6;
            v17 = v18 + 10 * v17 - 48;
          }
          while ( v6 != v14 );
          cmd = (char *)v6;
          if ( !v17 )
            goto error;
          v4 = 18;
          v5 = 0LL;
          v6 = 0LL;
        }
        goto LABEL_7;
      case 0x12u:
        if ( (_BYTE)v7 != 10 )
          goto error;
        v13 = r->type;
        switch ( v13 )
        {
          case CMD_REQ_REDIS_GETRANGE:
          case CMD_REQ_REDIS_PSETEX:
          case CMD_REQ_REDIS_RESTORE:
          case CMD_REQ_REDIS_SETBIT:
          case CMD_REQ_REDIS_SETEX:
          case CMD_REQ_REDIS_SETRANGE:
          case CMD_REQ_REDIS_HINCRBY:
          case CMD_REQ_REDIS_HINCRBYFLOAT:
          case CMD_REQ_REDIS_HSET:
          case CMD_REQ_REDIS_HSETNX:
          case CMD_REQ_REDIS_LRANGE:
          case CMD_REQ_REDIS_LREM:
          case CMD_REQ_REDIS_LSET:
          case CMD_REQ_REDIS_LTRIM:
          case CMD_REQ_REDIS_SMOVE:
          case CMD_REQ_REDIS_ZCOUNT:
          case CMD_REQ_REDIS_ZINCRBY:
          case CMD_REQ_REDIS_ZLEXCOUNT:
          case CMD_REQ_REDIS_ZREMRANGEBYRANK:
          case CMD_REQ_REDIS_ZREMRANGEBYLEX:
          case CMD_REQ_REDIS_ZREMRANGEBYSCORE:
            goto LABEL_113;
          default:
            if ( v13 != CMD_REQ_REDIS_LINSERT )
            {
              switch ( v13 )
              {
                case CMD_REQ_REDIS_BITCOUNT:
                case CMD_REQ_REDIS_SET:
                case CMD_REQ_REDIS_HDEL:
                case CMD_REQ_REDIS_HMGET:
                case CMD_REQ_REDIS_HMSET:
                case CMD_REQ_REDIS_HSCAN:
                case CMD_REQ_REDIS_LPUSH:
                case CMD_REQ_REDIS_PFADD:
                case CMD_REQ_REDIS_PFMERGE:
                case CMD_REQ_REDIS_RPUSH:
                case CMD_REQ_REDIS_SADD:
                case CMD_REQ_REDIS_SDIFF:
                case CMD_REQ_REDIS_SDIFFSTORE:
                case CMD_REQ_REDIS_SINTER:
                case CMD_REQ_REDIS_SINTERSTORE:
                case CMD_REQ_REDIS_SRANDMEMBER:
                case CMD_REQ_REDIS_SREM:
                case CMD_REQ_REDIS_SUNION:
                case CMD_REQ_REDIS_SUNIONSTORE:
                case CMD_REQ_REDIS_SSCAN:
                case CMD_REQ_REDIS_XACK:
                case CMD_REQ_REDIS_XADD:
                case CMD_REQ_REDIS_XAUTOCLAIM:
                case CMD_REQ_REDIS_XCLAIM:
                case CMD_REQ_REDIS_XDEL:
                case CMD_REQ_REDIS_XPENDING:
                case CMD_REQ_REDIS_XRANGE:
                case CMD_REQ_REDIS_XREVRANGE:
                case CMD_REQ_REDIS_XTRIM:
                case CMD_REQ_REDIS_ZADD:
                case CMD_REQ_REDIS_ZINTERSTORE:
                case CMD_REQ_REDIS_ZRANGE:
                case CMD_REQ_REDIS_ZRANGEBYLEX:
                case CMD_REQ_REDIS_ZRANGEBYSCORE:
                case CMD_REQ_REDIS_ZREM:
                case CMD_REQ_REDIS_ZREVRANGE:
                case CMD_REQ_REDIS_ZREVRANGEBYSCORE:
                case CMD_REQ_REDIS_ZUNIONSTORE:
                case CMD_REQ_REDIS_ZSCAN:
                  goto LABEL_118;
                default:
                  if ( (unsigned int)(v13 - 112) <= 1 )
                    goto LABEL_147;
                  goto error;
              }
            }
            if ( rnarg != 1 )
              goto error;
            v4 = 19;
            break;
        }
        goto LABEL_7;
      case 0x13u:
        if ( !v6 )
          goto LABEL_111;
        v156 = v3;
        v12 = __ctype_b_loc();
        v5 = (unsigned int)v5;
        v3 = v156;
        if ( ((*v12)[(char)v7] & 0x800) != 0 )
          goto LABEL_133;
        if ( (_BYTE)v7 != 13 || cmd - v6 <= 1 || !rnarg )
          goto error;
        --rnarg;
        v4 = 20;
        v6 = 0LL;
        goto LABEL_7;
      case 0x14u:
        if ( (_BYTE)v7 != 10 )
          goto error;
        v4 = 21;
        goto LABEL_7;
      case 0x15u:
        v11 = &cmd[v5];
        if ( v3 <= v11 || *v11 != 13 )
          goto error;
        cmd = v11;
        v4 = 22;
        v5 = 0LL;
        goto LABEL_7;
      case 0x16u:
        if ( (_BYTE)v7 == 10 )
        {
          v10 = r->type;
          if ( v10 != CMD_REQ_REDIS_LINSERT )
          {
            switch ( v10 )
            {
              case CMD_REQ_REDIS_BITCOUNT:
              case CMD_REQ_REDIS_SET:
              case CMD_REQ_REDIS_HDEL:
              case CMD_REQ_REDIS_HMGET:
              case CMD_REQ_REDIS_HMSET:
              case CMD_REQ_REDIS_HSCAN:
              case CMD_REQ_REDIS_LPUSH:
              case CMD_REQ_REDIS_PFADD:
              case CMD_REQ_REDIS_PFMERGE:
              case CMD_REQ_REDIS_RPUSH:
              case CMD_REQ_REDIS_SADD:
              case CMD_REQ_REDIS_SDIFF:
              case CMD_REQ_REDIS_SDIFFSTORE:
              case CMD_REQ_REDIS_SINTER:
              case CMD_REQ_REDIS_SINTERSTORE:
              case CMD_REQ_REDIS_SRANDMEMBER:
              case CMD_REQ_REDIS_SREM:
              case CMD_REQ_REDIS_SUNION:
              case CMD_REQ_REDIS_SUNIONSTORE:
              case CMD_REQ_REDIS_SSCAN:
              case CMD_REQ_REDIS_XACK:
              case CMD_REQ_REDIS_XADD:
              case CMD_REQ_REDIS_XAUTOCLAIM:
              case CMD_REQ_REDIS_XCLAIM:
              case CMD_REQ_REDIS_XDEL:
              case CMD_REQ_REDIS_XPENDING:
              case CMD_REQ_REDIS_XRANGE:
              case CMD_REQ_REDIS_XREVRANGE:
              case CMD_REQ_REDIS_XTRIM:
              case CMD_REQ_REDIS_ZADD:
              case CMD_REQ_REDIS_ZINTERSTORE:
              case CMD_REQ_REDIS_ZRANGE:
              case CMD_REQ_REDIS_ZRANGEBYLEX:
              case CMD_REQ_REDIS_ZRANGEBYSCORE:
              case CMD_REQ_REDIS_ZREM:
              case CMD_REQ_REDIS_ZREVRANGE:
              case CMD_REQ_REDIS_ZREVRANGEBYSCORE:
              case CMD_REQ_REDIS_ZUNIONSTORE:
              case CMD_REQ_REDIS_ZSCAN:
                goto LABEL_118;
              default:
                goto error;
            }
          }
LABEL_113:
          if ( !rnarg )
            goto done;
        }
        goto error;
      case 0x17u:
        if ( v6 )
        {
          v155 = v3;
          v9 = __ctype_b_loc();
          v5 = (unsigned int)v5;
          v3 = v155;
          if ( ((*v9)[(char)v7] & 0x800) != 0 )
          {
LABEL_133:
            v5 = (unsigned int)(v7 + 10 * v5 - 48);
          }
          else
          {
            if ( (_BYTE)v7 != 13 || cmd - v6 <= 1 || !rnarg )
              goto error;
            --rnarg;
            v4 = 24;
            v6 = 0LL;
          }
        }
        else
        {
LABEL_111:
          if ( (_BYTE)v7 != 36 )
            goto error;
          v6 = cmd;
          v5 = 0LL;
        }
        goto LABEL_7;
      case 0x18u:
        if ( (_BYTE)v7 != 10 )
          goto error;
        v4 = 25;
        goto LABEL_7;
      case 0x19u:
        v8 = &cmd[v5];
        if ( v3 <= v8 || *v8 != 13 )
          goto error;
        cmd = v8;
        v4 = 26;
        v5 = 0LL;
        goto LABEL_7;
      case 0x1Au:
        if ( (_BYTE)v7 != 10 )
          goto error;
        v25 = r->type;
        switch ( v25 )
        {
          case CMD_REQ_REDIS_BITCOUNT:
          case CMD_REQ_REDIS_SET:
          case CMD_REQ_REDIS_HDEL:
          case CMD_REQ_REDIS_HMGET:
          case CMD_REQ_REDIS_HMSET:
          case CMD_REQ_REDIS_HSCAN:
          case CMD_REQ_REDIS_LPUSH:
          case CMD_REQ_REDIS_PFADD:
          case CMD_REQ_REDIS_PFMERGE:
          case CMD_REQ_REDIS_RPUSH:
          case CMD_REQ_REDIS_SADD:
          case CMD_REQ_REDIS_SDIFF:
          case CMD_REQ_REDIS_SDIFFSTORE:
          case CMD_REQ_REDIS_SINTER:
          case CMD_REQ_REDIS_SINTERSTORE:
          case CMD_REQ_REDIS_SRANDMEMBER:
          case CMD_REQ_REDIS_SREM:
          case CMD_REQ_REDIS_SUNION:
          case CMD_REQ_REDIS_SUNIONSTORE:
          case CMD_REQ_REDIS_SSCAN:
          case CMD_REQ_REDIS_XACK:
          case CMD_REQ_REDIS_XADD:
          case CMD_REQ_REDIS_XAUTOCLAIM:
          case CMD_REQ_REDIS_XCLAIM:
          case CMD_REQ_REDIS_XDEL:
          case CMD_REQ_REDIS_XPENDING:
          case CMD_REQ_REDIS_XRANGE:
          case CMD_REQ_REDIS_XREVRANGE:
          case CMD_REQ_REDIS_XTRIM:
          case CMD_REQ_REDIS_ZADD:
          case CMD_REQ_REDIS_ZINTERSTORE:
          case CMD_REQ_REDIS_ZRANGE:
          case CMD_REQ_REDIS_ZRANGEBYLEX:
          case CMD_REQ_REDIS_ZRANGEBYSCORE:
          case CMD_REQ_REDIS_ZREM:
          case CMD_REQ_REDIS_ZREVRANGE:
          case CMD_REQ_REDIS_ZREVRANGEBYSCORE:
          case CMD_REQ_REDIS_ZUNIONSTORE:
          case CMD_REQ_REDIS_ZSCAN:
            goto LABEL_118;
          default:
LABEL_116:
            if ( (unsigned int)(v25 - 112) > 1 && (unsigned int)(v25 - 85) > 1 )
              goto error;
LABEL_118:
            if ( !rnarg )
              goto done;
            v4 = 23;
            break;
        }
        goto LABEL_7;
      default:
        goto LABEL_7;
    }
    rlenb = v3;
    switch ( (int)v5 )
    {
      case 3:
        v62 = strncasecmp(v6, off_19EA7490, 3uLL);
        v3 = rlenb;
        if ( !v62 )
        {
          v34 = CMD_REQ_REDIS_GET;
          goto LABEL_167;
        }
        v63 = strncasecmp(v6, off_1B662FA1, 3uLL);
        v3 = rlenb;
        if ( !v63 )
        {
          v34 = CMD_REQ_REDIS_SET;
          goto LABEL_167;
        }
        v64 = strncasecmp(v6, off_1A0D5AFB, 3uLL);
        v3 = rlenb;
        if ( !v64 )
        {
          v34 = CMD_REQ_REDIS_TTL;
          goto LABEL_167;
        }
        cmd = (char *)&v6[v5];
        v65 = strncasecmp(v6, off_1A0D5B0A, 3uLL);
        v3 = rlenb;
        v66 = v65 == 0;
        r->type = v66;
        if ( !v66 )
          goto error;
        goto LABEL_168;
      case 4:
        v98 = strncasecmp(v6, aP_3, 4uLL);
        v3 = rlenb;
        if ( v98 )
        {
          v99 = strncasecmp(v6, "decr", 4uLL);
          v3 = rlenb;
          if ( v99 )
          {
            v100 = strncasecmp(v6, "dump", 4uLL);
            v3 = rlenb;
            if ( v100 )
            {
              v101 = strncasecmp(v6, asc_1A0D5B09, 4uLL);
              v3 = rlenb;
              if ( v101 )
              {
                v102 = strncasecmp(v6, "hget", 4uLL);
                v3 = rlenb;
                if ( v102 )
                {
                  v103 = strncasecmp(v6, "hlen", 4uLL);
                  v3 = rlenb;
                  if ( v103 )
                  {
                    v104 = strncasecmp(v6, "hset", 4uLL);
                    v3 = rlenb;
                    if ( v104 )
                    {
                      v105 = strncasecmp(v6, "incr", 4uLL);
                      v3 = rlenb;
                      if ( v105 )
                      {
                        v106 = strncasecmp(v6, "llen", 4uLL);
                        v3 = rlenb;
                        if ( v106 )
                        {
                          v107 = strncasecmp(v6, "lpop", 4uLL);
                          v3 = rlenb;
                          if ( v107 )
                          {
                            v108 = strncasecmp(v6, "lrem", 4uLL);
                            v3 = rlenb;
                            if ( v108 )
                            {
                              v109 = strncasecmp(v6, "lset", 4uLL);
                              v3 = rlenb;
                              if ( v109 )
                              {
                                v110 = strncasecmp(v6, "rpop", 4uLL);
                                v3 = rlenb;
                                if ( v110 )
                                {
                                  v111 = strncasecmp(v6, "sadd", 4uLL);
                                  v3 = rlenb;
                                  if ( v111 )
                                  {
                                    v112 = strncasecmp(v6, "spop", 4uLL);
                                    v3 = rlenb;
                                    if ( v112 )
                                    {
                                      v113 = strncasecmp(v6, "srem", 4uLL);
                                      v3 = rlenb;
                                      if ( v113 )
                                      {
                                        v114 = strncasecmp(v6, "type", 4uLL);
                                        v3 = rlenb;
                                        if ( v114 )
                                        {
                                          v115 = strncasecmp(v6, "mget", 4uLL);
                                          v3 = rlenb;
                                          if ( v115 )
                                          {
                                            v116 = strncasecmp(v6, "mset", 4uLL);
                                            v3 = rlenb;
                                            if ( v116 )
                                            {
                                              v117 = strncasecmp(v6, "xack", 4uLL);
                                              v3 = rlenb;
                                              if ( v117 )
                                              {
                                                v118 = strncasecmp(v6, "xadd", 4uLL);
                                                v3 = rlenb;
                                                if ( v118 )
                                                {
                                                  v119 = strncasecmp(v6, "xdel", 4uLL);
                                                  v3 = rlenb;
                                                  if ( v119 )
                                                  {
                                                    v120 = strncasecmp(v6, "xlen", 4uLL);
                                                    v3 = rlenb;
                                                    if ( v120 )
                                                    {
                                                      v121 = strncasecmp(v6, "zadd", 4uLL);
                                                      v3 = rlenb;
                                                      if ( v121 )
                                                      {
                                                        v122 = strncasecmp(v6, "zrem", 4uLL);
                                                        v3 = rlenb;
                                                        if ( v122 )
                                                        {
                                                          v123 = strncasecmp(v6, "eval", 4uLL);
                                                          v3 = rlenb;
                                                          if ( v123 )
                                                          {
                                                            v124 = strncasecmp(v6, "sort", 4uLL);
                                                            v3 = rlenb;
                                                            if ( v124 )
                                                            {
                                                              v125 = strncasecmp(v6, "ping", 4uLL);
                                                              v3 = rlenb;
                                                              if ( v125 )
                                                              {
                                                                v126 = strncasecmp(v6, "quit", 4uLL);
                                                                v3 = rlenb;
                                                                if ( v126 )
                                                                {
                                                                  v127 = strncasecmp(v6, "auth", 4uLL);
                                                                  v3 = rlenb;
                                                                  if ( v127 )
                                                                    goto LABEL_159;
                                                                  v34 = CMD_REQ_REDIS_AUTH;
                                                                }
                                                                else
                                                                {
                                                                  v34 = CMD_REQ_REDIS_QUIT;
                                                                }
                                                              }
                                                              else
                                                              {
                                                                v34 = CMD_REQ_REDIS_PING;
                                                              }
                                                            }
                                                            else
                                                            {
                                                              v34 = CMD_REQ_REDIS_SORT;
                                                            }
                                                          }
                                                          else
                                                          {
                                                            v34 = CMD_REQ_REDIS_EVAL;
                                                          }
                                                        }
                                                        else
                                                        {
                                                          v34 = CMD_REQ_REDIS_ZREM;
                                                        }
                                                      }
                                                      else
                                                      {
                                                        v34 = CMD_REQ_REDIS_ZADD;
                                                      }
                                                    }
                                                    else
                                                    {
                                                      v34 = CMD_REQ_REDIS_XLEN;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    v34 = CMD_REQ_REDIS_XDEL;
                                                  }
                                                }
                                                else
                                                {
                                                  v34 = CMD_REQ_REDIS_XADD;
                                                }
                                              }
                                              else
                                              {
                                                v34 = CMD_REQ_REDIS_XACK;
                                              }
                                            }
                                            else
                                            {
                                              v34 = CMD_REQ_REDIS_MSET;
                                            }
                                          }
                                          else
                                          {
                                            v34 = CMD_REQ_REDIS_MGET;
                                          }
                                        }
                                        else
                                        {
                                          v34 = CMD_REQ_REDIS_TYPE;
                                        }
                                      }
                                      else
                                      {
                                        v34 = CMD_REQ_REDIS_SREM;
                                      }
                                    }
                                    else
                                    {
                                      v34 = CMD_REQ_REDIS_SPOP;
                                    }
                                  }
                                  else
                                  {
                                    v34 = CMD_REQ_REDIS_SADD;
                                  }
                                }
                                else
                                {
                                  v34 = CMD_REQ_REDIS_RPOP;
                                }
                              }
                              else
                              {
                                v34 = CMD_REQ_REDIS_LSET;
                              }
                            }
                            else
                            {
                              v34 = CMD_REQ_REDIS_LREM;
                            }
                          }
                          else
                          {
                            v34 = CMD_REQ_REDIS_LPOP;
                          }
                        }
                        else
                        {
                          v34 = CMD_REQ_REDIS_LLEN;
                        }
                      }
                      else
                      {
                        v34 = CMD_REQ_REDIS_INCR;
                      }
                    }
                    else
                    {
                      v34 = CMD_REQ_REDIS_HSET;
                    }
                  }
                  else
                  {
                    v34 = CMD_REQ_REDIS_HLEN;
                  }
                }
                else
                {
                  v34 = CMD_REQ_REDIS_HGET;
                }
              }
              else
              {
                v34 = CMD_REQ_REDIS_HDEL;
              }
            }
            else
            {
              v34 = CMD_REQ_REDIS_DUMP;
            }
          }
          else
          {
            v34 = CMD_REQ_REDIS_DECR;
          }
        }
        else
        {
          v34 = CMD_REQ_REDIS_PTTL;
        }
        goto LABEL_167;
      case 5:
        v78 = strncasecmp(v6, "hkeys", 5uLL);
        v3 = rlenb;
        if ( v78 )
        {
          v79 = strncasecmp(v6, "hmget", 5uLL);
          v3 = rlenb;
          if ( v79 )
          {
            v80 = strncasecmp(v6, "hmset", 5uLL);
            v3 = rlenb;
            if ( v80 )
            {
              v81 = strncasecmp(v6, "hvals", 5uLL);
              v3 = rlenb;
              if ( v81 )
              {
                v82 = strncasecmp(v6, "hscan", 5uLL);
                v3 = rlenb;
                if ( v82 )
                {
                  v83 = strncasecmp(v6, "lpush", 5uLL);
                  v3 = rlenb;
                  if ( v83 )
                  {
                    v84 = strncasecmp(v6, "ltrim", 5uLL);
                    v3 = rlenb;
                    if ( v84 )
                    {
                      v85 = strncasecmp(v6, "rpush", 5uLL);
                      v3 = rlenb;
                      if ( v85 )
                      {
                        v86 = strncasecmp(v6, "scard", 5uLL);
                        v3 = rlenb;
                        if ( v86 )
                        {
                          v87 = strncasecmp(v6, "sdiff", 5uLL);
                          v3 = rlenb;
                          if ( v87 )
                          {
                            v88 = strncasecmp(v6, "setex", 5uLL);
                            v3 = rlenb;
                            if ( v88 )
                            {
                              v89 = strncasecmp(v6, "setnx", 5uLL);
                              v3 = rlenb;
                              if ( v89 )
                              {
                                v90 = strncasecmp(v6, "smove", 5uLL);
                                v3 = rlenb;
                                if ( v90 )
                                {
                                  v91 = strncasecmp(v6, "sscan", 5uLL);
                                  v3 = rlenb;
                                  if ( v91 )
                                  {
                                    v92 = strncasecmp(v6, "xinfo", 5uLL);
                                    v3 = rlenb;
                                    if ( v92 )
                                    {
                                      v93 = strncasecmp(v6, "xtrim", 5uLL);
                                      v3 = rlenb;
                                      if ( v93 )
                                      {
                                        v94 = strncasecmp(v6, "zcard", 5uLL);
                                        v3 = rlenb;
                                        if ( v94 )
                                        {
                                          v95 = strncasecmp(v6, "zrank", 5uLL);
                                          v3 = rlenb;
                                          if ( v95 )
                                          {
                                            v96 = strncasecmp(v6, "zscan", 5uLL);
                                            v3 = rlenb;
                                            if ( v96 )
                                            {
                                              v97 = strncasecmp(v6, "pfadd", 5uLL);
                                              v3 = rlenb;
                                              if ( v97 )
                                                goto LABEL_159;
                                              v34 = CMD_REQ_REDIS_PFADD;
                                            }
                                            else
                                            {
                                              v34 = CMD_REQ_REDIS_ZSCAN;
                                            }
                                          }
                                          else
                                          {
                                            v34 = CMD_REQ_REDIS_ZRANK;
                                          }
                                        }
                                        else
                                        {
                                          v34 = CMD_REQ_REDIS_ZCARD;
                                        }
                                      }
                                      else
                                      {
                                        v34 = CMD_REQ_REDIS_XTRIM;
                                      }
                                    }
                                    else
                                    {
                                      v34 = CMD_REQ_REDIS_XINFO;
                                    }
                                  }
                                  else
                                  {
                                    v34 = CMD_REQ_REDIS_SSCAN;
                                  }
                                }
                                else
                                {
                                  v34 = CMD_REQ_REDIS_SMOVE;
                                }
                              }
                              else
                              {
                                v34 = CMD_REQ_REDIS_SETNX;
                              }
                            }
                            else
                            {
                              v34 = CMD_REQ_REDIS_SETEX;
                            }
                          }
                          else
                          {
                            v34 = CMD_REQ_REDIS_SDIFF;
                          }
                        }
                        else
                        {
                          v34 = CMD_REQ_REDIS_SCARD;
                        }
                      }
                      else
                      {
                        v34 = CMD_REQ_REDIS_RPUSH;
                      }
                    }
                    else
                    {
                      v34 = CMD_REQ_REDIS_LTRIM;
                    }
                  }
                  else
                  {
                    v34 = CMD_REQ_REDIS_LPUSH;
                  }
                }
                else
                {
                  v34 = CMD_REQ_REDIS_HSCAN;
                }
              }
              else
              {
                v34 = CMD_REQ_REDIS_HVALS;
              }
            }
            else
            {
              v34 = CMD_REQ_REDIS_HMSET;
            }
          }
          else
          {
            v34 = CMD_REQ_REDIS_HMGET;
          }
        }
        else
        {
          v34 = CMD_REQ_REDIS_HKEYS;
        }
        goto LABEL_167;
      case 6:
        v128 = strncasecmp(v6, "append", 6uLL);
        v3 = rlenb;
        if ( !v128 )
        {
          v34 = CMD_REQ_REDIS_APPEND;
          goto LABEL_167;
        }
        v129 = strncasecmp(v6, "decrby", 6uLL);
        v3 = rlenb;
        if ( !v129 )
        {
          v34 = CMD_REQ_REDIS_DECRBY;
          goto LABEL_167;
        }
        v130 = strncasecmp(v6, "exists", 6uLL);
        v3 = rlenb;
        if ( !v130 )
        {
          v34 = CMD_REQ_REDIS_EXISTS;
          goto LABEL_167;
        }
        v131 = strncasecmp(v6, "expire", 6uLL);
        v3 = rlenb;
        if ( !v131 )
        {
          v34 = CMD_REQ_REDIS_EXPIRE;
          goto LABEL_167;
        }
        v132 = strncasecmp(v6, "getbit", 6uLL);
        v3 = rlenb;
        if ( !v132 )
        {
          v34 = CMD_REQ_REDIS_GETBIT;
          goto LABEL_167;
        }
        v133 = strncasecmp(v6, "getset", 6uLL);
        v3 = rlenb;
        if ( !v133 )
        {
          v34 = CMD_REQ_REDIS_GETSET;
          goto LABEL_167;
        }
        v134 = strncasecmp(v6, "psetex", 6uLL);
        v3 = rlenb;
        if ( !v134 )
        {
          v34 = CMD_REQ_REDIS_PSETEX;
          goto LABEL_167;
        }
        v135 = strncasecmp(v6, "hsetnx", 6uLL);
        v3 = rlenb;
        if ( !v135 )
        {
          v34 = CMD_REQ_REDIS_HSETNX;
          goto LABEL_167;
        }
        v136 = strncasecmp(v6, "incrby", 6uLL);
        v3 = rlenb;
        if ( !v136 )
        {
          v34 = CMD_REQ_REDIS_INCRBY;
LABEL_167:
          r->type = v34;
          cmd = (char *)&v6[v5];
LABEL_168:
          v4 = 6;
          v5 = 0LL;
          v6 = 0LL;
LABEL_7:
          if ( v3 <= ++cmd )
            return;
          continue;
        }
        v137 = strncasecmp(v6, "lindex", 6uLL);
        v3 = rlenb;
        if ( !v137 )
        {
          v34 = CMD_REQ_REDIS_LINDEX;
          goto LABEL_167;
        }
        v138 = strncasecmp(v6, "lpushx", 6uLL);
        v3 = rlenb;
        if ( !v138 )
        {
          v34 = CMD_REQ_REDIS_LPUSHX;
          goto LABEL_167;
        }
        v139 = strncasecmp(v6, "lrange", 6uLL);
        v3 = rlenb;
        if ( !v139 )
        {
          v34 = CMD_REQ_REDIS_LRANGE;
          goto LABEL_167;
        }
        v140 = strncasecmp(v6, "rpushx", 6uLL);
        v3 = rlenb;
        if ( !v140 )
        {
          v34 = CMD_REQ_REDIS_RPUSHX;
          goto LABEL_167;
        }
        v141 = strncasecmp(v6, "setbit", 6uLL);
        v3 = rlenb;
        if ( !v141 )
        {
          v34 = CMD_REQ_REDIS_SETBIT;
          goto LABEL_167;
        }
        v142 = strncasecmp(v6, "sinter", 6uLL);
        v3 = rlenb;
        if ( !v142 )
        {
          v34 = CMD_REQ_REDIS_SINTER;
          goto LABEL_167;
        }
        v143 = strncasecmp(v6, "strlen", 6uLL);
        v3 = rlenb;
        if ( !v143 )
        {
          v34 = CMD_REQ_REDIS_STRLEN;
          goto LABEL_167;
        }
        v144 = strncasecmp(v6, "sunion", 6uLL);
        v3 = rlenb;
        if ( !v144 )
        {
          v34 = CMD_REQ_REDIS_SUNION;
          goto LABEL_167;
        }
        v145 = strncasecmp(v6, "xclaim", 6uLL);
        v3 = rlenb;
        if ( !v145 )
        {
          v34 = CMD_REQ_REDIS_XCLAIM;
          goto LABEL_167;
        }
        v146 = strncasecmp(v6, "xgroup", 6uLL);
        v3 = rlenb;
        if ( !v146 )
        {
          v34 = CMD_REQ_REDIS_XGROUP;
          goto LABEL_167;
        }
        v147 = strncasecmp(v6, "xrange", 6uLL);
        v3 = rlenb;
        if ( !v147 )
        {
          v34 = CMD_REQ_REDIS_XRANGE;
          goto LABEL_167;
        }
        v148 = strncasecmp(v6, "zcount", 6uLL);
        v3 = rlenb;
        if ( !v148 )
        {
          v34 = CMD_REQ_REDIS_ZCOUNT;
          goto LABEL_167;
        }
        v149 = strncasecmp(v6, "zrange", 6uLL);
        v3 = rlenb;
        if ( !v149 )
        {
          v34 = CMD_REQ_REDIS_ZRANGE;
          goto LABEL_167;
        }
        v150 = strncasecmp(v6, "zscore", 6uLL);
        v3 = rlenb;
        if ( !v150 )
        {
          v34 = CMD_REQ_REDIS_ZSCORE;
          goto LABEL_167;
        }
LABEL_159:
        r->type = CMD_UNKNOWN;
        LODWORD(cmd) = (_DWORD)v6 + v5;
error:
        r->result = CMD_PARSE_ERROR;
        v19 = __errno_location();
        errstr = r->errstr;
        *v19 = 22;
        if ( errstr )
        {
LABEL_44:
          r->errstr[scnprintf(
                      errstr,
                      0x64uLL,
                      "Parse command error. Cmd type: %d, state: %d, break position: %d.",
                      (unsigned int)r->type,
                      v4,
                      (unsigned int)((_DWORD)cmd - LODWORD(r->cmd)))] = 0;
          return;
        }
        v32 = (char *)hiredisAllocFns.mallocFn(0x64uLL);
        r->errstr = v32;
        if ( v32 )
        {
          errstr = v32;
          goto LABEL_44;
        }
oom:
        r->result = CMD_PARSE_ENOMEM;
        return;
      case 7:
        v51 = strncasecmp(v6, "persist", 7uLL);
        v3 = rlenb;
        if ( v51 )
        {
          v52 = strncasecmp(v6, "pexpire", 7uLL);
          v3 = rlenb;
          if ( v52 )
          {
            v53 = strncasecmp(v6, "hexists", 7uLL);
            v3 = rlenb;
            if ( v53 )
            {
              v54 = strncasecmp(v6, "hgetall", 7uLL);
              v3 = rlenb;
              if ( v54 )
              {
                v55 = strncasecmp(v6, "hincrby", 7uLL);
                v3 = rlenb;
                if ( v55 )
                {
                  v56 = strncasecmp(v6, "linsert", 7uLL);
                  v3 = rlenb;
                  if ( v56 )
                  {
                    v57 = strncasecmp(v6, "zincrby", 7uLL);
                    v3 = rlenb;
                    if ( v57 )
                    {
                      v58 = strncasecmp(v6, "evalsha", 7uLL);
                      v3 = rlenb;
                      if ( v58 )
                      {
                        v59 = strncasecmp(v6, "restore", 7uLL);
                        v3 = rlenb;
                        if ( v59 )
                        {
                          v60 = strncasecmp(v6, "pfcount", 7uLL);
                          v3 = rlenb;
                          if ( v60 )
                          {
                            v61 = strncasecmp(v6, "pfmerge", 7uLL);
                            v3 = rlenb;
                            if ( v61 )
                              goto LABEL_159;
                            v34 = CMD_REQ_REDIS_PFMERGE;
                          }
                          else
                          {
                            v34 = CMD_REQ_REDIS_PFCOUNT;
                          }
                        }
                        else
                        {
                          v34 = CMD_REQ_REDIS_RESTORE;
                        }
                      }
                      else
                      {
                        v34 = CMD_REQ_REDIS_EVALSHA;
                      }
                    }
                    else
                    {
                      v34 = CMD_REQ_REDIS_ZINCRBY;
                    }
                  }
                  else
                  {
                    v34 = CMD_REQ_REDIS_LINSERT;
                  }
                }
                else
                {
                  v34 = CMD_REQ_REDIS_HINCRBY;
                }
              }
              else
              {
                v34 = CMD_REQ_REDIS_HGETALL;
              }
            }
            else
            {
              v34 = CMD_REQ_REDIS_HEXISTS;
            }
          }
          else
          {
            v34 = CMD_REQ_REDIS_PEXPIRE;
          }
        }
        else
        {
          v34 = CMD_REQ_REDIS_PERSIST;
        }
        goto LABEL_167;
      case 8:
        v69 = strncasecmp(v6, "expireat", 8uLL);
        v3 = rlenb;
        if ( v69 )
        {
          v70 = strncasecmp(v6, "bitcount", 8uLL);
          v3 = rlenb;
          if ( v70 )
          {
            v71 = strncasecmp(v6, "getrange", 8uLL);
            v3 = rlenb;
            if ( v71 )
            {
              v72 = strncasecmp(v6, "setrange", 8uLL);
              v3 = rlenb;
              if ( v72 )
              {
                v73 = strncasecmp(v6, "smembers", 8uLL);
                v3 = rlenb;
                if ( v73 )
                {
                  v74 = strncasecmp(v6, "xpending", 8uLL);
                  v3 = rlenb;
                  if ( v74 )
                  {
                    v75 = strncasecmp(v6, "zrevrank", 8uLL);
                    v3 = rlenb;
                    if ( v75 )
                      goto LABEL_159;
                    v34 = CMD_REQ_REDIS_ZREVRANK;
                  }
                  else
                  {
                    v34 = CMD_REQ_REDIS_XPENDING;
                  }
                }
                else
                {
                  v34 = CMD_REQ_REDIS_SMEMBERS;
                }
              }
              else
              {
                v34 = CMD_REQ_REDIS_SETRANGE;
              }
            }
            else
            {
              v34 = CMD_REQ_REDIS_GETRANGE;
            }
          }
          else
          {
            v34 = CMD_REQ_REDIS_BITCOUNT;
          }
        }
        else
        {
          v34 = CMD_REQ_REDIS_EXPIREAT;
        }
        goto LABEL_167;
      case 9:
        v45 = strncasecmp(v6, "pexpireat", 9uLL);
        v3 = rlenb;
        if ( v45 )
        {
          v46 = strncasecmp(v6, "rpoplpush", 9uLL);
          v3 = rlenb;
          if ( v46 )
          {
            v47 = strncasecmp(v6, "sismember", 9uLL);
            v3 = rlenb;
            if ( v47 )
            {
              v48 = strncasecmp(v6, "xrevrange", 9uLL);
              v3 = rlenb;
              if ( v48 )
              {
                v49 = strncasecmp(v6, "zrevrange", 9uLL);
                v3 = rlenb;
                if ( v49 )
                {
                  v50 = strncasecmp(v6, "zlexcount", 9uLL);
                  v3 = rlenb;
                  if ( v50 )
                    goto LABEL_159;
                  v34 = CMD_REQ_REDIS_ZLEXCOUNT;
                }
                else
                {
                  v34 = CMD_REQ_REDIS_ZREVRANGE;
                }
              }
              else
              {
                v34 = CMD_REQ_REDIS_XREVRANGE;
              }
            }
            else
            {
              v34 = CMD_REQ_REDIS_SISMEMBER;
            }
          }
          else
          {
            v34 = CMD_REQ_REDIS_RPOPLPUSH;
          }
        }
        else
        {
          v34 = CMD_REQ_REDIS_PEXPIREAT;
        }
        goto LABEL_167;
      case 10:
        v43 = strncasecmp(v6, "sdiffstore", 0xAuLL);
        v3 = rlenb;
        if ( v43 )
        {
          v44 = strncasecmp(v6, "xautoclaim", 0xAuLL);
          v3 = rlenb;
          if ( v44 )
            goto LABEL_159;
          v34 = CMD_REQ_REDIS_XAUTOCLAIM;
        }
        else
        {
          v34 = CMD_REQ_REDIS_SDIFFSTORE;
        }
        goto LABEL_167;
      case 11:
        v36 = strncasecmp(v6, "incrbyfloat", 0xBuLL);
        v3 = rlenb;
        if ( v36 )
        {
          v37 = strncasecmp(v6, "sinterstore", 0xBuLL);
          v3 = rlenb;
          if ( v37 )
          {
            v38 = strncasecmp(v6, "srandmember", 0xBuLL);
            v3 = rlenb;
            if ( v38 )
            {
              v39 = strncasecmp(v6, "sunionstore", 0xBuLL);
              v3 = rlenb;
              if ( v39 )
              {
                v40 = strncasecmp(v6, "zinterstore", 0xBuLL);
                v3 = rlenb;
                if ( v40 )
                {
                  v41 = strncasecmp(v6, "zunionstore", 0xBuLL);
                  v3 = rlenb;
                  if ( v41 )
                  {
                    v42 = strncasecmp(v6, "zrangebylex", 0xBuLL);
                    v3 = rlenb;
                    if ( v42 )
                      goto LABEL_159;
                    v34 = CMD_REQ_REDIS_ZRANGEBYLEX;
                  }
                  else
                  {
                    v34 = CMD_REQ_REDIS_ZUNIONSTORE;
                  }
                }
                else
                {
                  v34 = CMD_REQ_REDIS_ZINTERSTORE;
                }
              }
              else
              {
                v34 = CMD_REQ_REDIS_SUNIONSTORE;
              }
            }
            else
            {
              v34 = CMD_REQ_REDIS_SRANDMEMBER;
            }
          }
          else
          {
            v34 = CMD_REQ_REDIS_SINTERSTORE;
          }
        }
        else
        {
          v34 = CMD_REQ_REDIS_INCRBYFLOAT;
        }
        goto LABEL_167;
      case 12:
        v35 = strncasecmp(v6, "hincrbyfloat", 0xCuLL);
        v3 = rlenb;
        if ( v35 )
          goto LABEL_159;
        v34 = CMD_REQ_REDIS_HINCRBYFLOAT;
        goto LABEL_167;
      case 13:
        v33 = strncasecmp(v6, "zrangebyscore", 0xDuLL);
        v3 = rlenb;
        if ( v33 )
          goto LABEL_159;
        v34 = CMD_REQ_REDIS_ZRANGEBYSCORE;
        goto LABEL_167;
      case 14:
        v77 = strncasecmp(v6, "zremrangebylex", 0xEuLL);
        v3 = rlenb;
        if ( v77 )
          goto LABEL_159;
        v34 = CMD_REQ_REDIS_ZREMRANGEBYLEX;
        goto LABEL_167;
      case 15:
        v76 = strncasecmp(v6, "zremrangebyrank", 0xFuLL);
        v3 = rlenb;
        if ( v76 )
          goto LABEL_159;
        v34 = CMD_REQ_REDIS_ZREMRANGEBYRANK;
        goto LABEL_167;
      case 16:
        v67 = strncasecmp(v6, "zremrangebyscore", 0x10uLL);
        v3 = rlenb;
        if ( v67 )
        {
          v68 = strncasecmp(v6, "zrevrangebyscore", 0x10uLL);
          v3 = rlenb;
          if ( v68 )
            goto LABEL_159;
          v34 = CMD_REQ_REDIS_ZREVRANGEBYSCORE;
        }
        else
        {
          v34 = CMD_REQ_REDIS_ZREMRANGEBYSCORE;
        }
        goto LABEL_167;
      default:
        goto LABEL_159;
    }
  }
};

// Line 1262: range 000000000CAC2C50-000000000CAC2D2C
cmd *__cdecl command_get()
{
  _BYTE *v0; // rbx
  uint64_t v1; // rax
  hiarray *v2; // rax

  v0 = hiredisAllocFns.mallocFn(0x78uLL);
  if ( !v0 )
    return 0LL;
  v1 = cmd_id;
  v0[76] &= 0xFCu;
  *((_DWORD *)v0 + 2) = 0;
  *((_QWORD *)v0 + 2) = 0LL;
  *((_DWORD *)v0 + 6) = 0;
  *((_QWORD *)v0 + 4) = 0LL;
  ++v1;
  *((_DWORD *)v0 + 10) = 0;
  *(_QWORD *)v0 = v1;
  *((_QWORD *)v0 + 6) = 0LL;
  *((_QWORD *)v0 + 7) = 0LL;
  *((_QWORD *)v0 + 8) = 0LL;
  *((_DWORD *)v0 + 18) = 0;
  *((_DWORD *)v0 + 20) = -1;
  *((_QWORD *)v0 + 12) = 0LL;
  *((_QWORD *)v0 + 13) = 0LL;
  *((_QWORD *)v0 + 14) = 0LL;
  *((_QWORD *)v0 + 11) = 0LL;
  cmd_id = v1;
  v2 = hiarray_create(1u, 0x18uLL);
  *((_QWORD *)v0 + 6) = v2;
  if ( v2 )
    return (cmd *)v0;
  hiredisAllocFns.freeFn(v0);
  return 0LL;
};

// Line 1296: range 000000000CAC2D30-000000000CAC2DE6
void __fastcall command_destroy(cmd *command)
{
  hiarray *keys; // rdi
  hilist_0 *sub_commands; // rdi
  char *node_addr; // rdi

  if ( command )
  {
    if ( command->cmd )
    {
      ((void (*)(void))hiredisAllocFns.freeFn)();
      command->cmd = 0LL;
    }
    if ( command->errstr )
    {
      ((void (*)(void))hiredisAllocFns.freeFn)();
      command->errstr = 0LL;
    }
    keys = command->keys;
    if ( keys )
    {
      keys->nelem = 0;
      hiarray_destroy(keys);
      command->keys = 0LL;
    }
    if ( command->frag_seq )
    {
      ((void (*)(void))hiredisAllocFns.freeFn)();
      command->frag_seq = 0LL;
    }
    freeReplyObject(command->reply);
    sub_commands = command->sub_commands;
    if ( sub_commands )
      listRelease(sub_commands);
    node_addr = command->node_addr;
    if ( node_addr )
    {
      sdsfree(node_addr);
      command->node_addr = 0LL;
    }
    hiredisAllocFns.freeFn(command);
  }
};
