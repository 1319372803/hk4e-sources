// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/structurally_valid.cc

// Line 362: range 000000000C96F300-000000000C96F4EC
int __fastcall google::protobuf::internal::UTF8GenericScan(
        const google::protobuf::internal::UTF8ScanObj *st,
        const char *str,
        int str_length,
        int *bytes_consumed)
{
  const char *v4; // r9
  int entry_shift; // ecx
  unsigned __int64 v8; // rdx
  const google::protobuf::uint8 *fast_state; // r10
  google::protobuf::uint32 losub; // ebx
  google::protobuf::uint32 hiadd; // esi
  google::protobuf::uint32 state0_size; // r13d
  const google::protobuf::uint8 *v13; // r11
  const char *v14; // rdi
  const google::protobuf::uint8 *v15; // r8
  __int64 v16; // rax
  int result; // eax
  int v18; // r15d
  int v19; // r8d
  int v20; // eax

  *bytes_consumed = 0;
  if ( !str_length )
    return 241;
  v4 = &str[str_length];
  entry_shift = st->entry_shift;
  v8 = (unsigned __int64)str;
  fast_state = st->fast_state;
  losub = st->losub;
  hiadd = st->hiadd;
  state0_size = st->state0_size;
  v13 = &st->state_table[st->state0];
  while ( 1 )
  {
    if ( (v8 & 7) == 0 )
      goto LABEL_17;
    if ( v8 >= (unsigned __int64)v4 )
      break;
    while ( !fast_state[*(unsigned __int8 *)v8] )
    {
      if ( (++v8 & 7) == 0 )
      {
LABEL_17:
        while ( (unsigned __int64)(v4 - 7) > v8 )
        {
          v18 = *(_DWORD *)v8;
          v19 = *(_DWORD *)(v8 + 4);
          v14 = (const char *)v8;
          v8 += 8LL;
          if ( (((hiadd + v19) | (v19 - losub) | (hiadd + v18) | (v18 - losub)) & 0x80808080) != 0 )
          {
            if ( fast_state[*(unsigned __int8 *)(v8 - 5)] | (unsigned __int8)(fast_state[*(unsigned __int8 *)(v8 - 6)] | fast_state[*(unsigned __int8 *)(v8 - 7)] | fast_state[*(unsigned __int8 *)(v8 - 8)]) )
              goto LABEL_10;
            if ( fast_state[*(unsigned __int8 *)(v8 - 1)] | (unsigned __int8)(fast_state[*(unsigned __int8 *)(v8 - 2)] | fast_state[*(unsigned __int8 *)(v8 - 3)] | fast_state[*(unsigned __int8 *)(v8 - 4)]) )
            {
              v14 += 4;
              goto LABEL_10;
            }
          }
        }
        break;
      }
      if ( v4 == (const char *)v8 )
        goto LABEL_26;
    }
    v14 = (const char *)v8;
LABEL_10:
    if ( v4 <= v14 )
    {
      v4 = v14;
LABEL_26:
      v20 = 0;
      goto LABEL_27;
    }
    v15 = v13;
    while ( 1 )
    {
      v16 = *(unsigned __int8 *)v14;
      v8 = (unsigned __int64)v14++;
      result = v15[v16];
      if ( result > 239 )
        break;
      v20 = result << entry_shift;
      v15 = &v13[v20];
      if ( v4 == v14 )
        goto LABEL_27;
    }
    if ( state0_size <= (int)v15 - (int)v13 )
    {
      do
        --v8;
      while ( (unsigned __int64)str < v8 && (*(_BYTE *)v8 & 0xC0) == 0x80 );
    }
    if ( result != 253 )
    {
      LODWORD(v4) = v8;
      goto LABEL_32;
    }
  }
  v4 = (const char *)v8;
  v20 = 0;
LABEL_27:
  if ( state0_size <= v20 )
  {
    do
      --v4;
    while ( str < v4 && (*v4 & 0xC0) == 0x80 );
    result = 240;
  }
  else
  {
    result = 241;
  }
LABEL_32:
  *bytes_consumed = (_DWORD)v4 - (_DWORD)str;
  return result;
};

