// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/io/tokenizer.cc

// Line 133: range 000000000C8DBDF0-000000000C8DBE2B
bool __fastcall google::protobuf::io::Tokenizer::TryConsumeOne<google::protobuf::io::`anonymous namespace'::HexDigit>(
        google::protobuf::io::Tokenizer *const this)
{
  char current_char; // al

  current_char = this->current_char_;
  if ( (unsigned __int8)(current_char - 48) > 9u && (unsigned __int8)((current_char & 0xDF) - 65) > 5u )
    return 0;
  google::protobuf::io::Tokenizer::NextChar(this);
  return 1;
};

// Line 183: range 000000000C8DBBF0-000000000C8DBC05
void __fastcall google::protobuf::io::ErrorCollector::~ErrorCollector(google::protobuf::io::ErrorCollector *const this)
{
  ;
};

// Line 187: range 000000000C8DBE30-000000000C8DBEEF
void __fastcall google::protobuf::io::Tokenizer::Tokenizer(
        google::protobuf::io::Tokenizer *this,
        google::protobuf::io::ZeroCopyInputStream *a2,
        google::protobuf::io::ErrorCollector *a3)
{
  this->current_.text._M_dataplus._M_p = this->current_.text._anon_0._M_local_buf;
  this->current_.text._M_string_length = 0LL;
  this->current_.text._anon_0._M_local_buf[0] = 0;
  this->previous_.text._M_dataplus._M_p = this->previous_.text._anon_0._M_local_buf;
  this->previous_.text._M_string_length = 0LL;
  this->previous_.text._anon_0._M_local_buf[0] = 0;
  this->input_ = a2;
  this->error_collector_ = a3;
  this->buffer_ = 0LL;
  *(_QWORD *)&this->buffer_size_ = 0LL;
  this->read_error_ = 0;
  *(_QWORD *)&this->line_ = 0LL;
  this->record_target_ = 0LL;
  this->record_start_ = -1;
  this->allow_f_after_float_ = 0;
  this->comment_style_ = CPP_COMMENT_STYLE;
  *(_WORD *)&this->require_space_after_number_ = 1;
  *(_QWORD *)&this->current_.line = 0LL;
  this->current_.end_column = 0;
  this->current_.type = TYPE_START;
  google::protobuf::io::Tokenizer::Refresh(this);
};

// Line 212: range 000000000C8DBC10-000000000C8DBC59
void __fastcall google::protobuf::io::Tokenizer::~Tokenizer(google::protobuf::io::Tokenizer *const this)
{
  int buffer_size; // esi
  int buffer_pos; // eax
  google::protobuf::io::Tokenizer *M_p; // rdi
  google::protobuf::io::Tokenizer *v5; // rdi

  buffer_size = this->buffer_size_;
  buffer_pos = this->buffer_pos_;
  if ( buffer_size > buffer_pos )
    (*((void (__fastcall **)(google::protobuf::io::ZeroCopyInputStream *, _QWORD))this->input_->_vptr_ZeroCopyInputStream
     + 3))(
      this->input_,
      (unsigned int)(buffer_size - buffer_pos));
  M_p = (google::protobuf::io::Tokenizer *)this->previous_.text._M_dataplus._M_p;
  if ( M_p != (google::protobuf::io::Tokenizer *)&this->previous_.text._anon_0 )
    operator delete(M_p);
  v5 = (google::protobuf::io::Tokenizer *)this->current_.text._M_dataplus._M_p;
  if ( v5 != (google::protobuf::io::Tokenizer *)&this->current_.text._anon_0 )
    operator delete(v5);
};

// Line 226: range 000000000C8DBD60-000000000C8DBDE8
void __fastcall google::protobuf::io::Tokenizer::NextChar(google::protobuf::io::Tokenizer *const this)
{
  char current_char; // al
  google::protobuf::io::ColumnNumber column; // edx
  int v3; // eax

  current_char = this->current_char_;
  if ( current_char == 10 )
  {
    ++this->line_;
    this->column_ = 0;
  }
  else
  {
    column = this->column_;
    if ( current_char == 9 )
      this->column_ = column
                    + ((unsigned int)(column >> 31) >> 29)
                    - (((_BYTE)column + ((unsigned int)(column >> 31) >> 29)) & 7)
                    + 8;
    else
      this->column_ = column + 1;
  }
  v3 = this->buffer_pos_ + 1;
  this->buffer_pos_ = v3;
  if ( v3 >= this->buffer_size_ )
    google::protobuf::io::Tokenizer::Refresh(this);
  else
    this->current_char_ = this->buffer_[v3];
};

// Line 244: range 000000000C8DBC60-000000000C8DBD5B
void __fastcall google::protobuf::io::Tokenizer::Refresh(google::protobuf::io::Tokenizer *const this)
{
  std::string *record_target; // rdi
  __int64 record_start; // rax
  int buffer_size; // edx
  char *v5; // rax
  const void *data; // [rsp+8h] [rbp-20h] BYREF

  if ( this->read_error_ )
  {
LABEL_8:
    this->current_char_ = 0;
  }
  else
  {
    record_target = this->record_target_;
    if ( record_target )
    {
      record_start = this->record_start_;
      buffer_size = this->buffer_size_;
      if ( (int)record_start < buffer_size )
      {
        if ( buffer_size - (int)record_start > 0x3FFFFFFFFFFFFFFFLL - record_target->_M_string_length )
          std::__throw_length_error("basic_string::append");
        std::string::_M_append(record_target, &this->buffer_[record_start]);
        this->record_start_ = 0;
      }
    }
    data = 0LL;
    this->buffer_ = 0LL;
    this->buffer_pos_ = 0;
    do
    {
      if ( !(*((unsigned __int8 (__fastcall **)(google::protobuf::io::ZeroCopyInputStream *, const void **, int *))this->input_->_vptr_ZeroCopyInputStream
             + 2))(
              this->input_,
              &data,
              &this->buffer_size_) )
      {
        this->buffer_size_ = 0;
        this->read_error_ = 1;
        goto LABEL_8;
      }
    }
    while ( !this->buffer_size_ );
    v5 = (char *)data;
    this->buffer_ = (const char *)data;
    this->current_char_ = *v5;
  }
};

// Line 353: range 000000000C8DD370-000000000C8DD746
void __fastcall google::protobuf::io::Tokenizer::ConsumeString(
        google::protobuf::io::Tokenizer *this,
        char a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  __int64 v4; // r13
  char i; // al
  __int64 v6; // rcx
  int current_char; // eax
  std::forward_iterator_tag v8; // cl
  char v9; // al
  char v10; // al
  char v11; // al
  char v12; // al
  std::forward_iterator_tag v13; // cl
  char v14; // al
  std::string v15[2]; // [rsp+0h] [rbp-48h] BYREF

  v4 = 0x400000020000021LL;
  while ( 1 )
  {
    for ( i = this->current_char_; i == 10; i = this->current_char_ )
    {
      if ( !this->allow_multiline_strings_ )
      {
        v15[0]._M_dataplus._M_p = v15[0]._anon_0._M_local_buf;
        std::string::_M_construct<char const*>(v15, "String literals cannot cross line boundaries.", "", a4);
        (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))this->error_collector_->_vptr_ErrorCollector
         + 2))(
          this->error_collector_,
          (unsigned int)this->line_,
          (unsigned int)this->column_,
          v15);
LABEL_10:
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15[0]._M_dataplus._M_p != &v15[0]._anon_0 )
          operator delete(v15[0]._M_dataplus._M_p);
        return;
      }
LABEL_6:
      google::protobuf::io::Tokenizer::NextChar(this);
    }
    if ( i != 92 )
      break;
    google::protobuf::io::Tokenizer::NextChar(this);
    current_char = (unsigned __int8)this->current_char_;
    if ( (unsigned __int8)(current_char - 97) <= 0x15u )
    {
      v6 = 2760739LL;
      if ( !_bittest64(&v6, (unsigned int)(current_char - 97)) )
        goto LABEL_22;
      goto LABEL_6;
    }
    if ( (unsigned __int8)(current_char - 34) <= 0x3Au )
    {
      if ( !_bittest64(&v4, (unsigned int)(current_char - 34)) && (unsigned __int8)(current_char - 48) > 7u )
        goto LABEL_17;
      goto LABEL_6;
    }
    if ( (_BYTE)current_char == 120 )
    {
      google::protobuf::io::Tokenizer::NextChar(this);
      v14 = this->current_char_;
      if ( (unsigned __int8)(v14 - 48) > 9u && (unsigned __int8)((v14 & 0xDF) - 65) > 5u )
      {
        v15[0]._M_dataplus._M_p = v15[0]._anon_0._M_local_buf;
        std::string::_M_construct<char const*>(v15, "Expected hex digits for escape sequence.", "", v13);
        (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))this->error_collector_->_vptr_ErrorCollector
         + 2))(
          this->error_collector_,
          (unsigned int)this->line_,
          (unsigned int)this->column_,
          v15);
        goto LABEL_19;
      }
      goto LABEL_6;
    }
LABEL_22:
    if ( (_BYTE)current_char == 117 )
    {
      google::protobuf::io::Tokenizer::NextChar(this);
      v9 = this->current_char_;
      if ( (unsigned __int8)(v9 - 48) > 9u && (unsigned __int8)((v9 & 0xDF) - 65) > 5u
        || (google::protobuf::io::Tokenizer::NextChar(this), v10 = this->current_char_, (unsigned __int8)(v10 - 48) > 9u)
        && (unsigned __int8)((v10 & 0xDF) - 65) > 5u
        || (google::protobuf::io::Tokenizer::NextChar(this), v11 = this->current_char_, (unsigned __int8)(v11 - 48) > 9u)
        && (unsigned __int8)((v11 & 0xDF) - 65) > 5u
        || (google::protobuf::io::Tokenizer::NextChar(this), v12 = this->current_char_, (unsigned __int8)(v12 - 48) > 9u)
        && (unsigned __int8)((v12 & 0xDF) - 65) > 5u )
      {
        v15[0]._M_dataplus._M_p = v15[0]._anon_0._M_local_buf;
        std::string::_M_construct<char const*>(v15, "Expected four hex digits for \\u escape sequence.", "", v8);
        (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))this->error_collector_->_vptr_ErrorCollector
         + 2))(
          this->error_collector_,
          (unsigned int)this->line_,
          (unsigned int)this->column_,
          v15);
        goto LABEL_19;
      }
      goto LABEL_6;
    }
LABEL_17:
    if ( (_BYTE)current_char == 85 )
    {
      google::protobuf::io::Tokenizer::NextChar(this);
      if ( this->current_char_ != 48
        || (google::protobuf::io::Tokenizer::NextChar(this), this->current_char_ != 48)
        || (google::protobuf::io::Tokenizer::NextChar(this), (unsigned __int8)(this->current_char_ - 48) > 1u)
        || (google::protobuf::io::Tokenizer::NextChar(this),
            !google::protobuf::io::Tokenizer::TryConsumeOne<google::protobuf::io::`anonymous namespace'::HexDigit>(this))
        || !google::protobuf::io::Tokenizer::TryConsumeOne<google::protobuf::io::`anonymous namespace'::HexDigit>(this)
        || !google::protobuf::io::Tokenizer::TryConsumeOne<google::protobuf::io::`anonymous namespace'::HexDigit>(this)
        || !google::protobuf::io::Tokenizer::TryConsumeOne<google::protobuf::io::`anonymous namespace'::HexDigit>(this)
        || !google::protobuf::io::Tokenizer::TryConsumeOne<google::protobuf::io::`anonymous namespace'::HexDigit>(this) )
      {
        v15[0]._M_dataplus._M_p = v15[0]._anon_0._M_local_buf;
        std::string::_M_construct<char const*>(
          v15,
          "Expected eight hex digits up to 10ffff for \\U escape sequence",
          "",
          a4);
        (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))this->error_collector_->_vptr_ErrorCollector
         + 2))(
          this->error_collector_,
          (unsigned int)this->line_,
          (unsigned int)this->column_,
          v15);
        goto LABEL_19;
      }
    }
    else
    {
      v15[0]._M_dataplus._M_p = v15[0]._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(
        v15,
        "Invalid escape sequence in string literal.",
        "",
        (std::forward_iterator_tag)v6);
      (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))this->error_collector_->_vptr_ErrorCollector
       + 2))(
        this->error_collector_,
        (unsigned int)this->line_,
        (unsigned int)this->column_,
        v15);
