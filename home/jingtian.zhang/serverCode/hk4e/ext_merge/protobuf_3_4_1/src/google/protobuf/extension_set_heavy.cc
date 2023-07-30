// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/extension_set_heavy.cc

// Line 58: range 000000000C946580-000000000C946595
void __fastcall google::protobuf::internal::MessageSetFieldSkipper::~MessageSetFieldSkipper(
        google::protobuf::internal::MessageSetFieldSkipper *const this)
{
  ;
};

// Line 64: range 000000000C943BC0-000000000C943C9D
bool __fastcall google::protobuf::internal::MessageSetFieldSkipper::SkipMessageSetField(
        google::protobuf::internal::MessageSetFieldSkipper *const this,
        google::protobuf::io::CodedInputStream *input,
        int field_number)
{
  const google::protobuf::uint8 *buffer; // rax
  const google::protobuf::uint8 *buffer_end; // rdx
  google::protobuf::int64 Varint32Fallback; // r12
  bool result; // al
  google::protobuf::UnknownFieldSet *unknown_fields; // rdi
  std::string *v10; // rax
  const google::protobuf::uint8 *v11; // rax
  __int64 v12; // rsi
  int v13; // edx

  buffer = input->buffer_;
  buffer_end = input->buffer_end_;
  if ( input->buffer_ >= buffer_end )
  {
    LODWORD(Varint32Fallback) = 0;
  }
  else
  {
    LODWORD(Varint32Fallback) = *buffer;
    if ( *(char *)buffer >= 0 )
    {
      unknown_fields = this->unknown_fields_;
      v11 = buffer + 1;
      input->buffer_ = v11;
      if ( unknown_fields )
        goto LABEL_6;
      v12 = (int)Varint32Fallback;
      goto LABEL_9;
    }
  }
  Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(input, Varint32Fallback);
  result = 0;
  if ( Varint32Fallback < 0 )
    return result;
  unknown_fields = this->unknown_fields_;
  if ( unknown_fields )
  {
LABEL_6:
    v10 = google::protobuf::UnknownFieldSet::AddLengthDelimited[abi:cxx11](unknown_fields, field_number);
    return google::protobuf::io::CodedInputStream::ReadString(input, v10, Varint32Fallback);
  }
  v12 = (int)Varint32Fallback;
  if ( (int)Varint32Fallback >= 0 )
  {
    v11 = input->buffer_;
    buffer_end = input->buffer_end_;
LABEL_9:
    v13 = (_DWORD)buffer_end - (_DWORD)v11;
    if ( (int)v12 > v13 )
    {
      return google::protobuf::io::CodedInputStream::SkipFallback(input, v12, v13);
    }
    else
    {
      input->buffer_ = &v11[v12];
      return 1;
    }
  }
  return result;
};

// Line 85: range 000000000C9465B0-000000000C9465C9
void __fastcall google::protobuf::internal::DescriptorPoolExtensionFinder::~DescriptorPoolExtensionFinder(
        google::protobuf::internal::DescriptorPoolExtensionFinder *const this)
{
  this->_vptr_ExtensionFinder = (int (**)(...))off_1A181648;
  google::protobuf::internal::ExtensionFinder::~ExtensionFinder(this);
  operator delete(this, 0x20uLL);
};

// Line 85: range 000000000C9465A0-000000000C9465A7
void __fastcall google::protobuf::internal::DescriptorPoolExtensionFinder::~DescriptorPoolExtensionFinder(
        google::protobuf::internal::DescriptorPoolExtensionFinder *const this)
{
  this->_vptr_ExtensionFinder = (int (**)(...))off_1A181648;
  google::protobuf::internal::ExtensionFinder::~ExtensionFinder(this);
};

// Line 98: range 000000000C946010-000000000C94622B
void __fastcall google::protobuf::internal::ExtensionSet::AppendToList(
        const google::protobuf::internal::ExtensionSet *const this,
        const google::protobuf::Descriptor *containing_type,
        const google::protobuf::DescriptorPool *pool,
        std::vector<const google::protobuf::FieldDescriptor*> *output)
{
  std::_Rb_tree_header *v4; // rbp
  std::_Rb_tree_node_base::_Base_ptr M_left; // r15
  bool v9; // al
  const google::protobuf::FieldDescriptor *M_right; // rax
  std::_Vector_base<const google::protobuf::FieldDescriptor*>::pointer v11; // rdx
  google::protobuf::FieldDescriptor *ExtensionByNumber; // rax
  const google::protobuf::FieldDescriptor **v13; // rcx
  std::_Vector_base<const google::protobuf::FieldDescriptor*>::pointer M_finish; // rsi
  std::_Vector_base<const google::protobuf::FieldDescriptor*>::pointer M_start; // r10
  signed __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rsi
  const google::protobuf::FieldDescriptor **v20; // rax
  const google::protobuf::FieldDescriptor **v21; // rcx
  const google::protobuf::FieldDescriptor **v22; // r9
  const google::protobuf::FieldDescriptor **v23; // r11
  const google::protobuf::FieldDescriptor **v24; // rax
  unsigned __int64 v25; // [rsp+8h] [rbp-60h]
  const google::protobuf::FieldDescriptor **v26; // [rsp+8h] [rbp-60h]
  const google::protobuf::FieldDescriptor **v27; // [rsp+8h] [rbp-60h]
  std::_Vector_base<const google::protobuf::FieldDescriptor*>::pointer src; // [rsp+10h] [rbp-58h]
  const google::protobuf::FieldDescriptor **srca; // [rsp+10h] [rbp-58h]
  const google::protobuf::FieldDescriptor **srcb; // [rsp+10h] [rbp-58h]
  __int64 v31; // [rsp+18h] [rbp-50h]
  const google::protobuf::FieldDescriptor **v32; // [rsp+18h] [rbp-50h]
  const google::protobuf::FieldDescriptor **v33; // [rsp+18h] [rbp-50h]
  google::protobuf::FieldDescriptor *v34; // [rsp+28h] [rbp-40h] BYREF

  v4 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  M_left = this->extensions_._M_t._M_impl._M_header._M_left;
  if ( M_left != (std::_Rb_tree_node_base::_Base_ptr)&this->extensions_._M_t._M_impl.std::_Rb_tree_header )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( BYTE1(M_left[1]._M_left) )
          v9 = (int)google::protobuf::internal::ExtensionSet::Extension::GetSize((google::protobuf::internal::ExtensionSet::Extension *)&M_left[1]._M_parent) > 0;
        else
          v9 = !(BYTE2(M_left[1]._M_left) & 1);
        if ( !v9 )
          goto LABEL_8;
        M_right = (const google::protobuf::FieldDescriptor *)M_left[1]._M_right;
        if ( M_right )
          break;
        ExtensionByNumber = (google::protobuf::FieldDescriptor *)google::protobuf::DescriptorPool::FindExtensionByNumber(
                                                                   (google::protobuf::DescriptorPool *)pool,
                                                                   containing_type,
                                                                   M_left[1]._M_color);
        M_finish = output->_M_impl._M_finish;
        v34 = ExtensionByNumber;
        if ( M_finish == output->_M_impl._M_end_of_storage )
        {
          std::vector<google::protobuf::FieldDescriptor const*>::_M_realloc_insert<google::protobuf::FieldDescriptor const*>(
            output,
            (std::vector<const google::protobuf::FieldDescriptor*>::iterator)M_finish,
            (const google::protobuf::FieldDescriptor **)&v34,
            v13);
          goto LABEL_8;
        }
        *M_finish = ExtensionByNumber;
        output->_M_impl._M_finish = M_finish + 1;
        M_left = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(M_left);
        if ( M_left == (std::_Rb_tree_node_base::_Base_ptr)v4 )
          return;
      }
      v11 = output->_M_impl._M_finish;
      if ( v11 == output->_M_impl._M_end_of_storage )
        break;
      *v11 = M_right;
      output->_M_impl._M_finish = v11 + 1;
LABEL_8:
      M_left = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(M_left);
      if ( M_left == (std::_Rb_tree_node_base::_Base_ptr)v4 )
        return;
    }
    M_start = output->_M_impl._M_start;
    v16 = (char *)v11 - (char *)output->_M_impl._M_start;
    v17 = v16 >> 3;
    if ( v16 >> 3 == 0xFFFFFFFFFFFFFFFLL )
      std::__throw_length_error("vector::_M_realloc_insert");
    if ( v17 )
    {
      v18 = 0x7FFFFFFFFFFFFFF8LL;
      v19 = 2 * v17;
      if ( v17 <= 2 * v17 )
      {
        if ( !v19 )
        {
          v21 = 0LL;
          v22 = 0LL;
          *(_QWORD *)v16 = M_right;
          v23 = (const google::protobuf::FieldDescriptor **)(v16 + 8);
          if ( v16 <= 0 )
          {
LABEL_18:
            if ( !M_start )
            {
LABEL_19:
              output->_M_impl._M_start = v21;
              output->_M_impl._M_finish = v23;
              output->_M_impl._M_end_of_storage = v22;
              goto LABEL_8;
            }
LABEL_23:
            v33 = v23;
            srcb = v21;
            v27 = v22;
            operator delete(M_start);
            v23 = v33;
            v21 = srcb;
            v22 = v27;
            goto LABEL_19;
          }
LABEL_22:
          v32 = v23;
          srca = v22;
          v26 = M_start;
          v24 = (const google::protobuf::FieldDescriptor **)memmove(v21, M_start, v16);
          M_start = v26;
          v22 = srca;
          v23 = v32;
          v21 = v24;
          goto LABEL_23;
        }
        if ( v19 > 0xFFFFFFFFFFFFFFFLL )
          v19 = 0xFFFFFFFFFFFFFFFLL;
        v18 = 8 * v19;
      }
    }
    else
    {
      v18 = 8LL;
    }
    v31 = v16;
    src = output->_M_impl._M_start;
    v25 = v18;
    v20 = (const google::protobuf::FieldDescriptor **)operator new(v18);
    v16 = v31;
    v21 = v20;
    M_start = src;
    v22 = (const google::protobuf::FieldDescriptor **)((char *)v20 + v25);
    v23 = (const google::protobuf::FieldDescriptor **)((char *)v20 + v31 + 8);
    *(const google::protobuf::FieldDescriptor **)((char *)v20 + v31) = (const google::protobuf::FieldDescriptor *)M_left[1]._M_right;
    if ( v31 <= 0 )
      goto LABEL_18;
    goto LABEL_22;
  }
};

// Line 147: range 000000000C943CB0-000000000C943D45
const google::protobuf::MessageLite *__fastcall google::protobuf::internal::ExtensionSet::GetMessage(
        const google::protobuf::internal::ExtensionSet *const this,
        int number,
        const google::protobuf::Descriptor *message_type,
        google::protobuf::MessageFactory *factory)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v5; // r8
  const google::protobuf::MessageLite *v6; // r12
  char v8; // al
  __int64 (__fastcall *v9)(const google::protobuf::MessageLite *, __int64); // rbx
  __int64 v10; // rax

  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( !M_parent )
    return (const google::protobuf::MessageLite *)(*((__int64 (__fastcall **)(google::protobuf::MessageFactory *, const google::protobuf::Descriptor *))factory->_vptr_MessageFactory
                                                   + 2))(
                                                    factory,
                                                    message_type);
  v5 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
  do
  {
    while ( M_parent[1]._M_color >= number )
    {
      v5 = (std::_Rb_tree_header *)M_parent;
      M_parent = M_parent->_M_left;
      if ( !M_parent )
        goto LABEL_6;
    }
    M_parent = M_parent->_M_right;
  }
  while ( M_parent );
LABEL_6:
  if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header == v5 )
    return (const google::protobuf::MessageLite *)(*((__int64 (__fastcall **)(google::protobuf::MessageFactory *, const google::protobuf::Descriptor *))factory->_vptr_MessageFactory
                                                   + 2))(
                                                    factory,
                                                    message_type);
  if ( SLODWORD(v5->_M_node_count) > number )
    return (const google::protobuf::MessageLite *)(*((__int64 (__fastcall **)(google::protobuf::MessageFactory *, const google::protobuf::Descriptor *))factory->_vptr_MessageFactory
                                                   + 2))(
                                                    factory,
                                                    message_type);
  v8 = BYTE2(v5[1]._M_header._M_parent);
  if ( (v8 & 1) != 0 )
    return (const google::protobuf::MessageLite *)(*((__int64 (__fastcall **)(google::protobuf::MessageFactory *, const google::protobuf::Descriptor *))factory->_vptr_MessageFactory
                                                   + 2))(
                                                    factory,
                                                    message_type);
  v6 = *(const google::protobuf::MessageLite **)&v5[1]._M_header._M_color;
  if ( (v8 & 0x10) == 0 )
    return v6;
  v9 = (__int64 (__fastcall *)(const google::protobuf::MessageLite *, __int64))*((_QWORD *)v6->_vptr_MessageLite + 3);
  v10 = (*((__int64 (__fastcall **)(google::protobuf::MessageFactory *, const google::protobuf::Descriptor *))factory->_vptr_MessageFactory
         + 2))(
          factory,
          message_type);
  return (const google::protobuf::MessageLite *)v9(v6, v10);
};

