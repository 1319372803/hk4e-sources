// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/type_info.cpp

// Line 230: range 000000000CF97BF0-000000000CF97DEA
void __fastcall mysqlpp::mysql_ti_sql_type_info_lookup::mysql_ti_sql_type_info_lookup(
        mysqlpp::mysql_ti_sql_type_info_lookup *this,
        const mysqlpp::mysql_ti_sql_type_info *a2,
        int a3)
{
  const std::type_info **p_c_type; // rbp
  int i; // r12d
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rbx
  std::_Rb_tree_node_base *p_M_header; // r14
  const char *v8; // r15
  const char *v9; // rdi
  unsigned int v10; // eax
  const char *v11; // rsi
  unsigned int v12; // eax
  std::_Rb_tree<const std::type_info*,std::pair<const std::type_info* const,unsigned char>,std::_Select1st<std::pair<const std::type_info* const,unsigned char> >,mysqlpp::type_info_cmp,std::allocator<std::pair<const std::type_info* const,unsigned char> > >::const_iterator v13; // rbx
  const std::type_info *v14; // rax
  std::pair<std::_Rb_tree_node_base*,std::_Rb_tree_node_base*> insert_hint_unique_pos; // rax
  char first; // di
  const char *v17; // rdi
  const char *v18; // rsi
  std::_Rb_tree_node_base *v19; // rdi
  std::_Rb_tree_header *v21; // [rsp+10h] [rbp-48h]
  std::_Rb_tree_node_base *second; // [rsp+18h] [rbp-40h]

  this->map_._M_t._M_impl._M_header._M_color = _S_red;
  this->map_._M_t._M_impl._M_header._M_parent = 0LL;
  v21 = &this->map_._M_t._M_impl.std::_Rb_tree_header;
  this->map_._M_t._M_impl._M_header._M_left = &this->map_._M_t._M_impl._M_header;
  this->map_._M_t._M_impl._M_header._M_right = &this->map_._M_t._M_impl._M_header;
  this->map_._M_t._M_impl._M_node_count = 0LL;
  if ( a3 > 0 )
  {
    p_c_type = &a2->c_type_;
    for ( i = 0; a3 != i; ++i )
    {
      while ( (*((_BYTE *)p_c_type + 12) & 1) == 0 )
      {
        ++i;
        p_c_type += 3;
        if ( a3 == i )
          return;
      }
      M_parent = this->map_._M_t._M_impl._M_header._M_parent;
      if ( M_parent )
      {
        p_M_header = &v21->_M_header;
        v8 = (const char *)*((_QWORD *)*p_c_type + 1);
        do
        {
          while ( 1 )
          {
            v9 = *(const char **)(*(_QWORD *)&M_parent[1]._M_color + 8LL);
            if ( *v9 != 42 || (LOBYTE(v10) = v9 < v8, *v8 != 42) )
              v10 = (unsigned int)strcmp(v9, v8) >> 31;
            if ( (_BYTE)v10 )
              break;
            p_M_header = M_parent;
            M_parent = M_parent->_M_left;
            if ( !M_parent )
              goto LABEL_12;
          }
          M_parent = M_parent->_M_right;
        }
        while ( M_parent );
LABEL_12:
        if ( v21 != (std::_Rb_tree_header *)p_M_header )
        {
          v11 = *(const char **)(*(_QWORD *)&p_M_header[1]._M_color + 8LL);
          if ( *v8 != 42 || (LOBYTE(v12) = v8 < v11, *v11 != 42) )
            v12 = (unsigned int)strcmp(v8, v11) >> 31;
          if ( !(_BYTE)v12 )
            goto LABEL_21;
        }
      }
      else
      {
        p_M_header = &v21->_M_header;
      }
      v13._M_node = p_M_header;
      p_M_header = (std::_Rb_tree_node_base *)operator new(0x30uLL);
      v14 = *p_c_type;
      LOBYTE(p_M_header[1]._M_parent) = 0;
      *(_QWORD *)&p_M_header[1]._M_color = v14;
      insert_hint_unique_pos = std::_Rb_tree<std::type_info const*,std::pair<std::type_info const* const,unsigned char>,std::_Select1st<std::pair<std::type_info const* const,unsigned char>>,mysqlpp::type_info_cmp,std::allocator<std::pair<std::type_info const* const,unsigned char>>>::_M_get_insert_hint_unique_pos(
                                 &this->map_._M_t,
                                 v13,
                                 (const std::_Rb_tree<const std::type_info*,std::pair<const std::type_info* const,unsigned char>,std::_Select1st<std::pair<const std::type_info* const,unsigned char> >,mysqlpp::type_info_cmp,std::allocator<std::pair<const std::type_info* const,unsigned char> > >::key_type *)&p_M_header[1]);
      if ( insert_hint_unique_pos.second )
      {
        if ( insert_hint_unique_pos.first || v21 == (std::_Rb_tree_header *)insert_hint_unique_pos.second )
        {
          first = 1;
        }
        else
        {
          v17 = *(const char **)(*(_QWORD *)&p_M_header[1]._M_color + 8LL);
          v18 = *(const char **)(*(_QWORD *)&insert_hint_unique_pos.second[1]._M_color + 8LL);
          if ( *v17 != 42 || (LOBYTE(insert_hint_unique_pos.first) = v17 < v18, *v18 != 42) )
          {
            second = insert_hint_unique_pos.second;
            LODWORD(insert_hint_unique_pos.first) = strcmp(v17, v18);
            insert_hint_unique_pos.second = second;
            LODWORD(insert_hint_unique_pos.first) >>= 31;
          }
          first = (char)insert_hint_unique_pos.first;
        }
        std::_Rb_tree_insert_and_rebalance(first, p_M_header, insert_hint_unique_pos.second, &v21->_M_header);
        ++this->map_._M_t._M_impl._M_node_count;
      }
      else
      {
        v19 = p_M_header;
        p_M_header = insert_hint_unique_pos.first;
        operator delete(v19);
      }
LABEL_21:
      LOBYTE(p_M_header[1]._M_parent) = i;
      p_c_type += 3;
    }
  }
};