LABEL_19:
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15[0]._M_dataplus._M_p != &v15[0]._anon_0 )
        operator delete(v15[0]._M_dataplus._M_p);
    }
  }
  if ( !i )
  {
    v15[0]._M_dataplus._M_p = v15[0]._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(v15, "Unexpected end of string.", "", a4);
    (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))this->error_collector_->_vptr_ErrorCollector
     + 2))(
      this->error_collector_,
      (unsigned int)this->line_,
      (unsigned int)this->column_,
      v15);
    goto LABEL_10;
  }
  if ( i != a2 )
    goto LABEL_6;
  google::protobuf::io::Tokenizer::NextChar(this);
};

// Line 423: range 000000000C8DCEE0-000000000C8DD363
__int64 __fastcall google::protobuf::io::Tokenizer::ConsumeNumber(
        google::protobuf::io::Tokenizer *this,
        char a2,
        bool a3)
{
  bool allow_f_after_float; // bp
  char current_char; // al
  std::forward_iterator_tag v5; // cl
  char v6; // dl
  std::forward_iterator_tag v8; // cl
  char v9; // al
  std::forward_iterator_tag v10; // cl
  char v11; // al
  std::string v12; // [rsp+0h] [rbp-38h] BYREF

  allow_f_after_float = a3;
  current_char = this->current_char_;
  if ( !a2 )
  {
    v5.gap0[0] = current_char - 48;
    if ( a3 )
    {
      if ( (unsigned __int8)v5.gap0[0] <= 9u )
      {
        do
        {
          google::protobuf::io::Tokenizer::NextChar(this);
          current_char = this->current_char_;
        }
        while ( (unsigned __int8)(current_char - 48) <= 9u );
      }
      goto LABEL_16;
    }
    if ( (unsigned __int8)v5.gap0[0] <= 9u )
    {
      do
      {
        google::protobuf::io::Tokenizer::NextChar(this);
        current_char = this->current_char_;
      }
      while ( (unsigned __int8)(current_char - 48) <= 9u );
    }
LABEL_23:
    if ( current_char != 46 )
    {
      current_char = this->current_char_;
      allow_f_after_float = 0;
      if ( (current_char & 0xDF) != 69 )
      {
LABEL_17:
        v6 = current_char;
        if ( this->allow_f_after_float_ )
        {
          if ( (current_char & 0xDF) == 70 )
          {
            allow_f_after_float = this->allow_f_after_float_;
            google::protobuf::io::Tokenizer::NextChar(this);
            current_char = this->current_char_;
          }
          v6 = current_char;
        }
        goto LABEL_8;
      }
LABEL_25:
      google::protobuf::io::Tokenizer::NextChar(this);
      v9 = this->current_char_;
      if ( ((v9 - 43) & 0xFD) == 0 )
      {
        google::protobuf::io::Tokenizer::NextChar(this);
        v9 = this->current_char_;
      }
      if ( (unsigned __int8)(v9 - 48) > 9u )
      {
        v12._M_dataplus._M_p = v12._anon_0._M_local_buf;
        std::string::_M_construct<char const*>(&v12, "\"e\" must be followed by exponent.", "", v8);
        (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))this->error_collector_->_vptr_ErrorCollector
         + 2))(
          this->error_collector_,
          (unsigned int)this->line_,
          (unsigned int)this->column_,
          &v12);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v12._M_dataplus._M_p != &v12._anon_0 )
          operator delete(v12._M_dataplus._M_p);
        current_char = this->current_char_;
        allow_f_after_float = 1;
      }
      else
      {
        do
        {
          google::protobuf::io::Tokenizer::NextChar(this);
          current_char = this->current_char_;
        }
        while ( (unsigned __int8)(current_char - 48) <= 9u );
        allow_f_after_float = 1;
      }
      goto LABEL_17;
    }
    do
    {
      google::protobuf::io::Tokenizer::NextChar(this);
      current_char = this->current_char_;
    }
    while ( (unsigned __int8)(current_char - 48) <= 9u );
    allow_f_after_float = 1;
LABEL_16:
    if ( (current_char & 0xDF) != 69 )
      goto LABEL_17;
    goto LABEL_25;
  }
  if ( (current_char & 0xDF) != 88 )
  {
    v5.gap0[0] = current_char - 48;
    if ( (unsigned __int8)(current_char - 48) <= 9u )
    {
      if ( (unsigned __int8)v5.gap0[0] > 7u )
        goto LABEL_54;
      do
      {
        google::protobuf::io::Tokenizer::NextChar(this);
        current_char = this->current_char_;
      }
      while ( (unsigned __int8)(current_char - 48) <= 7u );
      if ( (unsigned __int8)(current_char - 48) <= 9u )
      {
LABEL_54:
        v12._M_dataplus._M_p = v12._anon_0._M_local_buf;
        std::string::_M_construct<char const*>(&v12, "Numbers starting with leading zero must be in octal.", "", v5);
        (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))this->error_collector_->_vptr_ErrorCollector
         + 2))(
          this->error_collector_,
          (unsigned int)this->line_,
          (unsigned int)this->column_,
          &v12);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v12._M_dataplus._M_p != &v12._anon_0 )
          operator delete(v12._M_dataplus._M_p);
        while ( 1 )
        {
          current_char = this->current_char_;
          v5.gap0[0] = current_char - 48;
          v6 = current_char;
          if ( (unsigned __int8)(current_char - 48) > 9u )
            break;
          google::protobuf::io::Tokenizer::NextChar(this);
        }
        allow_f_after_float = 0;
      }
      else
      {
        v6 = this->current_char_;
        allow_f_after_float = 0;
      }
      goto LABEL_8;
    }
    if ( a3 )
      goto LABEL_16;
    goto LABEL_23;
  }
  google::protobuf::io::Tokenizer::NextChar(this);
  v11 = this->current_char_;
  if ( (unsigned __int8)(v11 - 48) <= 9u || (unsigned __int8)((v11 & 0xDF) - 65) <= 5u )
  {
    do
    {
      do
      {
        google::protobuf::io::Tokenizer::NextChar(this);
        current_char = this->current_char_;
        v6 = current_char;
      }
      while ( (unsigned __int8)(current_char - 48) <= 9u );
      v5.gap0[0] = (current_char & 0xDF) - 65;
    }
    while ( (unsigned __int8)v5.gap0[0] <= 5u );
    allow_f_after_float = 0;
  }
  else
  {
    v12._M_dataplus._M_p = v12._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v12, "\"0x\" must be followed by hex digits.", "", v10);
    (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))this->error_collector_->_vptr_ErrorCollector
     + 2))(
      this->error_collector_,
      (unsigned int)this->line_,
      (unsigned int)this->column_,
      &v12);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v12._M_dataplus._M_p != &v12._anon_0 )
      operator delete(v12._M_dataplus._M_p);
    current_char = this->current_char_;
    allow_f_after_float = 0;
    v6 = current_char;
  }
