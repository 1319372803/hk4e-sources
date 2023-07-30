// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/util/internal/field_mask_utility.cc

// Line 48: range 000000000C977490-000000000C97759E
// local variable allocation has failed, the output may be wrong!
std::string *__fastcall google::protobuf::util::converter::`anonymous namespace'::AppendPathSegmentToPrefix(
        std::string *retstr,
        google::protobuf::StringPiece prefix,
        google::protobuf::StringPiece segment)
{
  std::string *result; // rax
  __int64 v4; // r8
  __int64 v5; // rsi
  __int64 v6; // r8
  google::protobuf::strings::AlphaNum v7; // [rsp+0h] [rbp-98h] BYREF
  google::protobuf::strings::AlphaNum v8; // [rsp+30h] [rbp-68h] BYREF
  google::protobuf::strings::AlphaNum v9; // [rsp+60h] [rbp-38h] BYREF

  if ( !prefix.length_ )
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    if ( segment.ptr_ )
    {
      std::string::_M_construct<char const*>(
        retstr,
        segment.ptr_,
        &segment.ptr_[segment.length_],
        (std::forward_iterator_tag)segment.ptr_);
      return retstr;
    }
LABEL_11:
    retstr->_M_string_length = 0LL;
    result = retstr;
    retstr->_anon_0._M_local_buf[0] = 0;
    return result;
  }
  if ( !v4 )
  {
    retstr->_M_dataplus._M_p = retstr->_anon_0._M_local_buf;
    if ( v5 )
    {
      std::string::_M_construct<char const*>(
        retstr,
        prefix.ptr_,
        &prefix.ptr_[prefix.length_],
        (std::forward_iterator_tag)segment.ptr_);
      return retstr;
    }
    goto LABEL_11;
  }
  if ( v6 > 1 && *(_WORD *)segment.ptr_ == 8795 )
  {
    v8.piece_data_ = prefix.ptr_;
    v8.piece_size_ = prefix.length_;
    v9.piece_data_ = segment.ptr_;
    v9.piece_size_ = segment.length_;
    google::protobuf::StrCat[abi:cxx11]((__int64)retstr, &v8, &v9);
    return retstr;
  }
  v9.piece_data_ = segment.ptr_;
  v7.piece_size_ = prefix.length_;
  v9.piece_size_ = segment.length_;
  v8.piece_data_ = ".foo = value\"." + 13;
  v8.piece_size_ = 1LL;
  v7.piece_data_ = prefix.ptr_;
  google::protobuf::StrCat[abi:cxx11]((__int64)retstr, &v7, &v8, (__int64)&v9);
  return retstr;
};

// Line 65: range 000000000C977200-000000000C977485
_QWORD *__fastcall google::protobuf::util::converter::ConvertFieldMaskPath(
        _QWORD *a1,
        const char *a2,
        google::protobuf::stringpiece_ssize_type a3,
        void (__fastcall *a4)(void **, const char *, google::protobuf::stringpiece_ssize_type))
{
  _QWORD *v4; // r13
  unsigned __int64 length; // rax
  unsigned __int64 v6; // rbx
  int v7; // r14d
  bool v8; // bp
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  google::protobuf::StringPiece v12; // rax
  __int64 v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  bool v16; // cl
  __int64 v17; // r14
  unsigned __int64 v18; // r15
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  char v22; // dl
  bool v24; // [rsp+16h] [rbp-72h]
  char v25; // [rsp+17h] [rbp-71h]
  char v26; // [rsp+17h] [rbp-71h]
  google::protobuf::StringPiece v27; // [rsp+20h] [rbp-68h] BYREF
  void *v28[2]; // [rsp+30h] [rbp-58h] BYREF
  char v29; // [rsp+40h] [rbp-48h] BYREF

  v4 = a1 + 2;
  *a1 = a1 + 2;
  a1[1] = 0LL;
  *((_BYTE *)a1 + 16) = 0;
  v27.ptr_ = a2;
  v27.length_ = a3;
  std::string::reserve(a1, 2 * a3);
  v24 = 0;
  length = v27.length_;
  v6 = 0LL;
  v7 = 0;
  v8 = 0;
  do
  {
    if ( v8 )
    {
      if ( v6 == length )
        return a1;
      v13 = a1[1];
      v25 = v27.ptr_[v6];
      v14 = *a1;
      if ( v4 == (_QWORD *)*a1 )
        v15 = 15LL;
      else
        v15 = a1[2];
      if ( v13 + 1 > v15 )
      {
        std::string::_M_mutate(a1, v13, 0LL, 0LL, 1LL);
        v14 = *a1;
      }
      *(_BYTE *)(v14 + v13) = v25;
      v16 = v24;
      a1[1] = v13 + 1;
      *(_BYTE *)(*a1 + v13 + 1) = 0;
      if ( v24 )
      {
        v24 = 0;
        length = v27.length_;
        v8 = v16;
      }
      else
      {
        v22 = v27.ptr_[v6];
        length = v27.length_;
        if ( v22 == 92 )
        {
          v24 = v8;
        }
        else if ( v22 == 34 )
        {
          v7 = v6 + 1;
          v8 = 0;
        }
      }
    }
    else
    {
      if ( v6 == length
        || (v10 = (unsigned __int8)v27.ptr_[v6], (unsigned __int8)v10 <= 0x2Eu)
        && (v11 = 0x430400000000LL, _bittest64(&v11, v10)) )
      {
        v12 = google::protobuf::StringPiece::substr(&v27, v7, v6 - v7);
        a4(v28, v12.ptr_, v12.length_);
        std::string::_M_append(a1, (const char *)v28[0], v28[1]);
        if ( v28[0] != &v29 )
          operator delete(v28[0]);
        length = v27.length_;
        if ( v27.length_ > v6 )
        {
          v17 = a1[1];
          v18 = v17 + 1;
          v26 = v27.ptr_[v6];
          v19 = *a1;
          if ( v4 == (_QWORD *)*a1 )
            v20 = 15LL;
          else
            v20 = a1[2];
          if ( v18 > v20 )
          {
            std::string::_M_mutate(a1, v17, 0LL, 0LL, 1LL);
            v19 = *a1;
          }
          *(_BYTE *)(v19 + v17) = v26;
          v21 = *a1;
          a1[1] = v18;
          *(_BYTE *)(v21 + v17 + 1) = 0;
          length = v27.length_;
        }
        v7 = v6 + 1;
      }
      if ( v6 < length )
        v8 = v27.ptr_[v6] == 34;
    }
    ++v6;
  }
  while ( v6 <= length );
  return a1;
};

// Line 109: range 000000000C9775A0-000000000C978128
google::protobuf::util::Status *__fastcall google::protobuf::util::converter::DecodeCompactFieldMaskPaths(
        google::protobuf::util::Status *a1,
        const char *a2,
        google::protobuf::stringpiece_ssize_type a3,
        __int64 a4)
{
  std::string **v4; // rbx
  std::string *v5; // rax
  int length; // ebp
  int v7; // ebx
  bool v8; // r13
  int v9; // r15d
  char v10; // al
  int v11; // ecx
  char v12; // al
  google::protobuf::StringPiece v13; // rax
  std::forward_iterator_tag v14; // cl
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer_0 M_cur; // rax
  std::string::size_type M_string_length; // r12
  char *M_p; // r15
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rax
  const char *v19; // rax
  std::string::pointer v20; // r8
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v21; // rdi
  void *ptr; // rdi
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer_0 v23; // rbp
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer_0 M_first; // r14
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer_0 v25; // r15
  void ***v26; // r13
  void **v27; // r12
  __int64 v28; // rbx
  std::_Deque_base<std::string>::_Map_pointer_0 M_map; // rdi
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer_0 v30; // rbx
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer_0 v31; // rbp
  void *v32; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v34; // rdi
  std::string *v35; // rdx
  void *v36; // rdi
  std::string *v37; // rax
  std::string::$CFBEC286C7F52157F7E59FC354047095 *v38; // rdi
  google::protobuf::stringpiece_ssize_type segment; // [rsp+8h] [rbp-190h]
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer_0 segmenta; // [rsp+8h] [rbp-190h]
  bool v41; // [rsp+10h] [rbp-188h]
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer_0 M_last; // [rsp+10h] [rbp-188h]
  const char *v43; // [rsp+18h] [rbp-180h]
  std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer_0 M_node; // [rsp+18h] [rbp-180h]
  google::protobuf::StringPiece v47; // [rsp+30h] [rbp-168h] BYREF
  std::string prefix; // [rsp+40h] [rbp-158h] BYREF
  google::protobuf::StringPiece v49; // [rsp+60h] [rbp-138h] BYREF
  char v50[16]; // [rsp+70h] [rbp-128h] BYREF
  google::protobuf::strings::AlphaNum v51; // [rsp+80h] [rbp-118h] BYREF
  google::protobuf::strings::AlphaNum v52; // [rsp+B0h] [rbp-E8h] BYREF
  google::protobuf::util::Status v53; // [rsp+E0h] [rbp-B8h] BYREF
  std::deque<std::string>_0 v54; // [rsp+110h] [rbp-88h] BYREF

  v47.length_ = a3;
  v47.ptr_ = a2;
  v54._M_impl._M_map_size = 8LL;
  v54._M_impl._M_map = (std::_Deque_base<std::string>::_Map_pointer_0)operator new(0x40uLL);
  v4 = v54._M_impl._M_map + 3;
  v5 = (std::string *)operator new(0x200uLL);
  *((_QWORD *)v54._M_impl._M_map + 3) = v5;
  v54._M_impl._M_start._M_first = v5;
  v54._M_impl._M_finish._M_first = v5;
  v54._M_impl._M_start._M_cur = v5;
  v54._M_impl._M_finish._M_cur = v5;
  v54._M_impl._M_start._M_node = v4;
  v54._M_impl._M_start._M_last = v5 + 16;
  length = v47.length_;
  v54._M_impl._M_finish._M_node = v4;
  v54._M_impl._M_finish._M_last = v5 + 16;
  if ( SLODWORD(v47.length_) < 0 )
  {
LABEL_105:
    google::protobuf::util::Status::Status(a1);
    goto LABEL_56;
  }
  v41 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( length == v7 )
          goto LABEL_20;
        if ( !v8 )
          break;
        if ( v41 )
        {
          ++v7;
          v8 = v41;
          v41 = 0;
          if ( length < v7 )
            goto LABEL_14;
        }
        else
        {
          v10 = v47.ptr_[v7];
          if ( v10 == 92 )
          {
            ++v7;
            v41 = v8;
            if ( length < v7 )
              goto LABEL_14;
          }
          else if ( v10 == 34 )
          {
            if ( length - 1 <= v7 )
              goto LABEL_53;
            v11 = v7 + 1;
            if ( v47.ptr_[v7 + 1] != 93 )
              goto LABEL_53;
            v7 += 2;
            v8 = 0;
            if ( length - 1 > v11 )
            {
              v8 = (unsigned __int8)(v47.ptr_[v7] - 40) > 1u && (v47.ptr_[v7] & 0xFD) != 44;
              if ( v8 )
              {
                v52.piece_data_ = v47.ptr_;
                *(_QWORD *)&v53.error_code_ = "'. Map keys should be at the end of a path segment.";
                v53.error_message_._M_dataplus._M_p = (std::string::pointer)51;
                v52.piece_size_ = v47.length_;
                v51.piece_data_ = "Invalid FieldMask '";
                v51.piece_size_ = 19LL;
                google::protobuf::StrCat[abi:cxx11]((__int64)&v49, &v51, &v52, (__int64)&v53);
                google::protobuf::util::Status::Status(a1, INVALID_ARGUMENT, v49);
                goto LABEL_54;
              }
              v41 = 0;
            }
            if ( length < v7 )
              goto LABEL_14;
          }
          else
          {
LABEL_37:
            if ( length < ++v7 )
              goto LABEL_14;
          }
        }
      }
      v12 = v47.ptr_[v7];
      if ( v12 != 91 )
        break;
      if ( length - 1 <= v7 || v47.ptr_[v7 + 1] != 34 )
      {
LABEL_53:
        v52.piece_data_ = v47.ptr_;
        *(_QWORD *)&v53.error_code_ = "'. Map keys should be represented as [\"some_key\"].";
        v53.error_message_._M_dataplus._M_p = (std::string::pointer)50;
        v52.piece_size_ = v47.length_;
        v51.piece_data_ = "Invalid FieldMask '";
        v51.piece_size_ = 19LL;
        google::protobuf::StrCat[abi:cxx11]((__int64)&v49, &v51, &v52, (__int64)&v53);
        google::protobuf::util::Status::Status(a1, INVALID_ARGUMENT, v49);
LABEL_54:
        ptr = (void *)v49.ptr_;
        if ( v49.ptr_ == v50 )
          goto LABEL_56;
LABEL_55:
        operator delete(ptr);
        goto LABEL_56;
      }
      v7 += 2;
      v8 = 1;
      if ( length < v7 )
        goto LABEL_14;
    }
    if ( (unsigned __int8)(v12 - 40) > 1u && v12 != 44 )
      goto LABEL_37;
LABEL_20:
    v13 = google::protobuf::StringPiece::substr(&v47, v9, v7 - v9);
    v43 = v13.ptr_;
    M_cur = v54._M_impl._M_finish._M_cur;
    segment = v13.length_;
    if ( v54._M_impl._M_finish._M_cur != v54._M_impl._M_start._M_cur )
    {
      if ( v54._M_impl._M_finish._M_cur == v54._M_impl._M_finish._M_first )
        M_cur = (std::_Deque_iterator<std::string,std::string&,std::string*>::_Elt_pointer_0)(*((_QWORD *)v54._M_impl._M_finish._M_node
                                                                                              - 1)
                                                                                            + 512LL);
      M_string_length = M_cur[-1]._M_string_length;
      prefix._M_dataplus._M_p = prefix._anon_0._M_local_buf;
      M_p = M_cur[-1]._M_dataplus._M_p;
      if ( &M_p[M_string_length] && !M_p )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      *(_QWORD *)&v53.error_code_ = M_string_length;
      if ( M_string_length > 0xF )
      {
        prefix._M_dataplus._M_p = (std::string::pointer)std::string::_M_create(&prefix, &v53, 0LL);
        v34 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)prefix._M_dataplus._M_p;
        prefix._anon_0._M_allocated_capacity = *(_QWORD *)&v53.error_code_;
      }
      else
      {
        if ( M_string_length == 1 )
        {
          prefix._anon_0._M_local_buf[0] = *M_p;
          p_anon_0 = &prefix._anon_0;
LABEL_28:
          prefix._M_string_length = M_string_length;
          p_anon_0->_M_local_buf[M_string_length] = 0;
          goto LABEL_29;
        }
        if ( !M_string_length )
        {
          p_anon_0 = &prefix._anon_0;
          goto LABEL_28;
        }
        v34 = &prefix._anon_0;
      }
      memcpy(v34, M_p, M_string_length);
      M_string_length = *(_QWORD *)&v53.error_code_;
      p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)prefix._M_dataplus._M_p;
      goto LABEL_28;
    }
    prefix._M_dataplus._M_p = prefix._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&prefix, &off_1B23A528[4], &off_1B23A528[4], v14);
LABEL_29:
    if ( length <= v7 )
      break;
    v19 = v47.ptr_;
    if ( v47.ptr_[v7] == 40 )
    {
      google::protobuf::util::converter::`anonymous namespace'::AppendPathSegmentToPrefix(
        (std::string *)&v53,
        *(google::protobuf::StringPiece *)&prefix._M_dataplus._M_p,
        (google::protobuf::StringPiece)__PAIR128__(segment, (unsigned __int64)v43));
      std::deque<std::string>::emplace_back<std::string>(&v54, (std::string *)&v53, v35);
      if ( *(google::protobuf::util::Status **)&v53.error_code_ != (google::protobuf::util::Status *)&v53.error_message_._M_string_length )
        operator delete(*(void **)&v53.error_code_);
      v19 = v47.ptr_;
    }
    else if ( segment )
    {
      goto LABEL_40;
    }
    if ( v19[v7] == 41 )
      goto LABEL_47;