// Line 164: range 000000000C943D50-000000000C943E49
google::protobuf::MessageLite *__fastcall google::protobuf::internal::ExtensionSet::MutableMessage(
        google::protobuf::internal::ExtensionSet *const this,
        const google::protobuf::FieldDescriptor *descriptor,
        google::protobuf::MessageFactory *factory)
{
  google::protobuf::MessageLite *v4; // r13
  char v5; // al
  __int64 (__fastcall *v7)(google::protobuf::MessageLite *, __int64); // rbx
  __int64 (__fastcall *v8)(google::protobuf::MessageFactory *, const google::protobuf::Descriptor *); // r14
  const google::protobuf::Descriptor *v9; // rax
  __int64 v10; // rax
  unsigned __int8 v11; // r8
  google::protobuf::internal::ExtensionSet::Extension *v12; // rax
  __int64 (__fastcall *v13)(google::protobuf::MessageFactory *, const google::protobuf::Descriptor *); // rbx
  const google::protobuf::Descriptor *v14; // rax
  _QWORD *v15; // rax
  google::protobuf::internal::ExtensionSet::Extension *v16; // rbp
  google::protobuf::Arena *arena; // rsi
  _QWORD *v18; // rdi
  __int64 v19; // rax
  google::protobuf::MessageLite *int64_value; // r13
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+8h] [rbp-30h] BYREF

  if ( google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, descriptor->number_, descriptor, &extension) )
  {
    v11 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)descriptor);
    v12 = extension;
    *(_WORD *)&extension->type = v11;
    v12->is_packed = 0;
    v13 = (__int64 (__fastcall *)(google::protobuf::MessageFactory *, const google::protobuf::Descriptor *))*((_QWORD *)factory->_vptr_MessageFactory + 2);
    v14 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)descriptor);
    v15 = (_QWORD *)v13(factory, v14);
    v16 = extension;
    arena = this->arena_;
    v18 = v15;
    v19 = *v15;
    *((_BYTE *)extension + 10) &= 0xFu;
    v16->_anon_0.int64_value = (*(__int64 (__fastcall **)(_QWORD *, google::protobuf::Arena *))(v19 + 32))(v18, arena);
    int64_value = (google::protobuf::MessageLite *)extension->_anon_0.int64_value;
    *((_BYTE *)extension + 10) &= 0xF0u;
    return int64_value;
  }
  else
  {
    v4 = (google::protobuf::MessageLite *)extension->_anon_0.int64_value;
    v5 = *((_BYTE *)extension + 10) & 0xF0;
    *((_BYTE *)extension + 10) = v5;
    if ( (v5 & 0x10) != 0 )
    {
      v7 = (__int64 (__fastcall *)(google::protobuf::MessageLite *, __int64))*((_QWORD *)v4->_vptr_MessageLite + 4);
      v8 = (__int64 (__fastcall *)(google::protobuf::MessageFactory *, const google::protobuf::Descriptor *))*((_QWORD *)factory->_vptr_MessageFactory + 2);
      v9 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)descriptor);
      v10 = v8(factory, v9);
      return (google::protobuf::MessageLite *)v7(v4, v10);
    }
    else
    {
      return v4;
    }
  }
};

// Line 190: range 000000000C946370-000000000C94646F
google::protobuf::MessageLite *__fastcall google::protobuf::internal::ExtensionSet::ReleaseMessage(
        google::protobuf::internal::ExtensionSet *const this,
        const google::protobuf::FieldDescriptor *descriptor,
        google::protobuf::MessageFactory *factory)
{
  google::protobuf::MessageLite *M_parent; // r12
  int number; // eax
  std::_Rb_tree_header *v7; // rbx
  __int64 (__fastcall *v9)(google::protobuf::MessageLite *, __int64); // r15
  const google::protobuf::Descriptor *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(google::protobuf::MessageFactory *, const google::protobuf::Descriptor *); // [rsp+8h] [rbp-50h]
  int __x[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  M_parent = (google::protobuf::MessageLite *)this->extensions_._M_t._M_impl._M_header._M_parent;
  number = descriptor->number_;
  if ( M_parent )
  {
    v7 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
    do
    {
      while ( SLODWORD(M_parent[4]._vptr_MessageLite) >= number )
      {
        v7 = (std::_Rb_tree_header *)M_parent;
        M_parent = (google::protobuf::MessageLite *)M_parent[2]._vptr_MessageLite;
        if ( !M_parent )
          goto LABEL_6;
      }
      M_parent = (google::protobuf::MessageLite *)M_parent[3]._vptr_MessageLite;
    }
    while ( M_parent );
LABEL_6:
    if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header != v7 && number >= SLODWORD(v7->_M_node_count) )
    {
      M_parent = *(google::protobuf::MessageLite **)&v7[1]._M_header._M_color;
      if ( (BYTE2(v7[1]._M_header._M_parent) & 0x10) != 0 )
      {
        v9 = (__int64 (__fastcall *)(google::protobuf::MessageLite *, __int64))*((_QWORD *)M_parent->_vptr_MessageLite
                                                                               + 7);
        v13 = (__int64 (__fastcall *)(google::protobuf::MessageFactory *, const google::protobuf::Descriptor *))*((_QWORD *)factory->_vptr_MessageFactory + 2);
        v10 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)descriptor);
        v11 = v13(factory, v10);
        M_parent = (google::protobuf::MessageLite *)v9(M_parent, v11);
        if ( !this->arena_ )
        {
          v12 = *(_QWORD *)&v7[1]._M_header._M_color;
          if ( v12 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
            number = descriptor->number_;
            goto LABEL_12;
          }
        }
      }
      else
      {
        if ( !this->arena_ )
        {
LABEL_12:
          __x[0] = number;
          std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::erase(
            &this->extensions_._M_t,
            __x);
          return M_parent;
        }
        M_parent = (google::protobuf::MessageLite *)(*((__int64 (__fastcall **)(_QWORD))M_parent->_vptr_MessageLite + 3))(*(_QWORD *)&v7[1]._M_header._M_color);
        (*((void (__fastcall **)(google::protobuf::MessageLite *, _QWORD))M_parent->_vptr_MessageLite + 10))(
          M_parent,
          *(_QWORD *)&v7[1]._M_header._M_color);
      }
      number = descriptor->number_;
      goto LABEL_12;
    }
  }
  return M_parent;
};

// Line 218: range 000000000C946480-000000000C946561
google::protobuf::MessageLite *__fastcall google::protobuf::internal::ExtensionSet::UnsafeArenaReleaseMessage(
        google::protobuf::internal::ExtensionSet *const this,
        const google::protobuf::FieldDescriptor *descriptor,
        google::protobuf::MessageFactory *factory)
{
  google::protobuf::MessageLite *M_parent; // r12
  int number; // eax
  std::_Rb_tree_header *v7; // r14
  __int64 (__fastcall *v9)(google::protobuf::MessageLite *, __int64); // r15
  const google::protobuf::Descriptor *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(google::protobuf::MessageFactory *, const google::protobuf::Descriptor *); // [rsp+8h] [rbp-50h]
  int __x[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  M_parent = (google::protobuf::MessageLite *)this->extensions_._M_t._M_impl._M_header._M_parent;
  number = descriptor->number_;
  if ( M_parent )
  {
    v7 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
    do
    {
      while ( number <= SLODWORD(M_parent[4]._vptr_MessageLite) )
      {
        v7 = (std::_Rb_tree_header *)M_parent;
        M_parent = (google::protobuf::MessageLite *)M_parent[2]._vptr_MessageLite;
        if ( !M_parent )
          goto LABEL_6;
      }
      M_parent = (google::protobuf::MessageLite *)M_parent[3]._vptr_MessageLite;
    }
    while ( M_parent );
LABEL_6:
    if ( &this->extensions_._M_t._M_impl.std::_Rb_tree_header != v7 && number >= SLODWORD(v7->_M_node_count) )
    {
      M_parent = *(google::protobuf::MessageLite **)&v7[1]._M_header._M_color;
      if ( (BYTE2(v7[1]._M_header._M_parent) & 0x10) != 0 )
      {
        v9 = (__int64 (__fastcall *)(google::protobuf::MessageLite *, __int64))*((_QWORD *)M_parent->_vptr_MessageLite
                                                                               + 8);
        v13 = (__int64 (__fastcall *)(google::protobuf::MessageFactory *, const google::protobuf::Descriptor *))*((_QWORD *)factory->_vptr_MessageFactory + 2);
        v10 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)descriptor);
        v11 = v13(factory, v10);
        M_parent = (google::protobuf::MessageLite *)v9(M_parent, v11);
        if ( !this->arena_ )
        {
          v12 = *(_QWORD *)&v7[1]._M_header._M_color;
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        }
        number = descriptor->number_;
      }
      __x[0] = number;
      std::_Rb_tree<int,std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>,std::_Select1st<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>,std::less<int>,std::allocator<std::pair<int const,google::protobuf::internal::ExtensionSet::Extension>>>::erase(
        &this->extensions_._M_t,
        __x);
    }
  }
  return M_parent;
};