LABEL_8:
  if ( ((unsigned __int8)((v6 & 0xDF) - 65) <= 0x19u || current_char == 95) && this->require_space_after_number_ )
  {
    v12._M_dataplus._M_p = v12._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(&v12, "Need space between number and identifier.", "", v5);
    (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))this->error_collector_->_vptr_ErrorCollector
     + 2))(
      this->error_collector_,
      (unsigned int)this->line_,
      (unsigned int)this->column_,
      &v12);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v12._M_dataplus._M_p != &v12._anon_0 )
      operator delete(v12._M_dataplus._M_p);
    return (unsigned int)allow_f_after_float + 3;
  }
  if ( current_char != 46 )
    return (unsigned int)allow_f_after_float + 3;
  v12._M_dataplus._M_p = v12._anon_0._M_local_buf;
  if ( allow_f_after_float )
  {
    std::string::_M_construct<char const*>(
      &v12,
      "Already saw decimal point or exponent; can't have another one.",
      "",
      v5);
    (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))this->error_collector_->_vptr_ErrorCollector
     + 2))(
      this->error_collector_,
      (unsigned int)this->line_,
      (unsigned int)this->column_,
      &v12);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v12._M_dataplus._M_p != &v12._anon_0 )
      operator delete(v12._M_dataplus._M_p);
    return 4LL;
  }
  else
  {
    std::string::_M_construct<char const*>(&v12, "Hex and octal numbers must be integers.", "", v5);
    (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))this->error_collector_->_vptr_ErrorCollector
     + 2))(
      this->error_collector_,
      (unsigned int)this->line_,
      (unsigned int)this->column_,
      &v12);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v12._M_dataplus._M_p != &v12._anon_0 )
      operator delete(v12._M_dataplus._M_p);
    return 3LL;
  }
};

// Line 477: range 000000000C8DBF00-000000000C8DBFCB
void __fastcall google::protobuf::io::Tokenizer::ConsumeLineComment(
        google::protobuf::io::Tokenizer *const this,
        std::string *content)
{
  int buffer_pos; // eax
  char current_char; // al
  char v5; // al
  int v6; // edx
  __int64 record_start; // rax
  std::string *record_target; // rdi

  if ( content )
  {
    buffer_pos = this->buffer_pos_;
    this->record_target_ = content;
    this->record_start_ = buffer_pos;
  }
  current_char = this->current_char_;
  if ( current_char == 10 )
  {
LABEL_7:
    google::protobuf::io::Tokenizer::NextChar(this);
  }
  else if ( current_char )
  {
    while ( 1 )
    {
      google::protobuf::io::Tokenizer::NextChar(this);
      v5 = this->current_char_;
      if ( !v5 )
        break;
      if ( v5 == 10 )
        goto LABEL_7;
    }
  }
  if ( content )
  {
    v6 = this->buffer_pos_;
    record_start = this->record_start_;
    if ( v6 != (_DWORD)record_start )
    {
      record_target = this->record_target_;
      if ( v6 - (int)record_start > 0x3FFFFFFFFFFFFFFFLL - record_target->_M_string_length )
        std::__throw_length_error("basic_string::append");
      std::string::_M_append(record_target, &this->buffer_[record_start]);
    }
    this->record_target_ = 0LL;
    this->record_start_ = -1;
  }
};

// Line 488: range 000000000C8DCAF0-000000000C8DCED8
void __fastcall google::protobuf::io::Tokenizer::ConsumeBlockComment(
        google::protobuf::io::Tokenizer *this,
        std::string *a2,
        __int64 a3,
        std::forward_iterator_tag a4)
{
  int buffer_pos; // eax
  unsigned __int64 current_char; // rax
  __int64 v7; // r13
  __int64 v8; // r12
  std::forward_iterator_tag v9; // cl
  google::protobuf::io::ErrorCollector *error_collector; // r12
  void (__fastcall *v11)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *); // r13
  int v12; // edx
  __int64 v13; // rax
  int v14; // edx
  __int64 record_start; // rax
  std::string *record_target; // rdi
  int v17; // edx
  int v18; // edx
  __int64 v19; // rax
  unsigned __int64 M_string_length; // rcx
  std::string::size_type v21; // rdx
  std::string::pointer M_p; // rax
  std::string *v23; // rdi
  std::string *v24; // rdi
  google::protobuf::io::ColumnNumber column; // [rsp+8h] [rbp-60h]
  unsigned int line; // [rsp+Ch] [rbp-5Ch]
  std::string v27; // [rsp+10h] [rbp-58h] BYREF

  line = this->line_;
  column = this->column_;
  if ( a2 )
  {
    buffer_pos = this->buffer_pos_;
    this->record_target_ = a2;
    this->record_start_ = buffer_pos;
  }
  current_char = (unsigned __int8)this->current_char_;
  v7 = 0x840000000401LL;
  v8 = 0x100003A00LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( (unsigned __int8)current_char <= 0x2Fu )
          goto LABEL_6;
        do
        {
          do
          {
            google::protobuf::io::Tokenizer::NextChar(this);
            current_char = (unsigned __int8)this->current_char_;
          }
          while ( (unsigned __int8)current_char > 0x2Fu );
LABEL_6:
          ;
        }
        while ( !_bittest64(&v7, current_char) );
        if ( (_BYTE)current_char != 10 )
          break;
        google::protobuf::io::Tokenizer::NextChar(this);
        if ( !a2 )
          goto LABEL_23;
        v14 = this->buffer_pos_;
        record_start = this->record_start_;
        if ( v14 != (_DWORD)record_start )
        {
          record_target = this->record_target_;
          if ( v14 - (int)record_start > 0x3FFFFFFFFFFFFFFFLL - record_target->_M_string_length )
            goto LABEL_46;
          std::string::_M_append(record_target, &this->buffer_[record_start]);
        }
        this->record_target_ = 0LL;
        this->record_start_ = -1;
LABEL_23:
        while ( 1 )
        {
          current_char = (unsigned __int8)this->current_char_;
          if ( (unsigned __int8)current_char > 0x20u )
            break;
          if ( !_bittest64(&v8, current_char) )
            goto LABEL_25;
          google::protobuf::io::Tokenizer::NextChar(this);
        }
        if ( (_BYTE)current_char == 42 )
        {
          google::protobuf::io::Tokenizer::NextChar(this);
          if ( this->current_char_ == 47 )
          {
            google::protobuf::io::Tokenizer::NextChar(this);
            return;
          }
          current_char = (unsigned __int8)this->current_char_;
        }
LABEL_25:
        if ( a2 )
        {
          v17 = this->buffer_pos_;
          this->record_target_ = a2;
          this->record_start_ = v17;
        }
      }
      if ( (_BYTE)current_char == 42 )
        break;
      if ( (_BYTE)current_char != 47 )
        goto LABEL_10;
      google::protobuf::io::Tokenizer::NextChar(this);
      current_char = (unsigned __int8)this->current_char_;
      if ( (_BYTE)current_char != 42 )
        goto LABEL_10;
      v27._M_dataplus._M_p = v27._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(
        &v27,
        "\"/*\" inside block comment.  Block comments cannot be nested.",
        "",
        a4);
      (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))this->error_collector_->_vptr_ErrorCollector
       + 2))(
        this->error_collector_,
        (unsigned int)this->line_,
        (unsigned int)this->column_,
        &v27);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v27._M_dataplus._M_p != &v27._anon_0 )
        operator delete(v27._M_dataplus._M_p);
      current_char = (unsigned __int8)this->current_char_;
    }
    google::protobuf::io::Tokenizer::NextChar(this);
    current_char = (unsigned __int8)this->current_char_;
    if ( (_BYTE)current_char == 47 )
      break;
LABEL_10:
    if ( !(_BYTE)current_char )
    {
      v27._M_dataplus._M_p = v27._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&v27, "End-of-file inside block comment.", "", a4);
      (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))this->error_collector_->_vptr_ErrorCollector
       + 2))(
        this->error_collector_,
        (unsigned int)this->line_,
        (unsigned int)this->column_,
        &v27);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v27._M_dataplus._M_p != &v27._anon_0 )
        operator delete(v27._M_dataplus._M_p);
      error_collector = this->error_collector_;
      v11 = (void (__fastcall *)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))*((_QWORD *)error_collector->_vptr_ErrorCollector + 2);
      v27._M_dataplus._M_p = v27._anon_0._M_local_buf;
      std::string::_M_construct<char const*>(&v27, "  Comment started here.", "", v9);
      v11(error_collector, line, (unsigned int)(column - 2), &v27);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v27._M_dataplus._M_p != &v27._anon_0 )
        operator delete(v27._M_dataplus._M_p);
      if ( !a2 )
        return;
      v12 = this->buffer_pos_;
      v13 = this->record_start_;
      if ( v12 == (_DWORD)v13 )
      {
LABEL_17:
        this->record_target_ = 0LL;
        this->record_start_ = -1;
        return;
      }
      v24 = this->record_target_;
      if ( v12 - (int)v13 <= 0x3FFFFFFFFFFFFFFFLL - v24->_M_string_length )
      {
        std::string::_M_append(v24, &this->buffer_[v13]);
        goto LABEL_17;
      }
LABEL_46:
      std::__throw_length_error("basic_string::append");
    }
  }
  google::protobuf::io::Tokenizer::NextChar(this);
  if ( !a2 )
    return;
  v18 = this->buffer_pos_;
  v19 = this->record_start_;
  if ( v18 == (_DWORD)v19 )
    goto LABEL_32;
  v23 = this->record_target_;
  if ( v18 - (int)v19 > 0x3FFFFFFFFFFFFFFFLL - v23->_M_string_length )
    goto LABEL_46;
  std::string::_M_append(v23, &this->buffer_[v19]);
LABEL_32:
  this->record_target_ = 0LL;
  M_string_length = a2->_M_string_length;
  this->record_start_ = -1;
  v21 = M_string_length - 2;
  if ( M_string_length - 2 > M_string_length )
    std::__throw_out_of_range_fmt(
      "%s: __pos (which is %zu) > this->size() (which is %zu)",
      "basic_string::erase",
      v21,
      M_string_length);
  M_p = a2->_M_dataplus._M_p;
  a2->_M_string_length = v21;
  M_p[M_string_length - 2] = 0;
};

