// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/stubs/stl_util.h

// Line 54: range 000000000C919C30-000000000C919C70
void __fastcall google::protobuf::STLDeleteContainerPointers<__gnu_cxx::__normal_iterator<google::protobuf::FileDescriptorTables **,std::vector<google::protobuf::FileDescriptorTables *>>>(
        __gnu_cxx::__normal_iterator<google::protobuf::FileDescriptorTables**,std::vector<google::protobuf::FileDescriptorTables*> > begin,
        __gnu_cxx::__normal_iterator<google::protobuf::FileDescriptorTables**,std::vector<google::protobuf::FileDescriptorTables*> > end)
{
  google::protobuf::FileDescriptorTables **M_current; // rbx
  google::protobuf::FileDescriptorTables *v3; // rbp

  if ( end._M_current != begin._M_current )
  {
    M_current = begin._M_current;
    do
    {
      v3 = *M_current;
      if ( *M_current )
      {
        google::protobuf::FileDescriptorTables::~FileDescriptorTables(*M_current);
        operator delete(v3, 0x198uLL);
      }
      ++M_current;
    }
    while ( end._M_current != M_current );
  }
};

// Line 54: range 000000000C919BE0-000000000C919C28
void __fastcall google::protobuf::STLDeleteContainerPointers<__gnu_cxx::__normal_iterator<std::string **,std::vector<std::string *>>>(
        __gnu_cxx::__normal_iterator<std::string**,std::vector<std::string*> > begin,
        __gnu_cxx::__normal_iterator<std::string**,std::vector<std::string*> > end)
{
  std::string **M_current; // rbx
  std::string *v3; // rbp

  if ( end._M_current != begin._M_current )
  {
    M_current = begin._M_current;
    do
    {
      v3 = *M_current;
      if ( *M_current )
      {
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v3->_M_dataplus._M_p != &v3->_anon_0 )
          operator delete(v3->_M_dataplus._M_p);
        operator delete(v3, 0x20uLL);
      }
      ++M_current;
    }
    while ( end._M_current != M_current );
  }
};
