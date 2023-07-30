// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/map.h

// Line 152: range 000000000C8B91B0-000000000C8B91EF
void __fastcall google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::~Map(
        google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef> *const this)
{
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *elements; // rbp

  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::clear(this);
  if ( !this->arena_ )
  {
    elements = this->elements_;
    if ( elements )
    {
      google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::~InnerMap(this->elements_);
      operator delete(elements, 0x30uLL);
    }
  }
};

// Line 325: range 000000000C8B7FF0-000000000C8B8182
void __fastcall google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::~InnerMap(
        google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *const this)
{
  void **table; // rdi
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type num_buckets; // rsi
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type i; // r15
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type v5; // r13
  void **v6; // rdx
  google::protobuf::MapKey *v7; // rbp
  google::protobuf::MapKey *v8; // r12
  google::protobuf::MapKey *v9; // r12
  bool v10; // zf
  char *v11; // r14
  google::protobuf::MapKey::KeyValue v12; // rbp
  google::protobuf::MapKey *v13; // r13
  google::protobuf::Arena *arena; // rbp
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> >::const_iterator __position; // [rsp+8h] [rbp-40h]

  table = this->table_;
  if ( table )
  {
    num_buckets = this->num_buckets_;
    if ( num_buckets )
    {
      for ( i = 0LL; ; i = v5 )
      {
        v5 = i + 1;
        v6 = &table[i];
        v7 = (google::protobuf::MapKey *)*v6;
        if ( *v6 )
        {
          v8 = (google::protobuf::MapKey *)table[i ^ 1];
          if ( v7 == v8 )
          {
            table[i + 1] = 0LL;
            v11 = (char *)&v8[1];
            this->table_[i] = 0LL;
            v12.string_value_ = (std::string *)v8[2].val_;
            do
            {
              while ( 1 )
              {
                v13 = *(google::protobuf::MapKey **)(v12.int64_value_ + 32);
                __position._M_node = (std::_Rb_tree_const_iterator<google::protobuf::MapKey*>::_Base_ptr)v12.int64_value_;
                v12.int64_value_ = std::_Rb_tree_increment((const std::_Rb_tree_node_base *)v12.string_value_);
                std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_erase_aux(
                  (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *const)v8,
                  __position);
                google::protobuf::MapKey::~MapKey(v13);
                if ( !this->alloc_.arena_ )
                  break;
                if ( (char *)v12.string_value_ == v11 )
                  goto LABEL_19;
              }
              operator delete(v13, 0x20uLL);
            }
            while ( (char *)v12.string_value_ != v11 );
LABEL_19:
            arena = this->alloc_.arena_;
            v5 = i + 2;
            std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_erase(
              (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *const)v8,
              *(std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> >::_Link_type *)&v8[1].type_);
            if ( !arena )
              operator delete(v8, 0x38uLL);
          }
          else
          {
            *v6 = 0LL;
            do
            {
              while ( 1 )
              {
                v9 = v7;
                v7 = *(google::protobuf::MapKey **)&v7[1].type_;
                google::protobuf::MapKey::~MapKey(v9);
                if ( !this->alloc_.arena_ )
                  break;
                if ( !v7 )
                  goto LABEL_10;
              }
              operator delete(v9, 0x20uLL);
            }
            while ( v7 );
          }
LABEL_10:
          table = this->table_;
          num_buckets = this->num_buckets_;
        }
        if ( num_buckets <= v5 )
          break;
      }
    }
    v10 = this->alloc_.arena_ == 0LL;
    this->num_elements_ = 0LL;
    this->index_of_first_non_null_ = num_buckets;
    if ( v10 )
      operator delete(table, 8 * num_buckets);
  }
};

