// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/util/internal/default_value_objectwriter.h

// Line 155: range 000000000C957A90-000000000C957B74
void __fastcall google::protobuf::util::converter::DefaultValueObjectWriter::Node::~Node(
        google::protobuf::util::converter::DefaultValueObjectWriter::Node *const this)
{
  unsigned __int64 v1; // rbp
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **M_start; // rdx
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v4; // r12
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v5; // rdi
  void (__fastcall *v6)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *const); // rax
  std::_Vector_base<std::string>::pointer M_finish; // r12
  std::_Vector_base<std::string>::pointer v8; // rbp
  std::_Vector_base<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::pointer v9; // rdi
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *M_p; // rdi

  v1 = 0LL;
  M_start = this->children_._M_impl._M_start;
  this->_vptr_Node = (int (**)(...))off_1A183DD8;
  if ( this->children_._M_impl._M_finish != M_start )
  {
    do
    {
      v4 = M_start[v1];
      if ( v4 )
      {
        v5 = M_start[v1];
        v6 = (void (__fastcall *)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *const))*((_QWORD *)v4->_vptr_Node + 1);
        if ( v6 == google::protobuf::util::converter::DefaultValueObjectWriter::Node::~Node )
        {
          google::protobuf::util::converter::DefaultValueObjectWriter::Node::~Node(v5);
          operator delete(v4, 0xA8uLL);
        }
        else
        {
          v6(v5);
        }
        M_start = this->children_._M_impl._M_start;
      }
      ++v1;
    }
    while ( this->children_._M_impl._M_finish - M_start > v1 );
  }
  M_finish = this->path_._M_impl._M_finish;
  v8 = this->path_._M_impl._M_start;
  if ( M_finish != v8 )
  {
    do
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8->_M_dataplus._M_p != &v8->_anon_0 )
        operator delete(v8->_M_dataplus._M_p);
      ++v8;
    }
    while ( M_finish != v8 );
    v8 = this->path_._M_impl._M_start;
  }
  if ( v8 )
    operator delete(v8);
  v9 = this->children_._M_impl._M_start;
  if ( v9 )
    operator delete(v9);
  M_p = (google::protobuf::util::converter::DefaultValueObjectWriter::Node *)this->name_._M_dataplus._M_p;
  if ( M_p != (google::protobuf::util::converter::DefaultValueObjectWriter::Node *)&this->name_._anon_0 )
    operator delete(M_p);
};

// Line 155: range 000000000C957B80-000000000C957C64
void __fastcall google::protobuf::util::converter::DefaultValueObjectWriter::Node::~Node(
        google::protobuf::util::converter::DefaultValueObjectWriter::Node *const this)
{
  unsigned __int64 v2; // rbx
  google::protobuf::util::converter::DefaultValueObjectWriter::Node **M_start; // rax
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v4; // r12
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *v5; // rdi
  void (__fastcall *v6)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *const); // rax
  std::_Vector_base<std::string>::pointer M_finish; // rbx
  std::_Vector_base<std::string>::pointer v8; // r12
  std::_Vector_base<google::protobuf::util::converter::DefaultValueObjectWriter::Node*>::pointer v9; // rdi
  google::protobuf::util::converter::DefaultValueObjectWriter::Node *M_p; // rdi

  v2 = 0LL;
  M_start = this->children_._M_impl._M_start;
  this->_vptr_Node = (int (**)(...))off_1A183DD8;
  if ( this->children_._M_impl._M_finish != M_start )
  {
    do
    {
      v4 = M_start[v2];
      if ( v4 )
      {
        v5 = M_start[v2];
        v6 = (void (__fastcall *)(google::protobuf::util::converter::DefaultValueObjectWriter::Node *const))*((_QWORD *)v4->_vptr_Node + 1);
        if ( v6 == google::protobuf::util::converter::DefaultValueObjectWriter::Node::~Node )
        {
          google::protobuf::util::converter::DefaultValueObjectWriter::Node::~Node(v5);
          operator delete(v4, 0xA8uLL);
        }
        else
        {
          v6(v5);
        }
        M_start = this->children_._M_impl._M_start;
      }
      ++v2;
    }
    while ( this->children_._M_impl._M_finish - M_start > v2 );
  }
  M_finish = this->path_._M_impl._M_finish;
  v8 = this->path_._M_impl._M_start;
  if ( M_finish != v8 )
  {
    do
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8->_M_dataplus._M_p != &v8->_anon_0 )
        operator delete(v8->_M_dataplus._M_p);
      ++v8;
    }
    while ( M_finish != v8 );
    v8 = this->path_._M_impl._M_start;
  }
  if ( v8 )
    operator delete(v8);
  v9 = this->children_._M_impl._M_start;
  if ( v9 )
    operator delete(v9);
  M_p = (google::protobuf::util::converter::DefaultValueObjectWriter::Node *)this->name_._M_dataplus._M_p;
  if ( M_p != (google::protobuf::util::converter::DefaultValueObjectWriter::Node *)&this->name_._anon_0 )
    operator delete(M_p);
  operator delete(this, 0xA8uLL);
};