// Line 538: range 000000000C8DBFD0-000000000C8DC07E
google::protobuf::io::Tokenizer::NextCommentStatus __fastcall google::protobuf::io::Tokenizer::TryConsumeCommentStart(
        google::protobuf::io::Tokenizer *const this)
{
  google::protobuf::io::Tokenizer::CommentStyle comment_style; // eax
  google::protobuf::io::Tokenizer::NextCommentStatus result; // eax
  char current_char; // al
  std::string::size_type M_string_length; // rdx
  google::protobuf::io::ColumnNumber column; // eax
  google::protobuf::io::ColumnNumber v6; // edx

  comment_style = this->comment_style_;
  if ( comment_style )
  {
    if ( comment_style != SH_COMMENT_STYLE || this->current_char_ != 35 )
      return 3;
    goto LABEL_7;
  }
  result = NO_COMMENT;
  if ( this->current_char_ != 47 )
    return result;
  google::protobuf::io::Tokenizer::NextChar(this);
  current_char = this->current_char_;
  if ( current_char == 47 )
  {
LABEL_7:
    google::protobuf::io::Tokenizer::NextChar(this);
    return 0;
  }
  if ( current_char == 42 )
  {
    google::protobuf::io::Tokenizer::NextChar(this);
    return 1;
  }
  else
  {
    M_string_length = this->current_.text._M_string_length;
    this->current_.type = TYPE_SYMBOL;
    std::string::_M_replace(&this->current_.text, 0LL, M_string_length, dirsep, 1LL);
    this->current_.line = this->line_;
    column = this->column_;
    v6 = column - 1;
    this->current_.end_column = column;
    result = SLASH_NOT_COMMENT;
    this->current_.column = v6;
  }
  return result;
};

// Line 562: range 000000000C8DD750-000000000C8DDBAD
__int64 __fastcall google::protobuf::io::Tokenizer::Next(google::protobuf::io::Tokenizer *this)
{
  std::string *p_text; // rbp
  std::string *v2; // rsi
  std::string *v4; // rdi
  google::protobuf::io::ColumnNumber end_column; // eax
  bool v6; // zf
  char current_char; // al
  google::protobuf::io::Tokenizer::NextCommentStatus v8; // eax
  __int64 v9; // rdx
  std::forward_iterator_tag v10; // cl
  char v11; // dl
  bool read_error; // al
  std::string::pointer M_p; // rax
  __int64 v14; // rdx
  __int64 result; // rax
  std::string::pointer v16; // rax
  __int64 v17; // rax
  char v18; // al
  int buffer_pos; // edx
  __int64 record_start; // rax
  std::string *record_target; // rdi
  google::protobuf::io::ColumnNumber column; // eax
  char v23; // dl
  std::forward_iterator_tag v24; // cl
  google::protobuf::io::ErrorCollector *v25; // rbp
  void (__fastcall *v26)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *); // r12
  __int64 v27; // rdx
  std::forward_iterator_tag v28; // cl
  __int64 v29; // rdx
  std::forward_iterator_tag v30; // cl
  google::protobuf::io::ErrorCollector *error_collector; // rbp
  void (__fastcall *v32)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *); // r13
  std::string v33[2]; // [rsp+0h] [rbp-48h] BYREF

  p_text = &this->current_.text;
  v2 = &this->current_.text;
  v4 = &this->previous_.text;
  *((_DWORD *)&v4[-1]._anon_0._M_allocated_capacity + 2) = v4[-2]._M_dataplus._M_p;
  std::string::_M_assign(v4, v2);
  end_column = this->current_.end_column;
  v6 = !this->read_error_;
  *(_QWORD *)&this->previous_.line = *(_QWORD *)&this->current_.line;
  this->previous_.end_column = end_column;
  if ( !v6 )
  {
LABEL_15:
    M_p = this->current_.text._M_dataplus._M_p;
    this->current_.type = TYPE_END;
    this->current_.text._M_string_length = 0LL;
    *M_p = 0;
    v14 = *(_QWORD *)&this->line_;
    this->current_.end_column = this->column_;
    result = 0LL;
    *(_QWORD *)&this->current_.line = v14;
    return result;
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_2:
      while ( 1 )
      {
        current_char = this->current_char_;
        if ( current_char != 32 && (unsigned __int8)(current_char - 9) > 4u )
          break;
        google::protobuf::io::Tokenizer::NextChar(this);
      }
      v8 = google::protobuf::io::Tokenizer::TryConsumeCommentStart(this);
      if ( v8 != BLOCK_COMMENT )
        break;
      google::protobuf::io::Tokenizer::ConsumeBlockComment(this, 0LL, v9, v10);
      if ( this->read_error_ )
        goto LABEL_15;
    }
    if ( v8 == SLASH_NOT_COMMENT )
      return 1LL;
    if ( v8 )
      break;
    google::protobuf::io::Tokenizer::ConsumeLineComment(this, 0LL);
    if ( this->read_error_ )
      goto LABEL_15;
  }
  if ( this->read_error_ )
    goto LABEL_15;
  if ( this->current_char_ <= 0x1Fu )
  {
    v33[0]._M_dataplus._M_p = v33[0]._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(v33, "Invalid control characters encountered in text.", "", v10);
    (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))this->error_collector_->_vptr_ErrorCollector
     + 2))(
      this->error_collector_,
      (unsigned int)this->line_,
      (unsigned int)this->column_,
      v33);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v33[0]._M_dataplus._M_p != &v33[0]._anon_0 )
      operator delete(v33[0]._M_dataplus._M_p);
    while ( 1 )
    {
      do
      {
        google::protobuf::io::Tokenizer::NextChar(this);
        v11 = this->current_char_;
      }
      while ( (unsigned __int8)(v11 - 1) <= 0x1Eu );
      read_error = this->read_error_;
      if ( read_error )
        goto LABEL_15;
      if ( v11 )
      {
        if ( !read_error )
          goto LABEL_2;
        goto LABEL_15;
      }
    }
  }
  v16 = this->current_.text._M_dataplus._M_p;
  this->current_.type = TYPE_START;
  this->current_.text._M_string_length = 0LL;
  *v16 = 0;
  v17 = *(_QWORD *)&this->line_;
  this->record_target_ = p_text;
  *(_QWORD *)&this->current_.line = v17;
  this->record_start_ = this->buffer_pos_;
  v18 = this->current_char_;
  if ( (unsigned __int8)((v18 & 0xDF) - 65) <= 0x19u || v18 == 95 )
  {
    do
    {
      do
      {
        google::protobuf::io::Tokenizer::NextChar(this);
        v23 = this->current_char_;
      }
      while ( (unsigned __int8)((v23 & 0xDF) - 65) <= 0x19u );
    }
    while ( (unsigned __int8)(v23 - 48) <= 9u || v23 == 95 );
    this->current_.type = TYPE_IDENTIFIER;
    goto LABEL_32;
  }
  if ( v18 == 48 )
  {
    google::protobuf::io::Tokenizer::NextChar(this);
    this->current_.type = google::protobuf::io::Tokenizer::ConsumeNumber(this, 1, 0);
  }
  else
  {
    if ( v18 == 46 )
    {
      google::protobuf::io::Tokenizer::NextChar(this);
      if ( (unsigned __int8)(this->current_char_ - 48) <= 9u )
      {
        google::protobuf::io::Tokenizer::NextChar(this);
        if ( this->previous_.type == TYPE_IDENTIFIER
          && this->current_.line == this->previous_.line
          && this->current_.column == this->previous_.end_column )
        {
          error_collector = this->error_collector_;
          v32 = (void (__fastcall *)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))*((_QWORD *)error_collector->_vptr_ErrorCollector + 2);
          v33[0]._M_dataplus._M_p = v33[0]._anon_0._M_local_buf;
          std::string::_M_construct<char const*>(v33, "Need space between identifier and decimal point.", "", v24);
          v32(error_collector, (unsigned int)this->line_, (unsigned int)(this->column_ - 2), v33);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v33[0]._M_dataplus._M_p != &v33[0]._anon_0 )
            operator delete(v33[0]._M_dataplus._M_p);
        }
        this->current_.type = google::protobuf::io::Tokenizer::ConsumeNumber(this, 0, 1);
        goto LABEL_32;
      }
    }
    else
    {
      if ( (unsigned __int8)(v18 - 48) <= 9u )
      {
        google::protobuf::io::Tokenizer::NextChar(this);
        this->current_.type = google::protobuf::io::Tokenizer::ConsumeNumber(this, 0, 0);
        goto LABEL_32;
      }
      if ( v18 == 34 )
      {
        google::protobuf::io::Tokenizer::NextChar(this);
        google::protobuf::io::Tokenizer::ConsumeString(this, 34, v27, v28);
        this->current_.type = TYPE_STRING_1;
        goto LABEL_32;
      }
      if ( v18 == 39 )
      {
        google::protobuf::io::Tokenizer::NextChar(this);
        google::protobuf::io::Tokenizer::ConsumeString(this, 39, v29, v30);
        this->current_.type = TYPE_STRING_1;
        goto LABEL_32;
      }
      if ( v18 < 0 )
      {
        v25 = this->error_collector_;
        v26 = (void (__fastcall *)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))*((_QWORD *)v25->_vptr_ErrorCollector + 2);
        google::protobuf::StringPrintf[abi:cxx11](v33, (char)v33[0]._M_dataplus._M_p);
        v26(v25, (unsigned int)this->line_, (unsigned int)this->column_, v33);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v33[0]._M_dataplus._M_p != &v33[0]._anon_0 )
          operator delete(v33[0]._M_dataplus._M_p);
      }
      google::protobuf::io::Tokenizer::NextChar(this);
    }
    this->current_.type = TYPE_SYMBOL;
  }
LABEL_32:
  buffer_pos = this->buffer_pos_;
  record_start = this->record_start_;
  if ( buffer_pos != (_DWORD)record_start )
  {
    record_target = this->record_target_;
    if ( buffer_pos - (int)record_start > 0x3FFFFFFFFFFFFFFFLL - record_target->_M_string_length )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append(record_target, &this->buffer_[record_start]);
  }
  this->record_start_ = -1;
  column = this->column_;
  this->record_target_ = 0LL;
  this->current_.end_column = column;
  return 1LL;
};