// Line 621: range 000000000C8B6A30-000000000C8B7433
std::pair<google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::iterator_base<const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::KeyValuePair>,long unsigned int> *__fastcall google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::FindHelper(
        std::pair<google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::iterator_base<const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::KeyValuePair>,long unsigned int> *retstr,
        const google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *const this,
        const google::protobuf::MapKey *k,
        google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::TreeIterator *it)
{
  int type; // eax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::MapKey::KeyValue v9; // r15
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type v10; // r15
  void **table; // rax
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *v12; // rbp
  int v13; // eax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::LogMessage_0 *v15; // rax
  google::protobuf::internal::LogMessage_0 *v16; // rax
  bool v18; // al
  size_t v19; // rdx
  google::protobuf::internal::LogMessage_0 *v20; // rax
  google::protobuf::internal::LogMessage_0 *v21; // rax
  google::protobuf::internal::LogMessage_0 *v22; // rax
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v23; // rbp
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> >::iterator v24; // rax
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *v25; // rax
  google::protobuf::internal::LogMessage_0 *v26; // rax
  google::protobuf::internal::LogMessage_0 *v27; // rax
  google::protobuf::internal::LogMessage_0 *v28; // rax
  google::protobuf::internal::LogMessage_0 *v29; // rax
  google::protobuf::internal::LogMessage_0 *v30; // rax
  google::protobuf::internal::LogMessage_0 *v31; // rax
  google::protobuf::internal::LogMessage_0 *v32; // rax
  google::protobuf::internal::LogMessage_0 *v33; // rax
  google::protobuf::internal::LogMessage_0 *v34; // rax
  __int64 v35; // rax
  google::protobuf::internal::LogMessage_0 *v36; // rax
  google::protobuf::internal::LogMessage_0 *v37; // rax
  google::protobuf::internal::LogMessage_0 *v38; // rax
  google::protobuf::internal::LogMessage_0 *v39; // rax
  google::protobuf::internal::LogMessage_0 *v40; // rax
  google::protobuf::internal::LogMessage_0 *v41; // rax
  google::protobuf::internal::LogMessage_0 *v42; // rax
  __int64 v43; // rax
  google::protobuf::internal::LogMessage_0 *v44; // rax
  google::protobuf::internal::LogMessage_0 *v45; // rax
  google::protobuf::internal::LogMessage_0 *v46; // rax
  google::protobuf::internal::LogMessage_0 *v47; // rax
  google::protobuf::internal::LogMessage_0 *v48; // rax
  google::protobuf::internal::LogMessage_0 *v49; // rax
  __int64 v50; // rax
  google::protobuf::internal::LogMessage_0 *v51; // rax
  google::protobuf::internal::LogMessage_0 *v52; // rax
  google::protobuf::internal::LogMessage_0 *v53; // rax
  google::protobuf::internal::LogMessage_0 *v54; // rax
  google::protobuf::internal::LogMessage_0 *v55; // rax
  google::protobuf::internal::LogMessage_0 *v56; // rax
  google::protobuf::internal::LogMessage_0 *v57; // rax
  google::protobuf::internal::LogMessage_0 *v58; // rax
  google::protobuf::internal::LogMessage_0 *v59; // rax
  google::protobuf::internal::LogMessage_0 *v60; // rax
  google::protobuf::internal::LogMessage_0 *v61; // rax
  google::protobuf::internal::LogMessage_0 *v62; // rax
  google::protobuf::internal::LogMessage_0 *v63; // rax
  google::protobuf::internal::LogMessage_0 *v64; // rax
  __int64 v65; // rax
  google::protobuf::internal::LogMessage_0 *v66; // rax
  std::string::pointer M_p; // rdx
  __int64 i; // rax
  google::protobuf::internal::LogMessage_0 *v69; // rax
  google::protobuf::internal::LogMessage_0 *v70; // rax
  google::protobuf::internal::LogMessage_0 *v71; // rax
  google::protobuf::internal::LogMessage_0 *v72; // rax
  google::protobuf::internal::LogMessage_0 *v73; // rax
  google::protobuf::internal::LogMessage_0 *v74; // rax
  google::protobuf::internal::LogMessage_0 *v75; // rax
  google::protobuf::internal::LogMessage_0 *v76; // rax
  google::protobuf::internal::LogMessage_0 *v77; // rax
  google::protobuf::internal::LogMessage_0 *v78; // rax
  google::protobuf::internal::LogMessage_0 *v79; // rax
  google::protobuf::internal::LogMessage_0 *v80; // rax
  google::protobuf::internal::LogMessage_0 *v81; // rax
  google::protobuf::internal::LogMessage_0 *v82; // rax
  google::protobuf::internal::LogMessage_0 *v83; // rax
  google::protobuf::internal::LogMessage_0 *v84; // [rsp+8h] [rbp-D0h]
  google::protobuf::internal::LogMessage_0 *v85; // [rsp+8h] [rbp-D0h]
  google::protobuf::internal::LogMessage_0 *v86; // [rsp+8h] [rbp-D0h]
  google::protobuf::internal::LogMessage_0 *v87; // [rsp+8h] [rbp-D0h]
  google::protobuf::internal::LogFinisher v88; // [rsp+1Fh] [rbp-B9h] BYREF
  google::protobuf::internal::LogMessage_0 v89; // [rsp+20h] [rbp-B8h] BYREF
  google::protobuf::internal::LogMessage_0 key[2]; // [rsp+60h] [rbp-78h] BYREF

  type = k->type_;
  if ( type )
  {
    switch ( type )
    {
      case 1:
        goto LABEL_31;
      case 2:
        goto LABEL_36;
      case 3:
        goto LABEL_40;
      case 4:
        goto LABEL_45;
      case 5:
      case 6:
      case 8:
      case 10:
        goto LABEL_3;
      case 7:
        goto LABEL_50;
      case 9:
        goto LABEL_55;
      default:
        goto LABEL_4;
    }
  }
  google::protobuf::internal::LogMessage::LogMessage(key, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 369);
  v26 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
  v27 = google::protobuf::internal::LogMessage::operator<<(v26, "MapKey::type MapKey is not initialized. ");
  v28 = google::protobuf::internal::LogMessage::operator<<(v27, "Call set methods to initialize MapKey.");
  google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v89, v28);
  google::protobuf::internal::LogMessage::~LogMessage(key);
  switch ( k->type_ )
  {
    case 1:
LABEL_31:
      if ( k->type_ != 1 )
      {
        google::protobuf::internal::LogMessage::LogMessage(&v89, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 413);
        v29 = google::protobuf::internal::LogMessage::operator<<(&v89, "Protocol Buffer map usage error:\n");
        v30 = google::protobuf::internal::LogMessage::operator<<(v29, "MapKey::GetInt32Value");
        v31 = google::protobuf::internal::LogMessage::operator<<(v30, " type does not match\n");
        v32 = google::protobuf::internal::LogMessage::operator<<(v31, "  Expected : ");
        v33 = google::protobuf::internal::LogMessage::operator<<(
                v32,
                google::protobuf::FieldDescriptor::kCppTypeToName[1]);
        v34 = google::protobuf::internal::LogMessage::operator<<(v33, "\n");
        v84 = google::protobuf::internal::LogMessage::operator<<(v34, "  Actual   : ");
        v35 = k->type_;
        if ( !(_DWORD)v35 )
        {
          google::protobuf::internal::LogMessage::LogMessage(
            key,
            LOGLEVEL_FATAL_0,
            "./google/protobuf/map_field.h",
            369);
          v81 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
          v82 = google::protobuf::internal::LogMessage::operator<<(v81, "MapKey::type MapKey is not initialized. ");
          v83 = google::protobuf::internal::LogMessage::operator<<(v82, "Call set methods to initialize MapKey.");
          google::protobuf::internal::LogFinisher::operator=(&v88, v83);
          google::protobuf::internal::LogMessage::~LogMessage(key);
          v35 = k->type_;
        }
        v36 = google::protobuf::internal::LogMessage::operator<<(
                v84,
                google::protobuf::FieldDescriptor::kCppTypeToName[v35]);
        google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)key, v36);
        google::protobuf::internal::LogMessage::~LogMessage(&v89);
      }
      v9.int64_value_ = k->val_.int32_value_;
      goto LABEL_5;
    case 2:
LABEL_36:
      if ( k->type_ == 2 )
        goto LABEL_49;
      google::protobuf::internal::LogMessage::LogMessage(&v89, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 403);
      v37 = google::protobuf::internal::LogMessage::operator<<(&v89, "Protocol Buffer map usage error:\n");
      v38 = google::protobuf::internal::LogMessage::operator<<(v37, "MapKey::GetInt64Value");
      v39 = google::protobuf::internal::LogMessage::operator<<(v38, " type does not match\n");
      v40 = google::protobuf::internal::LogMessage::operator<<(v39, "  Expected : ");
      v41 = google::protobuf::internal::LogMessage::operator<<(
              v40,
              google::protobuf::FieldDescriptor::kCppTypeToName[2]);
      v42 = google::protobuf::internal::LogMessage::operator<<(v41, "\n");
      v85 = google::protobuf::internal::LogMessage::operator<<(v42, "  Actual   : ");
      v43 = k->type_;
      if ( !(_DWORD)v43 )
      {
        google::protobuf::internal::LogMessage::LogMessage(key, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 369);
        v75 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
        v76 = google::protobuf::internal::LogMessage::operator<<(v75, "MapKey::type MapKey is not initialized. ");
        v77 = google::protobuf::internal::LogMessage::operator<<(v76, "Call set methods to initialize MapKey.");
        google::protobuf::internal::LogFinisher::operator=(&v88, v77);
        google::protobuf::internal::LogMessage::~LogMessage(key);
        v43 = k->type_;
      }
      goto LABEL_48;
    case 3:
LABEL_40:
      if ( k->type_ != 3 )
      {
        google::protobuf::internal::LogMessage::LogMessage(&v89, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 418);
        v44 = google::protobuf::internal::LogMessage::operator<<(&v89, "Protocol Buffer map usage error:\n");
        v45 = google::protobuf::internal::LogMessage::operator<<(v44, "MapKey::GetUInt32Value");
        v46 = google::protobuf::internal::LogMessage::operator<<(v45, " type does not match\n");
        v47 = google::protobuf::internal::LogMessage::operator<<(v46, "  Expected : ");
        v48 = google::protobuf::internal::LogMessage::operator<<(
                v47,
                google::protobuf::FieldDescriptor::kCppTypeToName[3]);
        v49 = google::protobuf::internal::LogMessage::operator<<(v48, "\n");
        v86 = google::protobuf::internal::LogMessage::operator<<(v49, "  Actual   : ");
        v50 = k->type_;
        if ( !(_DWORD)v50 )
        {
          google::protobuf::internal::LogMessage::LogMessage(
            key,
            LOGLEVEL_FATAL_0,
            "./google/protobuf/map_field.h",
            369);
          v78 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
          v79 = google::protobuf::internal::LogMessage::operator<<(v78, "MapKey::type MapKey is not initialized. ");
          v80 = google::protobuf::internal::LogMessage::operator<<(v79, "Call set methods to initialize MapKey.");
          google::protobuf::internal::LogFinisher::operator=(&v88, v80);
          google::protobuf::internal::LogMessage::~LogMessage(key);
          v50 = k->type_;
        }
        v51 = google::protobuf::internal::LogMessage::operator<<(
                v86,
                google::protobuf::FieldDescriptor::kCppTypeToName[v50]);
        google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)key, v51);
        google::protobuf::internal::LogMessage::~LogMessage(&v89);
      }
      v9.int64_value_ = k->val_.uint32_value_;
      goto LABEL_5;
    case 4:
LABEL_45:
      if ( k->type_ != 4 )
      {
        google::protobuf::internal::LogMessage::LogMessage(&v89, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 408);
        v52 = google::protobuf::internal::LogMessage::operator<<(&v89, "Protocol Buffer map usage error:\n");
        v53 = google::protobuf::internal::LogMessage::operator<<(v52, "MapKey::GetUInt64Value");
        v54 = google::protobuf::internal::LogMessage::operator<<(v53, " type does not match\n");
        v55 = google::protobuf::internal::LogMessage::operator<<(v54, "  Expected : ");
        v56 = google::protobuf::internal::LogMessage::operator<<(
                v55,
                google::protobuf::FieldDescriptor::kCppTypeToName[4]);
        v57 = google::protobuf::internal::LogMessage::operator<<(v56, "\n");
        v85 = google::protobuf::internal::LogMessage::operator<<(v57, "  Actual   : ");
        v43 = k->type_;
        if ( !(_DWORD)v43 )
        {
          google::protobuf::internal::LogMessage::LogMessage(
            key,
            LOGLEVEL_FATAL_0,
            "./google/protobuf/map_field.h",
            369);
          v72 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
          v73 = google::protobuf::internal::LogMessage::operator<<(v72, "MapKey::type MapKey is not initialized. ");
          v74 = google::protobuf::internal::LogMessage::operator<<(v73, "Call set methods to initialize MapKey.");
          google::protobuf::internal::LogFinisher::operator=(&v88, v74);
          google::protobuf::internal::LogMessage::~LogMessage(key);
          v43 = k->type_;
        }
LABEL_48:
        v58 = google::protobuf::internal::LogMessage::operator<<(
                v85,
                google::protobuf::FieldDescriptor::kCppTypeToName[v43]);
        google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)key, v58);
        google::protobuf::internal::LogMessage::~LogMessage(&v89);
      }
LABEL_49:
      v9.string_value_ = (std::string *)k->val_;
      goto LABEL_5;
    case 5:
    case 6:
    case 8:
    case 0xA:
LABEL_3:
      google::protobuf::internal::LogMessage::LogMessage(key, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 809);
      v7 = google::protobuf::internal::LogMessage::operator<<(key, "Unsupported");
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v89, v7);
      google::protobuf::internal::LogMessage::~LogMessage(key);
      goto LABEL_4;
    case 7:
LABEL_50:
      if ( k->type_ != 7 )
      {
        google::protobuf::internal::LogMessage::LogMessage(&v89, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 423);
        v59 = google::protobuf::internal::LogMessage::operator<<(&v89, "Protocol Buffer map usage error:\n");
        v60 = google::protobuf::internal::LogMessage::operator<<(v59, "MapKey::GetBoolValue");
        v61 = google::protobuf::internal::LogMessage::operator<<(v60, " type does not match\n");
        v62 = google::protobuf::internal::LogMessage::operator<<(v61, "  Expected : ");
        v63 = google::protobuf::internal::LogMessage::operator<<(
                v62,
                google::protobuf::FieldDescriptor::kCppTypeToName[7]);
        v64 = google::protobuf::internal::LogMessage::operator<<(v63, "\n");
        v87 = google::protobuf::internal::LogMessage::operator<<(v64, "  Actual   : ");
        v65 = k->type_;
        if ( !(_DWORD)v65 )
        {
          google::protobuf::internal::LogMessage::LogMessage(
            key,
            LOGLEVEL_FATAL_0,
            "./google/protobuf/map_field.h",
            369);
          v69 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
          v70 = google::protobuf::internal::LogMessage::operator<<(v69, "MapKey::type MapKey is not initialized. ");
          v71 = google::protobuf::internal::LogMessage::operator<<(v70, "Call set methods to initialize MapKey.");
          google::protobuf::internal::LogFinisher::operator=(&v88, v71);
          google::protobuf::internal::LogMessage::~LogMessage(key);
          v65 = k->type_;
        }
        v66 = google::protobuf::internal::LogMessage::operator<<(
                v87,
                google::protobuf::FieldDescriptor::kCppTypeToName[v65]);
        google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)key, v66);
        google::protobuf::internal::LogMessage::~LogMessage(&v89);
      }
      v9.int64_value_ = k->val_.bool_value_;
      goto LABEL_5;
    case 9:
LABEL_55:
      v9.int64_value_ = 0LL;
      M_p = k->val_.string_value_->_M_dataplus._M_p;
      for ( i = *M_p; (_BYTE)i; i = *M_p )
      {
        ++M_p;
        v9.int64_value_ = i + 5 * v9.int64_value_;
      }
      goto LABEL_5;
    default:
LABEL_4:
      google::protobuf::internal::LogMessage::LogMessage(key, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 824);
      v8 = google::protobuf::internal::LogMessage::operator<<(key, (const char *)&stru_1A17003B.lowercase_name_ + 3);
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v89, v8);
      v9.int64_value_ = 0LL;
      google::protobuf::internal::LogMessage::~LogMessage(key);
LABEL_5:
      v10 = (this->num_buckets_ - 1) & (this->seed_ + v9.int64_value_);
      table = this->table_;
      v12 = (google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node *)table[v10];
      if ( !v12 )
        goto LABEL_15;
      if ( v12 != table[v10 ^ 1] )
      {
        while ( 2 )
        {
          v13 = k->type_;
          if ( v12->kv.k_.type_ != v13 )
          {
            google::protobuf::internal::LogMessage::LogMessage(
              key,
              LOGLEVEL_FATAL_0,
              "./google/protobuf/map_field.h",
              465);
            v14 = google::protobuf::internal::LogMessage::operator<<(key, "Unsupported: type mismatch");
            google::protobuf::internal::LogFinisher::operator=(
              (google::protobuf::internal::LogFinisher *const)&v89,
              v14);
            google::protobuf::internal::LogMessage::~LogMessage(key);
            v13 = v12->kv.k_.type_;
          }
          if ( !v13 )
          {
            google::protobuf::internal::LogMessage::LogMessage(
              key,
              LOGLEVEL_FATAL_0,
              "./google/protobuf/map_field.h",
              369);
            v20 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
            v21 = google::protobuf::internal::LogMessage::operator<<(v20, "MapKey::type MapKey is not initialized. ");
            v22 = google::protobuf::internal::LogMessage::operator<<(v21, "Call set methods to initialize MapKey.");
            google::protobuf::internal::LogFinisher::operator=(
              (google::protobuf::internal::LogFinisher *const)&v89,
              v22);
            google::protobuf::internal::LogMessage::~LogMessage(key);
            v13 = v12->kv.k_.type_;
          }
          switch ( v13 )
          {
            case 1:
            case 3:
              v18 = v12->kv.k_.val_.int32_value_ == k->val_.int32_value_;
              goto LABEL_18;
            case 2:
            case 4:
              v18 = v12->kv.k_.val_.int64_value_ == k->val_.int64_value_;
              goto LABEL_18;
            case 5:
            case 6:
            case 8:
            case 10:
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                472);
              v15 = google::protobuf::internal::LogMessage::operator<<(key, "Unsupported");
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)&v89,
                v15);
              google::protobuf::internal::LogMessage::~LogMessage(key);
              goto LABEL_13;
            case 7:
              v18 = v12->kv.k_.val_.bool_value_ == k->val_.bool_value_;
LABEL_18:
              if ( v18 )
                goto LABEL_19;
              goto LABEL_14;
            case 9:
              v19 = *(_QWORD *)(v12->kv.k_.val_.int64_value_ + 8);
              if ( v19 != *(_QWORD *)(k->val_.int64_value_ + 8)
                || v19
                && memcmp(v12->kv.k_.val_.string_value_->_M_dataplus._M_p, k->val_.string_value_->_M_dataplus._M_p, v19) )
              {
                goto LABEL_14;
              }
LABEL_19:
              retstr->first.node_ = v12;
              retstr->first.m_ = this;
              retstr->first.bucket_index_ = v10;
              retstr->second = v10;
              return retstr;
            default:
LABEL_13:
              google::protobuf::internal::LogMessage::LogMessage(
                key,
                LOGLEVEL_FATAL_0,
                "./google/protobuf/map_field.h",
                487);
              v16 = google::protobuf::internal::LogMessage::operator<<(
                      key,
                      (const char *)&stru_1A17003B.lowercase_name_ + 3);
              google::protobuf::internal::LogFinisher::operator=(
                (google::protobuf::internal::LogFinisher *const)&v89,
                v16);
              google::protobuf::internal::LogMessage::~LogMessage(key);
LABEL_14:
              v12 = v12->next;
              if ( !v12 )
                goto LABEL_15;
              continue;
          }
        }
      }
      v10 &= ~1uLL;
      v23 = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *)table[v10];
      *(_QWORD *)&key[0].level_ = k;
      v24._M_node = std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::find(
                      v23,
                      (google::protobuf::MapKey *const *)key)._M_node;
      if ( (std::_Rb_tree_header *)v24._M_node == &v23->_M_impl.std::_Rb_tree_header )
      {
LABEL_15:
        retstr->first.node_ = 0LL;
        retstr->first.m_ = 0LL;
        retstr->first.bucket_index_ = 0LL;
        retstr->second = v10;
      }
      else
      {
        if ( it )
          it->_M_node = v24._M_node;
        v25 = *(google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Node **)&v24._M_node[1]._M_color;
        retstr->first.m_ = this;
        retstr->first.bucket_index_ = v10;
        retstr->first.node_ = v25;
        retstr->second = v10;
      }
      return retstr;
  }
};

