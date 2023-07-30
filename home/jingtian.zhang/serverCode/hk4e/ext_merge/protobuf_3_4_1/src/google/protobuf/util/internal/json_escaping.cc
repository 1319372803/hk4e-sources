// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/util/internal/json_escaping.cc

// Line 202: range 000000000C978540-000000000C9785B6
google::protobuf::StringPiece __fastcall google::protobuf::util::converter::`anonymous namespace'::ToHex(
        google::protobuf::uint16 cp,
        char *buffer)
{
  char v2; // dl
  google::protobuf::StringPiece v4; // [rsp+0h] [rbp-18h] BYREF

  v4.ptr_ = buffer;
  v4.length_ = 0LL;
  buffer[5] = google::protobuf::util::converter::`anonymous namespace'::kHex[cp & 0xF];
  buffer[4] = google::protobuf::util::converter::`anonymous namespace'::kHex[((int)cp >> 4) & 0xF];
  v2 = google::protobuf::util::converter::`anonymous namespace'::kHex[((int)cp >> 8) & 0xF];
  buffer[2] = google::protobuf::util::converter::`anonymous namespace'::kHex[(int)cp >> 12];
  buffer[3] = v2;
  v4.length_ = strlen(buffer);
  return google::protobuf::StringPiece::substr(&v4, 0LL, 6uLL);
};

// Line 312: range 000000000C9785C0-000000000C978AFE
void __fastcall google::protobuf::util::converter::JsonEscaping::Escape(
        google::protobuf::strings::ByteSource *input,
        google::protobuf::strings::ByteSink *output)
{
  unsigned int v2; // ebx
  __int64 v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rbp
  int v6; // r15d
  int v7; // r13d
  char *ptr; // r8
  int v9; // r14d
  __int64 v10; // rax
  char v11; // r11
  size_t length; // rax
  bool v13; // r11
  __int64 v14; // rdx
  unsigned int v15; // eax
  google::protobuf::uint16 v16; // di
  google::protobuf::StringPiece v17; // rax
  void (__fastcall *v18)(google::protobuf::strings::NullByteSink *const, const char *, size_t); // rcx
  unsigned int v19; // eax
  unsigned __int16 v20; // si
  unsigned __int16 v21; // dx
  __int64 v22; // rax
  int num_left; // [rsp+0h] [rbp-78h]
  char *num_lefta; // [rsp+0h] [rbp-78h]
  char v25; // [rsp+8h] [rbp-70h]
  char *v26; // [rsp+8h] [rbp-70h]
  size_t v28; // [rsp+18h] [rbp-60h]
  char v29; // [rsp+18h] [rbp-60h]
  size_t v30; // [rsp+20h] [rbp-58h]
  char buffer[12]; // [rsp+34h] [rbp-44h] BYREF

  v2 = 0;
  strcpy(buffer, "\\udead\\ubee");
  num_left = 0;
  while ( (*((__int64 (__fastcall **)(google::protobuf::strings::ByteSource *))input->_vptr_ByteSource + 2))(input) )
  {
    v3 = (*((__int64 (__fastcall **)(google::protobuf::strings::ByteSource *))input->_vptr_ByteSource + 3))(input);
    v5 = v4;
    if ( num_left )
    {
      v6 = num_left;
      v7 = 0;
      ptr = 0LL;
      v9 = 0;
      LODWORD(v10) = 0;
LABEL_5:
      v10 = (int)v10;
      do
      {
        if ( v10 >= v5 )
        {
          length = 0LL;
          v11 = 1;
          if ( !v7 )
            goto LABEL_47;
          goto LABEL_46;
        }
        --v6;
        ++v9;
        v2 = *(_BYTE *)(v3 + v10) & 0x3F | (v2 << 6);
        if ( (unsigned int)*(unsigned __int8 *)(v3 + v10) - 128 > 0x3F )
          goto LABEL_51;
        ++v10;
      }
      while ( v6 );
      if ( (v2 & 0xFFFFF800) == 55296 || v2 > 0x10FFFF )
      {
        v11 = 0;
        length = 0LL;
        goto LABEL_12;
      }
      if ( v2 <= 0x9F )
        goto LABEL_37;
      if ( v2 > 0x17B5 )
      {
        if ( v2 == 65279 || v2 - 65529 <= 2 )
        {
LABEL_42:
          v16 = v2;
          goto LABEL_43;
        }
      }
      else if ( v2 > 0x17B3 || v2 == 1757 || v2 == 1807 || v2 == 173 )
      {
        goto LABEL_42;
      }
      if ( v2 - 1536 <= 3 || v2 - 8203 <= 4 || v2 - 8232 <= 6 || v2 - 8288 <= 4 || v2 - 8298 <= 5 )
      {
        v16 = v2;
LABEL_43:
        v17 = google::protobuf::util::converter::`anonymous namespace'::ToHex(v16, buffer);
        ptr = (char *)v17.ptr_;
        length = v17.length_;
        v13 = v17.length_ == 0;