// Line 761: range 000000000C8DDBC0-000000000C8DE4D7
__int64 __fastcall google::protobuf::io::Tokenizer::NextWithComments(
        google::protobuf::io::Tokenizer *this,
        __int64 a2,
        std::vector<std::string> *a3,
        __int64 a4)
{
  _BYTE *v7; // rax
  std::_Vector_base<std::string>::pointer M_finish; // r14
  void **p_M_p; // r12
  _BYTE *v10; // rax
  unsigned __int64 current_char; // rax
  __int64 v12; // r12
  __int64 v13; // r12
  google::protobuf::io::Tokenizer::NextCommentStatus v14; // eax
  __int64 v15; // rdx
  const std::string *v16; // rcx
  google::protobuf::io::Tokenizer::NextCommentStatus v17; // eax
  __int64 v18; // rdx
  const std::string *v19; // rcx
  __int64 v20; // r12
  unsigned __int64 v21; // rax
  unsigned int v22; // eax
  const std::string *v23; // rcx
  unsigned int v24; // r12d
  std::string::pointer v26; // rsi
  std::string::pointer v27; // rsi
  std::string::pointer M_p; // rsi
  const std::string *v29; // rcx
  std::string::pointer v30; // rsi
  std::string::pointer v31; // rsi
  const std::string *v32; // rcx
  std::string::pointer v33; // rsi
  std::forward_iterator_tag v34; // cl
  std::string *p_text; // rbp
  std::vector<std::string> *v36; // rbp
  std::_Vector_base<std::string>::pointer v37; // rdi
  std::string::size_type v38; // rdx
  std::vector<std::string> *v39; // r14
  std::_Vector_base<std::string>::pointer v40; // rdi
  std::string::size_type v41; // rdx
  std::vector<std::string> *v42; // r14
  std::_Vector_base<std::string>::pointer v43; // rdi
  std::string::size_type v44; // rdx
  std::string::pointer v45; // rsi
  std::vector<std::string> *v46; // r12
  std::_Vector_base<std::string>::pointer v47; // rdi
  std::string::size_type v48; // rdx
  std::vector<std::string> *v49; // r14
  std::_Vector_base<std::string>::pointer v50; // rdi
  std::string::size_type v51; // rdx
  std::vector<std::string> *v52; // r12
  std::_Vector_base<std::string>::pointer v53; // rdi
  std::string::size_type v54; // rdx
  std::vector<std::string> *v55; // r12
  std::_Vector_base<std::string>::pointer v56; // rdi
  std::string::size_type M_string_length; // rdx
  std::string *M_start; // [rsp+8h] [rbp-A0h]
  std::string v59; // [rsp+10h] [rbp-98h] BYREF
  __int64 v60; // [rsp+30h] [rbp-78h]
  std::vector<std::string> *v61; // [rsp+38h] [rbp-70h]
  __int64 v62; // [rsp+40h] [rbp-68h]
  std::string content; // [rsp+48h] [rbp-60h] BYREF
  __int16 v64; // [rsp+68h] [rbp-40h]
  char v65; // [rsp+6Ah] [rbp-3Eh]

  v60 = a2;
  v61 = a3;
  v62 = a4;
  content._M_dataplus._M_p = content._anon_0._M_local_buf;
  content._M_string_length = 0LL;
  content._anon_0._M_local_buf[0] = 0;
  v64 = 0;
  v65 = 1;
  if ( a2 )
  {
    v7 = *(_BYTE **)a2;
    *(_QWORD *)(a2 + 8) = 0LL;
    *v7 = 0;
  }
  if ( a3 )
  {
    M_finish = a3->_M_impl._M_finish;
    M_start = a3->_M_impl._M_start;
    if ( a3->_M_impl._M_start != M_finish )
    {
      p_M_p = (void **)&a3->_M_impl._M_start->_M_dataplus._M_p;
      do
      {
        if ( *p_M_p != p_M_p + 2 )
          operator delete(*p_M_p);
        p_M_p += 4;
      }
      while ( M_finish != (std::_Vector_base<std::string>::pointer)p_M_p );
      a3->_M_impl._M_finish = M_start;
    }
  }
  if ( a4 )
  {
    v10 = *(_BYTE **)a4;
    *(_QWORD *)(a4 + 8) = 0LL;
    *v10 = 0;
  }
  current_char = (unsigned __int8)this->current_char_;
  v12 = 0x100003A00LL;
  if ( this->current_.type == TYPE_START )
  {
    if ( (_BYTE)current_char != 0xEF )
    {
LABEL_14:
      v65 = 0;
      goto LABEL_15;
    }
    google::protobuf::io::Tokenizer::NextChar(this);
    if ( this->current_char_ == -69 )
    {
      google::protobuf::io::Tokenizer::NextChar(this);
      if ( this->current_char_ == -65 )
      {
        google::protobuf::io::Tokenizer::NextChar(this);
        current_char = (unsigned __int8)this->current_char_;
        goto LABEL_14;
      }
    }
    v59._M_dataplus._M_p = v59._anon_0._M_local_buf;
    std::string::_M_construct<char const*>(
      &v59,
      "Proto file starts with 0xEF but not UTF-8 BOM. Only UTF-8 is accepted for proto file.",
      "",
      v34);
    (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))this->error_collector_->_vptr_ErrorCollector
     + 2))(
      this->error_collector_,
      (unsigned int)this->line_,
      (unsigned int)this->column_,
      &v59);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v59._M_dataplus._M_p != &v59._anon_0 )
      operator delete(v59._M_dataplus._M_p);
    v24 = 0;
LABEL_51:
    if ( v62 && (_BYTE)v64 )
      std::string::swap(&content, v62);
    goto LABEL_43;
  }
  while ( (unsigned __int8)current_char <= 0x20u && _bittest64(&v12, current_char) )
  {
    google::protobuf::io::Tokenizer::NextChar(this);
    current_char = (unsigned __int8)this->current_char_;
  }
  v17 = google::protobuf::io::Tokenizer::TryConsumeCommentStart(this);
  if ( v17 == SLASH_NOT_COMMENT )
  {
LABEL_50:
    v24 = 1;
    goto LABEL_51;
  }
  if ( (unsigned int)v17 > SLASH_NOT_COMMENT )
  {
    if ( v17 != NO_COMMENT )
      goto LABEL_96;
    if ( this->current_char_ == 10 )
    {
      google::protobuf::io::Tokenizer::NextChar(this);
      goto LABEL_96;
    }
    v22 = google::protobuf::io::Tokenizer::Next(this);
LABEL_49:
    v24 = v22;
    goto LABEL_51;
  }
  if ( v17 == LINE_COMMENT )
  {
    if ( !(_BYTE)v64 || HIBYTE(v64) )
      goto LABEL_76;
    if ( v65 )
    {
      M_p = content._M_dataplus._M_p;
      if ( v60 )
      {
        std::string::_M_append(v60, content._M_dataplus._M_p, content._M_string_length);
        M_p = content._M_dataplus._M_p;
      }
      v65 = 0;
      goto LABEL_75;
    }
    v55 = v61;
    if ( v61 )
    {
      v56 = v61->_M_impl._M_finish;
      if ( v56 != v61->_M_impl._M_end_of_storage )
      {
        M_string_length = content._M_string_length;
        v56->_M_dataplus._M_p = v56->_anon_0._M_local_buf;
        std::string::_M_construct<char *>(
          v56,
          content._M_dataplus._M_p,
          &content._M_dataplus._M_p[M_string_length],
          (std::forward_iterator_tag)v19);
        ++v55->_M_impl._M_finish;
        M_p = content._M_dataplus._M_p;
LABEL_75:
        content._M_string_length = 0LL;
        *M_p = 0;
LABEL_76:
        v64 = 257;
        google::protobuf::io::Tokenizer::ConsumeLineComment(this, &content);
        goto LABEL_77;
      }
      std::vector<std::string>::_M_realloc_insert<std::string const&>(
        v61,
        (std::vector<std::string>::iterator)v61->_M_impl._M_finish,
        &content,
        v19);
    }
    M_p = content._M_dataplus._M_p;
    goto LABEL_75;
  }
  if ( (_BYTE)v64 )
  {
    if ( v65 )
    {
      v45 = content._M_dataplus._M_p;
      if ( v60 )
      {
        std::string::_M_append(v60, content._M_dataplus._M_p, content._M_string_length);
        v45 = content._M_dataplus._M_p;
      }
      v65 = 0;
      goto LABEL_124;
    }
    v52 = v61;
    if ( v61 )
    {
      v53 = v61->_M_impl._M_finish;
      if ( v53 != v61->_M_impl._M_end_of_storage )
      {
        v54 = content._M_string_length;
        v53->_M_dataplus._M_p = v53->_anon_0._M_local_buf;
        std::string::_M_construct<char *>(
          v53,
          content._M_dataplus._M_p,
          &content._M_dataplus._M_p[v54],
          (std::forward_iterator_tag)v19);
        ++v52->_M_impl._M_finish;
        v45 = content._M_dataplus._M_p;
LABEL_124:
        content._M_string_length = 0LL;
        *v45 = 0;
        goto LABEL_36;
      }
      std::vector<std::string>::_M_realloc_insert<std::string const&>(
        v61,
        (std::vector<std::string>::iterator)v61->_M_impl._M_finish,
        &content,
        v19);
    }
    v45 = content._M_dataplus._M_p;
    goto LABEL_124;
  }
LABEL_36:
  v64 = 1;
  google::protobuf::io::Tokenizer::ConsumeBlockComment(this, &content, v18, (std::forward_iterator_tag)1);
  v20 = 0x100003A00LL;
  while ( 1 )
  {
    v21 = (unsigned __int8)this->current_char_;
    if ( (unsigned __int8)v21 > 0x20u )
      goto LABEL_38;
    if ( !_bittest64(&v20, v21) )
      break;
    google::protobuf::io::Tokenizer::NextChar(this);
  }
  if ( (_BYTE)v21 != 10 )
  {
LABEL_38:
    content._M_string_length = 0LL;
    *content._M_dataplus._M_p = 0;
    LOBYTE(v64) = 0;
    v22 = google::protobuf::io::Tokenizer::Next(this);
    goto LABEL_49;
  }
  google::protobuf::io::Tokenizer::NextChar(this);