LABEL_33:
    v9 = v7 + 1;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)prefix._M_dataplus._M_p != &prefix._anon_0 )
      operator delete(prefix._M_dataplus._M_p);
    ++v7;
    if ( length < v9 )
    {
LABEL_14:
      if ( v8 )
      {
        *(_QWORD *)&v53.error_code_ = "'. Cannot find matching ']' for all '['.";
        v53.error_message_._M_dataplus._M_p = (std::string::pointer)40;
        v52.piece_data_ = v47.ptr_;
        v51.piece_data_ = "Invalid FieldMask '";
        v52.piece_size_ = v47.length_;
        v51.piece_size_ = 19LL;
        google::protobuf::StrCat[abi:cxx11]((__int64)&v49, &v51, &v52, (__int64)&v53);
        google::protobuf::util::Status::Status(a1, INVALID_ARGUMENT, v49);
      }
      else
      {
        if ( v54._M_impl._M_finish._M_cur == v54._M_impl._M_start._M_cur )
          goto LABEL_105;
        *(_QWORD *)&v53.error_code_ = "'. Cannot find matching ')' for all '('.";
        v53.error_message_._M_dataplus._M_p = (std::string::pointer)40;
        v52.piece_data_ = v47.ptr_;
        v51.piece_data_ = "Invalid FieldMask '";
        v52.piece_size_ = v47.length_;
        v51.piece_size_ = 19LL;
        google::protobuf::StrCat[abi:cxx11]((__int64)&v49, &v51, &v52, (__int64)&v53);
        google::protobuf::util::Status::Status(a1, INVALID_ARGUMENT, v49);
      }
      goto LABEL_54;
    }
  }
  if ( !segment )
    goto LABEL_33;
