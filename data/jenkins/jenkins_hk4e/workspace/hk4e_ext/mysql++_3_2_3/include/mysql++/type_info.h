// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/mysql++_3_2_3/include/mysql++/type_info.h

// Line 168: range 000000000C5E7F64-000000000C5E7FCE
void __cdecl mysqlpp::mysql_type_info::mysql_type_info(
        mysqlpp::mysql_type_info *const this,
        enum_field_types t,
        bool _unsigned,
        bool _null)
{
  unsigned __int8 v5; // cl
  char v6; // dl
  _BOOL8 v7; // rsi
  bool v8; // dl

  v7 = _unsigned;
  v5 = mysqlpp::mysql_type_info::type(t, _unsigned, _null);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v6 != 0;
  v8 = v6 != 0 && ((unsigned __int8)this & 7) >= v6;
  if ( v8 )
    __asan_report_store1(this, v7, v8);
  this->num_ = v5;
};

// Line 175: range 000000000C5E7FD0-000000000C5E8058
void __cdecl mysqlpp::mysql_type_info::mysql_type_info(
        mysqlpp::mysql_type_info *const this,
        const mysqlpp::mysql_type_info *t)
{
  char v3; // dl
  __int64 v4; // rsi
  unsigned __int8 num; // cl
  char v6; // dl
  bool v7; // dl

  v3 = *(_BYTE *)(((unsigned __int64)t >> 3) + 0x7FFF8000);
  v4 = (unsigned __int8)t & 7;
  if ( v3 != 0 && (char)v4 >= v3 )
    __asan_report_load1(t);
  num = t->num_;
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = v6 != 0 && ((unsigned __int8)this & 7) >= v6;
  if ( v7 )
    __asan_report_store1(this, v4, v7);
  this->num_ = num;
};
