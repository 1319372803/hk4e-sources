// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql++_3_2_3/lib/field.h

// Line 46: range 000000000CF8A790-000000000CF8A7D1
void __fastcall mysqlpp::Field::~Field(mysqlpp::Field *const this)
{
  mysqlpp::Field *M_p; // rdi
  mysqlpp::Field *v3; // rdi

  M_p = (mysqlpp::Field *)this->db_._M_dataplus._M_p;
  if ( M_p != (mysqlpp::Field *)&this->db_._anon_0 )
    operator delete(M_p);
  v3 = (mysqlpp::Field *)this->table_._M_dataplus._M_p;
  if ( v3 != (mysqlpp::Field *)&this->table_._anon_0 )
    operator delete(v3);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)this->name_._M_dataplus._M_p != &this->name_._anon_0 )
    operator delete(this->name_._M_dataplus._M_p);
};