LABEL_40:
  google::protobuf::util::converter::`anonymous namespace'::AppendPathSegmentToPrefix(
    (std::string *)&v52,
    *(google::protobuf::StringPiece *)&prefix._M_dataplus._M_p,
    (google::protobuf::StringPiece)__PAIR128__(segment, (unsigned __int64)v43));
  (*(void (__fastcall **)(google::protobuf::util::Status *, __int64, const char *, size_t))(*(_QWORD *)a4 + 16LL))(
    &v53,
    a4,
    v52.piece_data_,
    v52.piece_size_);
  if ( v52.piece_data_ != v52.digits )
    operator delete((void *)v52.piece_data_);
  if ( v53.error_code_ )
  {
    google::protobuf::util::Status::Status(a1, &v53);
    v36 = v53.error_message_._M_dataplus._M_p;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v53.error_message_._M_dataplus._M_p != &v53.error_message_._anon_0 )
      goto LABEL_98;
    goto LABEL_99;
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v53.error_message_._M_dataplus._M_p != &v53.error_message_._anon_0 )
    operator delete(v53.error_message_._M_dataplus._M_p);
  if ( length <= v7 )
    goto LABEL_33;
  v19 = v47.ptr_;
  if ( v47.ptr_[v7] != 41 )
    goto LABEL_33;
LABEL_47:
  if ( v54._M_impl._M_finish._M_cur != v54._M_impl._M_start._M_cur )
  {
    if ( v54._M_impl._M_finish._M_cur == v54._M_impl._M_finish._M_first )
    {
      operator delete(v54._M_impl._M_finish._M_cur);
      v37 = (std::string *)*((_QWORD *)v54._M_impl._M_finish._M_node-- - 1);
      v38 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v37[15]._M_dataplus._M_p;
      v54._M_impl._M_finish._M_first = v37;
      v54._M_impl._M_finish._M_last = v37 + 16;
      v54._M_impl._M_finish._M_cur = v37 + 15;
      if ( v38 != &v37[15]._anon_0 )
        operator delete(v38);
    }
    else
    {
      v20 = v54._M_impl._M_finish._M_cur[-1]._M_dataplus._M_p;
      v21 = &v54._M_impl._M_finish._M_cur[-1]._anon_0;
      --v54._M_impl._M_finish._M_cur;
      if ( v20 != (std::string::pointer)v21 )
        operator delete(v20);
    }
    goto LABEL_33;
  }
  v52.piece_data_ = v19;
  *(_QWORD *)&v53.error_code_ = "'. Cannot find matching '(' for all ')'.";
  v53.error_message_._M_dataplus._M_p = (std::string::pointer)40;
  v52.piece_size_ = v47.length_;
  v51.piece_data_ = "Invalid FieldMask '";
  v51.piece_size_ = 19LL;
  google::protobuf::StrCat[abi:cxx11]((__int64)&v49, &v51, &v52, (__int64)&v53);
  google::protobuf::util::Status::Status(a1, INVALID_ARGUMENT, v49);
  v36 = (void *)v49.ptr_;
  if ( v49.ptr_ != v50 )
LABEL_98:
    operator delete(v36);
LABEL_99:
  ptr = prefix._M_dataplus._M_p;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)prefix._M_dataplus._M_p != &prefix._anon_0 )
    goto LABEL_55;
LABEL_56:
  v23 = v54._M_impl._M_finish._M_cur;
  M_first = v54._M_impl._M_finish._M_first;
  M_last = v54._M_impl._M_start._M_last;
  segmenta = v54._M_impl._M_finish._M_node;
  v25 = v54._M_impl._M_start._M_cur;
  v26 = (void ***)(v54._M_impl._M_start._M_node + 1);
  M_node = v54._M_impl._M_start._M_node;
  if ( v54._M_impl._M_finish._M_node > v54._M_impl._M_start._M_node + 1 )
  {
    do
    {
      v27 = *v26;
      v28 = (__int64)(*v26 + 64);
      do
      {
        if ( *v27 != v27 + 2 )
          operator delete(*v27);
        v27 += 4;
      }
      while ( (void **)v28 != v27 );
      ++v26;
    }
    while ( segmenta > (std::_Deque_iterator<std::string,std::string&,std::string*>::_Map_pointer_0)v26 );
  }
  if ( segmenta == M_node )
  {
    while ( v23 != v25 )
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v25->_M_dataplus._M_p != &v25->_anon_0 )
        operator delete(v25->_M_dataplus._M_p);
      ++v25;
    }
  }
  else
  {
    for ( ; M_last != v25; ++v25 )
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v25->_M_dataplus._M_p != &v25->_anon_0 )
        operator delete(v25->_M_dataplus._M_p);
    }
    for ( ; v23 != M_first; ++M_first )
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_first->_M_dataplus._M_p != &M_first->_anon_0 )
        operator delete(M_first->_M_dataplus._M_p);
    }
  }
  M_map = v54._M_impl._M_map;
  if ( v54._M_impl._M_map )
  {
    v30 = v54._M_impl._M_start._M_node;
    v31 = v54._M_impl._M_finish._M_node + 1;
    if ( v54._M_impl._M_finish._M_node + 1 > v54._M_impl._M_start._M_node )
    {
      do
      {
        v32 = *v30++;
        operator delete(v32);
      }
      while ( v31 > v30 );
      M_map = v54._M_impl._M_map;
    }
    operator delete(M_map);
  }
  return a1;
};

// Line 220: range 000000000C747450-000000000C747471
void __cdecl GLOBAL__sub_I__ZN6google8protobuf4util9converter20ConvertFieldMaskPathENS0_11StringPieceEPFNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES3_E()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
