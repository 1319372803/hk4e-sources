// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/src/rsa_utils.cpp

// Line 86: range 000000000CA08F18-000000000CA093AD
int32_t __fastcall common::tools::RsaUtils::privateSign(
        const EVP_MD *evp_type,
        const std::string *private_key,
        const std::string *content,
        std::string *signed_str)
{
  unsigned __int64 v6; // r12
  _DWORD *v7; // r15
  __int64 v8; // rax
  __int64 v9; // r13
  int v10; // eax
  __int64 v11; // rax
  int32_t v12; // ebp
  int v13; // r14d
  std::string::pointer v14; // rsi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v17; // rax
  char v18; // al
  char *v19; // rdi
  std::string::size_type M_string_length; // rdi
  std::string::size_type *p_M_string_length; // rax
  std::string::size_type *v23; // rdi
  char v24; // al
  char v25; // al
  char v26; // al
  EVP_PKEY *evp_key_ptr; // [rsp+8h] [rbp-100h]
  BIO *bio_ptr; // [rsp+18h] [rbp-F0h]
  std::string::size_type M_allocated_capacity; // [rsp+28h] [rbp-E0h]
  std::string v30; // [rsp+30h] [rbp-D8h] BYREF
  char v31[184]; // [rsp+50h] [rbp-B8h] BYREF

  v6 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_1(128LL);
    if ( v11 )
      v6 = v11;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 4 12 sign_len:108 64 32 21 source_signed_str:107";
  *(_QWORD *)(v6 + 16) = common::tools::RsaUtils::privateSign;
  v7 = (_DWORD *)(v6 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)private_key >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(private_key);
    goto LABEL_10;
  }
  v8 = BIO_new_mem_buf(private_key->_M_dataplus._M_p, 0xFFFFFFFFLL);
  bio_ptr = (BIO *)v8;
  if ( !v8 )
  {
    v12 = -1;
    goto LABEL_34;
  }
  evp_key_ptr = (EVP_PKEY *)PEM_read_bio_PrivateKey(v8, 0LL, 0LL, 0LL);
  if ( !evp_key_ptr )
  {
LABEL_10:
    BIO_free(bio_ptr);
    v12 = -1;
    goto LABEL_34;
  }
  v9 = EVP_MD_CTX_new();
  if ( !v9 )
  {
    EVP_PKEY_free(evp_key_ptr);
    BIO_free(bio_ptr);
    v12 = -1;
    goto LABEL_34;
  }
  v10 = EVP_PKEY_size(evp_key_ptr);
  *(_QWORD *)(v6 + 64) = v6 + 80;
  std::string::_M_construct(v6 + 64, v10, 0LL);
  *(_DWORD *)(v6 + 48) = 0;
  EVP_DigestInit(v9, evp_type);
  if ( *(_BYTE *)(((unsigned __int64)&content->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&content->_M_string_length);
  }
  else if ( !*(_BYTE *)(((unsigned __int64)content >> 3) + 0x7FFF8000) )
  {
    EVP_DigestUpdate(v9, content->_M_dataplus._M_p, content->_M_string_length);
    goto LABEL_17;
  }
  __asan_report_load8(content);
LABEL_17:
  v13 = EVP_SignFinal(v9, *(_QWORD *)(v6 + 64), v6 + 48, evp_key_ptr);
  EVP_MD_CTX_free(v9);
  EVP_PKEY_free(evp_key_ptr);
  BIO_free(bio_ptr);
  v14 = (std::string::pointer)(v6 + 64);
  common::tools::StringUtils::base64Encode(&v30, (const std::string *)(v6 + 64));
  if ( *(_BYTE *)(((unsigned __int64)signed_str >> 3) + 0x7FFF8000) )
  {
    M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)signed_str;
    __asan_report_load8(signed_str);
LABEL_38:
    if ( !v30._M_string_length )
      goto LABEL_41;
    if ( v30._M_string_length != 1 )
    {
      memcpy(M_p, v14, v30._M_string_length);
      goto LABEL_41;
    }
    v25 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
    if ( v25 <= ((unsigned __int8)v14 & 7) && v25 )
    {
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v14;
      __asan_report_load1(v14);
    }
    else
    {
      v26 = *(_BYTE *)(((unsigned __int64)M_p >> 3) + 0x7FFF8000);
      if ( v26 > ((unsigned __int8)M_p & 7) || !v26 )
      {
        M_p->_M_local_buf[0] = *v14;
LABEL_41:
        M_string_length = v30._M_string_length;
        p_M_string_length = &signed_str->_M_string_length;
        if ( !*(_BYTE *)(((unsigned __int64)&signed_str->_M_string_length >> 3) + 0x7FFF8000) )
        {
          signed_str->_M_string_length = v30._M_string_length;
          v23 = (std::string::size_type *)&signed_str->_M_dataplus._M_p[M_string_length];
          v24 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
          if ( v24 > ((unsigned __int8)v23 & 7) || !v24 )
          {
            *(_BYTE *)v23 = 0;
            goto LABEL_26;
          }
          goto LABEL_53;
        }
LABEL_52:
        v23 = p_M_string_length;
        __asan_report_store8(p_M_string_length);
LABEL_53:
        p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__asan_report_store1(v23);
LABEL_54:
        __asan_report_load8(p_anon_0);
        goto LABEL_55;
      }
    }
    p_M_string_length = (std::string::size_type *)__asan_report_store1(M_p);
    goto LABEL_52;
  }
  M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)signed_str->_M_dataplus._M_p;
  v14 = v30._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v30._M_dataplus._M_p == &v30._anon_0 )
    goto LABEL_38;
  if ( M_p != &signed_str->_anon_0 )
  {
    p_anon_0 = &signed_str->_anon_0;
    if ( !*(_BYTE *)(((unsigned __int64)&signed_str->_anon_0 >> 3) + 0x7FFF8000) )
    {
      M_allocated_capacity = signed_str->_anon_0._M_allocated_capacity;
      goto LABEL_22;
    }
    goto LABEL_54;
  }