// Line 745: range 000000000C8B9950-000000000C8BA3E4
void __fastcall google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::Resize(
        google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *const this,
        size_t new_num_buckets)
{
  size_t v2; // r12
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *v3; // rbp
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type num_buckets; // rax
  google::protobuf::Arena *arena; // rdi
  void *Aligned; // rcx
  void **v7; // rax
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type index_of_first_non_null; // rcx
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *M_parent; // r13
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v10; // r14
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v11; // r12
  int v12; // eax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  unsigned __int64 arena_low; // rbx
  void **v16; // rsi
  unsigned __int64 v17; // rbx
  __int64 v18; // r14
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > **v19; // rdx
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v20; // rax
  std::_Rb_tree_node<google::protobuf::MapKey*> *M_right; // r9
  unsigned __int64 v22; // rcx
  char *blocks; // rdx
  __int64 j; // rax
  google::protobuf::internal::LogMessage_0 *v25; // rax
  google::protobuf::internal::LogMessage_0 *v26; // rax
  google::protobuf::internal::LogMessage_0 *v27; // rax
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v28; // rdi
  std::_Rb_tree_node_base::_Base_ptr M_left; // r12
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v30; // rbx
  int v31; // eax
  google::protobuf::internal::LogMessage_0 *v32; // rax
  google::protobuf::internal::LogMessage_0 *v33; // rax
  unsigned __int64 v34; // rax
  void **v35; // rdi
  unsigned __int64 v36; // r15
  __int64 v37; // r13
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > **v38; // rsi
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v39; // rax
  std::_Rb_tree_node<google::protobuf::MapKey*> *v40; // r8
  unsigned __int64 v41; // rdx
  google::protobuf::Arena *v42; // rbx
  char *v43; // rcx
  __int64 k; // rdx
  google::protobuf::internal::LogMessage_0 *v45; // rax
  google::protobuf::internal::LogMessage_0 *v46; // rax
  google::protobuf::internal::LogMessage_0 *v47; // rax
  google::protobuf::Arena *v48; // rdi
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v49; // rax
  std::_Rb_tree_node<google::protobuf::MapKey*> *v50; // r9
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v51; // r15
  google::protobuf::Arena *v52; // rdx
  std::_Rb_tree_header *v53; // rcx
  std::string::pointer M_p; // rdx
  int line; // esi
  void **v56; // rax
  _QWORD *v57; // rcx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *v58; // rax
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v59; // rbp
  _QWORD *v60; // rbx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *v61; // r15
  _QWORD *v62; // rax
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *v63; // rax
  void **v64; // rax
  _QWORD *v65; // rcx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *v66; // rax
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v67; // rbp
  _QWORD *v68; // rbx
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *v69; // r15
  _QWORD *v70; // rax
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap *v71; // rax
  void **v72; // rax
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v73; // rdi
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v74; // rdi
  google::protobuf::Arena *v75; // rdi
  google::protobuf::Arena **v76; // rax
  std::_Rb_tree_node<google::protobuf::MapKey*> *v77; // r8
  google::protobuf::Arena **v78; // r9
  google::protobuf::Arena *v79; // rdx
  google::protobuf::Arena *v80; // rsi
  std::string::pointer v81; // rdx
  int v82; // edi
  void **v83; // rax
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v84; // r9
  _QWORD *v85; // r8
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v86; // r15
  _QWORD *v87; // rbx
  _QWORD *v88; // rax
  void **v89; // rax
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v90; // r15
  _QWORD *v91; // rbx
  _QWORD *v92; // rax
  void **v93; // rax
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v94; // rdi
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v95; // rax
  google::protobuf::Arena **v96; // rax
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type i; // [rsp+0h] [rbp-B8h]
  __int64 v98; // [rsp+8h] [rbp-B0h]
  __int64 v99; // [rsp+8h] [rbp-B0h]
  google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::size_type old_table_size; // [rsp+10h] [rbp-A8h]
  void **table; // [rsp+18h] [rbp-A0h]
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> >::_Link_type __xd; // [rsp+20h] [rbp-98h]
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> >::_Link_type __x; // [rsp+20h] [rbp-98h]
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> >::_Link_type __xa; // [rsp+20h] [rbp-98h]
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> >::_Link_type __xe; // [rsp+20h] [rbp-98h]
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> >::_Link_type __xf; // [rsp+20h] [rbp-98h]
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> >::_Link_type __xb; // [rsp+20h] [rbp-98h]
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> >::_Link_type __xc; // [rsp+20h] [rbp-98h]
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v109; // [rsp+28h] [rbp-90h]
  std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *v110; // [rsp+28h] [rbp-90h]
  google::protobuf::internal::LogFinisher v111; // [rsp+3Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v112; // [rsp+40h] [rbp-78h] BYREF

  v2 = 8 * new_num_buckets;
  v3 = this;
  table = this->table_;
  num_buckets = this->num_buckets_;
  this->num_buckets_ = new_num_buckets;
  arena = this->alloc_.arena_;
  old_table_size = num_buckets;
  if ( arena )
  {
    if ( arena->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        arena,
        (const std::type_info *)&`typeinfo for'unsigned char,
        8 * new_num_buckets);
    Aligned = google::protobuf::internal::ArenaImpl::AllocateAligned(&arena->impl_, v2);
  }
  else
  {
    Aligned = (void *)operator new(8 * new_num_buckets);
  }
  v7 = (void **)memset(Aligned, 0, v2);
  index_of_first_non_null = v3->index_of_first_non_null_;
  v3->table_ = v7;
  i = index_of_first_non_null;
  v3->index_of_first_non_null_ = v3->num_buckets_;
  if ( old_table_size > index_of_first_non_null )
  {
LABEL_6:
    while ( 1 )
    {
      M_parent = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *)table[i];
      if ( M_parent )
        break;
LABEL_19:
      if ( old_table_size <= ++i )
        goto LABEL_20;
    }
    v10 = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *)table[i ^ 1];
    if ( M_parent != v10 )
    {
      while ( 1 )
      {
        v11 = M_parent;
        M_parent = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *)M_parent->_M_impl._M_header._M_parent;
        v12 = *(_DWORD *)v11->_M_impl._M_key_compare.gap0;
        if ( !v12 )
        {
          google::protobuf::internal::LogMessage::LogMessage(
            &v112,
            LOGLEVEL_FATAL_0,
            "./google/protobuf/map_field.h",
            369);
          v25 = google::protobuf::internal::LogMessage::operator<<(&v112, "Protocol Buffer map usage error:\n");
          v26 = google::protobuf::internal::LogMessage::operator<<(v25, "MapKey::type MapKey is not initialized. ");
          v27 = google::protobuf::internal::LogMessage::operator<<(v26, "Call set methods to initialize MapKey.");
          google::protobuf::internal::LogFinisher::operator=(&v111, v27);
          google::protobuf::internal::LogMessage::~LogMessage(&v112);
          v12 = *(_DWORD *)v11->_M_impl._M_key_compare.gap0;
        }
        switch ( v12 )
        {
          case 1:
            arena_low = SLODWORD(v11->_M_impl.arena_);
            break;
          case 2:
          case 4:
            arena_low = (unsigned __int64)v11->_M_impl.arena_;
            break;
          case 3:
            arena_low = LODWORD(v11->_M_impl.arena_);
            break;
          case 5:
          case 6:
          case 8:
          case 10:
            google::protobuf::internal::LogMessage::LogMessage(
              &v112,
              LOGLEVEL_FATAL_0,
              "./google/protobuf/map_field.h",
              809);
            v13 = google::protobuf::internal::LogMessage::operator<<(&v112, "Unsupported");
            google::protobuf::internal::LogFinisher::operator=(&v111, v13);
            google::protobuf::internal::LogMessage::~LogMessage(&v112);
            goto LABEL_12;
          case 7:
            arena_low = LOBYTE(v11->_M_impl.arena_);
            break;
          case 9:
            arena_low = 0LL;
            blocks = (char *)v11->_M_impl.arena_->impl_.blocks_;
            for ( j = *blocks; (_BYTE)j; j = *blocks )
            {
              ++blocks;
              arena_low = j + 5 * arena_low;
            }
            break;
          default:
LABEL_12:
            google::protobuf::internal::LogMessage::LogMessage(
              &v112,
              LOGLEVEL_FATAL_0,
              "./google/protobuf/map_field.h",
              824);
            v14 = google::protobuf::internal::LogMessage::operator<<(
                    &v112,
                    (const char *)&stru_1A17003B.lowercase_name_ + 3);
            google::protobuf::internal::LogFinisher::operator=(&v111, v14);
            arena_low = 0LL;
            google::protobuf::internal::LogMessage::~LogMessage(&v112);
            break;
        }
        v16 = v3->table_;
        v17 = (v3->num_buckets_ - 1) & (v3->seed_ + arena_low);
        v18 = v17;
        v19 = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > **)&v16[v17];
        v20 = *v19;
        if ( !*v19 )
          break;
        M_right = (std::_Rb_tree_node<google::protobuf::MapKey*> *)*v19;
        v98 = v17 ^ 1;
        v22 = 0LL;
        if ( v20 == v16[v98] )
        {
          v11->_M_impl._M_header._M_parent = 0LL;
          v28 = *v19;
          *(_QWORD *)&v112.level_ = v11;
          std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_insert_unique<google::protobuf::MapKey *>(
            v28,
            (google::protobuf::MapKey **)&v112);
        }
        else
        {
          do
          {
            M_right = (std::_Rb_tree_node<google::protobuf::MapKey*> *)M_right->_M_right;
            ++v22;
          }
          while ( M_right );
          if ( v22 > 7 )
          {
            v48 = v3->alloc_.arena_;
            if ( v48 )
            {
              if ( v48->hooks_cookie_ )
              {
                google::protobuf::Arena::OnArenaAllocation(
                  v48,
                  (const std::type_info *)&`typeinfo for'unsigned char,
                  0x38uLL);
                M_right = 0LL;
              }
              __xd = M_right;
              v49 = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *)google::protobuf::internal::ArenaImpl::AllocateAligned(&v48->impl_, 0x38uLL);
              v50 = __xd;
              v51 = v49;
            }
            else
            {
              v95 = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *)operator new(0x38uLL);
              v50 = 0LL;
              v51 = v95;
            }
            v52 = v3->alloc_.arena_;
            v53 = &v51->_M_impl.std::_Rb_tree_header;
            v112.message_._M_dataplus._M_p = 0LL;
            v112.line_ = 0;
            *(_QWORD *)&v112.level_ = v52;
            v112.message_._M_string_length = (std::string::size_type)&v112.line_;
            v112.message_._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)(unsigned __int64)&v112.line_;
            v51->_M_impl.arena_ = v52;
            M_p = v112.message_._M_dataplus._M_p;
            if ( v112.message_._M_dataplus._M_p )
            {
              line = v112.line_;
              v51->_M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)v112.message_._M_dataplus._M_p;
              v51->_M_impl._M_header._M_color = line;
              v51->_M_impl._M_header._M_left = (std::_Rb_tree_node_base::_Base_ptr)v112.message_._M_string_length;
              v51->_M_impl._M_header._M_right = (std::_Rb_tree_node_base::_Base_ptr)v112.message_._anon_0._M_allocated_capacity;
              *((_QWORD *)M_p + 1) = v53;
              v51->_M_impl._M_node_count = *(&v112.message_._anon_0._M_allocated_capacity + 1);
              v112.message_._M_dataplus._M_p = 0LL;
              v112.message_._M_string_length = (std::string::size_type)&v112.line_;
              v112.message_._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)(unsigned __int64)&v112.line_;
            }
            else
            {
              v51->_M_impl._M_header._M_parent = 0LL;
              v51->_M_impl._M_header._M_left = &v53->_M_header;
              v51->_M_impl._M_header._M_right = &v53->_M_header;
              v50 = (std::_Rb_tree_node<google::protobuf::MapKey*> *)v112.message_._M_dataplus._M_p;
              v51->_M_impl._M_header._M_color = _S_red;
              v51->_M_impl._M_node_count = 0LL;
            }
            std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_erase(
              (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *const)&v112,
              v50);
            v56 = v3->table_;
            v57 = v56[v17];
            if ( v57 )
            {
              v58 = v3;
              __x = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> >::_Link_type)v17;
              v59 = v51;
              v60 = v57;
              v61 = v58;
              do
              {
                *(_QWORD *)&v112.level_ = v60;
                std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_insert_unique<google::protobuf::MapKey *>(
                  v59,
                  (google::protobuf::MapKey **)&v112);
                v62 = v60;
                v60 = (_QWORD *)v60[3];
                v62[3] = 0LL;
              }
              while ( v60 );
              v63 = v61;
              v17 = (unsigned __int64)__x;
              v51 = v59;
              v3 = v63;
              v56 = v63->table_;
            }
            v64 = &v56[v98];
            v65 = *v64;
            if ( *v64 )
            {
              v66 = v3;
              __xa = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> >::_Link_type)v17;
              v67 = v51;
              v68 = v65;
              v69 = v66;
              do
              {
                *(_QWORD *)&v112.level_ = v68;
                std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_insert_unique<google::protobuf::MapKey *>(
                  v67,
                  (google::protobuf::MapKey **)&v112);
                v70 = v68;
                v68 = (_QWORD *)v68[3];
                v70[3] = 0LL;
              }
              while ( v68 );
              v71 = v69;
              v17 = (unsigned __int64)__xa;
              v51 = v67;
              v3 = v71;
              v64 = &v71->table_[v98];
            }
            *v64 = v51;
            v17 &= ~1uLL;
            v3->table_[v18] = v51;
            v72 = v3->table_;
            v11->_M_impl._M_header._M_parent = 0LL;
            v73 = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *)v72[v18];
            *(_QWORD *)&v112.level_ = v11;
            std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_insert_unique<google::protobuf::MapKey *>(
              v73,
              (google::protobuf::MapKey **)&v112);
            goto LABEL_30;
          }
          v11->_M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)v20;
          *v19 = v11;
        }