// Line 245: range 000000000CF97980-000000000CF979D2
unsigned __int8 __fastcall mysqlpp::mysql_type_info::type(enum_field_types t, bool _unsigned, bool _null)
{
  unsigned __int8 v3; // r8
  const unsigned int *p_flags; // rax

_ZN7mysqlpp15mysql_type_info4typeE16enum_field_typesbb:
  v3 = 0;
  p_flags = &mysqlpp::mysql_type_info::types[0].flags_;
  while ( *(p_flags - 1) != t || _unsigned && (*(_BYTE *)p_flags & 4) == 0 || _null && (*(_BYTE *)p_flags & 2) == 0 )
  {
    ++v3;
    p_flags += 6;
    if ( v3 == 56 )
    {
      _unsigned = 0;
      t = MYSQL_TYPE_STRING;
      goto _ZN7mysqlpp15mysql_type_info4typeE16enum_field_typesbb;
    }
  }
  return v3;
};

// Line 257: range 000000000CF979E0-000000000CF97B33
bool __fastcall mysqlpp::mysql_type_info::quote_q(const mysqlpp::mysql_type_info *const this)
{
  bool v1; // r12
  const std::type_info *c_type; // rax
  const char *v3; // rbp
  const char *v4; // rsi
  const char *v5; // rsi
  const char *v6; // rsi

  v1 = 1;
  c_type = mysqlpp::mysql_type_info::types[mysqlpp::mysql_type_info::type(
                                             (enum_field_types)mysqlpp::mysql_type_info::types[this->num_].base_type_,
                                             0,
                                             0)].c_type_;
  v3 = (const char *)*((_QWORD *)c_type + 1);
  if ( v3 != "NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE" )
  {
    if ( *v3 == 42 )
    {
      if ( v3 != *(&`typeinfo for'mysqlpp::Date + 1) && v3 != *(&`typeinfo for'mysqlpp::Time + 1) )
        return v3 == "N7mysqlpp3SetISt3setINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4lessIS7_ESaIS7_EEEE"
            || v3 == "N7mysqlpp6StringE"
            || *(&`typeinfo for'mysqlpp::DateTime + 1) == v3;
    }
    else if ( strcmp(*((const char **)c_type + 1), "NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE") )
    {
      v4 = (const char *)*(&`typeinfo for'mysqlpp::Date + 1);
      if ( v3 != v4 )
      {
        if ( strcmp(v3, v4) )
        {
          v5 = (const char *)*(&`typeinfo for'mysqlpp::Time + 1);
          if ( v3 != v5 )
          {
            if ( strcmp(v3, v5) )
            {
              v6 = (const char *)*(&`typeinfo for'mysqlpp::DateTime + 1);
              if ( v3 != v6 )
              {
                v1 = (v3 == "N7mysqlpp6StringE") | (strcmp(v3, v6) == 0);
                if ( !v1 )
                {
                  v1 = 1;
                  if ( strcmp(v3, "N7mysqlpp6StringE") )
                  {
                    if ( v3 != "N7mysqlpp3SetISt3setINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4lessIS7_ESaIS7_EEEE" )
                      return strcmp(
                               v3,
                               "N7mysqlpp3SetISt3setINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4lessIS7_ESaIS7_EEEE") == 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v1;
};

// Line 272: range 000000000CF97B40-000000000CF97BE8
bool __fastcall mysqlpp::mysql_type_info::escape_q(const mysqlpp::mysql_type_info *const this)
{
  const std::type_info *c_type; // rax
  const char *v2; // rbp

  c_type = mysqlpp::mysql_type_info::types[mysqlpp::mysql_type_info::type(
                                             (enum_field_types)mysqlpp::mysql_type_info::types[this->num_].base_type_,
                                             0,
                                             0)].c_type_;
  v2 = (const char *)*((_QWORD *)c_type + 1);
  if ( v2 == "NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE" )
    return 1;
  if ( *v2 == 42 )
    return v2 == "N7mysqlpp6StringE";
  if ( !strcmp(*((const char **)c_type + 1), "NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE")
    || v2 == "N7mysqlpp6StringE" )
  {
    return 1;
  }
  return strcmp(v2, "N7mysqlpp6StringE") == 0;
};

// Line 284: range 000000000C7478A0-000000000C7481C7
void __cdecl GLOBAL__sub_I_type_info_cpp()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
  mysqlpp::mysql_type_info::types[1].sql_name_ = "TINYINT NOT NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[1].base_type_ = 0x100000001LL;
  mysqlpp::mysql_type_info::types[1].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::tiny_int<signed char>;
  mysqlpp::mysql_type_info::types[2].sql_name_ = "TINYINT UNSIGNED NOT NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[2].base_type_ = 0x500000001LL;
  mysqlpp::mysql_type_info::types[2].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::tiny_int<unsigned char>;
  mysqlpp::mysql_type_info::types[3].sql_name_ = "SMALLINT NOT NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[3].base_type_ = 0x100000002LL;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[4].base_type_ = 0x500000002LL;
  mysqlpp::mysql_type_info::types[3].c_type_ = (const std::type_info *)&`typeinfo for'short;
  mysqlpp::mysql_type_info::types[4].sql_name_ = "SMALLINT UNSIGNED NOT NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[5].base_type_ = 0x100000003LL;
  mysqlpp::mysql_type_info::types[5].sql_name_ = "INT NOT NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[6].base_type_ = 0x500000003LL;
  mysqlpp::mysql_type_info::types[0].sql_name_ = "DECIMAL NOT NULL";
  mysqlpp::mysql_type_info::types[4].c_type_ = (const std::type_info *)&`typeinfo for'unsigned short;
  mysqlpp::mysql_type_info::types[6].sql_name_ = "INT UNSIGNED NOT NULL";
  mysqlpp::mysql_type_info::types[7].sql_name_ = "FLOAT NOT NULL";
  mysqlpp::mysql_type_info::types[0].c_type_ = (const std::type_info *)&`typeinfo for'double;
  mysqlpp::mysql_type_info::types[5].c_type_ = (const std::type_info *)&`typeinfo for'int;
  mysqlpp::mysql_type_info::types[6].c_type_ = (const std::type_info *)&`typeinfo for'unsigned int;
  mysqlpp::mysql_type_info::types[7].c_type_ = (const std::type_info *)`typeinfo for'float;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[0].base_type_ = 246LL;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[7].base_type_ = 0x100000004LL;
  mysqlpp::mysql_type_info::types[8].c_type_ = (const std::type_info *)`typeinfo for'float;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[8].base_type_ = 0x500000004LL;
  mysqlpp::mysql_type_info::types[9].sql_name_ = "DOUBLE NOT NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[9].base_type_ = 0x100000005LL;
  mysqlpp::mysql_type_info::types[10].sql_name_ = "DOUBLE UNSIGNED NOT NULL";
  mysqlpp::mysql_type_info::types[13].sql_name_ = (const char *)&unk_1A2D8A55;
  mysqlpp::mysql_type_info::types[9].c_type_ = (const std::type_info *)&`typeinfo for'double;
  mysqlpp::mysql_type_info::types[10].c_type_ = (const std::type_info *)&`typeinfo for'double;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[10].base_type_ = 0x500000005LL;
  mysqlpp::mysql_type_info::types[13].c_type_ = (const std::type_info *)&`typeinfo for'long;
  mysqlpp::mysql_type_info::types[11].sql_name_ = "NULL NOT NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[13].base_type_ = 0x100000008LL;
  mysqlpp::mysql_type_info::types[14].sql_name_ = (const char *)&unk_1A2D8A65;
  mysqlpp::mysql_type_info::types[11].c_type_ = (const std::type_info *)&`typeinfo for'void;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[11].base_type_ = 0x100000006LL;
  mysqlpp::mysql_type_info::types[14].c_type_ = (const std::type_info *)&`typeinfo for'unsigned long;
  mysqlpp::mysql_type_info::types[12].sql_name_ = "TIMESTAMP NOT NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[14].base_type_ = 0x500000008LL;
  mysqlpp::mysql_type_info::types[15].sql_name_ = "MEDIUMINT NOT NULL";
  mysqlpp::mysql_type_info::types[15].c_type_ = (const std::type_info *)&`typeinfo for'int;
  mysqlpp::mysql_type_info::types[16].c_type_ = (const std::type_info *)&`typeinfo for'unsigned int;
  mysqlpp::mysql_type_info::types[12].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::DateTime;
  mysqlpp::mysql_type_info::types[16].sql_name_ = "MEDIUMINT UNSIGNED NOT NULL";
  mysqlpp::mysql_type_info::types[17].sql_name_ = "DATE NOT NULL";
  mysqlpp::mysql_type_info::types[8].sql_name_ = "FLOAT UNSIGNED NOT NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[12].base_type_ = 7LL;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[15].base_type_ = 0x400000009LL;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[16].base_type_ = 0x400000009LL;
  mysqlpp::mysql_type_info::types[19].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::DateTime;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[19].base_type_ = 0x10000000CLL;
  mysqlpp::mysql_type_info::types[20].sql_name_ = "ENUM NOT NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[20].base_type_ = 0x1000000F7LL;
  mysqlpp::mysql_type_info::types[21].sql_name_ = "SET NOT NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[17].base_type_ = 0x10000000ALL;
  mysqlpp::mysql_type_info::types[21].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Set<std::set<std::string>>;
  mysqlpp::mysql_type_info::types[18].sql_name_ = "TIME NOT NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[21].base_type_ = 0x1000000F8LL;
  mysqlpp::mysql_type_info::types[17].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Date;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[18].base_type_ = 0x10000000BLL;
  mysqlpp::mysql_type_info::types[22].sql_name_ = "TINYBLOB NOT NULL";
  mysqlpp::mysql_type_info::types[19].sql_name_ = (const char *)&unk_1A2D8ABB;
  mysqlpp::mysql_type_info::types[18].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Time;
  mysqlpp::mysql_type_info::types[22].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::String;
  mysqlpp::mysql_type_info::types[23].sql_name_ = "MEDIUMBLOB NOT NULL";
  mysqlpp::mysql_type_info::types[23].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::String;
  mysqlpp::mysql_type_info::types[24].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::String;
  mysqlpp::mysql_type_info::types[25].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::String;
  mysqlpp::mysql_type_info::types[24].sql_name_ = "LONGBLOB NOT NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[25].base_type_ = 0x1000000FCLL;
  mysqlpp::mysql_type_info::types[20].c_type_ = (const std::type_info *)&`typeinfo for'std::string;
  mysqlpp::mysql_type_info::types[25].sql_name_ = "BLOB NOT NULL";
  mysqlpp::mysql_type_info::types[26].sql_name_ = "VARCHAR NOT NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[22].base_type_ = 249LL;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[23].base_type_ = 250LL;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[24].base_type_ = 251LL;
  mysqlpp::mysql_type_info::types[26].c_type_ = (const std::type_info *)&`typeinfo for'std::string;
  mysqlpp::mysql_type_info::types[27].c_type_ = (const std::type_info *)&`typeinfo for'std::string;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[28].base_type_ = 0x2000000F6LL;
  mysqlpp::mysql_type_info::types[29].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<mysqlpp::tiny_int<signed char>,mysqlpp::NullIsNull>;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[29].base_type_ = 0x300000001LL;
  mysqlpp::mysql_type_info::types[29].sql_name_ = "TINYINT NULL";
  mysqlpp::mysql_type_info::types[30].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<mysqlpp::tiny_int<unsigned char>,mysqlpp::NullIsNull>;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[30].base_type_ = 0x700000001LL;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[26].base_type_ = 0x1000000FDLL;
  mysqlpp::mysql_type_info::types[31].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<short,mysqlpp::NullIsNull>;
  mysqlpp::mysql_type_info::types[32].sql_name_ = "SMALLINT UNSIGNED NULL";
  mysqlpp::mysql_type_info::types[30].sql_name_ = "TINYINT UNSIGNED NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[31].base_type_ = 0x300000002LL;
  mysqlpp::mysql_type_info::types[27].sql_name_ = "CHAR NOT NULL";
  mysqlpp::mysql_type_info::types[31].sql_name_ = "SMALLINT NULL";
  mysqlpp::mysql_type_info::types[32].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<unsigned short,mysqlpp::NullIsNull>;
  mysqlpp::mysql_type_info::types[33].sql_name_ = "INT NULL";
  mysqlpp::mysql_type_info::types[28].sql_name_ = "DECIMAL NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[32].base_type_ = 0x700000002LL;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[33].base_type_ = 0x300000003LL;
  mysqlpp::mysql_type_info::types[34].sql_name_ = "INT UNSIGNED NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[34].base_type_ = 0x700000003LL;
  mysqlpp::mysql_type_info::types[28].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<double,mysqlpp::NullIsNull>;
  mysqlpp::mysql_type_info::types[33].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<int,mysqlpp::NullIsNull>;
  mysqlpp::mysql_type_info::types[34].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<unsigned int,mysqlpp::NullIsNull>;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[27].base_type_ = 254LL;
  mysqlpp::mysql_type_info::types[35].sql_name_ = "FLOAT NULL";
  mysqlpp::mysql_type_info::types[37].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<double,mysqlpp::NullIsNull>;
  mysqlpp::mysql_type_info::types[35].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<float,mysqlpp::NullIsNull>;
  mysqlpp::mysql_type_info::types[36].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<float,mysqlpp::NullIsNull>;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[36].base_type_ = 0x700000004LL;
  mysqlpp::mysql_type_info::types[37].sql_name_ = "DOUBLE NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[37].base_type_ = 0x300000005LL;
  mysqlpp::mysql_type_info::types[38].sql_name_ = "DOUBLE UNSIGNED NULL";
  mysqlpp::mysql_type_info::types[38].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<double,mysqlpp::NullIsNull>;
  mysqlpp::mysql_type_info::types[41].sql_name_ = (const char *)&unk_1A2D8BDF;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[38].base_type_ = 0x700000005LL;
  mysqlpp::mysql_type_info::types[39].sql_name_ = "NULL NULL";
  mysqlpp::mysql_type_info::types[41].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<long,mysqlpp::NullIsNull>;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[41].base_type_ = 0x300000008LL;
  mysqlpp::mysql_type_info::types[39].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<void,mysqlpp::NullIsNull>;
  mysqlpp::mysql_type_info::types[42].sql_name_ = (const char *)&unk_1A2D8BEB;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[39].base_type_ = 0x200000006LL;
  mysqlpp::mysql_type_info::types[40].sql_name_ = "TIMESTAMP NULL";
  mysqlpp::mysql_type_info::types[42].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<unsigned long,mysqlpp::NullIsNull>;
  mysqlpp::mysql_type_info::types[43].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<int,mysqlpp::NullIsNull>;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[42].base_type_ = 0x700000008LL;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[43].base_type_ = 0x200000009LL;
  mysqlpp::mysql_type_info::types[40].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<mysqlpp::DateTime,mysqlpp::NullIsNull>;
  mysqlpp::mysql_type_info::types[43].sql_name_ = "MEDIUMINT NULL";
  mysqlpp::mysql_type_info::types[44].sql_name_ = "MEDIUMINT UNSIGNED NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[35].base_type_ = 0x300000004LL;
  mysqlpp::mysql_type_info::types[36].sql_name_ = "FLOAT UNSIGNED NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[40].base_type_ = 7LL;
  mysqlpp::mysql_type_info::types[44].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<unsigned int,mysqlpp::NullIsNull>;
  mysqlpp::mysql_type_info::types[47].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<mysqlpp::DateTime,mysqlpp::NullIsNull>;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[47].base_type_ = 0x30000000CLL;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[44].base_type_ = 0x600000009LL;
  mysqlpp::mysql_type_info::types[48].sql_name_ = "ENUM NULL";
  mysqlpp::mysql_type_info::types[45].sql_name_ = "DATE NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[48].base_type_ = 0x3000000F7LL;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[45].base_type_ = 0x30000000ALL;
  mysqlpp::mysql_type_info::types[49].sql_name_ = "SET NULL";
  mysqlpp::mysql_type_info::types[45].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<mysqlpp::Date,mysqlpp::NullIsNull>;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[46].base_type_ = 0x30000000BLL;
  mysqlpp::mysql_type_info::types[46].sql_name_ = "TIME NULL";
  mysqlpp::mysql_type_info::types[49].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<mysqlpp::Set<std::set<std::string>>,mysqlpp::NullIsNull>;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[50].base_type_ = 0x2000000F9LL;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[49].base_type_ = 0x3000000F8LL;
  mysqlpp::mysql_type_info::types[51].sql_name_ = "MEDIUMBLOB NULL";
  mysqlpp::mysql_type_info::types[46].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<mysqlpp::Time,mysqlpp::NullIsNull>;
  mysqlpp::mysql_type_info::types[50].sql_name_ = "TINYBLOB NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[51].base_type_ = 0x2000000FALL;
  mysqlpp::mysql_type_info::types[47].sql_name_ = (const char *)&unk_1A2D8C31;
  mysqlpp::mysql_type_info::types[52].sql_name_ = "LONGBLOB NULL";
  mysqlpp::mysql_type_info::types[50].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<mysqlpp::String,mysqlpp::NullIsNull>;
  mysqlpp::mysql_type_info::types[51].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<mysqlpp::String,mysqlpp::NullIsNull>;
  mysqlpp::mysql_type_info::types[52].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<mysqlpp::String,mysqlpp::NullIsNull>;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[52].base_type_ = 0x2000000FBLL;
  mysqlpp::mysql_type_info::types[53].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<mysqlpp::String,mysqlpp::NullIsNull>;
  mysqlpp::mysql_type_info::types[48].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<std::string,mysqlpp::NullIsNull>;
  mysqlpp::mysql_type_info::types[53].sql_name_ = "BLOB NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[53].base_type_ = 0x3000000FCLL;
  mysqlpp::mysql_type_info::types[54].sql_name_ = "VARCHAR NULL";
  *(_QWORD *)&mysqlpp::mysql_type_info::types[54].base_type_ = 0x3000000FDLL;
  mysqlpp::mysql_type_info::types[55].sql_name_ = "CHAR NULL";
  mysqlpp::mysql_type_info::types[54].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<std::string,mysqlpp::NullIsNull>;
  mysqlpp::mysql_type_info::types[55].c_type_ = (const std::type_info *)&`typeinfo for'mysqlpp::Null<std::string,mysqlpp::NullIsNull>;
  *(_QWORD *)&mysqlpp::mysql_type_info::types[55].base_type_ = 0x2000000FELL;
  mysqlpp::mysql_ti_sql_type_info_lookup::mysql_ti_sql_type_info_lookup(
    (mysqlpp::mysql_ti_sql_type_info_lookup *)&mysqlpp::mysql_type_info::lookups,
    mysqlpp::mysql_type_info::types,
    56);
  __cxa_atexit(
    (void (__fastcall *)(void *))mysqlpp::mysql_ti_sql_type_info_lookup::~mysql_ti_sql_type_info_lookup,
    (void *)&mysqlpp::mysql_type_info::lookups,
    &_dso_handle);
};