LABEL_29:
        v11 = num_left != 0 && v13;
        if ( v11 )
          goto LABEL_38;
        goto LABEL_30;
      }
      if ( v2 - 119155 > 7 && v2 != 917505 && v2 - 917536 > 0x5F )
      {
        v13 = 1;
        length = 0LL;
        ptr = 0LL;
        goto LABEL_29;
      }
      buffer[8] = 100;
      ptr = buffer;
      buffer[2] = 100;
      v20 = (v2 & 0x3FF) - 9216;
      v21 = (v2 >> 10) - 10304;
      buffer[11] = google::protobuf::util::converter::`anonymous namespace'::kHex[v2 & 0xF];
      v22 = ((int)v20 >> 8) & 0xF;
      LOBYTE(v20) = google::protobuf::util::converter::`anonymous namespace'::kHex[((int)v20 >> 4) & 0xF];
      buffer[9] = google::protobuf::util::converter::`anonymous namespace'::kHex[v22];
      LODWORD(v22) = v21;
      LOBYTE(v21) = google::protobuf::util::converter::`anonymous namespace'::kHex[v21 & 0xF];
      buffer[10] = v20;
      buffer[5] = v21;
      LOBYTE(v21) = google::protobuf::util::converter::`anonymous namespace'::kHex[((int)v22 >> 4) & 0xF];
      buffer[3] = google::protobuf::util::converter::`anonymous namespace'::kHex[((int)v22 >> 8) & 0xF];
      length = 12LL;
      buffer[4] = v21;
LABEL_62:
      v11 = 1;
LABEL_12:
      v6 = 0;
      if ( !v7 )
        goto LABEL_52;
LABEL_46:
      v28 = length;
      v25 = v11;
      num_lefta = ptr;
      (*((void (__fastcall **)(google::protobuf::strings::ByteSource *, google::protobuf::strings::ByteSink *))input->_vptr_ByteSource
       + 5))(
        input,
        output);
      ptr = num_lefta;
      v11 = v25;
      length = v28;
LABEL_47:
      num_left = v6;
      if ( v9 )
        goto LABEL_52;
      if ( v11 )
        goto LABEL_53;
LABEL_49:
      num_left = 0;
    }
    else
    {
      v7 = 0;
      ptr = 0LL;
      v14 = 0LL;
      while ( 1 )
      {
        v2 = *(unsigned __int8 *)(v3 + v14);
        LODWORD(v10) = v7 + 1;
        if ( (v2 & 0x80u) != 0 )
          break;
        v9 = 1;
LABEL_37:
        length = strlen((const char *)(7LL * v2 + 437809856));
        ptr = (char *)(7LL * v2 + 437809856);
        v11 = num_left != 0 && length == 0;
        if ( v11 )
        {
LABEL_38:
          buffer[5] = v2 & 0x3F | 0x80;
          v15 = v2 >> 6;
          if ( v2 <= 0x7FF )
          {
            ptr = &buffer[4];
            buffer[4] = v15 | 0xC0;
            length = 2LL;
            goto LABEL_12;
          }
          buffer[4] = v15 & 0x3F | 0x80;
          v19 = v2 >> 12;
          if ( v2 <= 0xFFFF )
          {
            ptr = &buffer[3];
            buffer[3] = v19 | 0xE0;
            length = 3LL;
            goto LABEL_12;
          }
          ptr = &buffer[2];
          buffer[3] = v19 & 0x3F | 0x80;
          buffer[2] = (v2 >> 18) | 0xF0;
          length = 4LL;
          goto LABEL_62;
        }
LABEL_30:
        if ( length )
          goto LABEL_62;
        v7 += v9;
        v6 = 0;
        v9 = 0;
        v11 = 1;
        v14 = v7;
        if ( v7 >= v5 )
          goto LABEL_46;
      }
      if ( (unsigned __int8)v2 > 0xBFu )
      {
        if ( v2 <= 0xDF )
        {
          v2 &= 0x1Fu;
          v9 = 1;
          v6 = 1;
          goto LABEL_5;
        }
        if ( v2 <= 0xEF )
        {
          v2 &= 0xFu;
          v9 = 1;
          v6 = 2;
          goto LABEL_5;
        }
        if ( v2 <= 0xF7 )
        {
          v2 &= 7u;
          v9 = 1;
          v6 = 3;
          goto LABEL_5;
        }
      }
      v6 = 0;
      v9 = 1;
LABEL_51:
      length = 0LL;
      v11 = 0;
      if ( v7 )
        goto LABEL_46;
LABEL_52:
      v30 = length;
      v29 = v11;
      v26 = ptr;
      (*((void (__fastcall **)(google::protobuf::strings::ByteSource *, _QWORD))input->_vptr_ByteSource + 4))(input, v9);
      num_left = v6;
      length = v30;
      ptr = v26;
      if ( !v29 )
        goto LABEL_49;
LABEL_53:
      if ( !v6 && length )
      {
        v18 = (void (__fastcall *)(google::protobuf::strings::NullByteSink *const, const char *, size_t))*((_QWORD *)output->_vptr_ByteSink + 2);
        if ( v18 != google::protobuf::strings::NullByteSink::Append )
          v18((google::protobuf::strings::NullByteSink *const)output, ptr, length);
      }
    }
  }
};

// Line 356: range 000000000C747480-000000000C7474A1
void __cdecl GLOBAL__sub_I__ZN6google8protobuf4util9converter12JsonEscaping6EscapeEPNS0_7strings10ByteSourceEPNS4_8ByteSinkE()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
