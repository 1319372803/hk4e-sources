// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/compiler/parser.cc

// Line 62: range 0000000000438AC0-0000000000438E9E
std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *__fastcall google::protobuf::compiler::`anonymous namespace'::MakeTypeNameTable(
        std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *this)
{
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *buckets; // rbp
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *v3; // rdi
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,true> > > *bkt; // rax
  const std::allocator<char> *v5; // rdx
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,true> > > *v6; // rbx
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v7; // rax
  const std::allocator<char> *v8; // rdx
  std::string *M_p; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v10; // rax
  const std::allocator<char> *v11; // rdx
  std::string *v12; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v13; // rax
  const std::allocator<char> *v14; // rdx
  std::string *v15; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v16; // rax
  const std::allocator<char> *v17; // rdx
  std::string *v18; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v19; // rax
  const std::allocator<char> *v20; // rdx
  std::string *v21; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v22; // rax
  const std::allocator<char> *v23; // rdx
  std::string *v24; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v25; // rax
  const std::allocator<char> *v26; // rdx
  std::string *v27; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v28; // rax
  const std::allocator<char> *v29; // rdx
  std::string *v30; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v31; // rax
  const std::allocator<char> *v32; // rdx
  std::string *v33; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v34; // rax
  const std::allocator<char> *v35; // rdx
  std::string *v36; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v37; // rax
  const std::allocator<char> *v38; // rdx
  std::string *v39; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v40; // rax
  const std::allocator<char> *v41; // rdx
  std::string *v42; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v43; // rax
  const std::allocator<char> *v44; // rdx
  std::string *v45; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v46; // rax
  const std::allocator<char> *v47; // rdx
  std::string *v48; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v49; // rax
  const std::allocator<char> *v50; // rdx
  std::string *v51; // rdi
  std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::mapped_type *v52; // rax
  std::string *v53; // rdi
  std::string v55; // [rsp+0h] [rbp-38h] BYREF

  buckets = this + 48;
  v3 = this + 32;
  *(_QWORD *)v3[-32].gap0 = buckets;
  *(_QWORD *)v3[-24].gap0 = 1LL;
  *(_QWORD *)v3[-16].gap0 = 0LL;
  *(_QWORD *)v3[-8].gap0 = 0LL;
  *(_DWORD *)v3->gap0 = 1065353216;
  *(_QWORD *)v3[8].gap0 = 0LL;
  *(_QWORD *)v3[16].gap0 = 0LL;
  bkt = (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,true> > > *)std::__detail::_Prime_rehash_policy::_M_next_bkt((std::__detail::_Prime_rehash_policy *)v3, 0LL);
  v6 = bkt;
  if ( (unsigned __int64)bkt > *(_QWORD *)this[8].gap0 )
  {
    if ( bkt == (std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,true> > > *)1 )
      *(_QWORD *)this[48].gap0 = 0LL;
    else
      buckets = (std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *)std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>,true>>>::_M_allocate_buckets(bkt, 0LL);
    *(_QWORD *)this->gap0 = buckets;
    *(_QWORD *)this[8].gap0 = v6;
  }
  std::string::basic_string(&v55, "double", v5);
  v7 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
         this,
         &v55);
  M_p = (std::string *)v55._M_dataplus._M_p;
  *v7 = FieldDescriptorProto_Type_TYPE_DOUBLE;
  if ( M_p != (std::string *)&v55._anon_0 )
    operator delete(M_p);
  std::string::basic_string(&v55, "float", v8);
  v10 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          this,
          &v55);
  v12 = (std::string *)v55._M_dataplus._M_p;
  *v10 = FieldDescriptorProto_Type_TYPE_FLOAT;
  if ( v12 != (std::string *)&v55._anon_0 )
    operator delete(v12);
  std::string::basic_string(&v55, "uint64", v11);
  v13 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          this,
          &v55);
  v15 = (std::string *)v55._M_dataplus._M_p;
  *v13 = FieldDescriptorProto_Type_TYPE_UINT64;
  if ( v15 != (std::string *)&v55._anon_0 )
    operator delete(v15);
  std::string::basic_string(&v55, "fixed64", v14);
  v16 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          this,
          &v55);
  v18 = (std::string *)v55._M_dataplus._M_p;
  *v16 = FieldDescriptorProto_Type_TYPE_FIXED64;
  if ( v18 != (std::string *)&v55._anon_0 )
    operator delete(v18);
  std::string::basic_string(&v55, "fixed32", v17);
  v19 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          this,
          &v55);
  v21 = (std::string *)v55._M_dataplus._M_p;
  *v19 = FieldDescriptorProto_Type_TYPE_FIXED32;
  if ( v21 != (std::string *)&v55._anon_0 )
    operator delete(v21);
  std::string::basic_string(&v55, "bool", v20);
  v22 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          this,
          &v55);
  v24 = (std::string *)v55._M_dataplus._M_p;
  *v22 = FieldDescriptorProto_Type_TYPE_BOOL;
  if ( v24 != (std::string *)&v55._anon_0 )
    operator delete(v24);
  std::string::basic_string(&v55, "string", v23);
  v25 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          this,
          &v55);
  v27 = (std::string *)v55._M_dataplus._M_p;
  *v25 = FieldDescriptorProto_Type_TYPE_STRING;
  if ( v27 != (std::string *)&v55._anon_0 )
    operator delete(v27);
  std::string::basic_string(&v55, "group", v26);
  v28 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          this,
          &v55);
  v30 = (std::string *)v55._M_dataplus._M_p;
  *v28 = FieldDescriptorProto_Type_TYPE_GROUP;
  if ( v30 != (std::string *)&v55._anon_0 )
    operator delete(v30);
  std::string::basic_string(&v55, "bytes", v29);
  v31 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          this,
          &v55);
  v33 = (std::string *)v55._M_dataplus._M_p;
  *v31 = FieldDescriptorProto_Type_TYPE_BYTES;
  if ( v33 != (std::string *)&v55._anon_0 )
    operator delete(v33);
  std::string::basic_string(&v55, "uint32", v32);
  v34 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          this,
          &v55);
  v36 = (std::string *)v55._M_dataplus._M_p;
  *v34 = FieldDescriptorProto_Type_TYPE_UINT32;
  if ( v36 != (std::string *)&v55._anon_0 )
    operator delete(v36);
  std::string::basic_string(&v55, "sfixed32", v35);
  v37 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          this,
          &v55);
  v39 = (std::string *)v55._M_dataplus._M_p;
  *v37 = FieldDescriptorProto_Type_TYPE_SFIXED32;
  if ( v39 != (std::string *)&v55._anon_0 )
    operator delete(v39);
  std::string::basic_string(&v55, "sfixed64", v38);
  v40 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          this,
          &v55);
  v42 = (std::string *)v55._M_dataplus._M_p;
  *v40 = FieldDescriptorProto_Type_TYPE_SFIXED64;
  if ( v42 != (std::string *)&v55._anon_0 )
    operator delete(v42);
  std::string::basic_string(&v55, "int32", v41);
  v43 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          this,
          &v55);
  v45 = (std::string *)v55._M_dataplus._M_p;
  *v43 = FieldDescriptorProto_Type_TYPE_INT32;
  if ( v45 != (std::string *)&v55._anon_0 )
    operator delete(v45);
  std::string::basic_string(&v55, "int64", v44);
  v46 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          this,
          &v55);
  v48 = (std::string *)v55._M_dataplus._M_p;
  *v46 = FieldDescriptorProto_Type_TYPE_INT64;
  if ( v48 != (std::string *)&v55._anon_0 )
    operator delete(v48);
  std::string::basic_string(&v55, "sint32", v47);
  v49 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          this,
          &v55);
  v51 = (std::string *)v55._M_dataplus._M_p;
  *v49 = FieldDescriptorProto_Type_TYPE_SINT32;
  if ( v51 != (std::string *)&v55._anon_0 )
    operator delete(v51);
  std::string::basic_string(&v55, "sint64", v50);
  v52 = std::__detail::_Map_base<std::string,std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          this,
          &v55);
  v53 = (std::string *)v55._M_dataplus._M_p;
  *v52 = FieldDescriptorProto_Type_TYPE_SINT64;
  if ( v53 != (std::string *)&v55._anon_0 )
    operator delete(v53);
  return this;
};

// Line 129: range 000000000DC02DA0-000000000DC02E01
void __fastcall google::protobuf::compiler::Parser::Parser(google::protobuf::compiler::Parser *const this)
{
  this->input_ = 0LL;
  *(_WORD *)&this->had_errors_ = 0;
  this->syntax_identifier_._M_dataplus._M_p = this->syntax_identifier_._anon_0._M_local_buf;
  this->error_collector_ = 0LL;
  this->source_location_table_ = 0LL;
  this->stop_after_syntax_identifier_ = 0;
  this->syntax_identifier_._M_string_length = 0LL;
  this->syntax_identifier_._anon_0._M_local_buf[0] = 0;
  this->upcoming_doc_comments_._M_dataplus._M_p = this->upcoming_doc_comments_._anon_0._M_local_buf;
  this->upcoming_doc_comments_._M_string_length = 0LL;
  this->upcoming_doc_comments_._anon_0._M_local_buf[0] = 0;
  this->upcoming_detached_comments_._M_impl._M_start = 0LL;
  this->upcoming_detached_comments_._M_impl._M_finish = 0LL;
  this->upcoming_detached_comments_._M_impl._M_end_of_storage = 0LL;
};

// Line 132: range 000000000DC02E10-000000000DC02E84
void __fastcall google::protobuf::compiler::Parser::~Parser(google::protobuf::compiler::Parser *const this)
{
  std::_Vector_base<std::string>::pointer M_finish; // r12
  std::_Vector_base<std::string>::pointer M_start; // rbp
  google::protobuf::compiler::Parser *M_p; // rdi
  google::protobuf::compiler::Parser *v5; // rdi

  M_finish = this->upcoming_detached_comments_._M_impl._M_finish;
  M_start = this->upcoming_detached_comments_._M_impl._M_start;
  if ( M_finish != M_start )
  {
    do
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)M_start->_M_dataplus._M_p != &M_start->_anon_0 )
        operator delete(M_start->_M_dataplus._M_p);
      ++M_start;
    }
    while ( M_finish != M_start );
    M_start = this->upcoming_detached_comments_._M_impl._M_start;
  }
  if ( M_start )
    operator delete(M_start);
  M_p = (google::protobuf::compiler::Parser *)this->upcoming_doc_comments_._M_dataplus._M_p;
  if ( M_p != (google::protobuf::compiler::Parser *)&this->upcoming_doc_comments_._anon_0 )
    operator delete(M_p);
  v5 = (google::protobuf::compiler::Parser *)this->syntax_identifier_._M_dataplus._M_p;
  if ( v5 != (google::protobuf::compiler::Parser *)&this->syntax_identifier_._anon_0 )
    operator delete(v5);
};

// Line 142: range 000000000DC06B90-000000000DC06BF0
void __fastcall google::protobuf::compiler::Parser::SkipRestOfBlock(google::protobuf::compiler::Parser *const this)
{
  google::protobuf::io::Tokenizer::TokenType i; // eax

  for ( i = this->input_->current_.type; i != TYPE_END; i = this->input_->current_.type )
  {
    if ( i == TYPE_SYMBOL )
    {
      if ( (unsigned __int8)google::protobuf::compiler::Parser::TryConsumeEndOfDeclaration(this, "}", 0LL) )
        return;
      if ( google::protobuf::compiler::Parser::TryConsume(this, "{") )
        google::protobuf::compiler::Parser::SkipRestOfBlock(this);
    }
    google::protobuf::io::Tokenizer::Next(this->input_);
  }
};

// Line 142: range 000000000DC06C00-000000000DC06C6E
void __fastcall google::protobuf::compiler::Parser::SkipStatement(google::protobuf::compiler::Parser *const this)
{
  google::protobuf::io::Tokenizer::TokenType i; // eax

  for ( i = this->input_->current_.type; i != TYPE_END; i = this->input_->current_.type )
  {
    if ( i == TYPE_SYMBOL )
    {
      if ( (unsigned __int8)google::protobuf::compiler::Parser::TryConsumeEndOfDeclaration(this, ";", 0LL) )
        return;
      if ( google::protobuf::compiler::Parser::TryConsume(this, "{") )
      {
        google::protobuf::compiler::Parser::SkipRestOfBlock(this);
        return;
      }
      if ( !std::string::compare(&this->input_->current_.text, "}") )
        return;
    }
    google::protobuf::io::Tokenizer::Next(this->input_);
  }
};

// Line 149: range 000000000DC02E90-000000000DC02EBE
bool __fastcall google::protobuf::compiler::Parser::TryConsume(
        google::protobuf::compiler::Parser *const this,
        const char *text)
{
  int v2; // r8d
  bool result; // al

  v2 = std::string::compare(&this->input_->current_.text, text);
  result = 0;
  if ( !v2 )
  {
    google::protobuf::io::Tokenizer::Next(this->input_);
    return 1;
  }
  return result;
};

// Line 158: range 000000000DC02EC0-000000000DC02FDA
__int64 __fastcall google::protobuf::compiler::Parser::Consume(
        google::protobuf::compiler::Parser *this,
        const char *a2,
        const char *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // r12d
  size_t v8; // rax
  size_t v9; // r13
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdx
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  std::string *v12; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::size_type __capacity; // [rsp+8h] [rbp-50h] BYREF
  std::string v15; // [rsp+10h] [rbp-48h] BYREF

  LOBYTE(v5) = google::protobuf::compiler::Parser::TryConsume(this, a2);
  v6 = v5;
  if ( (_BYTE)v5 )
    return v6;
  v15._M_dataplus._M_p = v15._anon_0._M_local_buf;
  if ( !a3 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v8 = strlen(a3);
  __capacity = v8;
  v9 = v8;
  if ( v8 > 0xF )
  {
    v15._M_dataplus._M_p = std::string::_M_create(&v15, &__capacity, 0LL);
    M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15._M_dataplus._M_p;
    v15._anon_0._M_allocated_capacity = __capacity;
  }
  else
  {
    if ( v8 == 1 )
    {
      v15._anon_0._M_local_buf[0] = *a3;
      p_anon_0 = &v15._anon_0;
      goto LABEL_7;
    }
    if ( !v8 )
    {
      p_anon_0 = &v15._anon_0;
      goto LABEL_7;
    }
    M_p = &v15._anon_0;
  }
  memcpy(M_p, a3, v9);
  v8 = __capacity;
  p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15._M_dataplus._M_p;
LABEL_7:
  v15._M_string_length = v8;
  p_anon_0->_M_local_buf[v8] = 0;
  error_collector = this->error_collector_;
  if ( error_collector )
    (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))error_collector->_vptr_ErrorCollector
     + 2))(
      error_collector,
      (unsigned int)this->input_->current_.line,
      (unsigned int)this->input_->current_.column,
      &v15);
  v12 = (std::string *)v15._M_dataplus._M_p;
  this->had_errors_ = 1;
  if ( v12 == (std::string *)&v15._anon_0 )
    return v6;
  operator delete(v12);
  return v6;
};

// Line 167: range 000000000DC02FE0-000000000DC0321C
__int64 __fastcall google::protobuf::compiler::Parser::Consume(
        google::protobuf::compiler::Parser *this,
        const char *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // r12d
  size_t v6; // rax
  size_t v7; // r14
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdx
  std::string *v9; // rax
  std::string::size_type M_string_length; // rcx
  __m128i *v11; // rax
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  __int128 *v13; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string v15; // [rsp+0h] [rbp-88h] BYREF
  std::string v16; // [rsp+20h] [rbp-68h] BYREF
  std::string::size_type __capacity[2]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v18[3]; // [rsp+50h] [rbp-38h] BYREF

  LOBYTE(v3) = google::protobuf::compiler::Parser::TryConsume(this, a2);
  v4 = v3;
  if ( (_BYTE)v3 )
    return v4;
  v15._M_dataplus._M_p = v15._anon_0._M_local_buf;
  if ( !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v6 = strlen(a2);
  __capacity[0] = v6;
  v7 = v6;
  if ( v6 > 0xF )
  {
    v15._M_dataplus._M_p = std::string::_M_create(&v15, __capacity, 0LL);
    M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15._M_dataplus._M_p;
    v15._anon_0._M_allocated_capacity = __capacity[0];
  }
  else
  {
    if ( v6 == 1 )
    {
      v15._anon_0._M_local_buf[0] = *a2;
      p_anon_0 = &v15._anon_0;
      goto LABEL_7;
    }
    if ( !v6 )
    {
      p_anon_0 = &v15._anon_0;
      goto LABEL_7;
    }
    M_p = &v15._anon_0;
  }
  memcpy(M_p, a2, v7);
  v6 = __capacity[0];
  p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15._M_dataplus._M_p;
LABEL_7:
  v15._M_string_length = v6;
  p_anon_0->_M_local_buf[v6] = 0;
  v9 = std::string::_M_replace(&v15, 0LL, 0LL, "Expected \"", 0xAuLL);
  v16._M_dataplus._M_p = v16._anon_0._M_local_buf;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9->_M_dataplus._M_p == &v9->_anon_0 )
  {
    v16._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)&v9->_anon_0);
  }
  else
  {
    v16._M_dataplus._M_p = v9->_M_dataplus._M_p;
    v16._anon_0._M_allocated_capacity = v9->_anon_0._M_allocated_capacity;
  }
  M_string_length = v9->_M_string_length;
  v9->_anon_0._M_local_buf[0] = 0;
  v16._M_string_length = M_string_length;
  v9->_M_string_length = 0LL;
  v9->_M_dataplus._M_p = v9->_anon_0._M_local_buf;
  if ( v16._M_string_length == 0x3FFFFFFFFFFFFFFFLL || v16._M_string_length == 4611686018427387902LL )
    std::__throw_length_error("basic_string::append");
  v11 = (__m128i *)std::string::_M_append(&v16, "\".", 2uLL);
  __capacity[0] = (std::string::size_type)v18;
  if ( (__m128i *)v11->m128i_i64[0] == &v11[1] )
  {
    v18[0] = (__int128)_mm_loadu_si128(v11 + 1);
  }
  else
  {
    __capacity[0] = v11->m128i_i64[0];
    *(_QWORD *)&v18[0] = v11[1].m128i_i64[0];
  }
  __capacity[1] = v11->m128i_u64[1];
  v11[1].m128i_i8[0] = 0;
  error_collector = this->error_collector_;
  v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
  v11->m128i_i64[1] = 0LL;
  if ( error_collector )
    (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string::size_type *))error_collector->_vptr_ErrorCollector
     + 2))(
      error_collector,
      (unsigned int)this->input_->current_.line,
      (unsigned int)this->input_->current_.column,
      __capacity);
  v13 = (__int128 *)__capacity[0];
  this->had_errors_ = 1;
  if ( v13 != v18 )
    operator delete(v13);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v16._M_dataplus._M_p != &v16._anon_0 )
    operator delete(v16._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15._M_dataplus._M_p == &v15._anon_0 )
    return v4;
  operator delete(v15._M_dataplus._M_p);
  return v4;
};

// Line 176: range 000000000DC03230-000000000DC03359
__int64 __fastcall google::protobuf::compiler::Parser::ConsumeIdentifier(__int64 a1, std::string *a2, const char *a3)
{
  size_t v5; // rax
  size_t v6; // r12
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdx
  __int64 v8; // rdi
  std::string *v9; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::size_type __capacity; // [rsp+8h] [rbp-50h] BYREF
  std::string v13; // [rsp+10h] [rbp-48h] BYREF

  if ( **(_DWORD **)a1 == 2 )
  {
    std::string::_M_assign(a2, (const std::string *)(*(_QWORD *)a1 + 8LL));
    google::protobuf::io::Tokenizer::Next(*(google::protobuf::io::Tokenizer **)a1);
    return 1LL;
  }
  v13._M_dataplus._M_p = v13._anon_0._M_local_buf;
  if ( !a3 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v5 = strlen(a3);
  __capacity = v5;
  v6 = v5;
  if ( v5 > 0xF )
  {
    v13._M_dataplus._M_p = std::string::_M_create(&v13, &__capacity, 0LL);
    M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v13._M_dataplus._M_p;
    v13._anon_0._M_allocated_capacity = __capacity;
    goto LABEL_14;
  }
  if ( v5 != 1 )
  {
    if ( !v5 )
    {
      p_anon_0 = &v13._anon_0;
      goto LABEL_6;
    }
    M_p = &v13._anon_0;
LABEL_14:
    memcpy(M_p, a3, v6);
    v5 = __capacity;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v13._M_dataplus._M_p;
    goto LABEL_6;
  }
  v13._anon_0._M_local_buf[0] = *a3;
  p_anon_0 = &v13._anon_0;
LABEL_6:
  v13._M_string_length = v5;
  p_anon_0->_M_local_buf[v5] = 0;
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, std::string *))(*(_QWORD *)v8 + 16LL))(
      v8,
      *(unsigned int *)(*(_QWORD *)a1 + 40LL),
      *(unsigned int *)(*(_QWORD *)a1 + 44LL),
      &v13);
  v9 = (std::string *)v13._M_dataplus._M_p;
  *(_BYTE *)(a1 + 32) = 1;
  if ( v9 != (std::string *)&v13._anon_0 )
    operator delete(v9);
  return 0LL;
};

// Line 187: range 000000000DC03360-000000000DC0353D
__int64 __fastcall google::protobuf::compiler::Parser::ConsumeInteger(
        google::protobuf::compiler::Parser *this,
        int *a2,
        const char *a3)
{
  google::protobuf::io::Tokenizer *input; // rdi
  size_t v6; // rax
  size_t v7; // r12
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdx
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  std::string *v10; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::pointer v13; // rax
  __m128i si128; // xmm0
  google::protobuf::io::ErrorCollector *v15; // rdi
  std::string *v16; // rdi
  google::protobuf::io::Tokenizer *v17; // rdi
  google::protobuf::uint64 v18; // [rsp+0h] [rbp-58h] BYREF
  std::string::size_type __capacity; // [rsp+8h] [rbp-50h] BYREF
  std::string v20; // [rsp+10h] [rbp-48h] BYREF

  input = this->input_;
  if ( input->current_.type != TYPE_INTEGER )
  {
    v20._M_dataplus._M_p = v20._anon_0._M_local_buf;
    if ( !a3 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v6 = strlen(a3);
    __capacity = v6;
    v7 = v6;
    if ( v6 > 0xF )
    {
      v20._M_dataplus._M_p = std::string::_M_create(&v20, &__capacity, 0LL);
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v20._M_dataplus._M_p;
      v20._anon_0._M_allocated_capacity = __capacity;
    }
    else
    {
      if ( v6 == 1 )
      {
        v20._anon_0._M_local_buf[0] = *a3;
        p_anon_0 = &v20._anon_0;
LABEL_6:
        v20._M_string_length = v6;
        p_anon_0->_M_local_buf[v6] = 0;
        error_collector = this->error_collector_;
        if ( error_collector )
          (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))error_collector->_vptr_ErrorCollector
           + 2))(
            error_collector,
            (unsigned int)this->input_->current_.line,
            (unsigned int)this->input_->current_.column,
            &v20);
        v10 = (std::string *)v20._M_dataplus._M_p;
        this->had_errors_ = 1;
        if ( v10 != (std::string *)&v20._anon_0 )
          operator delete(v10);
        return 0LL;
      }
      if ( !v6 )
      {
        p_anon_0 = &v20._anon_0;
        goto LABEL_6;
      }
      M_p = &v20._anon_0;
    }
    memcpy(M_p, a3, v7);
    v6 = __capacity;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v20._M_dataplus._M_p;
    goto LABEL_6;
  }
  v18 = 0LL;
  if ( !google::protobuf::io::Tokenizer::ParseInteger(&input->current_.text, 0x7FFFFFFFuLL, &v18) )
  {
    __capacity = 21LL;
    v20._M_dataplus._M_p = v20._anon_0._M_local_buf;
    v13 = std::string::_M_create(&v20, &__capacity, 0LL);
    si128 = _mm_load_si128((const __m128i *)&xmmword_F6EDE00);
    v20._M_dataplus._M_p = v13;
    v20._anon_0._M_allocated_capacity = __capacity;
    *((_DWORD *)v13 + 4) = 1701277281;
    v13[20] = 46;
    *(__m128i *)v13 = si128;
    v20._M_string_length = __capacity;
    v20._M_dataplus._M_p[__capacity] = 0;
    v15 = this->error_collector_;
    if ( v15 )
      (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))v15->_vptr_ErrorCollector
       + 2))(
        v15,
        (unsigned int)this->input_->current_.line,
        (unsigned int)this->input_->current_.column,
        &v20);
    v16 = (std::string *)v20._M_dataplus._M_p;
    this->had_errors_ = 1;
    if ( v16 != (std::string *)&v20._anon_0 )
      operator delete(v16);
  }
  v17 = this->input_;
  *a2 = v18;
  google::protobuf::io::Tokenizer::Next(v17);
  return 1LL;
};

// Line 204: range 000000000DC03730-000000000DC037C5
bool __fastcall google::protobuf::compiler::Parser::ConsumeSignedInteger(
        google::protobuf::compiler::Parser *const this,
        int *output,
        const char *error)
{
  unsigned __int64 v4; // rax
  char v6; // r8
  unsigned __int64 v7[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( google::protobuf::compiler::Parser::TryConsume(this, "-") )
  {
    v7[0] = 0LL;
    if ( (unsigned __int8)google::protobuf::compiler::Parser::ConsumeInteger64(this, 0x80000000uLL, v7, error) )
    {
      v4 = -v7[0];
LABEL_4:
      *output = v4;
      return 1;
    }
  }
  else
  {
    v7[0] = 0LL;
    v6 = google::protobuf::compiler::Parser::ConsumeInteger64(this, 0x7FFFFFFFuLL, v7, error);
    LODWORD(v4) = v7[0];
    if ( v6 )
      goto LABEL_4;
  }
  return 0;
};

// Line 219: range 000000000DC03550-000000000DC0371D
__int64 __fastcall google::protobuf::compiler::Parser::ConsumeInteger64(
        google::protobuf::compiler::Parser *this,
        google::protobuf::uint64 a2,
        unsigned __int64 *a3,
        const char *a4)
{
  google::protobuf::io::Tokenizer *input; // rdi
  size_t v7; // rax
  size_t v8; // r12
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdx
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  std::string *v11; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string::pointer v15; // rax
  __m128i si128; // xmm0
  google::protobuf::io::ErrorCollector *v17; // rdi
  std::string *v18; // rdi
  std::string::size_type __capacity; // [rsp+8h] [rbp-50h] BYREF
  std::string v20; // [rsp+10h] [rbp-48h] BYREF

  input = this->input_;
  if ( input->current_.type != TYPE_INTEGER )
  {
    v20._M_dataplus._M_p = v20._anon_0._M_local_buf;
    if ( !a4 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v7 = strlen(a4);
    __capacity = v7;
    v8 = v7;
    if ( v7 > 0xF )
    {
      v20._M_dataplus._M_p = std::string::_M_create(&v20, &__capacity, 0LL);
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v20._M_dataplus._M_p;
      v20._anon_0._M_allocated_capacity = __capacity;
    }
    else
    {
      if ( v7 == 1 )
      {
        v20._anon_0._M_local_buf[0] = *a4;
        p_anon_0 = &v20._anon_0;
LABEL_6:
        v20._M_string_length = v7;
        p_anon_0->_M_local_buf[v7] = 0;
        error_collector = this->error_collector_;
        if ( error_collector )
          (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))error_collector->_vptr_ErrorCollector
           + 2))(
            error_collector,
            (unsigned int)this->input_->current_.line,
            (unsigned int)this->input_->current_.column,
            &v20);
        v11 = (std::string *)v20._M_dataplus._M_p;
        this->had_errors_ = 1;
        if ( v11 != (std::string *)&v20._anon_0 )
          operator delete(v11);
        return 0LL;
      }
      if ( !v7 )
      {
        p_anon_0 = &v20._anon_0;
        goto LABEL_6;
      }
      M_p = &v20._anon_0;
    }
    memcpy(M_p, a4, v8);
    v7 = __capacity;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v20._M_dataplus._M_p;
    goto LABEL_6;
  }
  if ( !google::protobuf::io::Tokenizer::ParseInteger(&input->current_.text, a2, a3) )
  {
    __capacity = 21LL;
    v20._M_dataplus._M_p = v20._anon_0._M_local_buf;
    v15 = std::string::_M_create(&v20, &__capacity, 0LL);
    si128 = _mm_load_si128((const __m128i *)&xmmword_F6EDE00);
    v20._M_dataplus._M_p = v15;
    v20._anon_0._M_allocated_capacity = __capacity;
    *((_DWORD *)v15 + 4) = 1701277281;
    v15[20] = 46;
    *(__m128i *)v15 = si128;
    v20._M_string_length = __capacity;
    v20._M_dataplus._M_p[__capacity] = 0;
    v17 = this->error_collector_;
    if ( v17 )
      (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))v17->_vptr_ErrorCollector
       + 2))(
        v17,
        (unsigned int)this->input_->current_.line,
        (unsigned int)this->input_->current_.column,
        &v20);
    v18 = (std::string *)v20._M_dataplus._M_p;
    this->had_errors_ = 1;
    if ( v18 != (std::string *)&v20._anon_0 )
      operator delete(v18);
    *a3 = 0LL;
  }
  google::protobuf::io::Tokenizer::Next(this->input_);
  return 1LL;
};

// Line 235: range 000000000DC037D0-000000000DC03AA8
__int64 __fastcall google::protobuf::compiler::Parser::ConsumeNumber(
        google::protobuf::compiler::Parser *this,
        double *a2,
        const char *a3)
{
  google::protobuf::io::Tokenizer *input; // rdi
  google::protobuf::io::Tokenizer::TokenType type; // eax
  const std::string *p_text; // rdi
  size_t v8; // rax
  size_t v9; // r13
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdx
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  std::string *v12; // rdi
  std::string::pointer v14; // rax
  __m128i si128; // xmm0
  google::protobuf::io::ErrorCollector *v16; // rdi
  std::string *v17; // rdi
  double v18; // xmm0_8
  google::protobuf::io::Tokenizer *v19; // rdi
  google::protobuf::io::Tokenizer *v20; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  google::protobuf::io::Tokenizer *v22; // rdi
  double v23; // xmm0_8
  google::protobuf::io::Tokenizer *v24; // rdi
  __int64 v25; // [rsp+0h] [rbp-58h] BYREF
  std::string::size_type __capacity; // [rsp+8h] [rbp-50h] BYREF
  std::string v27; // [rsp+10h] [rbp-48h] BYREF

  input = this->input_;
  type = input->current_.type;
  p_text = &input->current_.text;
  if ( type == TYPE_FLOAT_1 )
  {
    v23 = google::protobuf::io::Tokenizer::ParseFloat(p_text, a2, a3);
    v24 = this->input_;
    *a2 = v23;
    google::protobuf::io::Tokenizer::Next(v24);
    return 1LL;
  }
  if ( type != TYPE_INTEGER )
  {
    if ( !std::string::compare(p_text, "inf") )
    {
      v20 = this->input_;
      *a2 = INFINITY;
      google::protobuf::io::Tokenizer::Next(v20);
      return 1LL;
    }
    if ( !std::string::compare(&this->input_->current_.text, off_DF5CB10) )
    {
      v22 = this->input_;
      *a2 = NAN;
      google::protobuf::io::Tokenizer::Next(v22);
      return 1LL;
    }
    v27._M_dataplus._M_p = v27._anon_0._M_local_buf;
    if ( !a3 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v8 = strlen(a3);
    __capacity = v8;
    v9 = v8;
    if ( v8 > 0xF )
    {
      v27._M_dataplus._M_p = std::string::_M_create(&v27, &__capacity, 0LL);
      M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v27._M_dataplus._M_p;
      v27._anon_0._M_allocated_capacity = __capacity;
    }
    else
    {
      if ( v8 == 1 )
      {
        v27._anon_0._M_local_buf[0] = *a3;
        p_anon_0 = &v27._anon_0;
LABEL_9:
        v27._M_string_length = v8;
        p_anon_0->_M_local_buf[v8] = 0;
        error_collector = this->error_collector_;
        if ( error_collector )
          (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))error_collector->_vptr_ErrorCollector
           + 2))(
            error_collector,
            (unsigned int)this->input_->current_.line,
            (unsigned int)this->input_->current_.column,
            &v27);
        v12 = (std::string *)v27._M_dataplus._M_p;
        this->had_errors_ = 1;
        if ( v12 != (std::string *)&v27._anon_0 )
          operator delete(v12);
        return 0LL;
      }
      if ( !v8 )
      {
        p_anon_0 = &v27._anon_0;
        goto LABEL_9;
      }
      M_p = &v27._anon_0;
    }
    memcpy(M_p, a3, v9);
    v8 = __capacity;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v27._M_dataplus._M_p;
    goto LABEL_9;
  }
  v25 = 0LL;
  if ( !google::protobuf::io::Tokenizer::ParseInteger(p_text, 0xFFFFFFFFFFFFFFFFLL, (google::protobuf::uint64 *)&v25) )
  {
    __capacity = 21LL;
    v27._M_dataplus._M_p = v27._anon_0._M_local_buf;
    v14 = std::string::_M_create(&v27, &__capacity, 0LL);
    si128 = _mm_load_si128((const __m128i *)&xmmword_F6EDE00);
    v27._M_dataplus._M_p = v14;
    v27._anon_0._M_allocated_capacity = __capacity;
    *((_DWORD *)v14 + 4) = 1701277281;
    v14[20] = 46;
    *(__m128i *)v14 = si128;
    v27._M_string_length = __capacity;
    v27._M_dataplus._M_p[__capacity] = 0;
    v16 = this->error_collector_;
    if ( v16 )
      (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))v16->_vptr_ErrorCollector
       + 2))(
        v16,
        (unsigned int)this->input_->current_.line,
        (unsigned int)this->input_->current_.column,
        &v27);
    v17 = (std::string *)v27._M_dataplus._M_p;
    this->had_errors_ = 1;
    if ( v17 != (std::string *)&v27._anon_0 )
      operator delete(v17);
  }
  if ( v25 < 0 )
    v18 = (double)(int)(v25 & 1 | ((unsigned __int64)v25 >> 1)) + (double)(int)(v25 & 1 | ((unsigned __int64)v25 >> 1));
  else
    v18 = (double)(int)v25;
  v19 = this->input_;
  *a2 = v18;
  google::protobuf::io::Tokenizer::Next(v19);
  return 1LL;
};

// Line 265: range 000000000DC03AB0-000000000DC03BFC
__int64 __fastcall google::protobuf::compiler::Parser::ConsumeString(__int64 a1, __int64 a2, const char *a3)
{
  google::protobuf::io::Tokenizer *v4; // rdi
  size_t v6; // rax
  size_t v7; // r12
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdx
  __int64 v9; // rdi
  std::string *v10; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  _BYTE *v13; // rax
  std::string::size_type __capacity; // [rsp+8h] [rbp-50h] BYREF
  std::string v15; // [rsp+10h] [rbp-48h] BYREF

  v4 = *(google::protobuf::io::Tokenizer **)a1;
  if ( v4->current_.type == TYPE_STRING_1 )
  {
    v13 = *(_BYTE **)a2;
    *(_QWORD *)(a2 + 8) = 0LL;
    *v13 = 0;
    do
    {
      google::protobuf::io::Tokenizer::ParseStringAppend(&v4->current_.text, a2);
      google::protobuf::io::Tokenizer::Next(*(google::protobuf::io::Tokenizer **)a1);
      v4 = *(google::protobuf::io::Tokenizer **)a1;
    }
    while ( **(_DWORD **)a1 == 5 );
    return 1LL;
  }
  v15._M_dataplus._M_p = v15._anon_0._M_local_buf;
  if ( !a3 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v6 = strlen(a3);
  __capacity = v6;
  v7 = v6;
  if ( v6 > 0xF )
  {
    v15._M_dataplus._M_p = std::string::_M_create(&v15, &__capacity, 0LL);
    M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15._M_dataplus._M_p;
    v15._anon_0._M_allocated_capacity = __capacity;
    goto LABEL_14;
  }
  if ( v6 != 1 )
  {
    if ( !v6 )
    {
      p_anon_0 = &v15._anon_0;
      goto LABEL_6;
    }
    M_p = &v15._anon_0;
LABEL_14:
    memcpy(M_p, a3, v7);
    v6 = __capacity;
    p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15._M_dataplus._M_p;
    goto LABEL_6;
  }
  v15._anon_0._M_local_buf[0] = *a3;
  p_anon_0 = &v15._anon_0;
LABEL_6:
  v15._M_string_length = v6;
  p_anon_0->_M_local_buf[v6] = 0;
  v9 = *(_QWORD *)(a1 + 8);
  if ( v9 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, std::string *))(*(_QWORD *)v9 + 16LL))(
      v9,
      *(unsigned int *)(*(_QWORD *)a1 + 40LL),
      *(unsigned int *)(*(_QWORD *)a1 + 44LL),
      &v15);
  v10 = (std::string *)v15._M_dataplus._M_p;
  *(_BYTE *)(a1 + 32) = 1;
  if ( v10 != (std::string *)&v15._anon_0 )
    operator delete(v10);
  return 0LL;
};

// Line 282: range 000000000DC05920-000000000DC05B01
__int64 __fastcall google::protobuf::compiler::Parser::TryConsumeEndOfDeclaration(
        google::protobuf::compiler::Parser *this,
        const char *a2,
        const google::protobuf::compiler::Parser::LocationRecorder *a3)
{
  int v5; // r8d
  __int64 result; // rax
  google::protobuf::io::Tokenizer *input; // rdi
  std::forward_iterator_tag v8; // r8
  int v9; // eax
  std::string *M_current; // r14
  std::string *v11; // rcx
  std::string *v12; // rbp
  std::_Vector_base<std::string>::pointer v13; // rax
  std::string *v14; // rdx
  std::string *M_start; // rcx
  std::string *M_finish; // rdx
  std::_Vector_base<std::string>::pointer M_end_of_storage; // rax
  __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > __first; // [rsp+0h] [rbp-88h] BYREF
  __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > __last; // [rsp+8h] [rbp-80h]
  std::string *v20; // [rsp+10h] [rbp-78h]
  std::string v21; // [rsp+20h] [rbp-68h] BYREF
  void *v22[2]; // [rsp+40h] [rbp-48h] BYREF
  char v23[56]; // [rsp+50h] [rbp-38h] BYREF

  v5 = std::string::compare(&this->input_->current_.text, a2);
  result = 0LL;
  if ( v5 )
    return result;
  input = this->input_;
  v21._M_dataplus._M_p = v21._anon_0._M_local_buf;
  v21._M_string_length = 0LL;
  v21._anon_0._M_local_buf[0] = 0;
  v22[0] = v23;
  v22[1] = 0LL;
  v23[0] = 0;
  __first._M_current = 0LL;
  __last._M_current = 0LL;
  v20 = 0LL;
  google::protobuf::io::Tokenizer::NextWithComments(input);
  std::string::swap(&v21, &this->upcoming_doc_comments_);
  if ( a3 )
  {
    M_start = this->upcoming_detached_comments_._M_impl._M_start;
    M_finish = this->upcoming_detached_comments_._M_impl._M_finish;
    M_end_of_storage = this->upcoming_detached_comments_._M_impl._M_end_of_storage;
    this->upcoming_detached_comments_._M_impl._M_start = __first._M_current;
    __first._M_current = M_start;
    this->upcoming_detached_comments_._M_impl._M_finish = __last._M_current;
    __last._M_current = M_finish;
    this->upcoming_detached_comments_._M_impl._M_end_of_storage = v20;
    v20 = M_end_of_storage;
    google::protobuf::compiler::Parser::LocationRecorder::AttachComments(a3, &v21, v22, &__first);
LABEL_20:
    M_current = __last._M_current;
    v12 = __first._M_current;
    goto LABEL_7;
  }
  v9 = *(unsigned __int8 *)a2 - 125;
  if ( *a2 == 125 )
    v9 = *((unsigned __int8 *)a2 + 1);
  M_current = this->upcoming_detached_comments_._M_impl._M_finish;
  v11 = __last._M_current;
  if ( v9 )
  {
    std::vector<std::string>::_M_range_insert<__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string>>>(
      &this->upcoming_detached_comments_,
      (std::vector<std::string>::iterator)this->upcoming_detached_comments_._M_impl._M_finish,
      __first,
      __last,
      v8);
    goto LABEL_20;
  }
  v12 = this->upcoming_detached_comments_._M_impl._M_start;
  v13 = this->upcoming_detached_comments_._M_impl._M_end_of_storage;
  this->upcoming_detached_comments_._M_impl._M_start = __first._M_current;
  v14 = v20;
  this->upcoming_detached_comments_._M_impl._M_finish = v11;
  __first._M_current = v12;
  this->upcoming_detached_comments_._M_impl._M_end_of_storage = v14;
  __last._M_current = M_current;
  v20 = v13;
LABEL_7:
  if ( M_current != v12 )
  {
    do
    {
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v12->_M_dataplus._M_p != &v12->_anon_0 )
        operator delete(v12->_M_dataplus._M_p);
      ++v12;
    }
    while ( v12 != M_current );
    v12 = __first._M_current;
  }
  if ( v12 )
    operator delete(v12);
  if ( v22[0] != v23 )
    operator delete(v22[0]);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v21._M_dataplus._M_p != &v21._anon_0 )
    operator delete(v21._M_dataplus._M_p);
  return 1LL;
};

// Line 313: range 000000000DC05B10-000000000DC05D4C
__int64 __fastcall google::protobuf::compiler::Parser::ConsumeEndOfDeclaration(
        google::protobuf::compiler::Parser *this,
        const char *a2,
        const google::protobuf::compiler::Parser::LocationRecorder *a3)
{
  unsigned int v4; // r12d
  size_t v6; // rax
  size_t v7; // r14
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdx
  std::string *v9; // rax
  std::string::size_type M_string_length; // rcx
  __m128i *v11; // rax
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  __int128 *v13; // rdi
  std::string::$CFBEC286C7F52157F7E59FC354047095 *M_p; // rdi
  std::string v15; // [rsp+0h] [rbp-88h] BYREF
  std::string v16; // [rsp+20h] [rbp-68h] BYREF
  std::string::size_type __capacity[2]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v18[3]; // [rsp+50h] [rbp-38h] BYREF

  v4 = google::protobuf::compiler::Parser::TryConsumeEndOfDeclaration(this, a2, a3);
  if ( (_BYTE)v4 )
    return v4;
  v15._M_dataplus._M_p = v15._anon_0._M_local_buf;
  if ( !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v6 = strlen(a2);
  __capacity[0] = v6;
  v7 = v6;
  if ( v6 > 0xF )
  {
    v15._M_dataplus._M_p = std::string::_M_create(&v15, __capacity, 0LL);
    M_p = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15._M_dataplus._M_p;
    v15._anon_0._M_allocated_capacity = __capacity[0];
  }
  else
  {
    if ( v6 == 1 )
    {
      v15._anon_0._M_local_buf[0] = *a2;
      p_anon_0 = &v15._anon_0;
      goto LABEL_7;
    }
    if ( !v6 )
    {
      p_anon_0 = &v15._anon_0;
      goto LABEL_7;
    }
    M_p = &v15._anon_0;
  }
  memcpy(M_p, a2, v7);
  v6 = __capacity[0];
  p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15._M_dataplus._M_p;
LABEL_7:
  v15._M_string_length = v6;
  p_anon_0->_M_local_buf[v6] = 0;
  v9 = std::string::_M_replace(&v15, 0LL, 0LL, "Expected \"", 0xAuLL);
  v16._M_dataplus._M_p = v16._anon_0._M_local_buf;
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v9->_M_dataplus._M_p == &v9->_anon_0 )
  {
    v16._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)_mm_loadu_si128((const __m128i *)&v9->_anon_0);
  }
  else
  {
    v16._M_dataplus._M_p = v9->_M_dataplus._M_p;
    v16._anon_0._M_allocated_capacity = v9->_anon_0._M_allocated_capacity;
  }
  M_string_length = v9->_M_string_length;
  v9->_anon_0._M_local_buf[0] = 0;
  v16._M_string_length = M_string_length;
  v9->_M_string_length = 0LL;
  v9->_M_dataplus._M_p = v9->_anon_0._M_local_buf;
  if ( v16._M_string_length == 0x3FFFFFFFFFFFFFFFLL || v16._M_string_length == 4611686018427387902LL )
    std::__throw_length_error("basic_string::append");
  v11 = (__m128i *)std::string::_M_append(&v16, "\".", 2uLL);
  __capacity[0] = (std::string::size_type)v18;
  if ( (__m128i *)v11->m128i_i64[0] == &v11[1] )
  {
    v18[0] = (__int128)_mm_loadu_si128(v11 + 1);
  }
  else
  {
    __capacity[0] = v11->m128i_i64[0];
    *(_QWORD *)&v18[0] = v11[1].m128i_i64[0];
  }
  __capacity[1] = v11->m128i_u64[1];
  v11[1].m128i_i8[0] = 0;
  error_collector = this->error_collector_;
  v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
  v11->m128i_i64[1] = 0LL;
  if ( error_collector )
    (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string::size_type *))error_collector->_vptr_ErrorCollector
     + 2))(
      error_collector,
      (unsigned int)this->input_->current_.line,
      (unsigned int)this->input_->current_.column,
      __capacity);
  v13 = (__int128 *)__capacity[0];
  this->had_errors_ = 1;
  if ( v13 != v18 )
    operator delete(v13);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v16._M_dataplus._M_p != &v16._anon_0 )
    operator delete(v16._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v15._M_dataplus._M_p == &v15._anon_0 )
    return v4;
  operator delete(v15._M_dataplus._M_p);
  return v4;
};

// Line 324: range 000000000DC03C10-000000000DC03C28
void __fastcall google::protobuf::compiler::Parser::AddError(
        google::protobuf::compiler::Parser *const this,
        int line,
        int column,
        const std::string *error)
{
  google::protobuf::io::ErrorCollector *error_collector; // rdi

  error_collector = this->error_collector_;
  if ( error_collector )
    (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, int, int, const std::string *))error_collector->_vptr_ErrorCollector
     + 2))(
      error_collector,
      line,
      column,
      error);
  this->had_errors_ = 1;
};

// Line 331: range 000000000DC03C30-000000000DC03C54
void __fastcall google::protobuf::compiler::Parser::AddError(
        google::protobuf::compiler::Parser *const this,
        const std::string *error)
{
  google::protobuf::io::ErrorCollector *error_collector; // rdi

  error_collector = this->error_collector_;
  if ( error_collector )
    (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, const std::string *))error_collector->_vptr_ErrorCollector
     + 2))(
      error_collector,
      (unsigned int)this->input_->current_.line,
      (unsigned int)this->input_->current_.column,
      error);
  this->had_errors_ = 1;
};

// Line 337: range 000000000DC03FE0-000000000DC04179
__int64 __fastcall google::protobuf::compiler::Parser::LocationRecorder::LocationRecorder(
        google::protobuf::compiler::Parser::LocationRecorder *this,
        google::protobuf::compiler::Parser *parser)
{
  google::protobuf::SourceCodeInfo *source_code_info; // rbx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  google::protobuf::SourceCodeInfo::Location *AlignedAndAddCleanup; // rbp
  int total_size; // esi
  google::protobuf::Arena *arena; // rdi
  __int64 v10; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v11; // rdx
  google::protobuf::io::Tokenizer *input; // rax
  int v13; // edx
  google::protobuf::RepeatedField<int> *p_span; // rdi
  __int64 v15; // rsi
  google::protobuf::SourceCodeInfo::Location *location; // rbx
  int line; // r13d
  google::protobuf::RepeatedField<int>::Rep *v18; // rcx
  google::protobuf::io::ColumnNumber column; // ebp
  __int64 result; // rax
  google::protobuf::RepeatedField<int>::Rep *v21; // rdx

  source_code_info = parser->source_code_info_;
  this->parser_ = parser;
  rep = source_code_info->location_.rep_;
  if ( !rep )
  {
    total_size = source_code_info->location_.total_size_;
    goto LABEL_16;
  }
  current_size = source_code_info->location_.current_size_;
  allocated_size = rep->allocated_size;
  if ( (int)current_size < rep->allocated_size )
  {
    AlignedAndAddCleanup = (google::protobuf::SourceCodeInfo::Location *)rep->elements[current_size];
    source_code_info->location_.current_size_ = current_size + 1;
    goto LABEL_10;
  }
  total_size = source_code_info->location_.total_size_;
  if ( allocated_size == total_size )
  {
LABEL_16:
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&source_code_info->location_, total_size + 1);
    arena = source_code_info->location_.arena_;
    ++source_code_info->location_.rep_->allocated_size;
    if ( arena )
      goto LABEL_6;
    goto LABEL_17;
  }
  arena = source_code_info->location_.arena_;
  rep->allocated_size = allocated_size + 1;
  if ( arena )
  {
LABEL_6:
    if ( arena->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        arena,
        (const std::type_info *)&`typeinfo for'google::protobuf::SourceCodeInfo_Location,
        0x70uLL);
    AlignedAndAddCleanup = (google::protobuf::SourceCodeInfo::Location *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                           &arena->impl_,
                                                                           0x70uLL,
                                                                           google::protobuf::internal::arena_destruct_object<google::protobuf::SourceCodeInfo_Location>);
    google::protobuf::SourceCodeInfo_Location::SourceCodeInfo_Location(AlignedAndAddCleanup);
    goto LABEL_9;
  }
LABEL_17:
  AlignedAndAddCleanup = (google::protobuf::SourceCodeInfo::Location *)operator new(0x70uLL);
  google::protobuf::SourceCodeInfo_Location::SourceCodeInfo_Location(AlignedAndAddCleanup);
LABEL_9:
  v10 = source_code_info->location_.current_size_;
  v11 = source_code_info->location_.rep_;
  parser = this->parser_;
  source_code_info->location_.current_size_ = v10 + 1;
  v11->elements[v10] = AlignedAndAddCleanup;
LABEL_10:
  input = parser->input_;
  v13 = AlignedAndAddCleanup->span_.total_size_;
  this->location_ = AlignedAndAddCleanup;
  p_span = &AlignedAndAddCleanup->span_;
  v15 = AlignedAndAddCleanup->span_.current_size_;
  location = AlignedAndAddCleanup;
  line = input->current_.line;
  if ( (_DWORD)v15 == v13 )
  {
    google::protobuf::RepeatedField<int>::Reserve(p_span, v15 + 1);
    location = this->location_;
    v15 = AlignedAndAddCleanup->span_.current_size_;
    input = this->parser_->input_;
    v13 = location->span_.total_size_;
    p_span = &location->span_;
  }
  v18 = AlignedAndAddCleanup->span_.rep_;
  AlignedAndAddCleanup->span_.current_size_ = v15 + 1;
  column = input->current_.column;
  result = location->span_.current_size_;
  v18->elements[v15] = line;
  if ( (_DWORD)result == v13 )
  {
    google::protobuf::RepeatedField<int>::Reserve(p_span, v13 + 1);
    result = location->span_.current_size_;
  }
  v21 = location->span_.rep_;
  location->span_.current_size_ = result + 1;
  v21->elements[result] = column;
  return result;
};

// Line 345: range 000000000DC043A0-000000000DC043F8
// attributes: thunk
void __fastcall google::protobuf::compiler::Parser::LocationRecorder::LocationRecorder(
        google::protobuf::compiler::Parser::LocationRecorder *const this,
        const google::protobuf::compiler::Parser::LocationRecorder *parent)
{
  google::protobuf::compiler::Parser::LocationRecorder::Init(this, parent);
};

// Line 354: range 000000000DC04400-000000000DC0448C
void __fastcall google::protobuf::compiler::Parser::LocationRecorder::LocationRecorder(
        google::protobuf::compiler::Parser::LocationRecorder *const this,
        const google::protobuf::compiler::Parser::LocationRecorder *parent,
        int path1,
        int path2)
{
  google::protobuf::SourceCodeInfo::Location *location; // rbx
  __int64 current_size; // rsi
  int total_size; // eax
  google::protobuf::RepeatedField<int> *p_path; // rdi
  google::protobuf::SourceCodeInfo::Location *v11; // r14
  google::protobuf::RepeatedField<int>::Rep *rep; // rdx
  __int64 v13; // rsi
  google::protobuf::RepeatedField<int>::Rep *v14; // rax

  google::protobuf::compiler::Parser::LocationRecorder::Init(this, parent);
  location = this->location_;
  current_size = location->path_.current_size_;
  total_size = location->path_.total_size_;
  p_path = &location->path_;
  v11 = this->location_;
  if ( (_DWORD)current_size == total_size )
  {
    google::protobuf::RepeatedField<int>::Reserve(p_path, current_size + 1);
    v11 = this->location_;
    current_size = location->path_.current_size_;
    total_size = v11->path_.total_size_;
    p_path = &v11->path_;
  }
  rep = location->path_.rep_;
  location->path_.current_size_ = current_size + 1;
  rep->elements[current_size] = path1;
  v13 = v11->path_.current_size_;
  if ( total_size == (_DWORD)v13 )
  {
    google::protobuf::RepeatedField<int>::Reserve(p_path, v13 + 1);
    v13 = v11->path_.current_size_;
  }
  v14 = v11->path_.rep_;
  v11->path_.current_size_ = v13 + 1;
  v14->elements[v13] = path2;
};

// Line 361: range 000000000DC04180-000000000DC04391
__int64 __fastcall google::protobuf::compiler::Parser::LocationRecorder::Init(
        google::protobuf::compiler::Parser::LocationRecorder *this,
        const google::protobuf::compiler::Parser::LocationRecorder *a2)
{
  google::protobuf::SourceCodeInfo *source_code_info; // rbx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  google::protobuf::SourceCodeInfo::Location *AlignedAndAddCleanup; // rbp
  int total_size; // esi
  google::protobuf::Arena *arena; // rdi
  __int64 v11; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v12; // rdx
  google::protobuf::SourceCodeInfo::Location *location; // rbx
  int v14; // esi
  __int64 v15; // rsi
  google::protobuf::RepeatedField<int> *p_span; // rdi
  google::protobuf::SourceCodeInfo::Location *v17; // rbx
  int v18; // edx
  google::protobuf::io::Tokenizer *input; // rax
  int line; // r13d
  google::protobuf::RepeatedField<int>::Rep *v21; // rcx
  google::protobuf::io::ColumnNumber column; // ebp
  __int64 result; // rax
  google::protobuf::RepeatedField<int>::Rep *v24; // rdx

  source_code_info = a2->parser_->source_code_info_;
  this->parser_ = a2->parser_;
  rep = source_code_info->location_.rep_;
  if ( !rep )
  {
    total_size = source_code_info->location_.total_size_;
    goto LABEL_19;
  }
  current_size = source_code_info->location_.current_size_;
  allocated_size = rep->allocated_size;
  if ( (int)current_size >= rep->allocated_size )
  {
    total_size = source_code_info->location_.total_size_;
    if ( allocated_size != total_size )
    {
      arena = source_code_info->location_.arena_;
      rep->allocated_size = allocated_size + 1;
      if ( arena )
      {
LABEL_6:
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            arena,
            (const std::type_info *)&`typeinfo for'google::protobuf::SourceCodeInfo_Location,
            0x70uLL);
        AlignedAndAddCleanup = (google::protobuf::SourceCodeInfo::Location *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                               &arena->impl_,
                                                                               0x70uLL,
                                                                               google::protobuf::internal::arena_destruct_object<google::protobuf::SourceCodeInfo_Location>);
        google::protobuf::SourceCodeInfo_Location::SourceCodeInfo_Location(AlignedAndAddCleanup);
        goto LABEL_9;
      }
LABEL_20:
      AlignedAndAddCleanup = (google::protobuf::SourceCodeInfo::Location *)operator new(0x70uLL);
      google::protobuf::SourceCodeInfo_Location::SourceCodeInfo_Location(AlignedAndAddCleanup);
LABEL_9:
      v11 = source_code_info->location_.current_size_;
      v12 = source_code_info->location_.rep_;
      source_code_info->location_.current_size_ = v11 + 1;
      v12->elements[v11] = AlignedAndAddCleanup;
      goto LABEL_10;
    }
LABEL_19:
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&source_code_info->location_, total_size + 1);
    arena = source_code_info->location_.arena_;
    ++source_code_info->location_.rep_->allocated_size;
    if ( arena )
      goto LABEL_6;
    goto LABEL_20;
  }
  AlignedAndAddCleanup = (google::protobuf::SourceCodeInfo::Location *)rep->elements[current_size];
  source_code_info->location_.current_size_ = current_size + 1;
LABEL_10:
  this->location_ = AlignedAndAddCleanup;
  location = a2->location_;
  if ( &AlignedAndAddCleanup->path_ != &location->path_ )
  {
    AlignedAndAddCleanup->path_.current_size_ = 0;
    v14 = location->path_.current_size_;
    if ( v14 )
    {
      google::protobuf::RepeatedField<int>::Reserve(&AlignedAndAddCleanup->path_, v14);
      memcpy(
        &AlignedAndAddCleanup->path_.rep_->elements[AlignedAndAddCleanup->path_.current_size_],
        location->path_.rep_->elements,
        4LL * location->path_.current_size_);
      AlignedAndAddCleanup->path_.current_size_ += location->path_.current_size_;
      AlignedAndAddCleanup = this->location_;
    }
  }
  v15 = AlignedAndAddCleanup->span_.current_size_;
  p_span = &AlignedAndAddCleanup->span_;
  v17 = AlignedAndAddCleanup;
  v18 = AlignedAndAddCleanup->span_.total_size_;
  input = this->parser_->input_;
  line = input->current_.line;
  if ( (_DWORD)v15 == v18 )
  {
    google::protobuf::RepeatedField<int>::Reserve(p_span, v15 + 1);
    v17 = this->location_;
    v15 = AlignedAndAddCleanup->span_.current_size_;
    input = this->parser_->input_;
    v18 = v17->span_.total_size_;
    p_span = &v17->span_;
  }
  v21 = AlignedAndAddCleanup->span_.rep_;
  AlignedAndAddCleanup->span_.current_size_ = v15 + 1;
  column = input->current_.column;
  result = v17->span_.current_size_;
  v21->elements[v15] = line;
  if ( (_DWORD)result == v18 )
  {
    google::protobuf::RepeatedField<int>::Reserve(p_span, v18 + 1);
    result = v17->span_.current_size_;
  }
  v24 = v17->span_.rep_;
  v17->span_.current_size_ = result + 1;
  v24->elements[result] = column;
  return result;
};

// Line 372: range 000000000DC04530-000000000DC0453A
void __fastcall google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(
        google::protobuf::compiler::Parser::LocationRecorder *const this)
{
  google::protobuf::compiler::Parser::LocationRecorder::EndAt(this, &this->parser_->input_->previous_);
};

// Line 376: range 000000000DC03F90-000000000DC03FD0
void __fastcall google::protobuf::compiler::Parser::LocationRecorder::AddPath(
        google::protobuf::compiler::Parser::LocationRecorder *const this,
        int path_component)
{
  google::protobuf::SourceCodeInfo::Location *location; // rbx
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax

  location = this->location_;
  current_size = location->path_.current_size_;
  if ( (_DWORD)current_size == location->path_.total_size_ )
  {
    google::protobuf::RepeatedField<int>::Reserve(&location->path_, current_size + 1);
    current_size = location->path_.current_size_;
  }
  rep = location->path_.rep_;
  location->path_.current_size_ = current_size + 1;
  rep->elements[current_size] = path_component;
};

// Line 390: range 000000000DC04490-000000000DC0452C
void __fastcall google::protobuf::compiler::Parser::LocationRecorder::EndAt(
        google::protobuf::compiler::Parser::LocationRecorder *const this,
        const google::protobuf::io::Tokenizer::Token *token)
{
  google::protobuf::SourceCodeInfo::Location *location; // rbx
  int line; // r13d
  google::protobuf::RepeatedField<int>::Rep *rep; // rdx
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int> *p_span; // rdi
  int total_size; // eax
  google::protobuf::io::ColumnNumber end_column; // ebp
  google::protobuf::RepeatedField<int>::Rep *v11; // rax
  google::protobuf::SourceCodeInfo::Location *v12; // rcx

  location = this->location_;
  line = token->line;
  rep = location->span_.rep_;
  current_size = location->span_.current_size_;
  p_span = &location->span_;
  total_size = location->span_.total_size_;
  if ( line == rep->elements[0] )
  {
    end_column = token->end_column;
    if ( (_DWORD)current_size != total_size )
      goto LABEL_3;
LABEL_7:
    google::protobuf::RepeatedField<int>::Reserve(p_span, current_size + 1);
    current_size = location->span_.current_size_;
    goto LABEL_3;
  }
  v12 = location;
  if ( (_DWORD)current_size == total_size )
  {
    google::protobuf::RepeatedField<int>::Reserve(p_span, current_size + 1);
    v12 = this->location_;
    rep = location->span_.rep_;
    current_size = location->span_.current_size_;
    total_size = v12->span_.total_size_;
    p_span = &v12->span_;
  }
  end_column = token->end_column;
  location->span_.current_size_ = current_size + 1;
  location = v12;
  rep->elements[current_size] = line;
  current_size = v12->span_.current_size_;
  if ( (_DWORD)current_size == total_size )
    goto LABEL_7;
LABEL_3:
  v11 = location->span_.rep_;
  location->span_.current_size_ = current_size + 1;
  v11->elements[current_size] = end_column;
};

// Line 399: range 000000000DC06F10-000000000DC06FC0
void __fastcall google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(
        google::protobuf::compiler::Parser::LocationRecorder *const this,
        const google::protobuf::Message *descriptor,
        google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation location)
{
  google::protobuf::compiler::SourceLocationTable *source_location_table; // r10
  google::protobuf::SourceCodeInfo::Location *v4; // rax
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rcx
  std::_Rb_tree_node_base *v6; // rbx
  std::_Rb_tree_iterator<std::pair<const std::pair<const google::protobuf::Message*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>,std::pair<int,int> > >::_Base_ptr p_M_header; // r9
  std::tuple<std::pair<const google::protobuf::Message*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>&&> *v8; // [rsp-6h] [rbp-28h] BYREF
  std::tuple<> *__args_2; // [rsp+2h] [rbp-20h] BYREF
  std::tuple<> v10[8]; // [rsp+Ah] [rbp-18h] BYREF
  google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation locationa; // [rsp+12h] [rbp-10h]

  source_location_table = this->parser_->source_location_table_;
  if ( source_location_table )
  {
    v4 = this->location_;
    M_parent = source_location_table->location_map_._M_t._M_impl._M_header._M_parent;
    *(_QWORD *)v10[0].gap0 = descriptor;
    v6 = *(std::_Rb_tree_node_base **)v4->span_.rep_->elements;
    locationa = location;
    p_M_header = &source_location_table->location_map_._M_t._M_impl._M_header;
    if ( !M_parent )
      goto LABEL_3;
    do
    {
      while ( (unsigned __int64)descriptor <= *(_QWORD *)&M_parent[1]._M_color
           && (descriptor != *(const google::protobuf::Message **)&M_parent[1]._M_color
            || SLODWORD(M_parent[1]._M_parent) >= location) )
      {
        p_M_header = M_parent;
        M_parent = M_parent->_M_left;
        if ( !M_parent )
          goto LABEL_10;
      }
      M_parent = M_parent->_M_right;
    }
    while ( M_parent );
LABEL_10:
    if ( &source_location_table->location_map_._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)p_M_header
      || (unsigned __int64)descriptor < *(_QWORD *)&p_M_header[1]._M_color
      || descriptor == *(const google::protobuf::Message **)&p_M_header[1]._M_color
      && location < SLODWORD(p_M_header[1]._M_parent) )
    {
LABEL_3:
      p_M_header = std::_Rb_tree<std::pair<google::protobuf::Message const*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>,std::pair<std::pair<google::protobuf::Message const*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation> const,std::pair<int,int>>,std::_Select1st<std::pair<std::pair<google::protobuf::Message const*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation> const,std::pair<int,int>>>,std::less<std::pair<google::protobuf::Message const*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>>,std::allocator<std::pair<std::pair<google::protobuf::Message const*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation> const,std::pair<int,int>>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::pair<google::protobuf::Message const*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>&&>,std::tuple<>>(
                     &source_location_table->location_map_._M_t,
                     (std::_Rb_tree<std::pair<const google::protobuf::Message*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>,std::pair<const std::pair<const google::protobuf::Message*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>,std::pair<int,int> >,std::_Select1st<std::pair<const std::pair<const google::protobuf::Message*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>,std::pair<int,int> > >,std::less<std::pair<const google::protobuf::Message*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation> >,std::allocator<std::pair<const std::pair<const google::protobuf::Message*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>,std::pair<int,int> > > >::const_iterator)p_M_header,
                     &std::piecewise_construct,
                     (std::tuple<std::pair<const google::protobuf::Message*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>&&> *)&__args_2,
                     (std::tuple<> *)&v8 + 7,
                     (const std::piecewise_construct_t *)p_M_header,
                     v8,
                     v10)._M_node;
    }
    p_M_header[1]._M_left = v6;
  }
};

// Line 407: range 000000000DC045F0-000000000DC048B8
void __fastcall google::protobuf::compiler::Parser::LocationRecorder::AttachComments(
        __int64 a1,
        std::string *a2,
        std::string *a3,
        void ***a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v9; // rdi
  __int64 v10; // rbx
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v11; // rdi
  void **v12; // r14
  unsigned __int64 v13; // rbp
  std::string *v14; // rdi
  unsigned __int64 v15; // rsi
  void **v16; // r15
  google::protobuf::internal::RepeatedPtrFieldBase *v17; // rbx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  int total_size; // esi
  google::protobuf::Arena *arena; // rdi
  std::string *AlignedAndAddCleanup; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v24; // rdx
  __int64 v25; // rax
  void **v26; // rbx
  google::protobuf::internal::LogMessage_0 *v27; // rax
  google::protobuf::internal::LogMessage_0 *v28; // rax
  google::protobuf::internal::LogFinisher v29; // [rsp+1Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v30; // [rsp+20h] [rbp-78h] BYREF

  v7 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v7 + 16) & 1) != 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v30,
      LOGLEVEL_FATAL_0,
      "google/protobuf/compiler/parser.cc",
      408);
    v28 = google::protobuf::internal::LogMessage::operator<<(&v30, "CHECK failed: !location_->has_leading_comments(): ");
    google::protobuf::internal::LogFinisher::operator=(&v29, v28);
    google::protobuf::internal::LogMessage::~LogMessage(&v30);
    v7 = *(_QWORD *)(a1 + 8);
  }
  if ( (*(_BYTE *)(v7 + 16) & 2) != 0 )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v30,
      LOGLEVEL_FATAL_0,
      "google/protobuf/compiler/parser.cc",
      409);
    v27 = google::protobuf::internal::LogMessage::operator<<(
            &v30,
            "CHECK failed: !location_->has_trailing_comments(): ");
    google::protobuf::internal::LogFinisher::operator=(&v29, v27);
    google::protobuf::internal::LogMessage::~LogMessage(&v30);
  }
  if ( a2->_M_string_length )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(google::protobuf::internal::ExplicitlyConstructed<std::string > **)(v8 + 96);
    *(_DWORD *)(v8 + 16) |= 1u;
    if ( v9 == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        v8 + 96,
        &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
      v9 = *(google::protobuf::internal::ExplicitlyConstructed<std::string > **)(v8 + 96);
    }
    std::string::swap((std::string *const)v9, a2);
  }
  if ( a3->_M_string_length )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v11 = *(google::protobuf::internal::ExplicitlyConstructed<std::string > **)(v10 + 104);
    *(_DWORD *)(v10 + 16) |= 2u;
    if ( v11 == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        v10 + 104,
        &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
      v11 = *(google::protobuf::internal::ExplicitlyConstructed<std::string > **)(v10 + 104);
    }
    std::string::swap((std::string *const)v11, a3);
  }
  v12 = *a4;
  if ( *a4 != a4[1] )
  {
    v13 = 0LL;
    while ( 1 )
    {
      v17 = *(google::protobuf::internal::RepeatedPtrFieldBase **)(a1 + 8);
      rep = v17[3].rep_;
      if ( !rep )
        break;
      current_size = v17[3].current_size_;
      allocated_size = rep->allocated_size;
      if ( (int)current_size >= rep->allocated_size )
      {
        total_size = v17[3].total_size_;
        if ( allocated_size != total_size )
        {
          arena = v17[3].arena_;
          rep->allocated_size = allocated_size + 1;
          if ( arena )
            goto LABEL_21;
LABEL_27:
          AlignedAndAddCleanup = (std::string *)operator new(0x20uLL);
          goto LABEL_24;
        }
LABEL_26:
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(v17 + 3, total_size + 1);
        arena = v17[3].arena_;
        ++v17[3].rep_->allocated_size;
        if ( !arena )
          goto LABEL_27;
LABEL_21:
        if ( arena->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'std::string, 0x20uLL);
        AlignedAndAddCleanup = (std::string *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                &arena->impl_,
                                                0x20uLL,
                                                google::protobuf::internal::arena_destruct_object<std::string>);
LABEL_24:
        v14 = AlignedAndAddCleanup;
        AlignedAndAddCleanup->_anon_0._M_local_buf[0] = 0;
        v24 = v17[3].rep_;
        AlignedAndAddCleanup->_M_dataplus._M_p = AlignedAndAddCleanup->_anon_0._M_local_buf;
        v25 = v17[3].current_size_;
        v14->_M_string_length = 0LL;
        v17[3].current_size_ = v25 + 1;
        v24->elements[v25] = v14;
        v12 = *a4;
        goto LABEL_16;
      }
      v14 = (std::string *)rep->elements[current_size];
      v17[3].current_size_ = current_size + 1;
LABEL_16:
      v15 = v13++;
      std::string::swap(v14, (std::string *)&v12[4 * v15]);
      v16 = a4[1];
      v12 = *a4;
      if ( ((char *)v16 - (char *)*a4) >> 5 <= v13 )
      {
        if ( v12 != v16 )
        {
          v26 = *a4;
          do
          {
            if ( *v26 != v26 + 2 )
              operator delete(*v26);
            v26 += 4;
          }
          while ( v16 != v26 );
          a4[1] = v12;
        }
        return;
      }
    }
    total_size = v17[3].total_size_;
    goto LABEL_26;
  }
};

// Line 408: range 00000000004278B8-00000000004278C3
void __fastcall __noreturn google::protobuf::compiler::Parser::LocationRecorder::AttachComments()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::LogMessage_0 *v1; // r15

  google::protobuf::internal::LogMessage::~LogMessage(v1);
  _Unwind_Resume(v0);
};

// Line 461: range 000000000DC0A430-000000000DC0A8FB
__int64 __fastcall google::protobuf::compiler::Parser::ValidateEnum(
        google::protobuf::compiler::Parser *this,
        const google::protobuf::EnumDescriptorProto *a2)
{
  int i; // ebx
  const std::string *const *v3; // rax
  unsigned int v4; // r14d
  google::protobuf::EnumOptions *options; // rax
  int current_size; // eax
  int v7; // r14d
  std::_Rb_tree_header *M_parent; // r12
  int rep; // ebx
  std::_Rb_tree_node_base::_Base_ptr v10; // rax
  std::_Rb_tree_header *v11; // rdx
  std::_Rb_tree_header *M_left; // rax
  char v14; // cl
  int M_node_count; // edx
  __int64 v16; // rax
  std::string *v17; // rax
  void *M_string_length; // rcx
  google::protobuf::UninterpretedOption *v19; // rdi
  google::protobuf::io::ErrorCollector *v20; // rdi
  __m128i *v21; // rdi
  int v22; // ebx
  __m128i *v23; // rax
  google::protobuf::UninterpretedOption *vptr_MessageLite; // rdi
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> > *v26; // rdi
  bool v27; // cc
  bool v29; // [rsp+Eh] [rbp-EAh]
  char v30; // [rsp+Fh] [rbp-E9h]
  void *v31[2]; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v32; // [rsp+20h] [rbp-D8h] BYREF
  std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> > v33; // [rsp+30h] [rbp-C8h] BYREF
  google::protobuf::UninterpretedOption v34; // [rsp+60h] [rbp-98h] BYREF

  for ( i = 0; ; ++i )
  {
    options = a2->options_;
    if ( !options )
      options = (google::protobuf::EnumOptions *)&google::protobuf::_EnumOptions_default_instance_;
    if ( i >= options->uninterpreted_option_.current_size_ )
    {
      current_size = a2->value_.current_size_;
      v33._M_impl._M_header._M_color = _S_red;
      v33._M_impl._M_header._M_parent = 0LL;
      v33._M_impl._M_header._M_left = &v33._M_impl._M_header;
      v33._M_impl._M_header._M_right = &v33._M_impl._M_header;
      v33._M_impl._M_node_count = 0LL;
      if ( current_size <= 0 )
        goto LABEL_61;
      v30 = 0;
      goto LABEL_11;
    }
    google::protobuf::UninterpretedOption::UninterpretedOption(
      &v34,
      (const google::protobuf::UninterpretedOption *)options->uninterpreted_option_.rep_->elements[i]);
    if ( v34.name_.current_size_ <= 1 )
    {
      v3 = (const std::string *const *)v34.name_.rep_->elements[0];
      v4 = *((unsigned __int8 *)v3 + 32);
      if ( !(_BYTE)v4 && !std::string::compare(v3[3], "allow_alias") )
        break;
    }
    google::protobuf::UninterpretedOption::~UninterpretedOption(&v34);
  }
  v22 = std::string::compare(v34.identifier_value_.ptr_, "true");
  google::protobuf::UninterpretedOption::~UninterpretedOption(&v34);
  if ( v22 )
  {
    std::operator+<char>((std::string *)&v34, "\"", a2->name_.ptr_);
    if ( 0x3FFFFFFFFFFFFFFFLL - (unsigned __int64)v34._internal_metadata_.ptr_ <= 0x5B )
      std::__throw_length_error("basic_string::append");
    v23 = (__m128i *)std::string::_M_append(
                       (std::string *const)&v34,
                       "\" declares 'option allow_alias = false;' which has no effect. Please remove the declaration.",
                       0x5CuLL);
    *(_QWORD *)v33._M_impl.gap0 = &v33._M_impl._M_header._M_parent;
    if ( (__m128i *)v23->m128i_i64[0] == &v23[1] )
    {
      *(__m128i *)&v33._M_impl._M_header._M_parent = _mm_loadu_si128(v23 + 1);
    }
    else
    {
      *(_QWORD *)v33._M_impl.gap0 = v23->m128i_i64[0];
      v33._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)v23[1].m128i_i64[0];
    }
    *(_QWORD *)&v33._M_impl._M_header._M_color = v23->m128i_i64[1];
    v23->m128i_i64[0] = (__int64)v23[1].m128i_i64;
    v23[1].m128i_i8[0] = 0;
    vptr_MessageLite = (google::protobuf::UninterpretedOption *)v34._vptr_MessageLite;
    v23->m128i_i64[1] = 0LL;
    if ( vptr_MessageLite != (google::protobuf::UninterpretedOption *)&v34._has_bits_ )
      operator delete(vptr_MessageLite);
    error_collector = this->error_collector_;
    if ( error_collector )
      (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> > *))error_collector->_vptr_ErrorCollector
       + 2))(
        error_collector,
        (unsigned int)this->input_->current_.line,
        (unsigned int)this->input_->current_.column,
        &v33);
    v26 = *(std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> > **)v33._M_impl.gap0;
    this->had_errors_ = 1;
    if ( v26 != (std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> > *)&v33._M_impl._M_header._M_parent )
      operator delete(v26);
    return v4;
  }
  v27 = a2->value_.current_size_ <= 0;
  v33._M_impl._M_header._M_color = _S_red;
  v33._M_impl._M_header._M_parent = 0LL;
  v33._M_impl._M_header._M_left = &v33._M_impl._M_header;
  v33._M_impl._M_header._M_right = &v33._M_impl._M_header;
  v33._M_impl._M_node_count = 0LL;
  v30 = 1;
  if ( v27 )
  {
LABEL_32:
    std::operator+<char>((std::string *)&v34, "\"", a2->name_.ptr_);
    if ( 0x3FFFFFFFFFFFFFFFLL - (unsigned __int64)v34._internal_metadata_.ptr_ <= 0x92 )
      std::__throw_length_error("basic_string::append");
    v17 = std::string::_M_append(
            (std::string *const)&v34,
            "\" declares support for enum aliases but no enum values share field numbers. Please remove the unnecessary '"
            "option allow_alias = true;' declaration.",
            0x93uLL);
    v31[0] = &v32;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v17->_M_dataplus._M_p == &v17->_anon_0 )
    {
      v32 = _mm_loadu_si128((const __m128i *)&v17->_anon_0);
    }
    else
    {
      v31[0] = v17->_M_dataplus._M_p;
      v32.m128i_i64[0] = v17->_anon_0._M_allocated_capacity;
    }
    M_string_length = (void *)v17->_M_string_length;
    v17->_anon_0._M_local_buf[0] = 0;
    v31[1] = M_string_length;
    v17->_M_dataplus._M_p = v17->_anon_0._M_local_buf;
    v19 = (google::protobuf::UninterpretedOption *)v34._vptr_MessageLite;
    v17->_M_string_length = 0LL;
    if ( v19 != (google::protobuf::UninterpretedOption *)&v34._has_bits_ )
      operator delete(v19);
    v20 = this->error_collector_;
    if ( v20 )
      (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, void **))v20->_vptr_ErrorCollector
       + 2))(
        v20,
        (unsigned int)this->input_->current_.line,
        (unsigned int)this->input_->current_.column,
        v31);
    v21 = (__m128i *)v31[0];
    this->had_errors_ = 1;
    if ( v21 != &v32 )
      operator delete(v21);
    v4 = 0;
    goto LABEL_20;
  }
LABEL_11:
  v7 = 0;
  do
  {
    google::protobuf::EnumValueDescriptorProto::EnumValueDescriptorProto(
      (google::protobuf::EnumValueDescriptorProto *)&v34,
      (const google::protobuf::EnumValueDescriptorProto *)a2->value_.rep_->elements[v7]);
    M_parent = (std::_Rb_tree_header *)v33._M_impl._M_header._M_parent;
    rep = (int)v34.name_.rep_;
    if ( !v33._M_impl._M_header._M_parent )
    {
      M_parent = &v33._M_impl.std::_Rb_tree_header;
      if ( (std::_Rb_tree_header *)v33._M_impl._M_header._M_left == &v33._M_impl.std::_Rb_tree_header )
      {
        v29 = 1;
        goto LABEL_29;
      }
      goto LABEL_43;
    }
    v10 = v33._M_impl._M_header._M_parent;
    v11 = &v33._M_impl.std::_Rb_tree_header;
    do
    {
      while ( SLODWORD(v34.name_.rep_) <= v10[1]._M_color )
      {
        v11 = (std::_Rb_tree_header *)v10;
        v10 = v10->_M_left;
        if ( !v10 )
          goto LABEL_17;
      }
      v10 = v10->_M_right;
    }
    while ( v10 );
LABEL_17:
    if ( v11 != &v33._M_impl.std::_Rb_tree_header && SLODWORD(v34.name_.rep_) >= SLODWORD(v11->_M_node_count) )
    {
      v4 = 1;
      google::protobuf::EnumValueDescriptorProto::~EnumValueDescriptorProto((google::protobuf::EnumValueDescriptorProto *const)&v34);
      goto LABEL_20;
    }
    while ( 1 )
    {
      M_node_count = M_parent->_M_node_count;
      if ( SLODWORD(v34.name_.rep_) >= M_node_count )
        break;
      M_left = (std::_Rb_tree_header *)M_parent->_M_header._M_left;
      v14 = 1;
      if ( !M_left )
        goto LABEL_26;
LABEL_23:
      M_parent = M_left;
    }
    M_left = (std::_Rb_tree_header *)M_parent->_M_header._M_right;
    v14 = 0;
    if ( M_left )
      goto LABEL_23;
LABEL_26:
    if ( v14 )
    {
      if ( (std::_Rb_tree_header *)v33._M_impl._M_header._M_left == M_parent )
      {
LABEL_28:
        v29 = 1;
        if ( M_parent != &v33._M_impl.std::_Rb_tree_header )
LABEL_46:
          v29 = rep < SLODWORD(M_parent->_M_node_count);
LABEL_29:
        v16 = operator new(0x28uLL);
        *(_DWORD *)(v16 + 32) = rep;
        std::_Rb_tree_insert_and_rebalance(
          v29,
          (std::_Rb_tree_node_base *)v16,
          &M_parent->_M_header,
          &v33._M_impl._M_header);
        ++v33._M_impl._M_node_count;
        goto LABEL_30;
      }
LABEL_43:
      if ( rep <= *(_DWORD *)(std::_Rb_tree_decrement(&M_parent->_M_header) + 32LL) || !M_parent )
        goto LABEL_30;
      v29 = 1;
      if ( M_parent != &v33._M_impl.std::_Rb_tree_header )
        goto LABEL_46;
      goto LABEL_29;
    }
    if ( SLODWORD(v34.name_.rep_) > M_node_count )
      goto LABEL_28;
LABEL_30:
    ++v7;
    google::protobuf::EnumValueDescriptorProto::~EnumValueDescriptorProto((google::protobuf::EnumValueDescriptorProto *const)&v34);
  }
  while ( v7 < a2->value_.current_size_ );
  if ( v30 )
    goto LABEL_32;
LABEL_61:
  v4 = 1;
LABEL_20:
  std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(
    &v33,
    (std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> >::_Link_type)v33._M_impl._M_header._M_parent);
  return v4;
};

// Line 493: range 0000000000428156-0000000000428173
void __fastcall __noreturn google::protobuf::compiler::Parser::ValidateEnum(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> > a12)
{
  struct _Unwind_Exception *v12; // rbx
  google::protobuf::EnumValueDescriptorProto *v13; // rbp

  google::protobuf::EnumValueDescriptorProto::~EnumValueDescriptorProto(v13);
  std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase(
    &a12,
    (std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int> >::_Link_type)a12._M_impl._M_header._M_parent);
  _Unwind_Resume(v12);
};

// Line 516: range 000000000DC0D9E0-000000000DC0DD1C
__int64 __fastcall google::protobuf::compiler::Parser::Parse(
        google::protobuf::compiler::Parser *this,
        google::protobuf::io::Tokenizer *a2,
        google::protobuf::FileDescriptorProto *a3)
{
  std::string *p_syntax_identifier; // r14
  std::string::pointer M_p; // rax
  google::protobuf::io::Tokenizer *input; // rdi
  unsigned int v8; // r12d
  std::string *ptr; // rdi
  google::protobuf::SourceCodeInfo *source_code_info; // r12
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  google::protobuf::internal::LogMessage_0 *v13; // rdi
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::LogMessage_0 *v15; // rax
  google::protobuf::internal::LogMessage_0 *v16; // rax
  google::protobuf::internal::LogMessage_0 *v17; // rax
  google::protobuf::internal::LogMessage_0 *v18; // rax
  google::protobuf::internal::LogFinisher v19; // [rsp+Fh] [rbp-A9h] BYREF
  google::protobuf::compiler::Parser::LocationRecorder v20; // [rsp+10h] [rbp-A8h] BYREF
  google::protobuf::SourceCodeInfo v21; // [rsp+20h] [rbp-98h] BYREF
  google::protobuf::internal::LogMessage_0 v22; // [rsp+50h] [rbp-68h] BYREF

  p_syntax_identifier = &this->syntax_identifier_;
  M_p = this->syntax_identifier_._M_dataplus._M_p;
  this->input_ = a2;
  this->had_errors_ = 0;
  this->syntax_identifier_._M_string_length = 0LL;
  *M_p = 0;
  google::protobuf::SourceCodeInfo::SourceCodeInfo(&v21);
  input = this->input_;
  this->source_code_info_ = &v21;
  if ( input->current_.type == TYPE_START )
    google::protobuf::io::Tokenizer::NextWithComments(input);
  google::protobuf::compiler::Parser::LocationRecorder::LocationRecorder(&v20, this);
  if ( this->require_syntax_identifier_ || !std::string::compare(&this->input_->current_.text, "syntax") )
  {
    v8 = google::protobuf::compiler::Parser::ParseSyntaxIdentifier(this, &v20);
    if ( !(_BYTE)v8 )
      goto LABEL_21;
    if ( a3 )
    {
      ptr = a3->syntax_.ptr_;
      a3->_has_bits_.has_bits_[0] |= 4u;
      if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(&a3->syntax_, p_syntax_identifier);
      else
        std::string::_M_assign(ptr, p_syntax_identifier);
    }
    goto LABEL_9;
  }
  if ( !this->stop_after_syntax_identifier_ )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v22,
      LOGLEVEL_WARNING_0,
      "google/protobuf/compiler/parser.cc",
      546);
    v14 = google::protobuf::internal::LogMessage::operator<<(&v22, "No syntax specified for the proto file: ");
    v15 = google::protobuf::internal::LogMessage::operator<<(v14, a3->name_.ptr_);
    v16 = google::protobuf::internal::LogMessage::operator<<(v15, ". Please use 'syntax = \"proto2\";' ");
    v17 = google::protobuf::internal::LogMessage::operator<<(v16, "or 'syntax = \"proto3\";' to specify a syntax ");
    v18 = google::protobuf::internal::LogMessage::operator<<(v17, "version. (Defaulted to proto2 syntax.)");
    google::protobuf::internal::LogFinisher::operator=(&v19, v18);
    google::protobuf::internal::LogMessage::~LogMessage(&v22);
    std::string::_M_replace(p_syntax_identifier, 0LL, this->syntax_identifier_._M_string_length, "proto2", 6uLL);
LABEL_9:
    if ( !this->stop_after_syntax_identifier_ )
    {
      while ( this->input_->current_.type != TYPE_END )
      {
        if ( !(unsigned __int8)google::protobuf::compiler::Parser::ParseTopLevelStatement(this, a3, &v20) )
        {
          google::protobuf::compiler::Parser::SkipStatement(this);
          if ( !std::string::compare(&this->input_->current_.text, "}") )
          {
            error_collector = this->error_collector_;
            strcpy((char *)&v22.line_, "Unmatched \"}\".");
            *(_QWORD *)&v22.level_ = &v22.line_;
            v22.filename_ = (const char *)14;
            if ( error_collector )
            {
              (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, google::protobuf::internal::LogMessage_0 *))error_collector->_vptr_ErrorCollector
               + 2))(
                error_collector,
                (unsigned int)this->input_->current_.line,
                (unsigned int)this->input_->current_.column,
                &v22);
              v13 = *(google::protobuf::internal::LogMessage_0 **)&v22.level_;
              this->had_errors_ = 1;
              if ( v13 != (google::protobuf::internal::LogMessage_0 *)&v22.line_ )
                operator delete(v13);
            }
            else
            {
              this->had_errors_ = 1;
            }
            google::protobuf::io::Tokenizer::NextWithComments(this->input_);
          }
        }
      }
      if ( v20.location_->span_.current_size_ <= 2 )
        google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v20);
      source_code_info = a3->source_code_info_;
      this->input_ = 0LL;
      this->source_code_info_ = 0LL;
      a3->_has_bits_.has_bits_[0] |= 0x10u;
      if ( !source_code_info )
      {
        source_code_info = (google::protobuf::SourceCodeInfo *)operator new(0x30uLL);
        google::protobuf::SourceCodeInfo::SourceCodeInfo(source_code_info);
        a3->source_code_info_ = source_code_info;
      }
      google::protobuf::SourceCodeInfo::Swap(&v21, source_code_info);
      v8 = !this->had_errors_;
      goto LABEL_18;
    }
  }
  v8 = !this->had_errors_;
LABEL_21:
  if ( v20.location_->span_.current_size_ <= 2 )
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v20);
LABEL_18:
  google::protobuf::SourceCodeInfo::~SourceCodeInfo(&v21);
  return v8;
};

// Line 578: range 000000000DC05D60-000000000DC0601D
__int64 __fastcall google::protobuf::compiler::Parser::ParseSyntaxIdentifier(
        google::protobuf::compiler::Parser *this,
        const google::protobuf::compiler::Parser::LocationRecorder *a2)
{
  google::protobuf::SourceCodeInfo::Location *location; // rbx
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  unsigned int v6; // r12d
  std::forward_iterator_tag v8; // cl
  google::protobuf::io::Tokenizer *input; // rbx
  google::protobuf::io::Tokenizer::TokenType type; // eax
  std::string::size_type M_string_length; // rdx
  char *M_p; // rsi
  unsigned int line; // eax
  unsigned int column; // eax
  int end_column; // eax
  std::string *v16; // rax
  void *v17; // rcx
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  __m128i *v19; // rdi
  google::protobuf::compiler::Parser::LocationRecorder v20; // [rsp+0h] [rbp-D8h] BYREF
  std::string __str; // [rsp+10h] [rbp-C8h] BYREF
  std::string v22; // [rsp+30h] [rbp-A8h] BYREF
  void *v23[2]; // [rsp+50h] [rbp-88h] BYREF
  __m128i v24; // [rsp+60h] [rbp-78h] BYREF
  google::protobuf::io::Tokenizer::TokenType v25; // [rsp+70h] [rbp-68h]
  std::string v26; // [rsp+78h] [rbp-60h] BYREF
  unsigned int v27; // [rsp+98h] [rbp-40h]
  unsigned int v28; // [rsp+9Ch] [rbp-3Ch]
  int v29; // [rsp+A0h] [rbp-38h]

  google::protobuf::compiler::Parser::LocationRecorder::Init(&v20, a2);
  location = v20.location_;
  current_size = v20.location_->path_.current_size_;
  if ( (_DWORD)current_size == v20.location_->path_.total_size_ )
  {
    google::protobuf::RepeatedField<int>::Reserve(&v20.location_->path_, current_size + 1);
    current_size = location->path_.current_size_;
  }
  rep = location->path_.rep_;
  location->path_.current_size_ = current_size + 1;
  rep->elements[current_size] = 12;
  if ( !(unsigned __int8)google::protobuf::compiler::Parser::Consume(
                           this,
                           "syntax",
                           "File must begin with a syntax statement, e.g. 'syntax = \"proto2\";'.")
    || !(unsigned __int8)google::protobuf::compiler::Parser::Consume(this, "=") )
  {
    v6 = 0;
    goto LABEL_5;
  }
  input = this->input_;
  type = this->input_->current_.type;
  M_string_length = this->input_->current_.text._M_string_length;
  v26._M_dataplus._M_p = v26._anon_0._M_local_buf;
  M_p = input->current_.text._M_dataplus._M_p;
  v25 = type;
  std::string::_M_construct<char *>(&v26, M_p, &M_p[M_string_length], v8);
  line = input->current_.line;
  __str._M_string_length = 0LL;
  v27 = line;
  column = input->current_.column;
  __str._anon_0._M_local_buf[0] = 0;
  v28 = column;
  end_column = input->current_.end_column;
  __str._M_dataplus._M_p = __str._anon_0._M_local_buf;
  v29 = end_column;
  if ( !(unsigned __int8)google::protobuf::compiler::Parser::ConsumeString(
                           (__int64)this,
                           (__int64)&__str,
                           "Expected syntax identifier.") )
    goto LABEL_9;
  v6 = google::protobuf::compiler::Parser::ConsumeEndOfDeclaration(this, ";", &v20);
  if ( !(_BYTE)v6 )
    goto LABEL_9;
  std::string::_M_assign(&this->syntax_identifier_, &__str);
  if ( std::string::compare(&__str, "proto2")
    && std::string::compare(&__str, "proto3")
    && !this->stop_after_syntax_identifier_ )
  {
    std::operator+<char>(&v22, "Unrecognized syntax identifier \"", &__str);
    if ( 0x3FFFFFFFFFFFFFFFLL - v22._M_string_length <= 0x35 )
      std::__throw_length_error("basic_string::append");
    v16 = std::string::_M_append(&v22, "\".  This parser only recognizes \"proto2\" and \"proto3\".", 0x36uLL);
    v23[0] = &v24;
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v16->_M_dataplus._M_p == &v16->_anon_0 )
    {
      v24 = _mm_loadu_si128((const __m128i *)&v16->_anon_0);
    }
    else
    {
      v23[0] = v16->_M_dataplus._M_p;
      v24.m128i_i64[0] = v16->_anon_0._M_allocated_capacity;
    }
    v17 = (void *)v16->_M_string_length;
    v16->_anon_0._M_local_buf[0] = 0;
    error_collector = this->error_collector_;
    v23[1] = v17;
    v16->_M_dataplus._M_p = v16->_anon_0._M_local_buf;
    v16->_M_string_length = 0LL;
    if ( error_collector )
      (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, void **))error_collector->_vptr_ErrorCollector
       + 2))(
        error_collector,
        v27,
        v28,
        v23);
    v19 = (__m128i *)v23[0];
    this->had_errors_ = 1;
    if ( v19 != &v24 )
      operator delete(v19);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v22._M_dataplus._M_p != &v22._anon_0 )
      operator delete(v22._M_dataplus._M_p);
LABEL_9:
    v6 = 0;
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__str._M_dataplus._M_p != &__str._anon_0 )
    operator delete(__str._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v26._M_dataplus._M_p != &v26._anon_0 )
  {
    operator delete(v26._M_dataplus._M_p);
    if ( v20.location_->span_.current_size_ <= 2 )
      goto LABEL_14;
    return v6;
  }
LABEL_5:
  if ( v20.location_->span_.current_size_ <= 2 )
LABEL_14:
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v20);
  return v6;
};

// Line 604: range 000000000DC0D2E0-000000000DC0D9CF
__int64 __fastcall google::protobuf::compiler::Parser::ParseTopLevelStatement(
        google::protobuf::compiler::Parser *this,
        google::protobuf::FileDescriptorProto *containing_file,
        google::protobuf::compiler::Parser::LocationRecorder *a3)
{
  unsigned int v7; // r13d
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  google::protobuf::DescriptorProto *AlignedAndAddCleanup; // r13
  unsigned int v13; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v14; // rax
  __int64 v15; // rcx
  int v16; // edx
  google::protobuf::EnumDescriptorProto *v17; // r13
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v18; // rax
  __int64 v19; // rcx
  int v20; // edx
  google::protobuf::ServiceDescriptorProto *v21; // r13
  int total_size; // esi
  google::protobuf::Arena *arena; // r13
  __int64 v24; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v25; // rdx
  int v26; // esi
  google::protobuf::Arena *v27; // r13
  __int64 v28; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v29; // rdx
  std::string::size_type M_string_length; // r13
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // esi
  google::protobuf::Arena *v34; // r13
  __int64 v35; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v36; // rdx
  std::string::size_type v37; // r13
  __int64 v38; // rax
  __int64 v39; // rdx
  google::protobuf::FileOptions *options; // r13
  std::string::pointer v41; // rax
  __m128i si128; // xmm0
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  std::string *M_p; // rdi
  int v45; // [rsp+0h] [rbp-70h]
  google::protobuf::io::Tokenizer *input; // [rsp+8h] [rbp-68h]
  __int64 v47; // [rsp+10h] [rbp-60h]
  std::string::size_type __capacity; // [rsp+18h] [rbp-58h] BYREF
  std::string v49[2]; // [rsp+20h] [rbp-50h] BYREF

  v7 = google::protobuf::compiler::Parser::TryConsumeEndOfDeclaration(this, ";", 0LL);
  if ( (_BYTE)v7 )
    return v7;
  if ( !std::string::compare(&this->input_->current_.text, "message") )
  {
    google::protobuf::compiler::Parser::LocationRecorder::LocationRecorder(
      (google::protobuf::compiler::Parser::LocationRecorder *const)v49,
      a3,
      4,
      containing_file->message_type_.current_size_);
    rep = containing_file->message_type_.rep_;
    if ( rep )
    {
      current_size = containing_file->message_type_.current_size_;
      allocated_size = rep->allocated_size;
      if ( (int)current_size < rep->allocated_size )
      {
        AlignedAndAddCleanup = (google::protobuf::DescriptorProto *)rep->elements[current_size];
        containing_file->message_type_.current_size_ = current_size + 1;
LABEL_7:
        v13 = google::protobuf::compiler::Parser::ParseMessageDefinition(
                this,
                AlignedAndAddCleanup,
                (const google::protobuf::compiler::Parser::LocationRecorder *)v49,
                containing_file);
        goto LABEL_8;
      }
      total_size = containing_file->message_type_.total_size_;
      if ( allocated_size != total_size )
      {
LABEL_21:
        arena = containing_file->message_type_.arena_;
        rep->allocated_size = allocated_size + 1;
        if ( arena )
        {
          if ( arena->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(
              arena,
              (const std::type_info *)&`typeinfo for'google::protobuf::DescriptorProto,
              0xE8uLL);
          AlignedAndAddCleanup = (google::protobuf::DescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                        &arena->impl_,
                                                                        0xE8uLL,
                                                                        google::protobuf::internal::arena_destruct_object<google::protobuf::DescriptorProto>);
          google::protobuf::DescriptorProto::DescriptorProto(AlignedAndAddCleanup);
        }
        else
        {
          AlignedAndAddCleanup = (google::protobuf::DescriptorProto *)operator new(0xE8uLL);
          google::protobuf::DescriptorProto::DescriptorProto(AlignedAndAddCleanup);
        }
        v24 = containing_file->message_type_.current_size_;
        v25 = containing_file->message_type_.rep_;
        containing_file->message_type_.current_size_ = v24 + 1;
        v25->elements[v24] = AlignedAndAddCleanup;
        goto LABEL_7;
      }
    }
    else
    {
      total_size = containing_file->message_type_.total_size_;
    }
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&containing_file->message_type_, total_size + 1);
    rep = containing_file->message_type_.rep_;
    allocated_size = rep->allocated_size;
    goto LABEL_21;
  }
  if ( !std::string::compare(&this->input_->current_.text, "enum") )
  {
    google::protobuf::compiler::Parser::LocationRecorder::LocationRecorder(
      (google::protobuf::compiler::Parser::LocationRecorder *const)v49,
      a3,
      5,
      containing_file->enum_type_.current_size_);
    v14 = containing_file->enum_type_.rep_;
    if ( v14 )
    {
      v15 = containing_file->enum_type_.current_size_;
      v16 = v14->allocated_size;
      if ( (int)v15 < v14->allocated_size )
      {
        v17 = (google::protobuf::EnumDescriptorProto *)v14->elements[v15];
        containing_file->enum_type_.current_size_ = v15 + 1;
LABEL_32:
        v13 = google::protobuf::compiler::Parser::ParseEnumDefinition(
                this,
                v17,
                (const google::protobuf::compiler::Parser::LocationRecorder *)v49,
                containing_file);
        goto LABEL_8;
      }
      v26 = containing_file->enum_type_.total_size_;
      if ( v16 != v26 )
      {
LABEL_27:
        v27 = containing_file->enum_type_.arena_;
        v14->allocated_size = v16 + 1;
        if ( v27 )
        {
          if ( v27->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(
              v27,
              (const std::type_info *)&`typeinfo for'google::protobuf::EnumDescriptorProto,
              0x40uLL);
          v17 = (google::protobuf::EnumDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                           &v27->impl_,
                                                           0x40uLL,
                                                           google::protobuf::internal::arena_destruct_object<google::protobuf::EnumDescriptorProto>);
          google::protobuf::EnumDescriptorProto::EnumDescriptorProto(v17);
        }
        else
        {
          v17 = (google::protobuf::EnumDescriptorProto *)operator new(0x40uLL);
          google::protobuf::EnumDescriptorProto::EnumDescriptorProto(v17);
        }
        v28 = containing_file->enum_type_.current_size_;
        v29 = containing_file->enum_type_.rep_;
        containing_file->enum_type_.current_size_ = v28 + 1;
        v29->elements[v28] = v17;
        goto LABEL_32;
      }
    }
    else
    {
      v26 = containing_file->enum_type_.total_size_;
    }
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&containing_file->enum_type_, v26 + 1);
    v14 = containing_file->enum_type_.rep_;
    v16 = v14->allocated_size;
    goto LABEL_27;
  }
  if ( !std::string::compare(&this->input_->current_.text, "service") )
  {
    google::protobuf::compiler::Parser::LocationRecorder::LocationRecorder(
      (google::protobuf::compiler::Parser::LocationRecorder *const)v49,
      a3,
      6,
      containing_file->service_.current_size_);
    v18 = containing_file->service_.rep_;
    if ( v18 )
    {
      v19 = containing_file->service_.current_size_;
      v20 = v18->allocated_size;
      if ( (int)v19 < v18->allocated_size )
      {
        v21 = (google::protobuf::ServiceDescriptorProto *)v18->elements[v19];
        containing_file->service_.current_size_ = v19 + 1;
LABEL_18:
        v13 = google::protobuf::compiler::Parser::ParseServiceDefinition(
                this,
                v21,
                (const google::protobuf::compiler::Parser::LocationRecorder *)v49,
                containing_file);
        goto LABEL_8;
      }
      v33 = containing_file->service_.total_size_;
      if ( v20 != v33 )
      {
LABEL_46:
        v34 = containing_file->service_.arena_;
        v18->allocated_size = v20 + 1;
        if ( v34 )
        {
          if ( v34->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(
              v34,
              (const std::type_info *)&`typeinfo for'google::protobuf::ServiceDescriptorProto,
              0x40uLL);
          v21 = (google::protobuf::ServiceDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                              &v34->impl_,
                                                              0x40uLL,
                                                              google::protobuf::internal::arena_destruct_object<google::protobuf::ServiceDescriptorProto>);
          google::protobuf::ServiceDescriptorProto::ServiceDescriptorProto(v21);
        }
        else
        {
          v21 = (google::protobuf::ServiceDescriptorProto *)operator new(0x40uLL);
          google::protobuf::ServiceDescriptorProto::ServiceDescriptorProto(v21);
        }
        v35 = containing_file->service_.current_size_;
        v36 = containing_file->service_.rep_;
        containing_file->service_.current_size_ = v35 + 1;
        v36->elements[v35] = v21;
        goto LABEL_18;
      }
    }
    else
    {
      v33 = containing_file->service_.total_size_;
    }
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&containing_file->service_, v33 + 1);
    v18 = containing_file->service_.rep_;
    v20 = v18->allocated_size;
    goto LABEL_46;
  }
  if ( !std::string::compare(&this->input_->current_.text, "extend") )
  {
    google::protobuf::compiler::Parser::LocationRecorder::Init(
      (google::protobuf::compiler::Parser::LocationRecorder *)v49,
      a3);
    M_string_length = v49[0]._M_string_length;
    v31 = *(int *)(v49[0]._M_string_length + 24);
    if ( (_DWORD)v31 == *(_DWORD *)(v49[0]._M_string_length + 28) )
    {
      google::protobuf::RepeatedField<int>::Reserve(
        (google::protobuf::RepeatedField<int> *const)(v49[0]._M_string_length + 24),
        v31 + 1);
      v31 = *(int *)(M_string_length + 24);
    }
    v32 = *(_QWORD *)(M_string_length + 32);
    *(_DWORD *)(M_string_length + 24) = v31 + 1;
    *(_DWORD *)(v32 + 4 * v31 + 8) = 7;
    v7 = google::protobuf::compiler::Parser::ParseExtend(this, &containing_file->extension_, containing_file);
    if ( *(int *)(v49[0]._M_string_length + 48) <= 2 )
      goto LABEL_9;
  }
  else
  {
    input = this->input_;
    if ( !std::string::compare(&this->input_->current_.text, "import") )
      return (unsigned int)google::protobuf::compiler::Parser::ParseImport(
                             this,
                             &containing_file->dependency_,
                             &containing_file->public_dependency_,
                             &containing_file->weak_dependency_,
                             a3,
                             v45,
                             (int)input,
                             v47);
    if ( !std::string::compare(&this->input_->current_.text, "package") )
      return (unsigned int)google::protobuf::compiler::Parser::ParsePackage(this, containing_file, a3, containing_file);
    if ( !std::string::compare(&this->input_->current_.text, "option") )
    {
      google::protobuf::compiler::Parser::LocationRecorder::Init(
        (google::protobuf::compiler::Parser::LocationRecorder *)v49,
        a3);
      v37 = v49[0]._M_string_length;
      v38 = *(int *)(v49[0]._M_string_length + 24);
      if ( (_DWORD)v38 == *(_DWORD *)(v49[0]._M_string_length + 28) )
      {
        google::protobuf::RepeatedField<int>::Reserve(
          (google::protobuf::RepeatedField<int> *const)(v49[0]._M_string_length + 24),
          v38 + 1);
        v38 = *(int *)(v37 + 24);
      }
      v39 = *(_QWORD *)(v37 + 32);
      *(_DWORD *)(v37 + 24) = v38 + 1;
      options = containing_file->options_;
      *(_DWORD *)(v39 + 4 * v38 + 8) = 8;
      containing_file->_has_bits_.has_bits_[0] |= 8u;
      if ( !options )
      {
        options = (google::protobuf::FileOptions *)operator new(0xB8uLL);
        google::protobuf::FileOptions::FileOptions(options);
        containing_file->options_ = options;
      }
      v13 = google::protobuf::compiler::Parser::ParseOption(
              this,
              options,
              (const google::protobuf::compiler::Parser::LocationRecorder *)v49,
              containing_file,
              OPTION_STATEMENT);
LABEL_8:
      v7 = v13;
      if ( *(int *)(v49[0]._M_string_length + 48) > 2 )
        return v7;
LABEL_9:
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder((google::protobuf::compiler::Parser::LocationRecorder *const)v49);
      return v7;
    }
    __capacity = 46LL;
    v49[0]._M_dataplus._M_p = v49[0]._anon_0._M_local_buf;
    v41 = std::string::_M_create(v49, &__capacity, 0LL);
    v49[0]._M_dataplus._M_p = v41;
    v49[0]._anon_0._M_allocated_capacity = __capacity;
    *(__m128i *)v41 = _mm_load_si128((const __m128i *)&xmmword_F6EE190);
    si128 = _mm_load_si128((const __m128i *)&xmmword_F6EE1A0);
    qmemcpy(v41 + 32, "g. \"message\").", 14);
    *((__m128i *)v41 + 1) = si128;
    v49[0]._M_string_length = __capacity;
    v49[0]._M_dataplus._M_p[__capacity] = 0;
    error_collector = this->error_collector_;
    if ( error_collector )
      (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))error_collector->_vptr_ErrorCollector
       + 2))(
        error_collector,
        (unsigned int)this->input_->current_.line,
        (unsigned int)this->input_->current_.column,
        v49);
    M_p = (std::string *)v49[0]._M_dataplus._M_p;
    this->had_errors_ = 1;
    if ( M_p != (std::string *)&v49[0]._anon_0 )
      operator delete(M_p);
  }
  return v7;
};

// Line 652: range 000000000DC0B460-000000000DC0B5A0
__int64 __fastcall google::protobuf::compiler::Parser::ParseMessageDefinition(
        google::protobuf::compiler::Parser *this,
        google::protobuf::DescriptorProto *a2,
        const google::protobuf::compiler::Parser::LocationRecorder *a3,
        const google::protobuf::FileDescriptorProto *a4)
{
  __int64 result; // rax
  google::protobuf::SourceCodeInfo::Location *location; // rbx
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  std::string *ptr; // rsi
  int v12; // edx
  google::protobuf::compiler::Parser::LocationRecorder v13; // [rsp+10h] [rbp-38h] BYREF

  result = google::protobuf::compiler::Parser::Consume(this, "message");
  if ( (_BYTE)result )
  {
    google::protobuf::compiler::Parser::LocationRecorder::Init(&v13, a3);
    location = v13.location_;
    current_size = v13.location_->path_.current_size_;
    if ( (_DWORD)current_size == v13.location_->path_.total_size_ )
    {
      google::protobuf::RepeatedField<int>::Reserve(&v13.location_->path_, current_size + 1);
      current_size = location->path_.current_size_;
    }
    rep = location->path_.rep_;
    location->path_.current_size_ = current_size + 1;
    rep->elements[current_size] = 1;
    google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(&v13, a2, NAME);
    ptr = a2->name_.ptr_;
    a2->_has_bits_.has_bits_[0] |= 1u;
    if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        &a2->name_,
        &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
      ptr = a2->name_.ptr_;
    }
    result = google::protobuf::compiler::Parser::ConsumeIdentifier((__int64)this, ptr, "Expected message name.");
    v12 = v13.location_->span_.current_size_;
    if ( (_BYTE)result )
    {
      if ( v12 <= 2 )
        google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v13);
      return google::protobuf::compiler::Parser::ParseMessageBlock(this, a2, a3, a4);
    }
    else if ( v12 <= 2 )
    {
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v13);
      return 0LL;
    }
  }
  return result;
};

// Line 669: range 000000000DC02CD0-000000000DC02D56
bool __fastcall google::protobuf::compiler::`anonymous namespace'::IsMessageSetWireFormatMessage(
        const google::protobuf::DescriptorProto *message)
{
  google::protobuf::MessageOptions *options; // rbp
  int v2; // ebx
  void *v3; // r12

  options = message->options_;
  if ( !options )
    options = (google::protobuf::MessageOptions *)&google::protobuf::_MessageOptions_default_instance_;
  if ( options->uninterpreted_option_.current_size_ <= 0 )
    return 0;
  v2 = 0;
  while ( 1 )
  {
    v3 = options->uninterpreted_option_.rep_->elements[v2];
    if ( *((_DWORD *)v3 + 8) == 1
      && !std::string::compare(
            *(const std::string *const *)(*(_QWORD *)(*((_QWORD *)v3 + 5) + 8LL) + 24LL),
            "message_set_wire_format")
      && !std::string::compare(*((const std::string *const *)v3 + 6), "true") )
    {
      break;
    }
    if ( options->uninterpreted_option_.current_size_ <= ++v2 )
      return 0;
  }
  return 1;
};

// Line 716: range 000000000DC0B230-000000000DC0B451
__int64 __fastcall google::protobuf::compiler::Parser::ParseMessageBlock(
        google::protobuf::compiler::Parser *this,
        google::protobuf::DescriptorProto *a2,
        const google::protobuf::compiler::Parser::LocationRecorder *a3,
        const google::protobuf::FileDescriptorProto *a4)
{
  unsigned int v8; // r12d
  std::string::pointer v10; // rax
  __m128i si128; // xmm0
  std::string::pointer M_p; // rdx
  __m128i v13; // xmm0
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  std::string *v15; // rdi
  int v16; // esi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v17; // rcx
  __int64 v18; // rax
  _DWORD *v19; // rdx
  int v20; // esi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rcx
  __int64 v22; // rax
  _DWORD *v23; // rdx
  std::string::size_type __capacity; // [rsp+8h] [rbp-50h] BYREF
  std::string v25; // [rsp+10h] [rbp-48h] BYREF

  v8 = google::protobuf::compiler::Parser::ConsumeEndOfDeclaration(this, "{", a3);
  if ( !(_BYTE)v8 )
    return v8;
  while ( 1 )
  {
    v8 = google::protobuf::compiler::Parser::TryConsumeEndOfDeclaration(this, "}", 0LL);
    if ( (_BYTE)v8 )
      break;
    if ( this->input_->current_.type == TYPE_END )
    {
      __capacity = 57LL;
      v25._M_dataplus._M_p = v25._anon_0._M_local_buf;
      v10 = std::string::_M_create(&v25, &__capacity, 0LL);
      v25._M_dataplus._M_p = v10;
      v25._anon_0._M_allocated_capacity = __capacity;
      *(__m128i *)v10 = _mm_load_si128((const __m128i *)&xmmword_F6EDF20);
      si128 = _mm_load_si128((const __m128i *)&xmmword_F6EDFA0);
      M_p = v25._M_dataplus._M_p;
      *((_QWORD *)v10 + 6) = 0x29277D2720676E69LL;
      *((__m128i *)v10 + 1) = si128;
      v13 = _mm_load_si128((const __m128i *)&xmmword_F6EDF90);
      v10[56] = 46;
      *((__m128i *)v10 + 2) = v13;
      v25._M_string_length = __capacity;
      M_p[__capacity] = 0;
      error_collector = this->error_collector_;
      if ( error_collector )
        (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))error_collector->_vptr_ErrorCollector
         + 2))(
          error_collector,
          (unsigned int)this->input_->current_.line,
          (unsigned int)this->input_->current_.column,
          &v25);
      v15 = (std::string *)v25._M_dataplus._M_p;
      this->had_errors_ = 1;
      if ( v15 != (std::string *)&v25._anon_0 )
      {
        operator delete(v15);
        return v8;
      }
      return v8;
    }
    if ( !(unsigned __int8)google::protobuf::compiler::Parser::ParseMessageStatement(this, a2, a3, a4) )
      google::protobuf::compiler::Parser::SkipStatement(this);
  }
  if ( a2->extension_range_.current_size_ <= 0
    || (v20 = !google::protobuf::compiler::`anonymous namespace'::IsMessageSetWireFormatMessage(a2)
            ? 0x20000000
            : 0x7FFFFFFF,
        a2->extension_range_.current_size_ <= 0) )
  {
    if ( a2->reserved_range_.current_size_ <= 0 )
      return v8;
  }
  else
  {
    rep = a2->extension_range_.rep_;
    v22 = 0LL;
    do
    {
      v23 = rep->elements[v22];
      if ( v23[9] == -1 )
      {
        v23[4] |= 4u;
        v23[9] = v20;
      }
      ++v22;
    }
    while ( a2->extension_range_.current_size_ > (int)v22 );
    if ( a2->reserved_range_.current_size_ <= 0 )
      return v8;
  }
  v16 = !google::protobuf::compiler::`anonymous namespace'::IsMessageSetWireFormatMessage(a2) ? 0x20000000 : 0x7FFFFFFF;
  if ( a2->reserved_range_.current_size_ <= 0 )
    return v8;
  v17 = a2->reserved_range_.rep_;
  v18 = 0LL;
  do
  {
    v19 = v17->elements[v18];
    if ( v19[7] == -1 )
    {
      v19[4] |= 2u;
      v19[7] = v16;
    }
    ++v18;
  }
  while ( a2->reserved_range_.current_size_ > (int)v18 );
  return v8;
};

// Line 743: range 000000000DC0AA50-000000000DC0B226
__int64 __fastcall google::protobuf::compiler::Parser::ParseMessageStatement(
        google::protobuf::compiler::Parser *this,
        google::protobuf::DescriptorProto *a2,
        const google::protobuf::compiler::Parser::LocationRecorder *a3,
        google::protobuf::FileDescriptorProto *a4)
{
  __int64 result; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int allocated_size; // edx
  __int64 current_size; // rcx
  google::protobuf::DescriptorProto *AlignedAndAddCleanup; // r13
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v11; // rax
  int v12; // edx
  __int64 v13; // rcx
  google::protobuf::EnumDescriptorProto *v14; // r13
  google::protobuf::SourceCodeInfo::Location *location; // rbx
  __int64 v16; // rax
  google::protobuf::RepeatedField<int>::Rep *v17; // rdx
  int total_size; // esi
  google::protobuf::Arena *arena; // r13
  __int64 v20; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v21; // rdx
  int v22; // esi
  google::protobuf::Arena *v23; // r13
  __int64 v24; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v25; // rdx
  google::protobuf::SourceCodeInfo::Location *v26; // rbx
  __int64 v27; // rax
  google::protobuf::RepeatedField<int>::Rep *v28; // rdx
  google::protobuf::SourceCodeInfo::Location *v29; // rbx
  __int64 v30; // rax
  google::protobuf::RepeatedField<int>::Rep *v31; // rdx
  google::protobuf::MessageOptions *options; // r13
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v33; // rax
  __int64 v34; // rcx
  int v35; // edx
  google::protobuf::OneofDescriptorProto *v36; // rbx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v37; // rax
  __int64 v38; // rcx
  int v39; // edx
  google::protobuf::FieldDescriptorProto *v40; // rbx
  google::protobuf::Arena *v41; // rbx
  __int64 v42; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v43; // rdx
  google::protobuf::Arena *v44; // rbx
  __int64 v45; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v46; // rdx
  int v47; // [rsp+10h] [rbp-50h]
  unsigned __int8 v49; // [rsp+18h] [rbp-48h]
  google::protobuf::compiler::Parser::LocationRecorder v50; // [rsp+20h] [rbp-40h] BYREF

  result = google::protobuf::compiler::Parser::TryConsumeEndOfDeclaration(this, ";", 0LL);
  if ( !(_BYTE)result )
  {
    if ( !std::string::compare(&this->input_->current_.text, "message") )
    {
      google::protobuf::compiler::Parser::LocationRecorder::LocationRecorder(
        &v50,
        a3,
        3,
        a2->nested_type_.current_size_);
      rep = a2->nested_type_.rep_;
      if ( rep )
      {
        allocated_size = rep->allocated_size;
        current_size = a2->nested_type_.current_size_;
        if ( (int)current_size < rep->allocated_size )
        {
          AlignedAndAddCleanup = (google::protobuf::DescriptorProto *)rep->elements[current_size];
          a2->nested_type_.current_size_ = current_size + 1;
LABEL_7:
          result = google::protobuf::compiler::Parser::ParseMessageDefinition(this, AlignedAndAddCleanup, &v50, a4);
          goto LABEL_8;
        }
        total_size = a2->nested_type_.total_size_;
        if ( allocated_size != total_size )
        {
LABEL_20:
          rep->allocated_size = allocated_size + 1;
          arena = a2->nested_type_.arena_;
          if ( arena )
          {
            if ( arena->hooks_cookie_ )
              google::protobuf::Arena::OnArenaAllocation(
                a2->nested_type_.arena_,
                (const std::type_info *)&`typeinfo for'google::protobuf::DescriptorProto,
                0xE8uLL);
            AlignedAndAddCleanup = (google::protobuf::DescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                          &arena->impl_,
                                                                          0xE8uLL,
                                                                          google::protobuf::internal::arena_destruct_object<google::protobuf::DescriptorProto>);
            google::protobuf::DescriptorProto::DescriptorProto(AlignedAndAddCleanup);
          }
          else
          {
            AlignedAndAddCleanup = (google::protobuf::DescriptorProto *)operator new(0xE8uLL);
            google::protobuf::DescriptorProto::DescriptorProto(AlignedAndAddCleanup);
          }
          v20 = a2->nested_type_.current_size_;
          v21 = a2->nested_type_.rep_;
          a2->nested_type_.current_size_ = v20 + 1;
          v21->elements[v20] = AlignedAndAddCleanup;
          goto LABEL_7;
        }
      }
      else
      {
        total_size = a2->nested_type_.total_size_;
      }
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&a2->nested_type_, total_size + 1);
      rep = a2->nested_type_.rep_;
      allocated_size = rep->allocated_size;
      goto LABEL_20;
    }
    if ( !std::string::compare(&this->input_->current_.text, "enum") )
    {
      google::protobuf::compiler::Parser::LocationRecorder::LocationRecorder(&v50, a3, 4, a2->enum_type_.current_size_);
      v11 = a2->enum_type_.rep_;
      if ( v11 )
      {
        v12 = v11->allocated_size;
        v13 = a2->enum_type_.current_size_;
        if ( (int)v13 < v11->allocated_size )
        {
          v14 = (google::protobuf::EnumDescriptorProto *)v11->elements[v13];
          a2->enum_type_.current_size_ = v13 + 1;
LABEL_31:
          result = google::protobuf::compiler::Parser::ParseEnumDefinition(this, v14, &v50, a4);
          goto LABEL_8;
        }
        v22 = a2->enum_type_.total_size_;
        if ( v12 != v22 )
        {
LABEL_26:
          v11->allocated_size = v12 + 1;
          v23 = a2->enum_type_.arena_;
          if ( v23 )
          {
            if ( v23->hooks_cookie_ )
              google::protobuf::Arena::OnArenaAllocation(
                a2->enum_type_.arena_,
                (const std::type_info *)&`typeinfo for'google::protobuf::EnumDescriptorProto,
                0x40uLL);
            v14 = (google::protobuf::EnumDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                             &v23->impl_,
                                                             0x40uLL,
                                                             google::protobuf::internal::arena_destruct_object<google::protobuf::EnumDescriptorProto>);
            google::protobuf::EnumDescriptorProto::EnumDescriptorProto(v14);
          }
          else
          {
            v14 = (google::protobuf::EnumDescriptorProto *)operator new(0x40uLL);
            google::protobuf::EnumDescriptorProto::EnumDescriptorProto(v14);
          }
          v24 = a2->enum_type_.current_size_;
          v25 = a2->enum_type_.rep_;
          a2->enum_type_.current_size_ = v24 + 1;
          v25->elements[v24] = v14;
          goto LABEL_31;
        }
      }
      else
      {
        v22 = a2->enum_type_.total_size_;
      }
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&a2->enum_type_, v22 + 1);
      v11 = a2->enum_type_.rep_;
      v12 = v11->allocated_size;
      goto LABEL_26;
    }
    if ( !std::string::compare(&this->input_->current_.text, "extensions") )
    {
      google::protobuf::compiler::Parser::LocationRecorder::Init(&v50, a3);
      location = v50.location_;
      v16 = v50.location_->path_.current_size_;
      if ( (_DWORD)v16 == v50.location_->path_.total_size_ )
      {
        google::protobuf::RepeatedField<int>::Reserve(&v50.location_->path_, v16 + 1);
        v16 = location->path_.current_size_;
      }
      v17 = location->path_.rep_;
      location->path_.current_size_ = v16 + 1;
      v17->elements[v16] = 5;
      result = google::protobuf::compiler::Parser::ParseExtensions(this, a2, &v50, a4);
      goto LABEL_8;
    }
    if ( !std::string::compare(&this->input_->current_.text, "reserved") )
      return google::protobuf::compiler::Parser::ParseReserved(this, a2, a3);
    if ( !std::string::compare(&this->input_->current_.text, "extend") )
    {
      google::protobuf::compiler::Parser::LocationRecorder::Init(&v50, a3);
      v26 = v50.location_;
      v27 = v50.location_->path_.current_size_;
      if ( (_DWORD)v27 == v50.location_->path_.total_size_ )
      {
        google::protobuf::RepeatedField<int>::Reserve(&v50.location_->path_, v27 + 1);
        v27 = v26->path_.current_size_;
      }
      v28 = v26->path_.rep_;
      v26->path_.current_size_ = v27 + 1;
      v28->elements[v27] = 6;
      result = google::protobuf::compiler::Parser::ParseExtend(this, &a2->extension_, a4);
      goto LABEL_8;
    }
    if ( !std::string::compare(&this->input_->current_.text, "option") )
    {
      google::protobuf::compiler::Parser::LocationRecorder::Init(&v50, a3);
      v29 = v50.location_;
      v30 = v50.location_->path_.current_size_;
      if ( (_DWORD)v30 == v50.location_->path_.total_size_ )
      {
        google::protobuf::RepeatedField<int>::Reserve(&v50.location_->path_, v30 + 1);
        v30 = v29->path_.current_size_;
      }
      v31 = v29->path_.rep_;
      v29->path_.current_size_ = v30 + 1;
      v31->elements[v30] = 7;
      options = a2->options_;
      a2->_has_bits_.has_bits_[0] |= 2u;
      if ( !options )
      {
        options = (google::protobuf::MessageOptions *)operator new(0x70uLL);
        google::protobuf::MessageOptions::MessageOptions(options);
        a2->options_ = options;
      }
      result = google::protobuf::compiler::Parser::ParseOption(this, options, &v50, a4, OPTION_STATEMENT);
      goto LABEL_8;
    }
    if ( !std::string::compare(&this->input_->current_.text, "oneof") )
    {
      v47 = a2->oneof_decl_.current_size_;
      google::protobuf::compiler::Parser::LocationRecorder::LocationRecorder(&v50, a3, 8, v47);
      v33 = a2->oneof_decl_.rep_;
      if ( !v33 )
        goto LABEL_71;
      v34 = a2->oneof_decl_.current_size_;
      v35 = v33->allocated_size;
      if ( (int)v34 < v33->allocated_size )
      {
        a2->oneof_decl_.current_size_ = v34 + 1;
        v36 = (google::protobuf::OneofDescriptorProto *)v33->elements[v34];
LABEL_54:
        result = google::protobuf::compiler::Parser::ParseOneof(this, v36, a2, v47, &v50, a3, a4);
        goto LABEL_8;
      }
      if ( v35 == a2->oneof_decl_.total_size_ )
      {
LABEL_71:
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&a2->oneof_decl_, a2->oneof_decl_.total_size_ + 1);
        v33 = a2->oneof_decl_.rep_;
        v35 = v33->allocated_size;
      }
      v33->allocated_size = v35 + 1;
      v41 = a2->oneof_decl_.arena_;
      if ( v41 )
      {
        if ( v41->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            a2->oneof_decl_.arena_,
            (const std::type_info *)&`typeinfo for'google::protobuf::OneofDescriptorProto,
            0x28uLL);
        v36 = (google::protobuf::OneofDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                          &v41->impl_,
                                                          0x28uLL,
                                                          google::protobuf::internal::arena_destruct_object<google::protobuf::OneofDescriptorProto>);
        google::protobuf::OneofDescriptorProto::OneofDescriptorProto(v36);
      }
      else
      {
        v36 = (google::protobuf::OneofDescriptorProto *)operator new(0x28uLL);
        google::protobuf::OneofDescriptorProto::OneofDescriptorProto(v36);
      }
      v42 = a2->oneof_decl_.current_size_;
      v43 = a2->oneof_decl_.rep_;
      a2->oneof_decl_.current_size_ = v42 + 1;
      v43->elements[v42] = v36;
      goto LABEL_54;
    }
    google::protobuf::compiler::Parser::LocationRecorder::LocationRecorder(&v50, a3, 2, a2->field_.current_size_);
    v37 = a2->field_.rep_;
    if ( !v37 )
      goto LABEL_72;
    v38 = a2->field_.current_size_;
    v39 = v37->allocated_size;
    if ( (int)v38 < v37->allocated_size )
    {
      a2->field_.current_size_ = v38 + 1;
      v40 = (google::protobuf::FieldDescriptorProto *)v37->elements[v38];
LABEL_58:
      result = google::protobuf::compiler::Parser::ParseMessageField(this, v40, a4);
LABEL_8:
      if ( v50.location_->span_.current_size_ <= 2 )
      {
        v49 = result;
        google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v50);
        return v49;
      }
      return result;
    }
    if ( v39 == a2->field_.total_size_ )
    {
LABEL_72:
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&a2->field_, a2->field_.total_size_ + 1);
      v37 = a2->field_.rep_;
      v39 = v37->allocated_size;
    }
    v37->allocated_size = v39 + 1;
    v44 = a2->field_.arena_;
    if ( v44 )
    {
      if ( v44->hooks_cookie_ )
        google::protobuf::Arena::OnArenaAllocation(
          a2->field_.arena_,
          (const std::type_info *)&`typeinfo for'google::protobuf::FieldDescriptorProto,
          0x58uLL);
      v40 = (google::protobuf::FieldDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                        &v44->impl_,
                                                        0x58uLL,
                                                        google::protobuf::internal::arena_destruct_object<google::protobuf::FieldDescriptorProto>);
      google::protobuf::FieldDescriptorProto::FieldDescriptorProto(v40);
    }
    else
    {
      v40 = (google::protobuf::FieldDescriptorProto *)operator new(0x58uLL);
      google::protobuf::FieldDescriptorProto::FieldDescriptorProto(v40);
    }
    v45 = a2->field_.current_size_;
    v46 = a2->field_.rep_;
    a2->field_.current_size_ = v45 + 1;
    v46->elements[v45] = v40;
    goto LABEL_58;
  }
  return result;
};

// Line 805: range 000000000DC0C530-000000000DC0C775
__int64 __fastcall google::protobuf::compiler::Parser::ParseMessageField(
        google::protobuf::compiler::Parser *this,
        google::protobuf::FieldDescriptorProto *descriptor,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const google::protobuf::compiler::Parser::LocationRecorder *a6,
        google::protobuf::FileDescriptorProto *containing_file)
{
  google::protobuf::compiler::Parser *parser; // rax
  __int64 source_location_table_low; // rsi
  __int64 v11; // rdx
  int v12; // eax
  std::string::pointer v14; // rax
  google::protobuf::compiler::Parser *v15; // rdx
  __m128i si128; // xmm0
  google::protobuf::SourceCodeInfo::Location *location; // rdx
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  google::protobuf::SourceCodeInfo::Location *v19; // rdi
  int v20; // [rsp-8h] [rbp-90h]
  int v21; // [rsp+0h] [rbp-88h]
  google::protobuf::compiler::Parser *v22; // [rsp+8h] [rbp-80h]
  int v23; // [rsp+10h] [rbp-78h]
  google::protobuf::FieldDescriptorProto::Label v24; // [rsp+14h] [rbp-74h] BYREF
  google::protobuf::compiler::Parser::LocationRecorder __capacity; // [rsp+18h] [rbp-70h] BYREF
  google::protobuf::compiler::Parser::LocationRecorder v26; // [rsp+28h] [rbp-60h] BYREF
  google::protobuf::compiler::Parser *v27; // [rsp+38h] [rbp-50h]
  _QWORD v28[3]; // [rsp+40h] [rbp-48h] BYREF
  int v29; // [rsp+58h] [rbp-30h]
  char v30; // [rsp+60h] [rbp-28h]

  google::protobuf::compiler::Parser::LocationRecorder::Init(
    (google::protobuf::compiler::Parser::LocationRecorder *)&__capacity.location_,
    a6);
  parser = v26.parser_;
  source_location_table_low = SLODWORD(v26.parser_->source_location_table_);
  if ( (_DWORD)source_location_table_low == HIDWORD(v26.parser_->source_location_table_) )
  {
    v22 = v26.parser_;
    google::protobuf::RepeatedField<int>::Reserve(
      (google::protobuf::RepeatedField<int> *const)&v26.parser_->source_location_table_,
      source_location_table_low + 1);
    parser = v22;
    source_location_table_low = SLODWORD(v22->source_location_table_);
  }
  v11 = *(_QWORD *)&parser->had_errors_;
  LODWORD(parser->source_location_table_) = source_location_table_low + 1;
  *(_DWORD *)(v11 + 4 * source_location_table_low + 8) = 4;
  if ( google::protobuf::compiler::Parser::ParseLabel(this, &v24, containing_file) )
  {
    v12 = v24;
    descriptor->_has_bits_.has_bits_[0] |= 0x100u;
    descriptor->label_ = v12;
    if ( v12 == 1 && !std::string::compare(&this->syntax_identifier_, "proto3") )
    {
      __capacity.parser_ = (google::protobuf::compiler::Parser *)175;
      v26.location_ = (google::protobuf::SourceCodeInfo::Location *)v28;
      v14 = std::string::_M_create((std::string *const)&v26.location_, (std::string::size_type *)&__capacity, 0LL);
      v15 = __capacity.parser_;
      v26.location_ = (google::protobuf::SourceCodeInfo::Location *)v14;
      si128 = _mm_load_si128((const __m128i *)&xmmword_F6EE070);
      qmemcpy(v14 + 160, "al' by default.", 15);
      v28[0] = v15;
      *(__m128i *)v14 = si128;
      location = v26.location_;
      *((__m128i *)v14 + 1) = _mm_load_si128((const __m128i *)&xmmword_F6EE080);
      *((__m128i *)v14 + 2) = _mm_load_si128((const __m128i *)&xmmword_F6EE090);
      *((__m128i *)v14 + 3) = _mm_load_si128((const __m128i *)&xmmword_F6EE0A0);
      *((__m128i *)v14 + 4) = _mm_load_si128((const __m128i *)&xmmword_F6EE0B0);
      *((__m128i *)v14 + 5) = _mm_load_si128((const __m128i *)&xmmword_F6EE0C0);
      *((__m128i *)v14 + 6) = _mm_load_si128((const __m128i *)&xmmword_F6EE0D0);
      *((__m128i *)v14 + 7) = _mm_load_si128((const __m128i *)&xmmword_F6EE0E0);
      *((__m128i *)v14 + 8) = _mm_load_si128((const __m128i *)&xmmword_F6EE0F0);
      *((__m128i *)v14 + 9) = _mm_load_si128((const __m128i *)&xmmword_F6EE100);
      v27 = __capacity.parser_;
      *((_BYTE *)&location->_vptr_MessageLite + (unsigned __int64)__capacity.parser_) = 0;
      error_collector = this->error_collector_;
      if ( error_collector )
        (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, google::protobuf::SourceCodeInfo::Location **))error_collector->_vptr_ErrorCollector
         + 2))(
          error_collector,
          (unsigned int)this->input_->current_.line,
          (unsigned int)this->input_->current_.column,
          &v26.location_);
      v19 = v26.location_;
      this->had_errors_ = 1;
      if ( v19 != (google::protobuf::SourceCodeInfo::Location *)v28 )
        operator delete(v19);
    }
  }
  if ( SLODWORD(v26.parser_->syntax_identifier_._M_string_length) <= 2 )
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder((google::protobuf::compiler::Parser::LocationRecorder *const)&__capacity.location_);
  return google::protobuf::compiler::Parser::ParseMessageFieldNoLabel(
           this,
           descriptor,
           containing_file,
           v20,
           v21,
           (int)v22,
           v23,
           __capacity,
           v26,
           (int)v27,
           v28[0],
           (void *)v28[1],
           (void *)v28[2],
           v29,
           v30);
};

// Line 834: range 000000000DC0B5B0-000000000DC0C522
__int64 __fastcall google::protobuf::compiler::Parser::ParseMessageFieldNoLabel(
        google::protobuf::compiler::Parser *this,
        google::protobuf::FieldDescriptorProto *descriptor,
        google::protobuf::internal::RepeatedPtrFieldBase *a3,
        const google::protobuf::compiler::Parser::LocationRecorder *a4,
        int a5,
        const google::protobuf::compiler::Parser::LocationRecorder *a6,
        google::protobuf::FileDescriptorProto *a7)
{
  bool v10; // bl
  google::protobuf::uint32 v11; // eax
  google::protobuf::SourceCodeInfo::Location *location; // rbx
  __int64 current_size; // rax
  int total_size; // esi
  google::protobuf::RepeatedField<int> *p_path; // rdi
  google::protobuf::RepeatedField<int>::Rep *v16; // rdx
  std::forward_iterator_tag v17; // cl
  int v18; // eax
  google::protobuf::io::Tokenizer *input; // rbx
  std::string::size_type M_string_length; // rdx
  std::string::size_type v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rax
  std::string *v24; // rsi
  unsigned int v25; // r14d
  int v26; // eax
  std::string::pointer v28; // rax
  __m128i v29; // xmm0
  google::protobuf::io::ErrorCollector *v30; // rdi
  google::protobuf::io::Tokenizer::Token *v31; // rdi
  google::protobuf::RepeatedField<int>::Rep *rep; // rdx
  std::string *ptr; // rdi
  std::string::pointer v34; // rax
  __m128i si128; // xmm0
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  google::protobuf::io::Tokenizer::Token *v37; // rdi
  std::string::size_type v38; // rbx
  __int64 v39; // rsi
  __int64 v40; // rax
  std::string::size_type v41; // rax
  google::protobuf::int32 parser; // edx
  google::protobuf::SourceCodeInfo::Location *v43; // rbx
  google::protobuf::RepeatedField<int>::Rep *v44; // rdx
  google::protobuf::RepeatedField<int>::Rep *v45; // rax
  google::protobuf::RepeatedField<int> *v46; // rdi
  __int64 v47; // rax
  int v48; // edx
  google::protobuf::RepeatedField<int>::Rep *v49; // rcx
  int v50; // ebx
  __int64 v51; // rax
  google::protobuf::RepeatedField<int>::Rep *v52; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v53; // rax
  int allocated_size; // edx
  __int64 v55; // rcx
  google::protobuf::DescriptorProto *AlignedAndAddCleanup; // rbx
  std::string *v57; // rdi
  std::string *v58; // rsi
  __int64 location_low; // rax
  std::string::size_type v60; // rdx
  google::protobuf::compiler::Parser *v61; // rcx
  __int64 v62; // rax
  std::string::size_type v63; // r13
  __int64 v64; // rax
  std::string::size_type v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  std::string::pointer v68; // rax
  __m128i v69; // xmm0
  google::protobuf::io::ErrorCollector *v70; // rdi
  std::string *M_p; // rdi
  std::string *v72; // rdx
  std::string::pointer v73; // rax
  char *v74; // rsi
  google::protobuf::SourceCodeInfo::Location *v75; // rbx
  __int64 v76; // rax
  google::protobuf::RepeatedField<int>::Rep *v77; // rdx
  std::string::pointer v78; // rax
  __m128i v79; // xmm0
  std::string::pointer v80; // rax
  __m128i v81; // xmm0
  std::string *v82; // rdi
  const std::string *v83; // rsi
  char v84; // r8
  int v85; // eax
  std::string::pointer v86; // rax
  __m128i v87; // xmm0
  google::protobuf::io::ErrorCollector *v88; // rdi
  std::string *v89; // rdi
  int v90; // ecx
  google::protobuf::Arena *arena; // rbx
  __int64 v92; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v93; // rdx
  google::protobuf::SourceCodeInfo::Location *v96; // [rsp+8h] [rbp-120h]
  google::protobuf::compiler::Parser::LocationRecorder *v97; // [rsp+8h] [rbp-120h]
  google::protobuf::FieldDescriptorProto::Type type; // [rsp+24h] [rbp-104h] BYREF
  std::string::size_type __capacity; // [rsp+28h] [rbp-100h] BYREF
  google::protobuf::compiler::Parser::LocationRecorder v101; // [rsp+30h] [rbp-F8h] BYREF
  std::string v102; // [rsp+40h] [rbp-E8h] BYREF
  google::protobuf::io::Tokenizer::Token v103; // [rsp+60h] [rbp-C8h] BYREF
  char v104[4]; // [rsp+A0h] [rbp-88h] BYREF
  google::protobuf::FieldDescriptorProto::Type v105; // [rsp+A4h] [rbp-84h] BYREF
  google::protobuf::FieldDescriptorProto::Type v106; // [rsp+A8h] [rbp-80h] BYREF
  std::string type_name; // [rsp+B0h] [rbp-78h] BYREF
  std::string v108; // [rsp+D0h] [rbp-58h] BYREF

  type_name._M_dataplus._M_p = type_name._anon_0._M_local_buf;
  v104[0] = 0;
  type_name._M_string_length = 0LL;
  type_name._anon_0._M_local_buf[0] = 0;
  v108._M_dataplus._M_p = v108._anon_0._M_local_buf;
  v108._M_string_length = 0LL;
  v108._anon_0._M_local_buf[0] = 0;
  google::protobuf::compiler::Parser::LocationRecorder::Init(&v101, a6);
  google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(&v101, descriptor, TYPE);
  type = FieldDescriptorProto_Type_TYPE_INT32;
  v102._M_dataplus._M_p = v102._anon_0._M_local_buf;
  v102._M_string_length = 0LL;
  v102._anon_0._M_local_buf[0] = 0;
  v10 = google::protobuf::compiler::Parser::TryConsume(this, "map");
  if ( v10 )
  {
    if ( !std::string::compare(&this->input_->current_.text, "<") )
    {
      v104[0] = 1;
      v11 = descriptor->_has_bits_.has_bits_[0];
      goto LABEL_31;
    }
    std::string::_M_replace(&v102, 0LL, v102._M_string_length, "map", 3uLL);
  }
  v11 = descriptor->_has_bits_.has_bits_[0];
  if ( !v104[0] )
  {
    if ( (v11 & 0x100) != 0 )
      goto LABEL_4;
    if ( std::string::compare(&this->syntax_identifier_, "proto3") )
    {
      if ( (descriptor->_has_bits_.has_bits_[0] & 0x100) != 0 )
      {
LABEL_4:
        if ( v10 )
          goto LABEL_5;
LABEL_54:
        if ( !google::protobuf::compiler::Parser::ParseType(this, &type, &v102) )
          goto LABEL_38;
LABEL_5:
        location = v101.location_;
        current_size = v101.location_->path_.current_size_;
        total_size = v101.location_->path_.total_size_;
        p_path = &v101.location_->path_;
        if ( v102._M_string_length )
        {
          if ( total_size == (_DWORD)current_size )
          {
            google::protobuf::RepeatedField<int>::Reserve(p_path, total_size + 1);
            current_size = location->path_.current_size_;
          }
          rep = location->path_.rep_;
          ptr = descriptor->type_name_.ptr_;
          location->path_.current_size_ = current_size + 1;
          rep->elements[current_size] = 6;
          descriptor->_has_bits_.has_bits_[0] |= 4u;
          if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
            google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(&descriptor->type_name_, &v102);
          else
            std::string::_M_assign(ptr, &v102);
        }
        else
        {
          if ( total_size == (_DWORD)current_size )
          {
            google::protobuf::RepeatedField<int>::Reserve(p_path, total_size + 1);
            current_size = location->path_.current_size_;
          }
          v16 = location->path_.rep_;
          v17.gap0[0] = current_size + 1;
          location->path_.current_size_ = current_size + 1;
          v16->elements[current_size] = 5;
          v18 = type;
          descriptor->_has_bits_.has_bits_[0] |= 0x200u;
          descriptor->type_ = v18;
        }
        goto LABEL_9;
      }
      __capacity = 47LL;
      *(_QWORD *)&v103.type = &v103.text._M_string_length;
      v34 = std::string::_M_create((std::string *const)&v103, &__capacity, 0LL);
      *(_QWORD *)&v103.type = v34;
      v103.text._M_string_length = __capacity;
      *(__m128i *)v34 = _mm_load_si128((const __m128i *)&xmmword_F6EE020);
      si128 = _mm_load_si128((const __m128i *)&xmmword_F6EE030);
      qmemcpy(v34 + 32, " or \"repeated\".", 15);
      *((__m128i *)v34 + 1) = si128;
      v103.text._M_dataplus._M_p = (std::string::pointer)__capacity;
      *(_BYTE *)(*(_QWORD *)&v103.type + __capacity) = 0;
      error_collector = this->error_collector_;
      if ( error_collector )
        (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, google::protobuf::io::Tokenizer::Token *))error_collector->_vptr_ErrorCollector
         + 2))(
          error_collector,
          (unsigned int)this->input_->current_.line,
          (unsigned int)this->input_->current_.column,
          &v103);
      v37 = *(google::protobuf::io::Tokenizer::Token **)&v103.type;
      this->had_errors_ = 1;
      if ( v37 != (google::protobuf::io::Tokenizer::Token *)&v103.text._M_string_length )
        operator delete(v37);
    }
    descriptor->_has_bits_.has_bits_[0] |= 0x100u;
    descriptor->label_ = 1;
    if ( v10 )
      goto LABEL_5;
    goto LABEL_54;
  }
LABEL_31:
  if ( (v11 & 0x80u) != 0 )
  {
    __capacity = 37LL;
    *(_QWORD *)&v103.type = &v103.text._M_string_length;
    v78 = std::string::_M_create((std::string *const)&v103, &__capacity, 0LL);
    *(_QWORD *)&v103.type = v78;
    v103.text._M_string_length = __capacity;
    *(__m128i *)v78 = _mm_load_si128((const __m128i *)&xmmword_F6EDFB0);
    v79 = _mm_load_si128((const __m128i *)&xmmword_F6EDFC0);
    *((_DWORD *)v78 + 8) = 1936093029;
    v78[36] = 46;
    *((__m128i *)v78 + 1) = v79;
    v103.text._M_dataplus._M_p = (std::string::pointer)__capacity;
    *(_BYTE *)(*(_QWORD *)&v103.type + __capacity) = 0;
    v30 = this->error_collector_;
    if ( v30 )
LABEL_35:
      (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, google::protobuf::io::Tokenizer::Token *))v30->_vptr_ErrorCollector
       + 2))(
        v30,
        (unsigned int)this->input_->current_.line,
        (unsigned int)this->input_->current_.column,
        &v103);
LABEL_36:
    v31 = *(google::protobuf::io::Tokenizer::Token **)&v103.type;
    this->had_errors_ = 1;
    if ( v31 != (google::protobuf::io::Tokenizer::Token *)&v103.text._M_string_length )
      operator delete(v31);
    goto LABEL_38;
  }
  if ( (v11 & 0x100) != 0 )
  {
    __capacity = 72LL;
    *(_QWORD *)&v103.type = &v103.text._M_string_length;
    v80 = std::string::_M_create((std::string *const)&v103, &__capacity, 0LL);
    *(_QWORD *)&v103.type = v80;
    v103.text._M_string_length = __capacity;
    *(__m128i *)v80 = _mm_load_si128((const __m128i *)&xmmword_F6EDFD0);
    v81 = _mm_load_si128((const __m128i *)&xmmword_F6EDFE0);
    *((_QWORD *)v80 + 8) = 0x2E73646C65696620LL;
    *((__m128i *)v80 + 1) = v81;
    *((__m128i *)v80 + 2) = _mm_load_si128((const __m128i *)&xmmword_F6EDFF0);
    *((__m128i *)v80 + 3) = _mm_load_si128((const __m128i *)&xmmword_F6EE000);
    v103.text._M_dataplus._M_p = (std::string::pointer)__capacity;
    *(_BYTE *)(*(_QWORD *)&v103.type + __capacity) = 0;
    v30 = this->error_collector_;
    if ( v30 )
      goto LABEL_35;
    goto LABEL_36;
  }
  if ( (v11 & 2) != 0 )
  {
    __capacity = 44LL;
    *(_QWORD *)&v103.type = &v103.text._M_string_length;
    v28 = std::string::_M_create((std::string *const)&v103, &__capacity, 0LL);
    *(_QWORD *)&v103.type = v28;
    v103.text._M_string_length = __capacity;
    *(__m128i *)v28 = _mm_load_si128((const __m128i *)&xmmword_F6EDFB0);
    v29 = _mm_load_si128((const __m128i *)&xmmword_F6EE010);
    qmemcpy(v28 + 32, " extensions.", 12);
    *((__m128i *)v28 + 1) = v29;
    v103.text._M_dataplus._M_p = (std::string::pointer)__capacity;
    *(_BYTE *)(*(_QWORD *)&v103.type + __capacity) = 0;
    v30 = this->error_collector_;
    if ( !v30 )
      goto LABEL_36;
    goto LABEL_35;
  }
  BYTE1(v11) |= 1u;
  descriptor->label_ = 3;
  descriptor->_has_bits_.has_bits_[0] = v11;
  if ( (unsigned __int8)google::protobuf::compiler::Parser::Consume(this, "<")
    && google::protobuf::compiler::Parser::ParseType(this, &v105, &type_name)
    && (unsigned __int8)google::protobuf::compiler::Parser::Consume(this, ",")
    && google::protobuf::compiler::Parser::ParseType(this, &v106, &v108)
    && (unsigned __int8)google::protobuf::compiler::Parser::Consume(this, ">") )
  {
    v75 = v101.location_;
    v76 = v101.location_->path_.current_size_;
    if ( (_DWORD)v76 == v101.location_->path_.total_size_ )
    {
      google::protobuf::RepeatedField<int>::Reserve(&v101.location_->path_, v76 + 1);
      v76 = v75->path_.current_size_;
    }
    v77 = v75->path_.rep_;
    v17.gap0[0] = v76 + 1;
    v75->path_.current_size_ = v76 + 1;
    v77->elements[v76] = 6;
LABEL_9:
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v102._M_dataplus._M_p != &v102._anon_0 )
      operator delete(v102._M_dataplus._M_p);
    if ( v101.location_->span_.current_size_ <= 2 )
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v101);
    input = this->input_;
    M_string_length = this->input_->current_.text._M_string_length;
    v103.type = this->input_->current_.type;
    v103.text._M_dataplus._M_p = v103.text._anon_0._M_local_buf;
    std::string::_M_construct<char *>(
      &v103.text,
      input->current_.text._M_dataplus._M_p,
      &input->current_.text._M_dataplus._M_p[M_string_length],
      v17);
    v103.line = input->current_.line;
    v103.column = input->current_.column;
    v103.end_column = input->current_.end_column;
    google::protobuf::compiler::Parser::LocationRecorder::Init(
      (google::protobuf::compiler::Parser::LocationRecorder *)&v102,
      a6);
    v21 = v102._M_string_length;
    v22 = *(int *)(v102._M_string_length + 24);
    if ( (_DWORD)v22 == *(_DWORD *)(v102._M_string_length + 28) )
    {
      google::protobuf::RepeatedField<int>::Reserve(
        (google::protobuf::RepeatedField<int> *const)(v102._M_string_length + 24),
        v22 + 1);
      v22 = *(int *)(v21 + 24);
    }
    v23 = *(_QWORD *)(v21 + 32);
    *(_DWORD *)(v21 + 24) = v22 + 1;
    *(_DWORD *)(v23 + 4 * v22 + 8) = 1;
    google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(
      (google::protobuf::compiler::Parser::LocationRecorder *const)&v102,
      descriptor,
      NAME);
    v24 = descriptor->name_.ptr_;
    descriptor->_has_bits_.has_bits_[0] |= 1u;
    if ( v24 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        &descriptor->name_,
        &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
      v24 = descriptor->name_.ptr_;
    }
    v25 = google::protobuf::compiler::Parser::ConsumeIdentifier((__int64)this, v24, "Expected field name.");
    v26 = *(_DWORD *)(v102._M_string_length + 48);
    if ( (_BYTE)v25 )
    {
      if ( v26 <= 2 )
        google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder((google::protobuf::compiler::Parser::LocationRecorder *const)&v102);
      if ( !(unsigned __int8)google::protobuf::compiler::Parser::Consume(this, "=", "Missing field number.") )
        goto LABEL_21;
      google::protobuf::compiler::Parser::LocationRecorder::Init(
        (google::protobuf::compiler::Parser::LocationRecorder *)&v102,
        a6);
      v38 = v102._M_string_length;
      v39 = *(int *)(v102._M_string_length + 24);
      if ( (_DWORD)v39 == *(_DWORD *)(v102._M_string_length + 28) )
      {
        google::protobuf::RepeatedField<int>::Reserve(
          (google::protobuf::RepeatedField<int> *const)(v102._M_string_length + 24),
          v39 + 1);
        v39 = *(int *)(v38 + 24);
      }
      v40 = *(_QWORD *)(v38 + 32);
      *(_DWORD *)(v38 + 24) = v39 + 1;
      *(_DWORD *)(v40 + 4 * v39 + 8) = 3;
      google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(
        (google::protobuf::compiler::Parser::LocationRecorder *const)&v102,
        descriptor,
        NUMBER);
      v25 = google::protobuf::compiler::Parser::ConsumeInteger(this, (int *)&v101, "Expected field number.");
      v41 = v102._M_string_length;
      if ( (_BYTE)v25 )
      {
        parser = (google::protobuf::int32)v101.parser_;
        descriptor->_has_bits_.has_bits_[0] |= 0x40u;
        descriptor->number_ = parser;
        if ( *(int *)(v41 + 48) <= 2 )
          google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder((google::protobuf::compiler::Parser::LocationRecorder *const)&v102);
        v25 = google::protobuf::compiler::Parser::ParseFieldOptions(this, descriptor, a6, a7);
        if ( !(_BYTE)v25 )
          goto LABEL_21;
        if ( (descriptor->_has_bits_.has_bits_[0] & 0x200) == 0 || descriptor->type_ != 10 )
        {
          if ( (unsigned __int8)google::protobuf::compiler::Parser::ConsumeEndOfDeclaration(this, ";", a6) )
          {
LABEL_103:
            if ( v104[0] )
              google::protobuf::compiler::Parser::GenerateMapEntry(this, v104, descriptor, a3);
            goto LABEL_22;
          }
LABEL_21:
          v25 = 0;
          goto LABEL_22;
        }
        google::protobuf::compiler::Parser::LocationRecorder::Init(&v101, a4);
        v43 = v101.location_;
        v44 = a6->location_->span_.rep_;
        v45 = v101.location_->span_.rep_;
        v96 = v101.location_;
        v46 = &v101.location_->path_;
        v45->elements[0] = v44->elements[0];
        v45->elements[1] = v44->elements[1];
        v47 = v43->path_.current_size_;
        v48 = v43->path_.total_size_;
        if ( (_DWORD)v47 == v48 )
        {
          google::protobuf::RepeatedField<int>::Reserve(v46, v47 + 1);
          v47 = v43->path_.current_size_;
          v96 = v101.location_;
          v48 = v101.location_->path_.total_size_;
          v46 = &v101.location_->path_;
        }
        v49 = v43->path_.rep_;
        v43->path_.current_size_ = v47 + 1;
        v49->elements[v47] = a5;
        v50 = a3->current_size_;
        v51 = v96->path_.current_size_;
        if ( v48 == (_DWORD)v51 )
        {
          google::protobuf::RepeatedField<int>::Reserve(v46, v48 + 1);
          v51 = v96->path_.current_size_;
        }
        v52 = v96->path_.rep_;
        v96->path_.current_size_ = v51 + 1;
        v52->elements[v51] = v50;
        v53 = a3->rep_;
        if ( v53 )
        {
          allocated_size = v53->allocated_size;
          v55 = a3->current_size_;
          if ( (int)v55 < v53->allocated_size )
          {
            a3->current_size_ = v55 + 1;
            AlignedAndAddCleanup = (google::protobuf::DescriptorProto *)v53->elements[v55];
LABEL_71:
            v57 = AlignedAndAddCleanup->name_.ptr_;
            v58 = descriptor->name_.ptr_;
            AlignedAndAddCleanup->_has_bits_.has_bits_[0] |= 1u;
            if ( v57 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
              google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(&AlignedAndAddCleanup->name_, v58);
            else
              std::string::_M_assign(v57, v58);
            google::protobuf::compiler::Parser::LocationRecorder::Init(
              (google::protobuf::compiler::Parser::LocationRecorder *)&v102,
              &v101);
            v97 = (google::protobuf::compiler::Parser::LocationRecorder *)v102._M_string_length;
            location_low = *(int *)(v102._M_string_length + 24);
            v60 = v102._M_string_length;
            if ( (_DWORD)location_low == *(_DWORD *)(v102._M_string_length + 28) )
            {
              google::protobuf::RepeatedField<int>::Reserve(
                (google::protobuf::RepeatedField<int> *const)(v102._M_string_length + 24),
                location_low + 1);
              v60 = v102._M_string_length;
              location_low = SLODWORD(v97[1].location_);
            }
            v61 = v97[2].parser_;
            LODWORD(v97[1].location_) = location_low + 1;
            *((_DWORD *)&v61->error_collector_ + location_low) = 1;
            v62 = *(_QWORD *)(v60 + 56);
            *(_DWORD *)(v62 + 8) = v103.line;
            *(_DWORD *)(v62 + 12) = v103.column;
            google::protobuf::compiler::Parser::LocationRecorder::EndAt(
              (google::protobuf::compiler::Parser::LocationRecorder *const)&v102,
              &v103);
            google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(
              (google::protobuf::compiler::Parser::LocationRecorder *const)&v102,
              AlignedAndAddCleanup,
              NAME);
            if ( *(int *)(v102._M_string_length + 48) <= 2 )
              google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder((google::protobuf::compiler::Parser::LocationRecorder *const)&v102);
            google::protobuf::compiler::Parser::LocationRecorder::Init(
              (google::protobuf::compiler::Parser::LocationRecorder *)&v102,
              a6);
            v63 = v102._M_string_length;
            v64 = *(int *)(v102._M_string_length + 24);
            v65 = v102._M_string_length;
            if ( (_DWORD)v64 == *(_DWORD *)(v102._M_string_length + 28) )
            {
              google::protobuf::RepeatedField<int>::Reserve(
                (google::protobuf::RepeatedField<int> *const)(v102._M_string_length + 24),
                v64 + 1);
              v65 = v102._M_string_length;
              v64 = *(int *)(v63 + 24);
            }
            v66 = *(_QWORD *)(v63 + 32);
            *(_DWORD *)(v63 + 24) = v64 + 1;
            *(_DWORD *)(v66 + 4 * v64 + 8) = 6;
            v67 = *(_QWORD *)(v65 + 56);
            *(_DWORD *)(v67 + 8) = v103.line;
            *(_DWORD *)(v67 + 12) = v103.column;
            google::protobuf::compiler::Parser::LocationRecorder::EndAt(
              (google::protobuf::compiler::Parser::LocationRecorder *const)&v102,
              &v103);
            if ( *(int *)(v102._M_string_length + 48) <= 2 )
              google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder((google::protobuf::compiler::Parser::LocationRecorder *const)&v102);
            if ( (unsigned __int8)(*AlignedAndAddCleanup->name_.ptr_->_M_dataplus._M_p - 65) > 0x19u )
            {
              v102._M_dataplus._M_p = v102._anon_0._M_local_buf;
              __capacity = 45LL;
              v68 = std::string::_M_create(&v102, &__capacity, 0LL);
              v102._M_dataplus._M_p = v68;
              v102._anon_0._M_allocated_capacity = __capacity;
              *(__m128i *)v68 = _mm_load_si128((const __m128i *)&xmmword_F6EE040);
              v69 = _mm_load_si128((const __m128i *)&xmmword_F6EE050);
              qmemcpy(v68 + 32, "pital letter.", 13);
              *((__m128i *)v68 + 1) = v69;
              v102._M_string_length = __capacity;
              v102._M_dataplus._M_p[__capacity] = 0;
              v70 = this->error_collector_;
              if ( v70 )
                (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))v70->_vptr_ErrorCollector
                 + 2))(
                  v70,
                  (unsigned int)v103.line,
                  (unsigned int)v103.column,
                  &v102);
              M_p = (std::string *)v102._M_dataplus._M_p;
              this->had_errors_ = 1;
              if ( M_p != (std::string *)&v102._anon_0 )
                operator delete(M_p);
            }
            v72 = descriptor->name_.ptr_;
            descriptor->_has_bits_.has_bits_[0] |= 1u;
            if ( v72 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
            {
              google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
                &descriptor->name_,
                &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
              v72 = descriptor->name_.ptr_;
            }
            v73 = v72->_M_dataplus._M_p;
            v74 = &v72->_M_dataplus._M_p[v72->_M_string_length];
            if ( v72->_M_dataplus._M_p != v74 )
            {
              do
              {
                if ( (unsigned __int8)(*v73 - 65) <= 0x19u )
                  *v73 += 32;
                ++v73;
              }
              while ( v74 != v73 );
            }
            v82 = descriptor->type_name_.ptr_;
            v83 = AlignedAndAddCleanup->name_.ptr_;
            descriptor->_has_bits_.has_bits_[0] |= 4u;
            if ( v82 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
              google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(&descriptor->type_name_, v83);
            else
              std::string::_M_assign(v82, v83);
            if ( !std::string::compare(&this->input_->current_.text, "{") )
            {
              v84 = google::protobuf::compiler::Parser::ParseMessageBlock(this, AlignedAndAddCleanup, &v101, a7);
              v85 = v101.location_->span_.current_size_;
              if ( v84 )
              {
                if ( v85 <= 2 )
                  google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v101);
                goto LABEL_103;
              }
            }
            else
            {
              v102._M_dataplus._M_p = v102._anon_0._M_local_buf;
              __capacity = 19LL;
              v86 = std::string::_M_create(&v102, &__capacity, 0LL);
              v87 = _mm_load_si128((const __m128i *)&xmmword_F6EE060);
              v102._M_dataplus._M_p = v86;
              v102._anon_0._M_allocated_capacity = __capacity;
              *((_WORD *)v86 + 8) = 31076;
              v86[18] = 46;
              *(__m128i *)v86 = v87;
              v102._M_string_length = __capacity;
              v102._M_dataplus._M_p[__capacity] = 0;
              v88 = this->error_collector_;
              if ( v88 )
                (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))v88->_vptr_ErrorCollector
                 + 2))(
                  v88,
                  (unsigned int)this->input_->current_.line,
                  (unsigned int)this->input_->current_.column,
                  &v102);
              v89 = (std::string *)v102._M_dataplus._M_p;
              this->had_errors_ = 1;
              if ( v89 != (std::string *)&v102._anon_0 )
                operator delete(v89);
              v85 = v101.location_->span_.current_size_;
            }
            if ( v85 <= 2 )
              google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v101);
            goto LABEL_21;
          }
          v90 = a3->total_size_;
          if ( allocated_size != v90 )
          {
LABEL_128:
            v53->allocated_size = allocated_size + 1;
            arena = a3->arena_;
            if ( a3->arena_ )
            {
              if ( arena->hooks_cookie_ )
                google::protobuf::Arena::OnArenaAllocation(
                  a3->arena_,
                  (const std::type_info *)&`typeinfo for'google::protobuf::DescriptorProto,
                  0xE8uLL);
              AlignedAndAddCleanup = (google::protobuf::DescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                            &arena->impl_,
                                                                            0xE8uLL,
                                                                            google::protobuf::internal::arena_destruct_object<google::protobuf::DescriptorProto>);
              google::protobuf::DescriptorProto::DescriptorProto(AlignedAndAddCleanup);
            }
            else
            {
              AlignedAndAddCleanup = (google::protobuf::DescriptorProto *)operator new(0xE8uLL);
              google::protobuf::DescriptorProto::DescriptorProto(AlignedAndAddCleanup);
            }
            v92 = a3->current_size_;
            v93 = a3->rep_;
            a3->current_size_ = v92 + 1;
            v93->elements[v92] = AlignedAndAddCleanup;
            goto LABEL_71;
          }
        }
        else
        {
          v90 = a3->total_size_;
        }
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a3, v90 + 1);
        v53 = a3->rep_;
        allocated_size = v53->allocated_size;
        goto LABEL_128;
      }
      if ( *(int *)(v102._M_string_length + 48) > 2 )
      {
LABEL_22:
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v103.text._M_dataplus._M_p != &v103.text._anon_0 )
          operator delete(v103.text._M_dataplus._M_p);
        goto LABEL_24;
      }
    }
    else if ( v26 > 2 )
    {
      goto LABEL_22;
    }
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder((google::protobuf::compiler::Parser::LocationRecorder *const)&v102);
    goto LABEL_22;
  }
LABEL_38:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v102._M_dataplus._M_p != &v102._anon_0 )
    operator delete(v102._M_dataplus._M_p);
  if ( v101.location_->span_.current_size_ <= 2 )
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v101);
  v25 = 0;
LABEL_24:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v108._M_dataplus._M_p != &v108._anon_0 )
    operator delete(v108._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)type_name._M_dataplus._M_p != &type_name._anon_0 )
    operator delete(type_name._M_dataplus._M_p);
  return v25;
};

// Line 991: range 000000000DC04D30-000000000DC0590C
void __fastcall google::protobuf::compiler::Parser::GenerateMapEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        google::protobuf::internal::RepeatedPtrFieldBase *a4)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  google::protobuf::DescriptorProto *AlignedAndAddCleanup; // r12
  int total_size; // esi
  google::protobuf::Arena *arena; // rdi
  __int64 v11; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v12; // rdx
  _QWORD *v13; // r14
  std::string::size_type M_string_length; // r13
  unsigned __int64 v15; // rbx
  char v16; // r15
  std::string::pointer M_p; // rax
  std::string::size_type v18; // rdx
  std::string::size_type v19; // r15
  char v20; // bp
  std::string *v21; // rdi
  std::string *ptr; // rdi
  google::protobuf::MessageOptions *options; // rbp
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v24; // rax
  __int64 v25; // rcx
  int v26; // edx
  google::protobuf::FieldDescriptorProto *v27; // r13
  std::string *v28; // rax
  std::string::pointer v29; // rdx
  __int64 v30; // rdx
  google::protobuf::uint32 v31; // eax
  int v32; // edx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v33; // rax
  __int64 v34; // rcx
  int v35; // edx
  google::protobuf::FieldDescriptorProto *v36; // r14
  std::string *v37; // rax
  std::string::pointer v38; // rdx
  __int64 v39; // rdx
  google::protobuf::uint32 v40; // eax
  int v41; // edx
  int v42; // ebx
  google::protobuf::FieldOptionsDefaultTypeInternal *v43; // rdx
  google::protobuf::FieldOptionsDefaultTypeInternal *v44; // rax
  const google::protobuf::UninterpretedOption *v45; // rbp
  std::string::size_type v46; // rdx
  std::string::size_type M_allocated_capacity; // rdx
  int v48; // esi
  google::protobuf::Arena *v49; // rbp
  __int64 v50; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v51; // rdx
  int v52; // esi
  google::protobuf::Arena *v53; // r13
  __int64 v54; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v55; // rdx
  const std::string *v56; // rsi
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v57; // rdi
  std::string *v58; // rdi
  const std::string *v59; // rsi
  __m128i *v60; // rax
  __m128i *v61; // rax
  google::protobuf::FieldOptions *v62; // r15
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v63; // rax
  __int64 v64; // rcx
  int v65; // edx
  int v66; // ecx
  __int64 v67; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v68; // rdx
  google::protobuf::FieldOptions *v69; // r15
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v70; // rax
  __int64 v71; // rcx
  int v72; // edx
  int v73; // ecx
  __int64 v74; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v75; // rdx
  google::protobuf::UninterpretedOption *v76; // rax
  google::protobuf::UninterpretedOption *v77; // rax
  google::protobuf::Arena *v80; // [rsp+10h] [rbp-88h]
  google::protobuf::internal::ArenaImpl *v81; // [rsp+10h] [rbp-88h]
  google::protobuf::Arena *v82; // [rsp+10h] [rbp-88h]
  google::protobuf::internal::ArenaImpl *v83; // [rsp+10h] [rbp-88h]
  std::string __str; // [rsp+20h] [rbp-78h] BYREF
  void *v85; // [rsp+40h] [rbp-58h]
  __int64 v86; // [rsp+48h] [rbp-50h]
  __m128i v87; // [rsp+50h] [rbp-48h] BYREF

  rep = a4->rep_;
  if ( !rep )
  {
    total_size = a4->total_size_;
    goto LABEL_57;
  }
  current_size = a4->current_size_;
  allocated_size = rep->allocated_size;
  if ( (int)current_size < rep->allocated_size )
  {
    AlignedAndAddCleanup = (google::protobuf::DescriptorProto *)rep->elements[current_size];
    a4->current_size_ = current_size + 1;
    goto LABEL_10;
  }
  total_size = a4->total_size_;
  if ( allocated_size == total_size )
  {
LABEL_57:
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a4, total_size + 1);
    arena = a4->arena_;
    ++a4->rep_->allocated_size;
    if ( arena )
      goto LABEL_6;
    goto LABEL_102;
  }
  arena = a4->arena_;
  rep->allocated_size = allocated_size + 1;
  if ( arena )
  {
LABEL_6:
    if ( arena->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        arena,
        (const std::type_info *)&`typeinfo for'google::protobuf::DescriptorProto,
        0xE8uLL);
    AlignedAndAddCleanup = (google::protobuf::DescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                  &arena->impl_,
                                                                  0xE8uLL,
                                                                  google::protobuf::internal::arena_destruct_object<google::protobuf::DescriptorProto>);
    google::protobuf::DescriptorProto::DescriptorProto(AlignedAndAddCleanup);
    goto LABEL_9;
  }
LABEL_102:
  AlignedAndAddCleanup = (google::protobuf::DescriptorProto *)operator new(0xE8uLL);
  google::protobuf::DescriptorProto::DescriptorProto(AlignedAndAddCleanup);
LABEL_9:
  v11 = a4->current_size_;
  v12 = a4->rep_;
  a4->current_size_ = v11 + 1;
  v12->elements[v11] = AlignedAndAddCleanup;
LABEL_10:
  __str._anon_0._M_local_buf[0] = 0;
  __str._M_string_length = 0LL;
  v13 = *(_QWORD **)(a3 + 24);
  __str._M_dataplus._M_p = __str._anon_0._M_local_buf;
  std::string::reserve(&__str, v13[1] + 6LL);
  M_string_length = __str._M_string_length;
  if ( v13[1] )
  {
    v15 = 0LL;
    v16 = 1;
    do
    {
      while ( 1 )
      {
        v20 = *(_BYTE *)(*v13 + v15);
        if ( v20 != 95 )
          break;
        v16 = 1;
        if ( v13[1] <= ++v15 )
          goto LABEL_22;
      }
      M_p = __str._M_dataplus._M_p;
      if ( v16 )
      {
        if ( (unsigned __int8)(v20 - 97) <= 0x19u )
        {
          M_allocated_capacity = 15LL;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__str._M_dataplus._M_p != &__str._anon_0 )
            M_allocated_capacity = __str._anon_0._M_allocated_capacity;
          if ( M_string_length + 1 > M_allocated_capacity )
          {
            std::string::_M_mutate(&__str, M_string_length, 0LL, 0LL, 1uLL);
            M_p = __str._M_dataplus._M_p;
          }
          M_p[M_string_length] = v20 - 32;
          v16 = 0;
          __str._M_string_length = M_string_length + 1;
          __str._M_dataplus._M_p[M_string_length + 1] = 0;
          M_string_length = __str._M_string_length;
        }
        else
        {
          v18 = 15LL;
          v19 = M_string_length + 1;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__str._M_dataplus._M_p != &__str._anon_0 )
            v18 = __str._anon_0._M_allocated_capacity;
          if ( v19 > v18 )
          {
            std::string::_M_mutate(&__str, M_string_length, 0LL, 0LL, 1uLL);
            M_p = __str._M_dataplus._M_p;
          }
          M_p[M_string_length] = v20;
          __str._M_string_length = M_string_length + 1;
          __str._M_dataplus._M_p[v19] = 0;
          M_string_length = __str._M_string_length;
          v16 = 0;
        }
      }
      else
      {
        v46 = 15LL;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__str._M_dataplus._M_p != &__str._anon_0 )
          v46 = __str._anon_0._M_allocated_capacity;
        if ( M_string_length + 1 > v46 )
        {
          std::string::_M_mutate(&__str, M_string_length, 0LL, 0LL, 1uLL);
          M_p = __str._M_dataplus._M_p;
        }
        M_p[M_string_length] = v20;
        __str._M_string_length = M_string_length + 1;
        __str._M_dataplus._M_p[M_string_length + 1] = 0;
        M_string_length = __str._M_string_length;
      }
      ++v15;
    }
    while ( v13[1] > v15 );
  }
LABEL_22:
  if ( 0x3FFFFFFFFFFFFFFFLL - M_string_length <= 4 )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(&__str, "Entry", 5uLL);
  v21 = *(std::string **)(a3 + 40);
  *(_DWORD *)(a3 + 16) |= 4u;
  if ( v21 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(a3 + 40, &__str);
  else
    std::string::_M_assign(v21, &__str);
  ptr = AlignedAndAddCleanup->name_.ptr_;
  AlignedAndAddCleanup->_has_bits_.has_bits_[0] |= 1u;
  if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(&AlignedAndAddCleanup->name_, &__str);
  else
    std::string::_M_assign(ptr, &__str);
  options = AlignedAndAddCleanup->options_;
  AlignedAndAddCleanup->_has_bits_.has_bits_[0] |= 2u;
  if ( !options )
  {
    options = (google::protobuf::MessageOptions *)operator new(0x70uLL);
    google::protobuf::MessageOptions::MessageOptions(options);
    AlignedAndAddCleanup->options_ = options;
  }
  v24 = AlignedAndAddCleanup->field_.rep_;
  options->_has_bits_.has_bits_[0] |= 8u;
  options->map_entry_ = 1;
  if ( !v24 )
  {
    v52 = AlignedAndAddCleanup->field_.total_size_;
    goto LABEL_99;
  }
  v25 = AlignedAndAddCleanup->field_.current_size_;
  v26 = v24->allocated_size;
  if ( (int)v25 < v24->allocated_size )
  {
    v27 = (google::protobuf::FieldDescriptorProto *)v24->elements[v25];
    AlignedAndAddCleanup->field_.current_size_ = v25 + 1;
    goto LABEL_32;
  }
  v52 = AlignedAndAddCleanup->field_.total_size_;
  if ( v26 == v52 )
  {
LABEL_99:
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&AlignedAndAddCleanup->field_, v52 + 1);
    v53 = AlignedAndAddCleanup->field_.arena_;
    ++AlignedAndAddCleanup->field_.rep_->allocated_size;
    if ( v53 )
      goto LABEL_80;
    goto LABEL_100;
  }
  v53 = AlignedAndAddCleanup->field_.arena_;
  v24->allocated_size = v26 + 1;
  if ( v53 )
  {
LABEL_80:
    if ( v53->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        v53,
        (const std::type_info *)&`typeinfo for'google::protobuf::FieldDescriptorProto,
        0x58uLL);
    v27 = (google::protobuf::FieldDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                      &v53->impl_,
                                                      0x58uLL,
                                                      google::protobuf::internal::arena_destruct_object<google::protobuf::FieldDescriptorProto>);
    google::protobuf::FieldDescriptorProto::FieldDescriptorProto(v27);
    goto LABEL_83;
  }
LABEL_100:
  v27 = (google::protobuf::FieldDescriptorProto *)operator new(0x58uLL);
  google::protobuf::FieldDescriptorProto::FieldDescriptorProto(v27);
LABEL_83:
  v54 = AlignedAndAddCleanup->field_.current_size_;
  v55 = AlignedAndAddCleanup->field_.rep_;
  AlignedAndAddCleanup->field_.current_size_ = v54 + 1;
  v55->elements[v54] = v27;
LABEL_32:
  v27->_has_bits_.has_bits_[0] |= 1u;
  v87.m128i_i32[0] = 7955819;
  v28 = v27->name_.ptr_;
  v85 = &v87;
  v86 = 3LL;
  if ( v28 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    v60 = (__m128i *)operator new(0x20uLL);
    v60->m128i_i64[0] = (__int64)v60[1].m128i_i64;
    if ( v85 == &v87 )
    {
      v60[1] = _mm_load_si128(&v87);
    }
    else
    {
      v60->m128i_i64[0] = (__int64)v85;
      v60[1].m128i_i64[0] = v87.m128i_i64[0];
    }
    v60->m128i_i64[1] = v86;
    v27->name_.ptr_ = (std::string *)v60;
  }
  else
  {
    v29 = v28->_M_dataplus._M_p;
    *(_WORD *)v29 = 25963;
    v29[2] = v87.m128i_i8[2];
    v30 = v86;
    v28->_M_string_length = v86;
    v28->_M_dataplus._M_p[v30] = 0;
    v86 = 0LL;
    *(_BYTE *)v85 = 0;
    if ( v85 != &v87 )
      operator delete(v85);
  }
  v31 = v27->_has_bits_.has_bits_[0];
  v27->label_ = 1;
  v27->number_ = 1;
  if ( !*(_QWORD *)(a2 + 24) )
  {
    v32 = *(_DWORD *)(a2 + 4);
    v27->_has_bits_.has_bits_[0] = v31 | 0x340;
    v27->type_ = v32;
    goto LABEL_37;
  }
  v27->_has_bits_.has_bits_[0] = v31 | 0x144;
  v56 = (const std::string *)(a2 + 16);
  v57 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)v27->type_name_.ptr_;
  if ( v57 == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(&v27->type_name_, v56);
LABEL_37:
    v33 = AlignedAndAddCleanup->field_.rep_;
    if ( v33 )
      goto LABEL_38;
LABEL_86:
    v48 = AlignedAndAddCleanup->field_.total_size_;
    goto LABEL_87;
  }
  std::string::_M_assign((std::string *const)v57, v56);
  v33 = AlignedAndAddCleanup->field_.rep_;
  if ( !v33 )
    goto LABEL_86;
LABEL_38:
  v34 = AlignedAndAddCleanup->field_.current_size_;
  v35 = v33->allocated_size;
  if ( (int)v34 >= v33->allocated_size )
  {
    v48 = AlignedAndAddCleanup->field_.total_size_;
    if ( v35 != v48 )
    {
      v49 = AlignedAndAddCleanup->field_.arena_;
      v33->allocated_size = v35 + 1;
      if ( v49 )
      {
LABEL_74:
        if ( v49->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            v49,
            (const std::type_info *)&`typeinfo for'google::protobuf::FieldDescriptorProto,
            0x58uLL);
        v36 = (google::protobuf::FieldDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                          &v49->impl_,
                                                          0x58uLL,
                                                          google::protobuf::internal::arena_destruct_object<google::protobuf::FieldDescriptorProto>);
        google::protobuf::FieldDescriptorProto::FieldDescriptorProto(v36);
        goto LABEL_77;
      }
LABEL_88:
      v36 = (google::protobuf::FieldDescriptorProto *)operator new(0x58uLL);
      google::protobuf::FieldDescriptorProto::FieldDescriptorProto(v36);
LABEL_77:
      v50 = AlignedAndAddCleanup->field_.current_size_;
      v51 = AlignedAndAddCleanup->field_.rep_;
      AlignedAndAddCleanup->field_.current_size_ = v50 + 1;
      v51->elements[v50] = v36;
      goto LABEL_40;
    }
LABEL_87:
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&AlignedAndAddCleanup->field_, v48 + 1);
    v49 = AlignedAndAddCleanup->field_.arena_;
    ++AlignedAndAddCleanup->field_.rep_->allocated_size;
    if ( v49 )
      goto LABEL_74;
    goto LABEL_88;
  }
  v36 = (google::protobuf::FieldDescriptorProto *)v33->elements[v34];
  AlignedAndAddCleanup->field_.current_size_ = v34 + 1;
LABEL_40:
  v36->_has_bits_.has_bits_[0] |= 1u;
  strcpy(v87.m128i_i8, "value");
  v37 = v36->name_.ptr_;
  v85 = &v87;
  v86 = 5LL;
  if ( v37 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    v61 = (__m128i *)operator new(0x20uLL);
    v61->m128i_i64[0] = (__int64)v61[1].m128i_i64;
    if ( v85 == &v87 )
    {
      v61[1] = _mm_load_si128(&v87);
    }
    else
    {
      v61->m128i_i64[0] = (__int64)v85;
      v61[1].m128i_i64[0] = v87.m128i_i64[0];
    }
    v61->m128i_i64[1] = v86;
    v36->name_.ptr_ = (std::string *)v61;
  }
  else
  {
    v38 = v37->_M_dataplus._M_p;
    *(_DWORD *)v38 = 1970037110;
    v38[4] = v87.m128i_i8[4];
    v39 = v86;
    v37->_M_string_length = v86;
    v37->_M_dataplus._M_p[v39] = 0;
    v86 = 0LL;
    *(_BYTE *)v85 = 0;
    if ( v85 != &v87 )
      operator delete(v85);
  }
  v40 = v36->_has_bits_.has_bits_[0];
  v36->label_ = 1;
  v36->number_ = 2;
  if ( *(_QWORD *)(a2 + 56) )
  {
    v58 = v36->type_name_.ptr_;
    v36->_has_bits_.has_bits_[0] = v40 | 0x144;
    v59 = (const std::string *)(a2 + 48);
    if ( v58 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(&v36->type_name_, v59);
    else
      std::string::_M_assign(v58, v59);
  }
  else
  {
    v41 = *(_DWORD *)(a2 + 8);
    v36->_has_bits_.has_bits_[0] = v40 | 0x340;
    v36->type_ = v41;
  }
  v42 = 0;
  v43 = *(google::protobuf::FieldOptionsDefaultTypeInternal **)(a3 + 64);
  while ( 1 )
  {
    v44 = &google::protobuf::_FieldOptions_default_instance_;
    if ( v43 )
      v44 = v43;
    if ( v42 >= *((_DWORD *)&v44->_instance.union_.align_to_ptr + 22) )
      break;
    v45 = *(const google::protobuf::UninterpretedOption **)(*((_QWORD *)&v44->_instance.union_.align_to_ptr + 12)
                                                          + 8LL * v42
                                                          + 8);
    if ( v45->name_.current_size_ != 1 )
      goto LABEL_46;
    if ( std::string::compare(*((const std::string *const *)v45->name_.rep_->elements[0] + 3), "enforce_utf8")
      || *((_BYTE *)v45->name_.rep_->elements[0] + 32) )
    {
      goto LABEL_55;
    }
    if ( v27->type_ == 9 )
    {
      v69 = v27->options_;
      v27->_has_bits_.has_bits_[0] |= 0x20u;
      if ( !v69 )
      {
        v69 = (google::protobuf::FieldOptions *)operator new(0x78uLL);
        google::protobuf::FieldOptions::FieldOptions(v69);
        v27->options_ = v69;
      }
      v70 = v69->uninterpreted_option_.rep_;
      if ( v70 )
      {
        v71 = v69->uninterpreted_option_.current_size_;
        v72 = v70->allocated_size;
        if ( (int)v71 < v70->allocated_size )
        {
          v76 = (google::protobuf::UninterpretedOption *)v70->elements[v71];
          v69->uninterpreted_option_.current_size_ = v71 + 1;
          google::protobuf::UninterpretedOption::CopyFrom(v76, v45);
          goto LABEL_54;
        }
        v73 = v69->uninterpreted_option_.total_size_;
        if ( v72 != v73 )
          goto LABEL_122;
      }
      else
      {
        v73 = v69->uninterpreted_option_.total_size_;
      }
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v69->uninterpreted_option_, v73 + 1);
      v70 = v69->uninterpreted_option_.rep_;
      v72 = v70->allocated_size;
LABEL_122:
      v70->allocated_size = v72 + 1;
      v82 = v69->uninterpreted_option_.arena_;
      if ( v82 )
      {
        if ( v82->hooks_cookie_ )
          google::protobuf::Arena::OnArenaAllocation(
            v82,
            (const std::type_info *)&`typeinfo for'google::protobuf::UninterpretedOption,
            0x60uLL);
        v83 = (google::protobuf::internal::ArenaImpl *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                         &v82->impl_,
                                                         0x60uLL,
                                                         google::protobuf::internal::arena_destruct_object<google::protobuf::UninterpretedOption>);
        google::protobuf::UninterpretedOption::UninterpretedOption((google::protobuf::UninterpretedOption *)v83);
      }
      else
      {
        v83 = (google::protobuf::internal::ArenaImpl *)operator new(0x60uLL);
        google::protobuf::UninterpretedOption::UninterpretedOption((google::protobuf::UninterpretedOption *)v83);
      }
      v74 = v69->uninterpreted_option_.current_size_;
      v75 = v69->uninterpreted_option_.rep_;
      v69->uninterpreted_option_.current_size_ = v74 + 1;
      v75->elements[v74] = v83;
      google::protobuf::UninterpretedOption::CopyFrom((google::protobuf::UninterpretedOption *const)v83, v45);
    }
LABEL_54:
    if ( v36->type_ == 9 )
    {
      v62 = v36->options_;
      v36->_has_bits_.has_bits_[0] |= 0x20u;
      if ( !v62 )
      {
        v62 = (google::protobuf::FieldOptions *)operator new(0x78uLL);
        google::protobuf::FieldOptions::FieldOptions(v62);
        v36->options_ = v62;
      }
      v63 = v62->uninterpreted_option_.rep_;
      if ( !v63 )
      {
        v66 = v62->uninterpreted_option_.total_size_;
LABEL_130:
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&v62->uninterpreted_option_, v66 + 1);
        v63 = v62->uninterpreted_option_.rep_;
        v65 = v63->allocated_size;
LABEL_112:
        v63->allocated_size = v65 + 1;
        v80 = v62->uninterpreted_option_.arena_;
        if ( v80 )
        {
          if ( v80->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(
              v80,
              (const std::type_info *)&`typeinfo for'google::protobuf::UninterpretedOption,
              0x60uLL);
          v81 = (google::protobuf::internal::ArenaImpl *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                           &v80->impl_,
                                                           0x60uLL,
                                                           google::protobuf::internal::arena_destruct_object<google::protobuf::UninterpretedOption>);
          google::protobuf::UninterpretedOption::UninterpretedOption((google::protobuf::UninterpretedOption *)v81);
        }
        else
        {
          v81 = (google::protobuf::internal::ArenaImpl *)operator new(0x60uLL);
          google::protobuf::UninterpretedOption::UninterpretedOption((google::protobuf::UninterpretedOption *)v81);
        }
        v67 = v62->uninterpreted_option_.current_size_;
        v68 = v62->uninterpreted_option_.rep_;
        v62->uninterpreted_option_.current_size_ = v67 + 1;
        v68->elements[v67] = v81;
        google::protobuf::UninterpretedOption::CopyFrom((google::protobuf::UninterpretedOption *const)v81, v45);
        goto LABEL_55;
      }
      v64 = v62->uninterpreted_option_.current_size_;
      v65 = v63->allocated_size;
      if ( (int)v64 >= v63->allocated_size )
      {
        v66 = v62->uninterpreted_option_.total_size_;
        if ( v65 == v66 )
          goto LABEL_130;
        goto LABEL_112;
      }
      v77 = (google::protobuf::UninterpretedOption *)v63->elements[v64];
      v62->uninterpreted_option_.current_size_ = v64 + 1;
      google::protobuf::UninterpretedOption::CopyFrom(v77, v45);
    }
LABEL_55:
    v43 = *(google::protobuf::FieldOptionsDefaultTypeInternal **)(a3 + 64);
LABEL_46:
    ++v42;
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__str._M_dataplus._M_p != &__str._anon_0 )
    operator delete(__str._M_dataplus._M_p);
};

// Line 1055: range 000000000DC08480-000000000DC08638
__int64 __fastcall google::protobuf::compiler::Parser::ParseFieldOptions(
        google::protobuf::compiler::Parser *this,
        google::protobuf::FieldDescriptorProto *descriptor,
        const google::protobuf::compiler::Parser::LocationRecorder *a3,
        const google::protobuf::FileDescriptorProto *a4)
{
  int v7; // r8d
  __int64 result; // rax
  google::protobuf::SourceCodeInfo::Location *location; // r14
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  char v12; // al
  google::protobuf::FieldOptions *options; // r14
  unsigned __int8 v14; // [rsp+Fh] [rbp-39h]
  google::protobuf::compiler::Parser::LocationRecorder v15; // [rsp+10h] [rbp-38h] BYREF

  v7 = std::string::compare(&this->input_->current_.text, "[");
  result = 1LL;
  if ( v7 )
    return result;
  google::protobuf::compiler::Parser::LocationRecorder::Init(&v15, a3);
  location = v15.location_;
  current_size = v15.location_->path_.current_size_;
  if ( (_DWORD)current_size == v15.location_->path_.total_size_ )
  {
    google::protobuf::RepeatedField<int>::Reserve(&v15.location_->path_, current_size + 1);
    current_size = location->path_.current_size_;
  }
  rep = location->path_.rep_;
  location->path_.current_size_ = current_size + 1;
  rep->elements[current_size] = 8;
  if ( (unsigned __int8)google::protobuf::compiler::Parser::Consume(this, "[") )
  {
    while ( 1 )
    {
      if ( !std::string::compare(&this->input_->current_.text, "default") )
      {
        v12 = google::protobuf::compiler::Parser::ParseDefaultAssignment(this, descriptor, a3, a4);
      }
      else
      {
        if ( !std::string::compare(&this->input_->current_.text, "json_name") )
        {
          if ( !(unsigned __int8)google::protobuf::compiler::Parser::ParseJsonName(this, descriptor, a3, a4) )
            break;
          goto LABEL_9;
        }
        options = descriptor->options_;
        descriptor->_has_bits_.has_bits_[0] |= 0x20u;
        if ( !options )
        {
          options = (google::protobuf::FieldOptions *)operator new(0x78uLL);
          google::protobuf::FieldOptions::FieldOptions(options);
          descriptor->options_ = options;
        }
        v12 = google::protobuf::compiler::Parser::ParseOption(this, options, &v15, a4, OPTION_ASSIGNMENT);
      }
      if ( !v12 )
        break;
LABEL_9:
      if ( !google::protobuf::compiler::Parser::TryConsume(this, ",") )
      {
        result = google::protobuf::compiler::Parser::Consume(this, "]");
        goto LABEL_14;
      }
    }
  }
  result = 0LL;
LABEL_14:
  if ( v15.location_->span_.current_size_ <= 2 )
  {
    v14 = result;
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v15);
    return v14;
  }
  return result;
};

// Line 1085: range 000000000DC06FD0-000000000DC07770
__int64 __fastcall google::protobuf::compiler::Parser::ParseDefaultAssignment(
        google::protobuf::compiler::Parser *this,
        google::protobuf::FieldDescriptorProto *descriptor,
        const google::protobuf::compiler::Parser::LocationRecorder *a3,
        const google::protobuf::FileDescriptorProto *a4)
{
  std::string::pointer v7; // rax
  __m128i si128; // xmm0
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  std::string *M_p; // rdi
  std::string *ptr; // rax
  unsigned int v12; // r12d
  google::protobuf::SourceCodeInfo::Location *location; // rbx
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  std::string *v17; // r13
  google::protobuf::uint32 v18; // eax
  int type; // eax
  google::protobuf::uint64 v20; // r14
  std::string::pointer v21; // rdi
  std::string::pointer v22; // rax
  __m128i v23; // xmm0
  google::protobuf::io::ErrorCollector *v24; // rdi
  std::string *v25; // rdi
  std::string::pointer v26; // rax
  __m128i v27; // xmm0
  google::protobuf::io::ErrorCollector *v28; // rdi
  std::string *v29; // rdi
  char v30; // al
  std::string::$CFBEC286C7F52157F7E59FC354047095 *p_anon_0; // rdi
  std::string::size_type M_string_length; // rdx
  std::string::size_type M_allocated_capacity; // rcx
  std::string::pointer v34; // rax
  __m128i v35; // xmm0
  unsigned __int64 v36; // [rsp+8h] [rbp-80h]
  unsigned __int64 i; // [rsp+18h] [rbp-70h] BYREF
  google::protobuf::compiler::Parser::LocationRecorder __capacity; // [rsp+20h] [rbp-68h] BYREF
  std::string src; // [rsp+30h] [rbp-58h] BYREF

  if ( (descriptor->_has_bits_.has_bits_[0] & 8) != 0 )
  {
    __capacity.parser_ = (google::protobuf::compiler::Parser *)29;
    src._M_dataplus._M_p = src._anon_0._M_local_buf;
    v7 = std::string::_M_create(&src, (std::string::size_type *)&__capacity, 0LL);
    si128 = _mm_load_si128((const __m128i *)&xmmword_F6EDE50);
    src._M_dataplus._M_p = v7;
    src._anon_0._M_allocated_capacity = (std::string::size_type)__capacity.parser_;
    qmemcpy(v7 + 16, "on \"default\".", 13);
    *(__m128i *)v7 = si128;
    src._M_string_length = (std::string::size_type)__capacity.parser_;
    src._M_dataplus._M_p[(unsigned __int64)__capacity.parser_] = 0;
    error_collector = this->error_collector_;
    if ( error_collector )
      (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))error_collector->_vptr_ErrorCollector
       + 2))(
        error_collector,
        (unsigned int)this->input_->current_.line,
        (unsigned int)this->input_->current_.column,
        &src);
    M_p = (std::string *)src._M_dataplus._M_p;
    this->had_errors_ = 1;
    if ( M_p != (std::string *)&src._anon_0 )
      operator delete(M_p);
    ptr = descriptor->default_value_.ptr_;
    if ( ptr != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      ptr->_M_string_length = 0LL;
      *ptr->_M_dataplus._M_p = 0;
    }
    descriptor->_has_bits_.has_bits_[0] &= ~8u;
  }
  if ( (unsigned __int8)google::protobuf::compiler::Parser::Consume(this, "default")
    && (v12 = google::protobuf::compiler::Parser::Consume(this, "="), (_BYTE)v12) )
  {
    google::protobuf::compiler::Parser::LocationRecorder::Init(&__capacity, a3);
    location = __capacity.location_;
    current_size = __capacity.location_->path_.current_size_;
    if ( (_DWORD)current_size == __capacity.location_->path_.total_size_ )
    {
      google::protobuf::RepeatedField<int>::Reserve(&__capacity.location_->path_, current_size + 1);
      current_size = location->path_.current_size_;
    }
    rep = location->path_.rep_;
    location->path_.current_size_ = current_size + 1;
    rep->elements[current_size] = 7;
    google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(&__capacity, descriptor, DEFAULT_VALUE);
    v17 = descriptor->default_value_.ptr_;
    v18 = descriptor->_has_bits_.has_bits_[0] | 8;
    descriptor->_has_bits_.has_bits_[0] = v18;
    if ( v17 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        &descriptor->default_value_,
        &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
      v17 = descriptor->default_value_.ptr_;
      v18 = descriptor->_has_bits_.has_bits_[0];
    }
    if ( (v18 & 0x200) != 0 )
    {
      type = descriptor->type_;
      switch ( type )
      {
        case 1:
        case 2:
          if ( google::protobuf::compiler::Parser::TryConsume(this, "-") )
          {
            if ( v17->_M_string_length == 0x3FFFFFFFFFFFFFFFLL )
              std::__throw_length_error("basic_string::append");
            std::string::_M_append(v17, "-", 1uLL);
          }
          if ( !(unsigned __int8)google::protobuf::compiler::Parser::ConsumeNumber(
                                   this,
                                   (double *)&i,
                                   "Expected number.") )
            goto LABEL_50;
          google::protobuf::SimpleDtoa[abi:cxx11](&src);
          std::string::_M_append(v17, src._M_dataplus._M_p, src._M_string_length);
          goto LABEL_26;
        case 3:
        case 5:
        case 15:
        case 16:
        case 17:
        case 18:
          if ( ((type - 15) & 0xFFFFFFFD) == 0 || (v20 = 0x7FFFFFFFFFFFFFFFLL, type == 5) )
            v20 = 0x7FFFFFFFLL;
          if ( google::protobuf::compiler::Parser::TryConsume(this, "-") )
          {
            if ( v17->_M_string_length == 0x3FFFFFFFFFFFFFFFLL )
              std::__throw_length_error("basic_string::append");
            std::string::_M_append(v17, "-", 1uLL);
            ++v20;
          }
          if ( (unsigned __int8)google::protobuf::compiler::Parser::ConsumeInteger64(
                                  this,
                                  v20,
                                  &i,
                                  "Expected integer for field default value.") )
            goto LABEL_25;
          goto LABEL_50;
        case 4:
        case 6:
        case 7:
        case 13:
          if ( type == 13 || type == 7 )
            v36 = 0xFFFFFFFFLL;
          else
            v36 = -1LL;
          if ( google::protobuf::compiler::Parser::TryConsume(this, "-") )
          {
            i = 49LL;
            src._M_dataplus._M_p = src._anon_0._M_local_buf;
            v22 = std::string::_M_create(&src, &i, 0LL);
            src._M_dataplus._M_p = v22;
            src._anon_0._M_allocated_capacity = i;
            *(__m128i *)v22 = _mm_load_si128((const __m128i *)&xmmword_F6EDE60);
            v23 = _mm_load_si128((const __m128i *)&xmmword_F6EDE70);
            v22[48] = 46;
            *((__m128i *)v22 + 1) = v23;
            *((__m128i *)v22 + 2) = _mm_load_si128((const __m128i *)&xmmword_F6EDE80);
            src._M_string_length = i;
            src._M_dataplus._M_p[i] = 0;
            v24 = this->error_collector_;
            if ( v24 )
              (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))v24->_vptr_ErrorCollector
               + 2))(
                v24,
                (unsigned int)this->input_->current_.line,
                (unsigned int)this->input_->current_.column,
                &src);
            v25 = (std::string *)src._M_dataplus._M_p;
            this->had_errors_ = 1;
            if ( v25 != (std::string *)&src._anon_0 )
              operator delete(v25);
          }
          if ( !(unsigned __int8)google::protobuf::compiler::Parser::ConsumeInteger64(
                                   this,
                                   v36,
                                   &i,
                                   "Expected integer for field default value.") )
            goto LABEL_50;
LABEL_25:
          google::protobuf::SimpleItoa[abi:cxx11](&src, i);
          std::string::_M_append(v17, src._M_dataplus._M_p, src._M_string_length);
LABEL_26:
          v21 = src._M_dataplus._M_p;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
            goto LABEL_27;
          break;
        case 8:
          if ( google::protobuf::compiler::Parser::TryConsume(this, "true") )
          {
            std::string::_M_replace(v17, 0LL, v17->_M_string_length, "true", 4uLL);
          }
          else if ( google::protobuf::compiler::Parser::TryConsume(this, "false") )
          {
            std::string::_M_replace(v17, 0LL, v17->_M_string_length, "false", 5uLL);
          }
          else
          {
            i = 27LL;
            src._M_dataplus._M_p = src._anon_0._M_local_buf;
            v34 = std::string::_M_create(&src, &i, 0LL);
            v35 = _mm_load_si128((const __m128i *)&xmmword_F6EDE90);
            src._M_dataplus._M_p = v34;
            src._anon_0._M_allocated_capacity = i;
            qmemcpy(v34 + 16, "or \"false\".", 11);
            *(__m128i *)v34 = v35;
            src._M_string_length = i;
            src._M_dataplus._M_p[i] = 0;
            v28 = this->error_collector_;
            if ( v28 )
LABEL_47:
              (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))v28->_vptr_ErrorCollector
               + 2))(
                v28,
                (unsigned int)this->input_->current_.line,
                (unsigned int)this->input_->current_.column,
                &src);
LABEL_48:
            v29 = (std::string *)src._M_dataplus._M_p;
            this->had_errors_ = 1;
            if ( v29 != (std::string *)&src._anon_0 )
              operator delete(v29);
LABEL_50:
            v12 = 0;
          }
          break;
        case 9:
          v30 = google::protobuf::compiler::Parser::ConsumeString(
                  (__int64)this,
                  (__int64)v17,
                  "Expected string for field default value.");
          goto LABEL_52;
        case 10:
        case 11:
          i = 35LL;
          src._M_dataplus._M_p = src._anon_0._M_local_buf;
          v26 = std::string::_M_create(&src, &i, 0LL);
          src._M_dataplus._M_p = v26;
          src._anon_0._M_allocated_capacity = i;
          *(__m128i *)v26 = _mm_load_si128((const __m128i *)&xmmword_F6EDEA0);
          v27 = _mm_load_si128((const __m128i *)&xmmword_F6EDEB0);
          *((_WORD *)v26 + 16) = 29541;
          v26[34] = 46;
          *((__m128i *)v26 + 1) = v27;
          src._M_string_length = i;
          src._M_dataplus._M_p[i] = 0;
          v28 = this->error_collector_;
          if ( v28 )
            goto LABEL_47;
          goto LABEL_48;
        case 12:
          if ( !(unsigned __int8)google::protobuf::compiler::Parser::ConsumeString(
                                   (__int64)this,
                                   (__int64)v17,
                                   "Expected string.") )
            goto LABEL_50;
          google::protobuf::CEscape(&src);
          p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v17->_M_dataplus._M_p;
          M_string_length = src._M_string_length;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p == &src._anon_0 )
          {
            if ( src._M_string_length )
            {
              if ( src._M_string_length == 1 )
                p_anon_0->_M_local_buf[0] = src._anon_0._M_local_buf[0];
              else
                memcpy(p_anon_0, &src._anon_0, src._M_string_length);
              M_string_length = src._M_string_length;
              p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v17->_M_dataplus._M_p;
            }
            v17->_M_string_length = M_string_length;
            p_anon_0->_M_local_buf[M_string_length] = 0;
            p_anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p;
          }
          else
          {
            if ( p_anon_0 == &v17->_anon_0 )
            {
              v17->_M_dataplus._M_p = src._M_dataplus._M_p;
              v17->_M_string_length = M_string_length;
              v17->_anon_0._M_allocated_capacity = src._anon_0._M_allocated_capacity;
            }
            else
            {
              v17->_M_dataplus._M_p = src._M_dataplus._M_p;
              M_allocated_capacity = v17->_anon_0._M_allocated_capacity;
              v17->_M_string_length = M_string_length;
              v17->_anon_0._M_allocated_capacity = src._anon_0._M_allocated_capacity;
              if ( p_anon_0 )
              {
                src._M_dataplus._M_p = (std::string::pointer)p_anon_0;
                src._anon_0._M_allocated_capacity = M_allocated_capacity;
                goto LABEL_59;
              }
            }
            src._M_dataplus._M_p = src._anon_0._M_local_buf;
            p_anon_0 = &src._anon_0;
          }
LABEL_59:
          src._M_string_length = 0LL;
          p_anon_0->_M_local_buf[0] = 0;
          v21 = src._M_dataplus._M_p;
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)src._M_dataplus._M_p != &src._anon_0 )
LABEL_27:
            operator delete(v21);
          break;
        case 14:
          v30 = google::protobuf::compiler::Parser::ConsumeIdentifier(
                  (__int64)this,
                  v17,
                  "Expected enum identifier for field default value.");
LABEL_52:
          if ( !v30 )
            goto LABEL_50;
          break;
        default:
          break;
      }
    }
    else
    {
      std::string::_M_assign(v17, &this->input_->current_.text);
      google::protobuf::io::Tokenizer::Next(this->input_);
    }
    if ( __capacity.location_->span_.current_size_ <= 2 )
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&__capacity);
  }
  else
  {
    return 0;
  }
  return v12;
};

// Line 1222: range 000000000DC07780-000000000DC0795F
__int64 __fastcall google::protobuf::compiler::Parser::ParseJsonName(
        google::protobuf::compiler::Parser *this,
        google::protobuf::FieldDescriptorProto *descriptor,
        const google::protobuf::compiler::Parser::LocationRecorder *a3,
        const google::protobuf::FileDescriptorProto *a4)
{
  std::string::pointer v7; // rax
  __m128i si128; // xmm0
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  std::string *M_p; // rdi
  std::string *ptr; // rax
  __int64 result; // rax
  std::string::size_type M_string_length; // r12
  __int64 v14; // rsi
  __int64 v15; // rax
  std::string *v16; // rsi
  unsigned __int8 v17; // [rsp+Fh] [rbp-59h]
  std::string::size_type __capacity; // [rsp+18h] [rbp-50h] BYREF
  std::string v19; // [rsp+20h] [rbp-48h] BYREF

  if ( (descriptor->_has_bits_.has_bits_[0] & 0x10) != 0 )
  {
    __capacity = 31LL;
    v19._M_dataplus._M_p = v19._anon_0._M_local_buf;
    v7 = std::string::_M_create(&v19, &__capacity, 0LL);
    si128 = _mm_load_si128((const __m128i *)&xmmword_F6EDE50);
    v19._M_dataplus._M_p = v7;
    v19._anon_0._M_allocated_capacity = __capacity;
    qmemcpy(v7 + 16, "on \"json_name\".", 15);
    *(__m128i *)v7 = si128;
    v19._M_string_length = __capacity;
    v19._M_dataplus._M_p[__capacity] = 0;
    error_collector = this->error_collector_;
    if ( error_collector )
      (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))error_collector->_vptr_ErrorCollector
       + 2))(
        error_collector,
        (unsigned int)this->input_->current_.line,
        (unsigned int)this->input_->current_.column,
        &v19);
    M_p = (std::string *)v19._M_dataplus._M_p;
    this->had_errors_ = 1;
    if ( M_p != (std::string *)&v19._anon_0 )
      operator delete(M_p);
    ptr = descriptor->json_name_.ptr_;
    if ( ptr != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      ptr->_M_string_length = 0LL;
      *ptr->_M_dataplus._M_p = 0;
    }
    descriptor->_has_bits_.has_bits_[0] &= ~0x10u;
  }
  if ( !(unsigned __int8)google::protobuf::compiler::Parser::Consume(this, "json_name")
    || !(unsigned __int8)google::protobuf::compiler::Parser::Consume(this, "=") )
  {
    return 0LL;
  }
  google::protobuf::compiler::Parser::LocationRecorder::Init(
    (google::protobuf::compiler::Parser::LocationRecorder *)&v19,
    a3);
  M_string_length = v19._M_string_length;
  v14 = *(int *)(v19._M_string_length + 24);
  if ( (_DWORD)v14 == *(_DWORD *)(v19._M_string_length + 28) )
  {
    google::protobuf::RepeatedField<int>::Reserve(
      (google::protobuf::RepeatedField<int> *const)(v19._M_string_length + 24),
      v14 + 1);
    v14 = *(int *)(M_string_length + 24);
  }
  v15 = *(_QWORD *)(M_string_length + 32);
  *(_DWORD *)(M_string_length + 24) = v14 + 1;
  *(_DWORD *)(v15 + 4 * v14 + 8) = 10;
  google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(
    (google::protobuf::compiler::Parser::LocationRecorder *const)&v19,
    descriptor,
    OPTION_VALUE);
  v16 = descriptor->json_name_.ptr_;
  descriptor->_has_bits_.has_bits_[0] |= 0x10u;
  if ( v16 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
      &descriptor->json_name_,
      &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
    v16 = descriptor->json_name_.ptr_;
  }
  result = google::protobuf::compiler::Parser::ConsumeString(
             (__int64)this,
             (__int64)v16,
             "Expected string for JSON name.");
  if ( *(int *)(v19._M_string_length + 48) <= 2 )
  {
    v17 = result;
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder((google::protobuf::compiler::Parser::LocationRecorder *const)&v19);
    return v17;
  }
  return result;
};

// Line 1243: range 000000000DC048C0-000000000DC04D26
__int64 __fastcall google::protobuf::compiler::Parser::ParseOptionNamePart(
        google::protobuf::compiler::Parser *this,
        google::protobuf::UninterpretedOption *a2,
        const google::protobuf::compiler::Parser::LocationRecorder *a3,
        const google::protobuf::FileDescriptorProto *a4)
{
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  google::protobuf::UninterpretedOption_NamePart *AlignedAndAddCleanup; // rbp
  int total_size; // esi
  google::protobuf::Arena *arena; // rdi
  __int64 v13; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v14; // rdx
  google::protobuf::io::Tokenizer *input; // rax
  google::protobuf::SourceCodeInfo::Location *location; // r13
  __int64 v17; // rsi
  google::protobuf::io::Tokenizer *v18; // rdi
  google::protobuf::RepeatedField<int>::Rep *v19; // rax
  bool v20; // zf
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rdi
  std::string *v22; // rdi
  google::protobuf::SourceCodeInfo::Location *v23; // r13
  __int64 v24; // rsi
  google::protobuf::RepeatedField<int>::Rep *v25; // rax
  unsigned int v26; // r12d
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v27; // rdi
  google::protobuf::compiler::Parser::LocationRecorder v29; // [rsp+10h] [rbp-68h] BYREF
  std::string __s[2]; // [rsp+20h] [rbp-58h] BYREF

  rep = a2->name_.rep_;
  if ( !rep )
  {
    total_size = a2->name_.total_size_;
    goto LABEL_26;
  }
  current_size = a2->name_.current_size_;
  allocated_size = rep->allocated_size;
  if ( (int)current_size < rep->allocated_size )
  {
    AlignedAndAddCleanup = (google::protobuf::UninterpretedOption_NamePart *)rep->elements[current_size];
    a2->name_.current_size_ = current_size + 1;
    goto LABEL_10;
  }
  total_size = a2->name_.total_size_;
  if ( allocated_size == total_size )
  {
LABEL_26:
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&a2->name_, total_size + 1);
    arena = a2->name_.arena_;
    ++a2->name_.rep_->allocated_size;
    if ( arena )
      goto LABEL_6;
    goto LABEL_42;
  }
  arena = a2->name_.arena_;
  rep->allocated_size = allocated_size + 1;
  if ( arena )
  {
LABEL_6:
    if ( arena->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        arena,
        (const std::type_info *)&`typeinfo for'google::protobuf::UninterpretedOption_NamePart,
        0x28uLL);
    AlignedAndAddCleanup = (google::protobuf::UninterpretedOption_NamePart *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                               &arena->impl_,
                                                                               0x28uLL,
                                                                               google::protobuf::internal::arena_destruct_object<google::protobuf::UninterpretedOption_NamePart>);
    google::protobuf::UninterpretedOption_NamePart::UninterpretedOption_NamePart(AlignedAndAddCleanup);
    goto LABEL_9;
  }
LABEL_42:
  AlignedAndAddCleanup = (google::protobuf::UninterpretedOption_NamePart *)operator new(0x28uLL);
  google::protobuf::UninterpretedOption_NamePart::UninterpretedOption_NamePart(AlignedAndAddCleanup);
LABEL_9:
  v13 = a2->name_.current_size_;
  v14 = a2->name_.rep_;
  a2->name_.current_size_ = v13 + 1;
  v14->elements[v13] = AlignedAndAddCleanup;
LABEL_10:
  input = this->input_;
  __s[0]._M_string_length = 0LL;
  __s[0]._M_dataplus._M_p = __s[0]._anon_0._M_local_buf;
  __s[0]._anon_0._M_local_buf[0] = 0;
  if ( !std::string::compare(&input->current_.text, "(") )
  {
    if ( (unsigned __int8)google::protobuf::compiler::Parser::Consume(this, "(") )
    {
      google::protobuf::compiler::Parser::LocationRecorder::Init(&v29, a3);
      location = v29.location_;
      v17 = v29.location_->path_.current_size_;
      if ( (_DWORD)v17 == v29.location_->path_.total_size_ )
      {
        google::protobuf::RepeatedField<int>::Reserve(&v29.location_->path_, v17 + 1);
        v17 = location->path_.current_size_;
      }
      v18 = this->input_;
      v19 = location->path_.rep_;
      location->path_.current_size_ = v17 + 1;
      v20 = v18->current_.type == TYPE_IDENTIFIER;
      v19->elements[v17] = 1;
      if ( v20 )
      {
        if ( (unsigned __int8)google::protobuf::compiler::Parser::ConsumeIdentifier(
                                (__int64)this,
                                __s,
                                "Expected identifier.") )
        {
          ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)AlignedAndAddCleanup->name_part_.ptr_;
          AlignedAndAddCleanup->_has_bits_.has_bits_[0] |= 1u;
          if ( ptr == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          {
            google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
              &AlignedAndAddCleanup->name_part_,
              &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
            ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)AlignedAndAddCleanup->name_part_.ptr_;
          }
          goto LABEL_20;
        }
LABEL_39:
        if ( v29.location_->span_.current_size_ <= 2 )
          google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v29);
      }
      else
      {
        while ( !std::string::compare(&v18->current_.text, ".") )
        {
          if ( !(unsigned __int8)google::protobuf::compiler::Parser::Consume(this, ".") )
            goto LABEL_39;
          v22 = AlignedAndAddCleanup->name_part_.ptr_;
          AlignedAndAddCleanup->_has_bits_.has_bits_[0] |= 1u;
          if ( v22 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          {
            google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
              &AlignedAndAddCleanup->name_part_,
              &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
            v22 = AlignedAndAddCleanup->name_part_.ptr_;
          }
          if ( v22->_M_string_length == 0x3FFFFFFFFFFFFFFFLL )
            std::__throw_length_error("basic_string::append");
          std::string::_M_append(v22, ".", 1uLL);
          if ( !(unsigned __int8)google::protobuf::compiler::Parser::ConsumeIdentifier(
                                   (__int64)this,
                                   __s,
                                   "Expected identifier.") )
            goto LABEL_39;
          ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)AlignedAndAddCleanup->name_part_.ptr_;
          AlignedAndAddCleanup->_has_bits_.has_bits_[0] |= 1u;
          if ( ptr == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          {
            google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
              &AlignedAndAddCleanup->name_part_,
              &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
            ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)AlignedAndAddCleanup->name_part_.ptr_;
          }
LABEL_20:
          std::string::_M_append((std::string *const)ptr, __s[0]._M_dataplus._M_p, __s[0]._M_string_length);
          v18 = this->input_;
        }
        if ( v29.location_->span_.current_size_ <= 2 )
          google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v29);
        v26 = google::protobuf::compiler::Parser::Consume(this, ")");
        if ( (_BYTE)v26 )
        {
          AlignedAndAddCleanup->_has_bits_.has_bits_[0] |= 2u;
          AlignedAndAddCleanup->is_extension_ = 1;
          goto LABEL_36;
        }
      }
    }
    v26 = 0;
    goto LABEL_36;
  }
  google::protobuf::compiler::Parser::LocationRecorder::Init(&v29, a3);
  v23 = v29.location_;
  v24 = v29.location_->path_.current_size_;
  if ( (_DWORD)v24 == v29.location_->path_.total_size_ )
  {
    google::protobuf::RepeatedField<int>::Reserve(&v29.location_->path_, v24 + 1);
    v24 = v23->path_.current_size_;
  }
  v25 = v23->path_.rep_;
  v23->path_.current_size_ = v24 + 1;
  v25->elements[v24] = 1;
  v26 = google::protobuf::compiler::Parser::ConsumeIdentifier((__int64)this, __s, "Expected identifier.");
  if ( (_BYTE)v26 )
  {
    v27 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)AlignedAndAddCleanup->name_part_.ptr_;
    AlignedAndAddCleanup->_has_bits_.has_bits_[0] |= 1u;
    if ( v27 == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        &AlignedAndAddCleanup->name_part_,
        &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
      v27 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)AlignedAndAddCleanup->name_part_.ptr_;
    }
    std::string::_M_append((std::string *const)v27, __s[0]._M_dataplus._M_p, __s[0]._M_string_length);
    AlignedAndAddCleanup->_has_bits_.has_bits_[0] |= 2u;
    AlignedAndAddCleanup->is_extension_ = 0;
  }
  if ( v29.location_->span_.current_size_ <= 2 )
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v29);
LABEL_36:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__s[0]._M_dataplus._M_p != &__s[0]._anon_0 )
    operator delete(__s[0]._M_dataplus._M_p);
  return v26;
};

// Line 1278: range 000000000DC03CA0-000000000DC03E78
__int64 __fastcall google::protobuf::compiler::Parser::ParseUninterpretedBlock(
        google::protobuf::compiler::Parser *a1,
        std::string *a2)
{
  unsigned int v3; // r13d
  google::protobuf::io::Tokenizer *input; // rdi
  int i; // r12d
  std::string::size_type M_string_length; // r15
  std::string::pointer M_p; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 M_allocated_capacity; // rdx
  std::string::pointer v11; // rax
  std::string::pointer v12; // rax
  __m128i si128; // xmm0
  std::string::pointer v14; // rdx
  __m128i v15; // xmm0
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  std::string *v17; // rdi
  std::string::size_type __capacity; // [rsp+18h] [rbp-60h] BYREF
  std::string v19; // [rsp+20h] [rbp-58h] BYREF

  v3 = google::protobuf::compiler::Parser::Consume(a1, "{");
  if ( (_BYTE)v3 )
  {
    input = a1->input_;
    for ( i = 1; a1->input_->current_.type != TYPE_END; input = a1->input_ )
    {
      if ( !std::string::compare(&input->current_.text, "{") )
      {
        ++i;
      }
      else if ( !std::string::compare(&a1->input_->current_.text, "}") && !--i )
      {
        google::protobuf::io::Tokenizer::Next(a1->input_);
        return v3;
      }
      M_string_length = a2->_M_string_length;
      if ( M_string_length )
      {
        M_p = a2->_M_dataplus._M_p;
        v9 = M_string_length + 1;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)a2->_M_dataplus._M_p == &a2->_anon_0 )
          M_allocated_capacity = 15LL;
        else
          M_allocated_capacity = a2->_anon_0._M_allocated_capacity;
        if ( v9 > M_allocated_capacity )
        {
          std::string::_M_mutate(a2, a2->_M_string_length, 0LL, 0LL, 1uLL);
          M_p = a2->_M_dataplus._M_p;
          v9 = M_string_length + 1;
        }
        M_p[M_string_length] = 32;
        v11 = a2->_M_dataplus._M_p;
        a2->_M_string_length = v9;
        v11[M_string_length + 1] = 0;
      }
      std::string::_M_append(a2, a1->input_->current_.text._M_dataplus._M_p, a1->input_->current_.text._M_string_length);
      google::protobuf::io::Tokenizer::Next(a1->input_);
    }
    __capacity = 55LL;
    v19._M_dataplus._M_p = v19._anon_0._M_local_buf;
    v12 = std::string::_M_create(&v19, &__capacity, 0LL);
    v19._M_dataplus._M_p = v12;
    v19._anon_0._M_allocated_capacity = __capacity;
    *(__m128i *)v12 = _mm_load_si128((const __m128i *)&xmmword_F6EDE10);
    si128 = _mm_load_si128((const __m128i *)&xmmword_F6EDE20);
    *((_WORD *)v12 + 26) = 25973;
    v14 = v19._M_dataplus._M_p;
    *((__m128i *)v12 + 1) = si128;
    v15 = _mm_load_si128((const __m128i *)&xmmword_F6EDE30);
    *((_DWORD *)v12 + 12) = 1818326560;
    v12[54] = 46;
    *((__m128i *)v12 + 2) = v15;
    v19._M_string_length = __capacity;
    v14[__capacity] = 0;
    error_collector = a1->error_collector_;
    if ( error_collector )
      (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))error_collector->_vptr_ErrorCollector
       + 2))(
        error_collector,
        (unsigned int)a1->input_->current_.line,
        (unsigned int)a1->input_->current_.column,
        &v19);
    v17 = (std::string *)v19._M_dataplus._M_p;
    a1->had_errors_ = 1;
    if ( v17 != (std::string *)&v19._anon_0 )
      operator delete(v17);
    return 0;
  }
  return v3;
};

// Line 1308: range 000000000DC07970-000000000DC08472
__int64 __fastcall google::protobuf::compiler::Parser::ParseOption(
        google::protobuf::compiler::Parser *this,
        google::protobuf::Message *a2,
        const google::protobuf::compiler::Parser::LocationRecorder *a3,
        const google::protobuf::FileDescriptorProto *a4,
        google::protobuf::compiler::Parser::OptionStyle a5)
{
  const google::protobuf::Descriptor *v9; // r13
  std::string::pointer v10; // rax
  __m128i si128; // xmm0
  const google::protobuf::FieldDescriptor *FieldByName; // r13
  const google::protobuf::Message::Reflection *(__fastcall *v13)(const google::protobuf::Message *const); // rdx
  __int64 v14; // rdx
  __int64 v15; // rdi
  int v16; // eax
  const google::protobuf::Message::Reflection *(__fastcall *v17)(const google::protobuf::Message *const); // rdx
  __int64 v18; // rdx
  __int64 v19; // rdi
  google::protobuf::UninterpretedOption *v20; // r12
  google::protobuf::SourceCodeInfo::Location *location; // rbx
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  int v24; // r13d
  const char *filename; // rbx
  __int64 v26; // rsi
  __int64 v27; // rax
  char v28; // al
  int v29; // edx
  int v30; // r13d
  const char *v31; // rbx
  __int64 v32; // rsi
  __int64 v33; // rax
  char v34; // r8
  int v35; // eax
  unsigned int v36; // r13d
  google::protobuf::SourceCodeInfo::Location *v38; // r14
  __int64 v39; // rax
  google::protobuf::RepeatedField<int>::Rep *v40; // rdx
  std::string::pointer v41; // rax
  __m128i v42; // xmm0
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  google::protobuf::SourceCodeInfo::Location *v44; // r14
  bool v45; // bl
  google::protobuf::internal::LogMessage_0 *v46; // rax
  google::protobuf::internal::LogMessage_0 *v47; // rsi
  google::protobuf::SourceCodeInfo::Location *v48; // r14
  __int64 v49; // rax
  google::protobuf::RepeatedField<int>::Rep *v50; // rdx
  char v51; // al
  double v52; // xmm0_8
  google::protobuf::uint64 v53; // rsi
  char v54; // al
  __int64 v55; // rax
  int total_size; // edx
  google::protobuf::RepeatedField<int> *p_path; // rdi
  google::protobuf::SourceCodeInfo::Location *v58; // rcx
  google::protobuf::RepeatedField<int>::Rep *v59; // rdx
  __int64 v60; // rax
  google::protobuf::SourceCodeInfo::Location *v61; // rbx
  __int64 v62; // rax
  google::protobuf::RepeatedField<int>::Rep *v63; // rdx
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v64; // rsi
  char v65; // al
  std::string::pointer v66; // rax
  __m128i v67; // xmm0
  google::protobuf::SourceCodeInfo::Location *v68; // r14
  __int64 v69; // rax
  google::protobuf::RepeatedField<int>::Rep *v70; // rdx
  std::string::pointer v71; // rax
  __m128i v72; // xmm0
  google::protobuf::internal::LogMessage_0 *v73; // rax
  google::protobuf::internal::ExplicitlyConstructed<std::string > *ptr; // rdi
  std::string::pointer v75; // rax
  __m128i v76; // xmm0
  google::protobuf::RepeatedField<int>::Rep *v77; // rdx
  google::protobuf::uint64 v78; // rax
  std::string::size_type v80; // [rsp+18h] [rbp-A0h] BYREF
  google::protobuf::compiler::Parser::LocationRecorder v81; // [rsp+20h] [rbp-98h] BYREF
  google::protobuf::compiler::Parser::LocationRecorder __capacity; // [rsp+30h] [rbp-88h] BYREF
  google::protobuf::internal::LogMessage_0 key[2]; // [rsp+40h] [rbp-78h] BYREF

  v9 = (const google::protobuf::Descriptor *)(*((__int64 (__fastcall **)(google::protobuf::Message *))a2->_vptr_MessageLite
                                              + 24))(a2);
  *(_QWORD *)&key[0].level_ = &key[0].line_;
  __capacity.parser_ = (google::protobuf::compiler::Parser *)20;
  v10 = std::string::_M_create((std::string *const)key, (std::string::size_type *)&__capacity, 0LL);
  si128 = _mm_load_si128((const __m128i *)&xmmword_F6EDEC0);
  *(_QWORD *)&key[0].level_ = v10;
  *(_QWORD *)&key[0].line_ = __capacity.parser_;
  *((_DWORD *)v10 + 4) = 1852795252;
  *(__m128i *)v10 = si128;
  key[0].filename_ = (const char *)__capacity.parser_;
  *((_BYTE *)&__capacity.parser_->input_ + *(_QWORD *)&key[0].level_) = 0;
  FieldByName = google::protobuf::Descriptor::FindFieldByName(v9, (const std::string *)key);
  if ( *(google::protobuf::internal::LogMessage_0 **)&key[0].level_ != (google::protobuf::internal::LogMessage_0 *)&key[0].line_ )
    operator delete(*(void **)&key[0].level_);
  if ( !FieldByName )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      key,
      LOGLEVEL_FATAL_0,
      "google/protobuf/compiler/parser.cc",
      1312);
    v46 = google::protobuf::internal::LogMessage::operator<<(key, "CHECK failed: uninterpreted_option_field != NULL: ");
    v47 = google::protobuf::internal::LogMessage::operator<<(
            v46,
            "No field named \"uninterpreted_option\" in the Options proto.");
    google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&__capacity, v47);
    google::protobuf::internal::LogMessage::~LogMessage(key);
  }
  v13 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)a2->_vptr_MessageLite + 23);
  if ( v13 == google::protobuf::Message::GetReflection )
  {
    (*((void (__fastcall **)(google::protobuf::Message *))a2->_vptr_MessageLite + 24))(a2);
    v15 = v14;
  }
  else
  {
    v15 = (__int64)v13(a2);
  }
  v16 = (*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v15 + 48LL))(
          v15,
          a2,
          FieldByName);
  google::protobuf::compiler::Parser::LocationRecorder::LocationRecorder(&v81, a3, FieldByName->number_, v16);
  if ( a5 == OPTION_STATEMENT && !(unsigned __int8)google::protobuf::compiler::Parser::Consume(this, "option") )
    goto LABEL_26;
  v17 = (const google::protobuf::Message::Reflection *(__fastcall *)(const google::protobuf::Message *const))*((_QWORD *)a2->_vptr_MessageLite + 23);
  if ( v17 == google::protobuf::Message::GetReflection )
  {
    (*((void (__fastcall **)(google::protobuf::Message *))a2->_vptr_MessageLite + 24))(a2);
    v19 = v18;
  }
  else
  {
    v19 = (__int64)v17(a2);
  }
  v20 = (google::protobuf::UninterpretedOption *)(*(__int64 (__fastcall **)(__int64, google::protobuf::Message *, const google::protobuf::FieldDescriptor *, _QWORD))(*(_QWORD *)v19 + 600LL))(
                                                   v19,
                                                   a2,
                                                   FieldByName,
                                                   0LL);
  google::protobuf::compiler::Parser::LocationRecorder::Init(&__capacity, &v81);
  location = __capacity.location_;
  current_size = __capacity.location_->path_.current_size_;
  if ( (_DWORD)current_size == __capacity.location_->path_.total_size_ )
  {
    google::protobuf::RepeatedField<int>::Reserve(&__capacity.location_->path_, current_size + 1);
    current_size = location->path_.current_size_;
  }
  rep = location->path_.rep_;
  location->path_.current_size_ = current_size + 1;
  rep->elements[current_size] = 2;
  google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(&__capacity, v20, OPTION_NAME);
  v24 = v20->name_.current_size_;
  google::protobuf::compiler::Parser::LocationRecorder::Init(
    (google::protobuf::compiler::Parser::LocationRecorder *)key,
    &__capacity);
  filename = key[0].filename_;
  v26 = *((int *)key[0].filename_ + 6);
  if ( (_DWORD)v26 == *((_DWORD *)key[0].filename_ + 7) )
  {
    google::protobuf::RepeatedField<int>::Reserve(
      (google::protobuf::RepeatedField<int> *const)(key[0].filename_ + 24),
      v26 + 1);
    v26 = *((int *)filename + 6);
  }
  v27 = *((_QWORD *)filename + 4);
  *((_DWORD *)filename + 6) = v26 + 1;
  *(_DWORD *)(v27 + 4 * v26 + 8) = v24;
  v28 = google::protobuf::compiler::Parser::ParseOptionNamePart(
          this,
          v20,
          (const google::protobuf::compiler::Parser::LocationRecorder *)key,
          a4);
  v29 = *((_DWORD *)key[0].filename_ + 12);
  if ( !v28 )
  {
    if ( v29 <= 2 )
    {
LABEL_24:
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder((google::protobuf::compiler::Parser::LocationRecorder *const)key);
LABEL_25:
      if ( __capacity.location_->span_.current_size_ > 2 )
        goto LABEL_26;
    }
    else if ( __capacity.location_->span_.current_size_ > 2 )
    {
      goto LABEL_26;
    }
LABEL_40:
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&__capacity);
    goto LABEL_26;
  }
  if ( v29 <= 2 )
    goto LABEL_22;
  while ( !std::string::compare(&this->input_->current_.text, ".") )
  {
    if ( !(unsigned __int8)google::protobuf::compiler::Parser::Consume(this, ".") )
      goto LABEL_25;
    v30 = v20->name_.current_size_;
    google::protobuf::compiler::Parser::LocationRecorder::Init(
      (google::protobuf::compiler::Parser::LocationRecorder *)key,
      &__capacity);
    v31 = key[0].filename_;
    v32 = *((int *)key[0].filename_ + 6);
    if ( (_DWORD)v32 == *((_DWORD *)key[0].filename_ + 7) )
    {
      google::protobuf::RepeatedField<int>::Reserve(
        (google::protobuf::RepeatedField<int> *const)(key[0].filename_ + 24),
        v32 + 1);
      v32 = *((int *)v31 + 6);
    }
    v33 = *((_QWORD *)v31 + 4);
    *((_DWORD *)v31 + 6) = v32 + 1;
    *(_DWORD *)(v33 + 4 * v32 + 8) = v30;
    v34 = google::protobuf::compiler::Parser::ParseOptionNamePart(
            this,
            v20,
            (const google::protobuf::compiler::Parser::LocationRecorder *)key,
            a4);
    v35 = *((_DWORD *)key[0].filename_ + 12);
    if ( !v34 )
    {
      if ( v35 > 2 )
        goto LABEL_25;
      goto LABEL_24;
    }
    if ( v35 <= 2 )
LABEL_22:
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder((google::protobuf::compiler::Parser::LocationRecorder *const)key);
  }
  if ( __capacity.location_->span_.current_size_ <= 2 )
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&__capacity);
  v36 = google::protobuf::compiler::Parser::Consume(this, "=");
  if ( (_BYTE)v36 )
  {
    google::protobuf::compiler::Parser::LocationRecorder::Init(&__capacity, &v81);
    google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(&__capacity, v20, OPTION_VALUE);
    v45 = google::protobuf::compiler::Parser::TryConsume(this, "-");
    switch ( this->input_->current_.type )
    {
      case TYPE_START:
        google::protobuf::internal::LogMessage::LogMessage(
          key,
          LOGLEVEL_FATAL_0,
          "google/protobuf/compiler/parser.cc",
          1365);
        v73 = google::protobuf::internal::LogMessage::operator<<(
                key,
                "Trying to read value before any tokens have been read.");
        google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v80, v73);
        google::protobuf::internal::LogMessage::~LogMessage(key);
        v44 = __capacity.location_;
        goto LABEL_39;
      case TYPE_END:
        *(_QWORD *)&key[0].level_ = &key[0].line_;
        v80 = 52LL;
        v66 = std::string::_M_create((std::string *const)key, &v80, 0LL);
        *(_QWORD *)&key[0].level_ = v66;
        *(_QWORD *)&key[0].line_ = v80;
        *(__m128i *)v66 = _mm_load_si128((const __m128i *)&xmmword_F6EDE10);
        v67 = _mm_load_si128((const __m128i *)&xmmword_F6EDE20);
        *((_DWORD *)v66 + 12) = 778401132;
        *((__m128i *)v66 + 1) = v67;
        *((__m128i *)v66 + 2) = _mm_load_si128((const __m128i *)&xmmword_F6EDED0);
        key[0].filename_ = (const char *)v80;
        *(_BYTE *)(*(_QWORD *)&key[0].level_ + v80) = 0;
        error_collector = this->error_collector_;
        if ( error_collector )
          goto LABEL_34;
        goto LABEL_35;
      case TYPE_IDENTIFIER:
        v68 = __capacity.location_;
        v69 = __capacity.location_->path_.current_size_;
        if ( (_DWORD)v69 == __capacity.location_->path_.total_size_ )
        {
          google::protobuf::RepeatedField<int>::Reserve(&__capacity.location_->path_, v69 + 1);
          v69 = v68->path_.current_size_;
        }
        v70 = v68->path_.rep_;
        v68->path_.current_size_ = v69 + 1;
        v70->elements[v69] = 3;
        *(_QWORD *)&key[0].level_ = &key[0].line_;
        if ( v45 )
        {
          v80 = 37LL;
          v71 = std::string::_M_create((std::string *const)key, &v80, 0LL);
          *(_QWORD *)&key[0].level_ = v71;
          *(_QWORD *)&key[0].line_ = v80;
          *(__m128i *)v71 = _mm_load_si128((const __m128i *)&xmmword_F6EDEE0);
          v72 = _mm_load_si128((const __m128i *)&xmmword_F6EDEF0);
          *((_DWORD *)v71 + 8) = 1919248742;
          v71[36] = 46;
          *((__m128i *)v71 + 1) = v72;
          key[0].filename_ = (const char *)v80;
          *(_BYTE *)(*(_QWORD *)&key[0].level_ + v80) = 0;
          error_collector = this->error_collector_;
          if ( !error_collector )
            goto LABEL_35;
          goto LABEL_34;
        }
        key[0].filename_ = 0LL;
        LOBYTE(key[0].line_) = 0;
        if ( !(unsigned __int8)google::protobuf::compiler::Parser::ConsumeIdentifier(
                                 (__int64)this,
                                 (std::string *)key,
                                 "Expected identifier.") )
          goto LABEL_36;
        ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)v20->identifier_value_.ptr_;
        v20->_has_bits_.has_bits_[0] |= 1u;
        if ( ptr == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
        {
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(&v20->identifier_value_, key);
          goto LABEL_87;
        }
        goto LABEL_86;
      case TYPE_INTEGER:
        v53 = 0x8000000000000000LL;
        if ( !v45 )
          v53 = -1LL;
        v54 = google::protobuf::compiler::Parser::ConsumeInteger64(
                this,
                v53,
                (unsigned __int64 *)key,
                "Expected integer.");
        v44 = __capacity.location_;
        if ( !v54 )
          goto LABEL_39;
        v55 = __capacity.location_->path_.current_size_;
        total_size = __capacity.location_->path_.total_size_;
        p_path = &__capacity.location_->path_;
        v58 = __capacity.location_;
        if ( v45 )
        {
          if ( total_size == (_DWORD)v55 )
          {
            google::protobuf::RepeatedField<int>::Reserve(p_path, total_size + 1);
            v55 = v44->path_.current_size_;
            v58 = __capacity.location_;
          }
          v59 = v44->path_.rep_;
          v44->path_.current_size_ = v55 + 1;
          v44 = v58;
          v59->elements[v55] = 5;
          v60 = *(_QWORD *)&key[0].level_;
          v20->_has_bits_.has_bits_[0] |= 0x10u;
          v20->negative_int_value_ = -v60;
        }
        else
        {
          if ( total_size == (_DWORD)v55 )
          {
            google::protobuf::RepeatedField<int>::Reserve(p_path, total_size + 1);
            v55 = v44->path_.current_size_;
            v58 = __capacity.location_;
          }
          v77 = v44->path_.rep_;
          v44->path_.current_size_ = v55 + 1;
          v44 = v58;
          v77->elements[v55] = 4;
          v78 = *(_QWORD *)&key[0].level_;
          v20->_has_bits_.has_bits_[0] |= 8u;
          v20->positive_int_value_ = v78;
        }
        goto LABEL_58;
      case TYPE_FLOAT_1:
        v48 = __capacity.location_;
        v49 = __capacity.location_->path_.current_size_;
        if ( (_DWORD)v49 == __capacity.location_->path_.total_size_ )
        {
          google::protobuf::RepeatedField<int>::Reserve(&__capacity.location_->path_, v49 + 1);
          v49 = v48->path_.current_size_;
        }
        v50 = v48->path_.rep_;
        v48->path_.current_size_ = v49 + 1;
        v50->elements[v49] = 6;
        v51 = google::protobuf::compiler::Parser::ConsumeNumber(this, (double *)key, "Expected number.");
        v44 = __capacity.location_;
        if ( !v51 )
          goto LABEL_39;
        v52 = *(double *)&key[0].level_;
        if ( v45 )
          v52 = -*(double *)&key[0].level_;
        v20->_has_bits_.has_bits_[0] |= 0x20u;
        v20->double_value_ = v52;
        goto LABEL_58;
      case TYPE_STRING_1:
        v38 = __capacity.location_;
        v39 = __capacity.location_->path_.current_size_;
        if ( (_DWORD)v39 == __capacity.location_->path_.total_size_ )
        {
          google::protobuf::RepeatedField<int>::Reserve(&__capacity.location_->path_, v39 + 1);
          v39 = v38->path_.current_size_;
        }
        v40 = v38->path_.rep_;
        v38->path_.current_size_ = v39 + 1;
        v40->elements[v39] = 7;
        *(_QWORD *)&key[0].level_ = &key[0].line_;
        if ( v45 )
        {
          v80 = 33LL;
          v41 = std::string::_M_create((std::string *const)key, &v80, 0LL);
          *(_QWORD *)&key[0].level_ = v41;
          *(_QWORD *)&key[0].line_ = v80;
          *(__m128i *)v41 = _mm_load_si128((const __m128i *)&xmmword_F6EDEE0);
          v42 = _mm_load_si128((const __m128i *)&xmmword_F6EDF00);
          v41[32] = 46;
          *((__m128i *)v41 + 1) = v42;
          key[0].filename_ = (const char *)v80;
          *(_BYTE *)(*(_QWORD *)&key[0].level_ + v80) = 0;
          error_collector = this->error_collector_;
          if ( !error_collector )
            goto LABEL_35;
          goto LABEL_34;
        }
        key[0].filename_ = 0LL;
        LOBYTE(key[0].line_) = 0;
        if ( !(unsigned __int8)google::protobuf::compiler::Parser::ConsumeString(
                                 (__int64)this,
                                 (__int64)key,
                                 "Expected string.") )
          goto LABEL_36;
        ptr = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)v20->string_value_.ptr_;
        v20->_has_bits_.has_bits_[0] |= 2u;
        if ( ptr == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(&v20->string_value_, key);
        else
LABEL_86:
          std::string::_M_assign((std::string *const)ptr, (const std::string *)key);
LABEL_87:
        if ( *(google::protobuf::internal::LogMessage_0 **)&key[0].level_ != (google::protobuf::internal::LogMessage_0 *)&key[0].line_ )
          operator delete(*(void **)&key[0].level_);
LABEL_89:
        v44 = __capacity.location_;
        goto LABEL_58;
      case TYPE_SYMBOL:
        if ( !std::string::compare(&this->input_->current_.text, "{") )
        {
          v61 = __capacity.location_;
          v62 = __capacity.location_->path_.current_size_;
          if ( (_DWORD)v62 == __capacity.location_->path_.total_size_ )
          {
            google::protobuf::RepeatedField<int>::Reserve(&__capacity.location_->path_, v62 + 1);
            v62 = v61->path_.current_size_;
          }
          v63 = v61->path_.rep_;
          v64 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)v20->aggregate_value_.ptr_;
          v61->path_.current_size_ = v62 + 1;
          v63->elements[v62] = 8;
          v20->_has_bits_.has_bits_[0] |= 4u;
          if ( v64 == &google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
          {
            google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
              &v20->aggregate_value_,
              &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
            v64 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)v20->aggregate_value_.ptr_;
          }
          v65 = google::protobuf::compiler::Parser::ParseUninterpretedBlock(this, (std::string *)v64);
          v44 = __capacity.location_;
          if ( v65 )
          {
LABEL_58:
            if ( v44->span_.current_size_ <= 2 )
              google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&__capacity);
            if ( a5 == OPTION_STATEMENT )
              v36 = google::protobuf::compiler::Parser::ConsumeEndOfDeclaration(this, ";", &v81);
            goto LABEL_27;
          }
        }
        else
        {
          *(_QWORD *)&key[0].level_ = &key[0].line_;
          v80 = 22LL;
          v75 = std::string::_M_create((std::string *const)key, &v80, 0LL);
          v76 = _mm_load_si128((const __m128i *)&xmmword_F6EDF10);
          *(_QWORD *)&key[0].level_ = v75;
          *(_QWORD *)&key[0].line_ = v80;
          *((_DWORD *)v75 + 4) = 1970037110;
          *((_WORD *)v75 + 10) = 11877;
          *(__m128i *)v75 = v76;
          key[0].filename_ = (const char *)v80;
          *(_BYTE *)(*(_QWORD *)&key[0].level_ + v80) = 0;
          error_collector = this->error_collector_;
          if ( error_collector )
LABEL_34:
            (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, google::protobuf::internal::LogMessage_0 *))error_collector->_vptr_ErrorCollector
             + 2))(
              error_collector,
              (unsigned int)this->input_->current_.line,
              (unsigned int)this->input_->current_.column,
              key);
LABEL_35:
          this->had_errors_ = 1;
LABEL_36:
          if ( *(google::protobuf::internal::LogMessage_0 **)&key[0].level_ != (google::protobuf::internal::LogMessage_0 *)&key[0].line_ )
            operator delete(*(void **)&key[0].level_);
          v44 = __capacity.location_;
        }
LABEL_39:
        if ( v44->span_.current_size_ > 2 )
          goto LABEL_26;
        break;
      default:
        goto LABEL_89;
    }
    goto LABEL_40;
  }
LABEL_26:
  v36 = 0;
LABEL_27:
  if ( v81.location_->span_.current_size_ <= 2 )
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v81);
  return v36;
};

// Line 1446: range 000000000DC08960-000000000DC09035
__int64 __fastcall google::protobuf::compiler::Parser::ParseExtensions(
        google::protobuf::compiler::Parser *this,
        google::protobuf::DescriptorProto *a2,
        const google::protobuf::compiler::Parser::LocationRecorder *a3,
        const google::protobuf::FileDescriptorProto *a4)
{
  unsigned int v7; // r12d
  int current_size; // ebp
  google::protobuf::SourceCodeInfo::Location *v9; // r12
  __int64 v10; // rsi
  google::protobuf::RepeatedField<int>::Rep *v11; // rax
  int v12; // eax
  int v13; // edx
  google::protobuf::io::Tokenizer::Token *v14; // rdi
  int v15; // eax
  unsigned int v16; // eax
  google::protobuf::SourceCodeInfo::Location *location; // r12
  __int64 v18; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v20; // rax
  __int64 v21; // rcx
  int allocated_size; // edx
  google::protobuf::DescriptorProto_ExtensionRange *AlignedAndAddCleanup; // rbp
  google::protobuf::SourceCodeInfo::Location *v24; // r12
  __int64 v25; // rsi
  google::protobuf::RepeatedField<int>::Rep *v26; // rax
  google::protobuf::io::Tokenizer *input; // r12
  char v28; // al
  int v29; // edx
  google::protobuf::SourceCodeInfo::Location *v30; // r12
  __int64 v31; // rsi
  google::protobuf::SourceCodeInfo::Location *v32; // rax
  google::protobuf::RepeatedField<int>::Rep *v33; // rdx
  google::protobuf::RepeatedField<int>::Rep *v34; // rax
  bool v35; // cc
  int total_size; // esi
  google::protobuf::Arena *arena; // rbp
  __int64 v38; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v39; // rdx
  std::string::pointer M_p; // rdi
  std::string::pointer v42; // rbp
  __int64 v43; // rax
  __int64 v44; // rdx
  void *v45; // r14
  google::protobuf::ExtensionRangeOptions *v46; // rbp
  void *v47; // r12
  google::protobuf::ExtensionRangeOptions *v48; // r14
  google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto_ExtensionRange> *p_extension_range; // [rsp+8h] [rbp-C0h]
  int i; // [rsp+8h] [rbp-C0h]
  int v52; // [rsp+1Ch] [rbp-ACh]
  int v53; // [rsp+28h] [rbp-A0h] BYREF
  int v54; // [rsp+2Ch] [rbp-9Ch] BYREF
  google::protobuf::compiler::Parser::LocationRecorder v55; // [rsp+30h] [rbp-98h] BYREF
  google::protobuf::compiler::Parser::LocationRecorder v56; // [rsp+40h] [rbp-88h] BYREF
  google::protobuf::io::Tokenizer::Token token; // [rsp+50h] [rbp-78h] BYREF

  v7 = google::protobuf::compiler::Parser::Consume(this, "extensions");
  if ( !(_BYTE)v7 )
    return v7;
  current_size = a2->extension_range_.current_size_;
  p_extension_range = &a2->extension_range_;
  v52 = current_size;
  while ( 1 )
  {
    google::protobuf::compiler::Parser::LocationRecorder::Init(&v55, a3);
    location = v55.location_;
    v18 = v55.location_->path_.current_size_;
    if ( (_DWORD)v18 == v55.location_->path_.total_size_ )
    {
      google::protobuf::RepeatedField<int>::Reserve(&v55.location_->path_, v18 + 1);
      v18 = location->path_.current_size_;
    }
    rep = location->path_.rep_;
    location->path_.current_size_ = v18 + 1;
    rep->elements[v18] = current_size;
    v20 = a2->extension_range_.rep_;
    if ( v20 )
    {
      v21 = a2->extension_range_.current_size_;
      allocated_size = v20->allocated_size;
      if ( (int)v21 < v20->allocated_size )
      {
        AlignedAndAddCleanup = (google::protobuf::DescriptorProto_ExtensionRange *)v20->elements[v21];
        a2->extension_range_.current_size_ = v21 + 1;
        goto LABEL_20;
      }
      total_size = a2->extension_range_.total_size_;
      if ( allocated_size != total_size )
      {
        arena = a2->extension_range_.arena_;
        v20->allocated_size = allocated_size + 1;
        if ( arena )
          goto LABEL_32;
        goto LABEL_38;
      }
    }
    else
    {
      total_size = a2->extension_range_.total_size_;
    }
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(p_extension_range, total_size + 1);
    arena = a2->extension_range_.arena_;
    ++a2->extension_range_.rep_->allocated_size;
    if ( arena )
    {
LABEL_32:
      if ( arena->hooks_cookie_ )
        google::protobuf::Arena::OnArenaAllocation(
          arena,
          (const std::type_info *)&`typeinfo for'google::protobuf::DescriptorProto_ExtensionRange,
          0x28uLL);
      AlignedAndAddCleanup = (google::protobuf::DescriptorProto_ExtensionRange *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                                   &arena->impl_,
                                                                                   0x28uLL,
                                                                                   google::protobuf::internal::arena_destruct_object<google::protobuf::DescriptorProto_ExtensionRange>);
      google::protobuf::DescriptorProto_ExtensionRange::DescriptorProto_ExtensionRange(AlignedAndAddCleanup);
      goto LABEL_35;
    }
LABEL_38:
    AlignedAndAddCleanup = (google::protobuf::DescriptorProto_ExtensionRange *)operator new(0x28uLL);
    google::protobuf::DescriptorProto_ExtensionRange::DescriptorProto_ExtensionRange(AlignedAndAddCleanup);
LABEL_35:
    v38 = a2->extension_range_.current_size_;
    v39 = a2->extension_range_.rep_;
    a2->extension_range_.current_size_ = v38 + 1;
    v39->elements[v38] = AlignedAndAddCleanup;
LABEL_20:
    google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(&v55, AlignedAndAddCleanup, NUMBER);
    token.text._M_dataplus._M_p = token.text._anon_0._M_local_buf;
    token.text._M_string_length = 0LL;
    token.text._anon_0._M_local_buf[0] = 0;
    google::protobuf::compiler::Parser::LocationRecorder::Init(&v56, &v55);
    v24 = v56.location_;
    v25 = v56.location_->path_.current_size_;
    if ( (_DWORD)v25 == v56.location_->path_.total_size_ )
    {
      google::protobuf::RepeatedField<int>::Reserve(&v56.location_->path_, v25 + 1);
      v25 = v24->path_.current_size_;
    }
    v26 = v24->path_.rep_;
    v24->path_.current_size_ = v25 + 1;
    input = this->input_;
    v26->elements[v25] = 1;
    token.type = input->current_.type;
    std::string::_M_assign(&token.text, &input->current_.text);
    token.line = input->current_.line;
    token.column = input->current_.column;
    token.end_column = input->current_.end_column;
    v28 = google::protobuf::compiler::Parser::ConsumeInteger(this, &v53, "Expected field number range.");
    v29 = v56.location_->span_.current_size_;
    if ( !v28 )
    {
      if ( v29 > 2 )
      {
LABEL_48:
        M_p = token.text._M_dataplus._M_p;
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)token.text._M_dataplus._M_p != &token.text._anon_0 )
LABEL_42:
          operator delete(M_p);
LABEL_43:
        if ( v55.location_->span_.current_size_ <= 2 )
          google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v55);
        return 0;
      }
LABEL_41:
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v56);
      M_p = token.text._M_dataplus._M_p;
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)token.text._M_dataplus._M_p != &token.text._anon_0 )
        goto LABEL_42;
      goto LABEL_43;
    }
    if ( v29 <= 2 )
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v56);
    if ( google::protobuf::compiler::Parser::TryConsume(this, "to") )
    {
      google::protobuf::compiler::Parser::LocationRecorder::Init(&v56, &v55);
      v9 = v56.location_;
      v10 = v56.location_->path_.current_size_;
      if ( (_DWORD)v10 == v56.location_->path_.total_size_ )
      {
        google::protobuf::RepeatedField<int>::Reserve(&v56.location_->path_, v10 + 1);
        v10 = v9->path_.current_size_;
      }
      v11 = v9->path_.rep_;
      v9->path_.current_size_ = v10 + 1;
      v11->elements[v10] = 2;
      if ( google::protobuf::compiler::Parser::TryConsume(this, "max") )
      {
        v54 = -2;
      }
      else if ( !(unsigned __int8)google::protobuf::compiler::Parser::ConsumeInteger(this, &v54, "Expected integer.") )
      {
        if ( v56.location_->span_.current_size_ > 2 )
          goto LABEL_48;
        goto LABEL_41;
      }
      if ( v56.location_->span_.current_size_ <= 2 )
LABEL_29:
        google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v56);
      v12 = v54;
      v13 = v53;
      goto LABEL_9;
    }
    google::protobuf::compiler::Parser::LocationRecorder::Init(&v56, &v55);
    v30 = v56.location_;
    v31 = v56.location_->path_.current_size_;
    v32 = v56.location_;
    if ( (_DWORD)v31 == v56.location_->path_.total_size_ )
    {
      google::protobuf::RepeatedField<int>::Reserve(&v56.location_->path_, v31 + 1);
      v32 = v56.location_;
      v31 = v30->path_.current_size_;
    }
    v33 = v30->path_.rep_;
    v34 = v32->span_.rep_;
    v30->path_.current_size_ = v31 + 1;
    v33->elements[v31] = 2;
    v34->elements[0] = token.line;
    v34->elements[1] = token.column;
    google::protobuf::compiler::Parser::LocationRecorder::EndAt(&v56, &token);
    v12 = v53;
    v35 = v56.location_->span_.current_size_ <= 2;
    v54 = v53;
    v13 = v53;
    if ( v35 )
      goto LABEL_29;
LABEL_9:
    v14 = (google::protobuf::io::Tokenizer::Token *)token.text._M_dataplus._M_p;
    v15 = v12 + 1;
    AlignedAndAddCleanup->_has_bits_.has_bits_[0] |= 6u;
    v54 = v15;
    AlignedAndAddCleanup->start_ = v13;
    AlignedAndAddCleanup->end_ = v15;
    if ( v14 != (google::protobuf::io::Tokenizer::Token *)&token.text._anon_0 )
      operator delete(v14);
    if ( v55.location_->span_.current_size_ <= 2 )
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v55);
    LOBYTE(v16) = google::protobuf::compiler::Parser::TryConsume(this, ",");
    v7 = v16;
    if ( !(_BYTE)v16 )
      break;
    current_size = a2->extension_range_.current_size_;
  }
  if ( !std::string::compare(&this->input_->current_.text, "[") )
  {
    google::protobuf::compiler::Parser::LocationRecorder::Init(
      (google::protobuf::compiler::Parser::LocationRecorder *)&token,
      a3);
    v42 = token.text._M_dataplus._M_p;
    v43 = *((int *)token.text._M_dataplus._M_p + 6);
    if ( (_DWORD)v43 == *((_DWORD *)token.text._M_dataplus._M_p + 7) )
    {
      google::protobuf::RepeatedField<int>::Reserve(
        (google::protobuf::RepeatedField<int> *const)(token.text._M_dataplus._M_p + 24),
        v43 + 1);
      v43 = *((int *)v42 + 6);
    }
    v44 = *((_QWORD *)v42 + 4);
    *((_DWORD *)v42 + 6) = v43 + 1;
    *(_DWORD *)(v44 + 4 * v43 + 8) = 3;
    if ( (unsigned __int8)google::protobuf::compiler::Parser::Consume(this, "[") )
    {
      v45 = a2->extension_range_.rep_->elements[v52];
      v46 = (google::protobuf::ExtensionRangeOptions *)*((_QWORD *)v45 + 3);
      *((_DWORD *)v45 + 4) |= 1u;
      if ( !v46 )
      {
        v46 = (google::protobuf::ExtensionRangeOptions *)operator new(0x68uLL);
        google::protobuf::ExtensionRangeOptions::ExtensionRangeOptions(v46);
        *((_QWORD *)v45 + 3) = v46;
      }
      while ( (unsigned __int8)google::protobuf::compiler::Parser::ParseOption(
                                 this,
                                 v46,
                                 (const google::protobuf::compiler::Parser::LocationRecorder *)&token,
                                 a4,
                                 OPTION_ASSIGNMENT) )
      {
        if ( !google::protobuf::compiler::Parser::TryConsume(this, ",") )
        {
          if ( !(unsigned __int8)google::protobuf::compiler::Parser::Consume(this, "]") )
            break;
          for ( i = v52 + 1; i < a2->extension_range_.current_size_; ++i )
          {
            v47 = a2->extension_range_.rep_->elements[i];
            v48 = (google::protobuf::ExtensionRangeOptions *)*((_QWORD *)v47 + 3);
            *((_DWORD *)v47 + 4) |= 1u;
            if ( !v48 )
            {
              v48 = (google::protobuf::ExtensionRangeOptions *)operator new(0x68uLL);
              google::protobuf::ExtensionRangeOptions::ExtensionRangeOptions(v48);
              *((_QWORD *)v47 + 3) = v48;
            }
            google::protobuf::ExtensionRangeOptions::CopyFrom(v48, v46);
          }
          if ( *((int *)token.text._M_dataplus._M_p + 12) <= 2 )
            google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder((google::protobuf::compiler::Parser::LocationRecorder *const)&token);
          return (unsigned int)google::protobuf::compiler::Parser::ConsumeEndOfDeclaration(this, ";", a3);
        }
      }
    }
    if ( *((int *)token.text._M_dataplus._M_p + 12) <= 2 )
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder((google::protobuf::compiler::Parser::LocationRecorder *const)&token);
  }
  else
  {
    return (unsigned int)google::protobuf::compiler::Parser::ConsumeEndOfDeclaration(this, ";", a3);
  }
  return v7;
};

// Line 1529: range 000000000DC06740-000000000DC06855
__int64 __fastcall google::protobuf::compiler::Parser::ParseReserved(
        google::protobuf::compiler::Parser *this,
        google::protobuf::DescriptorProto *a2,
        const google::protobuf::compiler::Parser::LocationRecorder *a3)
{
  __int64 result; // rax
  google::protobuf::SourceCodeInfo::Location *v6; // r14
  __int64 v7; // rsi
  google::protobuf::RepeatedField<int>::Rep *v8; // rax
  google::protobuf::SourceCodeInfo::Location *location; // r14
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  unsigned __int8 v12; // [rsp+Fh] [rbp-39h]
  google::protobuf::compiler::Parser::LocationRecorder v13; // [rsp+10h] [rbp-38h] BYREF

  result = google::protobuf::compiler::Parser::Consume(this, "reserved");
  if ( (_BYTE)result )
  {
    if ( this->input_->current_.type == TYPE_STRING_1 )
    {
      google::protobuf::compiler::Parser::LocationRecorder::Init(&v13, a3);
      location = v13.location_;
      current_size = v13.location_->path_.current_size_;
      if ( (_DWORD)current_size == v13.location_->path_.total_size_ )
      {
        google::protobuf::RepeatedField<int>::Reserve(&v13.location_->path_, current_size + 1);
        current_size = location->path_.current_size_;
      }
      rep = location->path_.rep_;
      location->path_.current_size_ = current_size + 1;
      rep->elements[current_size] = 10;
      result = google::protobuf::compiler::Parser::ParseReservedNames(this, a2, &v13);
    }
    else
    {
      google::protobuf::compiler::Parser::LocationRecorder::Init(&v13, a3);
      v6 = v13.location_;
      v7 = v13.location_->path_.current_size_;
      if ( (_DWORD)v7 == v13.location_->path_.total_size_ )
      {
        google::protobuf::RepeatedField<int>::Reserve(&v13.location_->path_, v7 + 1);
        v7 = v6->path_.current_size_;
      }
      v8 = v6->path_.rep_;
      v6->path_.current_size_ = v7 + 1;
      v8->elements[v7] = 9;
      result = google::protobuf::compiler::Parser::ParseReservedNumbers(this, a2, &v13);
    }
    if ( v13.location_->span_.current_size_ <= 2 )
    {
      v12 = result;
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v13);
      return v12;
    }
  }
  return result;
};

// Line 1545: range 000000000DC06030-000000000DC06255
__int64 __fastcall google::protobuf::compiler::Parser::ParseReservedNames(
        google::protobuf::compiler::Parser *this,
        google::protobuf::DescriptorProto *a2,
        const google::protobuf::compiler::Parser::LocationRecorder *a3)
{
  google::protobuf::RepeatedPtrField<std::string > *p_reserved_name; // r14
  __int64 v6; // rsi
  __int64 result; // rax
  int v8; // edx
  int current_size; // r12d
  google::protobuf::SourceCodeInfo::Location *location; // r15
  __int64 v11; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v13; // rax
  __int64 v14; // rcx
  int allocated_size; // edx
  int total_size; // esi
  google::protobuf::Arena *arena; // r12
  _BYTE *AlignedAndAddCleanup; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v19; // rdx
  __int64 v20; // rax
  google::protobuf::compiler::Parser::LocationRecorder v21; // [rsp+10h] [rbp-48h] BYREF

  p_reserved_name = &a2->reserved_name_;
  while ( 1 )
  {
    current_size = a2->reserved_name_.current_size_;
    google::protobuf::compiler::Parser::LocationRecorder::Init(&v21, a3);
    location = v21.location_;
    v11 = v21.location_->path_.current_size_;
    if ( (_DWORD)v11 == v21.location_->path_.total_size_ )
    {
      google::protobuf::RepeatedField<int>::Reserve(&v21.location_->path_, v11 + 1);
      v11 = location->path_.current_size_;
    }
    rep = location->path_.rep_;
    location->path_.current_size_ = v11 + 1;
    rep->elements[v11] = current_size;
    v13 = a2->reserved_name_.rep_;
    if ( !v13 )
    {
      total_size = a2->reserved_name_.total_size_;
LABEL_18:
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(p_reserved_name, total_size + 1);
      v13 = a2->reserved_name_.rep_;
      allocated_size = v13->allocated_size;
      goto LABEL_12;
    }
    v14 = a2->reserved_name_.current_size_;
    allocated_size = v13->allocated_size;
    if ( (int)v14 < v13->allocated_size )
    {
      v6 = (__int64)v13->elements[v14];
      a2->reserved_name_.current_size_ = v14 + 1;
      goto LABEL_3;
    }
    total_size = a2->reserved_name_.total_size_;
    if ( allocated_size == total_size )
      goto LABEL_18;
LABEL_12:
    arena = a2->reserved_name_.arena_;
    v13->allocated_size = allocated_size + 1;
    if ( arena )
    {
      if ( arena->hooks_cookie_ )
        google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'std::string, 0x20uLL);
      AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                               &arena->impl_,
                               0x20uLL,
                               google::protobuf::internal::arena_destruct_object<std::string>);
    }
    else
    {
      AlignedAndAddCleanup = (_BYTE *)operator new(0x20uLL);
    }
    v6 = (__int64)AlignedAndAddCleanup;
    AlignedAndAddCleanup[16] = 0;
    v19 = a2->reserved_name_.rep_;
    *(_QWORD *)AlignedAndAddCleanup = AlignedAndAddCleanup + 16;
    v20 = a2->reserved_name_.current_size_;
    *(_QWORD *)(v6 + 8) = 0LL;
    a2->reserved_name_.current_size_ = v20 + 1;
    v19->elements[v20] = (void *)v6;
LABEL_3:
    result = google::protobuf::compiler::Parser::ConsumeString((__int64)this, v6, "Expected field name.");
    v8 = v21.location_->span_.current_size_;
    if ( !(_BYTE)result )
      break;
    if ( v8 <= 2 )
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v21);
    if ( !google::protobuf::compiler::Parser::TryConsume(this, ",") )
      return google::protobuf::compiler::Parser::ConsumeEndOfDeclaration(this, ";", a3);
  }
  if ( v8 <= 2 )
  {
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v21);
    return 0LL;
  }
  return result;
};

// Line 1555: range 000000000DC06260-000000000DC06737
__int64 __fastcall google::protobuf::compiler::Parser::ParseReservedNumbers(
        google::protobuf::compiler::Parser *this,
        google::protobuf::DescriptorProto *a2,
        const google::protobuf::compiler::Parser::LocationRecorder *a3)
{
  char v3; // r15
  google::protobuf::SourceCodeInfo::Location *v6; // r12
  __int64 v7; // rsi
  google::protobuf::RepeatedField<int>::Rep *v8; // rax
  int v9; // eax
  int v10; // edx
  google::protobuf::io::Tokenizer::Token *M_p; // rdi
  int v12; // eax
  int current_size; // ebp
  google::protobuf::SourceCodeInfo::Location *location; // r12
  __int64 v15; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v17; // rax
  __int64 v18; // rcx
  int allocated_size; // edx
  google::protobuf::DescriptorProto_ReservedRange *AlignedAndAddCleanup; // rbp
  google::protobuf::SourceCodeInfo::Location *v21; // r12
  __int64 v22; // rsi
  google::protobuf::RepeatedField<int>::Rep *v23; // rax
  google::protobuf::io::Tokenizer *input; // r12
  const char *v25; // rdx
  char v26; // al
  int v27; // edx
  google::protobuf::SourceCodeInfo::Location *v28; // r12
  __int64 v29; // rsi
  google::protobuf::SourceCodeInfo::Location *v30; // rax
  google::protobuf::RepeatedField<int>::Rep *v31; // rdx
  google::protobuf::RepeatedField<int>::Rep *v32; // rax
  bool v33; // cc
  int total_size; // esi
  google::protobuf::Arena *arena; // rbp
  __int64 v36; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v37; // rdx
  google::protobuf::RepeatedPtrField<google::protobuf::DescriptorProto_ReservedRange> *p_reserved_range; // [rsp+8h] [rbp-B0h]
  int v41; // [rsp+18h] [rbp-A0h] BYREF
  int v42; // [rsp+1Ch] [rbp-9Ch] BYREF
  google::protobuf::compiler::Parser::LocationRecorder v43; // [rsp+20h] [rbp-98h] BYREF
  google::protobuf::compiler::Parser::LocationRecorder v44; // [rsp+30h] [rbp-88h] BYREF
  google::protobuf::io::Tokenizer::Token token; // [rsp+40h] [rbp-78h] BYREF

  v3 = 1;
  p_reserved_range = &a2->reserved_range_;
  while ( 1 )
  {
    current_size = a2->reserved_range_.current_size_;
    google::protobuf::compiler::Parser::LocationRecorder::Init(&v43, a3);
    location = v43.location_;
    v15 = v43.location_->path_.current_size_;
    if ( (_DWORD)v15 == v43.location_->path_.total_size_ )
    {
      google::protobuf::RepeatedField<int>::Reserve(&v43.location_->path_, v15 + 1);
      v15 = location->path_.current_size_;
    }
    rep = location->path_.rep_;
    location->path_.current_size_ = v15 + 1;
    rep->elements[v15] = current_size;
    v17 = a2->reserved_range_.rep_;
    if ( !v17 )
    {
      total_size = a2->reserved_range_.total_size_;
LABEL_37:
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(p_reserved_range, total_size + 1);
      v17 = a2->reserved_range_.rep_;
      allocated_size = v17->allocated_size;
      goto LABEL_31;
    }
    v18 = a2->reserved_range_.current_size_;
    allocated_size = v17->allocated_size;
    if ( (int)v18 < v17->allocated_size )
    {
      AlignedAndAddCleanup = (google::protobuf::DescriptorProto_ReservedRange *)v17->elements[v18];
      a2->reserved_range_.current_size_ = v18 + 1;
      goto LABEL_18;
    }
    total_size = a2->reserved_range_.total_size_;
    if ( allocated_size == total_size )
      goto LABEL_37;
LABEL_31:
    arena = a2->reserved_range_.arena_;
    v17->allocated_size = allocated_size + 1;
    if ( arena )
    {
      if ( arena->hooks_cookie_ )
        google::protobuf::Arena::OnArenaAllocation(
          arena,
          (const std::type_info *)&`typeinfo for'google::protobuf::DescriptorProto_ReservedRange,
          0x20uLL);
      AlignedAndAddCleanup = (google::protobuf::DescriptorProto_ReservedRange *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                                  &arena->impl_,
                                                                                  0x20uLL,
                                                                                  google::protobuf::internal::arena_destruct_object<google::protobuf::DescriptorProto_ReservedRange>);
      google::protobuf::DescriptorProto_ReservedRange::DescriptorProto_ReservedRange(AlignedAndAddCleanup);
    }
    else
    {
      AlignedAndAddCleanup = (google::protobuf::DescriptorProto_ReservedRange *)operator new(0x20uLL);
      google::protobuf::DescriptorProto_ReservedRange::DescriptorProto_ReservedRange(AlignedAndAddCleanup);
    }
    v36 = a2->reserved_range_.current_size_;
    v37 = a2->reserved_range_.rep_;
    a2->reserved_range_.current_size_ = v36 + 1;
    v37->elements[v36] = AlignedAndAddCleanup;
LABEL_18:
    token.text._M_dataplus._M_p = token.text._anon_0._M_local_buf;
    token.text._M_string_length = 0LL;
    token.text._anon_0._M_local_buf[0] = 0;
    google::protobuf::compiler::Parser::LocationRecorder::Init(&v44, &v43);
    v21 = v44.location_;
    v22 = v44.location_->path_.current_size_;
    if ( (_DWORD)v22 == v44.location_->path_.total_size_ )
    {
      google::protobuf::RepeatedField<int>::Reserve(&v44.location_->path_, v22 + 1);
      v22 = v21->path_.current_size_;
    }
    v23 = v21->path_.rep_;
    v21->path_.current_size_ = v22 + 1;
    input = this->input_;
    v23->elements[v22] = 1;
    token.type = input->current_.type;
    std::string::_M_assign(&token.text, &input->current_.text);
    v25 = "Expected field name or number range.";
    token.line = input->current_.line;
    token.column = input->current_.column;
    token.end_column = input->current_.end_column;
    if ( !v3 )
      v25 = "Expected field number range.";
    v26 = google::protobuf::compiler::Parser::ConsumeInteger(this, &v41, v25);
    v27 = v44.location_->span_.current_size_;
    if ( !v26 )
      break;
    if ( v27 <= 2 )
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v44);
    if ( !google::protobuf::compiler::Parser::TryConsume(this, "to") )
    {
      google::protobuf::compiler::Parser::LocationRecorder::Init(&v44, &v43);
      v28 = v44.location_;
      v29 = v44.location_->path_.current_size_;
      v30 = v44.location_;
      if ( (_DWORD)v29 == v44.location_->path_.total_size_ )
      {
        google::protobuf::RepeatedField<int>::Reserve(&v44.location_->path_, v29 + 1);
        v30 = v44.location_;
        v29 = v28->path_.current_size_;
      }
      v31 = v28->path_.rep_;
      v32 = v30->span_.rep_;
      v28->path_.current_size_ = v29 + 1;
      v31->elements[v29] = 2;
      v32->elements[0] = token.line;
      v32->elements[1] = token.column;
      google::protobuf::compiler::Parser::LocationRecorder::EndAt(&v44, &token);
      v9 = v41;
      v33 = v44.location_->span_.current_size_ <= 2;
      v42 = v41;
      v10 = v41;
      if ( !v33 )
        goto LABEL_8;
LABEL_29:
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v44);
      goto LABEL_7;
    }
    google::protobuf::compiler::Parser::LocationRecorder::Init(&v44, &v43);
    v6 = v44.location_;
    v7 = v44.location_->path_.current_size_;
    if ( (_DWORD)v7 == v44.location_->path_.total_size_ )
    {
      google::protobuf::RepeatedField<int>::Reserve(&v44.location_->path_, v7 + 1);
      v7 = v6->path_.current_size_;
    }
    v8 = v6->path_.rep_;
    v6->path_.current_size_ = v7 + 1;
    v8->elements[v7] = 2;
    if ( google::protobuf::compiler::Parser::TryConsume(this, "max") )
    {
      v42 = -2;
      goto LABEL_6;
    }
    if ( !(unsigned __int8)google::protobuf::compiler::Parser::ConsumeInteger(this, &v42, "Expected integer.") )
    {
      if ( v44.location_->span_.current_size_ > 2 )
        goto LABEL_43;
      goto LABEL_41;
    }
LABEL_6:
    if ( v44.location_->span_.current_size_ <= 2 )
      goto LABEL_29;
LABEL_7:
    v9 = v42;
    v10 = v41;
LABEL_8:
    M_p = (google::protobuf::io::Tokenizer::Token *)token.text._M_dataplus._M_p;
    v12 = v9 + 1;
    AlignedAndAddCleanup->_has_bits_.has_bits_[0] |= 3u;
    v42 = v12;
    AlignedAndAddCleanup->start_ = v10;
    AlignedAndAddCleanup->end_ = v12;
    if ( M_p != (google::protobuf::io::Tokenizer::Token *)&token.text._anon_0 )
      operator delete(M_p);
    if ( v43.location_->span_.current_size_ <= 2 )
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v43);
    v3 = 0;
    if ( !google::protobuf::compiler::Parser::TryConsume(this, ",") )
      return google::protobuf::compiler::Parser::ConsumeEndOfDeclaration(this, ";", a3);
  }
  if ( v27 <= 2 )
LABEL_41:
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v44);
LABEL_43:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)token.text._M_dataplus._M_p != &token.text._anon_0 )
    operator delete(token.text._M_dataplus._M_p);
  if ( v43.location_->span_.current_size_ <= 2 )
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v43);
  return 0LL;
};

// Line 1609: range 000000000DC0C780-000000000DC0CD12
__int64 __fastcall google::protobuf::compiler::Parser::ParseExtend(
        google::protobuf::compiler::Parser *this,
        google::protobuf::internal::RepeatedPtrFieldBase *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        const google::protobuf::compiler::Parser::LocationRecorder *a6,
        google::protobuf::FileDescriptorProto *containing_file)
{
  std::forward_iterator_tag v10; // cl
  unsigned int v11; // r12d
  google::protobuf::io::Tokenizer *input; // r14
  std::string::size_type M_string_length; // rdx
  int line; // eax
  int column; // eax
  std::forward_iterator_tag v17; // cl
  google::protobuf::io::Tokenizer *v18; // r14
  char *M_p; // rsi
  std::string::size_type v20; // rdx
  google::protobuf::io::ColumnNumber v21; // eax
  google::protobuf::FieldDescriptorProto *v22; // rax
  std::string::size_type v23; // r14
  __int64 v24; // rsi
  std::string::size_type v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  std::string *ptr; // rdi
  int current_size; // r14d
  __int64 v30; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v32; // rax
  __int64 v33; // rcx
  int allocated_size; // edx
  int total_size; // esi
  google::protobuf::Arena *arena; // rax
  google::protobuf::Arena *v37; // r14
  __int64 v38; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v39; // rdx
  std::string::pointer v40; // rax
  __m128i si128; // xmm0
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  std::string *v43; // rdi
  google::protobuf::FieldDescriptorProto *descriptor; // [rsp+18h] [rbp-108h]
  google::protobuf::SourceCodeInfo::Location *descriptora; // [rsp+18h] [rbp-108h]
  google::protobuf::compiler::Parser::LocationRecorder v49; // [rsp+20h] [rbp-100h] BYREF
  std::string __str; // [rsp+30h] [rbp-F0h] BYREF
  std::string v51; // [rsp+50h] [rbp-D0h] BYREF
  google::protobuf::io::Tokenizer::TokenType type; // [rsp+70h] [rbp-B0h]
  std::string v53; // [rsp+78h] [rbp-A8h] BYREF
  int v54; // [rsp+98h] [rbp-88h]
  int v55; // [rsp+9Ch] [rbp-84h]
  google::protobuf::io::ColumnNumber end_column; // [rsp+A0h] [rbp-80h]
  google::protobuf::io::Tokenizer::Token token; // [rsp+B0h] [rbp-70h] BYREF

  v11 = google::protobuf::compiler::Parser::Consume(this, "extend");
  if ( !(_BYTE)v11 )
    return v11;
  input = this->input_;
  M_string_length = this->input_->current_.text._M_string_length;
  type = this->input_->current_.type;
  v53._M_dataplus._M_p = v53._anon_0._M_local_buf;
  std::string::_M_construct<char *>(
    &v53,
    input->current_.text._M_dataplus._M_p,
    &input->current_.text._M_dataplus._M_p[M_string_length],
    v10);
  line = input->current_.line;
  __str._M_string_length = 0LL;
  v54 = line;
  column = input->current_.column;
  __str._anon_0._M_local_buf[0] = 0;
  v55 = column;
  end_column = input->current_.end_column;
  __str._M_dataplus._M_p = __str._anon_0._M_local_buf;
  v11 = google::protobuf::compiler::Parser::ParseUserDefinedType(this, &__str);
  if ( !(_BYTE)v11 )
    goto LABEL_7;
  v18 = this->input_;
  M_p = this->input_->previous_.text._M_dataplus._M_p;
  v20 = this->input_->previous_.text._M_string_length;
  token.type = this->input_->previous_.type;
  token.text._M_dataplus._M_p = token.text._anon_0._M_local_buf;
  std::string::_M_construct<char *>(&token.text, M_p, &M_p[v20], v17);
  v21 = v18->previous_.end_column;
  *(_QWORD *)&token.line = *(_QWORD *)&v18->previous_.line;
  token.end_column = v21;
  v11 = google::protobuf::compiler::Parser::ConsumeEndOfDeclaration(this, "{", a6);
  if ( !(_BYTE)v11 )
    goto LABEL_5;
  while ( this->input_->current_.type != TYPE_END )
  {
    current_size = a2->current_size_;
    google::protobuf::compiler::Parser::LocationRecorder::Init(&v49, a6);
    descriptora = v49.location_;
    v30 = v49.location_->path_.current_size_;
    if ( (_DWORD)v30 == v49.location_->path_.total_size_ )
    {
      google::protobuf::RepeatedField<int>::Reserve(&v49.location_->path_, v30 + 1);
      v30 = descriptora->path_.current_size_;
    }
    rep = descriptora->path_.rep_;
    descriptora->path_.current_size_ = v30 + 1;
    rep->elements[v30] = current_size;
    v32 = a2->rep_;
    if ( !v32 )
    {
      total_size = a2->total_size_;
LABEL_38:
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a2, total_size + 1);
      ++a2->rep_->allocated_size;
      arena = a2->arena_;
      v37 = a2->arena_;
      if ( !a2->arena_ )
      {
LABEL_39:
        descriptor = (google::protobuf::FieldDescriptorProto *)operator new(0x58uLL);
        google::protobuf::FieldDescriptorProto::FieldDescriptorProto(descriptor);
LABEL_35:
        v38 = a2->current_size_;
        v39 = a2->rep_;
        a2->current_size_ = v38 + 1;
        v39->elements[v38] = descriptor;
        goto LABEL_12;
      }
LABEL_32:
      if ( arena->hooks_cookie_ )
        google::protobuf::Arena::OnArenaAllocation(
          arena,
          (const std::type_info *)&`typeinfo for'google::protobuf::FieldDescriptorProto,
          0x58uLL);
      descriptor = (google::protobuf::FieldDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                               &v37->impl_,
                                                               0x58uLL,
                                                               google::protobuf::internal::arena_destruct_object<google::protobuf::FieldDescriptorProto>);
      google::protobuf::FieldDescriptorProto::FieldDescriptorProto(descriptor);
      goto LABEL_35;
    }
    v33 = a2->current_size_;
    allocated_size = v32->allocated_size;
    if ( (int)v33 >= v32->allocated_size )
    {
      total_size = a2->total_size_;
      if ( allocated_size == total_size )
        goto LABEL_38;
      v32->allocated_size = allocated_size + 1;
      arena = a2->arena_;
      v37 = a2->arena_;
      if ( !a2->arena_ )
        goto LABEL_39;
      goto LABEL_32;
    }
    v22 = (google::protobuf::FieldDescriptorProto *)v32->elements[v33];
    a2->current_size_ = v33 + 1;
    descriptor = v22;
LABEL_12:
    google::protobuf::compiler::Parser::LocationRecorder::Init(
      (google::protobuf::compiler::Parser::LocationRecorder *)&v51,
      &v49);
    v23 = v51._M_string_length;
    v24 = *(int *)(v51._M_string_length + 24);
    v25 = v51._M_string_length;
    if ( (_DWORD)v24 == *(_DWORD *)(v51._M_string_length + 28) )
    {
      google::protobuf::RepeatedField<int>::Reserve(
        (google::protobuf::RepeatedField<int> *const)(v51._M_string_length + 24),
        v24 + 1);
      v25 = v51._M_string_length;
      v24 = *(int *)(v23 + 24);
    }
    v26 = *(_QWORD *)(v23 + 32);
    v27 = *(_QWORD *)(v25 + 56);
    *(_DWORD *)(v23 + 24) = v24 + 1;
    *(_DWORD *)(v26 + 4 * v24 + 8) = 2;
    *(_DWORD *)(v27 + 8) = v54;
    *(_DWORD *)(v27 + 12) = v55;
    google::protobuf::compiler::Parser::LocationRecorder::EndAt(
      (google::protobuf::compiler::Parser::LocationRecorder *const)&v51,
      &token);
    if ( (_BYTE)v11 )
      google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(
        (google::protobuf::compiler::Parser::LocationRecorder *const)&v51,
        descriptor,
        EXTENDEE);
    if ( *(int *)(v51._M_string_length + 48) <= 2 )
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder((google::protobuf::compiler::Parser::LocationRecorder *const)&v51);
    ptr = descriptor->extendee_.ptr_;
    descriptor->_has_bits_.has_bits_[0] |= 2u;
    if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(&descriptor->extendee_, &__str);
    else
      std::string::_M_assign(ptr, &__str);
    if ( !(unsigned __int8)google::protobuf::compiler::Parser::ParseMessageField(
                             this,
                             descriptor,
                             a3,
                             a4,
                             a5,
                             &v49,
                             containing_file) )
      google::protobuf::compiler::Parser::SkipStatement(this);
    if ( v49.location_->span_.current_size_ <= 2 )
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v49);
    v11 = google::protobuf::compiler::Parser::TryConsumeEndOfDeclaration(this, "}", 0LL);
    if ( (_BYTE)v11 )
      goto LABEL_5;
  }
  v49.parser_ = (google::protobuf::compiler::Parser *)56;
  v51._M_dataplus._M_p = v51._anon_0._M_local_buf;
  v40 = std::string::_M_create(&v51, (std::string::size_type *)&v49, 0LL);
  v51._M_dataplus._M_p = v40;
  v51._anon_0._M_allocated_capacity = (std::string::size_type)v49.parser_;
  *(__m128i *)v40 = _mm_load_si128((const __m128i *)&xmmword_F6EDF20);
  si128 = _mm_load_si128((const __m128i *)&xmmword_F6EE110);
  *((_QWORD *)v40 + 6) = 0x2E29277D2720676ELL;
  *((__m128i *)v40 + 1) = si128;
  *((__m128i *)v40 + 2) = _mm_load_si128((const __m128i *)&xmmword_F6EE120);
  v51._M_string_length = (std::string::size_type)v49.parser_;
  v51._M_dataplus._M_p[(unsigned __int64)v49.parser_] = 0;
  error_collector = this->error_collector_;
  if ( error_collector )
    (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))error_collector->_vptr_ErrorCollector
     + 2))(
      error_collector,
      (unsigned int)this->input_->current_.line,
      (unsigned int)this->input_->current_.column,
      &v51);
  v43 = (std::string *)v51._M_dataplus._M_p;
  this->had_errors_ = 1;
  if ( v43 != (std::string *)&v51._anon_0 )
    operator delete(v43);
  v11 = 0;
LABEL_5:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)token.text._M_dataplus._M_p != &token.text._anon_0 )
    operator delete(token.text._M_dataplus._M_p);
LABEL_7:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)__str._M_dataplus._M_p != &__str._anon_0 )
    operator delete(__str._M_dataplus._M_p);
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v53._M_dataplus._M_p != &v53._anon_0 )
    operator delete(v53._M_dataplus._M_p);
  return v11;
};

// Line 1667: range 000000000DC0CD20-000000000DC0D2D2
__int64 __fastcall google::protobuf::compiler::Parser::ParseOneof(
        google::protobuf::compiler::Parser *this,
        google::protobuf::OneofDescriptorProto *a2,
        google::protobuf::DescriptorProto *a3,
        google::protobuf::int32 a4,
        const google::protobuf::compiler::Parser::LocationRecorder *a5,
        const google::protobuf::compiler::Parser::LocationRecorder *a6,
        google::protobuf::FileDescriptorProto *a7)
{
  __int64 result; // rax
  std::string::size_type M_string_length; // r15
  __int64 v13; // rsi
  __int64 v14; // rax
  std::string *ptr; // rsi
  int v16; // edx
  std::string::size_type v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rax
  google::protobuf::OneofOptions *options; // r15
  char v21; // r8
  int v22; // eax
  std::string::pointer v23; // rax
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  google::protobuf::io::ErrorCollector *v27; // rdi
  std::string *v28; // rdi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  __int64 current_size; // rcx
  int allocated_size; // edx
  int total_size; // esi
  google::protobuf::Arena *arena; // r15
  google::protobuf::FieldDescriptorProto *AlignedAndAddCleanup; // r15
  __int64 v35; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v36; // rdx
  std::string::pointer v37; // rax
  __m128i si128; // xmm0
  __m128i v39; // xmm0
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  std::string *M_p; // rdi
  std::string::size_type __capacity; // [rsp+28h] [rbp-58h] BYREF
  std::string v45[2]; // [rsp+30h] [rbp-50h] BYREF

  if ( !(unsigned __int8)google::protobuf::compiler::Parser::Consume(this, "oneof") )
    return 0LL;
  google::protobuf::compiler::Parser::LocationRecorder::Init(
    (google::protobuf::compiler::Parser::LocationRecorder *)v45,
    a5);
  M_string_length = v45[0]._M_string_length;
  v13 = *(int *)(v45[0]._M_string_length + 24);
  if ( (_DWORD)v13 == *(_DWORD *)(v45[0]._M_string_length + 28) )
  {
    google::protobuf::RepeatedField<int>::Reserve(
      (google::protobuf::RepeatedField<int> *const)(v45[0]._M_string_length + 24),
      v13 + 1);
    v13 = *(int *)(M_string_length + 24);
  }
  v14 = *(_QWORD *)(M_string_length + 32);
  *(_DWORD *)(M_string_length + 24) = v13 + 1;
  *(_DWORD *)(v14 + 4 * v13 + 8) = 1;
  ptr = a2->name_.ptr_;
  a2->_has_bits_.has_bits_[0] |= 1u;
  if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
      &a2->name_,
      &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
    ptr = a2->name_.ptr_;
  }
  result = google::protobuf::compiler::Parser::ConsumeIdentifier((__int64)this, ptr, "Expected oneof name.");
  v16 = *(_DWORD *)(v45[0]._M_string_length + 48);
  if ( (_BYTE)result )
  {
    if ( v16 <= 2 )
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder((google::protobuf::compiler::Parser::LocationRecorder *const)v45);
    if ( (unsigned __int8)google::protobuf::compiler::Parser::ConsumeEndOfDeclaration(this, "{", a5) )
    {
      while ( 1 )
      {
        if ( this->input_->current_.type == TYPE_END )
        {
          __capacity = 55LL;
          v45[0]._M_dataplus._M_p = v45[0]._anon_0._M_local_buf;
          v37 = std::string::_M_create(v45, &__capacity, 0LL);
          v45[0]._M_dataplus._M_p = v37;
          v45[0]._anon_0._M_allocated_capacity = __capacity;
          *(__m128i *)v37 = _mm_load_si128((const __m128i *)&xmmword_F6EDF20);
          si128 = _mm_load_si128((const __m128i *)&xmmword_F6EE130);
          *((_DWORD *)v37 + 12) = 2099716199;
          *((__m128i *)v37 + 1) = si128;
          v39 = _mm_load_si128((const __m128i *)&xmmword_F6EE140);
          *((_WORD *)v37 + 26) = 10535;
          v37[54] = 46;
          *((__m128i *)v37 + 2) = v39;
          v45[0]._M_string_length = __capacity;
          v45[0]._M_dataplus._M_p[__capacity] = 0;
          error_collector = this->error_collector_;
          if ( error_collector )
            (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))error_collector->_vptr_ErrorCollector
             + 2))(
              error_collector,
              (unsigned int)this->input_->current_.line,
              (unsigned int)this->input_->current_.column,
              v45);
          M_p = (std::string *)v45[0]._M_dataplus._M_p;
          this->had_errors_ = 1;
          if ( M_p != (std::string *)&v45[0]._anon_0 )
            operator delete(M_p);
          return 0LL;
        }
        if ( std::string::compare(&this->input_->current_.text, "option") )
          break;
        google::protobuf::compiler::Parser::LocationRecorder::Init(
          (google::protobuf::compiler::Parser::LocationRecorder *)v45,
          a5);
        v17 = v45[0]._M_string_length;
        v18 = *(int *)(v45[0]._M_string_length + 24);
        if ( (_DWORD)v18 == *(_DWORD *)(v45[0]._M_string_length + 28) )
        {
          google::protobuf::RepeatedField<int>::Reserve(
            (google::protobuf::RepeatedField<int> *const)(v45[0]._M_string_length + 24),
            v18 + 1);
          v18 = *(int *)(v17 + 24);
        }
        v19 = *(_QWORD *)(v17 + 32);
        *(_DWORD *)(v17 + 24) = v18 + 1;
        *(_DWORD *)(v19 + 4 * v18 + 8) = 2;
        options = a2->options_;
        a2->_has_bits_.has_bits_[0] |= 2u;
        if ( !options )
        {
          options = (google::protobuf::OneofOptions *)operator new(0x68uLL);
          google::protobuf::OneofOptions::OneofOptions(options);
          a2->options_ = options;
        }
        v21 = google::protobuf::compiler::Parser::ParseOption(
                this,
                options,
                (const google::protobuf::compiler::Parser::LocationRecorder *)v45,
                a7,
                OPTION_STATEMENT);
        v22 = *(_DWORD *)(v45[0]._M_string_length + 48);
        if ( !v21 )
        {
          if ( v22 <= 2 )
            google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder((google::protobuf::compiler::Parser::LocationRecorder *const)v45);
          return 0LL;
        }
        if ( v22 <= 2 )
          goto LABEL_38;
LABEL_43:
        result = google::protobuf::compiler::Parser::TryConsumeEndOfDeclaration(this, "}", 0LL);
        if ( (_BYTE)result )
          return result;
      }
      if ( !std::string::compare(&this->input_->current_.text, "required")
        || !std::string::compare(&this->input_->current_.text, "optional")
        || !std::string::compare(&this->input_->current_.text, "repeated") )
      {
        __capacity = 71LL;
        v45[0]._M_dataplus._M_p = v45[0]._anon_0._M_local_buf;
        v23 = std::string::_M_create(v45, &__capacity, 0LL);
        v45[0]._M_dataplus._M_p = v23;
        v45[0]._anon_0._M_allocated_capacity = __capacity;
        *(__m128i *)v23 = _mm_load_si128((const __m128i *)&xmmword_F6EE150);
        v24 = _mm_load_si128((const __m128i *)&xmmword_F6EE160);
        *((_DWORD *)v23 + 16) = 1702125925;
        *((__m128i *)v23 + 1) = v24;
        v25 = _mm_load_si128((const __m128i *)&xmmword_F6EE170);
        *((_WORD *)v23 + 34) = 10596;
        *((__m128i *)v23 + 2) = v25;
        v26 = _mm_load_si128((const __m128i *)&xmmword_F6EE180);
        v23[70] = 46;
        *((__m128i *)v23 + 3) = v26;
        v45[0]._M_string_length = __capacity;
        v45[0]._M_dataplus._M_p[__capacity] = 0;
        v27 = this->error_collector_;
        if ( v27 )
          (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))v27->_vptr_ErrorCollector
           + 2))(
            v27,
            (unsigned int)this->input_->current_.line,
            (unsigned int)this->input_->current_.column,
            v45);
        v28 = (std::string *)v45[0]._M_dataplus._M_p;
        this->had_errors_ = 1;
        if ( v28 != (std::string *)&v45[0]._anon_0 )
          operator delete(v28);
        google::protobuf::io::Tokenizer::Next(this->input_);
      }
      google::protobuf::compiler::Parser::LocationRecorder::LocationRecorder(
        (google::protobuf::compiler::Parser::LocationRecorder *const)v45,
        a6,
        2,
        a3->field_.current_size_);
      rep = a3->field_.rep_;
      if ( rep )
      {
        current_size = a3->field_.current_size_;
        allocated_size = rep->allocated_size;
        if ( (int)current_size < rep->allocated_size )
        {
          AlignedAndAddCleanup = (google::protobuf::FieldDescriptorProto *)rep->elements[current_size];
          a3->field_.current_size_ = current_size + 1;
          goto LABEL_35;
        }
        total_size = a3->field_.total_size_;
        if ( allocated_size != total_size )
        {
LABEL_30:
          arena = a3->field_.arena_;
          rep->allocated_size = allocated_size + 1;
          if ( arena )
          {
            if ( arena->hooks_cookie_ )
              google::protobuf::Arena::OnArenaAllocation(
                arena,
                (const std::type_info *)&`typeinfo for'google::protobuf::FieldDescriptorProto,
                0x58uLL);
            AlignedAndAddCleanup = (google::protobuf::FieldDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                               &arena->impl_,
                                                                               0x58uLL,
                                                                               google::protobuf::internal::arena_destruct_object<google::protobuf::FieldDescriptorProto>);
            google::protobuf::FieldDescriptorProto::FieldDescriptorProto(AlignedAndAddCleanup);
          }
          else
          {
            AlignedAndAddCleanup = (google::protobuf::FieldDescriptorProto *)operator new(0x58uLL);
            google::protobuf::FieldDescriptorProto::FieldDescriptorProto(AlignedAndAddCleanup);
          }
          v35 = a3->field_.current_size_;
          v36 = a3->field_.rep_;
          a3->field_.current_size_ = v35 + 1;
          v36->elements[v35] = AlignedAndAddCleanup;
LABEL_35:
          AlignedAndAddCleanup->_has_bits_.has_bits_[0] |= 0x180u;
          AlignedAndAddCleanup->label_ = 1;
          AlignedAndAddCleanup->oneof_index_ = a4;
          if ( !(unsigned __int8)google::protobuf::compiler::Parser::ParseMessageFieldNoLabel(
                                   this,
                                   AlignedAndAddCleanup,
                                   &a3->nested_type_,
                                   a6,
                                   3,
                                   (const google::protobuf::compiler::Parser::LocationRecorder *)v45,
                                   a7) )
            google::protobuf::compiler::Parser::SkipStatement(this);
          if ( *(int *)(v45[0]._M_string_length + 48) > 2 )
            goto LABEL_43;
LABEL_38:
          google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder((google::protobuf::compiler::Parser::LocationRecorder *const)v45);
          goto LABEL_43;
        }
      }
      else
      {
        total_size = a3->field_.total_size_;
      }
      google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&a3->field_, total_size + 1);
      rep = a3->field_.rep_;
      allocated_size = rep->allocated_size;
      goto LABEL_30;
    }
    return 0LL;
  }
  else if ( v16 <= 2 )
  {
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder((google::protobuf::compiler::Parser::LocationRecorder *const)v45);
    return 0LL;
  }
  return result;
};

// Line 1734: range 000000000DC0A900-000000000DC0AA4A
__int64 __fastcall google::protobuf::compiler::Parser::ParseEnumDefinition(
        google::protobuf::compiler::Parser *this,
        google::protobuf::EnumDescriptorProto *a2,
        const google::protobuf::compiler::Parser::LocationRecorder *a3,
        const google::protobuf::FileDescriptorProto *a4)
{
  __int64 result; // rax
  google::protobuf::SourceCodeInfo::Location *location; // rbx
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  std::string *ptr; // rsi
  int v12; // edx
  google::protobuf::compiler::Parser::LocationRecorder v13; // [rsp+10h] [rbp-38h] BYREF

  if ( !(unsigned __int8)google::protobuf::compiler::Parser::Consume(this, "enum") )
    return 0LL;
  google::protobuf::compiler::Parser::LocationRecorder::Init(&v13, a3);
  location = v13.location_;
  current_size = v13.location_->path_.current_size_;
  if ( (_DWORD)current_size == v13.location_->path_.total_size_ )
  {
    google::protobuf::RepeatedField<int>::Reserve(&v13.location_->path_, current_size + 1);
    current_size = location->path_.current_size_;
  }
  rep = location->path_.rep_;
  location->path_.current_size_ = current_size + 1;
  rep->elements[current_size] = 1;
  google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(&v13, a2, NAME);
  ptr = a2->name_.ptr_;
  a2->_has_bits_.has_bits_[0] |= 1u;
  if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
      &a2->name_,
      &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
    ptr = a2->name_.ptr_;
  }
  result = google::protobuf::compiler::Parser::ConsumeIdentifier((__int64)this, ptr, "Expected enum name.");
  v12 = v13.location_->span_.current_size_;
  if ( (_BYTE)result )
  {
    if ( v12 <= 2 )
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v13);
    if ( (unsigned __int8)google::protobuf::compiler::Parser::ParseEnumBlock(this, a2, a3, a4) )
      return google::protobuf::compiler::Parser::ValidateEnum(this, a2);
    return 0LL;
  }
  if ( v12 <= 2 )
  {
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v13);
    return 0LL;
  }
  return result;
};

// Line 1754: range 000000000DC094C0-000000000DC09610
__int64 __fastcall google::protobuf::compiler::Parser::ParseEnumBlock(
        google::protobuf::compiler::Parser *this,
        google::protobuf::EnumDescriptorProto *a2,
        const google::protobuf::compiler::Parser::LocationRecorder *a3,
        const google::protobuf::FileDescriptorProto *a4)
{
  unsigned int v7; // r12d
  std::string::pointer v9; // rax
  __m128i si128; // xmm0
  std::string::pointer M_p; // rdx
  __m128i v12; // xmm0
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  std::string *v14; // rdi
  std::string::size_type __capacity; // [rsp+8h] [rbp-50h] BYREF
  std::string v16; // [rsp+10h] [rbp-48h] BYREF

  v7 = google::protobuf::compiler::Parser::ConsumeEndOfDeclaration(this, "{", a3);
  if ( (_BYTE)v7 )
  {
    while ( 1 )
    {
      v7 = google::protobuf::compiler::Parser::TryConsumeEndOfDeclaration(this, "}", 0LL);
      if ( (_BYTE)v7 )
        break;
      if ( this->input_->current_.type == TYPE_END )
      {
        __capacity = 54LL;
        v16._M_dataplus._M_p = v16._anon_0._M_local_buf;
        v9 = std::string::_M_create(&v16, &__capacity, 0LL);
        v16._M_dataplus._M_p = v9;
        v16._anon_0._M_allocated_capacity = __capacity;
        *(__m128i *)v9 = _mm_load_si128((const __m128i *)&xmmword_F6EDF20);
        si128 = _mm_load_si128((const __m128i *)&xmmword_F6EDF50);
        *((_WORD *)v9 + 26) = 11817;
        M_p = v16._M_dataplus._M_p;
        *((__m128i *)v9 + 1) = si128;
        v12 = _mm_load_si128((const __m128i *)&xmmword_F6EDF60);
        *((_DWORD *)v9 + 12) = 662513440;
        *((__m128i *)v9 + 2) = v12;
        v16._M_string_length = __capacity;
        M_p[__capacity] = 0;
        error_collector = this->error_collector_;
        if ( error_collector )
          (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))error_collector->_vptr_ErrorCollector
           + 2))(
            error_collector,
            (unsigned int)this->input_->current_.line,
            (unsigned int)this->input_->current_.column,
            &v16);
        v14 = (std::string *)v16._M_dataplus._M_p;
        this->had_errors_ = 1;
        if ( v14 != (std::string *)&v16._anon_0 )
        {
          operator delete(v14);
          return v7;
        }
        return v7;
      }
      if ( !(unsigned __int8)google::protobuf::compiler::Parser::ParseEnumStatement(this, a2, a3, a4) )
        google::protobuf::compiler::Parser::SkipStatement(this);
    }
  }
  return v7;
};

// Line 1775: range 000000000DC09280-000000000DC094B2
__int64 __fastcall google::protobuf::compiler::Parser::ParseEnumStatement(
        google::protobuf::compiler::Parser *this,
        google::protobuf::EnumDescriptorProto *a2,
        const google::protobuf::compiler::Parser::LocationRecorder *a3,
        const google::protobuf::FileDescriptorProto *a4)
{
  __int64 result; // rax
  google::protobuf::SourceCodeInfo::Location *location; // r13
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  google::protobuf::EnumOptions *options; // r13
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v12; // rax
  __int64 v13; // rcx
  int allocated_size; // edx
  google::protobuf::EnumValueDescriptorProto *AlignedAndAddCleanup; // r13
  int total_size; // esi
  google::protobuf::Arena *arena; // r13
  __int64 v18; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v19; // rdx
  unsigned __int8 v20; // [rsp+Fh] [rbp-39h]
  google::protobuf::compiler::Parser::LocationRecorder v21; // [rsp+10h] [rbp-38h] BYREF

  result = google::protobuf::compiler::Parser::TryConsumeEndOfDeclaration(this, ";", 0LL);
  if ( !(_BYTE)result )
  {
    if ( !std::string::compare(&this->input_->current_.text, "option") )
    {
      google::protobuf::compiler::Parser::LocationRecorder::Init(&v21, a3);
      location = v21.location_;
      current_size = v21.location_->path_.current_size_;
      if ( (_DWORD)current_size == v21.location_->path_.total_size_ )
      {
        google::protobuf::RepeatedField<int>::Reserve(&v21.location_->path_, current_size + 1);
        current_size = location->path_.current_size_;
      }
      rep = location->path_.rep_;
      location->path_.current_size_ = current_size + 1;
      options = a2->options_;
      rep->elements[current_size] = 3;
      a2->_has_bits_.has_bits_[0] |= 2u;
      if ( !options )
      {
        options = (google::protobuf::EnumOptions *)operator new(0x70uLL);
        google::protobuf::EnumOptions::EnumOptions(options);
        a2->options_ = options;
      }
      result = google::protobuf::compiler::Parser::ParseOption(this, options, &v21, a4, OPTION_STATEMENT);
      goto LABEL_9;
    }
    google::protobuf::compiler::Parser::LocationRecorder::LocationRecorder(&v21, a3, 2, a2->value_.current_size_);
    v12 = a2->value_.rep_;
    if ( v12 )
    {
      v13 = a2->value_.current_size_;
      allocated_size = v12->allocated_size;
      if ( (int)v13 < v12->allocated_size )
      {
        AlignedAndAddCleanup = (google::protobuf::EnumValueDescriptorProto *)v12->elements[v13];
        a2->value_.current_size_ = v13 + 1;
LABEL_14:
        result = google::protobuf::compiler::Parser::ParseEnumConstant(this, AlignedAndAddCleanup, &v21, a4);
LABEL_9:
        if ( v21.location_->span_.current_size_ <= 2 )
        {
          v20 = result;
          google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v21);
          return v20;
        }
        return result;
      }
      total_size = a2->value_.total_size_;
      if ( allocated_size != total_size )
      {
LABEL_17:
        arena = a2->value_.arena_;
        v12->allocated_size = allocated_size + 1;
        if ( arena )
        {
          if ( arena->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(
              arena,
              (const std::type_info *)&`typeinfo for'google::protobuf::EnumValueDescriptorProto,
              0x30uLL);
          AlignedAndAddCleanup = (google::protobuf::EnumValueDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                                 &arena->impl_,
                                                                                 0x30uLL,
                                                                                 google::protobuf::internal::arena_destruct_object<google::protobuf::EnumValueDescriptorProto>);
          google::protobuf::EnumValueDescriptorProto::EnumValueDescriptorProto(AlignedAndAddCleanup);
        }
        else
        {
          AlignedAndAddCleanup = (google::protobuf::EnumValueDescriptorProto *)operator new(0x30uLL);
          google::protobuf::EnumValueDescriptorProto::EnumValueDescriptorProto(AlignedAndAddCleanup);
        }
        v18 = a2->value_.current_size_;
        v19 = a2->value_.rep_;
        a2->value_.current_size_ = v18 + 1;
        v19->elements[v18] = AlignedAndAddCleanup;
        goto LABEL_14;
      }
    }
    else
    {
      total_size = a2->value_.total_size_;
    }
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&a2->value_, total_size + 1);
    v12 = a2->value_.rep_;
    allocated_size = v12->allocated_size;
    goto LABEL_17;
  }
  return result;
};

// Line 1793: range 000000000DC09040-000000000DC09270
char __fastcall google::protobuf::compiler::Parser::ParseEnumConstant(
        google::protobuf::compiler::Parser *this,
        google::protobuf::EnumValueDescriptorProto *a2,
        const google::protobuf::compiler::Parser::LocationRecorder *a3,
        const google::protobuf::FileDescriptorProto *a4)
{
  google::protobuf::SourceCodeInfo::Location *location; // rbx
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  std::string *ptr; // rsi
  char result; // al
  int v12; // edx
  google::protobuf::SourceCodeInfo::Location *v13; // rbx
  __int64 v14; // rsi
  google::protobuf::RepeatedField<int>::Rep *v15; // rax
  google::protobuf::SourceCodeInfo::Location *v16; // rdx
  int v17; // eax
  int output; // [rsp+1Ch] [rbp-3Ch] BYREF
  google::protobuf::compiler::Parser::LocationRecorder v19; // [rsp+20h] [rbp-38h] BYREF

  google::protobuf::compiler::Parser::LocationRecorder::Init(&v19, a3);
  location = v19.location_;
  current_size = v19.location_->path_.current_size_;
  if ( (_DWORD)current_size == v19.location_->path_.total_size_ )
  {
    google::protobuf::RepeatedField<int>::Reserve(&v19.location_->path_, current_size + 1);
    current_size = location->path_.current_size_;
  }
  rep = location->path_.rep_;
  location->path_.current_size_ = current_size + 1;
  rep->elements[current_size] = 1;
  google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(&v19, a2, NAME);
  ptr = a2->name_.ptr_;
  a2->_has_bits_.has_bits_[0] |= 1u;
  if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
      &a2->name_,
      &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
    ptr = a2->name_.ptr_;
  }
  result = google::protobuf::compiler::Parser::ConsumeIdentifier((__int64)this, ptr, "Expected enum constant name.");
  v12 = v19.location_->span_.current_size_;
  if ( result )
  {
    if ( v12 <= 2 )
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v19);
    if ( !(unsigned __int8)google::protobuf::compiler::Parser::Consume(
                             this,
                             "=",
                             "Missing numeric value for enum constant.") )
      return 0;
    google::protobuf::compiler::Parser::LocationRecorder::Init(&v19, a3);
    v13 = v19.location_;
    v14 = v19.location_->path_.current_size_;
    if ( (_DWORD)v14 == v19.location_->path_.total_size_ )
    {
      google::protobuf::RepeatedField<int>::Reserve(&v19.location_->path_, v14 + 1);
      v14 = v13->path_.current_size_;
    }
    v15 = v13->path_.rep_;
    v13->path_.current_size_ = v14 + 1;
    v15->elements[v14] = 2;
    google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(&v19, a2, NUMBER);
    result = google::protobuf::compiler::Parser::ConsumeSignedInteger(this, &output, "Expected integer.");
    v16 = v19.location_;
    if ( result )
    {
      v17 = output;
      a2->_has_bits_.has_bits_[0] |= 4u;
      a2->number_ = v17;
      if ( v16->span_.current_size_ <= 2 )
        google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v19);
      if ( (unsigned __int8)google::protobuf::compiler::Parser::ParseEnumConstantOptions(this, a2, a3, a4) )
        return google::protobuf::compiler::Parser::ConsumeEndOfDeclaration(this, ";", a3);
      return 0;
    }
    if ( v19.location_->span_.current_size_ <= 2 )
    {
LABEL_19:
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v19);
      return 0;
    }
  }
  else if ( v12 <= 2 )
  {
    goto LABEL_19;
  }
  return result;
};

// Line 1829: range 000000000DC08640-000000000DC08780
__int64 __fastcall google::protobuf::compiler::Parser::ParseEnumConstantOptions(
        google::protobuf::compiler::Parser *this,
        google::protobuf::EnumValueDescriptorProto *a2,
        const google::protobuf::compiler::Parser::LocationRecorder *a3,
        const google::protobuf::FileDescriptorProto *a4)
{
  int v7; // r8d
  __int64 result; // rax
  google::protobuf::SourceCodeInfo::Location *location; // rbp
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  google::protobuf::EnumValueOptions *options; // rbp
  unsigned __int8 v13; // [rsp+Fh] [rbp-39h]
  google::protobuf::compiler::Parser::LocationRecorder v14; // [rsp+10h] [rbp-38h] BYREF

  v7 = std::string::compare(&this->input_->current_.text, "[");
  result = 1LL;
  if ( !v7 )
  {
    google::protobuf::compiler::Parser::LocationRecorder::Init(&v14, a3);
    location = v14.location_;
    current_size = v14.location_->path_.current_size_;
    if ( (_DWORD)current_size == v14.location_->path_.total_size_ )
    {
      google::protobuf::RepeatedField<int>::Reserve(&v14.location_->path_, current_size + 1);
      current_size = location->path_.current_size_;
    }
    rep = location->path_.rep_;
    location->path_.current_size_ = current_size + 1;
    rep->elements[current_size] = 3;
    if ( (unsigned __int8)google::protobuf::compiler::Parser::Consume(this, "[") )
    {
      while ( 1 )
      {
        options = a2->options_;
        a2->_has_bits_.has_bits_[0] |= 2u;
        if ( !options )
        {
          options = (google::protobuf::EnumValueOptions *)operator new(0x70uLL);
          google::protobuf::EnumValueOptions::EnumValueOptions(options);
          a2->options_ = options;
        }
        if ( !(unsigned __int8)google::protobuf::compiler::Parser::ParseOption(
                                 this,
                                 options,
                                 &v14,
                                 a4,
                                 OPTION_ASSIGNMENT) )
          break;
        if ( !google::protobuf::compiler::Parser::TryConsume(this, ",") )
        {
          result = google::protobuf::compiler::Parser::Consume(this, "]");
          goto LABEL_12;
        }
      }
    }
    result = 0LL;
LABEL_12:
    if ( v14.location_->span_.current_size_ <= 2 )
    {
      v13 = result;
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v14);
      return v13;
    }
  }
  return result;
};

// Line 1852: range 000000000DC0A240-000000000DC0A37A
__int64 __fastcall google::protobuf::compiler::Parser::ParseServiceDefinition(
        google::protobuf::compiler::Parser *this,
        google::protobuf::ServiceDescriptorProto *a2,
        const google::protobuf::compiler::Parser::LocationRecorder *a3,
        const google::protobuf::FileDescriptorProto *a4)
{
  __int64 result; // rax
  google::protobuf::SourceCodeInfo::Location *location; // rbx
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  std::string *ptr; // rsi
  int v12; // edx
  google::protobuf::compiler::Parser::LocationRecorder v13; // [rsp+10h] [rbp-38h] BYREF

  result = google::protobuf::compiler::Parser::Consume(this, "service");
  if ( (_BYTE)result )
  {
    google::protobuf::compiler::Parser::LocationRecorder::Init(&v13, a3);
    location = v13.location_;
    current_size = v13.location_->path_.current_size_;
    if ( (_DWORD)current_size == v13.location_->path_.total_size_ )
    {
      google::protobuf::RepeatedField<int>::Reserve(&v13.location_->path_, current_size + 1);
      current_size = location->path_.current_size_;
    }
    rep = location->path_.rep_;
    location->path_.current_size_ = current_size + 1;
    rep->elements[current_size] = 1;
    google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(&v13, a2, NAME);
    ptr = a2->name_.ptr_;
    a2->_has_bits_.has_bits_[0] |= 1u;
    if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
        &a2->name_,
        &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
      ptr = a2->name_.ptr_;
    }
    result = google::protobuf::compiler::Parser::ConsumeIdentifier((__int64)this, ptr, "Expected service name.");
    v12 = v13.location_->span_.current_size_;
    if ( (_BYTE)result )
    {
      if ( v12 <= 2 )
        google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v13);
      return google::protobuf::compiler::Parser::ParseServiceBlock(this, a2, a3, a4);
    }
    else if ( v12 <= 2 )
    {
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v13);
      return 0LL;
    }
  }
  return result;
};

// Line 1869: range 000000000DC0A0E0-000000000DC0A230
__int64 __fastcall google::protobuf::compiler::Parser::ParseServiceBlock(
        google::protobuf::compiler::Parser *this,
        google::protobuf::ServiceDescriptorProto *a2,
        const google::protobuf::compiler::Parser::LocationRecorder *a3,
        const google::protobuf::FileDescriptorProto *a4)
{
  unsigned int v7; // r12d
  std::string::pointer v9; // rax
  __m128i si128; // xmm0
  std::string::pointer M_p; // rdx
  __m128i v12; // xmm0
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  std::string *v14; // rdi
  std::string::size_type __capacity; // [rsp+8h] [rbp-50h] BYREF
  std::string v16; // [rsp+10h] [rbp-48h] BYREF

  v7 = google::protobuf::compiler::Parser::ConsumeEndOfDeclaration(this, "{", a3);
  if ( (_BYTE)v7 )
  {
    while ( 1 )
    {
      v7 = google::protobuf::compiler::Parser::TryConsumeEndOfDeclaration(this, "}", 0LL);
      if ( (_BYTE)v7 )
        break;
      if ( this->input_->current_.type == TYPE_END )
      {
        __capacity = 57LL;
        v16._M_dataplus._M_p = v16._anon_0._M_local_buf;
        v9 = std::string::_M_create(&v16, &__capacity, 0LL);
        v16._M_dataplus._M_p = v9;
        v16._anon_0._M_allocated_capacity = __capacity;
        *(__m128i *)v9 = _mm_load_si128((const __m128i *)&xmmword_F6EDF20);
        si128 = _mm_load_si128((const __m128i *)&xmmword_F6EDF80);
        M_p = v16._M_dataplus._M_p;
        *((_QWORD *)v9 + 6) = 0x29277D2720676E69LL;
        *((__m128i *)v9 + 1) = si128;
        v12 = _mm_load_si128((const __m128i *)&xmmword_F6EDF90);
        v9[56] = 46;
        *((__m128i *)v9 + 2) = v12;
        v16._M_string_length = __capacity;
        M_p[__capacity] = 0;
        error_collector = this->error_collector_;
        if ( error_collector )
          (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))error_collector->_vptr_ErrorCollector
           + 2))(
            error_collector,
            (unsigned int)this->input_->current_.line,
            (unsigned int)this->input_->current_.column,
            &v16);
        v14 = (std::string *)v16._M_dataplus._M_p;
        this->had_errors_ = 1;
        if ( v14 != (std::string *)&v16._anon_0 )
        {
          operator delete(v14);
          return v7;
        }
        return v7;
      }
      if ( !(unsigned __int8)google::protobuf::compiler::Parser::ParseServiceStatement(this, a2, a3, a4) )
        google::protobuf::compiler::Parser::SkipStatement(this);
    }
  }
  return v7;
};

// Line 1890: range 000000000DC09EA0-000000000DC0A0D2
__int64 __fastcall google::protobuf::compiler::Parser::ParseServiceStatement(
        google::protobuf::compiler::Parser *this,
        google::protobuf::ServiceDescriptorProto *a2,
        const google::protobuf::compiler::Parser::LocationRecorder *a3,
        const google::protobuf::FileDescriptorProto *a4)
{
  __int64 result; // rax
  google::protobuf::SourceCodeInfo::Location *location; // r13
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  google::protobuf::ServiceOptions *options; // r13
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v12; // rax
  __int64 v13; // rcx
  int allocated_size; // edx
  google::protobuf::MethodDescriptorProto *AlignedAndAddCleanup; // r13
  int total_size; // esi
  google::protobuf::Arena *arena; // r13
  __int64 v18; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v19; // rdx
  unsigned __int8 v20; // [rsp+Fh] [rbp-39h]
  google::protobuf::compiler::Parser::LocationRecorder v21; // [rsp+10h] [rbp-38h] BYREF

  result = google::protobuf::compiler::Parser::TryConsumeEndOfDeclaration(this, ";", 0LL);
  if ( !(_BYTE)result )
  {
    if ( !std::string::compare(&this->input_->current_.text, "option") )
    {
      google::protobuf::compiler::Parser::LocationRecorder::Init(&v21, a3);
      location = v21.location_;
      current_size = v21.location_->path_.current_size_;
      if ( (_DWORD)current_size == v21.location_->path_.total_size_ )
      {
        google::protobuf::RepeatedField<int>::Reserve(&v21.location_->path_, current_size + 1);
        current_size = location->path_.current_size_;
      }
      rep = location->path_.rep_;
      location->path_.current_size_ = current_size + 1;
      options = a2->options_;
      rep->elements[current_size] = 3;
      a2->_has_bits_.has_bits_[0] |= 2u;
      if ( !options )
      {
        options = (google::protobuf::ServiceOptions *)operator new(0x70uLL);
        google::protobuf::ServiceOptions::ServiceOptions(options);
        a2->options_ = options;
      }
      result = google::protobuf::compiler::Parser::ParseOption(this, options, &v21, a4, OPTION_STATEMENT);
      goto LABEL_9;
    }
    google::protobuf::compiler::Parser::LocationRecorder::LocationRecorder(&v21, a3, 2, a2->method_.current_size_);
    v12 = a2->method_.rep_;
    if ( v12 )
    {
      v13 = a2->method_.current_size_;
      allocated_size = v12->allocated_size;
      if ( (int)v13 < v12->allocated_size )
      {
        AlignedAndAddCleanup = (google::protobuf::MethodDescriptorProto *)v12->elements[v13];
        a2->method_.current_size_ = v13 + 1;
LABEL_14:
        result = google::protobuf::compiler::Parser::ParseServiceMethod(this, AlignedAndAddCleanup, &v21, a4);
LABEL_9:
        if ( v21.location_->span_.current_size_ <= 2 )
        {
          v20 = result;
          google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v21);
          return v20;
        }
        return result;
      }
      total_size = a2->method_.total_size_;
      if ( allocated_size != total_size )
      {
LABEL_17:
        arena = a2->method_.arena_;
        v12->allocated_size = allocated_size + 1;
        if ( arena )
        {
          if ( arena->hooks_cookie_ )
            google::protobuf::Arena::OnArenaAllocation(
              arena,
              (const std::type_info *)&`typeinfo for'google::protobuf::MethodDescriptorProto,
              0x40uLL);
          AlignedAndAddCleanup = (google::protobuf::MethodDescriptorProto *)google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                                                                              &arena->impl_,
                                                                              0x40uLL,
                                                                              google::protobuf::internal::arena_destruct_object<google::protobuf::MethodDescriptorProto>);
          google::protobuf::MethodDescriptorProto::MethodDescriptorProto(AlignedAndAddCleanup);
        }
        else
        {
          AlignedAndAddCleanup = (google::protobuf::MethodDescriptorProto *)operator new(0x40uLL);
          google::protobuf::MethodDescriptorProto::MethodDescriptorProto(AlignedAndAddCleanup);
        }
        v18 = a2->method_.current_size_;
        v19 = a2->method_.rep_;
        a2->method_.current_size_ = v18 + 1;
        v19->elements[v18] = AlignedAndAddCleanup;
        goto LABEL_14;
      }
    }
    else
    {
      total_size = a2->method_.total_size_;
    }
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(&a2->method_, total_size + 1);
    v12 = a2->method_.rep_;
    allocated_size = v12->allocated_size;
    goto LABEL_17;
  }
  return result;
};

// Line 1908: range 000000000DC09950-000000000DC09E8F
__int64 __fastcall google::protobuf::compiler::Parser::ParseServiceMethod(
        google::protobuf::compiler::Parser *this,
        google::protobuf::MethodDescriptorProto *descriptor,
        const google::protobuf::compiler::Parser::LocationRecorder *a3,
        const google::protobuf::FileDescriptorProto *a4)
{
  __int64 result; // rax
  google::protobuf::SourceCodeInfo::Location *location; // r14
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  std::string *ptr; // rsi
  int v12; // edx
  google::protobuf::SourceCodeInfo::Location *v13; // r14
  __int64 v14; // rsi
  google::protobuf::RepeatedField<int>::Rep *v15; // rax
  char v16; // r8
  int v17; // eax
  google::protobuf::SourceCodeInfo::Location *v18; // r14
  __int64 v19; // rsi
  google::protobuf::RepeatedField<int>::Rep *v20; // rax
  std::string *v21; // rsi
  char v22; // r8
  google::protobuf::SourceCodeInfo::Location *v23; // r14
  __int64 v24; // rax
  google::protobuf::RepeatedField<int>::Rep *v25; // rdx
  char v26; // al
  google::protobuf::SourceCodeInfo::Location *v27; // rdx
  bool v28; // cc
  google::protobuf::SourceCodeInfo::Location *v29; // r14
  __int64 v30; // rax
  google::protobuf::RepeatedField<int>::Rep *v31; // rdx
  std::string *v32; // rsi
  char v33; // al
  int v34; // edx
  google::protobuf::MethodOptions *options; // r14
  google::protobuf::compiler::Parser::LocationRecorder v36; // [rsp+10h] [rbp-38h] BYREF

  if ( !(unsigned __int8)google::protobuf::compiler::Parser::Consume(this, off_F6ED7B6) )
    return 0LL;
  google::protobuf::compiler::Parser::LocationRecorder::Init(&v36, a3);
  location = v36.location_;
  current_size = v36.location_->path_.current_size_;
  if ( (_DWORD)current_size == v36.location_->path_.total_size_ )
  {
    google::protobuf::RepeatedField<int>::Reserve(&v36.location_->path_, current_size + 1);
    current_size = location->path_.current_size_;
  }
  rep = location->path_.rep_;
  location->path_.current_size_ = current_size + 1;
  rep->elements[current_size] = 1;
  google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(&v36, descriptor, NAME);
  ptr = descriptor->name_.ptr_;
  descriptor->_has_bits_.has_bits_[0] |= 1u;
  if ( ptr == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
      &descriptor->name_,
      &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
    ptr = descriptor->name_.ptr_;
  }
  result = google::protobuf::compiler::Parser::ConsumeIdentifier((__int64)this, ptr, "Expected method name.");
  v12 = v36.location_->span_.current_size_;
  if ( !(_BYTE)result )
  {
    if ( v12 <= 2 )
    {
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v36);
      return 0LL;
    }
    return result;
  }
  if ( v12 <= 2 )
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v36);
  if ( !(unsigned __int8)google::protobuf::compiler::Parser::Consume(this, "(") )
    return 0LL;
  if ( !std::string::compare(&this->input_->current_.text, "stream") )
  {
    google::protobuf::compiler::Parser::LocationRecorder::Init(&v36, a3);
    v13 = v36.location_;
    v14 = v36.location_->path_.current_size_;
    if ( (_DWORD)v14 == v36.location_->path_.total_size_ )
    {
      google::protobuf::RepeatedField<int>::Reserve(&v36.location_->path_, v14 + 1);
      v14 = v13->path_.current_size_;
    }
    v15 = v13->path_.rep_;
    v13->path_.current_size_ = v14 + 1;
    v15->elements[v14] = 5;
    google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(&v36, descriptor, OTHER);
    descriptor->_has_bits_.has_bits_[0] |= 0x10u;
    descriptor->client_streaming_ = 1;
    v16 = google::protobuf::compiler::Parser::Consume(this, "stream");
    v17 = v36.location_->span_.current_size_;
    if ( !v16 )
    {
LABEL_48:
      if ( v17 > 2 )
        return 0LL;
      goto LABEL_49;
    }
    if ( v17 <= 2 )
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v36);
  }
  google::protobuf::compiler::Parser::LocationRecorder::Init(&v36, a3);
  v18 = v36.location_;
  v19 = v36.location_->path_.current_size_;
  if ( (_DWORD)v19 == v36.location_->path_.total_size_ )
  {
    google::protobuf::RepeatedField<int>::Reserve(&v36.location_->path_, v19 + 1);
    v19 = v18->path_.current_size_;
  }
  v20 = v18->path_.rep_;
  v18->path_.current_size_ = v19 + 1;
  v20->elements[v19] = 2;
  google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(&v36, descriptor, INPUT_TYPE);
  v21 = descriptor->input_type_.ptr_;
  descriptor->_has_bits_.has_bits_[0] |= 2u;
  if ( v21 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
      &descriptor->input_type_,
      &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
    v21 = descriptor->input_type_.ptr_;
  }
  v22 = google::protobuf::compiler::Parser::ParseUserDefinedType(this, v21);
  v17 = v36.location_->span_.current_size_;
  if ( !v22 )
    goto LABEL_48;
  if ( v17 <= 2 )
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v36);
  if ( !(unsigned __int8)google::protobuf::compiler::Parser::Consume(this, ")")
    || !(unsigned __int8)google::protobuf::compiler::Parser::Consume(this, "returns")
    || !(unsigned __int8)google::protobuf::compiler::Parser::Consume(this, "(") )
  {
    return 0LL;
  }
  if ( !std::string::compare(&this->input_->current_.text, "stream") )
  {
    google::protobuf::compiler::Parser::LocationRecorder::Init(&v36, a3);
    v23 = v36.location_;
    v24 = v36.location_->path_.current_size_;
    if ( (_DWORD)v24 == v36.location_->path_.total_size_ )
    {
      google::protobuf::RepeatedField<int>::Reserve(&v36.location_->path_, v24 + 1);
      v24 = v23->path_.current_size_;
    }
    v25 = v23->path_.rep_;
    v23->path_.current_size_ = v24 + 1;
    v25->elements[v24] = 6;
    google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(&v36, descriptor, OTHER);
    v26 = google::protobuf::compiler::Parser::Consume(this, "stream");
    v27 = v36.location_;
    if ( v26 )
    {
      descriptor->_has_bits_.has_bits_[0] |= 0x20u;
      v28 = v27->span_.current_size_ <= 2;
      descriptor->server_streaming_ = 1;
      if ( v28 )
        google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v36);
      goto LABEL_34;
    }
    if ( v36.location_->span_.current_size_ > 2 )
      return 0LL;
LABEL_49:
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v36);
    return 0LL;
  }
LABEL_34:
  google::protobuf::compiler::Parser::LocationRecorder::Init(&v36, a3);
  v29 = v36.location_;
  v30 = v36.location_->path_.current_size_;
  if ( (_DWORD)v30 == v36.location_->path_.total_size_ )
  {
    google::protobuf::RepeatedField<int>::Reserve(&v36.location_->path_, v30 + 1);
    v30 = v29->path_.current_size_;
  }
  v31 = v29->path_.rep_;
  v29->path_.current_size_ = v30 + 1;
  v31->elements[v30] = 3;
  google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(&v36, descriptor, OUTPUT_TYPE);
  v32 = descriptor->output_type_.ptr_;
  descriptor->_has_bits_.has_bits_[0] |= 4u;
  if ( v32 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
  {
    google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
      &descriptor->output_type_,
      &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
    v32 = descriptor->output_type_.ptr_;
  }
  v33 = google::protobuf::compiler::Parser::ParseUserDefinedType(this, v32);
  v34 = v36.location_->span_.current_size_;
  if ( !v33 )
  {
    if ( v34 > 2 )
      return 0LL;
    goto LABEL_49;
  }
  if ( v34 <= 2 )
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v36);
  if ( !(unsigned __int8)google::protobuf::compiler::Parser::Consume(this, ")") )
    return 0LL;
  if ( std::string::compare(&this->input_->current_.text, "{") )
    return google::protobuf::compiler::Parser::ConsumeEndOfDeclaration(this, ";", a3);
  options = descriptor->options_;
  descriptor->_has_bits_.has_bits_[0] |= 8u;
  if ( !options )
  {
    options = (google::protobuf::MethodOptions *)operator new(0x70uLL);
    google::protobuf::MethodOptions::MethodOptions(options);
    descriptor->options_ = options;
  }
  return google::protobuf::compiler::Parser::ParseMethodOptions(this, a3, a4, 4, options);
};

// Line 1976: range 000000000DC08790-000000000DC08959
__int64 __fastcall google::protobuf::compiler::Parser::ParseMethodOptions(
        google::protobuf::compiler::Parser *this,
        const google::protobuf::compiler::Parser::LocationRecorder *a2,
        const google::protobuf::FileDescriptorProto *a3,
        int a4,
        google::protobuf::Message *a5)
{
  unsigned int v9; // r12d
  std::string::pointer v11; // rax
  __m128i si128; // xmm0
  __m128i v13; // xmm0
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  std::string *M_p; // rdi
  std::string::size_type M_string_length; // r12
  __int64 v17; // rax
  __int64 v18; // rdx
  std::string::size_type __capacity; // [rsp+8h] [rbp-60h] BYREF
  std::string v20; // [rsp+10h] [rbp-58h] BYREF

  google::protobuf::compiler::Parser::ConsumeEndOfDeclaration(this, "{", a2);
  while ( 1 )
  {
    v9 = google::protobuf::compiler::Parser::TryConsumeEndOfDeclaration(this, "}", 0LL);
    if ( (_BYTE)v9 )
      break;
    if ( this->input_->current_.type == TYPE_END )
    {
      __capacity = 53LL;
      v20._M_dataplus._M_p = v20._anon_0._M_local_buf;
      v11 = std::string::_M_create(&v20, &__capacity, 0LL);
      v20._M_dataplus._M_p = v11;
      v20._anon_0._M_allocated_capacity = __capacity;
      *(__m128i *)v11 = _mm_load_si128((const __m128i *)&xmmword_F6EDF20);
      si128 = _mm_load_si128((const __m128i *)&xmmword_F6EDF30);
      *((_DWORD *)v11 + 12) = 690453799;
      *((__m128i *)v11 + 1) = si128;
      v13 = _mm_load_si128((const __m128i *)&xmmword_F6EDF40);
      v11[52] = 46;
      *((__m128i *)v11 + 2) = v13;
      v20._M_string_length = __capacity;
      v20._M_dataplus._M_p[__capacity] = 0;
      error_collector = this->error_collector_;
      if ( error_collector )
        (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))error_collector->_vptr_ErrorCollector
         + 2))(
          error_collector,
          (unsigned int)this->input_->current_.line,
          (unsigned int)this->input_->current_.column,
          &v20);
      M_p = (std::string *)v20._M_dataplus._M_p;
      this->had_errors_ = 1;
      if ( M_p != (std::string *)&v20._anon_0 )
        operator delete(M_p);
      return v9;
    }
    if ( !(unsigned __int8)google::protobuf::compiler::Parser::TryConsumeEndOfDeclaration(this, ";", 0LL) )
    {
      google::protobuf::compiler::Parser::LocationRecorder::Init(
        (google::protobuf::compiler::Parser::LocationRecorder *)&v20,
        a2);
      M_string_length = v20._M_string_length;
      v17 = *(int *)(v20._M_string_length + 24);
      if ( (_DWORD)v17 == *(_DWORD *)(v20._M_string_length + 28) )
      {
        google::protobuf::RepeatedField<int>::Reserve(
          (google::protobuf::RepeatedField<int> *const)(v20._M_string_length + 24),
          v17 + 1);
        v17 = *(int *)(M_string_length + 24);
      }
      v18 = *(_QWORD *)(M_string_length + 32);
      *(_DWORD *)(M_string_length + 24) = v17 + 1;
      *(_DWORD *)(v18 + 4 * v17 + 8) = a4;
      if ( !(unsigned __int8)google::protobuf::compiler::Parser::ParseOption(
                               this,
                               a5,
                               (const google::protobuf::compiler::Parser::LocationRecorder *)&v20,
                               a3,
                               OPTION_STATEMENT) )
        google::protobuf::compiler::Parser::SkipStatement(this);
      if ( *(int *)(v20._M_string_length + 48) <= 2 )
        google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder((google::protobuf::compiler::Parser::LocationRecorder *const)&v20);
    }
  }
  return v9;
};

// Line 2005: range 000000000DC03E80-000000000DC03EE7
bool __fastcall google::protobuf::compiler::Parser::ParseLabel(
        google::protobuf::compiler::Parser *const this,
        google::protobuf::FieldDescriptorProto::Label *label,
        const google::protobuf::FileDescriptorProto *containing_file)
{
  bool result; // al

  result = google::protobuf::compiler::Parser::TryConsume(this, "optional");
  if ( result )
  {
    *label = FieldDescriptorProto_Label_LABEL_OPTIONAL;
  }
  else
  {
    result = google::protobuf::compiler::Parser::TryConsume(this, "repeated");
    if ( result )
    {
      *label = FieldDescriptorProto_Label_LABEL_REPEATED;
    }
    else
    {
      result = google::protobuf::compiler::Parser::TryConsume(this, "required");
      if ( result )
        *label = FieldDescriptorProto_Label_LABEL_REQUIRED;
    }
  }
  return result;
};

// Line 2020: range 000000000DC06EC0-000000000DC06F0A
bool __fastcall google::protobuf::compiler::Parser::ParseType(
        google::protobuf::compiler::Parser *const this,
        google::protobuf::FieldDescriptorProto::Type *type,
        std::string *type_name)
{
  std::_Hashtable<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true> >::const_iterator v4; // rax
  google::protobuf::io::Tokenizer *input; // rdi

  v4._M_cur = std::_Hashtable<std::string,std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                &google::protobuf::compiler::`anonymous namespace'::kTypeNames._M_h,
                &this->input_->current_.text)._M_cur;
  if ( v4._M_cur )
  {
    input = this->input_;
    *type = *((google::protobuf::FieldDescriptorProto::Type *)&v4._M_cur->_M_storage._M_storage.1 + 8);
    google::protobuf::io::Tokenizer::Next(input);
    return 1;
  }
  else
  {
    return google::protobuf::compiler::Parser::ParseUserDefinedType(this, type_name);
  }
};

// Line 2031: range 000000000DC06C70-000000000DC06EB7
__int64 __fastcall google::protobuf::compiler::Parser::ParseUserDefinedType(
        google::protobuf::compiler::Parser *this,
        std::string *a2)
{
  std::string::pointer M_p; // rax
  std::string::pointer v5; // rax
  __m128i si128; // xmm0
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  std::string *v8; // rdi
  unsigned int v9; // r13d
  unsigned int v11; // eax
  char *v12; // rsi
  char v13; // al
  std::string::size_type __capacity; // [rsp+8h] [rbp-50h] BYREF
  std::string v15; // [rsp+10h] [rbp-48h] BYREF

  M_p = a2->_M_dataplus._M_p;
  a2->_M_string_length = 0LL;
  *M_p = 0;
  if ( std::_Hashtable<std::string,std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>>,std::__detail::_Select1st,std::equal_to<std::string>,google::protobuf::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         &google::protobuf::compiler::`anonymous namespace'::kTypeNames._M_h,
         &this->input_->current_.text)._M_cur )
  {
    __capacity = 22LL;
    v15._M_dataplus._M_p = v15._anon_0._M_local_buf;
    v5 = std::string::_M_create(&v15, &__capacity, 0LL);
    si128 = _mm_load_si128((const __m128i *)&xmmword_F6EDE40);
    v15._M_dataplus._M_p = v5;
    v15._anon_0._M_allocated_capacity = __capacity;
    *((_DWORD *)v5 + 4) = 1887007776;
    *((_WORD *)v5 + 10) = 11877;
    *(__m128i *)v5 = si128;
    v15._M_string_length = __capacity;
    v15._M_dataplus._M_p[__capacity] = 0;
    error_collector = this->error_collector_;
    if ( error_collector )
      (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))error_collector->_vptr_ErrorCollector
       + 2))(
        error_collector,
        (unsigned int)this->input_->current_.line,
        (unsigned int)this->input_->current_.column,
        &v15);
    v8 = (std::string *)v15._M_dataplus._M_p;
    this->had_errors_ = 1;
    if ( v8 != (std::string *)&v15._anon_0 )
      operator delete(v8);
    v9 = 1;
    std::string::_M_assign(a2, &this->input_->current_.text);
    google::protobuf::io::Tokenizer::Next(this->input_);
    return v9;
  }
  if ( google::protobuf::compiler::Parser::TryConsume(this, ".") )
  {
    if ( a2->_M_string_length == 0x3FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append(a2, ".", 1uLL);
  }
  v15._M_dataplus._M_p = v15._anon_0._M_local_buf;
  v15._M_string_length = 0LL;
  v15._anon_0._M_local_buf[0] = 0;
  v11 = google::protobuf::compiler::Parser::ConsumeIdentifier((__int64)this, &v15, "Expected type name.");
  v12 = v15._M_dataplus._M_p;
  v9 = v11;
  if ( (_BYTE)v11 )
  {
    do
    {
      std::string::_M_append(a2, v12, v15._M_string_length);
      if ( !google::protobuf::compiler::Parser::TryConsume(this, ".") )
      {
        v12 = v15._M_dataplus._M_p;
        goto LABEL_10;
      }
      if ( a2->_M_string_length == 0x3FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("basic_string::append");
      std::string::_M_append(a2, ".", 1uLL);
      v13 = google::protobuf::compiler::Parser::ConsumeIdentifier((__int64)this, &v15, "Expected identifier.");
      v12 = v15._M_dataplus._M_p;
    }
    while ( v13 );
    v9 = 0;
  }
LABEL_10:
  if ( v12 == (char *)&v15._anon_0 )
    return v9;
  operator delete(v12);
  return v9;
};

// Line 2070: range 000000000DC09620-000000000DC09944
__int64 __fastcall google::protobuf::compiler::Parser::ParsePackage(
        google::protobuf::compiler::Parser *this,
        google::protobuf::FileDescriptorProto *descriptor,
        const google::protobuf::compiler::Parser::LocationRecorder *a3,
        const google::protobuf::FileDescriptorProto *a4)
{
  std::string::pointer v7; // rax
  __m128i si128; // xmm0
  google::protobuf::io::ErrorCollector *error_collector; // rdi
  std::string *M_p; // rdi
  std::string *ptr; // rax
  __int64 result; // rax
  google::protobuf::SourceCodeInfo::Location *location; // r12
  __int64 current_size; // rsi
  google::protobuf::RepeatedField<int>::Rep *rep; // rax
  std::string *v16; // rdi
  std::string *v17; // rdi
  int v18; // edx
  unsigned __int8 v19; // [rsp+Fh] [rbp-69h]
  google::protobuf::compiler::Parser::LocationRecorder __capacity; // [rsp+10h] [rbp-68h] BYREF
  std::string v21; // [rsp+20h] [rbp-58h] BYREF

  if ( (descriptor->_has_bits_.has_bits_[0] & 2) != 0 )
  {
    __capacity.parser_ = (google::protobuf::compiler::Parser *)29;
    v21._M_dataplus._M_p = v21._anon_0._M_local_buf;
    v7 = std::string::_M_create(&v21, (std::string::size_type *)&__capacity, 0LL);
    si128 = _mm_load_si128((const __m128i *)&xmmword_F6EDF70);
    v21._M_dataplus._M_p = v7;
    v21._anon_0._M_allocated_capacity = (std::string::size_type)__capacity.parser_;
    qmemcpy(v7 + 16, " definitions.", 13);
    *(__m128i *)v7 = si128;
    v21._M_string_length = (std::string::size_type)__capacity.parser_;
    v21._M_dataplus._M_p[(unsigned __int64)__capacity.parser_] = 0;
    error_collector = this->error_collector_;
    if ( error_collector )
      (*((void (__fastcall **)(google::protobuf::io::ErrorCollector *, _QWORD, _QWORD, std::string *))error_collector->_vptr_ErrorCollector
       + 2))(
        error_collector,
        (unsigned int)this->input_->current_.line,
        (unsigned int)this->input_->current_.column,
        &v21);
    M_p = (std::string *)v21._M_dataplus._M_p;
    this->had_errors_ = 1;
    if ( M_p != (std::string *)&v21._anon_0 )
      operator delete(M_p);
    ptr = descriptor->package_.ptr_;
    if ( ptr != (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
    {
      ptr->_M_string_length = 0LL;
      *ptr->_M_dataplus._M_p = 0;
    }
    descriptor->_has_bits_.has_bits_[0] &= ~2u;
  }
  result = google::protobuf::compiler::Parser::Consume(this, "package");
  if ( (_BYTE)result )
  {
    google::protobuf::compiler::Parser::LocationRecorder::Init(&__capacity, a3);
    location = __capacity.location_;
    current_size = __capacity.location_->path_.current_size_;
    if ( (_DWORD)current_size == __capacity.location_->path_.total_size_ )
    {
      google::protobuf::RepeatedField<int>::Reserve(&__capacity.location_->path_, current_size + 1);
      current_size = location->path_.current_size_;
    }
    rep = location->path_.rep_;
    location->path_.current_size_ = current_size + 1;
    rep->elements[current_size] = 2;
    google::protobuf::compiler::Parser::LocationRecorder::RecordLegacyLocation(&__capacity, descriptor, NAME);
    while ( 1 )
    {
      v21._M_dataplus._M_p = v21._anon_0._M_local_buf;
      v21._M_string_length = 0LL;
      v21._anon_0._M_local_buf[0] = 0;
      if ( !(unsigned __int8)google::protobuf::compiler::Parser::ConsumeIdentifier(
                               (__int64)this,
                               &v21,
                               "Expected identifier.") )
      {
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v21._M_dataplus._M_p != &v21._anon_0 )
          operator delete(v21._M_dataplus._M_p);
        v18 = __capacity.location_->span_.current_size_;
        goto LABEL_26;
      }
      v16 = descriptor->package_.ptr_;
      descriptor->_has_bits_.has_bits_[0] |= 2u;
      if ( v16 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      {
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
          &descriptor->package_,
          &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
        v16 = descriptor->package_.ptr_;
      }
      std::string::_M_append(v16, v21._M_dataplus._M_p, v21._M_string_length);
      if ( !google::protobuf::compiler::Parser::TryConsume(this, ".") )
        break;
      v17 = descriptor->package_.ptr_;
      descriptor->_has_bits_.has_bits_[0] |= 2u;
      if ( v17 == (std::string *)&google::protobuf::internal::fixed_address_empty_string[abi:cxx11] )
      {
        google::protobuf::internal::ArenaStringPtr::CreateInstanceNoArena(
          &descriptor->package_,
          &google::protobuf::internal::fixed_address_empty_string[abi:cxx11]);
        v17 = descriptor->package_.ptr_;
      }
      if ( v17->_M_string_length == 0x3FFFFFFFFFFFFFFFLL )
        std::__throw_length_error("basic_string::append");
      std::string::_M_append(v17, ".", 1uLL);
      if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v21._M_dataplus._M_p != &v21._anon_0 )
        operator delete(v21._M_dataplus._M_p);
    }
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v21._M_dataplus._M_p != &v21._anon_0 )
      operator delete(v21._M_dataplus._M_p);
    google::protobuf::compiler::Parser::LocationRecorder::EndAt(&__capacity, &this->input_->previous_);
    result = google::protobuf::compiler::Parser::ConsumeEndOfDeclaration(this, ";", &__capacity);
    v18 = __capacity.location_->span_.current_size_;
    if ( (_BYTE)result )
    {
      if ( v18 <= 2 )
      {
        v19 = result;
        google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&__capacity);
        return v19;
      }
      return result;
    }
LABEL_26:
    if ( v18 <= 2 )
      google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&__capacity);
    return 0LL;
  }
  return result;
};

// Line 2105: range 000000000DC06860-000000000DC06B8A
__int64 __fastcall google::protobuf::compiler::Parser::ParseImport(
        google::protobuf::compiler::Parser *this,
        google::protobuf::internal::RepeatedPtrFieldBase *a2,
        google::protobuf::RepeatedField<int> *a3,
        google::protobuf::RepeatedField<int> *a4,
        google::protobuf::compiler::Parser::LocationRecorder *parent)
{
  __int64 result; // rax
  __int64 v10; // rsi
  google::protobuf::RepeatedField<int>::Rep *v11; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v12; // rax
  __int64 v13; // rcx
  int allocated_size; // edx
  __int64 v15; // rsi
  __int64 current_size; // rax
  google::protobuf::RepeatedField<int>::Rep *rep; // rdx
  int total_size; // esi
  google::protobuf::Arena *arena; // r12
  _BYTE *AlignedAndAddCleanup; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v21; // rdx
  __int64 v22; // rax
  int v23; // edx
  unsigned __int8 v24; // [rsp+Fh] [rbp-49h]
  google::protobuf::compiler::Parser::LocationRecorder v25; // [rsp+10h] [rbp-48h] BYREF

  result = google::protobuf::compiler::Parser::Consume(this, "import");
  if ( !(_BYTE)result )
    return result;
  if ( std::string::compare(&this->input_->current_.text, "public") )
  {
    if ( std::string::compare(&this->input_->current_.text, "weak") )
      goto LABEL_9;
    google::protobuf::compiler::Parser::LocationRecorder::LocationRecorder(&v25, parent, 11, a4->current_size_);
    result = google::protobuf::compiler::Parser::Consume(this, "weak");
    if ( (_BYTE)result )
    {
      current_size = a4->current_size_;
      if ( (_DWORD)current_size == a4->total_size_ )
      {
        google::protobuf::RepeatedField<int>::Reserve(a4, current_size + 1);
        current_size = a4->current_size_;
      }
      rep = a4->rep_;
      a4->current_size_ = current_size + 1;
      rep->elements[current_size] = a2->current_size_;
      if ( v25.location_->span_.current_size_ <= 2 )
        goto LABEL_8;
      goto LABEL_9;
    }
LABEL_28:
    if ( v25.location_->span_.current_size_ > 2 )
      return result;
LABEL_27:
    v24 = result;
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v25);
    return v24;
  }
  google::protobuf::compiler::Parser::LocationRecorder::LocationRecorder(&v25, parent, 10, a3->current_size_);
  result = google::protobuf::compiler::Parser::Consume(this, "public");
  if ( !(_BYTE)result )
    goto LABEL_28;
  v10 = a3->current_size_;
  if ( (_DWORD)v10 == a3->total_size_ )
  {
    google::protobuf::RepeatedField<int>::Reserve(a3, v10 + 1);
    v10 = a3->current_size_;
  }
  v11 = a3->rep_;
  a3->current_size_ = v10 + 1;
  v11->elements[v10] = a2->current_size_;
  if ( v25.location_->span_.current_size_ <= 2 )
LABEL_8:
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v25);
LABEL_9:
  google::protobuf::compiler::Parser::LocationRecorder::LocationRecorder(&v25, parent, 3, a2->current_size_);
  v12 = a2->rep_;
  if ( !v12 )
  {
    total_size = a2->total_size_;
    goto LABEL_32;
  }
  v13 = a2->current_size_;
  allocated_size = v12->allocated_size;
  if ( (int)v13 < v12->allocated_size )
  {
    v15 = (__int64)v12->elements[v13];
    a2->current_size_ = v13 + 1;
    goto LABEL_24;
  }
  total_size = a2->total_size_;
  if ( allocated_size == total_size )
  {
LABEL_32:
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(a2, total_size + 1);
    arena = a2->arena_;
    ++a2->rep_->allocated_size;
    if ( arena )
      goto LABEL_20;
    goto LABEL_30;
  }
  arena = a2->arena_;
  v12->allocated_size = allocated_size + 1;
  if ( arena )
  {
LABEL_20:
    if ( arena->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(arena, (const std::type_info *)&`typeinfo for'std::string, 0x20uLL);
    AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                             &arena->impl_,
                             0x20uLL,
                             google::protobuf::internal::arena_destruct_object<std::string>);
    goto LABEL_23;
  }
LABEL_30:
  AlignedAndAddCleanup = (_BYTE *)operator new(0x20uLL);
LABEL_23:
  v15 = (__int64)AlignedAndAddCleanup;
  AlignedAndAddCleanup[16] = 0;
  v21 = a2->rep_;
  *(_QWORD *)AlignedAndAddCleanup = AlignedAndAddCleanup + 16;
  v22 = a2->current_size_;
  *(_QWORD *)(v15 + 8) = 0LL;
  a2->current_size_ = v22 + 1;
  v21->elements[v22] = (void *)v15;
LABEL_24:
  if ( (unsigned __int8)google::protobuf::compiler::Parser::ConsumeString(
                          (__int64)this,
                          v15,
                          "Expected a string naming the file to import.") )
  {
    google::protobuf::compiler::Parser::LocationRecorder::EndAt(&v25, &this->input_->previous_);
    result = google::protobuf::compiler::Parser::ConsumeEndOfDeclaration(this, ";", &v25);
    v23 = v25.location_->span_.current_size_;
    if ( (_BYTE)result )
    {
      if ( v23 > 2 )
        return result;
      goto LABEL_27;
    }
  }
  else
  {
    v23 = v25.location_->span_.current_size_;
  }
  if ( v23 <= 2 )
    google::protobuf::compiler::Parser::LocationRecorder::~LocationRecorder(&v25);
  return 0LL;
};

// Line 2159: range 000000000DC0A380-000000000DC0A42B
void __fastcall google::protobuf::compiler::SourceLocationTable::Add(
        google::protobuf::compiler::SourceLocationTable *const this,
        const google::protobuf::Message *descriptor,
        google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation location,
        int line,
        int column)
{
  const std::piecewise_construct_t *v5; // r9
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rcx
  std::_Rb_tree_header *M_node; // rsi
  std::tuple<std::pair<const google::protobuf::Message*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>&&> *v11; // [rsp+0h] [rbp-38h] BYREF
  std::tuple<> *__args_2; // [rsp+8h] [rbp-30h] BYREF
  const google::protobuf::Message *descriptora; // [rsp+10h] [rbp-28h] BYREF
  google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation locationa; // [rsp+18h] [rbp-20h]

  M_parent = this->location_map_._M_t._M_impl._M_header._M_parent;
  descriptora = descriptor;
  locationa = location;
  if ( !M_parent )
  {
    M_node = &this->location_map_._M_t._M_impl.std::_Rb_tree_header;
    goto LABEL_10;
  }
  M_node = &this->location_map_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( (unsigned __int64)descriptor <= *(_QWORD *)&M_parent[1]._M_color
         && (descriptor != *(const google::protobuf::Message **)&M_parent[1]._M_color
          || SLODWORD(M_parent[1]._M_parent) >= location) )
    {
      M_node = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_8;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_8:
  if ( &this->location_map_._M_t._M_impl.std::_Rb_tree_header == M_node
    || (unsigned __int64)descriptor < M_node->_M_node_count )
  {
    goto LABEL_10;
  }
  if ( descriptor != (const google::protobuf::Message *)M_node->_M_node_count )
    goto LABEL_11;
  if ( location < M_node[1]._M_header._M_color )
  {
LABEL_10:
    M_node = (std::_Rb_tree_header *)std::_Rb_tree<std::pair<google::protobuf::Message const*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>,std::pair<std::pair<google::protobuf::Message const*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation> const,std::pair<int,int>>,std::_Select1st<std::pair<std::pair<google::protobuf::Message const*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation> const,std::pair<int,int>>>,std::less<std::pair<google::protobuf::Message const*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>>,std::allocator<std::pair<std::pair<google::protobuf::Message const*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation> const,std::pair<int,int>>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::pair<google::protobuf::Message const*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>&&>,std::tuple<>>(
                                       &this->location_map_._M_t,
                                       (std::_Rb_tree<std::pair<const google::protobuf::Message*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>,std::pair<const std::pair<const google::protobuf::Message*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>,std::pair<int,int> >,std::_Select1st<std::pair<const std::pair<const google::protobuf::Message*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>,std::pair<int,int> > >,std::less<std::pair<const google::protobuf::Message*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation> >,std::allocator<std::pair<const std::pair<const google::protobuf::Message*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>,std::pair<int,int> > > >::const_iterator)M_node,
                                       &std::piecewise_construct,
                                       (std::tuple<std::pair<const google::protobuf::Message*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>&&> *)&__args_2,
                                       (std::tuple<> *)&v11 + 7,
                                       v5,
                                       v11,
                                       (std::tuple<> *)&descriptora)._M_node;
LABEL_11:
    LODWORD(M_node[1]._M_header._M_parent) = line;
    HIDWORD(M_node[1]._M_header._M_parent) = column;
    return;
  }
  LODWORD(M_node[1]._M_header._M_parent) = line;
  HIDWORD(M_node[1]._M_header._M_parent) = column;
};

// Line 2164: range 000000000DC04570-000000000DC0459A
void __fastcall google::protobuf::compiler::SourceLocationTable::Clear(
        google::protobuf::compiler::SourceLocationTable *const this)
{
  std::_Rb_tree<std::pair<google::protobuf::Message const*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>,std::pair<std::pair<google::protobuf::Message const*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation> const,std::pair<int,int>>,std::_Select1st<std::pair<std::pair<google::protobuf::Message const*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation> const,std::pair<int,int>>>,std::less<std::pair<google::protobuf::Message const*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>>,std::allocator<std::pair<std::pair<google::protobuf::Message const*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation> const,std::pair<int,int>>>>::_M_erase(
    &this->location_map_._M_t,
    (std::_Rb_tree<std::pair<const google::protobuf::Message*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>,std::pair<const std::pair<const google::protobuf::Message*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>,std::pair<int,int> >,std::_Select1st<std::pair<const std::pair<const google::protobuf::Message*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>,std::pair<int,int> > >,std::less<std::pair<const google::protobuf::Message*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation> >,std::allocator<std::pair<const std::pair<const google::protobuf::Message*,google::protobuf::DescriptorPool::ErrorCollector::ErrorLocation>,std::pair<int,int> > > >::_Link_type)this->location_map_._M_t._M_impl._M_header._M_parent);
  this->location_map_._M_t._M_impl._M_header._M_parent = 0LL;
  this->location_map_._M_t._M_impl._M_header._M_left = &this->location_map_._M_t._M_impl._M_header;
  this->location_map_._M_t._M_impl._M_header._M_right = &this->location_map_._M_t._M_impl._M_header;
  this->location_map_._M_t._M_impl._M_node_count = 0LL;
};

// Line 2170: range 0000000000438EB0-0000000000438EEF
void __cdecl GLOBAL__sub_I__ZN6google8protobuf8compiler6ParserC2Ev()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
  google::protobuf::compiler::`anonymous namespace'::MakeTypeNameTable((std::__detail::_Map_base<std::string,std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type>,std::allocator<std::pair<const std::string,google::protobuf::FieldDescriptorProto_Type> >,std::__detail::_Select1st,std::equal_to<std::string >,google::protobuf::hash<std::string >,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true> *)&google::protobuf::compiler::`anonymous namespace'::kTypeNames);
  __cxa_atexit(
    (void (__fastcall *)(void *))google::protobuf::hash_map<std::string,google::protobuf::FieldDescriptorProto_Type,google::protobuf::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,google::protobuf::FieldDescriptorProto_Type>>>::~hash_map,
    (void *)&google::protobuf::compiler::`anonymous namespace'::kTypeNames,
    &_dso_handle);
};
