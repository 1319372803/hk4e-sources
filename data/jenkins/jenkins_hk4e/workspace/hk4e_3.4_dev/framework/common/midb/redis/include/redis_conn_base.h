// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/midb/redis/include/redis_conn_base.h

// Line 41: range 000000000CAB43B8-000000000CAB4580
common::midb::RedisReplyPtr common::midb::RedisConnBase::commandf(
        common::midb::RedisConnBase *const this,
        const char *format,
        ...)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int128 v10; // xmm4
  __int128 v11; // xmm5
  __int128 v12; // xmm6
  __int128 v13; // xmm7
  __int64 v15; // r14
  unsigned __int64 v16; // rbx
  _DWORD *v17; // r13
  const char *v18; // rdi
  common::midb::RedisReplyPtr result; // rax
  __int64 v20; // rax
  _BYTE v21[96]; // [rsp+0h] [rbp-148h] BYREF
  char v22; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v23; // [rsp+78h] [rbp-D0h]
  __int64 v24; // [rsp+80h] [rbp-C8h]
  __int64 v25; // [rsp+88h] [rbp-C0h]
  __int128 v26; // [rsp+90h] [rbp-B8h]
  __int128 v27; // [rsp+A0h] [rbp-A8h]
  __int128 v28; // [rsp+B0h] [rbp-98h]
  __int128 v29; // [rsp+C0h] [rbp-88h]
  __int128 v30; // [rsp+D0h] [rbp-78h]
  __int128 v31; // [rsp+E0h] [rbp-68h]
  __int128 v32; // [rsp+F0h] [rbp-58h]
  __int128 v33; // [rsp+100h] [rbp-48h]
  char v34; // [rsp+150h] [rbp+8h] BYREF

  v23 = v3;
  v24 = v4;
  v25 = v5;
  v26 = v6;
  v27 = v7;
  v28 = v8;
  v29 = v9;
  v30 = v10;
  v31 = v11;
  v32 = v12;
  v33 = v13;
  v15 = v2;
  v16 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v20 = __asan_stack_malloc_1(96LL);
    if ( v20 )
      v16 = v20;
  }
  *(_QWORD *)v16 = 1102416563LL;
  *(_QWORD *)(v16 + 8) = "1 32 24 5 ap:43";
  *(_QWORD *)(v16 + 16) = common::midb::RedisConnBase::commandf;
  v17 = (_DWORD *)(v16 >> 3);
  v17[536862720] = -235802127;
  v17[536862721] = -218103808;
  v17[536862722] = -202116109;
  *(_DWORD *)(v16 + 32) = 24;
  *(_DWORD *)(v16 + 36) = 48;
  *(_QWORD *)(v16 + 40) = &v34;
  *(_QWORD *)(v16 + 48) = &v22;
  if ( *(_BYTE *)(((unsigned __int64)format >> 3) + 0x7FFF8000) )
  {
    v18 = format;
    __asan_report_load8(format);
    goto LABEL_11;
  }
  v18 = (const char *)(*(_QWORD *)format + 32LL);
  if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
  {
LABEL_11:
    __asan_report_load8(v18);
    goto LABEL_12;
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_store16(this);
    goto LABEL_13;
  }
  (*(void (__fastcall **)(common::midb::RedisConnBase *const, const char *, __int64, unsigned __int64))(*(_QWORD *)format + 32LL))(
    this,
    format,
    v15,
    v16 + 32);
  if ( v21 != (_BYTE *)v16 )
  {
LABEL_13:
    *(_QWORD *)v16 = 1172321806LL;
    *(_QWORD *)((v16 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v16 >> 3) + 0x7FFF8008) = -168430091;
    goto LABEL_7;
  }
  *(_QWORD *)((v16 >> 3) + 0x7FFF8000) = 0LL;
  *(_DWORD *)((v16 >> 3) + 0x7FFF8008) = 0;
LABEL_7:
  result._M_ptr = (std::__shared_ptr<redisReply,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 479: range 000000000CAB45A4-000000000CAB45B7
void __fastcall common::midb::RedisConnBase::freeReply(redisReply_0 *reply_ptr)
{
  if ( reply_ptr )
    freeReplyObject(reply_ptr);
};