LABEL_77:
  if ( (_BYTE)v64 )
  {
    if ( v65 )
    {
      v30 = content._M_dataplus._M_p;
      if ( v60 )
      {
        std::string::_M_append(v60, content._M_dataplus._M_p, content._M_string_length);
        v30 = content._M_dataplus._M_p;
      }
      v65 = 0;
      goto LABEL_82;
    }
    v46 = v61;
    if ( v61 )
    {
      v47 = v61->_M_impl._M_finish;
      if ( v47 != v61->_M_impl._M_end_of_storage )
      {
        v48 = content._M_string_length;
        v47->_M_dataplus._M_p = v47->_anon_0._M_local_buf;
        std::string::_M_construct<char *>(
          v47,
          content._M_dataplus._M_p,
          &content._M_dataplus._M_p[v48],
          (std::forward_iterator_tag)v29);
        ++v46->_M_impl._M_finish;
        v30 = content._M_dataplus._M_p;
LABEL_82:
        content._M_string_length = 0LL;
        *v30 = 0;
        current_char = (unsigned __int8)this->current_char_;
        LOBYTE(v64) = 0;
        goto LABEL_15;
      }
      std::vector<std::string>::_M_realloc_insert<std::string const&>(
        v61,
        (std::vector<std::string>::iterator)v61->_M_impl._M_finish,
        &content,
        v29);
    }
    v30 = content._M_dataplus._M_p;
    goto LABEL_82;
  }
LABEL_96:
  current_char = (unsigned __int8)this->current_char_;
LABEL_15:
  v13 = 0x100003A00LL;
LABEL_19:
  while ( 2 )
  {
    while ( (unsigned __int8)current_char <= 0x20u && _bittest64(&v13, current_char) )
    {
LABEL_17:
      google::protobuf::io::Tokenizer::NextChar(this);
LABEL_18:
      current_char = (unsigned __int8)this->current_char_;
    }
    while ( 1 )
    {
      v14 = google::protobuf::io::Tokenizer::TryConsumeCommentStart(this);
      if ( v14 == SLASH_NOT_COMMENT )
        goto LABEL_50;
      if ( (unsigned int)v14 > SLASH_NOT_COMMENT )
        break;
      if ( v14 == LINE_COMMENT )
      {
        if ( (_BYTE)v64 && !HIBYTE(v64) )
        {
          if ( v65 )
          {
            v26 = content._M_dataplus._M_p;
            if ( v60 )
            {
              std::string::_M_append(v60, content._M_dataplus._M_p, content._M_string_length);
              v26 = content._M_dataplus._M_p;
            }
            v65 = 0;
          }
          else
          {
            v42 = v61;
            if ( v61 )
            {
              v43 = v61->_M_impl._M_finish;
              if ( v43 != v61->_M_impl._M_end_of_storage )
              {
                v44 = content._M_string_length;
                v43->_M_dataplus._M_p = v43->_anon_0._M_local_buf;
                std::string::_M_construct<char *>(
                  v43,
                  content._M_dataplus._M_p,
                  &content._M_dataplus._M_p[v44],
                  (std::forward_iterator_tag)v16);
                ++v42->_M_impl._M_finish;
                v26 = content._M_dataplus._M_p;
                goto LABEL_60;
              }
              std::vector<std::string>::_M_realloc_insert<std::string const&>(
                v61,
                (std::vector<std::string>::iterator)v61->_M_impl._M_finish,
                &content,
                v16);
            }
            v26 = content._M_dataplus._M_p;
          }
LABEL_60:
          content._M_string_length = 0LL;
          *v26 = 0;
        }
        v64 = 257;
        google::protobuf::io::Tokenizer::ConsumeLineComment(this, &content);
        goto LABEL_18;
      }
      if ( (_BYTE)v64 )
      {
        if ( v65 )
        {
          v31 = content._M_dataplus._M_p;
          if ( v60 )
          {
            std::string::_M_append(v60, content._M_dataplus._M_p, content._M_string_length);
            v31 = content._M_dataplus._M_p;
          }
          v65 = 0;
          goto LABEL_87;
        }
        v39 = v61;
        if ( v61 )
        {
          v40 = v61->_M_impl._M_finish;
          if ( v40 != v61->_M_impl._M_end_of_storage )
          {
            v41 = content._M_string_length;
            v40->_M_dataplus._M_p = v40->_anon_0._M_local_buf;
            std::string::_M_construct<char *>(
              v40,
              content._M_dataplus._M_p,
              &content._M_dataplus._M_p[v41],
              (std::forward_iterator_tag)v16);
            ++v39->_M_impl._M_finish;
            v31 = content._M_dataplus._M_p;
LABEL_87:
            content._M_string_length = 0LL;
            *v31 = 0;
            goto LABEL_24;
          }
          std::vector<std::string>::_M_realloc_insert<std::string const&>(
            v61,
            (std::vector<std::string>::iterator)v61->_M_impl._M_finish,
            &content,
            v16);
        }
        v31 = content._M_dataplus._M_p;
        goto LABEL_87;
      }
LABEL_24:
      v64 = 1;
      google::protobuf::io::Tokenizer::ConsumeBlockComment(this, &content, v15, (std::forward_iterator_tag)v16);
      while ( 1 )
      {
        current_char = (unsigned __int8)this->current_char_;
        if ( (unsigned __int8)current_char > 0x20u )
          break;
        if ( !_bittest64(&v13, current_char) )
        {
          if ( (_BYTE)current_char == 10 )
            goto LABEL_17;
          goto LABEL_19;
        }
        google::protobuf::io::Tokenizer::NextChar(this);
      }
    }
    if ( v14 != NO_COMMENT )
      goto LABEL_18;
    if ( this->current_char_ == 10 )
    {
      google::protobuf::io::Tokenizer::NextChar(this);
      if ( !(_BYTE)v64 )
      {
LABEL_94:
        v65 = 0;
        current_char = (unsigned __int8)this->current_char_;
        continue;
      }
      if ( v65 )
      {
        v33 = content._M_dataplus._M_p;
        if ( !v60 )
        {
LABEL_93:
          content._M_string_length = 0LL;
          *v33 = 0;
          LOBYTE(v64) = 0;
          goto LABEL_94;
        }
        std::string::_M_append(v60, content._M_dataplus._M_p, content._M_string_length);
      }
      else
      {
        v49 = v61;
        if ( v61 )
        {
          v50 = v61->_M_impl._M_finish;
          if ( v50 != v61->_M_impl._M_end_of_storage )
          {
            v51 = content._M_string_length;
            v50->_M_dataplus._M_p = v50->_anon_0._M_local_buf;
            std::string::_M_construct<char *>(
              v50,
              content._M_dataplus._M_p,
              &content._M_dataplus._M_p[v51],
              (std::forward_iterator_tag)v32);
            ++v49->_M_impl._M_finish;
            v33 = content._M_dataplus._M_p;
            goto LABEL_93;
          }
          std::vector<std::string>::_M_realloc_insert<std::string const&>(
            v61,
            (std::vector<std::string>::iterator)v61->_M_impl._M_finish,
            &content,
            v32);
        }
      }
      v33 = content._M_dataplus._M_p;
      goto LABEL_93;
    }
    break;
  }
  v24 = google::protobuf::io::Tokenizer::Next(this);
  if ( (_BYTE)v24 )
  {
    p_text = &this->current_.text;
    if ( (unsigned int)std::string::compare(p_text, "}") )
    {
      if ( (unsigned int)std::string::compare(p_text, 437983804LL)
        && (unsigned int)std::string::compare(p_text, 455495637LL) )
      {
        goto LABEL_51;
      }
    }
  }
  if ( !(_BYTE)v64 )
    goto LABEL_43;
  if ( v65 )
  {
    v27 = content._M_dataplus._M_p;
    if ( v60 )
    {
      std::string::_M_append(v60, content._M_dataplus._M_p, content._M_string_length);
      v27 = content._M_dataplus._M_p;
    }
    v65 = 0;
  }
  else
  {
    v36 = v61;
    if ( v61 )
    {
      v37 = v61->_M_impl._M_finish;
      if ( v37 != v61->_M_impl._M_end_of_storage )
      {
        v38 = content._M_string_length;
        v37->_M_dataplus._M_p = v37->_anon_0._M_local_buf;
        std::string::_M_construct<char *>(
          v37,
          content._M_dataplus._M_p,
          &content._M_dataplus._M_p[v38],
          (std::forward_iterator_tag)v23);
        ++v36->_M_impl._M_finish;
        v27 = content._M_dataplus._M_p;
        goto LABEL_68;
      }
      std::vector<std::string>::_M_realloc_insert<std::string const&>(
        v61,
        (std::vector<std::string>::iterator)v61->_M_impl._M_finish,
        &content,
        v23);
    }
    v27 = content._M_dataplus._M_p;
  }
LABEL_68:
  content._M_string_length = 0LL;
  *v27 = 0;
  LOBYTE(v64) = 0;
LABEL_43:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)content._M_dataplus._M_p != &content._anon_0 )
    operator delete(content._M_dataplus._M_p);
  return v24;
};