// Line 471: range 000000000C96F4F0-000000000C96F5D8
int __fastcall google::protobuf::internal::UTF8GenericScanFastAscii(
        const google::protobuf::internal::UTF8ScanObj *st,
        const char *str,
        int str_length,
        int *bytes_consumed)
{
  int result; // eax
  const char *v6; // rbp
  const char *v7; // rbx
  const char *v8; // r15
  int rest_consumed[13]; // [rsp+14h] [rbp-34h] BYREF

  result = 241;
  *bytes_consumed = 0;
  if ( str_length )
  {
    v6 = &str[str_length];
    v7 = str;
    v8 = v6 - 7;
    while ( 1 )
    {
      if ( ((unsigned __int8)v7 & 7) != 0 )
      {
        while ( v7 < v6 && *v7 >= 0 )
        {
          if ( ((unsigned __int8)++v7 & 7) == 0 )
            goto LABEL_7;
        }
      }
      else
      {
LABEL_7:
        if ( v7 >= v8 )
        {
          while ( 1 )
          {
LABEL_14:
            if ( v6 <= v7 )
              goto LABEL_15;
LABEL_12:
            if ( *v7 < 0 )
              goto LABEL_15;
            ++v7;
          }
        }
        while ( ((*((_DWORD *)v7 + 1) | *(_DWORD *)v7) & 0x80808080) == 0 )
        {
          v7 += 8;
          if ( v8 <= v7 )
            goto LABEL_14;
        }
        if ( v6 > v7 )
          goto LABEL_12;
      }
LABEL_15:
      result = google::protobuf::internal::UTF8GenericScan(
                 st,
                 &str[(int)v7 - (int)str],
                 str_length - ((_DWORD)v7 - (_DWORD)str),
                 rest_consumed);
      v7 += rest_consumed[0];
      if ( result != 253 )
      {
        *bytes_consumed = (_DWORD)v7 - (_DWORD)str;
        return result;
      }
    }
  }
  return result;
};

// Line 528: range 000000000C96F610-000000000C96F64F
bool __fastcall google::protobuf::internal::IsStructurallyValidUTF8(const char *buf, int len)
{
  int bytes_consumed[3]; // [rsp+0h] [rbp-Ch] BYREF

  if ( !google::protobuf::internal::`anonymous namespace'::module_initialized_ )
    return 1;
  bytes_consumed[0] = 0;
  google::protobuf::internal::UTF8GenericScanFastAscii(
    &google::protobuf::internal::utf8acceptnonsurrogates_obj,
    buf,
    len,
    bytes_consumed);
  return bytes_consumed[0] == len;
};

// Line 536: range 000000000C96F5E0-000000000C96F609
int __fastcall google::protobuf::internal::UTF8SpnStructurallyValid(const google::protobuf::StringPiece *str)
{
  int length; // edx
  const char *ptr; // rsi
  int bytes_consumed; // [rsp+Ch] [rbp-4h] BYREF

  length = str->length_;
  ptr = str->ptr_;
  bytes_consumed = 0;
  google::protobuf::internal::UTF8GenericScanFastAscii(
    &google::protobuf::internal::utf8acceptnonsurrogates_obj,
    ptr,
    length,
    &bytes_consumed);
  return bytes_consumed;
};

// Line 537: range 000000000C96F650-000000000C96F660
int __fastcall google::protobuf::internal::UTF8SpnStructurallyValid(const google::protobuf::StringPiece *str)
{
  __int64 v1; // rax

  if ( google::protobuf::internal::`anonymous namespace'::module_initialized_ )
    LODWORD(v1) = google::protobuf::internal::UTF8SpnStructurallyValid(str);
  else
    return str->length_;
  return v1;
};

// Line 559: range 000000000C96F670-000000000C96F722
char *__fastcall google::protobuf::internal::UTF8CoerceToStructurallyValid(
        const google::protobuf::StringPiece *src_str,
        char *idst,
        const char replace_char)
{
  const char *ptr; // r12
  google::protobuf::stringpiece_ssize_type length; // rbp
  int v8; // eax
  __int64 v9; // r15
  const char *v10; // rbp
  const char *v11; // rbx
  char *i; // rax
  const char *v13; // rbx
  char *v14; // r12
  const char *v15; // rsi
  size_t v16; // r15
  google::protobuf::StringPiece str2; // [rsp+0h] [rbp-48h] BYREF

  ptr = src_str->ptr_;
  if ( google::protobuf::internal::`anonymous namespace'::module_initialized_ )
  {
    length = src_str->length_;
    v8 = google::protobuf::internal::UTF8SpnStructurallyValid(src_str);
    if ( (_DWORD)length != v8 )
    {
      v9 = v8;
      v10 = &ptr[(int)length];
      v11 = &ptr[v8];
      memmove(idst, ptr, v8);
      for ( i = &idst[v9]; v10 > v11; i = &v14[v16] )
      {
        *i = replace_char;
        v13 = v11 + 1;
        v14 = i + 1;
        str2.ptr_ = v13;
        str2.length_ = v10 - v13;
        v15 = v13;
        v16 = google::protobuf::internal::UTF8SpnStructurallyValid(&str2);
        v11 = &v13[v16];
        memmove(v14, v15, v16);
      }
      return idst;
    }
  }
  return (char *)ptr;
};

// Line 588: range 000000000C747350-000000000C74737D
void __cdecl GLOBAL__sub_I__ZN6google8protobuf8internal15UTF8GenericScanEPKNS1_19UTF8StateMachineObjEPKciPi()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
  google::protobuf::internal::`anonymous namespace'::module_initialized_ = 1;
};