LABEL_18:
        if ( !M_parent )
          goto LABEL_19;
      }
      v11->_M_impl._M_header._M_parent = 0LL;
      *v19 = v11;
LABEL_30:
      if ( v3->index_of_first_non_null_ <= v17 )
        v17 = v3->index_of_first_non_null_;
      v3->index_of_first_non_null_ = v17;
      goto LABEL_18;
    }
    ++i;
    M_left = v10->_M_impl._M_header._M_left;
    while ( 1 )
    {
      v30 = *(std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > **)&M_left[1]._M_color;
      v31 = *(_DWORD *)v30->_M_impl._M_key_compare.gap0;
      if ( !v31 )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          &v112,
          LOGLEVEL_FATAL_0,
          "./google/protobuf/map_field.h",
          369);
        v45 = google::protobuf::internal::LogMessage::operator<<(&v112, "Protocol Buffer map usage error:\n");
        v46 = google::protobuf::internal::LogMessage::operator<<(v45, "MapKey::type MapKey is not initialized. ");
        v47 = google::protobuf::internal::LogMessage::operator<<(v46, "Call set methods to initialize MapKey.");
        google::protobuf::internal::LogFinisher::operator=(&v111, v47);
        google::protobuf::internal::LogMessage::~LogMessage(&v112);
        v31 = *(_DWORD *)v30->_M_impl._M_key_compare.gap0;
      }
      switch ( v31 )
      {
        case 1:
          v34 = SLODWORD(v30->_M_impl.arena_);
          break;
        case 2:
        case 4:
          v34 = (unsigned __int64)v30->_M_impl.arena_;
          break;
        case 3:
          v34 = LODWORD(v30->_M_impl.arena_);
          break;
        case 5:
        case 6:
        case 8:
        case 10:
          google::protobuf::internal::LogMessage::LogMessage(
            &v112,
            LOGLEVEL_FATAL_0,
            "./google/protobuf/map_field.h",
            809);
          v32 = google::protobuf::internal::LogMessage::operator<<(&v112, "Unsupported");
          google::protobuf::internal::LogFinisher::operator=(&v111, v32);
          google::protobuf::internal::LogMessage::~LogMessage(&v112);
          goto LABEL_39;
        case 7:
          v34 = LOBYTE(v30->_M_impl.arena_);
          break;
        case 9:
          v43 = (char *)v30->_M_impl.arena_->impl_.blocks_;
          v34 = 0LL;
          for ( k = *v43; (_BYTE)k; k = *v43 )
          {
            ++v43;
            v34 = k + 5 * v34;
          }
          break;
        default:
LABEL_39:
          google::protobuf::internal::LogMessage::LogMessage(
            &v112,
            LOGLEVEL_FATAL_0,
            "./google/protobuf/map_field.h",
            824);
          v33 = google::protobuf::internal::LogMessage::operator<<(
                  &v112,
                  (const char *)&stru_1A17003B.lowercase_name_ + 3);
          google::protobuf::internal::LogFinisher::operator=(&v111, v33);
          google::protobuf::internal::LogMessage::~LogMessage(&v112);
          v34 = 0LL;
          break;
      }
      v35 = v3->table_;
      v36 = (v3->num_buckets_ - 1) & (v3->seed_ + v34);
      v37 = v36;
      v38 = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > **)&v35[v36];
      v39 = *v38;
      if ( !*v38 )
        break;
      v40 = (std::_Rb_tree_node<google::protobuf::MapKey*> *)*v38;
      v41 = 0LL;
      v99 = v36 ^ 1;
      if ( v39 == v35[v99] )
      {
        v30->_M_impl._M_header._M_parent = 0LL;
        v74 = *v38;
        *(_QWORD *)&v112.level_ = v30;
        std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_insert_unique<google::protobuf::MapKey *>(
          v74,
          (google::protobuf::MapKey **)&v112);
      }
      else
      {
        do
        {
          v40 = (std::_Rb_tree_node<google::protobuf::MapKey*> *)v40->_M_right;
          ++v41;
        }
        while ( v40 );
        if ( v41 > 7 )
        {
          v75 = v3->alloc_.arena_;
          if ( v75 )
          {
            if ( v75->hooks_cookie_ )
            {
              google::protobuf::Arena::OnArenaAllocation(
                v75,
                (const std::type_info *)&`typeinfo for'unsigned char,
                0x38uLL);
              v40 = 0LL;
            }
            __xe = v40;
            v76 = (google::protobuf::Arena **)google::protobuf::internal::ArenaImpl::AllocateAligned(
                                                &v75->impl_,
                                                0x38uLL);
            v77 = __xe;
            v78 = v76;
          }
          else
          {
            v96 = (google::protobuf::Arena **)operator new(0x38uLL);
            v77 = 0LL;
            v78 = v96;
          }
          v79 = v3->alloc_.arena_;
          v80 = (google::protobuf::Arena *)(v78 + 2);
          v112.message_._M_dataplus._M_p = 0LL;
          v112.line_ = 0;
          *(_QWORD *)&v112.level_ = v79;
          v112.message_._M_string_length = (std::string::size_type)&v112.line_;
          v112.message_._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)(unsigned __int64)&v112.line_;
          *v78 = v79;
          v81 = v112.message_._M_dataplus._M_p;
          if ( v112.message_._M_dataplus._M_p )
          {
            v82 = v112.line_;
            v78[3] = (google::protobuf::Arena *)v112.message_._M_dataplus._M_p;
            *((_DWORD *)v78 + 4) = v82;
            v78[4] = (google::protobuf::Arena *)v112.message_._M_string_length;
            v78[5] = (google::protobuf::Arena *)v112.message_._anon_0._M_allocated_capacity;
            *((_QWORD *)v81 + 1) = v80;
            v78[6] = (google::protobuf::Arena *)*(&v112.message_._anon_0._M_allocated_capacity + 1);
            v112.message_._M_dataplus._M_p = 0LL;
            v112.message_._M_string_length = (std::string::size_type)&v112.line_;
            v112.message_._anon_0 = (std::string::$CFBEC286C7F52157F7E59FC354047095)(unsigned __int64)&v112.line_;
          }
          else
          {
            v78[3] = 0LL;
            v78[4] = v80;
            v78[5] = v80;
            v77 = (std::_Rb_tree_node<google::protobuf::MapKey*> *)v112.message_._M_dataplus._M_p;
            *((_DWORD *)v78 + 4) = 0;
            v78[6] = 0LL;
          }
          __xf = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> >::_Link_type)v78;
          std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_erase(
            (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *const)&v112,
            v77);
          v83 = v3->table_;
          v84 = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *)__xf;
          v85 = v83[v36];
          if ( v85 )
          {
            __xb = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> >::_Link_type)v36;
            v86 = v84;
            v109 = v30;
            v87 = v85;
            do
            {
              *(_QWORD *)&v112.level_ = v87;
              std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_insert_unique<google::protobuf::MapKey *>(
                v86,
                (google::protobuf::MapKey **)&v112);
              v88 = v87;
              v87 = (_QWORD *)v87[3];
              v88[3] = 0LL;
            }
            while ( v87 );
            v84 = v86;
            v30 = v109;
            v36 = (unsigned __int64)__xb;
            v83 = v3->table_;
          }
          v89 = &v83[v99];
          if ( *v89 )
          {
            __xc = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> >::_Link_type)v36;
            v90 = v84;
            v110 = v30;
            v91 = *v89;
            do
            {
              *(_QWORD *)&v112.level_ = v91;
              std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_insert_unique<google::protobuf::MapKey *>(
                v90,
                (google::protobuf::MapKey **)&v112);
              v92 = v91;
              v91 = (_QWORD *)v91[3];
              v92[3] = 0LL;
            }
            while ( v91 );
            v84 = v90;
            v30 = v110;
            v36 = (unsigned __int64)__xc;
            v89 = &v3->table_[v99];
          }
          *v89 = v84;
          v36 &= ~1uLL;
          v3->table_[v37] = v84;
          v93 = v3->table_;
          v30->_M_impl._M_header._M_parent = 0LL;
          v94 = (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> > *)v93[v37];
          *(_QWORD *)&v112.level_ = v30;
          std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_insert_unique<google::protobuf::MapKey *>(
            v94,
            (google::protobuf::MapKey **)&v112);
          goto LABEL_57;
        }
        v30->_M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)v39;
        *v38 = v30;
      }
LABEL_45:
      M_left = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(M_left);
      if ( M_left == (std::_Rb_tree_node_base::_Base_ptr)&v10->_M_impl.std::_Rb_tree_header )
      {
        v42 = v3->alloc_.arena_;
        std::_Rb_tree<google::protobuf::MapKey *,google::protobuf::MapKey *,std::_Identity<google::protobuf::MapKey *>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey *>>::_M_erase(
          v10,
          (std::_Rb_tree<google::protobuf::MapKey*,google::protobuf::MapKey*,std::_Identity<google::protobuf::MapKey*>,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::InnerMap::KeyCompare,google::protobuf::Map<google::protobuf::MapKey,google::protobuf::MapValueRef>::MapAllocator<google::protobuf::MapKey*> >::_Link_type)v10->_M_impl._M_header._M_parent);
        if ( v42 )
          goto LABEL_19;
        operator delete(v10, 0x38uLL);
        if ( old_table_size <= ++i )
          goto LABEL_20;
        goto LABEL_6;
      }
    }
    v30->_M_impl._M_header._M_parent = 0LL;
    *v38 = v30;
LABEL_57:
    if ( v3->index_of_first_non_null_ <= v36 )
      v36 = v3->index_of_first_non_null_;
    v3->index_of_first_non_null_ = v36;
    goto LABEL_45;
  }
LABEL_20:
  if ( !v3->alloc_.arena_ )
    operator delete(table, 8 * old_table_size);
};

// Line 950: range 000000000C72AC50-000000000C72AC58
void __noreturn google::protobuf::internal::DynamicMapField::SpaceUsedExcludingSelfNoLock()
{
  BUG();
};

// Line 961: range 000000000C8B60A0-000000000C8B60AF
bool __fastcall google::protobuf::internal::TypeDefinedMapFieldBase<google::protobuf::MapKey,google::protobuf::MapValueRef>::EqualIterator(
        const google::protobuf::internal::TypeDefinedMapFieldBase<google::protobuf::MapKey,google::protobuf::MapValueRef> *const this,
        const google::protobuf::MapIterator *a,
        const google::protobuf::MapIterator *b)
{
  return *(_QWORD *)b->iter_ == *(_QWORD *)a->iter_;
};