// Line 900: range 000000000C8DC150-000000000C8DC282
double __fastcall google::protobuf::io::Tokenizer::ParseFloat(__int64 a1, __int64 a2, char **a3)
{
  google::protobuf::io *v3; // rbx
  double result; // xmm0_8
  __int64 v5; // rax
  char v6; // dl
  __int64 v7; // rcx
  char v8; // dl
  google::protobuf::internal::LogMessage_0 *v9; // r12
  google::protobuf::internal::LogMessage_0 *v10; // rax
  google::protobuf::internal::LogFinisher v11; // [rsp+17h] [rbp-81h] BYREF
  char v12[8]; // [rsp+18h] [rbp-80h] BYREF
  std::string value; // [rsp+20h] [rbp-78h] BYREF
  google::protobuf::internal::LogMessage_0 v14; // [rsp+40h] [rbp-58h] BYREF

  v3 = *(google::protobuf::io **)a1;
  result = google::protobuf::io::NoLocaleStrtod(*(google::protobuf::io **)a1, v12, a3);
  v5 = *(_QWORD *)v12;
  v6 = **(_BYTE **)v12 & 0xDF;
  if ( v6 == 69 )
  {
    v7 = ++*(_QWORD *)v12;
    v8 = *(_BYTE *)(v5 + 1);
    if ( ((v8 - 43) & 0xFD) == 0 )
    {
      v7 = v5 + 2;
      *(_QWORD *)v12 = v5 + 2;
      v8 = *(_BYTE *)(v5 + 2);
    }
    v6 = v8 & 0xDF;
    v5 = v7;
  }
  if ( v6 == 70 )
    *(_QWORD *)v12 = ++v5;
  if ( v5 - (_QWORD)v3 != *(_QWORD *)(a1 + 8) || *(_BYTE *)v3 == 45 )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v14, LOGLEVEL_ERROR_0, "google/protobuf/io/tokenizer.cc", 919);
    v9 = google::protobuf::internal::LogMessage::operator<<(
           &v14,
           " Tokenizer::ParseFloat() passed text that could not have been tokenized as a float: ");
    google::protobuf::CEscape(&value);
    v10 = google::protobuf::internal::LogMessage::operator<<(v9, &value);
    google::protobuf::internal::LogFinisher::operator=(&v11, v10);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
      operator delete(value._M_dataplus._M_p);
    google::protobuf::internal::LogMessage::~LogMessage(&v14);
  }
  return result;
};

// Line 966: range 000000000C8DBB70-000000000C8DBBEA
bool __fastcall google::protobuf::io::ReadHexDigits(const char *ptr, int len, google::protobuf::uint32 *result)
{
  const char *v3; // r9
  bool v4; // cf
  int v5; // eax
  char v6; // al
  google::protobuf::uint32 v7; // ecx

  v3 = &ptr[len];
  if ( ptr >= v3 )
    return 1;
  while ( 1 )
  {
    v6 = *ptr;
    if ( !*ptr )
      break;
    v7 = 16 * *result;
    if ( (unsigned __int8)(v6 - 48) > 9u )
    {
      if ( (unsigned __int8)(v6 - 97) <= 0x19u )
      {
        v5 = v6 - 87;
      }
      else
      {
        v4 = (unsigned __int8)(v6 - 65) < 0x1Au;
        v5 = v6 - 55;
        if ( !v4 )
          v5 = -1;
      }
      ++ptr;
      *result = v7 + v5;
      if ( v3 == ptr )
        return 1;
    }
    else
    {
      ++ptr;
      *result = v7 + v6 - 48;
      if ( v3 == ptr )
        return 1;
    }
  }
  return 0;
};