// Line 240: range 000000000C943E50-000000000C943F1A
google::protobuf::internal::ExtensionSet::Extension *__fastcall google::protobuf::internal::ExtensionSet::MaybeNewRepeatedExtension(
        google::protobuf::internal::ExtensionSet *const this,
        const google::protobuf::FieldDescriptor *descriptor)
{
  google::protobuf::internal::FieldType v3; // al
  google::protobuf::internal::ExtensionSet::Extension *v4; // rbp
  google::protobuf::Arena *arena; // rbx
  _QWORD *AlignedAndAddCleanup; // rax
  google::protobuf::internal::ExtensionSet::Extension *extension; // [rsp+8h] [rbp-20h] BYREF

  if ( !google::protobuf::internal::ExtensionSet::MaybeNewExtension(this, descriptor->number_, descriptor, &extension) )
    return extension;
  v3 = google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)descriptor);
  v4 = extension;
  extension->type = v3;
  arena = this->arena_;
  v4->is_repeated = 1;
  if ( arena )
  {
    if ( arena->hooks_cookie_ )
      google::protobuf::Arena::OnArenaAllocation(
        arena,
        (const std::type_info *)&`typeinfo for'google::protobuf::RepeatedPtrField<google::protobuf::MessageLite>,
        0x18uLL);
    AlignedAndAddCleanup = google::protobuf::internal::ArenaImpl::AllocateAlignedAndAddCleanup(
                             &arena->impl_,
                             0x18uLL,
                             google::protobuf::internal::arena_destruct_object<google::protobuf::RepeatedPtrField<google::protobuf::MessageLite>>);
    *AlignedAndAddCleanup = arena;
    AlignedAndAddCleanup[1] = 0LL;
    AlignedAndAddCleanup[2] = 0LL;
  }
  else
  {
    AlignedAndAddCleanup = (_QWORD *)operator new(0x18uLL);
    *AlignedAndAddCleanup = 0LL;
    AlignedAndAddCleanup[1] = 0LL;
    AlignedAndAddCleanup[2] = 0LL;
  }
  v4->_anon_0.int64_value = (google::protobuf::int64)AlignedAndAddCleanup;
  return extension;
};

// Line 255: range 000000000C946230-000000000C946348
google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>::Type *__fastcall google::protobuf::internal::ExtensionSet::AddMessage(
        google::protobuf::internal::ExtensionSet *this,
        google::protobuf::FieldDescriptor *a2,
        google::protobuf::MessageFactory *a3)
{
  google::protobuf::internal::ExtensionSet::Extension *v4; // rax
  google::protobuf::internal::RepeatedPtrFieldBase *int64_value; // rdx
  google::protobuf::internal::RepeatedPtrFieldBase *const *v6; // rbx
  _DWORD *v7; // rcx
  __int64 current_size; // rax
  __int64 v9; // r13
  __int64 v11; // r12
  google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>::Type *v12; // r13
  __int64 (__fastcall *v13)(google::protobuf::MessageFactory *, const google::protobuf::Descriptor *); // r13
  const google::protobuf::Descriptor *v14; // rax
  google::protobuf::internal::LogMessage_0 *v15; // rax
  google::protobuf::internal::false_type v16; // [rsp+0h] [rbp-78h]
  google::protobuf::internal::LogFinisher v17; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v18; // [rsp+10h] [rbp-68h] BYREF

  v4 = google::protobuf::internal::ExtensionSet::MaybeNewRepeatedExtension(this, a2);
  int64_value = (google::protobuf::internal::RepeatedPtrFieldBase *)v4->_anon_0.int64_value;
  v6 = (google::protobuf::internal::RepeatedPtrFieldBase *const *)v4;
  v7 = *(_DWORD **)(v4->_anon_0.int64_value + 16);
  if ( !v7 )
  {
LABEL_6:
    LODWORD(current_size) = int64_value->current_size_;
    goto LABEL_7;
  }
  current_size = int64_value->current_size_;
  if ( (int)current_size < *v7 )
  {
    v9 = *(_QWORD *)&v7[2 * current_size + 2];
    int64_value->current_size_ = current_size + 1;
    if ( v9 )
      return (google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>::Type *)v9;
    int64_value = *v6;
    goto LABEL_6;
  }
LABEL_7:
  if ( (_DWORD)current_size )
  {
    v11 = (__int64)int64_value->rep_->elements[0];
  }
  else
  {
    v13 = (__int64 (__fastcall *)(google::protobuf::MessageFactory *, const google::protobuf::Descriptor *))*((_QWORD *)a3->_vptr_MessageFactory + 2);
    v14 = google::protobuf::FieldDescriptor::message_type(a2);
    v11 = v13(a3, v14);
    if ( !v11 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        &v18,
        LOGLEVEL_FATAL_0,
        "google/protobuf/extension_set_heavy.cc",
        266);
      v15 = google::protobuf::internal::LogMessage::operator<<(&v18, "CHECK failed: prototype != NULL: ");
      google::protobuf::internal::LogFinisher::operator=(&v17, v15);
      google::protobuf::internal::LogMessage::~LogMessage(&v18);
    }
  }
  v12 = (google::protobuf::internal::GenericTypeHandler<google::protobuf::MessageLite>::Type *)(*(__int64 (__fastcall **)(__int64, google::protobuf::Arena *))(*(_QWORD *)v11 + 32LL))(
                                                                                                 v11,
                                                                                                 this->arena_);
  google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedInternal<google::protobuf::RepeatedPtrField<google::protobuf::MessageLite>::TypeHandler>(
    *v6,
    v12,
    v16);
  return v12;
};

// Line 266: range 000000000C7320C8-000000000C7320D5
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::AddMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 277: range 000000000C946350-000000000C946360
void __fastcall google::protobuf::internal::ExtensionSet::AddAllocatedMessage(
        google::protobuf::internal::ExtensionSet *const this,
        const google::protobuf::FieldDescriptor *descriptor,
        google::protobuf::MessageLite *new_entry)
{
  google::protobuf::internal::ExtensionSet::Extension *v4; // rax
  google::protobuf::internal::false_type v5; // [rsp+10h] [rbp+8h]

  v4 = google::protobuf::internal::ExtensionSet::MaybeNewRepeatedExtension(this, descriptor);
  google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedInternal<google::protobuf::RepeatedPtrField<google::protobuf::MessageLite>::TypeHandler>(
    v4->_anon_0.repeated_string_value,
    new_entry,
    v5);
};

// Line 283: range 000000000C943BA0-000000000C943BB3
bool __fastcall google::protobuf::internal::ValidateEnumUsingDescriptor(const void *arg, int number)
{
  return google::protobuf::EnumDescriptor::FindValueByNumber((const google::protobuf::EnumDescriptor *const)arg, number) != 0LL;
};

// Line 288: range 000000000C943A10-000000000C943B90
__int64 __fastcall google::protobuf::internal::DescriptorPoolExtensionFinder::Find(
        google::protobuf::internal::DescriptorPoolExtensionFinder *this,
        int a2,
        google::protobuf::internal::ExtensionInfo *a3)
{
  google::protobuf::FieldDescriptor *ExtensionByNumber; // rax
  google::protobuf::FieldDescriptor *v5; // rbp
  const google::protobuf::FieldOptions *options; // rax
  google::protobuf::MessageFactory *factory; // r12
  __int64 (__fastcall *v8)(google::protobuf::MessageFactory *, const google::protobuf::Descriptor *); // r13
  const google::protobuf::Descriptor *v9; // rax
  google::protobuf::internal::EnumValidityFuncWithArg *v10; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rax
  google::protobuf::internal::LogMessage_0 *v13; // rax
  google::protobuf::internal::LogMessage_0 *v14; // rax
  google::protobuf::internal::LogFinisher v15; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v16; // [rsp+10h] [rbp-68h] BYREF

  ExtensionByNumber = (google::protobuf::FieldDescriptor *)google::protobuf::DescriptorPool::FindExtensionByNumber(
                                                             (google::protobuf::DescriptorPool *)this->pool_,
                                                             this->containing_type_,
                                                             a2);
  if ( !ExtensionByNumber )
    return 0LL;
  v5 = ExtensionByNumber;
  a3->type = google::protobuf::FieldDescriptor::type(ExtensionByNumber);
  options = v5->options_;
  a3->is_repeated = v5->label_ == LABEL_REPEATED;
  LOBYTE(options) = options->packed_;
  a3->descriptor = v5;
  a3->is_packed = (char)options;
  if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(v5)] == CPPTYPE_MESSAGE_0 )
  {
    factory = this->factory_;
    v8 = (__int64 (__fastcall *)(google::protobuf::MessageFactory *, const google::protobuf::Descriptor *))*((_QWORD *)factory->_vptr_MessageFactory + 2);
    v9 = google::protobuf::FieldDescriptor::message_type(v5);
    v10 = (google::protobuf::internal::EnumValidityFuncWithArg *)v8(factory, v9);
    a3->_anon_0.enum_validity_check.func = v10;
    if ( !v10 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        &v16,
        LOGLEVEL_FATAL_0,
        "google/protobuf/extension_set_heavy.cc",
        301);
      v12 = google::protobuf::internal::LogMessage::operator<<(
              &v16,
              "CHECK failed: output->message_prototype != NULL: ");
      v13 = google::protobuf::internal::LogMessage::operator<<(
              v12,
              "Extension factory's GetPrototype() returned NULL for extension: ");
      v14 = google::protobuf::internal::LogMessage::operator<<(v13, v5->full_name_);
      google::protobuf::internal::LogFinisher::operator=(&v15, v14);
      google::protobuf::internal::LogMessage::~LogMessage(&v16);
    }
    return 1LL;
  }
  else
  {
    if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(v5)] == CPPTYPE_ENUM_0 )
    {
      a3->_anon_0.enum_validity_check.func = google::protobuf::internal::ValidateEnumUsingDescriptor;
      a3->_anon_0.enum_validity_check.arg = google::protobuf::FieldDescriptor::enum_type(v5);
    }
    return 1LL;
  }
};

// Line 301: range 000000000C731FD4-000000000C731FE1
void __fastcall __noreturn google::protobuf::internal::DescriptorPoolExtensionFinder::Find(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 315: range 000000000C943F20-000000000C943FFF
__int64 __fastcall google::protobuf::internal::ExtensionSet::ParseField(
        google::protobuf::internal::ExtensionSet *this,
        google::protobuf::uint32 tag,
        google::protobuf::io::CodedInputStream *input,
        const google::protobuf::Message *a4,
        google::protobuf::UnknownFieldSet *a5)
{
  bool v6; // zf
  __int64 v7; // rax
  google::protobuf::MessageFactory *extension_factory; // rdx
  const google::protobuf::DescriptorPool *extension_pool; // rcx
  unsigned int v10; // eax
  unsigned int v11; // r12d
  google::protobuf::internal::FieldSkipper v13[2]; // [rsp+0h] [rbp-58h] BYREF
  google::protobuf::internal::ExtensionFinder extension_finder; // [rsp+10h] [rbp-48h] BYREF
  const google::protobuf::Message *v15; // [rsp+18h] [rbp-40h]
  google::protobuf::MessageFactory *v16; // [rsp+20h] [rbp-38h]
  __int64 v17; // [rsp+28h] [rbp-30h]

  v6 = input->extension_pool_ == 0LL;
  v13[0]._vptr_FieldSkipper = (int (**)(...))off_1A1753A8;
  v13[1]._vptr_FieldSkipper = (int (**)(...))a5;
  if ( v6 )
  {
    v15 = a4;
    extension_finder._vptr_ExtensionFinder = (int (**)(...))off_1A1788D0;
    LOBYTE(v10) = google::protobuf::internal::ExtensionSet::ParseField(this, tag, input, &extension_finder, v13);
    extension_finder._vptr_ExtensionFinder = (int (**)(...))off_1A1788D0;
  }
  else
  {
    v7 = (*((__int64 (__fastcall **)(const google::protobuf::Message *))a4->_vptr_MessageLite + 24))(a4);
    extension_factory = input->extension_factory_;
    extension_pool = input->extension_pool_;
    v17 = v7;
    v16 = extension_factory;
    v15 = (const google::protobuf::Message *)extension_pool;
    extension_finder._vptr_ExtensionFinder = (int (**)(...))off_1A181648;
    LOBYTE(v10) = google::protobuf::internal::ExtensionSet::ParseField(this, tag, input, &extension_finder, v13);
    extension_finder._vptr_ExtensionFinder = (int (**)(...))off_1A181648;
  }
  v11 = v10;
  google::protobuf::internal::ExtensionFinder::~ExtensionFinder(&extension_finder);
  return v11;
};

// Line 330: range 000000000C945CF0-000000000C945DCD
__int64 __fastcall google::protobuf::internal::ExtensionSet::ParseMessageSet(
        google::protobuf::internal::ExtensionSet *this,
        google::protobuf::io::CodedInputStream *input,
        const google::protobuf::Message *a3,
        google::protobuf::UnknownFieldSet *a4)
{
  bool v4; // zf
  __int64 v5; // rax
  google::protobuf::MessageFactory *extension_factory; // rdx
  const google::protobuf::DescriptorPool *extension_pool; // rcx
  unsigned int v8; // eax
  unsigned int v9; // r12d
  google::protobuf::internal::MessageSetFieldSkipper v11; // [rsp+0h] [rbp-48h] BYREF
  google::protobuf::internal::ExtensionFinder extension_finder; // [rsp+10h] [rbp-38h] BYREF
  const google::protobuf::Message *v13; // [rsp+18h] [rbp-30h]
  google::protobuf::MessageFactory *v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+28h] [rbp-20h]

  v4 = input->extension_pool_ == 0LL;
  v11.unknown_fields_ = a4;
  v11._vptr_FieldSkipper = (int (**)(...))off_1A181608;
  if ( v4 )
  {
    v13 = a3;
    extension_finder._vptr_ExtensionFinder = (int (**)(...))off_1A1788D0;
    LOBYTE(v8) = google::protobuf::internal::ExtensionSet::ParseMessageSet(this, input, &extension_finder, &v11);
    extension_finder._vptr_ExtensionFinder = (int (**)(...))off_1A1788D0;
  }
  else
  {
    v5 = (*((__int64 (__fastcall **)(const google::protobuf::Message *))a3->_vptr_MessageLite + 24))(a3);
    extension_factory = input->extension_factory_;
    extension_pool = input->extension_pool_;
    v15 = v5;
    v14 = extension_factory;
    v13 = (const google::protobuf::Message *)extension_pool;
    extension_finder._vptr_ExtensionFinder = (int (**)(...))off_1A181648;
    LOBYTE(v8) = google::protobuf::internal::ExtensionSet::ParseMessageSet(this, input, &extension_finder, &v11);
    extension_finder._vptr_ExtensionFinder = (int (**)(...))off_1A181648;
  }
  v9 = v8;
  google::protobuf::internal::ExtensionFinder::~ExtensionFinder(&extension_finder);
  return v9;
};

// Line 343: range 000000000C9441E0-000000000C9441ED
int __fastcall google::protobuf::internal::ExtensionSet::SpaceUsedExcludingSelf(
        const google::protobuf::internal::ExtensionSet *const this)
{
  return google::protobuf::internal::ExtensionSet::SpaceUsedExcludingSelfLong(this);
};

// Line 347: range 000000000C944190-000000000C9441D3
size_t __fastcall google::protobuf::internal::ExtensionSet::SpaceUsedExcludingSelfLong(
        const google::protobuf::internal::ExtensionSet *const this)
{
  std::_Rb_tree_node_base::_Base_ptr M_left; // rbp
  size_t i; // r12

  M_left = this->extensions_._M_t._M_impl._M_header._M_left;
  for ( i = 32 * this->extensions_._M_t._M_impl._M_node_count;
        &this->extensions_._M_t._M_impl.std::_Rb_tree_header != (std::_Rb_tree_header *)M_left;
        M_left = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(M_left) )
  {
    i += google::protobuf::internal::ExtensionSet::Extension::SpaceUsedExcludingSelfLong((const google::protobuf::internal::ExtensionSet::Extension *const)&M_left[1]._M_parent);
  }
  return i;
};

// Line 364: range 000000000C944010-000000000C944180
size_t __fastcall google::protobuf::internal::ExtensionSet::Extension::SpaceUsedExcludingSelfLong(
        const google::protobuf::internal::ExtensionSet::Extension *const this)
{
  google::protobuf::FieldDescriptor::CppType v1; // eax
  __int64 v2; // rax
  __int64 (__fastcall *v3)(google::protobuf::int64); // rax
  size_t result; // rax
  google::protobuf::int64 int64_value; // r12
  __int64 v6; // rbp
  int *v7; // rax
  int v8; // ebx
  __int64 v9; // rdx
  google::protobuf::int64 v10; // r12
  int *v11; // rax
  int v12; // ebx
  __int64 v13; // rdx

  v1 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[this->type];
  if ( this->is_repeated )
  {
    switch ( this->type )
    {
      case 1u:
      case 3u:
      case 4u:
      case 6u:
      case 0x10u:
      case 0x12u:
        result = 16LL;
        if ( *(_QWORD *)(this->_anon_0.int64_value + 8) )
          return 8LL * *(int *)(this->_anon_0.int64_value + 4) + 24;
        return result;
      case 2u:
      case 5u:
      case 7u:
      case 0xDu:
      case 0xEu:
      case 0xFu:
      case 0x11u:
        result = 16LL;
        if ( *(_QWORD *)(this->_anon_0.int64_value + 8) )
          return 4LL * *(int *)(this->_anon_0.int64_value + 4) + 24;
        return result;
      case 8u:
        result = 16LL;
        if ( *(_QWORD *)(this->_anon_0.int64_value + 8) )
          return *(int *)(this->_anon_0.int64_value + 4) + 24LL;
        return result;
      case 9u:
      case 0xCu:
        int64_value = this->_anon_0.int64_value;
        v6 = 8LL * *(int *)(this->_anon_0.int64_value + 12);
        v7 = *(int **)(this->_anon_0.int64_value + 16);
        if ( !v7 )
          return v6 + 24;
        if ( *v7 > 0 )
        {
          v8 = 0;
          do
          {
            v9 = v8++;
            v6 += google::protobuf::internal::StringSpaceUsedExcludingSelfLong(*(const std::string **)&v7[2 * v9 + 2])
                + 32;
            v7 = *(int **)(int64_value + 16);
          }
          while ( *v7 > v8 );
        }
        break;
      case 0xAu:
      case 0xBu:
        v10 = this->_anon_0.int64_value;
        v6 = 8LL * *(int *)(this->_anon_0.int64_value + 12);
        v11 = *(int **)(this->_anon_0.int64_value + 16);
        if ( !v11 )
          return v6 + 24;
        if ( *v11 > 0 )
        {
          v12 = 0;
          do
          {
            v13 = v12++;
            v6 += (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v11[2 * v13 + 2] + 168LL))(*(_QWORD *)&v11[2 * v13 + 2]);
            v11 = *(int **)(v10 + 16);
          }
          while ( *v11 > v12 );
        }
        break;
      default:
        return 0LL;
    }
    v6 += 8LL;
    return v6 + 24;
  }
  else if ( v1 == CPPTYPE_STRING_0 )
  {
    return google::protobuf::internal::StringSpaceUsedExcludingSelfLong(this->_anon_0.string_value) + 32;
  }
  else if ( v1 == CPPTYPE_MESSAGE_0 )
  {
    v2 = *(_QWORD *)this->_anon_0.int64_value;
    if ( (*((_BYTE *)this + 10) & 0x10) != 0 )
      v3 = *(__int64 (__fastcall **)(google::protobuf::int64))(v2 + 88);
    else
      v3 = *(__int64 (__fastcall **)(google::protobuf::int64))(v2 + 168);
    return v3(this->_anon_0.int64_value);
  }
  else
  {
    return 0LL;
  }
};

// Line 436: range 000000000C9455B0-000000000C94562C
google::protobuf::uint8 *__fastcall google::protobuf::internal::ExtensionSet::InternalSerializeWithCachedSizesToArray(
        const google::protobuf::internal::ExtensionSet *const this,
        int start_field_number,
        int end_field_number,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  std::_Rb_tree_node_base::_Base_ptr M_parent; // rax
  std::_Rb_tree_header *v7; // r13
  std::_Rb_tree_header *v9; // rbp
  int M_node_count; // esi

  M_parent = this->extensions_._M_t._M_impl._M_header._M_parent;
  if ( M_parent )
  {
    v7 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
    v9 = &this->extensions_._M_t._M_impl.std::_Rb_tree_header;
    do
    {
      while ( M_parent[1]._M_color >= start_field_number )
      {
        v9 = (std::_Rb_tree_header *)M_parent;
        M_parent = M_parent->_M_left;
        if ( !M_parent )
          goto LABEL_6;
      }
      M_parent = M_parent->_M_right;
    }
    while ( M_parent );
LABEL_6:
    while ( v7 != v9 )
    {
      M_node_count = v9->_M_node_count;
      if ( M_node_count >= end_field_number )
        break;
      target = (google::protobuf::uint8 *)google::protobuf::internal::ExtensionSet::Extension::InternalSerializeFieldWithCachedSizesToArray(
                                            (google::protobuf::internal::ExtensionSet::Extension *)&v9[1],
                                            M_node_count,
                                            deterministic,
                                            target);
      v9 = (std::_Rb_tree_header *)std::_Rb_tree_increment(&v9->_M_header);
    }
  }
  return target;
};

// Line 448: range 000000000C9457C0-000000000C945828
google::protobuf::uint8 *__fastcall google::protobuf::internal::ExtensionSet::InternalSerializeMessageSetWithCachedSizesToArray(
        const google::protobuf::internal::ExtensionSet *const this,
        bool deterministic,
        google::protobuf::uint8 *target)
{
  std::_Rb_tree_node_base::_Base_ptr M_left; // rbp
  unsigned __int8 *v4; // r12

  M_left = this->extensions_._M_t._M_impl._M_header._M_left;
  if ( M_left == (std::_Rb_tree_node_base::_Base_ptr)&this->extensions_._M_t._M_impl.std::_Rb_tree_header )
    return target;
  v4 = target;
  do
  {
    v4 = (unsigned __int8 *)google::protobuf::internal::ExtensionSet::Extension::InternalSerializeMessageSetItemWithCachedSizesToArray(
                              (google::protobuf::internal::ExtensionSet::Extension *)&M_left[1]._M_parent,
                              M_left[1]._M_color,
                              deterministic,
                              v4);
    M_left = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(M_left);
  }
  while ( M_left != (std::_Rb_tree_node_base::_Base_ptr)&this->extensions_._M_t._M_impl.std::_Rb_tree_header );
  return v4;
};

// Line 458: range 000000000C9441F0-000000000C9455A3
google::protobuf::uint8 *__fastcall google::protobuf::internal::ExtensionSet::Extension::InternalSerializeFieldWithCachedSizesToArray(
        google::protobuf::internal::ExtensionSet::Extension *this,
        __int64 a2,
        unsigned __int8 a3,
        unsigned __int8 *a4)
{
  char v5; // al
  google::protobuf::uint8 *v6; // r12
  google::protobuf::internal::LogMessage_0 *v7; // rax
  unsigned int i; // esi
  char v10; // al
  unsigned __int64 cached_size; // rdi
  unsigned __int8 *j; // rax
  char v13; // dl
  unsigned int v14; // esi
  google::protobuf::int64 i31; // rdx
  char v16; // al
  unsigned int v17; // esi
  google::protobuf::int64 i39; // rdi
  char v19; // dl
  unsigned __int8 *i30; // rcx
  unsigned __int64 i29; // rax
  char v22; // dl
  unsigned int v23; // esi
  google::protobuf::int32 i38; // edi
  char v25; // dl
  char v26; // dl
  google::protobuf::int64 v27; // rax
  unsigned int v28; // esi
  int v29; // edi
  unsigned __int64 v30; // rcx
  unsigned int i4; // eax
  char v32; // dl
  _BYTE *i5; // rax
  char v34; // dl
  google::protobuf::int64 v35; // rax
  unsigned int v36; // esi
  int v37; // ecx
  int v38; // edi
  unsigned int i1; // eax
  char v40; // dl
  google::protobuf::int64 v41; // rax
  unsigned int v42; // esi
  int v43; // edi
  unsigned __int64 v44; // rcx
  unsigned int i2; // eax
  char v46; // dl
  _BYTE *i3; // rax
  char v48; // dl
  google::protobuf::int64 v49; // rax
  unsigned int v50; // esi
  int v51; // ecx
  __int64 v52; // xmm0_8
  unsigned int nn; // eax
  char v54; // dl
  google::protobuf::int64 v55; // rax
  unsigned int v56; // esi
  int v57; // ecx
  __int64 v58; // rdi
  unsigned int i8; // eax
  char v60; // dl
  google::protobuf::int64 v61; // rax
  unsigned int v62; // esi
  int v63; // ecx
  int v64; // edi
  unsigned int i9; // eax
  char v66; // dl
  google::protobuf::int64 v67; // rax
  unsigned int v68; // esi
  int v69; // edi
  unsigned __int64 v70; // rcx
  unsigned int i6; // eax
  char v72; // dl
  _BYTE *i7; // rax
  char v74; // dl
  google::protobuf::int64 v75; // rax
  unsigned int v76; // esi
  int v77; // ecx
  google::protobuf::uint8 v78; // di
  unsigned int i10; // eax
  char v80; // dl
  google::protobuf::int64 v81; // rax
  int v82; // r13d
  const std::string *v83; // rdi
  unsigned int i11; // eax
  char v85; // dl
  google::protobuf::int64 v86; // rax
  unsigned int v87; // r13d
  int v88; // r15d
  __int64 v89; // rdi
  unsigned int i12; // eax
  char v91; // dl
  _BYTE *v92; // rax
  unsigned int i13; // ecx
  char v94; // dl
  google::protobuf::int64 v95; // rax
  unsigned int v96; // r13d
  int v97; // r14d
  __int64 v98; // r15
  unsigned int i14; // eax
  char v100; // dl
  _BYTE *v101; // r12
  unsigned int i15; // eax
  char v103; // dl
  google::protobuf::int64 v104; // rax
  int v105; // r13d
  const std::string *v106; // rdi
  unsigned int i16; // eax
  char v108; // dl
  google::protobuf::int64 v109; // rax
  unsigned int v110; // esi
  int v111; // edi
  unsigned int v112; // ecx
  unsigned int i17; // eax
  char v114; // dl
  _BYTE *i18; // rax
  char v116; // dl
  unsigned int v117; // esi
  bool i32; // dl
  char v119; // al
  unsigned int v120; // esi
  const std::string *i33; // rdi
  char v122; // al
  int v123; // ebx
  google::protobuf::int64 v124; // rdi
  unsigned int i34; // eax
  char v126; // dl
  _BYTE *v127; // rax
  unsigned int i35; // esi
  char v129; // dl
  char v130; // al
  unsigned int v131; // esi
  char v132; // dl
  char v133; // dl
  unsigned int v134; // esi
  google::protobuf::int32 i28; // edx
  char v136; // al
  google::protobuf::int64 v137; // rax
  unsigned int v138; // esi
  int v139; // ecx
  __int64 v140; // rdi
  unsigned int i22; // eax
  char v142; // dl
  char v143; // al
  unsigned int v144; // esi
  char v145; // dl
  char v146; // dl
  unsigned int v147; // r13d
  google::protobuf::int64 v148; // rdi
  __int64 v149; // rax
  google::protobuf::uint8 *(__fastcall *v150)(const google::protobuf::internal::ExtensionSet::LazyMessageExtension *const, int, bool, google::protobuf::uint8 *); // r8
  unsigned int v151; // esi
  char v152; // dl
  char v153; // dl
  unsigned int v154; // esi
  char v155; // dl
  char v156; // dl
  unsigned int v157; // esi
  google::protobuf::int64 i27; // xmm0_8
  char v159; // al
  google::protobuf::int64 v160; // rax
  unsigned int v161; // esi
  int v162; // r8d
  int v163; // edi
  unsigned int i23; // eax
  char v165; // dl
  _BYTE *v166; // rax
  unsigned int i24; // ecx
  char v168; // dl
  char v169; // al
  unsigned int v170; // esi
  char v171; // dl
  char v172; // dl
  char v173; // al
  google::protobuf::int64 v174; // rax
  unsigned int v175; // esi
  int v176; // edi
  unsigned __int64 v177; // rcx
  unsigned int i19; // eax
  char v179; // dl
  _BYTE *i20; // rax
  char v181; // dl
  google::protobuf::int64 v182; // rax
  unsigned int v183; // esi
  int v184; // ecx
  int v185; // edi
  unsigned int i21; // eax
  char v187; // dl
  google::protobuf::int64 v188; // rax
  unsigned int v189; // esi
  int v190; // r8d
  __int64 v191; // rdi
  unsigned int i25; // eax
  char v193; // dl
  _BYTE *v194; // rax
  unsigned __int64 i26; // rcx
  char v196; // dl
  google::protobuf::int64 v197; // rdx
  int v198; // eax
  __int64 v199; // rcx
  google::protobuf::int64 int64_value; // rdx
  int v201; // eax
  __int64 v202; // rcx
  google::protobuf::int64 v203; // rdx
  int v204; // eax
  __int64 v205; // rcx
  google::protobuf::int64 v206; // rax
  int v207; // ecx
  unsigned __int64 n; // rax
  char v209; // dl
  google::protobuf::int64 v210; // rax
  int v211; // ecx
  unsigned __int64 m; // rax
  char v213; // dl
  google::protobuf::int64 v214; // rax
  int v215; // ecx
  unsigned __int64 k; // rax
  char v217; // dl
  google::protobuf::int64 v218; // rdx
  int v219; // eax
  __int64 v220; // rcx
  __int64 v221; // rdx
  google::protobuf::int64 v222; // rdx
  int v223; // eax
  __int64 v224; // rcx
  google::protobuf::int64 v225; // rax
  int v226; // ecx
  __int64 v227; // rdx
  unsigned __int64 mm; // rax
  char v229; // dl
  google::protobuf::int64 v230; // rax
  int v231; // ecx
  int v232; // edx
  unsigned int kk; // eax
  char v234; // dl
  google::protobuf::int64 v235; // rdx
  int v236; // eax
  __int64 v237; // rcx
  google::protobuf::int64 v238; // rdx
  int v239; // eax
  __int64 v240; // rcx
  google::protobuf::int64 v241; // rax
  int v242; // ecx
  unsigned __int64 jj; // rax
  char v244; // dl
  google::protobuf::int64 v245; // rax
  int v246; // ecx
  unsigned int ii; // eax
  char v248; // dl
  unsigned int v249; // esi
  google::protobuf::int64 i36; // rbp
  char v251; // al
  unsigned __int8 *v252; // rbx
  unsigned int i37; // eax
  char v254; // dl
  google::protobuf::internal::LogFinisher v255; // [rsp+Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v256; // [rsp+10h] [rbp-78h] BYREF

  if ( this->is_repeated )
  {
    if ( this->is_packed )
    {
      if ( this->cached_size )
      {
        for ( i = 8 * a2 + 2; i > 0x7F; *(a4 - 1) = v10 | 0x80 )
        {
          v10 = i;
          i >>= 7;
          ++a4;
        }
        *a4 = i;
        cached_size = this->cached_size;
        for ( j = a4 + 1; cached_size > 0x7F; *(j - 1) = v13 | 0x80 )
        {
          v13 = cached_size;
          cached_size >>= 7;
          ++j;
        }
        *j = cached_size;
        v6 = j + 1;
        switch ( this->type )
        {
          case 1u:
            int64_value = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v201 = 0;
              do
              {
                v202 = v201;
                v6 += 8;
                ++v201;
                *((_QWORD *)v6 - 1) = *(_QWORD *)(*(_QWORD *)(int64_value + 8) + 8 * v202 + 8);
                int64_value = this->_anon_0.int64_value;
              }
              while ( v201 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 2u:
            v197 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v198 = 0;
              do
              {
                v199 = v198;
                v6 += 4;
                ++v198;
                *((_DWORD *)v6 - 1) = *(_DWORD *)(*(_QWORD *)(v197 + 8) + 4 * v199 + 8);
                v197 = this->_anon_0.int64_value;
              }
              while ( v198 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 3u:
            v214 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v215 = 0;
              do
              {
                for ( k = *(_QWORD *)(*(_QWORD *)(v214 + 8) + 8LL * v215 + 8); k > 0x7F; *(v6 - 1) = v217 | 0x80 )
                {
                  v217 = k;
                  k >>= 7;
                  ++v6;
                }
                *v6 = k;
                v214 = this->_anon_0.int64_value;
                ++v6;
                ++v215;
              }
              while ( v215 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 4u:
            v210 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v211 = 0;
              do
              {
                for ( m = *(_QWORD *)(*(_QWORD *)(v210 + 8) + 8LL * v211 + 8); m > 0x7F; *(v6 - 1) = v213 | 0x80 )
                {
                  v213 = m;
                  m >>= 7;
                  ++v6;
                }
                *v6 = m;
                v210 = this->_anon_0.int64_value;
                ++v6;
                ++v211;
              }
              while ( v211 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 5u:
            v206 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v207 = 0;
              do
              {
                for ( n = *(int *)(*(_QWORD *)(v206 + 8) + 4LL * v207 + 8); n > 0x7F; *(v6 - 1) = v209 | 0x80 )
                {
                  v209 = n;
                  n >>= 7;
                  ++v6;
                }
                *v6 = n;
                v206 = this->_anon_0.int64_value;
                ++v6;
                ++v207;
              }
              while ( v207 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 6u:
            v203 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v204 = 0;
              do
              {
                v205 = v204;
                v6 += 8;
                ++v204;
                *((_QWORD *)v6 - 1) = *(_QWORD *)(*(_QWORD *)(v203 + 8) + 8 * v205 + 8);
                v203 = this->_anon_0.int64_value;
              }
              while ( v204 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 7u:
            v222 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v223 = 0;
              do
              {
                v224 = v223;
                v6 += 4;
                ++v223;
                *((_DWORD *)v6 - 1) = *(_DWORD *)(*(_QWORD *)(v222 + 8) + 4 * v224 + 8);
                v222 = this->_anon_0.int64_value;
              }
              while ( v223 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 8u:
            v218 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v219 = 0;
              do
              {
                v220 = *(_QWORD *)(v218 + 8);
                v221 = v219;
                ++v6;
                ++v219;
                *(v6 - 1) = *(_BYTE *)(v220 + v221 + 8);
                v218 = this->_anon_0.int64_value;
              }
              while ( v219 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 9u:
          case 0xAu:
          case 0xBu:
          case 0xCu:
            google::protobuf::internal::LogMessage::LogMessage(
              &v256,
              LOGLEVEL_FATAL_0,
              "google/protobuf/extension_set_heavy.cc",
              496);
            v7 = google::protobuf::internal::LogMessage::operator<<(&v256, "Non-primitive types can't be packed.");
            google::protobuf::internal::LogFinisher::operator=(&v255, v7);
            google::protobuf::internal::LogMessage::~LogMessage(&v256);
            break;
          case 0xDu:
            v245 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v246 = 0;
              do
              {
                for ( ii = *(_DWORD *)(*(_QWORD *)(v245 + 8) + 4LL * v246 + 8); ii > 0x7F; *(v6 - 1) = v248 | 0x80 )
                {
                  v248 = ii;
                  ii >>= 7;
                  ++v6;
                }
                *v6 = ii;
                v245 = this->_anon_0.int64_value;
                ++v6;
                ++v246;
              }
              while ( v246 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 0xEu:
            v241 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v242 = 0;
              do
              {
                for ( jj = *(int *)(*(_QWORD *)(v241 + 8) + 4LL * v242 + 8); jj > 0x7F; *(v6 - 1) = v244 | 0x80 )
                {
                  v244 = jj;
                  jj >>= 7;
                  ++v6;
                }
                *v6 = jj;
                v241 = this->_anon_0.int64_value;
                ++v6;
                ++v242;
              }
              while ( v242 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 0xFu:
            v238 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v239 = 0;
              do
              {
                v240 = v239;
                v6 += 4;
                ++v239;
                *((_DWORD *)v6 - 1) = *(_DWORD *)(*(_QWORD *)(v238 + 8) + 4 * v240 + 8);
                v238 = this->_anon_0.int64_value;
              }
              while ( v239 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 0x10u:
            v235 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v236 = 0;
              do
              {
                v237 = v236;
                v6 += 8;
                ++v236;
                *((_QWORD *)v6 - 1) = *(_QWORD *)(*(_QWORD *)(v235 + 8) + 8 * v237 + 8);
                v235 = this->_anon_0.int64_value;
              }
              while ( v236 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 0x11u:
            v230 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v231 = 0;
              do
              {
                v232 = *(_DWORD *)(*(_QWORD *)(v230 + 8) + 4LL * v231 + 8);
                for ( kk = (v232 >> 31) ^ (2 * v232); kk > 0x7F; *(v6 - 1) = v234 | 0x80 )
                {
                  v234 = kk;
                  kk >>= 7;
                  ++v6;
                }
                *v6 = kk;
                v230 = this->_anon_0.int64_value;
                ++v6;
                ++v231;
              }
              while ( v231 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          case 0x12u:
            v225 = this->_anon_0.int64_value;
            if ( *(int *)this->_anon_0.int64_value > 0 )
            {
              v226 = 0;
              do
              {
                v227 = *(_QWORD *)(*(_QWORD *)(v225 + 8) + 8LL * v226 + 8);
                for ( mm = (v227 >> 63) ^ (2 * v227); mm > 0x7F; *(v6 - 1) = v229 | 0x80 )
                {
                  v229 = mm;
                  mm >>= 7;
                  ++v6;
                }
                *v6 = mm;
                v225 = this->_anon_0.int64_value;
                ++v6;
                ++v226;
              }
              while ( v226 < *(_DWORD *)this->_anon_0.int64_value );
            }
            break;
          default:
            return v6;
        }
      }
      else
      {
        return a4;
      }
    }
    else
    {
      switch ( this->type )
      {
        case 1u:
          v49 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value <= 0 )
            return a4;
          v6 = a4;
          v50 = 8 * a2 + 1;
          v51 = 0;
          do
          {
            v52 = *(_QWORD *)(*(_QWORD *)(v49 + 8) + 8LL * v51 + 8);
            for ( nn = v50; nn > 0x7F; *(v6 - 1) = v54 | 0x80 )
            {
              v54 = nn;
              nn >>= 7;
              ++v6;
            }
            *v6 = nn;
            ++v51;
            v6 += 9;
            *((_QWORD *)v6 - 1) = v52;
            v49 = this->_anon_0.int64_value;
          }
          while ( v51 < *(_DWORD *)this->_anon_0.int64_value );
          break;
        case 2u:
          v35 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value <= 0 )
            return a4;
          v6 = a4;
          v36 = 8 * a2 + 5;
          v37 = 0;
          do
          {
            v38 = *(_DWORD *)(*(_QWORD *)(v35 + 8) + 4LL * v37 + 8);
            for ( i1 = v36; i1 > 0x7F; *(v6 - 1) = v40 | 0x80 )
            {
              v40 = i1;
              i1 >>= 7;
              ++v6;
            }
            *v6 = i1;
            ++v37;
            v6 += 5;
            *((_DWORD *)v6 - 1) = v38;
            v35 = this->_anon_0.int64_value;
          }
          while ( v37 < *(_DWORD *)this->_anon_0.int64_value );
          break;
        case 3u:
          v41 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value <= 0 )
            return a4;
          v42 = 8 * a2;
          v6 = a4;
          v43 = 0;
          do
          {
            v44 = *(_QWORD *)(*(_QWORD *)(v41 + 8) + 8LL * v43 + 8);
            for ( i2 = v42; i2 > 0x7F; *(v6 - 1) = v46 | 0x80 )
            {
              v46 = i2;
              i2 >>= 7;
              ++v6;
            }
            *v6 = i2;
            for ( i3 = v6 + 1; v44 > 0x7F; *(i3 - 1) = v48 | 0x80 )
            {
              v48 = v44;
              v44 >>= 7;
              ++i3;
            }
            *i3 = v44;
            v6 = i3 + 1;
            v41 = this->_anon_0.int64_value;
            ++v43;
          }
          while ( v43 < *(_DWORD *)this->_anon_0.int64_value );
          break;
        case 4u:
          v27 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value <= 0 )
            return a4;
          v28 = 8 * a2;
          v6 = a4;
          v29 = 0;
          do
          {
            v30 = *(_QWORD *)(*(_QWORD *)(v27 + 8) + 8LL * v29 + 8);
            for ( i4 = v28; i4 > 0x7F; *(v6 - 1) = v32 | 0x80 )
            {
              v32 = i4;
              i4 >>= 7;
              ++v6;
            }
            *v6 = i4;
            for ( i5 = v6 + 1; v30 > 0x7F; *(i5 - 1) = v34 | 0x80 )
            {
              v34 = v30;
              v30 >>= 7;
              ++i5;
            }
            *i5 = v30;
            v6 = i5 + 1;
            v27 = this->_anon_0.int64_value;
            ++v29;
          }
          while ( v29 < *(_DWORD *)this->_anon_0.int64_value );
          break;
        case 5u:
          v67 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value <= 0 )
            return a4;
          v68 = 8 * a2;
          v6 = a4;
          v69 = 0;
          do
          {
            v70 = *(int *)(*(_QWORD *)(v67 + 8) + 4LL * v69 + 8);
            for ( i6 = v68; i6 > 0x7F; *(v6 - 1) = v72 | 0x80 )
            {
              v72 = i6;
              i6 >>= 7;
              ++v6;
            }
            *v6 = i6;
            for ( i7 = v6 + 1; v70 > 0x7F; *(i7 - 1) = v74 | 0x80 )
            {
              v74 = v70;
              v70 >>= 7;
              ++i7;
            }
            *i7 = v70;
            v6 = i7 + 1;
            v67 = this->_anon_0.int64_value;
            ++v69;
          }
          while ( v69 < *(_DWORD *)this->_anon_0.int64_value );
          break;
        case 6u:
          v55 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value <= 0 )
            return a4;
          v6 = a4;
          v56 = 8 * a2 + 1;
          v57 = 0;
          do
          {
            v58 = *(_QWORD *)(*(_QWORD *)(v55 + 8) + 8LL * v57 + 8);
            for ( i8 = v56; i8 > 0x7F; *(v6 - 1) = v60 | 0x80 )
            {
              v60 = i8;
              i8 >>= 7;
              ++v6;
            }
            *v6 = i8;
            ++v57;
            v6 += 9;
            *((_QWORD *)v6 - 1) = v58;
            v55 = this->_anon_0.int64_value;
          }
          while ( v57 < *(_DWORD *)this->_anon_0.int64_value );
          break;
        case 7u:
          v61 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value <= 0 )
            return a4;
          v6 = a4;
          v62 = 8 * a2 + 5;
          v63 = 0;
          do
          {
            v64 = *(_DWORD *)(*(_QWORD *)(v61 + 8) + 4LL * v63 + 8);
            for ( i9 = v62; i9 > 0x7F; *(v6 - 1) = v66 | 0x80 )
            {
              v66 = i9;
              i9 >>= 7;
              ++v6;
            }
            *v6 = i9;
            ++v63;
            v6 += 5;
            *((_DWORD *)v6 - 1) = v64;
            v61 = this->_anon_0.int64_value;
          }
          while ( v63 < *(_DWORD *)this->_anon_0.int64_value );
          break;
        case 8u:
          v75 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value <= 0 )
            return a4;
          v6 = a4;
          v76 = 8 * a2;
          v77 = 0;
          do
          {
            v78 = *(_BYTE *)(*(_QWORD *)(v75 + 8) + v77 + 8LL);
            for ( i10 = v76; i10 > 0x7F; *(v6 - 1) = v80 | 0x80 )
            {
              v80 = i10;
              i10 >>= 7;
              ++v6;
            }
            *v6 = i10;
            ++v77;
            v6 += 2;
            *(v6 - 1) = v78;
            v75 = this->_anon_0.int64_value;
          }
          while ( v77 < *(_DWORD *)this->_anon_0.int64_value );
          break;
        case 9u:
          v81 = this->_anon_0.int64_value;
          if ( *(int *)(this->_anon_0.int64_value + 8) <= 0 )
            return a4;
          v6 = a4;
          v82 = 0;
          do
          {
            v83 = *(const std::string **)(*(_QWORD *)(v81 + 16) + 8LL * v82 + 8);
            for ( i11 = 8 * a2 + 2; i11 > 0x7F; *(v6 - 1) = v85 | 0x80 )
            {
              v85 = i11;
              i11 >>= 7;
              ++v6;
            }
            *v6 = i11;
            ++v82;
            v6 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v83, v6 + 1);
            v81 = this->_anon_0.int64_value;
          }
          while ( v82 < *(_DWORD *)(this->_anon_0.int64_value + 8) );
          break;
        case 0xAu:
          v86 = this->_anon_0.int64_value;
          if ( *(int *)(this->_anon_0.int64_value + 8) <= 0 )
            return a4;
          v87 = a3;
          v6 = a4;
          v88 = 0;
          do
          {
            v89 = *(_QWORD *)(*(_QWORD *)(v86 + 16) + 8LL * v88 + 8);
            for ( i12 = (8 * a2) | 3; i12 > 0x7F; *(v6 - 1) = v91 | 0x80 )
            {
              v91 = i12;
              i12 >>= 7;
              ++v6;
            }
            *v6 = i12;
            v92 = (_BYTE *)(*(__int64 (__fastcall **)(__int64, _QWORD, google::protobuf::uint8 *))(*(_QWORD *)v89 + 128LL))(
                             v89,
                             v87,
                             v6 + 1);
            for ( i13 = (8 * a2) | 4; i13 > 0x7F; *(v92 - 1) = v94 | 0x80 )
            {
              v94 = i13;
              i13 >>= 7;
              ++v92;
            }
            *v92 = i13;
            v6 = v92 + 1;
            v86 = this->_anon_0.int64_value;
            ++v88;
          }
          while ( v88 < *(_DWORD *)(this->_anon_0.int64_value + 8) );
          break;
        case 0xBu:
          v95 = this->_anon_0.int64_value;
          if ( *(int *)(this->_anon_0.int64_value + 8) <= 0 )
            return a4;
          v96 = a3;
          v6 = a4;
          v97 = 0;
          do
          {
            v98 = *(_QWORD *)(*(_QWORD *)(v95 + 16) + 8LL * v97 + 8);
            for ( i14 = 8 * a2 + 2; i14 > 0x7F; *(v6 - 1) = v100 | 0x80 )
            {
              v100 = i14;
              i14 >>= 7;
              ++v6;
            }
            *v6 = i14;
            v101 = v6 + 1;
            for ( i15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v98 + 120LL))(v98);
                  i15 > 0x7F;
                  *(v101 - 1) = v103 | 0x80 )
            {
              v103 = i15;
              i15 >>= 7;
              ++v101;
            }
            *v101 = i15;
            ++v97;
            v6 = (google::protobuf::uint8 *)(*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v98 + 128LL))(
                                              v98,
                                              v96,
                                              v101 + 1);
            v95 = this->_anon_0.int64_value;
          }
          while ( v97 < *(_DWORD *)(this->_anon_0.int64_value + 8) );
          break;
        case 0xCu:
          v104 = this->_anon_0.int64_value;
          if ( *(int *)(this->_anon_0.int64_value + 8) <= 0 )
            return a4;
          v6 = a4;
          v105 = 0;
          do
          {
            v106 = *(const std::string **)(*(_QWORD *)(v104 + 16) + 8LL * v105 + 8);
            for ( i16 = 8 * a2 + 2; i16 > 0x7F; *(v6 - 1) = v108 | 0x80 )
            {
              v108 = i16;
              i16 >>= 7;
              ++v6;
            }
            *v6 = i16;
            ++v105;
            v6 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v106, v6 + 1);
            v104 = this->_anon_0.int64_value;
          }
          while ( v105 < *(_DWORD *)(this->_anon_0.int64_value + 8) );
          break;
        case 0xDu:
          v109 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value <= 0 )
            return a4;
          v110 = 8 * a2;
          v6 = a4;
          v111 = 0;
          do
          {
            v112 = *(_DWORD *)(*(_QWORD *)(v109 + 8) + 4LL * v111 + 8);
            for ( i17 = v110; i17 > 0x7F; *(v6 - 1) = v114 | 0x80 )
            {
              v114 = i17;
              i17 >>= 7;
              ++v6;
            }
            *v6 = i17;
            for ( i18 = v6 + 1; v112 > 0x7F; *(i18 - 1) = v116 | 0x80 )
            {
              v116 = v112;
              v112 >>= 7;
              ++i18;
            }
            *i18 = v112;
            v6 = i18 + 1;
            v109 = this->_anon_0.int64_value;
            ++v111;
          }
          while ( v111 < *(_DWORD *)this->_anon_0.int64_value );
          break;
        case 0xEu:
          v174 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value <= 0 )
            return a4;
          v175 = 8 * a2;
          v6 = a4;
          v176 = 0;
          do
          {
            v177 = *(int *)(*(_QWORD *)(v174 + 8) + 4LL * v176 + 8);
            for ( i19 = v175; i19 > 0x7F; *(v6 - 1) = v179 | 0x80 )
            {
              v179 = i19;
              i19 >>= 7;
              ++v6;
            }
            *v6 = i19;
            for ( i20 = v6 + 1; v177 > 0x7F; *(i20 - 1) = v181 | 0x80 )
            {
              v181 = v177;
              v177 >>= 7;
              ++i20;
            }
            *i20 = v177;
            v6 = i20 + 1;
            v174 = this->_anon_0.int64_value;
            ++v176;
          }
          while ( v176 < *(_DWORD *)this->_anon_0.int64_value );
          break;
        case 0xFu:
          v182 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value <= 0 )
            return a4;
          v6 = a4;
          v183 = 8 * a2 + 5;
          v184 = 0;
          do
          {
            v185 = *(_DWORD *)(*(_QWORD *)(v182 + 8) + 4LL * v184 + 8);
            for ( i21 = v183; i21 > 0x7F; *(v6 - 1) = v187 | 0x80 )
            {
              v187 = i21;
              i21 >>= 7;
              ++v6;
            }
            *v6 = i21;
            ++v184;
            v6 += 5;
            *((_DWORD *)v6 - 1) = v185;
            v182 = this->_anon_0.int64_value;
          }
          while ( v184 < *(_DWORD *)this->_anon_0.int64_value );
          break;
        case 0x10u:
          v137 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value <= 0 )
            return a4;
          v6 = a4;
          v138 = 8 * a2 + 1;
          v139 = 0;
          do
          {
            v140 = *(_QWORD *)(*(_QWORD *)(v137 + 8) + 8LL * v139 + 8);
            for ( i22 = v138; i22 > 0x7F; *(v6 - 1) = v142 | 0x80 )
            {
              v142 = i22;
              i22 >>= 7;
              ++v6;
            }
            *v6 = i22;
            ++v139;
            v6 += 9;
            *((_QWORD *)v6 - 1) = v140;
            v137 = this->_anon_0.int64_value;
          }
          while ( v139 < *(_DWORD *)this->_anon_0.int64_value );
          break;
        case 0x11u:
          v160 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value <= 0 )
            return a4;
          v161 = 8 * a2;
          v6 = a4;
          v162 = 0;
          do
          {
            v163 = *(_DWORD *)(*(_QWORD *)(v160 + 8) + 4LL * v162 + 8);
            for ( i23 = v161; i23 > 0x7F; *(v6 - 1) = v165 | 0x80 )
            {
              v165 = i23;
              i23 >>= 7;
              ++v6;
            }
            *v6 = i23;
            v166 = v6 + 1;
            for ( i24 = (v163 >> 31) ^ (2 * v163); i24 > 0x7F; *(v166 - 1) = v168 | 0x80 )
            {
              v168 = i24;
              i24 >>= 7;
              ++v166;
            }
            *v166 = i24;
            v6 = v166 + 1;
            v160 = this->_anon_0.int64_value;
            ++v162;
          }
          while ( v162 < *(_DWORD *)this->_anon_0.int64_value );
          break;
        case 0x12u:
          v188 = this->_anon_0.int64_value;
          if ( *(int *)this->_anon_0.int64_value <= 0 )
            return a4;
          v189 = 8 * a2;
          v6 = a4;
          v190 = 0;
          do
          {
            v191 = *(_QWORD *)(*(_QWORD *)(v188 + 8) + 8LL * v190 + 8);
            for ( i25 = v189; i25 > 0x7F; *(v6 - 1) = v193 | 0x80 )
            {
              v193 = i25;
              i25 >>= 7;
              ++v6;
            }
            *v6 = i25;
            v194 = v6 + 1;
            for ( i26 = (v191 >> 63) ^ (2 * v191); i26 > 0x7F; *(v194 - 1) = v196 | 0x80 )
            {
              v196 = i26;
              i26 >>= 7;
              ++v194;
            }
            *v194 = i26;
            v6 = v194 + 1;
            v188 = this->_anon_0.int64_value;
            ++v190;
          }
          while ( v190 < *(_DWORD *)this->_anon_0.int64_value );
          break;
        default:
          return a4;
      }
    }
  }
  else
  {
    v5 = *((_BYTE *)this + 10);
    v6 = a4;
    if ( (v5 & 1) == 0 )
    {
      switch ( this->type )
      {
        case 1u:
          v157 = 8 * a2 + 1;
          for ( i27 = this->_anon_0.int64_value; v157 > 0x7F; *(a4 - 1) = v159 | 0x80 )
          {
            v159 = v157;
            v157 >>= 7;
            ++a4;
          }
          *a4 = v157;
          v6 = a4 + 9;
          *(_QWORD *)(a4 + 1) = i27;
          return v6;
        case 2u:
          v134 = 8 * a2 + 5;
          for ( i28 = this->_anon_0.int32_value; v134 > 0x7F; *(a4 - 1) = v169 | 0x80 )
          {
            v169 = v134;
            v134 >>= 7;
            ++a4;
          }
          goto LABEL_139;
        case 3u:
          v170 = 8 * a2;
          for ( i29 = this->_anon_0.int64_value; v170 > 0x7F; *(a4 - 1) = v171 | 0x80 )
          {
            v171 = v170;
            v170 >>= 7;
            ++a4;
          }
          *a4 = v170;
          for ( i30 = a4 + 1; i29 > 0x7F; *(i30 - 1) = v172 | 0x80 )
          {
            v172 = i29;
            i29 >>= 7;
            ++i30;
          }
          goto LABEL_22;
        case 4u:
          v151 = 8 * a2;
          for ( i29 = this->_anon_0.int64_value; v151 > 0x7F; *(a4 - 1) = v152 | 0x80 )
          {
            v152 = v151;
            v151 >>= 7;
            ++a4;
          }
          *a4 = v151;
          for ( i30 = a4 + 1; i29 > 0x7F; *(i30 - 1) = v153 | 0x80 )
          {
            v153 = i29;
            i29 >>= 7;
            ++i30;
          }
          goto LABEL_22;
        case 5u:
          v154 = 8 * a2;
          for ( i29 = this->_anon_0.int32_value; v154 > 0x7F; *(a4 - 1) = v155 | 0x80 )
          {
            v155 = v154;
            v154 >>= 7;
            ++a4;
          }
          *a4 = v154;
          for ( i30 = a4 + 1; i29 > 0x7F; *(i30 - 1) = v156 | 0x80 )
          {
            v156 = i29;
            i29 >>= 7;
            ++i30;
          }
          goto LABEL_22;
        case 6u:
          v14 = 8 * a2 + 1;
          for ( i31 = this->_anon_0.int64_value; v14 > 0x7F; *(a4 - 1) = v130 | 0x80 )
          {
            v130 = v14;
            v14 >>= 7;
            ++a4;
          }
          goto LABEL_17;
        case 7u:
          v134 = 8 * a2 + 5;
          for ( i28 = this->_anon_0.int32_value; v134 > 0x7F; *(a4 - 1) = v173 | 0x80 )
          {
            v173 = v134;
            v134 >>= 7;
            ++a4;
          }
          goto LABEL_139;
        case 8u:
          v117 = 8 * a2;
          for ( i32 = this->_anon_0.bool_value; v117 > 0x7F; *(a4 - 1) = v119 | 0x80 )
          {
            v119 = v117;
            v117 >>= 7;
            ++a4;
          }
          *a4 = v117;
          v6 = a4 + 2;
          a4[1] = i32;
          return v6;
        case 9u:
          v120 = 8 * a2 + 2;
          for ( i33 = (const std::string *)this->_anon_0.int64_value; v120 > 0x7F; *(a4 - 1) = v122 | 0x80 )
          {
            v122 = v120;
            v120 >>= 7;
            ++a4;
          }
          goto LABEL_123;
        case 0xAu:
          v123 = 8 * a2;
          v124 = this->_anon_0.int64_value;
          for ( i34 = (8 * a2) | 3; i34 > 0x7F; *(a4 - 1) = v126 | 0x80 )
          {
            v126 = i34;
            i34 >>= 7;
            ++a4;
          }
          *a4 = i34;
          v127 = (_BYTE *)(*(__int64 (__fastcall **)(google::protobuf::int64, _QWORD, unsigned __int8 *))(*(_QWORD *)v124 + 128LL))(
                            v124,
                            0LL,
                            a4 + 1);
          for ( i35 = v123 | 4; i35 > 0x7F; *(v127 - 1) = v129 | 0x80 )
          {
            v129 = i35;
            i35 >>= 7;
            ++v127;
          }
          *v127 = i35;
          return v127 + 1;
        case 0xBu:
          v147 = a3;
          if ( (v5 & 0x10) != 0 )
          {
            v148 = this->_anon_0.int64_value;
            v149 = *(_QWORD *)this->_anon_0.int64_value;
            v150 = *(google::protobuf::uint8 *(__fastcall **)(const google::protobuf::internal::ExtensionSet::LazyMessageExtension *const, int, bool, google::protobuf::uint8 *))(v149 + 136);
            if ( v150 == google::protobuf::internal::ExtensionSet::LazyMessageExtension::InternalWriteMessageToArray )
              return (google::protobuf::uint8 *)(*(__int64 (__fastcall **)(google::protobuf::int64, __int64, unsigned __int8 *))(v149 + 128))(
                                                  v148,
                                                  a2,
                                                  a4);
            else
              return (google::protobuf::uint8 *)((__int64 (__fastcall *)(google::protobuf::int64, __int64, _QWORD))v150)(
                                                  v148,
                                                  a2,
                                                  a3);
          }
          else
          {
            v249 = 8 * a2 + 2;
            for ( i36 = this->_anon_0.int64_value; v249 > 0x7F; *(a4 - 1) = v251 | 0x80 )
            {
              v251 = v249;
              v249 >>= 7;
              ++a4;
            }
            *a4 = v249;
            v252 = a4 + 1;
            for ( i37 = (*(__int64 (__fastcall **)(google::protobuf::int64))(*(_QWORD *)i36 + 120LL))(i36);
                  i37 > 0x7F;
                  *(v252 - 1) = v254 | 0x80 )
            {
              v254 = i37;
              i37 >>= 7;
              ++v252;
            }
            *v252 = i37;
            return (google::protobuf::uint8 *)(*(__int64 (__fastcall **)(google::protobuf::int64, _QWORD, unsigned __int8 *))(*(_QWORD *)i36 + 128LL))(
                                                i36,
                                                v147,
                                                v252 + 1);
          }
        case 0xCu:
          v120 = 8 * a2 + 2;
          for ( i33 = (const std::string *)this->_anon_0.int64_value; v120 > 0x7F; *(a4 - 1) = v143 | 0x80 )
          {
            v143 = v120;
            v120 >>= 7;
            ++a4;
          }
LABEL_123:
          *a4 = v120;
          return google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(i33, a4 + 1);
        case 0xDu:
          v144 = 8 * a2;
          for ( LODWORD(i29) = this->_anon_0.int32_value; v144 > 0x7F; *(a4 - 1) = v145 | 0x80 )
          {
            v145 = v144;
            v144 >>= 7;
            ++a4;
          }
          *a4 = v144;
          for ( i30 = a4 + 1; (unsigned int)i29 > 0x7F; *(i30 - 1) = v146 | 0x80 )
          {
            v146 = i29;
            LODWORD(i29) = (unsigned int)i29 >> 7;
            ++i30;
          }
          goto LABEL_22;
        case 0xEu:
          v131 = 8 * a2;
          for ( i29 = this->_anon_0.int32_value; v131 > 0x7F; *(a4 - 1) = v132 | 0x80 )
          {
            v132 = v131;
            v131 >>= 7;
            ++a4;
          }
          *a4 = v131;
          for ( i30 = a4 + 1; i29 > 0x7F; *(i30 - 1) = v133 | 0x80 )
          {
            v133 = i29;
            i29 >>= 7;
            ++i30;
          }
          goto LABEL_22;
        case 0xFu:
          v134 = 8 * a2 + 5;
          for ( i28 = this->_anon_0.int32_value; v134 > 0x7F; *(a4 - 1) = v136 | 0x80 )
          {
            v136 = v134;
            v134 >>= 7;
            ++a4;
          }
LABEL_139:
          *a4 = v134;
          v6 = a4 + 5;
          *(_DWORD *)(a4 + 1) = i28;
          return v6;
        case 0x10u:
          v14 = 8 * a2 + 1;
          for ( i31 = this->_anon_0.int64_value; v14 > 0x7F; *(a4 - 1) = v16 | 0x80 )
          {
            v16 = v14;
            v14 >>= 7;
            ++a4;
          }
LABEL_17:
          *a4 = v14;
          v6 = a4 + 9;
          *(_QWORD *)(a4 + 1) = i31;
          return v6;
        case 0x11u:
          v23 = 8 * a2;
          for ( i38 = this->_anon_0.int32_value; v23 > 0x7F; *(a4 - 1) = v25 | 0x80 )
          {
            v25 = v23;
            v23 >>= 7;
            ++a4;
          }
          *a4 = v23;
          i30 = a4 + 1;
          for ( LODWORD(i29) = (i38 >> 31) ^ (2 * i38); (unsigned int)i29 > 0x7F; *(i30 - 1) = v26 | 0x80 )
          {
            v26 = i29;
            LODWORD(i29) = (unsigned int)i29 >> 7;
            ++i30;
          }
          goto LABEL_22;
        case 0x12u:
          v17 = 8 * a2;
          for ( i39 = this->_anon_0.int64_value; v17 > 0x7F; *(a4 - 1) = v19 | 0x80 )
          {
            v19 = v17;
            v17 >>= 7;
            ++a4;
          }
          *a4 = v17;
          i30 = a4 + 1;
          for ( i29 = (i39 >> 63) ^ (2 * i39); i29 > 0x7F; *(i30 - 1) = v22 | 0x80 )
          {
            v22 = i29;
            i29 >>= 7;
            ++i30;
          }
LABEL_22:
          *i30 = i29;
          v6 = i30 + 1;
          break;
        default:
          return a4;
      }
    }
  }
  return v6;
};

// Line 496: range 000000000C732018-000000000C732025
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::Extension::InternalSerializeFieldWithCachedSizesToArray(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 582: range 000000000C945650-000000000C9457BB
google::protobuf::uint8 *__fastcall google::protobuf::internal::ExtensionSet::Extension::InternalSerializeMessageSetItemWithCachedSizesToArray(
        google::protobuf::internal::ExtensionSet::Extension *this,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned __int8 *a4)
{
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::uint8 *result; // rax
  unsigned __int8 *v9; // rdx
  char v10; // al
  google::protobuf::int64 int64_value; // rdi
  unsigned __int8 *v12; // rdx
  __int64 v13; // rax
  google::protobuf::uint8 *(__fastcall *v14)(const google::protobuf::internal::ExtensionSet::LazyMessageExtension *const, int, bool, google::protobuf::uint8 *); // r8
  google::protobuf::uint8 *v15; // rax
  google::protobuf::int64 v16; // rbp
  _BYTE *v17; // r12
  unsigned int i; // eax
  char v19; // dl
  google::protobuf::internal::LogFinisher v20; // [rsp+Fh] [rbp-69h] BYREF
  google::protobuf::internal::LogMessage_0 v21; // [rsp+10h] [rbp-68h] BYREF

  if ( *(_WORD *)&this->type == 11 )
  {
    result = a4;
    if ( (*((_BYTE *)this + 10) & 1) == 0 )
    {
      v9 = a4 + 2;
      for ( *(_WORD *)a4 = 4107; a2 > 0x7F; *(v9 - 1) = v10 | 0x80 )
      {
        v10 = a2;
        a2 >>= 7;
        ++v9;
      }
      *v9 = a2;
      if ( (*((_BYTE *)this + 10) & 0x10) != 0 )
      {
        int64_value = this->_anon_0.int64_value;
        v12 = v9 + 1;
        v13 = *(_QWORD *)this->_anon_0.int64_value;
        v14 = *(google::protobuf::uint8 *(__fastcall **)(const google::protobuf::internal::ExtensionSet::LazyMessageExtension *const, int, bool, google::protobuf::uint8 *))(v13 + 136);
        if ( v14 == google::protobuf::internal::ExtensionSet::LazyMessageExtension::InternalWriteMessageToArray )
          v15 = (google::protobuf::uint8 *)(*(__int64 (__fastcall **)(google::protobuf::int64, __int64, unsigned __int8 *))(v13 + 128))(
                                             int64_value,
                                             3LL,
                                             v12);
        else
          v15 = v14(
                  (const google::protobuf::internal::ExtensionSet::LazyMessageExtension *const)int64_value,
                  3,
                  a3,
                  v12);
      }
      else
      {
        v16 = this->_anon_0.int64_value;
        v9[1] = 26;
        v17 = v9 + 2;
        for ( i = (*(__int64 (__fastcall **)(google::protobuf::int64))(*(_QWORD *)v16 + 120LL))(v16);
              i > 0x7F;
              *(v17 - 1) = v19 | 0x80 )
        {
          v19 = i;
          i >>= 7;
          ++v17;
        }
        *v17 = i;
        v15 = (google::protobuf::uint8 *)(*(__int64 (__fastcall **)(google::protobuf::int64, _QWORD, _BYTE *))(*(_QWORD *)v16 + 128LL))(
                                           v16,
                                           a3,
                                           v17 + 1);
      }
      *v15 = 12;
      return v15 + 1;
    }
  }
  else
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v21,
      LOGLEVEL_WARNING_0,
      "google/protobuf/extension_set_heavy.cc",
      585);
    v7 = google::protobuf::internal::LogMessage::operator<<(&v21, "Invalid message set extension.");
    google::protobuf::internal::LogFinisher::operator=(&v20, v7);
    google::protobuf::internal::LogMessage::~LogMessage(&v21);
    return google::protobuf::internal::ExtensionSet::Extension::InternalSerializeFieldWithCachedSizesToArray(
             this,
             a2,
             a3,
             a4);
  }
  return result;
};

// Line 585: range 000000000C73202A-000000000C732037
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::Extension::InternalSerializeMessageSetItemWithCachedSizesToArray(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        google::protobuf::internal::LogMessage_0 a8)
{
  struct _Unwind_Exception *v8; // rbp

  google::protobuf::internal::LogMessage::~LogMessage(&a8);
  _Unwind_Resume(v8);
};

// Line 617: range 000000000C945850-000000000C945869
bool __fastcall google::protobuf::internal::ExtensionSet::ParseFieldMaybeLazily(
        google::protobuf::internal::ExtensionSet *const this,
        int wire_type,
        int field_number,
        google::protobuf::io::CodedInputStream *input,
        google::protobuf::internal::ExtensionFinder *extension_finder,
        google::protobuf::internal::MessageSetFieldSkipper *field_skipper)
{
  return google::protobuf::internal::ExtensionSet::ParseField(
           this,
           wire_type | (8 * field_number),
           input,
           extension_finder,
           field_skipper);
};

// Line 625: range 000000000C945C40-000000000C945CDF
bool __fastcall google::protobuf::internal::ExtensionSet::ParseMessageSet(
        google::protobuf::internal::ExtensionSet *const this,
        google::protobuf::io::CodedInputStream *input,
        google::protobuf::internal::ExtensionFinder *extension_finder,
        google::protobuf::internal::MessageSetFieldSkipper *field_skipper)
{
  const google::protobuf::uint8 *buffer; // rax
  google::protobuf::uint32 TagFallback; // esi

LABEL_1:
  buffer = input->buffer_;
  if ( input->buffer_ >= input->buffer_end_ )
    goto LABEL_11;
  while ( 1 )
  {
    TagFallback = *buffer;
    if ( *(char *)buffer < 0 )
      goto LABEL_3;
    input->buffer_ = buffer + 1;
    while ( 2 )
    {
      input->last_tag_ = TagFallback;
      if ( !TagFallback )
        return 1;
      if ( TagFallback == 11 )
      {
        if ( !(unsigned __int8)google::protobuf::internal::ExtensionSet::ParseMessageSetItem(
                                 this,
                                 input,
                                 extension_finder,
                                 field_skipper) )
          return 0;
        goto LABEL_1;
      }
      if ( !google::protobuf::internal::ExtensionSet::ParseField(
              this,
              TagFallback,
              input,
              extension_finder,
              field_skipper) )
        return 0;
      buffer = input->buffer_;
      if ( input->buffer_ >= input->buffer_end_ )
      {
LABEL_11:
        TagFallback = 0;
LABEL_3:
        TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(input, TagFallback);
        continue;
      }
      break;
    }
  }
};

// Line 646: range 000000000C945DE0-000000000C945E35
__int64 __fastcall google::protobuf::internal::ExtensionSet::ParseMessageSet(
        google::protobuf::internal::ExtensionSet *this,
        google::protobuf::io::CodedInputStream *a2,
        const google::protobuf::MessageLite *a3)
{
  unsigned int v3; // eax
  unsigned int v4; // r12d
  google::protobuf::internal::MessageSetFieldSkipper v6; // [rsp+0h] [rbp-28h] BYREF
  google::protobuf::internal::ExtensionFinder extension_finder; // [rsp+10h] [rbp-18h] BYREF
  const google::protobuf::MessageLite *v8; // [rsp+18h] [rbp-10h]

  v8 = a3;
  v6.unknown_fields_ = 0LL;
  v6._vptr_FieldSkipper = (int (**)(...))off_1A181608;
  extension_finder._vptr_ExtensionFinder = (int (**)(...))off_1A1788D0;
  LOBYTE(v3) = google::protobuf::internal::ExtensionSet::ParseMessageSet(this, a2, &extension_finder, &v6);
  v4 = v3;
  extension_finder._vptr_ExtensionFinder = (int (**)(...))off_1A1788D0;
  google::protobuf::internal::ExtensionFinder::~ExtensionFinder(&extension_finder);
  return v4;
};

// Line 654: range 000000000C945870-000000000C945C2E
__int64 __fastcall google::protobuf::internal::ExtensionSet::ParseMessageSetItem(
        google::protobuf::internal::ExtensionSet *this,
        google::protobuf::io::CodedInputStream *a2,
        google::protobuf::internal::ExtensionFinder *a3,
        google::protobuf::internal::MessageSetFieldSkipper *a4)
{
  google::protobuf::uint32 v4; // r13d
  const google::protobuf::uint8 *v7; // rax
  google::protobuf::uint32 TagFallback; // esi
  char v9; // al
  unsigned int v10; // ebp
  const google::protobuf::uint8 *v12; // rax
  google::protobuf::uint32 v13; // ebp
  google::protobuf::int64 v14; // rax
  int buffer_end; // ecx
  google::protobuf::uint8 *i; // rax
  char v17; // dl
  int v18; // eax
  const google::protobuf::uint8 *v19; // rax
  google::protobuf::int64 Varint32Fallback; // rax
  unsigned int v21; // eax
  google::protobuf::io::StringOutputStream v23; // [rsp+10h] [rbp-D8h] BYREF
  std::string target; // [rsp+20h] [rbp-C8h] BYREF
  std::string buffer; // [rsp+40h] [rbp-A8h] BYREF
  google::protobuf::io::CodedInputStream v26; // [rsp+60h] [rbp-88h] BYREF

  v4 = 0;
  target._M_dataplus._M_p = target._anon_0._M_local_buf;
  target._M_string_length = 0LL;
  target._anon_0._M_local_buf[0] = 0;
LABEL_2:
  v7 = a2->buffer_;
  if ( a2->buffer_end_ <= a2->buffer_ )
    goto LABEL_27;
  while ( 1 )
  {
    TagFallback = *v7;
    if ( *(char *)v7 < 0 )
      goto LABEL_4;
    a2->buffer_ = v7 + 1;
LABEL_5:
    if ( !TagFallback )
      goto LABEL_11;
    if ( TagFallback == 16 )
    {
      v19 = a2->buffer_;
      if ( a2->buffer_ < a2->buffer_end_ )
      {
        v4 = *v19;
        if ( *(char *)v19 >= 0 )
        {
          a2->buffer_ = v19 + 1;
        }
        else
        {
LABEL_30:
          Varint32Fallback = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v4);
          v4 = Varint32Fallback;
          if ( Varint32Fallback < 0 )
            goto LABEL_11;
        }
        if ( target._M_string_length )
        {
          v26.total_bytes_read_ = target._M_string_length;
          v26.current_limit_ = target._M_string_length;
          v26.buffer_ = (const google::protobuf::uint8 *)target._M_dataplus._M_p;
          v26.buffer_end_ = (const google::protobuf::uint8 *)&target._M_dataplus._M_p[SLODWORD(target._M_string_length)];
          *(_QWORD *)&v26.buffer_size_after_limit_ = 0x7FFFFFFF00000000LL;
          *(_WORD *)&v26.legitimate_message_end_ = 0;
          v26.input_ = 0LL;
          *(_QWORD *)&v26.overflow_bytes_ = 0LL;
          v26.recursion_budget_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
          v26.recursion_limit_ = google::protobuf::io::CodedInputStream::default_recursion_limit_;
          v26.disable_strict_correctness_enforcement_ = 1;
          v26.extension_pool_ = 0LL;
          v26.extension_factory_ = 0LL;
          LOBYTE(v21) = google::protobuf::internal::ExtensionSet::ParseField(this, 8 * v4 + 2, &v26, a3, a4);
          v10 = v21;
          if ( !(_BYTE)v21 )
          {
            google::protobuf::io::CodedInputStream::~CodedInputStream(&v26);
            goto LABEL_13;
          }
          target._M_string_length = 0LL;
          *target._M_dataplus._M_p = 0;
          google::protobuf::io::CodedInputStream::~CodedInputStream(&v26);
        }
        goto LABEL_2;
      }
      v4 = 0;
      goto LABEL_30;
    }
    if ( TagFallback != 26 )
    {
      if ( TagFallback == 12 )
      {
        v10 = 1;
        goto LABEL_13;
      }
      v9 = (*((__int64 (__fastcall **)(google::protobuf::internal::MessageSetFieldSkipper *, google::protobuf::io::CodedInputStream *, _QWORD))a4->_vptr_FieldSkipper
            + 2))(
             a4,
             a2,
             TagFallback);
LABEL_10:
      if ( !v9 )
        goto LABEL_11;
      goto LABEL_2;
    }
    if ( v4 )
    {
      v9 = google::protobuf::internal::ExtensionSet::ParseField(this, 8 * v4 + 2, a2, a3, a4);
      goto LABEL_10;
    }
    buffer._anon_0._M_local_buf[0] = 0;
    buffer._M_dataplus._M_p = buffer._anon_0._M_local_buf;
    v12 = a2->buffer_;
    buffer._M_string_length = 0LL;
    if ( v12 >= a2->buffer_end_ )
    {
      v13 = 0;
    }
    else
    {
      v13 = *v12;
      if ( *(char *)v12 >= 0 )
      {
        a2->buffer_ = v12 + 1;
        goto LABEL_20;
      }
    }
    v14 = google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, v13);
    v13 = v14;
    if ( v14 < 0 )
      break;
LABEL_20:
    if ( !google::protobuf::io::CodedInputStream::ReadString(a2, &buffer, v13) )
      break;
    google::protobuf::io::StringOutputStream::StringOutputStream(&v23, &target);
    google::protobuf::io::CodedOutputStream::CodedOutputStream(
      (google::protobuf::io::CodedOutputStream *const)&v26,
      &v23);
    if ( SLODWORD(v26.input_) <= 4 )
    {
      google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(
        (google::protobuf::io::CodedOutputStream *const)&v26,
        v13);
    }
    else
    {
      buffer_end = (int)v26.buffer_end_;
      for ( i = (google::protobuf::uint8 *)v26.buffer_end_; v13 > 0x7F; *(i - 1) = v17 | 0x80 )
      {
        v17 = v13;
        v13 >>= 7;
        ++i;
      }
      *i = v13;
      v18 = (_DWORD)i + 1 - buffer_end;
      LODWORD(v26.input_) -= v18;
      v26.buffer_end_ += v18;
    }
    google::protobuf::io::CodedOutputStream::WriteRaw(
      (google::protobuf::io::CodedOutputStream *const)&v26,
      buffer._M_dataplus._M_p,
      buffer._M_string_length);
    google::protobuf::io::CodedOutputStream::~CodedOutputStream((google::protobuf::io::CodedOutputStream *const)&v26);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer._M_dataplus._M_p == &buffer._anon_0 )
      goto LABEL_2;
    operator delete(buffer._M_dataplus._M_p);
    v7 = a2->buffer_;
    if ( a2->buffer_end_ <= a2->buffer_ )
    {
LABEL_27:
      TagFallback = 0;
LABEL_4:
      TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2, TagFallback);
      goto LABEL_5;
    }
  }
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)buffer._M_dataplus._M_p == &buffer._anon_0 )
  {
LABEL_11:
    v10 = 0;
  }
  else
  {
    operator delete(buffer._M_dataplus._M_p);
    v10 = 0;
  }
LABEL_13:
  if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)target._M_dataplus._M_p != &target._anon_0 )
    operator delete(target._M_dataplus._M_p);
  return v10;
};

// Line 684: range 000000000C73203C-000000000C732056
void __fastcall __noreturn google::protobuf::internal::ExtensionSet::ParseMessageSetItem(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10)
{
  struct _Unwind_Exception *v10; // rbp
  void *v11; // r14
  google::protobuf::io::CodedInputStream *v12; // r15

  google::protobuf::io::CodedInputStream::~CodedInputStream(v12);
  if ( a10 != v11 )
    operator delete(a10);
  _Unwind_Resume(v10);
};

// Line 732: range 000000000C945E40-000000000C945F19
void __fastcall google::protobuf::internal::ExtensionSet::Extension::SerializeMessageSetItemWithCachedSizes(
        const google::protobuf::internal::ExtensionSet::Extension *const this,
        int number,
        google::protobuf::io::CodedOutputStream *output)
{
  double v3; // xmm0_8
  double v4; // xmm1_8

  if ( *(_WORD *)&this->type == 11 )
  {
    if ( (*((_BYTE *)this + 10) & 1) == 0 )
    {
      if ( output->buffer_size_ <= 4 )
      {
        google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, 0xBu);
      }
      else
      {
        *output->buffer_++ = 11;
        --output->buffer_size_;
      }
      google::protobuf::internal::WireFormatLite::WriteUInt32(2, number, output);
      if ( (*((_BYTE *)this + 10) & 0x10) != 0 )
        (*(void (__fastcall **)(google::protobuf::int64, __int64, google::protobuf::io::CodedOutputStream *))(*(_QWORD *)this->_anon_0.int64_value + 120LL))(
          this->_anon_0.int64_value,
          3LL,
          output);
      else
        google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(3, this->_anon_0.message_value, output);
      if ( output->buffer_size_ <= 4 )
      {
        google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, 0xCu);
      }
      else
      {
        *output->buffer_++ = 12;
        --output->buffer_size_;
      }
    }
  }
  else
  {
    google::protobuf::internal::ExtensionSet::Extension::SerializeFieldWithCachedSizes(
      (google::protobuf::internal::ExtensionSet::Extension *)this,
      (unsigned int)number,
      output,
      v3,
      v4);
  }
};

// Line 764: range 000000000C945F20-000000000C945F8E
size_t __fastcall google::protobuf::internal::ExtensionSet::Extension::MessageSetItemByteSize(
        const google::protobuf::internal::ExtensionSet::Extension *const this,
        int number)
{
  size_t result; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // eax

  if ( this->type != 11 || this->is_repeated )
    return google::protobuf::internal::ExtensionSet::Extension::ByteSize(
             (google::protobuf::internal::ExtensionSet::Extension *)this,
             number);
  result = 0LL;
  if ( (*((_BYTE *)this + 10) & 1) == 0 )
  {
    _BitScanReverse((unsigned int *)&number, number | 1);
    v3 = *(_QWORD *)this->_anon_0.int64_value;
    if ( (*((_BYTE *)this + 10) & 0x10) != 0 )
      v4 = (*(int (**)(void))(v3 + 80))();
    else
      v4 = (*(int (**)(void))(v3 + 96))();
    _BitScanReverse(&v5, v4 | 1);
    return v4
         + google::protobuf::internal::WireFormatLite::kMessageSetItemTagsSize
         + ((unsigned int)(9 * number + 73) >> 6)
         + ((9 * v5 + 73) >> 6);
  }
  return result;
};

// Line 792: range 000000000C945F90-000000000C945FCB
void __fastcall google::protobuf::internal::ExtensionSet::SerializeMessageSetWithCachedSizes(
        const google::protobuf::internal::ExtensionSet *const this,
        google::protobuf::io::CodedOutputStream *output)
{
  std::_Rb_tree_node_base::_Base_ptr i; // rbp

  for ( i = this->extensions_._M_t._M_impl._M_header._M_left;
        i != (std::_Rb_tree_node_base::_Base_ptr)&this->extensions_._M_t._M_impl.std::_Rb_tree_header;
        i = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(i) )
  {
    google::protobuf::internal::ExtensionSet::Extension::SerializeMessageSetItemWithCachedSizes(
      (const google::protobuf::internal::ExtensionSet::Extension *const)&i[1]._M_parent,
      i[1]._M_color,
      output);
  }
};

// Line 799: range 000000000C945FD0-000000000C94600E
size_t __fastcall google::protobuf::internal::ExtensionSet::MessageSetByteSize(
        const google::protobuf::internal::ExtensionSet *const this)
{
  size_t v1; // r12
  std::_Rb_tree_node_base::_Base_ptr i; // rbp

  v1 = 0LL;
  for ( i = this->extensions_._M_t._M_impl._M_header._M_left;
        i != (std::_Rb_tree_node_base::_Base_ptr)&this->extensions_._M_t._M_impl.std::_Rb_tree_header;
        i = (std::_Rb_tree_node_base::_Base_ptr)std::_Rb_tree_increment(i) )
  {
    v1 += google::protobuf::internal::ExtensionSet::Extension::MessageSetItemByteSize(
            (const google::protobuf::internal::ExtensionSet::Extension *const)&i[1]._M_parent,
            i[1]._M_color);
  }
  return v1;
};

// Line 812: range 000000000C747000-000000000C747021
void __cdecl GLOBAL__sub_I__ZN6google8protobuf8internal22MessageSetFieldSkipper19SkipMessageSetFieldEPNS0_2io16CodedInputStreamEi()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
