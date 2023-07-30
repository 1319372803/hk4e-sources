// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/row.cpp

// Line 34: range 000000000CF8C160-000000000CF8C3FE
void __fastcall mysqlpp::Row::Row(
        mysqlpp::Row *this,
        char **a2,
        const mysqlpp::ResultBase *a3,
        const unsigned __int64 *a4,
        bool a5)
{
  __int64 i; // rbx
  mysqlpp::SQLBuffer::size_type v7; // r14
  mysqlpp::SQLBuffer *v8; // rbp
  size_t *v9; // rax
  mysqlpp::String *v10; // rcx
  std::_Vector_base<mysqlpp::String>::pointer M_finish; // rsi
  mysqlpp::SQLBuffer *v12; // rax
  size_t *refs; // rax
  const char *v14; // r13
  mysqlpp::FieldTypes *counted; // rax
  unsigned __int64 v16; // rdx
  mysqlpp::FieldNames *v17; // rdx
  size_t *v18; // rax
  mysqlpp::SQLBuffer *v19; // rcx
  size_t *v20; // rdx
  bool v21; // [rsp+Eh] [rbp-6Ah]
  unsigned __int8 num; // [rsp+Fh] [rbp-69h]
  std::vector<mysqlpp::String>::size_type v24; // [rsp+18h] [rbp-60h]
  mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer> > v26; // [rsp+30h] [rbp-48h] BYREF

  this->exceptions_ = a5;
  this->_vptr_OptionalExceptions = (int (**)(...))(&`vtable for'mysqlpp::Row + 2);
  this->data_._M_impl._M_start = 0LL;
  this->data_._M_impl._M_finish = 0LL;
  this->data_._M_impl._M_end_of_storage = 0LL;
  this->field_names_.counted_ = 0LL;
  this->field_names_.refs_ = 0LL;
  this->initialized_ = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v24 = a3->fields_._M_impl._M_finish - a3->fields_._M_impl._M_start;
      std::vector<mysqlpp::String>::reserve(&this->data_, v24);
      if ( v24 )
      {
        for ( i = 0LL; i != v24; ++i )
        {
          v14 = a2[i];
          counted = a3->types_.counted_;
          v21 = v14 == 0LL;
          v16 = counted->_M_impl._M_finish - counted->_M_impl._M_start;
          if ( (int)i >= v16 )
            std::__throw_out_of_range_fmt(
              "vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",
              (int)i,
              v16);
          num = counted->_M_impl._M_start[(int)i].num_;
          if ( v14 )
          {
            v7 = a4[i];
          }
          else
          {
            v7 = 4LL;
            v14 = "NULL";
          }
          v8 = (mysqlpp::SQLBuffer *)operator new(0x18uLL);
          v8->data_ = 0LL;
          v8->length_ = 0LL;
          v8->type_.num_ = num;
          v8->is_null_ = v21;
          mysqlpp::SQLBuffer::replace_buffer(v8, v14, v7);
          v26.counted_ = v8;
          v26.refs_ = 0LL;
          v9 = (size_t *)operator new(8uLL);
          *v9 = 1LL;
          M_finish = this->data_._M_impl._M_finish;
          v26.refs_ = v9;
          if ( M_finish == this->data_._M_impl._M_end_of_storage )
          {
            std::vector<mysqlpp::String>::_M_realloc_insert<mysqlpp::String>(
              &this->data_,
              (std::vector<mysqlpp::String>::iterator)M_finish,
              (mysqlpp::String *)&v26,
              v10);
          }
          else
          {
            v12 = v26.counted_;
            M_finish->buffer_.counted_ = v26.counted_;
            if ( v12 )
            {
              refs = v26.refs_;
              ++*v26.refs_;
              M_finish->buffer_.refs_ = refs;
            }
            else
            {
              M_finish->buffer_.refs_ = 0LL;
            }
            this->data_._M_impl._M_finish = M_finish + 1;
          }
          mysqlpp::RefCountedPointer<mysqlpp::SQLBuffer,mysqlpp::RefCountedPointerDestroyer<mysqlpp::SQLBuffer>>::~RefCountedPointer(&v26);
        }
      }
      v17 = a3->names_.counted_;
      v18 = 0LL;
      if ( v17 )
      {
        v18 = a3->names_.refs_;
        ++*v18;
      }
      v19 = (mysqlpp::SQLBuffer *)this->field_names_.counted_;
      this->field_names_.counted_ = v17;
      v20 = this->field_names_.refs_;
      this->field_names_.refs_ = v18;
      v26.counted_ = v19;
      v26.refs_ = v20;
      mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames>>::~RefCountedPointer((mysqlpp::RefCountedPointer<mysqlpp::FieldNames,mysqlpp::RefCountedPointerDestroyer<mysqlpp::FieldNames> > *const)&v26);
      this->initialized_ = 1;
    }
    else if ( a5 )
    {
      JUMPOUT(0xC738452LL);
    }
  }
  else if ( a5 )
  {
    JUMPOUT(0xC7384A8LL);
  }
};

// Line 67: range 000000000CF8B8F0-000000000CF8B91F
mysqlpp::String *__fastcall mysqlpp::Row::at(
        mysqlpp::Row *this,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  std::_Vector_base<mysqlpp::String>::pointer M_start; // rax
  unsigned __int64 v8; // rdx

  M_start = this->data_._M_impl._M_start;
  v8 = this->data_._M_impl._M_finish - M_start;
  if ( a2 >= v8 )
    mysqlpp::Row::at((int)this, a2, v8, a4, a5, a6, a7);
  return &M_start[a2];
};

// Line 79: range 000000000CF8B780-000000000CF8B79D
mysqlpp::equal_list_ba<mysqlpp::FieldNames,mysqlpp::Row,mysqlpp::quote_type0> *__fastcall mysqlpp::Row::equal_list(
        mysqlpp::equal_list_ba<mysqlpp::FieldNames,mysqlpp::Row,mysqlpp::quote_type0> *retstr,
        const mysqlpp::Row *const this,
        const char *d,
        const char *e)
{
  mysqlpp::equal_list_ba<mysqlpp::FieldNames,mysqlpp::Row,mysqlpp::quote_type0> *result; // rax
  mysqlpp::FieldNames *counted; // rdi

  result = retstr;
  counted = this->field_names_.counted_;
  result->list2 = this;
  result->list1 = counted;
  result->delim = d;
  result->equl = e;
  result->manip = quote;
  return result;
};

// Line 98: range 000000000CF8B7A0-000000000CF8B7B5
mysqlpp::value_list_ba<mysqlpp::FieldNames,mysqlpp::do_nothing_type0> *__fastcall mysqlpp::Row::field_list(
        mysqlpp::value_list_ba<mysqlpp::FieldNames,mysqlpp::do_nothing_type0> *retstr,
        const mysqlpp::Row *const this,
        const char *d)
{
  mysqlpp::FieldNames *counted; // rcx
  mysqlpp::value_list_ba<mysqlpp::FieldNames,mysqlpp::do_nothing_type0> *result; // rax

  counted = this->field_names_.counted_;
  retstr->delim = d;
  result = retstr;
  retstr->manip = do_nothing;
  retstr->list = counted;
  return result;
};

// Line 120: range 000000000CF8BDA0-000000000CF8BF19
__int64 __fastcall mysqlpp::Row::field_list(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rbp
  char *v10; // rax
  __int64 v11; // rbp
  char *v12; // rcx
  _QWORD *v13; // r14
  _QWORD *v14; // rsi
  unsigned int v15; // ebp
  size_t v16; // rbx
  __int64 v17; // rdx
  __int64 *v18; // rax
  int v19; // ecx
  __int64 v20; // rsi
  __int64 result; // rax
  __int64 v22; // r14
  char *v23; // rax

  v6 = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  v7 = *(unsigned int *)(a4 + 24);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = v6;
  v8 = *(_QWORD *)(a4 + 16);
  *(_QWORD *)(a1 + 40) = 0LL;
  v9 = v7 + 8 * (v8 - *(_QWORD *)a4);
  if ( v9 )
  {
    v22 = v9 + 63;
    v23 = (char *)operator new(8 * ((unsigned __int64)(v9 + 63) >> 6));
    *(_QWORD *)(a1 + 8) = v23;
    if ( v9 >= 0 )
      v22 = v9;
    v12 = v23;
    *(_QWORD *)(a1 + 40) = &v23[8 * ((unsigned __int64)(v9 + 63) >> 6)];
    *(_DWORD *)(a1 + 16) = 0;
    v10 = &v23[8 * (v22 >> 6)];
    v11 = v9 % 64;
    if ( v11 < 0 )
    {
      LODWORD(v11) = v11 + 64;
      v10 -= 8;
    }
  }
  else
  {
    v10 = 0LL;
    LODWORD(v11) = 0;
    v12 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = v10;
  *(_DWORD *)(a1 + 32) = v11;
  v13 = *(_QWORD **)(a4 + 16);
  v14 = *(_QWORD **)a4;
  v15 = *(_DWORD *)(a4 + 24);
  v16 = (size_t)v13 - *(_QWORD *)a4;
  if ( v13 != v14 )
    v12 = (char *)memmove(v12, v14, v16);
  v17 = v15;
  v18 = (__int64 *)&v12[v16];
  v19 = 0;
  if ( v15 )
  {
    do
    {
      while ( 1 )
      {
        v20 = *v18 & ~(1LL << v19);
        if ( ((1LL << v19) & *v13) != 0 )
          v20 = *v18 | (1LL << v19);
        *v18 = v20;
        if ( v19 == 63 )
          break;
        ++v19;
        if ( !--v17 )
          goto LABEL_12;
      }
      ++v13;
      ++v18;
      v19 = 0;
      --v17;
    }
    while ( v17 );
  }
LABEL_12:
  *(_QWORD *)(a1 + 48) = a3;
  result = a1;
  *(_DWORD *)(a1 + 56) = 0;
  return result;
};

// Line 128: range 000000000CF8BC20-000000000CF8BD91
__int64 __fastcall mysqlpp::Row::field_list(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rbp
  char *v7; // rax
  __int64 v8; // rbp
  char *v9; // rcx
  _QWORD *v10; // r13
  _QWORD *v11; // rsi
  unsigned int v12; // ebp
  size_t v13; // rbx
  __int64 v14; // rdx
  __int64 *v15; // rax
  int v16; // ecx
  __int64 v17; // rsi
  __int64 v19; // r13
  char *v20; // rax

  v3 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)a1 = v3;
  v5 = *(_QWORD *)(a3 + 16);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  v6 = *(unsigned int *)(a3 + 24) + 8 * (v5 - *(_QWORD *)a3);
  if ( v6 )
  {
    v19 = v6 + 63;
    v20 = (char *)operator new(8 * ((unsigned __int64)(v6 + 63) >> 6));
    *(_QWORD *)(a1 + 8) = v20;
    if ( v6 >= 0 )
      v19 = v6;
    v9 = v20;
    *(_QWORD *)(a1 + 40) = &v20[8 * ((unsigned __int64)(v6 + 63) >> 6)];
    *(_DWORD *)(a1 + 16) = 0;
    v7 = &v20[8 * (v19 >> 6)];
    v8 = v6 % 64;
    if ( v8 < 0 )
    {
      LODWORD(v8) = v8 + 64;
      v7 -= 8;
    }
  }
  else
  {
    v7 = 0LL;
    LODWORD(v8) = 0;
    v9 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = v7;
  *(_DWORD *)(a1 + 32) = v8;
  v10 = *(_QWORD **)(a3 + 16);
  v11 = *(_QWORD **)a3;
  v12 = *(_DWORD *)(a3 + 24);
  v13 = (size_t)v10 - *(_QWORD *)a3;
  if ( v10 != v11 )
    v9 = (char *)memmove(v9, v11, v13);
  v14 = v12;
  v15 = (__int64 *)&v9[v13];
  v16 = 0;
  if ( v12 )
  {
    do
    {
      while ( 1 )
      {
        v17 = *v15 & ~(1LL << v16);
        if ( ((1LL << v16) & *v10) != 0 )
          v17 = *v15 | (1LL << v16);
        *v15 = v17;
        if ( v16 == 63 )
          break;
        ++v16;
        if ( !--v14 )
          goto LABEL_12;
      }
      ++v10;
      ++v15;
      v16 = 0;
      --v14;
    }
    while ( v14 );
  }
LABEL_12:
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 48) = ",";
  return a1;
};

// Line 150: range 000000000CF8B9E0-000000000CF8BC1B
mysqlpp::Row *__fastcall mysqlpp::Row::field_list(
        mysqlpp::Row *this,
        const char *a2,
        size_t *a3,
        bool a4,
        bool a5,
        bool a6,
        bool a7,
        bool a8,
        bool a9,
        bool a10,
        bool a11,
        bool a12,
        bool a13,
        bool a14,
        bool a15,
        bool a16)
{
  _QWORD *v18; // rax
  __int64 v19; // rdi
  std::_Bit_type *M_p; // r14
  std::_Bit_type *v21; // rsi
  __int64 M_offset; // r8
  int (**v23)(...); // rax
  size_t v24; // rdx
  __int64 v25; // rbx
  mysqlpp::String *v26; // rax
  __int64 v27; // rbx
  char *v28; // rcx
  char *v29; // rax
  __int64 *v30; // rax
  int i; // ecx
  __int64 v32; // rdx
  __int64 v34; // r13
  char *v35; // rax
  __int64 v36; // [rsp+10h] [rbp-78h]
  size_t v37; // [rsp+18h] [rbp-70h]
  std::vector<bool> v; // [rsp+28h] [rbp-60h] BYREF

  v18 = (_QWORD *)*((_QWORD *)a2 + 5);
  v._M_impl._M_start._M_p = 0LL;
  v19 = v18[1] - *v18;
  v._M_impl._M_start._M_offset = 0;
  v._M_impl._M_finish._M_p = 0LL;
  v._M_impl._M_finish._M_offset = 0;
  v._M_impl._M_end_of_storage = 0LL;
  mysqlpp::create_vector(v19 >> 5, &v, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
  M_p = v._M_impl._M_finish._M_p;
  v21 = v._M_impl._M_start._M_p;
  M_offset = v._M_impl._M_finish._M_offset;
  v23 = (int (**)(...))*((_QWORD *)a2 + 5);
  *(_QWORD *)&this->exceptions_ = 0LL;
  LODWORD(this->data_._M_impl._M_start) = 0;
  v24 = (char *)M_p - (char *)v21;
  this->_vptr_OptionalExceptions = v23;
  this->data_._M_impl._M_finish = 0LL;
  v25 = M_offset + 8 * ((char *)M_p - (char *)v21);
  LODWORD(this->data_._M_impl._M_end_of_storage) = 0;
  this->field_names_.counted_ = 0LL;
  if ( v25 )
  {
    v34 = v25 + 63;
    v35 = (char *)operator new(8 * ((unsigned __int64)(v25 + 63) >> 6));
    v21 = v._M_impl._M_start._M_p;
    *(_QWORD *)&this->exceptions_ = v35;
    this->field_names_.counted_ = (mysqlpp::FieldNames *)&v35[8 * ((unsigned __int64)(v25 + 63) >> 6)];
    M_p = v._M_impl._M_finish._M_p;
    v28 = v35;
    LODWORD(this->data_._M_impl._M_start) = 0;
    M_offset = v._M_impl._M_finish._M_offset;
    v24 = (char *)M_p - (char *)v21;
    if ( v25 >= 0 )
      v34 = v25;
    v26 = (mysqlpp::String *)&v35[8 * (v34 >> 6)];
    v27 = v25 % 64;
    if ( v27 < 0 )
    {
      LODWORD(v27) = v27 + 64;
      v26 = (mysqlpp::String *)((char *)v26 - 8);
    }
  }
  else
  {
    v26 = 0LL;
    LODWORD(v27) = 0;
    v28 = 0LL;
  }
  this->data_._M_impl._M_finish = v26;
  LODWORD(this->data_._M_impl._M_end_of_storage) = v27;
  if ( v21 != M_p )
  {
    v36 = M_offset;
    v37 = v24;
    v29 = (char *)memmove(v28, v21, v24);
    v21 = v._M_impl._M_start._M_p;
    M_offset = v36;
    v24 = v37;
    v28 = v29;
  }
  v30 = (__int64 *)&v28[v24];
  for ( i = 0; M_offset; --M_offset )
  {
    while ( 1 )
    {
      v32 = *v30 & ~(1LL << i);
      if ( ((1LL << i) & *M_p) != 0 )
        v32 = *v30 | (1LL << i);
      *v30 = v32;
      if ( i == 63 )
        break;
      ++i;
      if ( !--M_offset )
        goto LABEL_12;
    }
    ++M_p;
    ++v30;
    i = 0;
  }
LABEL_12:
  *(_DWORD *)&this->initialized_ = 0;
  this->field_names_.refs_ = a3;
  if ( v21 )
    operator delete(v21);
  return this;
};

// Line 163: range 000000000CF8BF20-000000000CF8C15B
mysqlpp::Row *__fastcall mysqlpp::Row::field_list(
        mysqlpp::Row *this,
        __int64 a2,
        bool a3,
        bool a4,
        bool a5,
        bool a6,
        bool a7,
        bool a8,
        bool a9,
        bool a10,
        bool a11,
        bool a12,
        bool a13,
        bool a14,
        bool a15)
{
  _QWORD *v16; // rax
  __int64 v17; // rdi
  int (**v18)(...); // rax
  std::_Bit_type *M_p; // rsi
  __int64 M_offset; // r13
  std::_Bit_type *v21; // rax
  size_t v22; // rdx
  __int64 v23; // rbx
  mysqlpp::String *v24; // rax
  __int64 v25; // rbx
  char *v26; // rcx
  char *v27; // rax
  __int64 *v28; // rax
  int i; // ecx
  __int64 v30; // rdx
  __int64 v32; // r14
  char *v33; // rax
  mysqlpp::FieldNames *v34; // r13
  std::_Bit_type *v35; // rax
  size_t v36; // [rsp+8h] [rbp-70h]
  std::_Bit_type *v37; // [rsp+10h] [rbp-68h]
  std::vector<bool> v; // [rsp+18h] [rbp-60h] BYREF

  v16 = *(_QWORD **)(a2 + 40);
  v._M_impl._M_start._M_p = 0LL;
  v._M_impl._M_start._M_offset = 0;
  v17 = v16[1] - *v16;
  v._M_impl._M_finish._M_p = 0LL;
  v._M_impl._M_finish._M_offset = 0;
  v._M_impl._M_end_of_storage = 0LL;
  mysqlpp::create_vector(v17 >> 5, &v, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
  v18 = *(int (***)(...))(a2 + 40);
  M_p = v._M_impl._M_start._M_p;
  *(_QWORD *)&this->exceptions_ = 0LL;
  LODWORD(this->data_._M_impl._M_start) = 0;
  M_offset = v._M_impl._M_finish._M_offset;
  this->_vptr_OptionalExceptions = v18;
  v21 = v._M_impl._M_finish._M_p;
  this->data_._M_impl._M_finish = 0LL;
  v37 = v21;
  LODWORD(this->data_._M_impl._M_end_of_storage) = 0;
  v22 = (char *)v21 - (char *)M_p;
  this->field_names_.counted_ = 0LL;
  v23 = M_offset + 8 * ((char *)v21 - (char *)M_p);
  if ( v23 )
  {
    v32 = v23 + 63;
    v33 = (char *)operator new(8 * ((unsigned __int64)(v23 + 63) >> 6));
    v34 = (mysqlpp::FieldNames *)&v33[8 * ((unsigned __int64)(v23 + 63) >> 6)];
    v26 = v33;
    *(_QWORD *)&this->exceptions_ = v33;
    v35 = v._M_impl._M_finish._M_p;
    M_p = v._M_impl._M_start._M_p;
    this->field_names_.counted_ = v34;
    v37 = v35;
    M_offset = v._M_impl._M_finish._M_offset;
    LODWORD(this->data_._M_impl._M_start) = 0;
    v22 = (char *)v35 - (char *)M_p;
    if ( v23 >= 0 )
      v32 = v23;
    v24 = (mysqlpp::String *)&v26[8 * (v32 >> 6)];
    v25 = v23 % 64;
    if ( v25 < 0 )
    {
      LODWORD(v25) = v25 + 64;
      v24 = (mysqlpp::String *)((char *)v24 - 8);
    }
  }
  else
  {
    v24 = 0LL;
    LODWORD(v25) = 0;
    v26 = 0LL;
  }
  this->data_._M_impl._M_finish = v24;
  LODWORD(this->data_._M_impl._M_end_of_storage) = v25;
  if ( M_p != v37 )
  {
    v36 = v22;
    v27 = (char *)memmove(v26, M_p, v22);
    M_p = v._M_impl._M_start._M_p;
    v22 = v36;
    v26 = v27;
  }
  v28 = (__int64 *)&v26[v22];
  for ( i = 0; M_offset; --M_offset )
  {
    while ( 1 )
    {
      v30 = *v28 & ~(1LL << i);
      if ( ((1LL << i) & *v37) != 0 )
        v30 = *v28 | (1LL << i);
      *v28 = v30;
      if ( i == 63 )
        break;
      ++i;
      if ( !--M_offset )
        goto LABEL_12;
    }
    ++v37;
    ++v28;
    i = 0;
  }
LABEL_12:
  *(_DWORD *)&this->initialized_ = 0;
  this->field_names_.refs_ = (size_t *)",";
  if ( M_p )
    operator delete(M_p);
  return this;
};

// Line 174: range 000000000CF8B7C0-000000000CF8B8E5
__int64 __fastcall mysqlpp::Row::field_num(mysqlpp::Row *this, const char *a2)
{
  void *v3; // rax
  std::forward_iterator_tag v4; // cl
  size_t v5; // r12
  __int64 *v6; // rdx
  __int64 v7; // r12
  __int64 *v9; // rdi
  void *v10; // [rsp+8h] [rbp-50h] BYREF
  void *v11[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v12[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( this->field_names_.counted_ )
  {
    v11[0] = v12;
    if ( !a2 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v3 = (void *)strlen(a2);
    v10 = v3;
    v5 = (size_t)v3;
    if ( (unsigned __int64)v3 > 0xF )
    {
      v11[0] = (void *)std::string::_M_create(v11, &v10, 0LL);
      v9 = (__int64 *)v11[0];
      v12[0] = (__int64)v10;
    }
    else
    {
      if ( v3 == (void *)1 )
      {
        LOBYTE(v12[0]) = *a2;
        v6 = v12;
LABEL_6:
        v11[1] = v3;
        *((_BYTE *)v3 + (_QWORD)v6) = 0;
        v7 = (unsigned int)mysqlpp::FieldNames::operator[](
                             (__int64 *)this->field_names_.counted_,
                             (char **)v11,
                             (__int64)v6,
                             v4);
        if ( v11[0] != v12 )
          operator delete(v11[0]);
        return v7;
      }
      if ( !v3 )
      {
        v6 = v12;
        goto LABEL_6;
      }
      v9 = v12;
    }
    memcpy(v9, a2, v5);
    v3 = v10;
    v6 = (__int64 *)v11[0];
    goto LABEL_6;
  }
  if ( this->exceptions_ )
    mysqlpp::Row::field_num();
  return 0LL;
};

// Line 179: range 000000000C7382B4-000000000C7382DD
void __fastcall __noreturn mysqlpp::Row::field_num()
{
  const char *v0; // rbp
  mysqlpp::BadFieldName *exception; // r12

  exception = (mysqlpp::BadFieldName *)__cxa_allocate_exception(0x28uLL);
  mysqlpp::BadFieldName::BadFieldName(exception, v0);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'mysqlpp::BadFieldName,
    (void (__fastcall *)(void *))mysqlpp::BadFieldName::~BadFieldName);
};

// Line 189: range 000000000CF8B920-000000000CF8B9D4
mysqlpp::String *__fastcall mysqlpp::Row::operator[](
        mysqlpp::Row *this,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  unsigned __int64 v7; // rax
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  unsigned __int64 v11; // rdx

  v7 = mysqlpp::Row::field_num(this, a2);
  v11 = this->data_._M_impl._M_finish - this->data_._M_impl._M_start;
  if ( v7 < v11 )
    return mysqlpp::Row::at(this, v7, v11, v8, v9, v10, a7);
  if ( this->exceptions_ )
    mysqlpp::Row::operator[]();
  if ( !(_BYTE)`guard variable for'mysqlpp::Row::operator[](char const*)::empty )
  {
    if ( __cxa_guard_acquire(&`guard variable for'mysqlpp::Row::operator[](char const*)::empty) )
    {
      mysqlpp::Row::operator[](char const*)const::empty = 0LL;
      qword_1FB66B58 = 0LL;
      __cxa_guard_release(&`guard variable for'mysqlpp::Row::operator[](char const*)::empty);
      __cxa_atexit(
        (void (__fastcall *)(void *))mysqlpp::String::~String,
        &mysqlpp::Row::operator[](char const*)const::empty,
        &_dso_handle);
    }
  }
  return (mysqlpp::String *)&mysqlpp::Row::operator[](char const*)const::empty;
};

// Line 195: range 000000000C738366-000000000C7383A2
void __fastcall __noreturn mysqlpp::Row::operator[]()
{
  const char *v0; // r12
  mysqlpp::BadFieldName *exception; // rbp

  exception = (mysqlpp::BadFieldName *)__cxa_allocate_exception(0x28uLL);
  mysqlpp::BadFieldName::BadFieldName(exception, v0);
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'mysqlpp::BadFieldName,
    (void (__fastcall *)(void *))mysqlpp::BadFieldName::~BadFieldName);
};

// Line 204: range 000000000C747810-000000000C747839
void __cdecl GLOBAL__sub_I_row_cpp()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