LABEL_55:
  M_p = 0LL;
LABEL_22:
  signed_str->_M_dataplus._M_p = v14;
  if ( *(_BYTE *)(((unsigned __int64)&signed_str->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8(&signed_str->_M_string_length);
    goto LABEL_57;
  }
  signed_str->_M_string_length = v30._M_string_length;
  v17 = &signed_str->_anon_0;
  if ( *(_BYTE *)(((unsigned __int64)&signed_str->_anon_0 >> 3) + 0x7FFF8000) )
  {
LABEL_57:
    __asan_report_store8(v17);
    goto LABEL_58;
  }
  signed_str->_anon_0._M_allocated_capacity = v30._anon_0._M_allocated_capacity;
  if ( !M_p )
  {
LABEL_58:
    v30._M_dataplus._M_p = v30._anon_0._M_local_buf;
    goto LABEL_26;
  }
  v30._M_dataplus._M_p = (std::string::pointer)M_p;
  v30._anon_0._M_allocated_capacity = M_allocated_capacity;
LABEL_26:
  v30._M_string_length = 0LL;
  v18 = *(_BYTE *)(((unsigned __int64)v30._M_dataplus._M_p >> 3) + 0x7FFF8000);
  if ( v18 <= ((__int64)v30._M_dataplus._M_p & 7) && v18 )
  {
    __asan_report_store1(v30._M_dataplus._M_p);
  }
  else
  {
    *v30._M_dataplus._M_p = 0;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v30._M_dataplus._M_p != &v30._anon_0 )
      operator delete(v30._M_dataplus._M_p);
    if ( v13 != 1 )
    {
      v12 = -1;
      goto LABEL_32;
    }
  }
  v12 = 0;
LABEL_32:
  v19 = *(char **)(v6 + 64);
  if ( v19 != (char *)(v6 + 80) )
    operator delete(v19);
LABEL_34:
  if ( v31 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v12;
};

// Line 135: range 000000000CA093B2-000000000CA096AC
int32_t __fastcall common::tools::RsaUtils::privateEncryp(
        const std::string *private_key,
        const std::string *content,
        std::string *result)
{
  __int64 bio_RSAPrivateKey; // rax
  __int64 v6; // r14
  std::string::size_type M_string_length; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rax
  int32_t v12; // r12d
  char *v13; // rdx
  std::string::size_type *v14; // rax
  void *p_M_string_length; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v18; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v19; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v20; // [rsp+10h] [rbp-A8h]
  BIO *bio_ptr; // [rsp+20h] [rbp-98h]
  unsigned __int64 block_count; // [rsp+28h] [rbp-90h]
  std::string::size_type v23; // [rsp+38h] [rbp-80h] BYREF
  char v24[120]; // [rsp+40h] [rbp-78h] BYREF

  v19 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_0(64LL);
    if ( v11 )
      v19 = v11;
  }
  *(_QWORD *)v19 = 1102416563LL;
  *(_QWORD *)(v19 + 8) = "1 32 8 14 block_size:157";
  *(_QWORD *)(v19 + 16) = common::tools::RsaUtils::privateEncryp;
  v20 = v19 >> 3;
  *(_DWORD *)(v20 + 2147450880) = -235802127;
  *(_DWORD *)(v20 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)private_key >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(private_key);
    goto LABEL_12;
  }
  bio_ptr = (BIO *)BIO_new_mem_buf(private_key->_M_dataplus._M_p, 0xFFFFFFFFLL);
  if ( bio_ptr )
  {
    bio_RSAPrivateKey = PEM_read_bio_RSAPrivateKey(bio_ptr, 0LL, 0LL, 0LL);
    v6 = bio_RSAPrivateKey;
    if ( bio_RSAPrivateKey )
    {
      v18 = (int)RSA_size(bio_RSAPrivateKey);
      if ( v18 > 0xB )
      {
        if ( *(_BYTE *)(((unsigned __int64)&content->_M_string_length >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(&content->_M_string_length);
        }
        else
        {
          M_string_length = content->_M_string_length;
          if ( M_string_length )
          {
            *(_QWORD *)(v19 + 32) = v18 - 11;
            block_count = (v18 - 11 + M_string_length - 1) / (v18 - 11);
            v8 = v18 * block_count;
            std::string::resize(result, v18 * block_count, 0LL);
            v9 = 0LL;
            v10 = -1;
            while ( 1 )
            {
              if ( v9 >= block_count )
              {
LABEL_29:
                v12 = v10;
                RSA_free(v6);
                BIO_free(bio_ptr);
                goto LABEL_30;
              }
              p_M_string_length = (void *)content;
              if ( *(_BYTE *)(((unsigned __int64)content >> 3) + 0x7FFF8000) )
                break;
              v16 = *(_QWORD *)(v19 + 32);
              v8 = (unsigned __int64)&content->_M_dataplus._M_p[v9 * v16];
              p_M_string_length = result;
              if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
                goto LABEL_16;
              v13 = &result->_M_dataplus._M_p[v9 * v18];
              p_M_string_length = &content->_M_string_length;
              if ( *(_BYTE *)(((unsigned __int64)&content->_M_string_length >> 3) + 0x7FFF8000) )
                goto LABEL_17;
              v23 = content->_M_string_length - v9 * *(_QWORD *)(v19 + 32);
              if ( v16 < v23 )
                goto LABEL_18;
              v14 = &v23;
LABEL_19:
              if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
              {
                v10 = __asan_report_load8(v14);
                goto LABEL_29;
              }
              v10 = RSA_private_encrypt(*v14, v8, v13, v6, 1LL);
              if ( v10 < 0 )
                goto LABEL_29;
              ++v9;
            }
            __asan_report_load8(content);
LABEL_16:
            __asan_report_load8(p_M_string_length);
LABEL_17:
            __asan_report_load8(p_M_string_length);
LABEL_18:
            v14 = (std::string::size_type *)(v19 + 32);
            goto LABEL_19;
          }
        }
      }
      RSA_free(v6);
      BIO_free(bio_ptr);
      v12 = -1;
      goto LABEL_30;
    }
LABEL_12:
    BIO_free(bio_ptr);
    v12 = -1;
    goto LABEL_30;
  }
  v12 = -1;
LABEL_30:
  if ( v24 == (char *)v19 )
  {
    *(_QWORD *)((v19 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v19 = 1172321806LL;
    *(_QWORD *)((v19 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v12;
};

// Line 191: range 000000000CA096AE-000000000CA099A8
int32_t __fastcall common::tools::RsaUtils::publicEncryp(
        const std::string *public_key,
        const std::string *content,
        std::string *result)
{
  __int64 bio_RSA_PUBKEY; // rax
  __int64 v6; // r14
  std::string::size_type M_string_length; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rax
  int32_t v12; // r12d
  char *v13; // rdx
  std::string::size_type *v14; // rax
  void *p_M_string_length; // rdi
  unsigned __int64 v16; // rcx
  unsigned __int64 v18; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v19; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v20; // [rsp+10h] [rbp-A8h]
  BIO *bio_ptr; // [rsp+20h] [rbp-98h]
  unsigned __int64 block_count; // [rsp+28h] [rbp-90h]
  std::string::size_type v23; // [rsp+38h] [rbp-80h] BYREF
  char v24[120]; // [rsp+40h] [rbp-78h] BYREF

  v19 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v11 = __asan_stack_malloc_0(64LL);
    if ( v11 )
      v19 = v11;
  }
  *(_QWORD *)v19 = 1102416563LL;
  *(_QWORD *)(v19 + 8) = "1 32 8 14 block_size:213";
  *(_QWORD *)(v19 + 16) = common::tools::RsaUtils::publicEncryp;
  v20 = v19 >> 3;
  *(_DWORD *)(v20 + 2147450880) = -235802127;
  *(_DWORD *)(v20 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)public_key >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(public_key);
    goto LABEL_12;
  }
  bio_ptr = (BIO *)BIO_new_mem_buf(public_key->_M_dataplus._M_p, 0xFFFFFFFFLL);
  if ( bio_ptr )
  {
    bio_RSA_PUBKEY = PEM_read_bio_RSA_PUBKEY(bio_ptr, 0LL, 0LL, 0LL);
    v6 = bio_RSA_PUBKEY;
    if ( bio_RSA_PUBKEY )
    {
      v18 = (int)RSA_size(bio_RSA_PUBKEY);
      if ( v18 > 0xB )
      {
        if ( *(_BYTE *)(((unsigned __int64)&content->_M_string_length >> 3) + 0x7FFF8000) )
        {
          __asan_report_load8(&content->_M_string_length);
        }
        else
        {
          M_string_length = content->_M_string_length;
          if ( M_string_length )
          {
            *(_QWORD *)(v19 + 32) = v18 - 11;
            block_count = (v18 - 11 + M_string_length - 1) / (v18 - 11);
            v8 = v18 * block_count;
            std::string::resize(result, v18 * block_count, 0LL);
            v9 = 0LL;
            v10 = -1;
            while ( 1 )
            {
              if ( v9 >= block_count )
              {
LABEL_29:
                v12 = v10;
                RSA_free(v6);
                BIO_free(bio_ptr);
                goto LABEL_30;
              }
              p_M_string_length = (void *)content;
              if ( *(_BYTE *)(((unsigned __int64)content >> 3) + 0x7FFF8000) )
                break;
              v16 = *(_QWORD *)(v19 + 32);
              v8 = (unsigned __int64)&content->_M_dataplus._M_p[v9 * v16];
              p_M_string_length = result;
              if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
                goto LABEL_16;
              v13 = &result->_M_dataplus._M_p[v9 * v18];
              p_M_string_length = &content->_M_string_length;
              if ( *(_BYTE *)(((unsigned __int64)&content->_M_string_length >> 3) + 0x7FFF8000) )
                goto LABEL_17;
              v23 = content->_M_string_length - v9 * *(_QWORD *)(v19 + 32);
              if ( v16 < v23 )
                goto LABEL_18;
              v14 = &v23;
LABEL_19:
              if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
              {
                v10 = __asan_report_load8(v14);
                goto LABEL_29;
              }
              v10 = RSA_public_encrypt(*v14, v8, v13, v6, 1LL);
              if ( v10 < 0 )
                goto LABEL_29;
              ++v9;
            }
            __asan_report_load8(content);
LABEL_16:
            __asan_report_load8(p_M_string_length);
LABEL_17:
            __asan_report_load8(p_M_string_length);
LABEL_18:
            v14 = (std::string::size_type *)(v19 + 32);
            goto LABEL_19;
          }
        }
      }
      RSA_free(v6);
      BIO_free(bio_ptr);
      v12 = -1;
      goto LABEL_30;
    }
LABEL_12:
    BIO_free(bio_ptr);
    v12 = -1;
    goto LABEL_30;
  }
  v12 = -1;
LABEL_30:
  if ( v24 == (char *)v19 )
  {
    *(_QWORD *)((v19 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v19 = 1172321806LL;
    *(_QWORD *)((v19 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return v12;
};

// Line 247: range 000000000CA099AA-000000000CA09B64
int32_t __fastcall common::tools::RsaUtils::privateDecryp(
        const std::string *private_key,
        const std::string *content,
        std::string *result)
{
  __int64 bio_RSAPrivateKey; // rax
  __int64 v6; // r15
  std::string::size_type M_string_length; // rsi
  unsigned __int64 v8; // rbx
  int32_t v9; // ebp
  const std::string *v10; // rdi
  unsigned int v12; // [rsp+Ch] [rbp-4Ch]
  BIO *bio_ptr; // [rsp+18h] [rbp-40h]

  if ( *(_BYTE *)(((unsigned __int64)private_key >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(private_key);
LABEL_15:
    BIO_free(bio_ptr);
    return -1;
  }
  bio_ptr = (BIO *)BIO_new_mem_buf(private_key->_M_dataplus._M_p, 0xFFFFFFFFLL);
  if ( !bio_ptr )
    return -1;
  bio_RSAPrivateKey = PEM_read_bio_RSAPrivateKey(bio_ptr, 0LL, 0LL, 0LL);
  v6 = bio_RSAPrivateKey;
  if ( !bio_RSAPrivateKey )
    goto LABEL_15;
  v12 = RSA_size(bio_RSAPrivateKey);
  if ( (unsigned __int64)(int)v12 <= 0xB )
  {
LABEL_17:
    RSA_free(v6);
    BIO_free(bio_ptr);
    return -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&content->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&content->_M_string_length);
    goto LABEL_17;
  }
  M_string_length = content->_M_string_length;
  if ( !M_string_length )
    goto LABEL_17;
  v8 = M_string_length % (int)v12;
  if ( v8 )
    goto LABEL_17;
  std::string::resize(result, ((int)v12 - 11LL) * (M_string_length / (int)v12), 0LL);
  v9 = -1;
  while ( v8 < M_string_length / (int)v12 )
  {
    v10 = content;
    if ( *(_BYTE *)(((unsigned __int64)content >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(content);
LABEL_19:
      __asan_report_load8(v10);
      break;
    }
    v10 = result;
    if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
      goto LABEL_19;
    v9 = RSA_private_decrypt(
           v12,
           &content->_M_dataplus._M_p[(int)v12 * v8],
           &result->_M_dataplus._M_p[v8 * ((int)v12 - 11LL)],
           v6,
           1LL);
    if ( v9 < 0 )
      break;
    ++v8;
  }
  RSA_free(v6);
  BIO_free(bio_ptr);
  return v9;
};

// Line 302: range 000000000CA09B66-000000000CA09D20
int32_t __fastcall common::tools::RsaUtils::publicDecryp(
        const std::string *public_key,
        const std::string *content,
        std::string *result)
{
  __int64 bio_RSA_PUBKEY; // rax
  __int64 v6; // r15
  std::string::size_type M_string_length; // rsi
  unsigned __int64 v8; // rbx
  int32_t v9; // ebp
  const std::string *v10; // rdi
  unsigned int v12; // [rsp+Ch] [rbp-4Ch]
  BIO *bio_ptr; // [rsp+18h] [rbp-40h]

  if ( *(_BYTE *)(((unsigned __int64)public_key >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(public_key);
LABEL_15:
    BIO_free(bio_ptr);
    return -1;
  }
  bio_ptr = (BIO *)BIO_new_mem_buf(public_key->_M_dataplus._M_p, 0xFFFFFFFFLL);
  if ( !bio_ptr )
    return -1;
  bio_RSA_PUBKEY = PEM_read_bio_RSA_PUBKEY(bio_ptr, 0LL, 0LL, 0LL);
  v6 = bio_RSA_PUBKEY;
  if ( !bio_RSA_PUBKEY )
    goto LABEL_15;
  v12 = RSA_size(bio_RSA_PUBKEY);
  if ( (unsigned __int64)(int)v12 <= 0xB )
  {
LABEL_17:
    RSA_free(v6);
    BIO_free(bio_ptr);
    return -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&content->_M_string_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8(&content->_M_string_length);
    goto LABEL_17;
  }
  M_string_length = content->_M_string_length;
  if ( !M_string_length )
    goto LABEL_17;
  v8 = M_string_length % (int)v12;
  if ( v8 )
    goto LABEL_17;
  std::string::resize(result, ((int)v12 - 11LL) * (M_string_length / (int)v12), 0LL);
  v9 = -1;
  while ( v8 < M_string_length / (int)v12 )
  {
    v10 = content;
    if ( *(_BYTE *)(((unsigned __int64)content >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8(content);
LABEL_19:
      __asan_report_load8(v10);
      break;
    }
    v10 = result;
    if ( *(_BYTE *)(((unsigned __int64)result >> 3) + 0x7FFF8000) )
      goto LABEL_19;
    v9 = RSA_public_decrypt(
           v12,
           &content->_M_dataplus._M_p[(int)v12 * v8],
           &result->_M_dataplus._M_p[v8 * ((int)v12 - 11LL)],
           v6,
           1LL);
    if ( v9 < 0 )
      break;
    ++v8;
  }
  RSA_free(v6);
  BIO_free(bio_ptr);
  return v9;
};