// Line 1039: range 000000000C8DC290-000000000C8DCA0C
void __fastcall google::protobuf::io::Tokenizer::ParseStringAppend(_QWORD *a1, std::string *a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // rsi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // r15
  unsigned __int64 M_allocated_capacity; // rax
  char v8; // bp
  __int64 v9; // r12
  __int64 v10; // r9
  std::string::size_type v11; // r13
  std::string::pointer v12; // rax
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rdx
  std::string::pointer v15; // rax
  char v16; // al
  char v17; // al
  __int64 v18; // rsi
  char v19; // bp
  std::string::size_type M_string_length; // r13
  std::string::pointer M_p; // rax
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rdx
  std::string::pointer v24; // rax
  unsigned __int8 v25; // al
  char v26; // r9
  std::string::size_type v27; // rbp
  std::string::pointer v28; // rax
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // rdx
  std::string::pointer v31; // rax
  google::protobuf::internal::LogMessage_0 *v32; // rbp
  google::protobuf::internal::LogMessage_0 *v33; // rax
  char v34; // cl
  char v35; // al
  unsigned __int8 v36; // si
  char v37; // dl
  char v38; // dl
  char v39; // cl
  int v40; // r11d
  __int64 v41; // r13
  bool HexDigits; // al
  __int64 v43; // r11
  __int64 v44; // r9
  unsigned __int32 level; // edi
  __int64 v46; // rbp
  google::protobuf::internal::LogMessage_0 *v47; // rsi
  unsigned __int64 v48; // r13
  unsigned __int8 v49; // r8
  bool v50; // di
  bool v51; // al
  std::string::size_type v52; // rbp
  std::string::pointer v53; // rax
  char v54; // r11
  unsigned __int64 v55; // r12
  unsigned __int64 v56; // rdx
  std::string::pointer v57; // rax
  __int64 v58; // [rsp+0h] [rbp-B8h]
  char v59; // [rsp+0h] [rbp-B8h]
  char v60; // [rsp+0h] [rbp-B8h]
  __int64 v61; // [rsp+8h] [rbp-B0h]
  google::protobuf::internal::LogFinisher v62; // [rsp+1Fh] [rbp-99h] BYREF
  std::string value; // [rsp+20h] [rbp-98h] BYREF
  google::protobuf::internal::LogMessage_0 v64; // [rsp+40h] [rbp-78h] BYREF

  v4 = a1[1];
  if ( v4 )
  {
    v5 = a2->_M_string_length + v4;
    p_anon_0 = &a2->_anon_0;
    if ( &a2->_anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)a2->_M_dataplus._M_p )
      M_allocated_capacity = 15LL;
    else
      M_allocated_capacity = a2->_anon_0._M_allocated_capacity;
    if ( v5 > M_allocated_capacity )
      std::string::reserve(a2, v5);
    v8 = *(_BYTE *)(*a1 + 1LL);
    v9 = *a1 + 1LL;
LABEL_7:
    if ( !v8 )
      return;
    while ( 1 )
    {
      v10 = v9 + 1;
      if ( v8 == 92 )
      {
        v16 = *(_BYTE *)(v9 + 1);
        if ( v16 )
        {
          if ( (unsigned __int8)(v16 - 48) <= 7u )
          {
            v17 = v16 - 48;
            if ( (unsigned __int8)(*(_BYTE *)(v9 + 2) - 48) > 7u )
            {
              v9 += 2LL;
            }
            else
            {
              v17 = *(_BYTE *)(v9 + 2) + 8 * v17 - 48;
              v18 = v9 + 2;
              v10 = v9 + 3;
              if ( (unsigned __int8)(*(_BYTE *)(v9 + 3) - 48) > 7u )
              {
                v9 += 3LL;
                v10 = v18;
              }
              else
              {
                v17 = *(_BYTE *)(v9 + 3) + 8 * v17 - 48;
                v9 += 4LL;
              }
            }
            v19 = v17;
LABEL_23:
            M_string_length = a2->_M_string_length;
            M_p = a2->_M_dataplus._M_p;
            v22 = M_string_length + 1;
            if ( p_anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)a2->_M_dataplus._M_p )
              v23 = 15LL;
            else
              v23 = a2->_anon_0._M_allocated_capacity;
            if ( v22 > v23 )
            {
              v58 = v10;
              std::string::_M_mutate(a2, a2->_M_string_length, 0LL, 0LL, 1LL);
              M_p = a2->_M_dataplus._M_p;
              v22 = M_string_length + 1;
              v10 = v58;
            }
            M_p[M_string_length] = v19;
            v24 = a2->_M_dataplus._M_p;
            a2->_M_string_length = v22;
            v24[M_string_length + 1] = 0;
            v8 = *(_BYTE *)(v10 + 1);
            goto LABEL_7;
          }
          if ( v16 != 120 )
          {
            if ( (v16 & 0xDF) != 85 )
            {
              v25 = v16 - 34;
              v26 = 63;
              if ( v25 <= 0x54u )
              {
                v27 = a2->_M_string_length;
                v26 = CSWTCH_169[v25];
                v28 = a2->_M_dataplus._M_p;
                v29 = v27 + 1;
                if ( p_anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)a2->_M_dataplus._M_p )
                  goto LABEL_75;
LABEL_35:
                v30 = a2->_anon_0._M_allocated_capacity;
              }
              else
              {
                v27 = a2->_M_string_length;
                v28 = a2->_M_dataplus._M_p;
                v29 = v27 + 1;
                if ( p_anon_0 != (std::string::$CFBEC286C7F52157F7E59FC354047095 *)a2->_M_dataplus._M_p )
                  goto LABEL_35;
LABEL_75:
                v30 = 15LL;
              }
              if ( v29 > v30 )
              {
                v59 = v26;
                std::string::_M_mutate(a2, v27, 0LL, 0LL, 1LL);
                v28 = a2->_M_dataplus._M_p;
                v26 = v59;
              }
              v28[v27] = v26;
              v31 = a2->_M_dataplus._M_p;
              v9 += 2LL;
              a2->_M_string_length = v29;
              v31[v27 + 1] = 0;
              v8 = *(_BYTE *)v9;
              goto LABEL_7;
            }
            LODWORD(value._M_dataplus._M_p) = 0;
            v40 = 4;
            if ( v16 != 117 )
              v40 = 8;
            v41 = v9 + 2;
            HexDigits = google::protobuf::io::ReadHexDigits(
                          (const char *)(v9 + 2),
                          v40,
                          (google::protobuf::uint32 *)&value);
            v44 = v9 + 1;
            if ( HexDigits )
            {
              level = (unsigned __int32)value._M_dataplus._M_p;
              v46 = v41 + v43;
              if ( (unsigned int)(LODWORD(value._M_dataplus._M_p) - 55296) > 0x3FF )
                goto LABEL_83;
              if ( *(_BYTE *)v46 == 92 && *(_BYTE *)(v46 + 1) == 117 )
              {
                v64.level_ = LOGLEVEL_INFO_0;
                v51 = google::protobuf::io::ReadHexDigits((const char *)(v46 + 2), 4, (google::protobuf::uint32 *)&v64);
                v44 = v9 + 1;
                if ( v51 && (unsigned int)(v64.level_ - 56320) <= 0x3FF )
                {
                  v46 += 6LL;
                  LODWORD(value._M_dataplus._M_p) = ((v64.level_ - 56320) | ((LODWORD(value._M_dataplus._M_p) - 55296) << 10))
                                                  + 0x10000;
                }
LABEL_83:
                if ( v46 != v44 )
                {
                  level = (unsigned __int32)value._M_dataplus._M_p;
                  v64.level_ = LOGLEVEL_INFO_0;
                  if ( LODWORD(value._M_dataplus._M_p) <= 0x7F )
                  {
                    v64.level_ = (google::protobuf::LogLevel_0)value._M_dataplus._M_p;
                    v9 = v46;
                    v47 = (google::protobuf::internal::LogMessage_0 *)((char *)&v64.level_ + 3);
                    v48 = 1LL;
                    goto LABEL_61;
                  }
                  if ( LODWORD(value._M_dataplus._M_p) <= 0x7FF )
                  {
                    v9 = v46;
                    v48 = 2LL;
                    v47 = (google::protobuf::internal::LogMessage_0 *)((char *)&v64.level_ + 2);
                    level = (4 * LOWORD(value._M_dataplus._M_p)) & 0x1F00 | (__int64)value._M_dataplus._M_p & 0x3F | 0xC080;
                    v64.level_ = level;
                    goto LABEL_61;
                  }
                  if ( LODWORD(value._M_dataplus._M_p) > 0xFFFF )
                  {
                    if ( LODWORD(value._M_dataplus._M_p) > 0x1FFFFF )
                    {
                      google::protobuf::StringAppendF(a2, "\\U%08x", LODWORD(value._M_dataplus._M_p));
                      v9 = v46;
                    }
                    else
                    {
                      v9 = v46;
                      v47 = &v64;
                      v48 = 4LL;
                      v64.level_ = (16 * LODWORD(value._M_dataplus._M_p)) & 0x3F0000 | (__int64)value._M_dataplus._M_p & 0x3F | (4 * LOWORD(value._M_dataplus._M_p)) & 0x3F00 | (LODWORD(value._M_dataplus._M_p) << 6) & 0x7000000 | 0xF0808080;
                      level = v64.level_;
LABEL_61:
                      v64.level_ = google::protobuf::ghtonl(level);
                      if ( 0x3FFFFFFFFFFFFFFFLL - a2->_M_string_length < v48 )
                        std::__throw_length_error("basic_string::append");
                      std::string::_M_append(a2, (const char *)v47, v48);
                    }
                    v44 = v46 - 1;
LABEL_64:
                    v8 = *(_BYTE *)(v44 + 1);
                    goto LABEL_7;
                  }
LABEL_60:
                  v9 = v46;
                  v47 = (google::protobuf::internal::LogMessage_0 *)((char *)&v64.level_ + 1);
                  v48 = 3LL;
                  v64.level_ = level & 0x3F | (4 * (_WORD)level) & 0x3F00 | (16 * level) & 0xF0000 | 0xE08080;
                  level = v64.level_;
                  goto LABEL_61;
                }
              }
              else if ( v46 != v9 + 1 )
              {
                goto LABEL_60;
              }
            }
            v52 = a2->_M_string_length;
            v53 = a2->_M_dataplus._M_p;
            v54 = *(_BYTE *)(v9 + 1);
            v55 = v52 + 1;
            if ( p_anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)a2->_M_dataplus._M_p )
              v56 = 15LL;
            else
              v56 = a2->_anon_0._M_allocated_capacity;
            if ( v55 > v56 )
            {
              v61 = v44;
              v60 = v54;
              std::string::_M_mutate(a2, a2->_M_string_length, 0LL, 0LL, 1LL);
              v53 = a2->_M_dataplus._M_p;
              v44 = v61;
              v54 = v60;
            }
            v53[v52] = v54;
            v57 = a2->_M_dataplus._M_p;
            a2->_M_string_length = v55;
            v9 = v41;
            v57[v52 + 1] = 0;
            goto LABEL_64;
          }
          v34 = *(_BYTE *)(v9 + 2);
          v35 = v34;
          v36 = v34 - 97;
          if ( (unsigned __int8)(v34 - 48) <= 9u || v36 <= 5u )
          {
            v10 = v9 + 2;
            if ( (unsigned __int8)(v34 - 48) <= 9u )
            {
              v37 = v34 - 48;
              goto LABEL_67;
            }
            if ( v36 <= 0x19u )
              goto LABEL_97;
            if ( (unsigned __int8)(*(_BYTE *)(v9 + 2) - 65) <= 0x19u )
              goto LABEL_74;
            v34 = *(_BYTE *)(v9 + 3);
            v49 = v34 - 48;
            v36 = v34 - 97;
            v35 = v34;
            v50 = (unsigned __int8)(v34 - 97) <= 5u || (unsigned __int8)(v34 - 48) <= 9u;
            v37 = -1;
          }
          else
          {
            if ( (unsigned __int8)(v34 - 65) > 5u )
            {
              v9 += 2LL;
              v37 = 0;
              goto LABEL_47;
            }
            v10 = v9 + 2;
            if ( v36 > 0x19u )
            {
LABEL_74:
              v37 = v34 - 55;
              goto LABEL_67;
            }
LABEL_97:
            v37 = v34 - 87;
LABEL_67:
            v34 = *(_BYTE *)(v9 + 3);
            v49 = v34 - 48;
            v36 = v34 - 97;
            v35 = v34;
            v50 = (unsigned __int8)(v34 - 97) <= 5u || (unsigned __int8)(v34 - 48) <= 9u;
          }
          v9 = v10 + 1;
          if ( v50 )
          {
            v38 = 16 * v37;
            if ( v49 <= 9u )
            {
              v39 = v34 - 48;
              ++v10;
              goto LABEL_71;
            }
            if ( v36 > 0x19u )
            {
              if ( (unsigned __int8)(v35 - 65) > 0x19u )
              {
                ++v10;
                v39 = -1;
                goto LABEL_71;
              }
LABEL_49:
              v39 = v34 - 55;
              v10 = v9;
              goto LABEL_71;
            }
LABEL_96:
            v39 = v34 - 87;
            v10 = v9;
LABEL_71:
            v37 = v39 + v38;
            ++v9;
          }
          else
          {
LABEL_47:
            if ( (unsigned __int8)(v35 - 65) <= 5u )
            {
              v38 = 16 * v37;
              if ( v36 > 0x19u )
                goto LABEL_49;
              goto LABEL_96;
            }
          }
          v19 = v37;
          goto LABEL_23;
        }
        if ( *(_BYTE *)*a1 == 92 )
          return;
      }
      else if ( v8 == *(_BYTE *)*a1 && !*(_BYTE *)(v9 + 1) )
      {
        return;
      }
      v11 = a2->_M_string_length;
      v12 = a2->_M_dataplus._M_p;
      v13 = v11 + 1;
      if ( p_anon_0 == (std::string::$CFBEC286C7F52157F7E59FC354047095 *)a2->_M_dataplus._M_p )
        v14 = 15LL;
      else
        v14 = a2->_anon_0._M_allocated_capacity;
      if ( v13 > v14 )
      {
        std::string::_M_mutate(a2, a2->_M_string_length, 0LL, 0LL, 1LL);
        v12 = a2->_M_dataplus._M_p;
        v13 = v11 + 1;
        v10 = v9 + 1;
      }
      v12[v11] = v8;
      v15 = a2->_M_dataplus._M_p;
      a2->_M_string_length = v13;
      v15[v11 + 1] = 0;
      v8 = *(_BYTE *)(v9 + 1);
      v9 = v10;
      if ( !v8 )
        return;
    }
  }
  google::protobuf::internal::LogMessage::LogMessage(&v64, LOGLEVEL_ERROR_0, "google/protobuf/io/tokenizer.cc", 1044);
  v32 = google::protobuf::internal::LogMessage::operator<<(
          &v64,
          " Tokenizer::ParseStringAppend() passed text that could not have been tokenized as a string: ");
  google::protobuf::CEscape(&value);
  v33 = google::protobuf::internal::LogMessage::operator<<(v32, &value);
  google::protobuf::internal::LogFinisher::operator=(&v62, v33);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)value._M_dataplus._M_p != &value._anon_0 )
    operator delete(value._M_dataplus._M_p);
  google::protobuf::internal::LogMessage::~LogMessage(&v64);
};

// Line 1126: range 000000000C8DCA20-000000000C8DCAE3
bool __fastcall google::protobuf::io::Tokenizer::IsIdentifier(const std::string *text)
{
  bool v1; // r12
  std::string::size_type M_string_length; // rdx
  std::string::pointer M_p; // rsi
  char v4; // cl
  std::string::pointer v5; // rax
  bool v6; // bl
  std::string v8; // [rsp+0h] [rbp-38h] BYREF

  v1 = 0;
  M_string_length = text->_M_string_length;
  if ( !M_string_length )
    return v1;
  M_p = text->_M_dataplus._M_p;
  v4 = *text->_M_dataplus._M_p;
  v1 = v4 == 95 || (unsigned __int8)((v4 & 0xDF) - 65) <= 0x19u;
  if ( !v1 )
    return v1;
  v8._M_dataplus._M_p = v8._anon_0._M_local_buf;
  std::string::_M_construct<char const*>(&v8, M_p + 1, &M_p[M_string_length], (std::forward_iterator_tag)v4);
  if ( !v8._M_string_length )
  {
LABEL_8:
    v6 = v1;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8._M_dataplus._M_p == &v8._anon_0 )
      return v1;
LABEL_9:
    operator delete(v8._M_dataplus._M_p);
    return v6;
  }
  v5 = v8._M_dataplus._M_p;
  while ( 1 )
  {
    if ( (unsigned __int8)((*v5 & 0xDF) - 65) > 0x19u )
    {
      v6 = (unsigned __int8)(*v5 - 48) <= 9u || *v5 == 95;
      if ( !v6 )
        break;
    }
    if ( &v8._M_dataplus._M_p[v8._M_string_length] == ++v5 )
      goto LABEL_8;
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8._M_dataplus._M_p != &v8._anon_0 )
    goto LABEL_9;
  return 0;
};

// Line 1139: range 000000000C746BB0-000000000C746BD1
void __cdecl GLOBAL__sub_I__ZN6google8protobuf2io14ErrorCollectorD2Ev()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
