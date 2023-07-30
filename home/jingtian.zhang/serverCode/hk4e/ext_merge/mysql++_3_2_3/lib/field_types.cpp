// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/field_types.cpp

// Line 37: range 000000000CF9A850-000000000CF9AAAA
void __fastcall mysqlpp::FieldTypes::init(mysqlpp::FieldTypes *const this, const mysqlpp::ResultBase *res)
{
  std::_Vector_base<mysqlpp::Field>::pointer M_finish; // rdx
  std::_Vector_base<mysqlpp::Field>::pointer M_start; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // r8
  std::_Vector_base<mysqlpp::mysql_type_info>::pointer v7; // rbx
  unsigned __int64 v9; // r14
  mysqlpp::mysql_type_info *v10; // rbx
  unsigned __int64 v11; // rdx
  mysqlpp::mysql_type_info *v12; // rbx
  mysqlpp::Field *v13; // r12
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r13
  mysqlpp::mysql_type_info *v16; // rax
  std::_Vector_base<mysqlpp::mysql_type_info>::pointer v17; // r9
  mysqlpp::mysql_type_info *v18; // r10
  mysqlpp::mysql_type_info *v19; // r13
  mysqlpp::mysql_type_info *v20; // rdx
  _BYTE *p_num; // rsi
  mysqlpp::mysql_type_info *v22; // rbx
  unsigned __int8 v23; // di
  std::_Vector_base<mysqlpp::mysql_type_info>::pointer v24; // r13
  mysqlpp::mysql_type_info *v25; // rax
  mysqlpp::mysql_type_info *v26; // r12
  mysqlpp::mysql_type_info *v27; // rdx
  mysqlpp::mysql_type_info *v28; // r14
  unsigned __int8 v29; // si
  std::_Vector_base<mysqlpp::mysql_type_info>::pointer num; // [rsp+8h] [rbp-50h]
  size_t numb; // [rsp+8h] [rbp-50h]
  __int64 numa; // [rsp+8h] [rbp-50h]
  signed __int64 v33; // [rsp+10h] [rbp-48h]
  mysqlpp::mysql_type_info *v34; // [rsp+10h] [rbp-48h]
  unsigned __int64 v35; // [rsp+18h] [rbp-40h]

  M_finish = res->fields_._M_impl._M_finish;
  M_start = res->fields_._M_impl._M_start;
  v5 = (char *)M_finish - (char *)M_start;
  v6 = M_finish - M_start;
  if ( (char *)M_finish - (char *)M_start < 0 )
    std::__throw_length_error((const char *)&stru_1A1700D9.json_name_ + 7);
  v7 = this->_M_impl._M_start;
  if ( v6 > this->_M_impl._M_end_of_storage - this->_M_impl._M_start )
  {
    v24 = this->_M_impl._M_finish;
    numa = v5 >> 7;
    v25 = (mysqlpp::mysql_type_info *)operator new(v6);
    v6 = v5 >> 7;
    v26 = v25;
    v27 = v25;
    v28 = &v25[v24 - v7];
    if ( v7 != v24 )
    {
      do
      {
        v29 = v7->num_;
        ++v27;
        ++v7;
        v27[-1].num_ = v29;
      }
      while ( v27 != v28 );
    }
    if ( this->_M_impl._M_start )
    {
      operator delete(this->_M_impl._M_start);
      v6 = numa;
    }
    M_start = res->fields_._M_impl._M_start;
    M_finish = res->fields_._M_impl._M_finish;
    this->_M_impl._M_start = v26;
    this->_M_impl._M_finish = v28;
    this->_M_impl._M_end_of_storage = &v26[v6];
    goto LABEL_4;
  }
  if ( v6 )
  {
LABEL_4:
    v9 = 0LL;
    while ( 1 )
    {
      v11 = M_finish - M_start;
      if ( v11 <= (unsigned int)v9 )
        std::__throw_out_of_range_fmt(
          "vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)",
          (unsigned int)v9,
          v11);
      v12 = this->_M_impl._M_finish;
      v13 = &M_start[(unsigned __int64)(unsigned int)v9];
      if ( v12 == this->_M_impl._M_end_of_storage )
      {
        v14 = v12 - this->_M_impl._M_start;
        if ( v14 == 0x7FFFFFFFFFFFFFFFLL )
          std::__throw_length_error("vector::_M_realloc_insert");
        v15 = 1LL;
        if ( v14 )
        {
          v15 = 2 * v14;
          if ( v14 <= 2 * v14 )
          {
            if ( (v14 & 0x4000000000000000LL) != 0 )
              v15 = 0x7FFFFFFFFFFFFFFFLL;
          }
          else
          {
            v15 = 0x7FFFFFFFFFFFFFFFLL;
          }
        }
        v35 = v6;
        v33 = v12 - this->_M_impl._M_start;
        num = this->_M_impl._M_start;
        v16 = (mysqlpp::mysql_type_info *)operator new(v15);
        v17 = num;
        v18 = &v16[v15];
        v6 = v35;
        v19 = v16 + 1;
        v16[v33] = v13->type_;
        if ( v12 != num )
        {
          v20 = v16;
          p_num = &num->num_;
          v22 = &v16[v12 - num];
          do
          {
            v23 = *p_num;
            ++v20;
            ++p_num;
            v20[-1].num_ = v23;
          }
          while ( v20 != v22 );
          v19 = v20 + 1;
        }
        if ( num )
        {
          v34 = v16;
          numb = (size_t)v18;
          operator delete(v17);
          v6 = v35;
          v16 = v34;
          v18 = (mysqlpp::mysql_type_info *)numb;
        }
        ++v9;
        this->_M_impl._M_start = v16;
        this->_M_impl._M_finish = v19;
        this->_M_impl._M_end_of_storage = v18;
        if ( v9 >= v6 )
          return;
      }
      else
      {
        v10 = v12 + 1;
        ++v9;
        v10[-1].num_ = (unsigned __int8)v13->type_;
        this->_M_impl._M_finish = v10;
        if ( v9 >= v6 )
          return;
      }
      M_start = res->fields_._M_impl._M_start;
      M_finish = res->fields_._M_impl._M_finish;
    }
  }
};

// Line 45: range 000000000C748260-000000000C748289
void __cdecl GLOBAL__sub_I_field_types_cpp()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
