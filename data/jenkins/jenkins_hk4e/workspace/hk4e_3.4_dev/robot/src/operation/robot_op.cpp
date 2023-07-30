// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/operation/robot_op.cpp

// Line 54: range 000000000043ECAA-000000000043ECC5
int __cdecl randomRepeatedLen(int max_len)
{
  return common::tools::RandomUtils::rand<int>(0, max_len);
};

// Line 59: range 000000000043ECC6-00000000004402EC
void __cdecl Robot::getFilledMessage(Robot *const this, google::protobuf::Message *message_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  unsigned __int64 v5; // rax
  int v6; // eax
  unsigned __int64 v7; // rax
  void (__fastcall *v8)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, __int64); // r14
  std::vector<std::string>::size_type v9; // rax
  const std::string *v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  void (__fastcall *v13)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, __int64); // r14
  std::vector<std::string>::size_type v14; // rax
  const std::string *v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  void (__fastcall *v18)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, __int64); // r14
  std::vector<std::string>::size_type v19; // rax
  const std::string *v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  void (__fastcall *v23)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, __int64); // r14
  std::vector<std::string>::size_type v24; // rax
  const std::string *v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  void (__fastcall *v28)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, __int64); // r14
  std::vector<std::string>::size_type v29; // rax
  const std::string *v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  void (__fastcall *v33)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, __int64); // r14
  std::vector<std::string>::size_type v34; // rax
  const std::string *v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  void (__fastcall *v38)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, unsigned __int64); // r14
  std::vector<std::string>::size_type v39; // rax
  const std::string *v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  void (__fastcall *v43)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, unsigned __int64); // r14
  std::vector<std::string>::size_type v44; // rax
  const std::string *v45; // rax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  void (__fastcall *v48)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, double); // r14
  std::vector<std::string>::size_type v49; // rax
  const std::string *v50; // rax
  double v51; // xmm0_8
  unsigned __int64 v52; // rax
  void (__fastcall *v53)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, double); // r14
  std::vector<std::string>::size_type v54; // rax
  const std::string *v55; // rax
  double v56; // xmm0_8
  unsigned __int64 v57; // rax
  void (__fastcall *v58)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, float); // r14
  std::vector<std::string>::size_type v59; // rax
  const std::string *v60; // rax
  float v61; // xmm0_4
  unsigned __int64 v62; // rax
  void (__fastcall *v63)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, float); // r14
  std::vector<std::string>::size_type v64; // rax
  const std::string *v65; // rax
  float v66; // xmm0_4
  unsigned __int64 v67; // rax
  void (__fastcall *v68)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, _BOOL8); // r14
  _BOOL8 v69; // rcx
  unsigned __int64 v70; // rax
  void (__fastcall *v71)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, _BOOL8); // r14
  _BOOL8 v72; // rcx
  unsigned __int64 v73; // rax
  void (__fastcall *v74)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, const google::protobuf::EnumValueDescriptor *); // r14
  int v75; // edx
  const google::protobuf::EnumValueDescriptor *v76; // rcx
  unsigned __int64 v77; // rax
  void (__fastcall *v78)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, const google::protobuf::EnumValueDescriptor *); // r14
  int v79; // edx
  const google::protobuf::EnumValueDescriptor *v80; // rcx
  unsigned __int64 v81; // rax
  void (__fastcall *v82)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, std::vector<std::string>::reference); // r14
  std::vector<std::string>::size_type v83; // rax
  std::vector<std::string>::reference v84; // rcx
  unsigned __int64 v85; // rax
  void (__fastcall *v86)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, std::vector<std::string>::reference); // r14
  std::vector<std::string>::size_type v87; // rax
  std::vector<std::string>::reference v88; // rcx
  unsigned __int64 v89; // rax
  google::protobuf::Message *v90; // rdx
  unsigned __int64 v91; // rax
  google::protobuf::Message *v92; // rdx
  google::protobuf::FieldDescriptor::CppType v93; // eax
  unsigned __int64 v94; // [rsp+8h] [rbp-198h]
  unsigned __int64 v95; // [rsp+8h] [rbp-198h]
  unsigned __int64 v96; // [rsp+8h] [rbp-198h]
  unsigned __int64 v97; // [rsp+8h] [rbp-198h]
  unsigned __int64 v98; // [rsp+8h] [rbp-198h]
  unsigned __int64 v99; // [rsp+8h] [rbp-198h]
  unsigned __int64 v100; // [rsp+8h] [rbp-198h]
  unsigned __int64 v101; // [rsp+8h] [rbp-198h]
  unsigned __int64 v102; // [rsp+8h] [rbp-198h]
  unsigned __int64 v103; // [rsp+8h] [rbp-198h]
  unsigned __int64 v104; // [rsp+8h] [rbp-198h]
  unsigned __int64 v105; // [rsp+8h] [rbp-198h]
  unsigned __int64 v106; // [rsp+8h] [rbp-198h]
  unsigned __int64 v107; // [rsp+8h] [rbp-198h]
  int i; // [rsp+24h] [rbp-17Ch]
  int j; // [rsp+28h] [rbp-178h]
  int j_0; // [rsp+2Ch] [rbp-174h]
  int j_1; // [rsp+30h] [rbp-170h]
  int j_2; // [rsp+34h] [rbp-16Ch]
  int j_3; // [rsp+38h] [rbp-168h]
  int j_4; // [rsp+3Ch] [rbp-164h]
  int j_5; // [rsp+40h] [rbp-160h]
  int j_6; // [rsp+44h] [rbp-15Ch]
  int j_7; // [rsp+48h] [rbp-158h]
  int j_8; // [rsp+4Ch] [rbp-154h]
  std::uniform_int_distribution<int>::result_type rand_field_index; // [rsp+50h] [rbp-150h]
  int len_8; // [rsp+54h] [rbp-14Ch]
  int len_7; // [rsp+58h] [rbp-148h]
  int value_count; // [rsp+5Ch] [rbp-144h]
  int len_6; // [rsp+60h] [rbp-140h]
  int len_5; // [rsp+64h] [rbp-13Ch]
  int len_4; // [rsp+68h] [rbp-138h]
  int len_3; // [rsp+6Ch] [rbp-134h]
  int len_2; // [rsp+70h] [rbp-130h]
  int len_1; // [rsp+74h] [rbp-12Ch]
  int len_0; // [rsp+78h] [rbp-128h]
  int len; // [rsp+7Ch] [rbp-124h]
  google::protobuf::FieldDescriptor *field_desc; // [rsp+80h] [rbp-120h]
  const google::protobuf::Descriptor *desc; // [rsp+88h] [rbp-118h]
  const google::protobuf::Reflection *reflection; // [rsp+90h] [rbp-110h]
  const google::protobuf::EnumDescriptor *enum_desc; // [rsp+A8h] [rbp-F8h]
  common::milog::MiLogStream v135; // [rsp+B0h] [rbp-F0h] BYREF
  char v136[208]; // [rsp+D0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v136;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 8 18 oneofDescriptor:66 80 48 22 processed_oneof_set:62";
  *(_QWORD *)(v2 + 16) = Robot::getFilledMessage;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  desc = google::protobuf::Message::GetDescriptor(message_ptr);
  if ( *(_BYTE *)(((unsigned __int64)message_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(message_ptr);
  v5 = (unsigned __int64)(message_ptr->_vptr_MessageLite + 23);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8(message_ptr->_vptr_MessageLite + 23);
  reflection = (const google::protobuf::Reflection *)(*(__int64 (__fastcall **)(google::protobuf::Message *))v5)(message_ptr);
  std::set<google::protobuf::OneofDescriptor const*>::set((std::set<const google::protobuf::OneofDescriptor*> *const)(v2 + 80));
  for ( i = 0; i < google::protobuf::Descriptor::field_count(desc); ++i )
  {
    field_desc = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::field(desc, i);
    *(_QWORD *)(v2 + 48) = google::protobuf::FieldDescriptor::containing_oneof(field_desc);
    if ( *(_QWORD *)(v2 + 48) )
    {
      if ( std::set<google::protobuf::OneofDescriptor const*>::contains(
             (const std::set<const google::protobuf::OneofDescriptor*> *const)(v2 + 80),
             (const std::set<const google::protobuf::OneofDescriptor*>::key_type *)(v2 + 48)) )
      {
        continue;
      }
      v6 = google::protobuf::OneofDescriptor::field_count(*(const google::protobuf::OneofDescriptor *const *)(v2 + 48));
      rand_field_index = common::tools::RandomUtils::rand<int>(0, v6 - 1);
      field_desc = (google::protobuf::FieldDescriptor *)google::protobuf::OneofDescriptor::field(
                                                          *(const google::protobuf::OneofDescriptor *const *)(v2 + 48),
                                                          rand_field_index);
      std::set<google::protobuf::OneofDescriptor const*>::insert(
        (std::set<const google::protobuf::OneofDescriptor*> *const)(v2 + 80),
        (const std::set<const google::protobuf::OneofDescriptor*>::value_type *)(v2 + 48));
    }
    switch ( google::protobuf::FieldDescriptor::cpp_type(field_desc) )
    {
      case CPPTYPE_INT32_0:
        if ( google::protobuf::FieldDescriptor::is_repeated(field_desc) )
        {
          len = randomRepeatedLen(1000);
          for ( j = 0; j < len; ++j )
          {
            if ( *(_BYTE *)(((unsigned __int64)reflection >> 3) + 0x7FFF8000) )
              __asan_report_load8(reflection);
            v7 = (unsigned __int64)(reflection->_vptr_Reflection + 65);
            if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
              v7 = __asan_report_load8(reflection->_vptr_Reflection + 65);
            v8 = *(void (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, __int64))v7;
            v94 = rand();
            v9 = std::vector<std::string>::size(&this->int32Vector);
            v10 = std::vector<std::string>::operator[](&this->int32Vector, v94 % v9);
            v11 = (unsigned int)std::stol(v10, 0LL, 10);
            v8(reflection, message_ptr, field_desc, v11);
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)reflection >> 3) + 0x7FFF8000) )
            __asan_report_load8(reflection);
          v12 = (unsigned __int64)(reflection->_vptr_Reflection + 29);
          if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
            v12 = __asan_report_load8(reflection->_vptr_Reflection + 29);
          v13 = *(void (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, __int64))v12;
          v95 = rand();
          v14 = std::vector<std::string>::size(&this->int32Vector);
          v15 = std::vector<std::string>::operator[](&this->int32Vector, v95 % v14);
          v16 = (unsigned int)std::stol(v15, 0LL, 10);
          v13(reflection, message_ptr, field_desc, v16);
        }
        break;
      case CPPTYPE_INT64_0:
        if ( google::protobuf::FieldDescriptor::is_repeated(field_desc) )
        {
          len_0 = randomRepeatedLen(1000);
          for ( j_0 = 0; j_0 < len_0; ++j_0 )
          {
            if ( *(_BYTE *)(((unsigned __int64)reflection >> 3) + 0x7FFF8000) )
              __asan_report_load8(reflection);
            v17 = (unsigned __int64)(reflection->_vptr_Reflection + 66);
            if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
              v17 = __asan_report_load8(reflection->_vptr_Reflection + 66);
            v18 = *(void (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, __int64))v17;
            v96 = rand();
            v19 = std::vector<std::string>::size(&this->int64Vector);
            v20 = std::vector<std::string>::operator[](&this->int64Vector, v96 % v19);
            v21 = std::stoll(v20, 0LL, 10);
            v18(reflection, message_ptr, field_desc, v21);
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)reflection >> 3) + 0x7FFF8000) )
            __asan_report_load8(reflection);
          v22 = (unsigned __int64)(reflection->_vptr_Reflection + 30);
          if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
            v22 = __asan_report_load8(reflection->_vptr_Reflection + 30);
          v23 = *(void (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, __int64))v22;
          v97 = rand();
          v24 = std::vector<std::string>::size(&this->int64Vector);
          v25 = std::vector<std::string>::operator[](&this->int64Vector, v97 % v24);
          v26 = std::stoll(v25, 0LL, 10);
          v23(reflection, message_ptr, field_desc, v26);
        }
        break;
      case CPPTYPE_UINT32_0:
        if ( google::protobuf::FieldDescriptor::is_repeated(field_desc) )
        {
          len_1 = randomRepeatedLen(1000);
          for ( j_1 = 0; j_1 < len_1; ++j_1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)reflection >> 3) + 0x7FFF8000) )
              __asan_report_load8(reflection);
            v27 = (unsigned __int64)(reflection->_vptr_Reflection + 67);
            if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
              v27 = __asan_report_load8(reflection->_vptr_Reflection + 67);
            v28 = *(void (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, __int64))v27;
            v98 = rand();
            v29 = std::vector<std::string>::size(&this->uInt32Vector);
            v30 = std::vector<std::string>::operator[](&this->uInt32Vector, v98 % v29);
            v31 = (unsigned int)std::stoul(v30, 0LL, 10);
            v28(reflection, message_ptr, field_desc, v31);
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)reflection >> 3) + 0x7FFF8000) )
            __asan_report_load8(reflection);
          v32 = (unsigned __int64)(reflection->_vptr_Reflection + 31);
          if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
            v32 = __asan_report_load8(reflection->_vptr_Reflection + 31);
          v33 = *(void (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, __int64))v32;
          v99 = rand();
          v34 = std::vector<std::string>::size(&this->uInt32Vector);
          v35 = std::vector<std::string>::operator[](&this->uInt32Vector, v99 % v34);
          v36 = (unsigned int)std::stoul(v35, 0LL, 10);
          v33(reflection, message_ptr, field_desc, v36);
        }
        break;
      case CPPTYPE_UINT64_0:
        if ( google::protobuf::FieldDescriptor::is_repeated(field_desc) )
        {
          len_2 = randomRepeatedLen(1000);
          for ( j_2 = 0; j_2 < len_2; ++j_2 )
          {
            if ( *(_BYTE *)(((unsigned __int64)reflection >> 3) + 0x7FFF8000) )
              __asan_report_load8(reflection);
            v37 = (unsigned __int64)(reflection->_vptr_Reflection + 68);
            if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
              v37 = __asan_report_load8(reflection->_vptr_Reflection + 68);
            v38 = *(void (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, unsigned __int64))v37;
            v100 = rand();
            v39 = std::vector<std::string>::size(&this->uInt64Vector);
            v40 = std::vector<std::string>::operator[](&this->uInt64Vector, v100 % v39);
            v41 = std::stoull(v40, 0LL, 10);
            v38(reflection, message_ptr, field_desc, v41);
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)reflection >> 3) + 0x7FFF8000) )
            __asan_report_load8(reflection);
          v42 = (unsigned __int64)(reflection->_vptr_Reflection + 32);
          if ( *(_BYTE *)((v42 >> 3) + 0x7FFF8000) )
            v42 = __asan_report_load8(reflection->_vptr_Reflection + 32);
          v43 = *(void (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, unsigned __int64))v42;
          v101 = rand();
          v44 = std::vector<std::string>::size(&this->uInt64Vector);
          v45 = std::vector<std::string>::operator[](&this->uInt64Vector, v101 % v44);
          v46 = std::stoull(v45, 0LL, 10);
          v43(reflection, message_ptr, field_desc, v46);
        }
        break;
      case CPPTYPE_DOUBLE_0:
        if ( google::protobuf::FieldDescriptor::is_repeated(field_desc) )
        {
          len_3 = randomRepeatedLen(1000);
          for ( j_3 = 0; j_3 < len_3; ++j_3 )
          {
            if ( *(_BYTE *)(((unsigned __int64)reflection >> 3) + 0x7FFF8000) )
              __asan_report_load8(reflection);
            v47 = (unsigned __int64)(reflection->_vptr_Reflection + 70);
            if ( *(_BYTE *)((v47 >> 3) + 0x7FFF8000) )
              v47 = __asan_report_load8(reflection->_vptr_Reflection + 70);
            v48 = *(void (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, double))v47;
            v102 = rand();
            v49 = std::vector<std::string>::size(&this->doubleVector);
            v50 = std::vector<std::string>::operator[](&this->doubleVector, v102 % v49);
            v51 = std::stod(v50, 0LL);
            v48(reflection, message_ptr, field_desc, v51);
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)reflection >> 3) + 0x7FFF8000) )
            __asan_report_load8(reflection);
          v52 = (unsigned __int64)(reflection->_vptr_Reflection + 34);
          if ( *(_BYTE *)((v52 >> 3) + 0x7FFF8000) )
            v52 = __asan_report_load8(reflection->_vptr_Reflection + 34);
          v53 = *(void (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, double))v52;
          v103 = rand();
          v54 = std::vector<std::string>::size(&this->doubleVector);
          v55 = std::vector<std::string>::operator[](&this->doubleVector, v103 % v54);
          v56 = std::stod(v55, 0LL);
          v53(reflection, message_ptr, field_desc, v56);
        }
        break;
      case CPPTYPE_FLOAT_0:
        if ( google::protobuf::FieldDescriptor::is_repeated(field_desc) )
        {
          len_4 = randomRepeatedLen(1000);
          for ( j_4 = 0; j_4 < len_4; ++j_4 )
          {
            if ( *(_BYTE *)(((unsigned __int64)reflection >> 3) + 0x7FFF8000) )
              __asan_report_load8(reflection);
            v57 = (unsigned __int64)(reflection->_vptr_Reflection + 69);
            if ( *(_BYTE *)((v57 >> 3) + 0x7FFF8000) )
              v57 = __asan_report_load8(reflection->_vptr_Reflection + 69);
            v58 = *(void (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, float))v57;
            v104 = rand();
            v59 = std::vector<std::string>::size(&this->floatVector);
            v60 = std::vector<std::string>::operator[](&this->floatVector, v104 % v59);
            v61 = std::stof(v60, 0LL);
            v58(reflection, message_ptr, field_desc, v61);
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)reflection >> 3) + 0x7FFF8000) )
            __asan_report_load8(reflection);
          v62 = (unsigned __int64)(reflection->_vptr_Reflection + 33);
          if ( *(_BYTE *)((v62 >> 3) + 0x7FFF8000) )
            v62 = __asan_report_load8(reflection->_vptr_Reflection + 33);
          v63 = *(void (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, float))v62;
          v105 = rand();
          v64 = std::vector<std::string>::size(&this->floatVector);
          v65 = std::vector<std::string>::operator[](&this->floatVector, v105 % v64);
          v66 = std::stof(v65, 0LL);
          v63(reflection, message_ptr, field_desc, v66);
        }
        break;
      case CPPTYPE_BOOL_0:
        if ( google::protobuf::FieldDescriptor::is_repeated(field_desc) )
        {
          len_5 = randomRepeatedLen(1000);
          for ( j_5 = 0; j_5 < len_5; ++j_5 )
          {
            if ( *(_BYTE *)(((unsigned __int64)reflection >> 3) + 0x7FFF8000) )
              __asan_report_load8(reflection);
            v67 = (unsigned __int64)(reflection->_vptr_Reflection + 71);
            if ( *(_BYTE *)((v67 >> 3) + 0x7FFF8000) )
              v67 = __asan_report_load8(reflection->_vptr_Reflection + 71);
            v68 = *(void (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, _BOOL8))v67;
            v69 = (rand() & 1) == 0;
            v68(reflection, message_ptr, field_desc, v69);
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)reflection >> 3) + 0x7FFF8000) )
            __asan_report_load8(reflection);
          v70 = (unsigned __int64)(reflection->_vptr_Reflection + 35);
          if ( *(_BYTE *)((v70 >> 3) + 0x7FFF8000) )
            v70 = __asan_report_load8(reflection->_vptr_Reflection + 35);
          v71 = *(void (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, _BOOL8))v70;
          v72 = (rand() & 1) == 0;
          v71(reflection, message_ptr, field_desc, v72);
        }
        break;
      case CPPTYPE_ENUM_0:
        enum_desc = (const google::protobuf::EnumDescriptor *)google::protobuf::FieldDescriptor::enum_type(field_desc);
        value_count = google::protobuf::EnumDescriptor::value_count(enum_desc);
        if ( google::protobuf::FieldDescriptor::is_repeated(field_desc) )
        {
          len_6 = randomRepeatedLen(1000);
          for ( j_6 = 0; j_6 < len_6; ++j_6 )
          {
            if ( *(_BYTE *)(((unsigned __int64)reflection >> 3) + 0x7FFF8000) )
              __asan_report_load8(reflection);
            v73 = (unsigned __int64)(reflection->_vptr_Reflection + 73);
            if ( *(_BYTE *)((v73 >> 3) + 0x7FFF8000) )
              v73 = __asan_report_load8(reflection->_vptr_Reflection + 73);
            v74 = *(void (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, const google::protobuf::EnumValueDescriptor *))v73;
            v75 = common::tools::RandomUtils::rand<int>(0, value_count - 1);
            v76 = google::protobuf::EnumDescriptor::value(enum_desc, v75);
            v74(reflection, message_ptr, field_desc, v76);
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)reflection >> 3) + 0x7FFF8000) )
            __asan_report_load8(reflection);
          v77 = (unsigned __int64)(reflection->_vptr_Reflection + 37);
          if ( *(_BYTE *)((v77 >> 3) + 0x7FFF8000) )
            v77 = __asan_report_load8(reflection->_vptr_Reflection + 37);
          v78 = *(void (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, const google::protobuf::EnumValueDescriptor *))v77;
          v79 = common::tools::RandomUtils::rand<int>(0, value_count - 1);
          v80 = google::protobuf::EnumDescriptor::value(enum_desc, v79);
          v78(reflection, message_ptr, field_desc, v80);
        }
        break;
      case CPPTYPE_STRING_0:
        if ( google::protobuf::FieldDescriptor::is_repeated(field_desc) )
        {
          len_7 = randomRepeatedLen(32);
          for ( j_7 = 0; j_7 < len_7; ++j_7 )
          {
            if ( *(_BYTE *)(((unsigned __int64)reflection >> 3) + 0x7FFF8000) )
              __asan_report_load8(reflection);
            v81 = (unsigned __int64)(reflection->_vptr_Reflection + 72);
            if ( *(_BYTE *)((v81 >> 3) + 0x7FFF8000) )
              v81 = __asan_report_load8(reflection->_vptr_Reflection + 72);
            v82 = *(void (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, std::vector<std::string>::reference))v81;
            v106 = rand();
            v83 = std::vector<std::string>::size(&this->stringVector);
            v84 = std::vector<std::string>::operator[](&this->stringVector, v106 % v83);
            v82(reflection, message_ptr, field_desc, v84);
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)reflection >> 3) + 0x7FFF8000) )
            __asan_report_load8(reflection);
          v85 = (unsigned __int64)(reflection->_vptr_Reflection + 36);
          if ( *(_BYTE *)((v85 >> 3) + 0x7FFF8000) )
            v85 = __asan_report_load8(reflection->_vptr_Reflection + 36);
          v86 = *(void (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, std::vector<std::string>::reference))v85;
          v107 = rand();
          v87 = std::vector<std::string>::size(&this->stringVector);
          v88 = std::vector<std::string>::operator[](&this->stringVector, v107 % v87);
          v86(reflection, message_ptr, field_desc, v88);
        }
        break;
      case CPPTYPE_MESSAGE_0:
        if ( google::protobuf::FieldDescriptor::is_repeated(field_desc) )
        {
          len_8 = randomRepeatedLen(16);
          for ( j_8 = 0; j_8 < len_8; ++j_8 )
          {
            if ( *(_BYTE *)(((unsigned __int64)reflection >> 3) + 0x7FFF8000) )
              __asan_report_load8(reflection);
            v89 = (unsigned __int64)(reflection->_vptr_Reflection + 75);
            if ( *(_BYTE *)((v89 >> 3) + 0x7FFF8000) )
              v89 = __asan_report_load8(reflection->_vptr_Reflection + 75);
            v90 = (google::protobuf::Message *)(*(__int64 (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, _QWORD))v89)(
                                                 reflection,
                                                 message_ptr,
                                                 field_desc,
                                                 0LL);
            Robot::getFilledMessage(this, v90);
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)reflection >> 3) + 0x7FFF8000) )
            __asan_report_load8(reflection);
          v91 = (unsigned __int64)(reflection->_vptr_Reflection + 39);
          if ( *(_BYTE *)((v91 >> 3) + 0x7FFF8000) )
            v91 = __asan_report_load8(reflection->_vptr_Reflection + 39);
          v92 = (google::protobuf::Message *)(*(__int64 (__fastcall **)(const google::protobuf::Reflection *, google::protobuf::Message *, google::protobuf::FieldDescriptor *, _QWORD))v91)(
                                               reflection,
                                               message_ptr,
                                               field_desc,
                                               0LL);
          Robot::getFilledMessage(this, v92);
        }
        break;
      default:
        common::milog::MiLogStream::create(
          &v135,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/operation/robot_op.cpp",
          "getFilledMessage",
          249);
        v93 = google::protobuf::FieldDescriptor::cpp_type(field_desc);
        common::milog::MiLogStream::operator()(&v135, "invalid cpp_type:%d\n", (unsigned int)v93);
        common::milog::MiLogStream::~MiLogStream(&v135);
        __asan_handle_no_return(&v135);
        __assert_fail(
          "0",
          "./src/operation/robot_op.cpp",
          0xFAu,
          "void Robot::getFilledMessage(google::protobuf::Message*)");
    }
  }
  std::set<google::protobuf::OneofDescriptor const*>::~set((std::set<const google::protobuf::OneofDescriptor*> *const)(v2 + 80));
  if ( v136 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 256: range 00000000004402EE-0000000000440592
__int64 __fastcall Robot::sendPacket(
        Robot *const this,
        uint32_t cmdId,
        const std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false> *p_message)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  google::protobuf::Message *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 9 cmdId:255 64 16 18 req_packet_ptr:257";
  *(_QWORD *)(v3 + 16) = Robot::sendPacket;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = cmdId;
  v6 = std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::operator*(p_message);
  common::minet::PacketUtils::createPacket(v3 + 64, *(_DWORD *)(v3 + 48), v6);
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "sendPacket",
      260);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v12,
           (const char (*)[34])"req_packet_ptr is null, req_name:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v12);
    v8 = -1;
  }
  else if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "sendPacket",
      265);
    v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v12,
           (const char (*)[34])"coro_exec_ptr_ is null, req_name:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v12);
    v8 = -1;
  }
  else
  {
    v8 = Robot::sendPacket(this, (common::minet::PacketPtr *)(v3 + 64));
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 64));
  result = v8;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 272: range 0000000000440594-0000000000440B48
__int64 __fastcall Robot::sendAndRecvPacket(
        Robot *const this,
        uint32_t cmdId,
        const std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false> *p_message)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::Message *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::minet::PacketSenderCoroExec *v10; // r14
  unsigned __int64 v11; // rdx
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  bool isTimeout; // al
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  __int64 result; // rax
  const std::string *rsp_name; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-F0h] BYREF
  char v25[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 2 14 rsp_cmd_id:293 64 4 12 coro_ret:286 80 4 9 cmdId:271 96 16 18 req_packet_ptr:273 128 1"
                        "6 18 rsp_packet_ptr:287";
  *(_QWORD *)(v3 + 16) = Robot::sendAndRecvPacket;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234688015;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 80) = cmdId;
  v6 = std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::operator*(p_message);
  common::minet::PacketUtils::createPacket(v3 + 96, *(_DWORD *)(v3 + 80), v6);
  if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "sendAndRecvPacket",
      276);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v24,
           (const char (*)[34])"req_packet_ptr is null, req_name:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v24);
    v8 = -1;
  }
  else if ( std::operator==<common::minet::PacketSenderCoroExec>(&this->coro_exec_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "sendAndRecvPacket",
      281);
    v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v24,
           (const char (*)[34])"coro_exec_ptr_ is null, req_name:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v24);
    v8 = -1;
  }
  else
  {
    v10 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      (std::shared_ptr<common::minet::Packet> *const)(v3 + 128),
      (const std::shared_ptr<common::minet::Packet> *)(v3 + 96));
    *(_DWORD *)(v3 + 64) = common::minet::PacketSenderCoroExec::sendPacket(
                             v10,
                             (common::minet::PacketPtr)__PAIR128__(v11, v3 + 128));
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 128));
    std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
    common::minet::PacketSenderCoroExec::getRspPacketPtr((common::minet::PacketSenderCoroExec *const)(v3 + 128));
    if ( *(_DWORD *)(v3 + 64)
      || std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v3 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "sendAndRecvPacket",
        290);
      v13 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v24,
              (const char (*)[29])"sendProto fails, is_timeout:");
      v14 = std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::PacketSenderCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->coro_exec_ptr_);
      isTimeout = common::minet::TimeoutCoroExec::isTimeout(v14);
      v16 = common::milog::MiLogStream::operator<<(v13, isTimeout);
      v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])", coro_ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v24);
      v8 = -2;
    }
    else
    {
      v18 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      *(_WORD *)(v3 + 48) = common::minet::Packet::getCmdId(v18);
      if ( *(_WORD *)(v3 + 48) )
      {
        rsp_name = ProtoUtils::getCmdName[abi:cxx11](*(unsigned __int16 *)(v3 + 48));
        if ( std::string::empty(rsp_name) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/operation/robot_op.cpp",
            "sendAndRecvPacket",
            302);
          v20 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  &v24,
                  (const char (*)[20])"invalid rsp_cmd_id:");
          common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
            v20,
            (const unsigned __int16 *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v24);
          v8 = -1;
        }
        else
        {
          v8 = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/operation/robot_op.cpp",
          "sendAndRecvPacket",
          296);
        v19 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v24,
                (const char (*)[20])"invalid rsp_cmd_id:");
        common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(
          v19,
          (const unsigned __int16 *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v24);
        v8 = -1;
      }
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 128));
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 96));
  result = v8;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 322: range 0000000000440B4A-0000000000440BF0
bool __cdecl Robot::ifEndWithStr(Robot *const this, std::string *p_originStr, std::string *p_endStr)
{
  std::string::size_type v3; // rbx
  std::string::size_type v5; // r12
  std::string::size_type v6; // rbx
  std::string::size_type v7; // rsi

  v3 = std::string::length(p_originStr);
  if ( v3 < std::string::length(p_endStr) )
    return 0;
  v5 = std::string::length(p_endStr);
  v6 = std::string::length(p_originStr);
  v7 = v6 - std::string::length(p_endStr);
  return std::string::compare(p_originStr, v7, v5, p_endStr) == 0;
};

// Line 336: range 0000000000440BF2-0000000000440C67
bool __cdecl Robot::ifInVector(Robot *const this, std::vector<std::string> *p_vector, std::string *p_str)
{
  const std::string *v3; // rdx
  unsigned int i; // [rsp+2Ch] [rbp-14h]

  for ( i = 0; i < std::vector<std::string>::size(p_vector); ++i )
  {
    v3 = std::vector<std::string>::operator[](p_vector, i);
    if ( std::operator==<char>(v3, p_str) )
      return 1;
  }
  return 0;
};

// Line 348: range 0000000000440C68-0000000000440FFA
void __cdecl Robot::loadVectorFromFile(Robot *const this, std::vector<std::string> *vect, const char *filePath)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  char *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  std::allocator<char> __a; // [rsp+2Fh] [rbp-361h] BYREF
  char v11[864]; // [rsp+30h] [rbp-360h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(832LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 32 12 fileName:349 112 32 12 lineData:353 176 520 10 infile:350";
  *(_QWORD *)(v3 + 16) = Robot::loadVectorFromFile;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862741] = -218103808;
  v5[536862742] = -202116109;
  v5[536862743] = -202116109;
  v5[536862744] = -202116109;
  v5[536862745] = -202116109;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 48), filePath, &__a);
  std::allocator<char>::~allocator(&__a);
  std::ifstream::basic_ifstream(v3 + 176);
  v6 = std::string::data((std::string *const)(v3 + 48));
  std::ifstream::open(v3 + 176, v6, 8LL);
  std::string::basic_string((std::string *const)(v3 + 112));
  while ( 1 )
  {
    v7 = std::getline<char,std::char_traits<char>,std::allocator<char>>(v3 + 176, v3 + 112);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7);
    v8 = *(_QWORD *)v7 - 24LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)v7 - 24LL);
    if ( !(unsigned __int8)std::ios::operator bool(*(_QWORD *)v8 + v7) )
      break;
    std::vector<std::string>::push_back(vect, (const std::vector<std::string>::value_type *)(v3 + 112));
  }
  std::ifstream::close(v3 + 176);
  std::string::~string((std::string *const)(v3 + 112));
  std::ifstream::~ifstream(v3 + 176);
  std::string::~string((std::string *const)(v3 + 48));
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8064) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 363: range 0000000000440FFC-0000000000441C1A
int32_t __cdecl __noreturn Robot::protoRandomCheck(Robot *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  char *v3; // rbx
  _DWORD *v4; // rax
  unsigned int v5; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r12
  std::map<unsigned int,const google::protobuf::Descriptor*> *CmdToDescMap; // rax
  const std::string *v12; // rax
  bool v13; // r12
  int v14; // eax
  common::milog::MiLogStream *v15; // r12
  const std::string *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::element_type *v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  std::allocator<char> __a; // [rsp+1Bh] [rbp-1A5h] BYREF
  int i; // [rsp+1Ch] [rbp-1A4h]
  unsigned int retCode; // [rsp+20h] [rbp-1A0h]
  int max_repeated_times; // [rsp+24h] [rbp-19Ch]
  std::map<unsigned int,const google::protobuf::Descriptor*>::iterator __for_begin; // [rsp+28h] [rbp-198h] BYREF
  std::map<unsigned int,const google::protobuf::Descriptor*>::iterator __for_end; // [rsp+30h] [rbp-190h] BYREF
  unsigned __int64 val; // [rsp+38h] [rbp-188h] BYREF
  std::map<unsigned int,const google::protobuf::Descriptor*> *__for_range; // [rsp+40h] [rbp-180h]
  std::pair<unsigned int const,const google::protobuf::Descriptor*> *__in; // [rsp+48h] [rbp-178h]
  std::tuple_element<0,std::pair<unsigned int const,const google::protobuf::Descriptor*> >::type *cmd_id; // [rsp+50h] [rbp-170h]
  std::tuple_element<1,std::pair<unsigned int const,const google::protobuf::Descriptor*> >::type *descriptor; // [rsp+58h] [rbp-168h]
  std::shared_ptr<google::protobuf::Message> p_message; // [rsp+60h] [rbp-160h] BYREF
  std::vector<std::string> p_vector; // [rsp+70h] [rbp-150h] BYREF
  std::string __x; // [rsp+90h] [rbp-130h] BYREF
  char v37; // [rsp+B0h] [rbp-110h] BYREF

  v1 = (unsigned __int64)&v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  v3 = (char *)(v1 + 256);
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 48 4 9 round:394 64 4 14 protoIndex:398 80 4 18 repeated_times:407 96 16 11 msg_ptr:405 128 24"
                        " 21 untestProtoVector:369 192 32 13 reqEndStr:367";
  *(_QWORD *)(v1 + 16) = Robot::protoRandomCheck;
  v4 = (_DWORD *)(v1 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  retCode = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v1 + 192), off_DEB40E0, &__a);
  std::allocator<char>::~allocator(&__a);
  std::vector<std::string>::vector((std::vector<std::string> *const)(v1 + 128));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__x, "GetPlayerTokenReq", &__a);
  std::vector<std::string>::push_back((std::vector<std::string> *const)(v1 + 128), &__x);
  std::string::~string(&__x);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__x, "PlayerLoginReq", &__a);
  std::vector<std::string>::push_back((std::vector<std::string> *const)(v1 + 128), &__x);
  std::string::~string(&__x);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__x, "PlayerLogoutReq", &__a);
  std::vector<std::string>::push_back((std::vector<std::string> *const)(v1 + 128), &__x);
  std::string::~string(&__x);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__x, "JoinPlayerSceneReq", &__a);
  std::vector<std::string>::push_back((std::vector<std::string> *const)(v1 + 128), &__x);
  std::string::~string(&__x);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__x, "BackMyWorldReq", &__a);
  std::vector<std::string>::push_back((std::vector<std::string> *const)(v1 + 128), &__x);
  std::string::~string(&__x);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__x, "SavePlayerDataReq", &__a);
  std::vector<std::string>::push_back((std::vector<std::string> *const)(v1 + 128), &__x);
  std::string::~string(&__x);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__x, "PlayerForceExitReq", &__a);
  std::vector<std::string>::push_back((std::vector<std::string> *const)(v1 + 128), &__x);
  std::string::~string(&__x);
  std::allocator<char>::~allocator(&__a);
  Robot::loadVectorFromFile(this, &this->int32Vector, "data/random_check_32");
  Robot::loadVectorFromFile(this, &this->int64Vector, "data/random_check_64");
  Robot::loadVectorFromFile(this, &this->uInt32Vector, "data/random_check_u32");
  Robot::loadVectorFromFile(this, &this->uInt64Vector, "data/random_check_u64");
  Robot::loadVectorFromFile(this, &this->doubleVector, "data/random_check_double");
  Robot::loadVectorFromFile(this, &this->floatVector, "data/random_check_float");
  Robot::loadVectorFromFile(this, &this->stringVector, "data/random_check_string");
  v5 = time(0LL);
  srand(v5);
  Robot::setRspResumeCoro(this, 0);
  *(_DWORD *)(v1 + 48) = 0;
  while ( 1 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__x,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "protoRandomCheck",
      397);
    v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           (common::milog::MiLogStream *const)&__x,
           (const char (*)[26])"-------------------round[");
    ++*((_DWORD *)v3 - 52);
    v7 = common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)v3 - 52);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v7, (const char (*)[26])"]------------------------");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
    *((_DWORD *)v3 - 48) = 0;
    __for_range = ProtoUtils::getCmdToDescMap();
    __for_begin._M_node = std::map<unsigned int,google::protobuf::Descriptor const*>::begin(__for_range)._M_node;
    __for_end._M_node = std::map<unsigned int,google::protobuf::Descriptor const*>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,google::protobuf::Descriptor const*>>::operator*(&__for_begin);
      cmd_id = std::get<0ul,unsigned int const,google::protobuf::Descriptor const*>(__in);
      descriptor = std::get<1ul,unsigned int const,google::protobuf::Descriptor const*>(__in);
      ++*((_DWORD *)v3 - 48);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__x,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "protoRandomCheck",
        402);
      v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             (common::milog::MiLogStream *const)&__x,
             (const char (*)[24])"random check progress: ");
      v9 = common::milog::MiLogStream::operator<<<int,(int *)0>(v8, (const int *)v3 - 48);
      v10 = common::milog::MiLogStream::operator<<<char [4],(char *[4])0>(v9, (const char (*)[4])" / ");
      CmdToDescMap = ProtoUtils::getCmdToDescMap();
      val = std::map<unsigned int,google::protobuf::Descriptor const*>::size(CmdToDescMap);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
      if ( *(_BYTE *)(((unsigned __int64)descriptor >> 3) + 0x7FFF8000) )
        __asan_report_load8(descriptor);
      v12 = google::protobuf::Descriptor::name[abi:cxx11](*descriptor);
      std::string::basic_string(&__x, v12);
      std::vector<std::string>::vector(&p_vector, (const std::vector<std::string> *)(v3 - 128));
      v13 = !Robot::ifInVector(this, &p_vector, &__x);
      std::vector<std::string>::~vector(&p_vector);
      std::string::~string(&__x);
      if ( v13 )
      {
        if ( *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)cmd_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(cmd_id);
        }
        ProtoUtils::createMessage((unsigned __int64)(v3 - 160), *cmd_id);
        if ( ProtoUtils::isAllowClientSend(*cmd_id) )
          v14 = 10;
        else
          v14 = 2;
        max_repeated_times = v14;
        *((_DWORD *)v3 - 44) = common::tools::RandomUtils::rand<int>(1, v14);
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&__x,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/operation/robot_op.cpp",
          "protoRandomCheck",
          408);
        v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                (common::milog::MiLogStream *const)&__x,
                (const char (*)[13])"send proto: ");
        if ( *(_BYTE *)(((unsigned __int64)descriptor >> 3) + 0x7FFF8000) )
          __asan_report_load8(descriptor);
        v16 = google::protobuf::Descriptor::name[abi:cxx11](*descriptor);
        v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, v16);
        v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])" ");
        v19 = common::milog::MiLogStream::operator<<<int,(int *)0>(v18, (const int *)v3 - 44);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" times");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__x);
        for ( i = 0; i < *((_DWORD *)v3 - 44); ++i )
        {
          v20 = std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2> *const)v3 - 10);
          Robot::getFilledMessage(this, v20);
          std::shared_ptr<google::protobuf::Message>::shared_ptr(
            &p_message,
            (const std::shared_ptr<google::protobuf::Message> *)v3 - 10);
          if ( *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)cmd_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cmd_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(cmd_id);
          }
          Robot::sendPacket(
            this,
            *cmd_id,
            (const std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false> *)&p_message);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_message);
          Robot::sleep(this, 0x32u);
          v21 = (unsigned __int64)std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(
                                    (const std::__shared_ptr_access<google::protobuf::Message,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3
                                  - 160);
          if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            v21 = __asan_report_load8(v21);
          v22 = *(_QWORD *)v21 + 56LL;
          if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
            v21 = __asan_report_load8(*(_QWORD *)v21 + 56LL);
          (*(void (__fastcall **)(unsigned __int64))v22)(v21);
        }
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)v3 - 10);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,google::protobuf::Descriptor const*>>::operator++(&__for_begin);
    }
  }
};

// Line 423: range 0000000000441C20-0000000000441F84
int32_t __cdecl Robot::registerRecvFunc(
        Robot *const this,
        const std::string *cmd_name,
        const luabind::adl::object *lua_func)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rdx
  unsigned int *v9; // rcx
  std::pair<std::string,luabind::adl::object> *v10; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<std::string,luabind::adl::object> >,false,false>,bool> v11; // rax
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-C0h] BYREF
  std::pair<std::string,luabind::adl::object> v18; // [rsp+40h] [rbp-A0h] BYREF
  char v19[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 10 cmd_id:424";
  *(_QWORD *)(v3 + 16) = Robot::registerRecvFunc;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = ProtoUtils::getCmdId(cmd_name);
  if ( *(_DWORD *)(v3 + 32) )
  {
    if ( luabind::type<luabind::adl::object>(lua_func) == 6 )
    {
      std::make_pair<std::string const&,luabind::adl::object const&>(&v18, cmd_name, lua_func);
      v11 = std::unordered_map<unsigned int,std::pair<std::string,luabind::adl::object>>::emplace<unsigned int &,std::pair<std::string,luabind::adl::object>>(
              &this->lua_recv_func_map_,
              (unsigned int *)(v3 + 32),
              &v18,
              v9,
              v10);
      v12 = !v11.second;
      std::pair<std::string,luabind::adl::object>::~pair(&v18);
      if ( v12 )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/operation/robot_op.cpp",
          "registerRecvFunc",
          437);
        v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                &v17,
                (const char (*)[18])"duplicate cmd_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 32));
        v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])", cmd_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, cmd_name);
        common::milog::MiLogStream::~MiLogStream(&v17);
        result = -1;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "registerRecvFunc",
        432);
      v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v17,
             (const char (*)[40])"lua_func is not lua function, cmd_name:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, cmd_name);
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "registerRecvFunc",
      427);
    v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v17,
           (const char (*)[26])"getCmdId fails, cmd_name:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, cmd_name);
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = -1;
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 444: range 0000000000441F86-0000000000442248
int32_t __cdecl Robot::registerRecvFuncOnce(Robot *const this, const std::string *cmd_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t result; // eax
  unsigned int *v7; // rcx
  std::pair<std::string,char const*> *v8; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<std::string,std::string > >,false,false>,bool> v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-C0h] BYREF
  std::pair<std::string,char const*> v15; // [rsp+30h] [rbp-A0h] BYREF
  char v16[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 cmd_id:446";
  *(_QWORD *)(v2 + 16) = Robot::registerRecvFuncOnce;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  Robot::setHasRecv(this, 0);
  *(_DWORD *)(v2 + 32) = ProtoUtils::getCmdId(cmd_name);
  if ( *(_DWORD *)(v2 + 32) )
  {
    std::make_pair<std::string const&,char const(&)[9]>(&v15, cmd_name, (const char (*)[9])"lua_func");
    v9 = std::unordered_map<unsigned int,std::pair<std::string,std::string>>::emplace<unsigned int &,std::pair<std::string,char const*>>(
           &this->lua_recv_map_,
           (unsigned int *)(v2 + 32),
           &v15,
           v7,
           v8);
    v10 = !v9.second;
    std::pair<std::string,char const*>::~pair(&v15);
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        stru_DEB4800.gap0,
        454);
      v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v14,
              (const char (*)[18])"duplicate cmd_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", cmd_name:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, cmd_name);
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      stru_DEB4800.gap0,
      449);
    v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v14,
           (const char (*)[26])"getCmdId fails, cmd_name:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, cmd_name);
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = -1;
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 461: range 000000000044224A-0000000000442648
void __cdecl Robot::waitNotify(
        Robot *const this,
        const std::string *cmd_name,
        const uint32_t wait_time,
        luabind::adl::object *notify,
        int32_t *ret)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  common::milog::MiLogStream *v8; // rdx
  luabind::adl::object *p_second; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  uint32_t wait_time_now; // [rsp+34h] [rbp-ACh]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,luabind::adl::object>,false> __y; // [rsp+38h] [rbp-A8h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+60h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 10 cmd_id:462 64 8 6 it:483";
  *(_QWORD *)(v5 + 16) = Robot::waitNotify;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116352;
  *(_DWORD *)(v5 + 48) = ProtoUtils::getCmdId(cmd_name);
  if ( *(_DWORD *)(v5 + 48) )
  {
    wait_time_now = 0;
    while ( wait_time_now < wait_time )
    {
      ++wait_time_now;
      Robot::sleep(this, 0x3E8u);
      *(std::unordered_map<unsigned int,luabind::adl::object>::iterator *)(v5 + 64) = std::unordered_map<unsigned int,luabind::adl::object>::find(
                                                                                        &this->lua_recv_cmd_id_map_,
                                                                                        (const std::unordered_map<unsigned int,luabind::adl::object>::key_type *)(v5 + 48));
      __y._M_cur = std::unordered_map<unsigned int,luabind::adl::object>::end(&this->lua_recv_cmd_id_map_)._M_cur;
      if ( std::__detail::operator!=<std::pair<unsigned int const,luabind::adl::object>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,luabind::adl::object>,false> *)(v5 + 64),
             &__y) )
      {
        p_second = &std::__detail::_Node_iterator<std::pair<unsigned int const,luabind::adl::object>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,luabind::adl::object>,false,false> *const)(v5 + 64))->second;
        luabind::adl::object::operator=(notify, p_second);
        std::unordered_map<unsigned int,luabind::adl::object>::erase(
          &this->lua_recv_cmd_id_map_,
          *(std::unordered_map<unsigned int,luabind::adl::object>::iterator *)(v5 + 64));
        if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(ret);
        }
        *ret = 0;
        goto LABEL_17;
      }
    }
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "waitNotify",
      493);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v18, (const char (*)[16])"wait out time :");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])", cmd_name:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, cmd_name);
    common::milog::MiLogStream::~MiLogStream(&v18);
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(ret);
    }
    *ret = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "waitNotify",
      465);
    v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v18,
           (const char (*)[26])"getCmdId fails, cmd_name:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, cmd_name);
    common::milog::MiLogStream::~MiLogStream(&v18);
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(ret);
    }
    *ret = -1;
  }
LABEL_17:
  if ( v19 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 499: range 000000000044264A-00000000004429EA
void __fastcall Robot::sleep(Robot *const this, uint32_t time_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  uint32_t i; // [rsp+10h] [rbp-90h]
  unsigned int sleep_time; // [rsp+18h] [rbp-88h]
  unsigned int remain_time; // [rsp+1Ch] [rbp-84h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 time_ms:498";
  *(_QWORD *)(v2 + 16) = Robot::sleep;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_log_open_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_log_open_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_log_open_);
  }
  if ( this->is_log_open_ )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/operation/robot_op.cpp",
      "sleep",
      501);
    v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v9,
           (const char (*)[23])"begin sleep, sleep_ms:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  sleep_time = *(_DWORD *)(v2 + 32) / 0x1388u;
  remain_time = *(_DWORD *)(v2 + 32) % 0x1388u;
  for ( i = 0; i < sleep_time; ++i )
  {
    Robot::asyncWait(this, 0x1388u);
    if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->status_);
    }
    if ( this->status_ == STATUS_RUNNING )
      Robot::ping(this, i);
  }
  if ( remain_time )
  {
    Robot::asyncWait(this, remain_time);
    if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->status_);
    }
    if ( this->status_ == STATUS_RUNNING )
      Robot::ping(this, sleep_time);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_log_open_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_log_open_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_log_open_);
  }
  if ( this->is_log_open_ )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/operation/robot_op.cpp",
      "sleep",
      523);
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v9, (const char (*)[13])"sleep finish");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 527: range 00000000004429EC-0000000000442C40
int32_t __cdecl Robot::ping(Robot *const this, uint32_t seq)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-110h] BYREF
  char v9[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 7 rsp:529 112 48 7 req:528";
  *(_QWORD *)(v2 + 16) = Robot::ping;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  proto::PingReq::PingReq((proto::PingReq *const)(v2 + 112));
  proto::PingRsp::PingRsp((proto::PingRsp *const)(v2 + 48));
  proto::PingReq::set_seq((proto::PingReq *const)(v2 + 112), seq);
  if ( Robot::sendProto<proto::PingReq,proto::PingRsp>(this, (proto::PingReq *)(v2 + 112), (proto::PingRsp *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "ping",
      533);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v8, (const char (*)[18])"sendProto fails, ");
    operator<<(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v8);
    v6 = -1;
  }
  else
  {
    v6 = 0;
  }
  proto::PingRsp::~PingRsp((proto::PingRsp *const)(v2 + 48));
  proto::PingReq::~PingReq((proto::PingReq *const)(v2 + 112));
  result = v6;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 540: range 0000000000442C42-00000000004434F0
int32_t __cdecl Robot::execScriptList(Robot *const this, const std::string *folder_path)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  LuaScript *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // r15d
  LuaScript *v16; // rdi
  LuaScript *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+23h] [rbp-16Dh] BYREF
  int32_t ret; // [rsp+24h] [rbp-16Ch]
  std::vector<std::string>::iterator __for_begin; // [rsp+28h] [rbp-168h] BYREF
  std::vector<std::string>::iterator __for_end; // [rsp+30h] [rbp-160h] BYREF
  std::vector<std::string> *__for_range; // [rsp+38h] [rbp-158h]
  std::string *file_path; // [rsp+40h] [rbp-150h]
  std::shared_ptr<lua_State> __args_0; // [rsp+50h] [rbp-140h] BYREF
  common::milog::MiLogStream v28; // [rsp+60h] [rbp-130h] BYREF
  char v29[272]; // [rsp+80h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 7 ret:549 64 16 14 script_ptr:560 96 24 12 file_vec:548 160 32 16 cur_dir_path:541";
  *(_QWORD *)(v3 + 16) = Robot::execScriptList;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  std::string::basic_string((std::string *const)(v3 + 160));
  if ( common::tools::FileUtils::getCurDirectory((std::string *)(v3 + 160)) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "execScriptList",
      544);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v28, (const char (*)[22])"getCurDirectory fails");
    common::milog::MiLogStream::~MiLogStream(&v28);
    v2 = -1;
  }
  else
  {
    std::operator+<char>((std::string *)&v28, "conf/", folder_path);
    std::string::operator+=((std::string *const)(v3 + 160), (const std::string *)&v28);
    std::string::~string((std::string *const)&v28);
    std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 96));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v28, ".xml", &__a);
    *(_DWORD *)(v3 + 48) = common::tools::FileUtils::getAllFilesWithExtension(
                             (const std::string *)(v3 + 160),
                             (const std::string *)&v28,
                             (std::vector<std::string> *)(v3 + 96));
    std::string::~string((std::string *const)&v28);
    std::allocator<char>::~allocator(&__a);
    if ( *(_DWORD *)(v3 + 48) || std::vector<std::string>::empty((const std::vector<std::string> *const)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "execScriptList",
        552);
      v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v28,
             (const char (*)[31])"can't find any file in folder:");
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)(v3 + 160));
      v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" ret: ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v28);
      v2 = -1;
    }
    else
    {
      __for_range = (std::vector<std::string> *)(v3 + 96);
      __for_begin._M_current = std::vector<std::string>::begin((std::vector<std::string> *const)(v3 + 96))._M_current;
      __for_end._M_current = std::vector<std::string>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(&__for_begin, &__for_end) )
      {
        file_path = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*(&__for_begin);
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/operation/robot_op.cpp",
          "execScriptList",
          559);
        v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v28, (const char (*)[11])"file_path:");
        v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, file_path);
        v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->user_.uid);
        common::milog::MiLogStream::~MiLogStream(&v28);
        Robot::createLuaState();
        std::make_shared<LuaScript,std::shared_ptr<lua_State>>((std::shared_ptr<lua_State> *)(v3 + 64), &__args_0);
        std::shared_ptr<lua_State>::~shared_ptr(&__args_0);
        v13 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( LuaScript::loadLuaFile(v13, file_path, &Config::config_ptr->design_config.lua_config_mgr) )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/operation/robot_op.cpp",
            "execScriptList",
            563);
          v14 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v28,
                  (const char (*)[25])"loadLuaFile fails, path:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, file_path);
          common::milog::MiLogStream::~MiLogStream(&v28);
          v2 = 1;
          v15 = 0;
        }
        else
        {
          v16 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          Robot::registerScriptFunc(v16);
          v17 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          ret = Robot::execScript(this, v17);
          if ( ret )
          {
            common::milog::MiLogStream::create(
              &v28,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/operation/robot_op.cpp",
              "execScriptList",
              570);
            v18 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v28,
                    (const char (*)[35])"execOpListInFile fails, file_path:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, file_path);
            common::milog::MiLogStream::~MiLogStream(&v28);
            v2 = ret;
            v15 = 0;
          }
          else
          {
            v15 = 1;
          }
        }
        std::shared_ptr<LuaScript>::~shared_ptr((std::shared_ptr<LuaScript> *const)(v3 + 64));
        if ( v15 != 1 )
          goto LABEL_22;
        __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++(&__for_begin);
      }
      v2 = 0;
    }
LABEL_22:
    std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 96));
  }
  std::string::~string((std::string *const)(v3 + 160));
  result = v2;
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 584: range 00000000004434F2-0000000000444299
int32_t __cdecl Robot::getPlayerToken(Robot *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t v5; // eax
  Config *v6; // rax
  Config *v8; // rax
  unsigned __int64 v9; // r15
  uint64_t v10; // rcx
  int v11; // r15d
  common::milog::MiLogStream *v12; // rdx
  uint32_t v13; // edx
  const std::string *v14; // rax
  const std::string *v15; // rax
  unsigned int v16; // r15d
  int v17; // r15d
  unsigned __int64 v18; // rax
  int v19; // r15d
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  int32_t v22; // eax
  const std::string *v23; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+17h] [rbp-319h] BYREF
  uint64_t server_rand; // [rsp+18h] [rbp-318h]
  common::milog::MiLogStream v27; // [rsp+20h] [rbp-310h] BYREF
  char v28[752]; // [rsp+40h] [rbp-2F0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(704LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 8 19 secret_key_seed:630 80 32 19 server_rand_key:631 144 32 18 server_key_str:634 208 144 "
                        "7 req:585 416 216 7 rsp:586";
  *(_QWORD *)(v2 + 16) = Robot::getPlayerToken;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862731] = -218959118;
  v4[536862732] = -218959118;
  v4[536862739] = -218103808;
  v4[536862740] = -202116109;
  v4[536862741] = -202116109;
  proto::GetPlayerTokenReq::GetPlayerTokenReq((proto::GetPlayerTokenReq *const)(v2 + 208));
  proto::GetPlayerTokenRsp::GetPlayerTokenRsp((proto::GetPlayerTokenRsp *const)(v2 + 416));
  if ( *(_BYTE *)(((unsigned __int64)&this->conf_.account_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->conf_.account_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->conf_.account_type);
  }
  proto::GetPlayerTokenReq::set_account_type((proto::GetPlayerTokenReq *const)(v2 + 208), this->conf_.account_type);
  proto::GetPlayerTokenReq::set_account_uid((proto::GetPlayerTokenReq *const)(v2 + 208), &this->conf_.account_uid);
  proto::GetPlayerTokenReq::set_account_token((proto::GetPlayerTokenReq *const)(v2 + 208), &this->conf_.account_token);
  if ( *(_BYTE *)(((unsigned __int64)&this->conf_.channel_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->conf_.channel_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->conf_.channel_id);
  }
  proto::GetPlayerTokenReq::set_channel_id((proto::GetPlayerTokenReq *const)(v2 + 208), this->conf_.channel_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->conf_.is_guest >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->conf_.is_guest >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->conf_.is_guest);
  }
  proto::GetPlayerTokenReq::set_is_guest((proto::GetPlayerTokenReq *const)(v2 + 208), this->conf_.is_guest);
  if ( *(_BYTE *)(((unsigned __int64)&this->conf_.platform_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->conf_.platform_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->conf_.platform_type);
  }
  proto::GetPlayerTokenReq::set_platform_type((proto::GetPlayerTokenReq *const)(v2 + 208), this->conf_.platform_type);
  v5 = common::tools::NetUtils::inetAton(&this->conf_.cloud_client_ip);
  proto::GetPlayerTokenReq::set_cloud_client_ip((proto::GetPlayerTokenReq *const)(v2 + 208), v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->conf_.platform_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->conf_.platform_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->conf_.platform_type);
  }
  if ( TxtConfigMgr::isPsnPlatform(this->conf_.platform_type) )
  {
    proto::GetPlayerTokenReq::set_online_id((proto::GetPlayerTokenReq *const)(v2 + 208), &this->conf_.online_id);
    proto::GetPlayerTokenReq::set_psn_region((proto::GetPlayerTokenReq *const)(v2 + 208), &this->conf_.psn_region);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->user_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->user_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->user_);
  }
  proto::GetPlayerTokenReq::set_uid((proto::GetPlayerTokenReq *const)(v2 + 208), this->user_.uid);
  v6 = Config::config_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&Config::config_ptr->key_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&Config::config_ptr->key_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&Config::config_ptr->key_id);
  }
  if ( v6->key_id
    && !std::string::empty(&Config::config_ptr->server_public_key)
    && !std::string::empty(&Config::config_ptr->client_private_key) )
  {
    v8 = Config::config_ptr;
    if ( *(_BYTE *)(((unsigned __int64)&Config::config_ptr->key_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&Config::config_ptr->key_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&Config::config_ptr->key_id);
    }
    proto::GetPlayerTokenReq::set_key_id((proto::GetPlayerTokenReq *const)(v2 + 208), v8->key_id);
    v9 = (unsigned __int64)common::tools::RandomUtils::rand<unsigned int>() << 32;
    v10 = common::tools::TimeUtils::getNow() | v9;
    if ( *(_BYTE *)(((unsigned __int64)&this->user_.client_rand_key >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    this->user_.client_rand_key = v10;
    *(_QWORD *)(v2 + 48) = common::tools::NetUtils::htonll(this->user_.client_rand_key);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string((std::string *const)(v2 + 80), (const char *)(v2 + 48), 8uLL, &__a);
    std::allocator<char>::~allocator(&__a);
    std::string::basic_string((std::string *const)(v2 + 144));
    if ( common::tools::RsaUtils::publicEncryp(
           &Config::config_ptr->server_public_key,
           (const std::string *)(v2 + 80),
           (std::string *)(v2 + 144)) >= 0 )
    {
      common::tools::StringUtils::base64Encode((std::string *)&v27, (const std::string *)(v2 + 144));
      proto::GetPlayerTokenReq::set_client_rand_key((proto::GetPlayerTokenReq *const)(v2 + 208), (std::string *)&v27);
      std::string::~string((std::string *const)&v27);
      v11 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/operation/robot_op.cpp",
        "getPlayerToken",
        610);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        &v27,
        (const char (*)[32])"encrypt client rand key failed.");
      common::milog::MiLogStream::~MiLogStream(&v27);
      v1 = -1;
      v11 = 0;
    }
    std::string::~string((std::string *const)(v2 + 144));
    std::string::~string((std::string *const)(v2 + 80));
    if ( v11 != 1 )
      goto LABEL_56;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getPlayerToken",
      617);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v27,
      (const char (*)[34])"not config rsa! may login failed.");
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  if ( Robot::sendProto<proto::GetPlayerTokenReq,proto::GetPlayerTokenRsp>(
         this,
         (proto::GetPlayerTokenReq *)(v2 + 208),
         (proto::GetPlayerTokenRsp *)(v2 + 416)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getPlayerToken",
      622);
    v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v27, (const char (*)[18])"sendProto fails, ");
    operator<<(v12, this);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v1 = -1;
    goto LABEL_56;
  }
  if ( proto::GetPlayerTokenRsp::retcode((const proto::GetPlayerTokenRsp *const)(v2 + 416)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getPlayerToken",
      650);
    v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v27, (const char (*)[13])"rsp.retcode=");
    v22 = proto::GetPlayerTokenRsp::retcode((const proto::GetPlayerTokenRsp *const)(v2 + 416));
    v23 = ProtoUtils::getRetcodeName[abi:cxx11](v22);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, v23);
    common::milog::MiLogStream::~MiLogStream(&v27);
LABEL_55:
    v1 = proto::GetPlayerTokenRsp::retcode((const proto::GetPlayerTokenRsp *const)(v2 + 416));
    goto LABEL_56;
  }
  v13 = proto::GetPlayerTokenRsp::uid((const proto::GetPlayerTokenRsp *const)(v2 + 416));
  if ( *(_BYTE *)(((unsigned __int64)&this->user_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->user_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->user_);
  }
  this->user_.uid = v13;
  v14 = proto::GetPlayerTokenRsp::token[abi:cxx11]((const proto::GetPlayerTokenRsp *const)(v2 + 416));
  std::string::operator=(&this->user_.token, v14);
  *(_QWORD *)(v2 + 48) = proto::GetPlayerTokenRsp::secret_key_seed((const proto::GetPlayerTokenRsp *const)(v2 + 416));
  v15 = proto::GetPlayerTokenRsp::server_rand_key[abi:cxx11]((const proto::GetPlayerTokenRsp *const)(v2 + 416));
  std::string::basic_string((std::string *const)(v2 + 80), v15);
  if ( std::string::empty((const std::string *const)(v2 + 80)) )
    goto LABEL_51;
  std::string::basic_string((std::string *const)(v2 + 144));
  common::tools::StringUtils::base64Decode((std::string *)&v27, (const std::string *)(v2 + 80));
  v16 = (unsigned int)common::tools::RsaUtils::privateDecryp(
                        &Config::config_ptr->client_private_key,
                        (const std::string *)&v27,
                        (std::string *)(v2 + 144)) >> 31;
  std::string::~string((std::string *const)&v27);
  if ( (_BYTE)v16 )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getPlayerToken",
      637);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v27,
      (const char (*)[33])"decrypt with private key failed.");
    common::milog::MiLogStream::~MiLogStream(&v27);
    v1 = -1;
    v17 = 0;
  }
  else
  {
    v18 = (unsigned __int64)std::string::data((std::string *const)(v2 + 144));
    if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
      v18 = __asan_report_load8(v18);
    server_rand = *(_QWORD *)v18;
    server_rand = common::tools::NetUtils::ntohll(server_rand);
    if ( *(_BYTE *)(((unsigned __int64)&this->user_.client_rand_key >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->user_.client_rand_key);
    *(_QWORD *)(v2 + 48) = server_rand ^ this->user_.client_rand_key;
    v17 = 1;
  }
  std::string::~string((std::string *const)(v2 + 144));
  if ( v17 == 1 )
  {
LABEL_51:
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/operation/robot_op.cpp",
      "getPlayerToken",
      645);
    v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v27, (const char (*)[17])"secret key seed:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v20, (const unsigned __int64 *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    Robot::genSecretKey(this, *(_QWORD *)(v2 + 48), &this->user_.secret_key);
    v19 = 1;
  }
  else
  {
    v19 = 0;
  }
  std::string::~string((std::string *const)(v2 + 80));
  if ( v19 == 1 )
    goto LABEL_55;
LABEL_56:
  proto::GetPlayerTokenRsp::~GetPlayerTokenRsp((proto::GetPlayerTokenRsp *const)(v2 + 416));
  proto::GetPlayerTokenReq::~GetPlayerTokenReq((proto::GetPlayerTokenReq *const)(v2 + 208));
  result = v1;
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 656: range 000000000044429A-00000000004444DE
int32_t __cdecl Robot::playerLogout(Robot *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  common::milog::MiLogStream *v4; // rdx
  int32_t v5; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-F0h] BYREF
  char v8[208]; // [rsp+30h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 24 7 req:657 96 24 7 rsp:658";
  *(_QWORD *)(v1 + 16) = Robot::playerLogout;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  proto::PlayerLogoutReq::PlayerLogoutReq((proto::PlayerLogoutReq *const)(v1 + 32));
  proto::PlayerLogoutRsp::PlayerLogoutRsp((proto::PlayerLogoutRsp *const)(v1 + 96));
  proto::PlayerLogoutReq::set_reason((proto::PlayerLogoutReq *const)(v1 + 32), PlayerLogoutReq_Reason_CLIENT_REQ);
  if ( Robot::sendProto<proto::PlayerLogoutReq,proto::PlayerLogoutRsp>(
         this,
         (proto::PlayerLogoutReq *)(v1 + 32),
         (proto::PlayerLogoutRsp *)(v1 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "playerLogout",
      662);
    v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v7, (const char (*)[18])"sendProto fails, ");
    operator<<(v4, this);
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = -1;
  }
  else
  {
    v5 = proto::PlayerLogoutRsp::retcode((const proto::PlayerLogoutRsp *const)(v1 + 96));
  }
  proto::PlayerLogoutRsp::~PlayerLogoutRsp((proto::PlayerLogoutRsp *const)(v1 + 96));
  proto::PlayerLogoutReq::~PlayerLogoutReq((proto::PlayerLogoutReq *const)(v1 + 32));
  result = v5;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 669: range 00000000004444E0-00000000004449BD
int32_t __cdecl Robot::playerLogin(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  const RobotConf *Conf; // rax
  uint32_t v6; // eax
  common::milog::MiLogStream *v7; // rdx
  int32_t v8; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-3B1h] BYREF
  std::string name; // [rsp+20h] [rbp-3B0h] BYREF
  char v12[912]; // [rsp+40h] [rbp-390h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(864LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 target_uid:672 64 280 7 req:670 416 376 7 rsp:671";
  *(_QWORD *)(v2 + 16) = Robot::playerLogin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862730] = -234881024;
  v4[536862731] = -218959118;
  v4[536862732] = -218959118;
  v4[536862744] = -218103808;
  v4[536862745] = -202116109;
  v4[536862746] = -202116109;
  proto::PlayerLoginReq::PlayerLoginReq((proto::PlayerLoginReq *const)(v2 + 64));
  proto::PlayerLoginRsp::PlayerLoginRsp((proto::PlayerLoginRsp *const)(v2 + 416));
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "target_uid", &__a);
  ScriptUtil::getTableValue<unsigned int>(
    &ScriptUtil::no_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 48));
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  proto::PlayerLoginReq::set_token((proto::PlayerLoginReq *const)(v2 + 64), &this->user_.token);
  proto::PlayerLoginReq::set_target_uid((proto::PlayerLoginReq *const)(v2 + 64), *(_DWORD *)(v2 + 48));
  Conf = Robot::getConf(this);
  proto::PlayerLoginReq::set_client_version((proto::PlayerLoginReq *const)(v2 + 64), &Conf->client_version);
  if ( *(_BYTE *)(((unsigned __int64)&this->conf_.platform_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->conf_.platform_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->conf_.platform_type);
  }
  proto::PlayerLoginReq::set_platform_type((proto::PlayerLoginReq *const)(v2 + 64), this->conf_.platform_type);
  v6 = common::tools::NetUtils::inetAton(&this->conf_.cloud_client_ip);
  proto::PlayerLoginReq::set_cloud_client_ip((proto::PlayerLoginReq *const)(v2 + 64), v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->conf_.platform_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->conf_.platform_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->conf_.platform_type);
  }
  if ( TxtConfigMgr::isPsnPlatform(this->conf_.platform_type) )
    proto::PlayerLoginReq::set_online_id((proto::PlayerLoginReq *const)(v2 + 64), &this->conf_.online_id);
  if ( Robot::sendProto<proto::PlayerLoginReq,proto::PlayerLoginRsp>(
         this,
         (proto::PlayerLoginReq *)(v2 + 64),
         (proto::PlayerLoginRsp *)(v2 + 416)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "playerLogin",
      689);
    v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[18])"sendProto fails, ");
    operator<<(v7, this);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v8 = -1;
  }
  else
  {
    v8 = proto::PlayerLoginRsp::retcode((const proto::PlayerLoginRsp *const)(v2 + 416));
  }
  proto::PlayerLoginRsp::~PlayerLoginRsp((proto::PlayerLoginRsp *const)(v2 + 416));
  proto::PlayerLoginReq::~PlayerLoginReq((proto::PlayerLoginReq *const)(v2 + 64));
  result = v8;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = -168430091;
  }
  return result;
};

// Line 696: range 00000000004449BE-0000000000444CC7
int32_t __cdecl Robot::playerLoginT(Robot *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  common::milog::MiLogStream *v4; // rdx
  int32_t v5; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-390h] BYREF
  char v8[880]; // [rsp+40h] [rbp-370h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(832LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 280 7 req:697 384 376 7 rsp:698";
  *(_QWORD *)(v1 + 16) = Robot::playerLoginT;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862729] = -234881024;
  v3[536862730] = -218959118;
  v3[536862731] = -218959118;
  v3[536862743] = -218103808;
  v3[536862744] = -202116109;
  v3[536862745] = -202116109;
  proto::PlayerLoginReq::PlayerLoginReq((proto::PlayerLoginReq *const)(v1 + 32));
  proto::PlayerLoginRsp::PlayerLoginRsp((proto::PlayerLoginRsp *const)(v1 + 384));
  proto::PlayerLoginReq::set_token((proto::PlayerLoginReq *const)(v1 + 32), &this->user_.token);
  proto::PlayerLoginReq::set_target_uid((proto::PlayerLoginReq *const)(v1 + 32), 0);
  if ( Robot::sendProto<proto::PlayerLoginReq,proto::PlayerLoginRsp>(
         this,
         (proto::PlayerLoginReq *)(v1 + 32),
         (proto::PlayerLoginRsp *)(v1 + 384)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "playerLoginT",
      706);
    v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v7, (const char (*)[18])"sendProto fails, ");
    operator<<(v4, this);
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = -1;
  }
  else
  {
    v5 = proto::PlayerLoginRsp::retcode((const proto::PlayerLoginRsp *const)(v1 + 384));
  }
  proto::PlayerLoginRsp::~PlayerLoginRsp((proto::PlayerLoginRsp *const)(v1 + 384));
  proto::PlayerLoginReq::~PlayerLoginReq((proto::PlayerLoginReq *const)(v1 + 32));
  result = v5;
  if ( v8 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8064) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 713: range 0000000000444CC8-0000000000445298
int32_t __cdecl Robot::setPlayerBornData(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rdx
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-188h]
  std::allocator<char> __a; // [rsp+1Fh] [rbp-171h] BYREF
  std::string __rhs; // [rsp+20h] [rbp-170h] BYREF
  std::string name; // [rsp+40h] [rbp-150h] BYREF
  char v12[304]; // [rsp+60h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 13 avatar_id:720 64 24 7 rsp:719 128 32 7 req:718 192 32 13 nick_name:721";
  *(_QWORD *)(v2 + 16) = Robot::setPlayerBornData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !Player::getIsNeedSetBornData(&this->player_) )
  {
    v5 = 0;
    goto LABEL_21;
  }
  proto::SetPlayerBornDataReq::SetPlayerBornDataReq((proto::SetPlayerBornDataReq *const)(v2 + 128));
  proto::SetPlayerBornDataRsp::SetPlayerBornDataRsp((proto::SetPlayerBornDataRsp *const)(v2 + 64));
  *(_DWORD *)(v2 + 48) = 0;
  std::string::basic_string((std::string *const)(v2 + 192));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "avatar_id", &__a);
  ScriptUtil::getTableValue<unsigned int,char const(&)[10],std::string &>(
    &ScriptUtil::no_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 48),
    (const char (*)[10])"nick_name",
    (std::string *)(v2 + 192),
    (const char (*)[10])param_table,
    (std::string *)this);
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( *(_DWORD *)(v2 + 48) )
    goto LABEL_11;
  if ( !ConstValueExcelConfigMgr::findConstValue<unsigned int>(
          &Config::config_ptr->design_config.txt_config_mgr.const_value_config_mgr,
          CONST_VALUE_INIT_TEAM_AVATAR,
          (unsigned int *)(v2 + 48)) )
  {
    if ( !*(_DWORD *)(v2 + 48) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "setPlayerBornData",
        732);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        (common::milog::MiLogStream *const)&name,
        (const char (*)[26])"can't find born avatar_id");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v5 = -1;
      goto LABEL_20;
    }
LABEL_11:
    proto::SetPlayerBornDataReq::set_avatar_id((proto::SetPlayerBornDataReq *const)(v2 + 128), *(_DWORD *)(v2 + 48));
    if ( std::string::empty((const std::string *const)(v2 + 192)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&thisa->user_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->user_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisa->user_);
      }
      std::to_string(&__rhs, thisa->user_.uid % 0x64);
      std::operator+<char>(&name, "Ro", &__rhs);
      std::string::operator=((std::string *const)(v2 + 192), &name);
      std::string::~string(&name);
      std::string::~string(&__rhs);
    }
    proto::SetPlayerBornDataReq::set_nick_name(
      (proto::SetPlayerBornDataReq *const)(v2 + 128),
      (const std::string *)(v2 + 192));
    if ( Robot::sendProto<proto::SetPlayerBornDataReq,proto::SetPlayerBornDataRsp>(
           thisa,
           (proto::SetPlayerBornDataReq *)(v2 + 128),
           (proto::SetPlayerBornDataRsp *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "setPlayerBornData",
        745);
      v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             (common::milog::MiLogStream *const)&name,
             (const char (*)[18])"sendProto fails, ");
      operator<<(v6, thisa);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v5 = -1;
    }
    else if ( proto::SetPlayerBornDataRsp::retcode((const proto::SetPlayerBornDataRsp *const)(v2 + 64)) == 116 )
    {
      v5 = 0;
    }
    else
    {
      v5 = proto::SetPlayerBornDataRsp::retcode((const proto::SetPlayerBornDataRsp *const)(v2 + 64));
    }
    goto LABEL_20;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&name,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/operation/robot_op.cpp",
    "setPlayerBornData",
    727);
  common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
    (common::milog::MiLogStream *const)&name,
    (const char (*)[50])"findConstValue CONST_VALUE_INIT_TEAM_AVATAR fails");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
  v5 = -1;
LABEL_20:
  std::string::~string((std::string *const)(v2 + 192));
  proto::SetPlayerBornDataRsp::~SetPlayerBornDataRsp((proto::SetPlayerBornDataRsp *const)(v2 + 64));
  proto::SetPlayerBornDataReq::~SetPlayerBornDataReq((proto::SetPlayerBornDataReq *const)(v2 + 128));
LABEL_21:
  result = v5;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 756: range 000000000044529A-00000000004457AE
int32_t __cdecl Robot::setPlayerBornDataT(Robot *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  common::milog::MiLogStream *v5; // rdx
  int32_t result; // eax
  std::string __rhs; // [rsp+10h] [rbp-170h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-150h] BYREF
  char v9[304]; // [rsp+50h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 13 avatar_id:763 64 24 7 rsp:762 128 32 7 req:761 192 32 13 nick_name:764";
  *(_QWORD *)(v1 + 16) = Robot::setPlayerBornDataT;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862725] = -218959118;
  v3[536862727] = -202116109;
  if ( !Player::getIsNeedSetBornData(&this->player_) )
  {
    v4 = 0;
  }
  else
  {
    proto::SetPlayerBornDataReq::SetPlayerBornDataReq((proto::SetPlayerBornDataReq *const)(v1 + 128));
    proto::SetPlayerBornDataRsp::SetPlayerBornDataRsp((proto::SetPlayerBornDataRsp *const)(v1 + 64));
    *(_DWORD *)(v1 + 48) = 0;
    std::string::basic_string((std::string *const)(v1 + 192));
    if ( ConstValueExcelConfigMgr::findConstValue<unsigned int>(
           &Config::config_ptr->design_config.txt_config_mgr.const_value_config_mgr,
           CONST_VALUE_INIT_TEAM_AVATAR,
           (unsigned int *)(v1 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "setPlayerBornDataT",
        768);
      common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
        &v8,
        (const char (*)[50])"findConstValue CONST_VALUE_INIT_TEAM_AVATAR fails");
      common::milog::MiLogStream::~MiLogStream(&v8);
      v4 = -1;
    }
    else if ( *(_DWORD *)(v1 + 48) )
    {
      proto::SetPlayerBornDataReq::set_avatar_id((proto::SetPlayerBornDataReq *const)(v1 + 128), *(_DWORD *)(v1 + 48));
      if ( std::string::empty((const std::string *const)(v1 + 192)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->user_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->user_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->user_);
        }
        std::to_string(&__rhs, this->user_.uid % 0x64);
        std::operator+<char>((std::string *)&v8, "Ro", &__rhs);
        std::string::operator=((std::string *const)(v1 + 192), (std::string *)&v8);
        std::string::~string((std::string *const)&v8);
        std::string::~string(&__rhs);
      }
      proto::SetPlayerBornDataReq::set_nick_name(
        (proto::SetPlayerBornDataReq *const)(v1 + 128),
        (const std::string *)(v1 + 192));
      if ( Robot::sendProto<proto::SetPlayerBornDataReq,proto::SetPlayerBornDataRsp>(
             this,
             (proto::SetPlayerBornDataReq *)(v1 + 128),
             (proto::SetPlayerBornDataRsp *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v8,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/operation/robot_op.cpp",
          "setPlayerBornDataT",
          785);
        v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               &v8,
               (const char (*)[18])"sendProto fails, ");
        operator<<(v5, this);
        common::milog::MiLogStream::~MiLogStream(&v8);
        v4 = -1;
      }
      else if ( proto::SetPlayerBornDataRsp::retcode((const proto::SetPlayerBornDataRsp *const)(v1 + 64)) == 116 )
      {
        v4 = 0;
      }
      else
      {
        v4 = proto::SetPlayerBornDataRsp::retcode((const proto::SetPlayerBornDataRsp *const)(v1 + 64));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "setPlayerBornDataT",
        773);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v8,
        (const char (*)[26])"can't find born avatar_id");
      common::milog::MiLogStream::~MiLogStream(&v8);
      v4 = -1;
    }
    std::string::~string((std::string *const)(v1 + 192));
    proto::SetPlayerBornDataRsp::~SetPlayerBornDataRsp((proto::SetPlayerBornDataRsp *const)(v1 + 64));
    proto::SetPlayerBornDataReq::~SetPlayerBornDataReq((proto::SetPlayerBornDataReq *const)(v1 + 128));
  }
  result = v4;
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 796: range 00000000004457B0-0000000000446206
int32_t __cdecl Robot::enterScene(Robot *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  Player *Player; // rax
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rdx
  int32_t result; // eax
  int val; // [rsp+18h] [rbp-278h] BYREF
  uint32_t enter_scene_token; // [rsp+1Ch] [rbp-274h]
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-270h] BYREF
  char v19[592]; // [rsp+40h] [rbp-250h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(544LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "8 32 24 13 ready_req:798 96 24 12 init_req:812 160 24 12 done_req:826 224 24 12 post_req:840 288"
                        " 32 13 ready_rsp:799 352 32 12 init_rsp:813 416 32 12 done_rsp:827 480 32 12 post_rsp:841";
  *(_QWORD *)(v1 + 16) = Robot::enterScene;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862725] = -234881024;
  v3[536862726] = -218959118;
  v3[536862727] = -234881024;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -218959118;
  v3[536862734] = -218959118;
  v3[536862736] = -202116109;
  Player = Robot::getPlayer(this);
  enter_scene_token = Player::getEnterSceneToken(Player);
  proto::EnterSceneReadyReq::EnterSceneReadyReq((proto::EnterSceneReadyReq *const)(v1 + 32));
  proto::EnterSceneReadyRsp::EnterSceneReadyRsp((proto::EnterSceneReadyRsp *const)(v1 + 288));
  proto::EnterSceneReadyReq::set_enter_scene_token((proto::EnterSceneReadyReq *const)(v1 + 32), enter_scene_token);
  if ( Robot::sendProto<proto::EnterSceneReadyReq,proto::EnterSceneReadyRsp>(
         this,
         (proto::EnterSceneReadyReq *)(v1 + 32),
         (proto::EnterSceneReadyRsp *)(v1 + 288)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "enterScene",
      803);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v18, (const char (*)[18])"sendProto fails, ");
    operator<<(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v6 = -1;
  }
  else if ( proto::EnterSceneReadyRsp::retcode((const proto::EnterSceneReadyRsp *const)(v1 + 288)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "enterScene",
      808);
    v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v18,
           (const char (*)[35])"EnterSceneReadyRsp fails, retcode:");
    val = proto::EnterSceneReadyRsp::retcode((const proto::EnterSceneReadyRsp *const)(v1 + 288));
    common::milog::MiLogStream::operator<<<int,(int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v6 = -1;
  }
  else
  {
    proto::SceneInitFinishReq::SceneInitFinishReq((proto::SceneInitFinishReq *const)(v1 + 96));
    proto::SceneInitFinishRsp::SceneInitFinishRsp((proto::SceneInitFinishRsp *const)(v1 + 352));
    proto::SceneInitFinishReq::set_enter_scene_token((proto::SceneInitFinishReq *const)(v1 + 96), enter_scene_token);
    if ( Robot::sendProto<proto::SceneInitFinishReq,proto::SceneInitFinishRsp>(
           this,
           (proto::SceneInitFinishReq *)(v1 + 96),
           (proto::SceneInitFinishRsp *)(v1 + 352)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "enterScene",
        817);
      v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v18,
             (const char (*)[18])"sendProto fails, ");
      operator<<(v8, this);
      common::milog::MiLogStream::~MiLogStream(&v18);
      v6 = -1;
    }
    else if ( proto::SceneInitFinishRsp::retcode((const proto::SceneInitFinishRsp *const)(v1 + 352)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "enterScene",
        822);
      v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v18,
             (const char (*)[35])"SceneInitFinishRsp fails, retcode:");
      val = proto::SceneInitFinishRsp::retcode((const proto::SceneInitFinishRsp *const)(v1 + 352));
      common::milog::MiLogStream::operator<<<int,(int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v18);
      v6 = -1;
    }
    else
    {
      proto::EnterSceneDoneReq::EnterSceneDoneReq((proto::EnterSceneDoneReq *const)(v1 + 160));
      proto::EnterSceneDoneRsp::EnterSceneDoneRsp((proto::EnterSceneDoneRsp *const)(v1 + 416));
      proto::EnterSceneDoneReq::set_enter_scene_token((proto::EnterSceneDoneReq *const)(v1 + 160), enter_scene_token);
      if ( Robot::sendProto<proto::EnterSceneDoneReq,proto::EnterSceneDoneRsp>(
             this,
             (proto::EnterSceneDoneReq *)(v1 + 160),
             (proto::EnterSceneDoneRsp *)(v1 + 416)) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/operation/robot_op.cpp",
          "enterScene",
          831);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                &v18,
                (const char (*)[16])"sendProto fails");
        operator<<(v10, this);
        common::milog::MiLogStream::~MiLogStream(&v18);
        v6 = -1;
      }
      else if ( proto::EnterSceneDoneRsp::retcode((const proto::EnterSceneDoneRsp *const)(v1 + 416)) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/operation/robot_op.cpp",
          "enterScene",
          836);
        v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v18,
                (const char (*)[34])"EnterSceneDoneRsp fails, retcode:");
        val = proto::EnterSceneDoneRsp::retcode((const proto::EnterSceneDoneRsp *const)(v1 + 416));
        common::milog::MiLogStream::operator<<<int,(int *)0>(v11, &val);
        common::milog::MiLogStream::~MiLogStream(&v18);
        v6 = -1;
      }
      else
      {
        proto::PostEnterSceneReq::PostEnterSceneReq((proto::PostEnterSceneReq *const)(v1 + 224));
        proto::PostEnterSceneRsp::PostEnterSceneRsp((proto::PostEnterSceneRsp *const)(v1 + 480));
        proto::PostEnterSceneReq::set_enter_scene_token((proto::PostEnterSceneReq *const)(v1 + 224), enter_scene_token);
        if ( Robot::sendProto<proto::PostEnterSceneReq,proto::PostEnterSceneRsp>(
               this,
               (proto::PostEnterSceneReq *)(v1 + 224),
               (proto::PostEnterSceneRsp *)(v1 + 480)) )
        {
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/operation/robot_op.cpp",
            "enterScene",
            845);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  &v18,
                  (const char (*)[16])"sendProto fails");
          operator<<(v12, this);
          common::milog::MiLogStream::~MiLogStream(&v18);
          v6 = -1;
        }
        else if ( proto::PostEnterSceneRsp::retcode((const proto::PostEnterSceneRsp *const)(v1 + 480)) )
        {
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/operation/robot_op.cpp",
            "enterScene",
            850);
          v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v18,
                  (const char (*)[34])"PostEnterSceneRsp fails, retcode:");
          val = proto::PostEnterSceneRsp::retcode((const proto::PostEnterSceneRsp *const)(v1 + 480));
          common::milog::MiLogStream::operator<<<int,(int *)0>(v13, &val);
          common::milog::MiLogStream::~MiLogStream(&v18);
          v6 = -1;
        }
        else if ( Scene::getSceneArea(&this->scene_) )
        {
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/operation/robot_op.cpp",
            "enterScene",
            856);
          v14 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  &v18,
                  (const char (*)[19])"getSceneArea fails");
          operator<<(v14, this);
          common::milog::MiLogStream::~MiLogStream(&v18);
          v6 = -1;
        }
        else
        {
          v6 = 0;
        }
        proto::PostEnterSceneRsp::~PostEnterSceneRsp((proto::PostEnterSceneRsp *const)(v1 + 480));
        proto::PostEnterSceneReq::~PostEnterSceneReq((proto::PostEnterSceneReq *const)(v1 + 224));
      }
      proto::EnterSceneDoneRsp::~EnterSceneDoneRsp((proto::EnterSceneDoneRsp *const)(v1 + 416));
      proto::EnterSceneDoneReq::~EnterSceneDoneReq((proto::EnterSceneDoneReq *const)(v1 + 160));
    }
    proto::SceneInitFinishRsp::~SceneInitFinishRsp((proto::SceneInitFinishRsp *const)(v1 + 352));
    proto::SceneInitFinishReq::~SceneInitFinishReq((proto::SceneInitFinishReq *const)(v1 + 96));
  }
  proto::EnterSceneReadyRsp::~EnterSceneReadyRsp((proto::EnterSceneReadyRsp *const)(v1 + 288));
  proto::EnterSceneReadyReq::~EnterSceneReadyReq((proto::EnterSceneReadyReq *const)(v1 + 32));
  result = v6;
  if ( v19 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 863: range 0000000000446208-00000000004469A0
__int64 __fastcall Robot::joinOtherScene(Robot *const this, uint32_t target_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  bool is_agreed; // [rsp+16h] [rbp-8Ah]
  bool is_recvd; // [rsp+17h] [rbp-89h]
  uint32_t idx; // [rsp+18h] [rbp-88h]
  uint32_t idx_0; // [rsp+1Ch] [rbp-84h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-80h] BYREF
  char v16[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 target_uid:862";
  *(_QWORD *)(v2 + 16) = Robot::joinOtherScene;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = target_uid;
  if ( *(char *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->player_);
  this->player_.is_recv_apply_mp_result = 0;
  if ( Robot::playerApplyEnterMp(this, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "joinOtherScene",
      867);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v15,
           (const char (*)[31])"playerApplyEnterMp target_uid:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/operation/robot_op.cpp",
      "joinOtherScene",
      871);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      &v15,
      (const char (*)[44])"wait for PlayerApplyEnterMpResultNotify....");
    common::milog::MiLogStream::~MiLogStream(&v15);
    is_agreed = 0;
    for ( idx = 0; idx <= 9; ++idx )
    {
      Robot::sleep(this, 0x3E8u);
      if ( *(char *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->player_);
      if ( this->player_.is_recv_apply_mp_result )
      {
        this->player_.is_recv_apply_mp_result = 0;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_.is_apply_mp_agreed >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this - 127) & 7) >= *(_BYTE *)(((unsigned __int64)&this->player_.is_apply_mp_agreed >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load1(&this->player_.is_apply_mp_agreed);
        }
        if ( !this->player_.is_apply_mp_agreed )
        {
          common::milog::MiLogStream::create(
            &v15,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/operation/robot_op.cpp",
            "joinOtherScene",
            882);
          common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            &v15,
            (const char (*)[47])"PlayerApplyEnterMpResultNotify not permited!!!");
          common::milog::MiLogStream::~MiLogStream(&v15);
          result = 0xFFFFFFFFLL;
          goto LABEL_37;
        }
        is_agreed = 1;
      }
    }
    if ( !is_agreed )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/operation/robot_op.cpp",
        "joinOtherScene",
        891);
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
        &v15,
        (const char (*)[48])"wait for PlayerApplyEnterMpResultNotify timeout");
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_.is_recv_enter_scene >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 126) & 7) >= *(_BYTE *)(((unsigned __int64)&this->player_.is_recv_enter_scene >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_store1(&this->player_.is_recv_enter_scene);
      }
      this->player_.is_recv_enter_scene = 0;
      if ( Robot::joinPlayerScene(this, *(_DWORD *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/operation/robot_op.cpp",
          "joinOtherScene",
          898);
        v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
               &v15,
               (const char (*)[35])"joinPlayerScene fails, target_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v15);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/operation/robot_op.cpp",
          "joinOtherScene",
          902);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          &v15,
          (const char (*)[36])"wait for PlayerEnterSceneNotify....");
        common::milog::MiLogStream::~MiLogStream(&v15);
        is_recvd = 0;
        for ( idx_0 = 0; idx_0 <= 0x13; ++idx_0 )
        {
          Robot::sleep(this, 0x3E8u);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_.is_recv_enter_scene >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this - 126) & 7) >= *(_BYTE *)(((unsigned __int64)&this->player_.is_recv_enter_scene >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load1(&this->player_.is_recv_enter_scene);
          }
          if ( this->player_.is_recv_enter_scene )
          {
            this->player_.is_recv_enter_scene = 0;
            is_recvd = 1;
          }
        }
        if ( !is_recvd )
        {
          common::milog::MiLogStream::create(
            &v15,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/operation/robot_op.cpp",
            "joinOtherScene",
            916);
          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v15,
            (const char (*)[40])"wait for PlayerEnterSceneNotify timeout");
          common::milog::MiLogStream::~MiLogStream(&v15);
          result = 0xFFFFFFFFLL;
        }
        else if ( Robot::enterScene(this) )
        {
          common::milog::MiLogStream::create(
            &v15,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/operation/robot_op.cpp",
            "joinOtherScene",
            922);
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v15, (const char (*)[17])"enterScene fails");
          common::milog::MiLogStream::~MiLogStream(&v15);
          result = 0xFFFFFFFFLL;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v15,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/operation/robot_op.cpp",
            "joinOtherScene",
            925);
          v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                 &v15,
                 (const char (*)[27])"joinOtherScene target_uid:");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v9,
                  (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" SUCC!");
          common::milog::MiLogStream::~MiLogStream(&v15);
          result = 0LL;
        }
      }
    }
  }
LABEL_37:
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 930: range 00000000004469A2-0000000000446BCE
int32_t __cdecl Robot::leaveScene(Robot *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  common::milog::MiLogStream *v4; // rdx
  int32_t v5; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-F0h] BYREF
  char v8[208]; // [rsp+30h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 24 7 req:931 96 24 7 rsp:932";
  *(_QWORD *)(v1 + 16) = Robot::leaveScene;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  proto::LeaveSceneReq::LeaveSceneReq((proto::LeaveSceneReq *const)(v1 + 32));
  proto::LeaveSceneRsp::LeaveSceneRsp((proto::LeaveSceneRsp *const)(v1 + 96));
  if ( Robot::sendProto<proto::LeaveSceneReq,proto::LeaveSceneRsp>(
         this,
         (proto::LeaveSceneReq *)(v1 + 32),
         (proto::LeaveSceneRsp *)(v1 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "leaveScene",
      935);
    v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v7, (const char (*)[18])"sendProto fails, ");
    operator<<(v4, this);
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = -1;
  }
  else
  {
    v5 = proto::LeaveSceneRsp::retcode((const proto::LeaveSceneRsp *const)(v1 + 96));
  }
  proto::LeaveSceneRsp::~LeaveSceneRsp((proto::LeaveSceneRsp *const)(v1 + 96));
  proto::LeaveSceneReq::~LeaveSceneReq((proto::LeaveSceneReq *const)(v1 + 32));
  result = v5;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 942: range 0000000000446BD0-0000000000446E45
int32_t __cdecl Robot::gmTalk(Robot *const this, const std::string *msg)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-110h] BYREF
  char v9[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 7 req:943 112 40 7 rsp:944";
  *(_QWORD *)(v2 + 16) = Robot::gmTalk;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  proto::GmTalkReq::GmTalkReq((proto::GmTalkReq *const)(v2 + 48));
  proto::GmTalkRsp::GmTalkRsp((proto::GmTalkRsp *const)(v2 + 112));
  proto::GmTalkReq::set_msg((proto::GmTalkReq *const)(v2 + 48), msg);
  if ( Robot::sendProto<proto::GmTalkReq,proto::GmTalkRsp>(
         this,
         (proto::GmTalkReq *)(v2 + 48),
         (proto::GmTalkRsp *)(v2 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "gmTalk",
      948);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v8, (const char (*)[18])"sendProto fails, ");
    operator<<(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v8);
    v6 = -1;
  }
  else
  {
    v6 = proto::GmTalkRsp::retcode((const proto::GmTalkRsp *const)(v2 + 112));
  }
  proto::GmTalkRsp::~GmTalkRsp((proto::GmTalkRsp *const)(v2 + 112));
  proto::GmTalkReq::~GmTalkReq((proto::GmTalkReq *const)(v2 + 48));
  result = v6;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 956: range 0000000000446E46-00000000004475B7
int32_t __cdecl Robot::avatarMove(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rax
  std::vector<float>::reference v7; // rax
  _DWORD *v8; // rdx
  std::vector<float>::reference v9; // rax
  _DWORD *v10; // rdx
  std::vector<float>::reference v11; // rax
  _DWORD *v12; // rdx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t EntityId; // eax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-1A8h]
  std::allocator<char> __a; // [rsp+17h] [rbp-199h] BYREF
  proto::MotionInfo *motion_info; // [rsp+18h] [rbp-198h]
  common::milog::MiLogStream v23; // [rsp+20h] [rbp-190h] BYREF
  char v24[368]; // [rsp+40h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 16 motion_state:965 48 12 11 new_pos:968 80 16 18 cur_avatar_ptr:957 112 24 11 pos_vec:96"
                        "9 176 32 11 pos_str:964 240 40 7 req:980";
  *(_QWORD *)(v2 + 16) = Robot::avatarMove;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = 0x4000000;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -218103808;
  v4[536862729] = -202116109;
  Player::getCurAvatar((const Player *const)(v2 + 80));
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 80), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "avatarMove",
      960);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v23, (const char (*)[19])"getCurAvatar fails");
    common::milog::MiLogStream::~MiLogStream(&v23);
    v5 = -1;
  }
  else
  {
    std::string::basic_string((std::string *const)(v2 + 176));
    *(_DWORD *)(v2 + 32) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v23, off_DEB5DC0, &__a);
    ScriptUtil::getTableValue<std::string,char const(&)[6],unsigned int &>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v23,
      (std::string *)(v2 + 176),
      (const char (*)[6])"state",
      (unsigned int *)(v2 + 32),
      (const char (*)[6])param_table,
      (unsigned int *)this);
    std::string::~string((std::string *const)&v23);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/operation/robot_op.cpp",
      "avatarMove",
      967);
    v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v23, (const char (*)[9])"pos_str:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 176));
    common::milog::MiLogStream::~MiLogStream(&v23);
    Vector3::Vector3((Vector3 *const)(v2 + 48), 0.0, 0.0, 0.0);
    std::vector<float>::vector((std::vector<float> *const)(v2 + 112));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v23, ",", &__a);
    common::tools::StringUtils::splitToList<float>(
      (const std::string *)(v2 + 176),
      (const std::string *)&v23,
      (std::vector<float> *)(v2 + 112),
      0);
    std::string::~string((std::string *const)&v23);
    std::allocator<char>::~allocator(&__a);
    if ( std::vector<float>::size((const std::vector<float> *const)(v2 + 112)) > 2 )
    {
      v7 = std::vector<float>::operator[]((std::vector<float> *const)(v2 + 112), 0LL);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      *(_DWORD *)(v2 + 48) = *v8;
      v9 = std::vector<float>::operator[]((std::vector<float> *const)(v2 + 112), 1uLL);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      *(_DWORD *)(v2 + 52) = *v10;
      v11 = std::vector<float>::operator[]((std::vector<float> *const)(v2 + 112), 2uLL);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      *(_DWORD *)(v2 + 56) = *v12;
    }
    v13 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    Entity::setMotionState(v13, *(proto::MotionState *)(v2 + 32));
    v14 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    Entity::setPos(v14, (const Vector3 *)(v2 + 48));
    proto::SceneEntityMoveReq::SceneEntityMoveReq((proto::SceneEntityMoveReq *const)(v2 + 240));
    v15 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    EntityId = Entity::getEntityId(v15);
    proto::SceneEntityMoveReq::set_entity_id((proto::SceneEntityMoveReq *const)(v2 + 240), EntityId);
    motion_info = proto::SceneEntityMoveReq::mutable_motion_info((proto::SceneEntityMoveReq *const)(v2 + 240));
    v17 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    Entity::getMotionInfo(v17, motion_info);
    if ( Robot::sendProto<proto::SceneEntityMoveReq>(thisa, (proto::SceneEntityMoveReq *)(v2 + 240)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "avatarMove",
        986);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v23, (const char (*)[16])"sendProto fails");
      operator<<(v18, thisa);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
    proto::SceneEntityMoveReq::~SceneEntityMoveReq((proto::SceneEntityMoveReq *const)(v2 + 240));
    std::vector<float>::~vector((std::vector<float> *const)(v2 + 112));
    std::string::~string((std::string *const)(v2 + 176));
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 80));
  result = v5;
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 993: range 00000000004475B8-00000000004480E0
int32_t __cdecl Robot::avatarRandMove(Robot *const this, const luabind::adl::object *param_table)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::vector<float>::reference v8; // rax
  float *v9; // rdx
  std::vector<float>::reference v10; // rax
  float *v11; // rdx
  std::vector<float>::reference v12; // rax
  unsigned int *v13; // rdx
  __m128i v14; // xmm0
  std::vector<float>::reference v15; // rax
  float *v16; // rdx
  std::vector<float>::reference v17; // rax
  float *v18; // rdx
  std::vector<float>::reference v19; // rax
  float *v20; // rdx
  std::vector<float>::reference v21; // rax
  unsigned int *v22; // rdx
  __m128i v23; // xmm0
  int v24; // r15d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  uint32_t EntityId; // eax
  common::milog::MiLogStream *v27; // rax
  int32_t result; // eax
  char *v29; // [rsp+0h] [rbp-240h]
  std::string *v30; // [rsp+8h] [rbp-238h]
  float max; // [rsp+Ch] [rbp-234h]
  float maxa; // [rsp+Ch] [rbp-234h]
  float maxb; // [rsp+Ch] [rbp-234h]
  float maxc; // [rsp+Ch] [rbp-234h]
  Robot *thisa; // [rsp+18h] [rbp-228h]
  std::allocator<char> __a; // [rsp+2Fh] [rbp-211h] BYREF
  uint32_t i; // [rsp+30h] [rbp-210h]
  float x; // [rsp+34h] [rbp-20Ch]
  float y; // [rsp+38h] [rbp-208h]
  float z; // [rsp+3Ch] [rbp-204h]
  proto::MotionInfo *motion_info_ptr; // [rsp+40h] [rbp-200h]
  proto::Vector *pos_ptr; // [rsp+48h] [rbp-1F8h]
  std::string name; // [rsp+50h] [rbp-1F0h] BYREF
  char v44[92][5]; // [rsp+70h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 9 count:997 48 16 19 cur_avatar_ptr:1029 80 24 17 begin_pos_vec:999 144 24 13 size_vec:10"
                        "00 208 32 17 begin_pos_str:995 272 32 12 size_str:996 336 40 7 req:994";
  *(_QWORD *)(v3 + 16) = Robot::avatarRandMove;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = -218959360;
  v5[536862724] = 62194;
  v5[536862725] = -218959360;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -218103808;
  v5[536862732] = -202116109;
  proto::SceneEntityMoveReq::SceneEntityMoveReq((proto::SceneEntityMoveReq *const)(v3 + 336));
  std::string::basic_string((std::string *const)(v3 + 208));
  std::string::basic_string((std::string *const)(v3 + 272));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "begin_pos", &__a);
  ScriptUtil::getTableValue<std::string,char const(&)[5],std::string&,char const(&)[6],unsigned int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (std::string *)(v3 + 208),
    (const char (*)[5])"size",
    (std::string *)(v3 + 272),
    (const char (*)[6])"count",
    (unsigned int *)(v3 + 32),
    v44,
    v30,
    (const char (*)[6])param_table,
    (unsigned int *)this);
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  std::vector<float>::vector((std::vector<float> *const)(v3 + 80));
  std::vector<float>::vector((std::vector<float> *const)(v3 + 144));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, ",", &__a);
  common::tools::StringUtils::splitToList<float>(
    (const std::string *)(v3 + 208),
    &name,
    (std::vector<float> *)(v3 + 80),
    0);
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( std::vector<float>::size((const std::vector<float> *const)(v3 + 80)) > 2 )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&name, ",", &__a);
    common::tools::StringUtils::splitToList<float>(
      (const std::string *)(v3 + 272),
      &name,
      (std::vector<float> *)(v3 + 144),
      0);
    std::string::~string(&name);
    std::allocator<char>::~allocator(&__a);
    if ( std::vector<float>::size((const std::vector<float> *const)(v3 + 144)) > 1 )
    {
      for ( i = 0; i < *(_DWORD *)(v3 + 32); ++i )
      {
        v8 = std::vector<float>::operator[]((std::vector<float> *const)(v3 + 80), 0LL);
        v9 = v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        max = *v9;
        v10 = std::vector<float>::operator[]((std::vector<float> *const)(v3 + 144), 0LL);
        v11 = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        maxa = *v11 + max;
        v12 = std::vector<float>::operator[]((std::vector<float> *const)(v3 + 80), 0LL);
        v13 = (unsigned int *)v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        v14 = _mm_cvtsi32_si128(*v13);
        *(float *)v14.m128i_i32 = common::tools::RandomUtils::rand<float>(*(float *)v14.m128i_i32, maxa);
        LODWORD(x) = _mm_cvtsi128_si32(v14);
        v15 = std::vector<float>::operator[]((std::vector<float> *const)(v3 + 80), 1uLL);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        y = *v16;
        v17 = std::vector<float>::operator[]((std::vector<float> *const)(v3 + 80), 2uLL);
        v18 = v17;
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v17);
        }
        maxb = *v18;
        v19 = std::vector<float>::operator[]((std::vector<float> *const)(v3 + 144), 1uLL);
        v20 = v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
        maxc = *v20 + maxb;
        v21 = std::vector<float>::operator[]((std::vector<float> *const)(v3 + 80), 2uLL);
        v22 = (unsigned int *)v21;
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v21);
        }
        v23 = _mm_cvtsi32_si128(*v22);
        *(float *)v23.m128i_i32 = common::tools::RandomUtils::rand<float>(*(float *)v23.m128i_i32, maxc);
        LODWORD(z) = _mm_cvtsi128_si32(v23);
        motion_info_ptr = proto::SceneEntityMoveReq::mutable_motion_info((proto::SceneEntityMoveReq *const)(v3 + 336));
        if ( motion_info_ptr )
        {
          pos_ptr = proto::MotionInfo::mutable_pos(motion_info_ptr);
          if ( pos_ptr )
          {
            proto::Vector::set_x(pos_ptr, x);
            proto::Vector::set_y(pos_ptr, y);
            proto::Vector::set_z(pos_ptr, z);
          }
        }
        Player::getCurAvatar((const Player *const)(v3 + 48));
        if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 48), 0LL) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&name,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/operation/robot_op.cpp",
            "avatarRandMove",
            1032);
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            (common::milog::MiLogStream *const)&name,
            (const char (*)[19])"getCurAvatar fails");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
          v2 = -1;
          v24 = 0;
        }
        else
        {
          v25 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
          EntityId = Entity::getEntityId(v25);
          proto::SceneEntityMoveReq::set_entity_id((proto::SceneEntityMoveReq *const)(v3 + 336), EntityId);
          if ( Robot::sendProto<proto::SceneEntityMoveReq>(thisa, (proto::SceneEntityMoveReq *)(v3 + 336)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&name,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/operation/robot_op.cpp",
              "avatarRandMove",
              1038);
            v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)&name,
                    (const char (*)[16])"sendProto fails");
            operator<<(v27, thisa);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
            v2 = -1;
            v24 = 0;
          }
          else
          {
            Robot::asyncWait(thisa, 0x64u);
            v24 = 1;
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 48));
        if ( v24 != 1 )
          goto LABEL_35;
      }
      v2 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "avatarRandMove",
        1010);
      v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
             (common::milog::MiLogStream *const)&name,
             (const char (*)[14])"invalid size:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)(v3 + 272));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v2 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "avatarRandMove",
      1004);
    v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[19])"invalid begin_pos:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v3 + 208));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v2 = -1;
  }
LABEL_35:
  std::vector<float>::~vector((std::vector<float> *const)(v3 + 144));
  std::vector<float>::~vector((std::vector<float> *const)(v3 + 80));
  std::string::~string((std::string *const)(v3 + 272));
  std::string::~string((std::string *const)(v3 + 208));
  proto::SceneEntityMoveReq::~SceneEntityMoveReq((proto::SceneEntityMoveReq *const)(v3 + 336));
  result = v2;
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 1047: range 00000000004480E2-00000000004488DF
__int64 __fastcall Robot::entityMove(Robot *const this, uint32_t entity_id, luabind::adl::object *param_table)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::vector<float>::reference v10; // rax
  _DWORD *v11; // rdx
  std::vector<float>::reference v12; // rax
  _DWORD *v13; // rdx
  std::vector<float>::reference v14; // rax
  _DWORD *v15; // rdx
  Entity *v16; // rax
  Entity *v17; // rax
  common::milog::MiLogStream *v18; // rax
  __int64 result; // rax
  const char (*v20)[6]; // [rsp+0h] [rbp-1F0h]
  std::allocator<char> __a; // [rsp+2Fh] [rbp-1C1h] BYREF
  proto::MotionInfo *motion_info; // [rsp+30h] [rbp-1C0h]
  proto::Vector *proto_pos; // [rsp+38h] [rbp-1B8h]
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-1B0h] BYREF
  char v26[400]; // [rsp+60h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 17 motion_state:1055 64 4 14 entity_id:1046 80 12 12 new_pos:1058 112 16 15 entity_ptr:10"
                        "69 144 24 12 pos_vec:1059 208 32 12 pos_str:1054 272 40 8 req:1073";
  *(_QWORD *)(v3 + 16) = Robot::entityMove;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = 0x4000000;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = -218959360;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -218103808;
  v5[536862730] = -202116109;
  *(_DWORD *)(v3 + 64) = entity_id;
  if ( *(_DWORD *)(v3 + 64) )
  {
    std::string::basic_string((std::string *const)(v3 + 208));
    *(_DWORD *)(v3 + 48) = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v25, off_DEB5DC0, &__a);
    ScriptUtil::getTableValue<std::string,char const(&)[6],unsigned int &>(
      &ScriptUtil::no_exception_instance,
      param_table,
      (const std::string *)&v25,
      (std::string *)(v3 + 208),
      (const char (*)[6])"state",
      (unsigned int *)(v3 + 48),
      v20,
      (unsigned int *)param_table);
    std::string::~string((std::string *const)&v25);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/operation/robot_op.cpp",
      "entityMove",
      1057);
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v25, (const char (*)[11])"entity_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 64));
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])" pos_str:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)(v3 + 208));
    common::milog::MiLogStream::~MiLogStream(&v25);
    Vector3::Vector3((Vector3 *const)(v3 + 80), 0.0, 0.0, 0.0);
    std::vector<float>::vector((std::vector<float> *const)(v3 + 144));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v25, ",", &__a);
    common::tools::StringUtils::splitToList<float>(
      (const std::string *)(v3 + 208),
      (const std::string *)&v25,
      (std::vector<float> *)(v3 + 144),
      0);
    std::string::~string((std::string *const)&v25);
    std::allocator<char>::~allocator(&__a);
    if ( std::vector<float>::size((const std::vector<float> *const)(v3 + 144)) > 2 )
    {
      v10 = std::vector<float>::operator[]((std::vector<float> *const)(v3 + 144), 0LL);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      *(_DWORD *)(v3 + 80) = *v11;
      v12 = std::vector<float>::operator[]((std::vector<float> *const)(v3 + 144), 1uLL);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      *(_DWORD *)(v3 + 84) = *v13;
      v14 = std::vector<float>::operator[]((std::vector<float> *const)(v3 + 144), 2uLL);
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      *(_DWORD *)(v3 + 88) = *v15;
    }
    Robot::findEntity((Robot *const)(v3 + 112), (uint32_t)this);
    v16 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    Entity::setMotionState(v16, *(proto::MotionState *)(v3 + 48));
    v17 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    Entity::setPos(v17, (const Vector3 *)(v3 + 80));
    proto::SceneEntityMoveReq::SceneEntityMoveReq((proto::SceneEntityMoveReq *const)(v3 + 272));
    proto::SceneEntityMoveReq::set_entity_id((proto::SceneEntityMoveReq *const)(v3 + 272), *(_DWORD *)(v3 + 64));
    motion_info = proto::SceneEntityMoveReq::mutable_motion_info((proto::SceneEntityMoveReq *const)(v3 + 272));
    proto::MotionInfo::set_state(motion_info, *(proto::MotionState *)(v3 + 48));
    proto_pos = proto::MotionInfo::mutable_pos(motion_info);
    Vector3::operator proto::Vector((proto::Vector *)&v25, (const Vector3 *const)(v3 + 80));
    proto::Vector::operator=(proto_pos, (proto::Vector *)&v25);
    proto::Vector::~Vector((proto::Vector *const)&v25);
    if ( Robot::sendProto<proto::SceneEntityMoveReq>(this, (proto::SceneEntityMoveReq *)(v3 + 272)) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "entityMove",
        1081);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v25, (const char (*)[16])"sendProto fails");
      operator<<(v18, this);
      common::milog::MiLogStream::~MiLogStream(&v25);
      v6 = -1;
    }
    else
    {
      v6 = 0;
    }
    proto::SceneEntityMoveReq::~SceneEntityMoveReq((proto::SceneEntityMoveReq *const)(v3 + 272));
    std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v3 + 112));
    std::vector<float>::~vector((std::vector<float> *const)(v3 + 144));
    std::string::~string((std::string *const)(v3 + 208));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "entityMove",
      1050);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v25, (const char (*)[15])"entity_id is 0");
    common::milog::MiLogStream::~MiLogStream(&v25);
    v6 = -1;
  }
  result = v6;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 1088: range 00000000004489C6-0000000000448E9C
int32_t __cdecl Robot::npcTalk(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rdx
  uint32_t v8; // eax
  int32_t result; // eax
  char *v10; // [rsp+0h] [rbp-160h]
  Scene *v11; // [rsp+8h] [rbp-158h]
  std::allocator<char> __a; // [rsp+2Fh] [rbp-131h] BYREF
  std::string name; // [rsp+30h] [rbp-130h] BYREF
  char v14[34][8]; // [rsp+50h] [rbp-110h] BYREF
  Robot::npcTalk::<lambda(Npc&)> v15; // 0:esi.4,8:rdx.8

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 11 npc_id:1091 48 4 12 talk_id:1092 64 4 18 npc_entity_id:1094 80 32 8 req:1089 144 40 8 rsp:1090";
  *(_QWORD *)(v2 + 16) = Robot::npcTalk;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = 61956;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  proto::NpcTalkReq::NpcTalkReq((proto::NpcTalkReq *const)(v2 + 80));
  proto::NpcTalkRsp::NpcTalkRsp((proto::NpcTalkRsp *const)(v2 + 144));
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "npc_id", &__a);
  ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32),
    (const char (*)[8])"talk_id",
    (unsigned int *)(v2 + 48),
    v14,
    &v11->scene_id_);
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  *(_DWORD *)(v2 + 64) = 0;
  v15.__npc_entity_id = (uint32_t *)(v2 + 64);
  v15.__npc_id = *(_DWORD *)(v2 + 32);
  std::function<ForeachPolicy ()(Npc &)>::function<Robot::npcTalk(luabind::adl::object const&)::{lambda(Npc &)#1},void,void>(
    (std::function<ForeachPolicy(Npc&)> *const)&name,
    v15);
  Scene::foreachEntity<Npc>(&this->scene_, (std::function<ForeachPolicy(Npc&)> *)&name);
  std::function<ForeachPolicy ()(Npc &)>::~function((std::function<ForeachPolicy(Npc&)> *const)&name);
  if ( *(_DWORD *)(v2 + 64) )
  {
    proto::NpcTalkReq::set_npc_entity_id((proto::NpcTalkReq *const)(v2 + 80), *(_DWORD *)(v2 + 64));
    proto::NpcTalkReq::set_talk_id((proto::NpcTalkReq *const)(v2 + 80), *(_DWORD *)(v2 + 48));
    if ( Robot::sendProto<proto::NpcTalkReq,proto::NpcTalkRsp>(
           this,
           (proto::NpcTalkReq *)(v2 + 80),
           (proto::NpcTalkRsp *)(v2 + 144)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "npcTalk",
        1113);
      v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             (common::milog::MiLogStream *const)&name,
             (const char (*)[18])"sendProto fails, ");
      operator<<(v7, this);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
    else
    {
      v8 = proto::NpcTalkRsp::cur_talk_id((const proto::NpcTalkRsp *const)(v2 + 144));
      Player::setCurTalkId(&this->player_, v8);
      v6 = proto::NpcTalkRsp::retcode((const proto::NpcTalkRsp *const)(v2 + 144));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "npcTalk",
      1106);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[19])"can't find npc_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  proto::NpcTalkRsp::~NpcTalkRsp((proto::NpcTalkRsp *const)(v2 + 144));
  proto::NpcTalkReq::~NpcTalkReq((proto::NpcTalkReq *const)(v2 + 80));
  result = v6;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1095: range 00000000004488E0-00000000004489C4
ForeachPolicy __cdecl Robot::npcTalk(luabind::adl::object const&)::{lambda(Npc &)#1}::operator()(
        const Robot::npcTalk::<lambda(Npc&)> *const __closure,
        Npc *npc)
{
  uint32_t NpcId; // ecx
  Npc *v3; // rax
  uint32_t *npc_entity_id; // rbx
  uint32_t EntityId; // ecx

  NpcId = Npc::getNpcId(npc);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( NpcId != __closure->__npc_id )
    return 0;
  v3 = npc;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__npc_entity_id >> 3) + 0x7FFF8000) )
    v3 = (Npc *)__asan_report_load8(&__closure->__npc_entity_id);
  npc_entity_id = __closure->__npc_entity_id;
  EntityId = Entity::getEntityId(v3);
  if ( *(_BYTE *)(((unsigned __int64)npc_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)npc_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)npc_entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(npc_entity_id);
  }
  *npc_entity_id = EntityId;
  return 1;
};

// Line 1121: range 0000000000448E9E-000000000044915E
int32_t __cdecl Robot::changeGameTime(Robot *const this, uint32_t game_time, bool is_force_set)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  uint32_t v8; // edx
  int32_t result; // eax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-F0h] BYREF
  char v12[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 8 req:1122 96 32 8 rsp:1123";
  *(_QWORD *)(v3 + 16) = Robot::changeGameTime;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  proto::ChangeGameTimeReq::ChangeGameTimeReq((proto::ChangeGameTimeReq *const)(v3 + 32));
  proto::ChangeGameTimeRsp::ChangeGameTimeRsp((proto::ChangeGameTimeRsp *const)(v3 + 96));
  proto::ChangeGameTimeReq::set_game_time((proto::ChangeGameTimeReq *const)(v3 + 32), game_time);
  proto::ChangeGameTimeReq::set_is_force_set((proto::ChangeGameTimeReq *const)(v3 + 32), is_force_set);
  if ( Robot::sendProto<proto::ChangeGameTimeReq,proto::ChangeGameTimeRsp>(
         this,
         (proto::ChangeGameTimeReq *)(v3 + 32),
         (proto::ChangeGameTimeRsp *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "changeGameTime",
      1128);
    v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v11, (const char (*)[18])"sendProto fails, ");
    operator<<(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v7 = -1;
  }
  else
  {
    if ( !proto::ChangeGameTimeRsp::retcode((const proto::ChangeGameTimeRsp *const)(v3 + 96)) )
    {
      v8 = proto::ChangeGameTimeRsp::cur_game_time((const proto::ChangeGameTimeRsp *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->game_time_);
      }
      this->game_time_ = v8;
    }
    v7 = proto::ChangeGameTimeRsp::retcode((const proto::ChangeGameTimeRsp *const)(v3 + 96));
  }
  proto::ChangeGameTimeRsp::~ChangeGameTimeRsp((proto::ChangeGameTimeRsp *const)(v3 + 96));
  proto::ChangeGameTimeReq::~ChangeGameTimeReq((proto::ChangeGameTimeReq *const)(v3 + 32));
  result = v7;
  if ( v12 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1139: range 0000000000449160-0000000000449560
int32_t __cdecl Robot::getSceneTransPoint(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-111h] BYREF
  std::string name; // [rsp+20h] [rbp-110h] BYREF
  char v10[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 13 scene_id:1142 48 4 15 belong_uid:1145 64 32 8 req:1140 128 32 8 rsp:1141";
  *(_QWORD *)(v2 + 16) = Robot::getSceneTransPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  proto::GetScenePointReq::GetScenePointReq((proto::GetScenePointReq *const)(v2 + 64));
  proto::GetScenePointReq::GetScenePointReq((proto::GetScenePointReq *const)(v2 + 128));
  *(_DWORD *)(v2 + 32) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "scene_id", &__a);
  ScriptUtil::getTableValue<unsigned int>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32));
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  proto::GetScenePointReq::set_scene_id((proto::GetScenePointReq *const)(v2 + 64), *(_DWORD *)(v2 + 32));
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "belong_uid", &__a);
  ScriptUtil::getTableValue<unsigned int>(
    &ScriptUtil::no_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 48));
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( !*(_DWORD *)(v2 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->conf_.uid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->conf_.uid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->conf_.uid);
    }
    *(_DWORD *)(v2 + 48) = this->conf_.uid;
  }
  proto::GetScenePointReq::set_belong_uid((proto::GetScenePointReq *const)(v2 + 64), *(_DWORD *)(v2 + 48));
  if ( Robot::sendProto<proto::GetScenePointReq,proto::GetScenePointReq>(
         this,
         (proto::GetScenePointReq *)(v2 + 64),
         (proto::GetScenePointReq *)(v2 + 128)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getSceneTransPoint",
      1154);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[18])"sendProto fails, ");
    operator<<(v5, this);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v6 = 0;
  }
  proto::GetScenePointReq::~GetScenePointReq((proto::GetScenePointReq *const)(v2 + 128));
  proto::GetScenePointReq::~GetScenePointReq((proto::GetScenePointReq *const)(v2 + 64));
  result = v6;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1161: range 0000000000449562-0000000000449815
int32_t __cdecl Robot::enterTransPointRegionNotify(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-E8h]
  std::allocator<char> __a; // [rsp+1Fh] [rbp-D1h] BYREF
  std::string name; // [rsp+20h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 scene_id:1163 48 4 13 point_id:1164 64 32 11 notify:1162";
  *(_QWORD *)(v2 + 16) = Robot::enterTransPointRegionNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862723] = -202116109;
  proto::EnterTransPointRegionNotify::EnterTransPointRegionNotify((proto::EnterTransPointRegionNotify *const)(v2 + 64));
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "scene_id", &__a);
  ScriptUtil::getTableValue<unsigned int,char const(&)[9],unsigned int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32),
    (const char (*)[9])"point_id",
    (unsigned int *)(v2 + 48),
    (const char (*)[9])param_table,
    (unsigned int *)this);
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  proto::EnterTransPointRegionNotify::set_scene_id(
    (proto::EnterTransPointRegionNotify *const)(v2 + 64),
    *(_DWORD *)(v2 + 32));
  proto::EnterTransPointRegionNotify::set_point_id(
    (proto::EnterTransPointRegionNotify *const)(v2 + 64),
    *(_DWORD *)(v2 + 48));
  if ( Robot::sendProto<proto::EnterTransPointRegionNotify>(thisa, (proto::EnterTransPointRegionNotify *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "enterTransPointRegionNotify",
      1170);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[18])"sendProto fails, ");
    operator<<(v5, thisa);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v6 = 0;
  }
  proto::EnterTransPointRegionNotify::~EnterTransPointRegionNotify((proto::EnterTransPointRegionNotify *const)(v2 + 64));
  result = v6;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1177: range 0000000000449816-0000000000449AC9
int32_t __cdecl Robot::exitTransPointRegionNotify(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-E8h]
  std::allocator<char> __a; // [rsp+1Fh] [rbp-D1h] BYREF
  std::string name; // [rsp+20h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 scene_id:1179 48 4 13 point_id:1180 64 32 11 notify:1178";
  *(_QWORD *)(v2 + 16) = Robot::exitTransPointRegionNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862723] = -202116109;
  proto::ExitTransPointRegionNotify::ExitTransPointRegionNotify((proto::ExitTransPointRegionNotify *const)(v2 + 64));
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "scene_id", &__a);
  ScriptUtil::getTableValue<unsigned int,char const(&)[9],unsigned int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32),
    (const char (*)[9])"point_id",
    (unsigned int *)(v2 + 48),
    (const char (*)[9])param_table,
    (unsigned int *)this);
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  proto::ExitTransPointRegionNotify::set_scene_id(
    (proto::ExitTransPointRegionNotify *const)(v2 + 64),
    *(_DWORD *)(v2 + 32));
  proto::ExitTransPointRegionNotify::set_point_id(
    (proto::ExitTransPointRegionNotify *const)(v2 + 64),
    *(_DWORD *)(v2 + 48));
  if ( Robot::sendProto<proto::ExitTransPointRegionNotify>(thisa, (proto::ExitTransPointRegionNotify *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "exitTransPointRegionNotify",
      1186);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[18])"sendProto fails, ");
    operator<<(v5, thisa);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v6 = 0;
  }
  proto::ExitTransPointRegionNotify::~ExitTransPointRegionNotify((proto::ExitTransPointRegionNotify *const)(v2 + 64));
  result = v6;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1193: range 0000000000449ACA-0000000000449DF3
int32_t __cdecl Robot::sceneTransToPoint(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-128h]
  std::allocator<char> __a; // [rsp+1Fh] [rbp-111h] BYREF
  std::string name; // [rsp+20h] [rbp-110h] BYREF
  char v11[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 13 scene_id:1196 48 4 13 point_id:1197 64 32 8 req:1194 128 32 8 rsp:1195";
  *(_QWORD *)(v2 + 16) = Robot::sceneTransToPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  proto::SceneTransToPointReq::SceneTransToPointReq((proto::SceneTransToPointReq *const)(v2 + 64));
  proto::SceneTransToPointRsp::SceneTransToPointRsp((proto::SceneTransToPointRsp *const)(v2 + 128));
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "scene_id", &__a);
  ScriptUtil::getTableValue<unsigned int,char const(&)[9],unsigned int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32),
    (const char (*)[9])"point_id",
    (unsigned int *)(v2 + 48),
    (const char (*)[9])param_table,
    (unsigned int *)this);
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  proto::SceneTransToPointReq::set_scene_id((proto::SceneTransToPointReq *const)(v2 + 64), *(_DWORD *)(v2 + 32));
  proto::SceneTransToPointReq::set_point_id((proto::SceneTransToPointReq *const)(v2 + 64), *(_DWORD *)(v2 + 48));
  if ( Robot::sendProto<proto::SceneTransToPointReq,proto::SceneTransToPointRsp>(
         thisa,
         (proto::SceneTransToPointReq *)(v2 + 64),
         (proto::SceneTransToPointRsp *)(v2 + 128)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "sceneTransToPoint",
      1203);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[18])"sendProto fails, ");
    operator<<(v5, thisa);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v6 = proto::SceneTransToPointRsp::retcode((const proto::SceneTransToPointRsp *const)(v2 + 128));
  }
  proto::SceneTransToPointRsp::~SceneTransToPointRsp((proto::SceneTransToPointRsp *const)(v2 + 128));
  proto::SceneTransToPointReq::~SceneTransToPointReq((proto::SceneTransToPointReq *const)(v2 + 64));
  result = v6;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1210: range 0000000000449DF4-000000000044A115
int32_t __cdecl Robot::getSceneArea(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-131h] BYREF
  std::string name; // [rsp+20h] [rbp-130h] BYREF
  char v10[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 scene_id:1213 48 32 8 req:1211 112 80 8 rsp:1212";
  *(_QWORD *)(v2 + 16) = Robot::getSceneArea;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862726] = -202116109;
  proto::GetSceneAreaReq::GetSceneAreaReq((proto::GetSceneAreaReq *const)(v2 + 48));
  proto::GetSceneAreaRsp::GetSceneAreaRsp((proto::GetSceneAreaRsp *const)(v2 + 112));
  *(_DWORD *)(v2 + 32) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "scene_id", &__a);
  ScriptUtil::getTableValue<unsigned int>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32));
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  proto::GetSceneAreaReq::set_scene_id((proto::GetSceneAreaReq *const)(v2 + 48), *(_DWORD *)(v2 + 32));
  if ( Robot::sendProto<proto::GetSceneAreaReq,proto::GetSceneAreaRsp>(
         this,
         (proto::GetSceneAreaReq *)(v2 + 48),
         (proto::GetSceneAreaRsp *)(v2 + 112)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getSceneArea",
      1218);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[18])"sendProto fails, ");
    operator<<(v5, this);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v6 = proto::GetSceneAreaRsp::retcode((const proto::GetSceneAreaRsp *const)(v2 + 112));
  }
  proto::GetSceneAreaRsp::~GetSceneAreaRsp((proto::GetSceneAreaRsp *const)(v2 + 112));
  proto::GetSceneAreaReq::~GetSceneAreaReq((proto::GetSceneAreaReq *const)(v2 + 48));
  result = v6;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1257: range 000000000044A116-000000000044A5B5
int32_t __cdecl Robot::setUpAvatarTeam(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int64_t *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-1E8h]
  const char (*v10)[16]; // [rsp+10h] [rbp-1E0h]
  __int64 *v11; // [rsp+18h] [rbp-1D8h] BYREF
  std::vector<long int>::iterator __for_begin; // [rsp+20h] [rbp-1D0h] BYREF
  std::vector<long int>::iterator __for_end; // [rsp+28h] [rbp-1C8h] BYREF
  std::vector<long int> *__for_range; // [rsp+30h] [rbp-1C0h]
  int64_t avatar_id; // [rsp+38h] [rbp-1B8h]
  std::string name; // [rsp+40h] [rbp-1B0h] BYREF
  char v17[400]; // [rsp+60h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 12 team_id:1261 64 8 15 cur_avatar:1263 96 24 15 avatar_vec:1262 160 56 8 req:1258 256 64 8 rsp:1259";
  *(_QWORD *)(v2 + 16) = Robot::setUpAvatarTeam;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862730] = -202116109;
  proto::SetUpAvatarTeamReq::SetUpAvatarTeamReq((proto::SetUpAvatarTeamReq *const)(v2 + 160));
  proto::SetUpAvatarTeamRsp::SetUpAvatarTeamRsp((proto::SetUpAvatarTeamRsp *const)(v2 + 256));
  *(_DWORD *)(v2 + 48) = 0;
  std::vector<long>::vector((std::vector<long int> *const)(v2 + 96));
  *(_QWORD *)(v2 + 64) = 0LL;
  std::allocator<char>::allocator((char *)&v11 + 7);
  std::string::basic_string<std::allocator<char>>(&name, "team_id", (const std::allocator<char> *)&v11 + 7);
  ScriptUtil::getTableValue<int,char const(&)[22],std::vector<long> &,char const(&)[16],long &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (int *)(v2 + 48),
    (const char (*)[22])"avatar_team_guid_list",
    (std::vector<long int> *)(v2 + 96),
    (const char (*)[16])"cur_avatar_guid",
    (__int64 *)(v2 + 64),
    (const char (*)[22])param_table,
    (std::vector<long int> *)this,
    v10,
    v11);
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v11 + 7);
  proto::SetUpAvatarTeamReq::set_team_id((proto::SetUpAvatarTeamReq *const)(v2 + 160), *(_DWORD *)(v2 + 48));
  __for_range = (std::vector<long int> *)(v2 + 96);
  __for_begin._M_current = std::vector<long>::begin((std::vector<long int> *const)(v2 + 96))._M_current;
  __for_end._M_current = std::vector<long>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<long *,std::vector<long>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<long *,std::vector<long>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      v5 = (int64_t *)__asan_report_load8(v5);
    avatar_id = *v5;
    proto::SetUpAvatarTeamReq::add_avatar_team_guid_list((proto::SetUpAvatarTeamReq *const)(v2 + 160), avatar_id);
    __gnu_cxx::__normal_iterator<long *,std::vector<long>>::operator++(&__for_begin);
  }
  proto::SetUpAvatarTeamReq::set_cur_avatar_guid((proto::SetUpAvatarTeamReq *const)(v2 + 160), *(_QWORD *)(v2 + 64));
  if ( Robot::sendProto<proto::SetUpAvatarTeamReq,proto::SetUpAvatarTeamRsp>(
         thisa,
         (proto::SetUpAvatarTeamReq *)(v2 + 160),
         (proto::SetUpAvatarTeamRsp *)(v2 + 256)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "setUpAvatarTeam",
      1275);
    v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[18])"sendProto fails, ");
    operator<<(v6, thisa);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v7 = -1;
  }
  else
  {
    v7 = proto::SetUpAvatarTeamRsp::retcode((const proto::SetUpAvatarTeamRsp *const)(v2 + 256));
  }
  std::vector<long>::~vector((std::vector<long int> *const)(v2 + 96));
  proto::SetUpAvatarTeamRsp::~SetUpAvatarTeamRsp((proto::SetUpAvatarTeamRsp *const)(v2 + 256));
  proto::SetUpAvatarTeamReq::~SetUpAvatarTeamReq((proto::SetUpAvatarTeamReq *const)(v2 + 160));
  result = v7;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 1282: range 000000000044A5B6-000000000044A8BC
int32_t __cdecl Robot::chooseCurAvatarTeam(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-111h] BYREF
  std::string name; // [rsp+20h] [rbp-110h] BYREF
  char v10[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 team_id:1285 64 24 8 req:1283 128 32 8 rsp:1284";
  *(_QWORD *)(v2 + 16) = Robot::chooseCurAvatarTeam;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  proto::ChooseCurAvatarTeamReq::ChooseCurAvatarTeamReq((proto::ChooseCurAvatarTeamReq *const)(v2 + 64));
  proto::ChooseCurAvatarTeamRsp::ChooseCurAvatarTeamRsp((proto::ChooseCurAvatarTeamRsp *const)(v2 + 128));
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "team_id", &__a);
  ScriptUtil::getTableValue<unsigned int>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 48));
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  proto::ChooseCurAvatarTeamReq::set_team_id((proto::ChooseCurAvatarTeamReq *const)(v2 + 64), *(_DWORD *)(v2 + 48));
  if ( Robot::sendProto<proto::ChooseCurAvatarTeamReq,proto::ChooseCurAvatarTeamRsp>(
         this,
         (proto::ChooseCurAvatarTeamReq *)(v2 + 64),
         (proto::ChooseCurAvatarTeamRsp *)(v2 + 128)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "chooseCurAvatarTeam",
      1290);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[18])"sendProto fails, ");
    operator<<(v5, this);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v6 = proto::ChooseCurAvatarTeamRsp::retcode((const proto::ChooseCurAvatarTeamRsp *const)(v2 + 128));
  }
  proto::ChooseCurAvatarTeamRsp::~ChooseCurAvatarTeamRsp((proto::ChooseCurAvatarTeamRsp *const)(v2 + 128));
  proto::ChooseCurAvatarTeamReq::~ChooseCurAvatarTeamReq((proto::ChooseCurAvatarTeamReq *const)(v2 + 64));
  result = v6;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1297: range 000000000044A8BE-000000000044ABE5
int32_t __cdecl Robot::changeAvatar(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-131h] BYREF
  std::string name; // [rsp+20h] [rbp-130h] BYREF
  char v10[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 16 avatar_guid:1313 64 40 8 rsp:1299 144 48 8 req:1298";
  *(_QWORD *)(v2 + 16) = Robot::changeAvatar;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  proto::ChangeAvatarReq::ChangeAvatarReq((proto::ChangeAvatarReq *const)(v2 + 144));
  proto::ChangeAvatarRsp::ChangeAvatarRsp((proto::ChangeAvatarRsp *const)(v2 + 64));
  *(_QWORD *)(v2 + 32) = 0LL;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "guid", &__a);
  ScriptUtil::getTableValue<long>(&ScriptUtil::no_exception_instance, param_table, &name, (__int64 *)(v2 + 32));
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  proto::ChangeAvatarReq::set_guid((proto::ChangeAvatarReq *const)(v2 + 144), *(_QWORD *)(v2 + 32));
  if ( Robot::sendProto<proto::ChangeAvatarReq,proto::ChangeAvatarRsp>(
         this,
         (proto::ChangeAvatarReq *)(v2 + 144),
         (proto::ChangeAvatarRsp *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "changeAvatar",
      1318);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[18])"sendProto fails, ");
    operator<<(v5, this);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v6 = proto::ChangeAvatarRsp::retcode((const proto::ChangeAvatarRsp *const)(v2 + 64));
  }
  proto::ChangeAvatarRsp::~ChangeAvatarRsp((proto::ChangeAvatarRsp *const)(v2 + 64));
  proto::ChangeAvatarReq::~ChangeAvatarReq((proto::ChangeAvatarReq *const)(v2 + 144));
  result = v6;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1325: range 000000000044ABE6-000000000044B17F
int32_t __cdecl Robot::avatarDieAnimationEnd(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint64_t Guid; // rax
  common::milog::MiLogStream *v12; // rdx
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-178h]
  std::allocator<char> __a; // [rsp+1Fh] [rbp-161h] BYREF
  std::shared_ptr<Avatar> __r; // [rsp+20h] [rbp-160h] BYREF
  std::string name; // [rsp+30h] [rbp-150h] BYREF
  char v18[304]; // [rsp+50h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 14 avatar_id:1328 48 4 13 skill_id:1329 64 16 15 avatar_ptr:1331 96 40 8 rsp:1327 176 48 8 req:1326";
  *(_QWORD *)(v2 + 16) = Robot::avatarDieAnimationEnd;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862727] = -202116109;
  proto::AvatarDieAnimationEndReq::AvatarDieAnimationEndReq((proto::AvatarDieAnimationEndReq *const)(v2 + 176));
  proto::AvatarDieAnimationEndRsp::AvatarDieAnimationEndRsp((proto::AvatarDieAnimationEndRsp *const)(v2 + 96));
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "avatar_id", &__a);
  ScriptUtil::getTableValue<unsigned int,char const(&)[9],unsigned int &>(
    &ScriptUtil::no_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32),
    (const char (*)[9])"skill_id",
    (unsigned int *)(v2 + 48),
    (const char (*)[9])param_table,
    (unsigned int *)this);
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_QWORD *)(v2 + 72) = 0LL;
  if ( *(_DWORD *)(v2 + 32) )
    Player::findAvatarByAvatarId((Player *const)&__r, (_DWORD)thisa + 896);
  else
    Player::getCurAvatar((const Player *const)&__r);
  std::shared_ptr<Avatar>::operator=((std::shared_ptr<Avatar> *const)(v2 + 64), &__r);
  std::shared_ptr<Avatar>::~shared_ptr(&__r);
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "avatarDieAnimationEnd",
      1342);
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[39])"findAvatarByAvatarId fails, avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( Creature::getLifeState(v7) == LIFE_DEAD )
    {
      v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      Guid = Avatar::getGuid(v10);
      proto::AvatarDieAnimationEndReq::set_die_guid((proto::AvatarDieAnimationEndReq *const)(v2 + 176), Guid);
      proto::AvatarDieAnimationEndReq::set_skill_id(
        (proto::AvatarDieAnimationEndReq *const)(v2 + 176),
        *(_DWORD *)(v2 + 48));
      if ( Robot::sendProto<proto::AvatarDieAnimationEndReq,proto::AvatarDieAnimationEndRsp>(
             thisa,
             (proto::AvatarDieAnimationEndReq *)(v2 + 176),
             (proto::AvatarDieAnimationEndRsp *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&name,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/operation/robot_op.cpp",
          "avatarDieAnimationEnd",
          1354);
        v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                (common::milog::MiLogStream *const)&name,
                (const char (*)[18])"sendProto fails, ");
        operator<<(v12, thisa);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
        v6 = -1;
      }
      else
      {
        v6 = proto::AvatarDieAnimationEndRsp::retcode((const proto::AvatarDieAnimationEndRsp *const)(v2 + 96));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "avatarDieAnimationEnd",
        1347);
      v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             (common::milog::MiLogStream *const)&name,
             (const char (*)[20])"avatar is not dead!");
      v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      operator<<(v8, v9);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 64));
  proto::AvatarDieAnimationEndRsp::~AvatarDieAnimationEndRsp((proto::AvatarDieAnimationEndRsp *const)(v2 + 96));
  proto::AvatarDieAnimationEndReq::~AvatarDieAnimationEndReq((proto::AvatarDieAnimationEndReq *const)(v2 + 176));
  result = v6;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1361: range 000000000044B180-000000000044B4A1
int32_t __cdecl Robot::getSceneNpcPosition(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-131h] BYREF
  std::string name; // [rsp+20h] [rbp-130h] BYREF
  char v10[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 scene_id:1364 48 48 8 req:1362 128 56 8 rsp:1363";
  *(_QWORD *)(v2 + 16) = Robot::getSceneNpcPosition;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  proto::GetSceneNpcPositionReq::GetSceneNpcPositionReq((proto::GetSceneNpcPositionReq *const)(v2 + 48));
  proto::GetSceneNpcPositionRsp::GetSceneNpcPositionRsp((proto::GetSceneNpcPositionRsp *const)(v2 + 128));
  *(_DWORD *)(v2 + 32) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "scene_id", &__a);
  ScriptUtil::getTableValue<unsigned int>(
    &ScriptUtil::no_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32));
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  proto::GetSceneNpcPositionReq::set_scene_id((proto::GetSceneNpcPositionReq *const)(v2 + 48), *(_DWORD *)(v2 + 32));
  if ( Robot::sendProto<proto::GetSceneNpcPositionReq,proto::GetSceneNpcPositionRsp>(
         this,
         (proto::GetSceneNpcPositionReq *)(v2 + 48),
         (proto::GetSceneNpcPositionRsp *)(v2 + 128)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getSceneNpcPosition",
      1369);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[18])"sendProto fails, ");
    operator<<(v5, this);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v6 = proto::GetSceneNpcPositionRsp::retcode((const proto::GetSceneNpcPositionRsp *const)(v2 + 128));
  }
  proto::GetSceneNpcPositionRsp::~GetSceneNpcPositionRsp((proto::GetSceneNpcPositionRsp *const)(v2 + 128));
  proto::GetSceneNpcPositionReq::~GetSceneNpcPositionReq((proto::GetSceneNpcPositionReq *const)(v2 + 48));
  result = v6;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1376: range 000000000044B4A2-000000000044B966
int32_t __cdecl Robot::useItem(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint64_t v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int32_t v8; // r14d
  int32_t result; // eax
  const luabind::adl::object *param_tablea; // [rsp+0h] [rbp-190h]
  Robot *thisa; // [rsp+8h] [rbp-188h]
  std::allocator<char> __a; // [rsp+17h] [rbp-179h] BYREF
  uint64_t guid; // [rsp+18h] [rbp-178h]
  std::string name; // [rsp+20h] [rbp-170h] BYREF
  char v15[336]; // [rsp+40h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 12 item_id:1379 48 4 10 count:1380 64 4 14 avatar_id:1382 80 16 15 avatar_ptr:1389 112 48"
                        " 8 rsp:1378 192 56 8 req:1377";
  *(_QWORD *)(v2 + 16) = Robot::useItem;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862725] = -218959118;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  proto::UseItemReq::UseItemReq((proto::UseItemReq *const)(v2 + 192));
  proto::UseItemRsp::UseItemRsp((proto::UseItemRsp *const)(v2 + 112));
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "item_id", &__a);
  ScriptUtil::getTableValue<unsigned int,char const(&)[6],unsigned int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32),
    (const char (*)[6])"count",
    (unsigned int *)(v2 + 48),
    (const char (*)[6])param_table,
    (unsigned int *)this);
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  *(_DWORD *)(v2 + 64) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "avatar_id", &__a);
  ScriptUtil::getTableValue<unsigned int>(
    &ScriptUtil::no_exception_instance,
    param_tablea,
    &name,
    (unsigned int *)(v2 + 64));
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  guid = Player::findOneItem(&thisa->player_, STORE_PACK, *(_DWORD *)(v2 + 32));
  proto::UseItemReq::set_guid((proto::UseItemReq *const)(v2 + 192), guid);
  proto::UseItemReq::set_count((proto::UseItemReq *const)(v2 + 192), *(_DWORD *)(v2 + 48));
  if ( *(_DWORD *)(v2 + 64) )
  {
    Player::findAvatarByAvatarId((Player *const)(v2 + 80), (_DWORD)thisa + 896);
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 80), 0LL) )
    {
      v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      v6 = Avatar::getGuid(v5);
      proto::UseItemReq::set_target_guid((proto::UseItemReq *const)(v2 + 192), v6);
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 80));
  }
  if ( Robot::sendProto<proto::UseItemReq,proto::UseItemRsp>(
         thisa,
         (proto::UseItemReq *)(v2 + 192),
         (proto::UseItemRsp *)(v2 + 112)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "useItem",
      1395);
    v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[18])"sendProto fails, ");
    operator<<(v7, thisa);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v8 = -1;
  }
  else
  {
    v8 = proto::UseItemRsp::retcode((const proto::UseItemRsp *const)(v2 + 112));
  }
  proto::UseItemRsp::~UseItemRsp((proto::UseItemRsp *const)(v2 + 112));
  proto::UseItemReq::~UseItemReq((proto::UseItemReq *const)(v2 + 192));
  result = v8;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 1402: range 000000000044B968-000000000044BE6E
int32_t __cdecl Robot::dropItem(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const Vector3 *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-198h]
  const char (*v11)[6]; // [rsp+10h] [rbp-190h]
  unsigned int *v12; // [rsp+18h] [rbp-188h] BYREF
  uint64_t guid; // [rsp+20h] [rbp-180h]
  proto::Vector *pos; // [rsp+28h] [rbp-178h]
  std::string name; // [rsp+30h] [rbp-170h] BYREF
  char v16[336]; // [rsp+50h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 15 store_type:1405 64 4 12 item_id:1406 80 4 10 count:1407 96 16 15 avatar_ptr:1413 128 4"
                        "0 8 rsp:1404 208 48 8 req:1403";
  *(_QWORD *)(v2 + 16) = Robot::dropItem;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862728] = -202116109;
  proto::DropItemReq::DropItemReq((proto::DropItemReq *const)(v2 + 208));
  proto::DropItemRsp::DropItemRsp((proto::DropItemRsp *const)(v2 + 128));
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  std::allocator<char>::allocator((char *)&v12 + 7);
  std::string::basic_string<std::allocator<char>>(&name, "store_type", (const std::allocator<char> *)&v12 + 7);
  ScriptUtil::getTableValue<proto::StoreType,char const(&)[8],unsigned int &,char const(&)[6],unsigned int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (proto::StoreType *)(v2 + 48),
    (const char (*)[8])"item_id",
    (unsigned int *)(v2 + 64),
    (const char (*)[6])"count",
    (unsigned int *)(v2 + 80),
    (const char (*)[8])param_table,
    (unsigned int *)this,
    v11,
    v12);
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v12 + 7);
  proto::DropItemReq::set_store_type((proto::DropItemReq *const)(v2 + 208), *(proto::StoreType *)(v2 + 48));
  guid = Player::findOneItem(&thisa->player_, (proto::StoreType)*(_DWORD *)(v2 + 48), *(_DWORD *)(v2 + 64));
  proto::DropItemReq::set_guid((proto::DropItemReq *const)(v2 + 208), guid);
  proto::DropItemReq::set_count((proto::DropItemReq *const)(v2 + 208), *(_DWORD *)(v2 + 80));
  Player::getCurAvatar((const Player *const)(v2 + 96));
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "dropItem",
      1416);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
      (common::milog::MiLogStream *const)&name,
      (const char (*)[19])"getCurAvatar fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v5 = -1;
  }
  else
  {
    pos = proto::DropItemReq::mutable_pos((proto::DropItemReq *const)(v2 + 208));
    v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v7 = Entity::getPos(v6);
    Vector3::operator proto::Vector((proto::Vector *)&name, v7);
    proto::Vector::operator=(pos, (proto::Vector *)&name);
    proto::Vector::~Vector((proto::Vector *const)&name);
    if ( Robot::sendProto<proto::DropItemReq,proto::DropItemRsp>(
           thisa,
           (proto::DropItemReq *)(v2 + 208),
           (proto::DropItemRsp *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "dropItem",
        1423);
      v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             (common::milog::MiLogStream *const)&name,
             (const char (*)[18])"sendProto fails, ");
      operator<<(v8, thisa);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v5 = -1;
    }
    else
    {
      v5 = proto::DropItemRsp::retcode((const proto::DropItemRsp *const)(v2 + 128));
    }
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 96));
  proto::DropItemRsp::~DropItemRsp((proto::DropItemRsp *const)(v2 + 128));
  proto::DropItemReq::~DropItemReq((proto::DropItemReq *const)(v2 + 208));
  result = v5;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 1430: range 000000000044BF56-000000000044C3B2
int32_t __cdecl Robot::pickItem(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rdx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-131h] BYREF
  std::string name; // [rsp+30h] [rbp-130h] BYREF
  char v11[272]; // [rsp+50h] [rbp-110h] BYREF
  Robot::pickItem::<lambda(Gadget&)> v12; // 0:esi.4,8:rdx.8

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 12 item_id:1433 48 4 14 entity_id:1435 64 40 8 rsp:1432 144 48 8 req:1431";
  *(_QWORD *)(v2 + 16) = Robot::pickItem;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  proto::GadgetInteractReq::GadgetInteractReq((proto::GadgetInteractReq *const)(v2 + 144));
  proto::GadgetInteractRsp::GadgetInteractRsp((proto::GadgetInteractRsp *const)(v2 + 64));
  *(_DWORD *)(v2 + 32) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "item_id", &__a);
  ScriptUtil::getTableValue<unsigned int>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32));
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  *(_DWORD *)(v2 + 48) = 0;
  v12.__entity_id = (uint32_t *)(v2 + 48);
  v12.__item_id = *(_DWORD *)(v2 + 32);
  std::function<ForeachPolicy ()(Gadget &)>::function<Robot::pickItem(luabind::adl::object const&)::{lambda(Gadget &)#1},void,void>(
    (std::function<ForeachPolicy(Gadget&)> *const)&name,
    v12);
  Scene::foreachEntity<Gadget>(&this->scene_, (std::function<ForeachPolicy(Gadget&)> *)&name);
  std::function<ForeachPolicy ()(Gadget &)>::~function((std::function<ForeachPolicy(Gadget&)> *const)&name);
  if ( *(_DWORD *)(v2 + 48) )
  {
    proto::GadgetInteractReq::set_gadget_entity_id((proto::GadgetInteractReq *const)(v2 + 144), *(_DWORD *)(v2 + 48));
    if ( Robot::sendProto<proto::GadgetInteractReq,proto::GadgetInteractRsp>(
           this,
           (proto::GadgetInteractReq *)(v2 + 144),
           (proto::GadgetInteractRsp *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "pickItem",
        1453);
      v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             (common::milog::MiLogStream *const)&name,
             (const char (*)[18])"sendProto fails, ");
      operator<<(v7, this);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
    else
    {
      v6 = proto::GadgetInteractRsp::retcode((const proto::GadgetInteractRsp *const)(v2 + 64));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "pickItem",
      1447);
    v5 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[33])"can't find item trifle, item_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  proto::GadgetInteractRsp::~GadgetInteractRsp((proto::GadgetInteractRsp *const)(v2 + 64));
  proto::GadgetInteractReq::~GadgetInteractReq((proto::GadgetInteractReq *const)(v2 + 144));
  result = v6;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1436: range 000000000044BE70-000000000044BF54
ForeachPolicy __cdecl Robot::pickItem(luabind::adl::object const&)::{lambda(Gadget &)#1}::operator()(
        const Robot::pickItem::<lambda(Gadget&)> *const __closure,
        Gadget *gadget)
{
  uint32_t ItemId; // ecx
  Gadget *v3; // rax
  uint32_t *entity_id; // rbx
  uint32_t EntityId; // ecx

  ItemId = Gadget::getItemId(gadget);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( ItemId != __closure->__item_id )
    return 0;
  v3 = gadget;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__entity_id >> 3) + 0x7FFF8000) )
    v3 = (Gadget *)__asan_report_load8(&__closure->__entity_id);
  entity_id = __closure->__entity_id;
  EntityId = Entity::getEntityId(v3);
  if ( *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(entity_id);
  }
  *entity_id = EntityId;
  return 1;
};

// Line 1460: range 000000000044C3B4-000000000044C83E
int32_t __cdecl Robot::wearEquip(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint64_t Guid; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-168h]
  std::allocator<char> __a; // [rsp+17h] [rbp-159h] BYREF
  uint64_t item_guid; // [rsp+18h] [rbp-158h]
  std::string name; // [rsp+20h] [rbp-150h] BYREF
  char v15[304]; // [rsp+40h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 14 avatar_id:1463 48 4 12 item_id:1464 64 16 15 avatar_ptr:1466 96 40 8 req:1461 176 48 8 rsp:1462";
  *(_QWORD *)(v2 + 16) = Robot::wearEquip;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862727] = -202116109;
  proto::WearEquipReq::WearEquipReq((proto::WearEquipReq *const)(v2 + 96));
  proto::WearEquipRsp::WearEquipRsp((proto::WearEquipRsp *const)(v2 + 176));
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "avatar_id", &__a);
  ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32),
    (const char (*)[8])"item_id",
    (unsigned int *)(v2 + 48),
    (const char (*)[8])param_table,
    (unsigned int *)this);
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  Player::findAvatarByAvatarId((Player *const)(v2 + 64), (_DWORD)thisa + 896);
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "wearEquip",
      1469);
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[39])"findAvatarByAvatarId fails, avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    item_guid = Player::findOneItem(&thisa->player_, STORE_PACK, *(_DWORD *)(v2 + 48));
    v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Guid = Avatar::getGuid(v7);
    proto::WearEquipReq::set_avatar_guid((proto::WearEquipReq *const)(v2 + 96), Guid);
    proto::WearEquipReq::set_equip_guid((proto::WearEquipReq *const)(v2 + 96), item_guid);
    if ( Robot::sendProto<proto::WearEquipReq,proto::WearEquipRsp>(
           thisa,
           (proto::WearEquipReq *)(v2 + 96),
           (proto::WearEquipRsp *)(v2 + 176)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "wearEquip",
        1477);
      v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             (common::milog::MiLogStream *const)&name,
             (const char (*)[18])"sendProto fails, ");
      operator<<(v9, thisa);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
    else
    {
      v6 = proto::WearEquipRsp::retcode((const proto::WearEquipRsp *const)(v2 + 176));
    }
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 64));
  proto::WearEquipRsp::~WearEquipRsp((proto::WearEquipRsp *const)(v2 + 176));
  proto::WearEquipReq::~WearEquipReq((proto::WearEquipReq *const)(v2 + 96));
  result = v6;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1484: range 000000000044C840-000000000044CCAA
int32_t __cdecl Robot::takeoffEquip(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint64_t Guid; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-168h]
  std::allocator<char> __a; // [rsp+1Fh] [rbp-151h] BYREF
  std::string name; // [rsp+20h] [rbp-150h] BYREF
  char v14[304]; // [rsp+40h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 14 avatar_id:1487 48 4 9 slot:1488 64 16 15 avatar_ptr:1490 96 40 8 req:1485 176 40 8 rsp:1486";
  *(_QWORD *)(v2 + 16) = Robot::takeoffEquip;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  proto::TakeoffEquipReq::TakeoffEquipReq((proto::TakeoffEquipReq *const)(v2 + 96));
  proto::TakeoffEquipRsp::TakeoffEquipRsp((proto::TakeoffEquipRsp *const)(v2 + 176));
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "avatar_id", &__a);
  ScriptUtil::getTableValue<unsigned int,char const(&)[5],unsigned int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32),
    (const char (*)[5])"slot",
    (unsigned int *)(v2 + 48),
    (const char (*)[5])param_table,
    (unsigned int *)this);
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  Player::findAvatarByAvatarId((Player *const)(v2 + 64), (_DWORD)thisa + 896);
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "takeoffEquip",
      1493);
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[39])"findAvatarByAvatarId fails, avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Guid = Avatar::getGuid(v7);
    proto::TakeoffEquipReq::set_avatar_guid((proto::TakeoffEquipReq *const)(v2 + 96), Guid);
    proto::TakeoffEquipReq::set_slot((proto::TakeoffEquipReq *const)(v2 + 96), *(_DWORD *)(v2 + 48));
    if ( Robot::sendProto<proto::TakeoffEquipReq,proto::TakeoffEquipRsp>(
           thisa,
           (proto::TakeoffEquipReq *)(v2 + 96),
           (proto::TakeoffEquipRsp *)(v2 + 176)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "takeoffEquip",
        1500);
      v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             (common::milog::MiLogStream *const)&name,
             (const char (*)[18])"sendProto fails, ");
      operator<<(v9, thisa);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
    else
    {
      v6 = proto::TakeoffEquipRsp::retcode((const proto::TakeoffEquipRsp *const)(v2 + 176));
    }
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 64));
  proto::TakeoffEquipRsp::~TakeoffEquipRsp((proto::TakeoffEquipRsp *const)(v2 + 176));
  proto::TakeoffEquipReq::~TakeoffEquipReq((proto::TakeoffEquipReq *const)(v2 + 96));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1507: range 000000000044CD92-000000000044D1D5
int32_t __cdecl Robot::drownMonster(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rdx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+2Fh] [rbp-111h] BYREF
  std::string name; // [rsp+30h] [rbp-110h] BYREF
  char v11[240]; // [rsp+50h] [rbp-F0h] BYREF
  Robot::drownMonster::<lambda(Monster&)> v12; // 0:rsi.8,8:edx.4

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 15 monster_id:1510 48 4 21 target_entity_id:1512 64 24 8 req:1508 128 32 8 rsp:1509";
  *(_QWORD *)(v2 + 16) = Robot::drownMonster;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  proto::SceneEntityDrownReq::SceneEntityDrownReq((proto::SceneEntityDrownReq *const)(v2 + 64));
  proto::SceneEntityDrownRsp::SceneEntityDrownRsp((proto::SceneEntityDrownRsp *const)(v2 + 128));
  *(_DWORD *)(v2 + 32) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "monster_id", &__a);
  ScriptUtil::getTableValue<unsigned int>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32));
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  *(_DWORD *)(v2 + 48) = 0;
  v12.__monster_id = *(_DWORD *)(v2 + 32);
  v12.__target_entity_id = (uint32_t *)(v2 + 48);
  std::function<ForeachPolicy ()(Monster &)>::function<Robot::drownMonster(luabind::adl::object const&)::{lambda(Monster &)#1},void,void>(
    (std::function<ForeachPolicy(Monster&)> *const)&name,
    v12);
  Scene::foreachEntity<Monster>(&this->scene_, (std::function<ForeachPolicy(Monster&)> *)&name);
  std::function<ForeachPolicy ()(Monster &)>::~function((std::function<ForeachPolicy(Monster&)> *const)&name);
  if ( *(_DWORD *)(v2 + 48) )
  {
    proto::SceneEntityDrownReq::set_entity_id((proto::SceneEntityDrownReq *const)(v2 + 64), *(_DWORD *)(v2 + 48));
    if ( Robot::sendProto<proto::SceneEntityDrownReq,proto::SceneEntityDrownRsp>(
           this,
           (proto::SceneEntityDrownReq *)(v2 + 64),
           (proto::SceneEntityDrownRsp *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "drownMonster",
        1530);
      v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             (common::milog::MiLogStream *const)&name,
             (const char (*)[18])"sendProto fails, ");
      operator<<(v7, this);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
    else
    {
      v6 = proto::SceneEntityDrownRsp::retcode((const proto::SceneEntityDrownRsp *const)(v2 + 128));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "drownMonster",
      1524);
    v5 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[34])"can't find entity for monster_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  proto::SceneEntityDrownRsp::~SceneEntityDrownRsp((proto::SceneEntityDrownRsp *const)(v2 + 128));
  proto::SceneEntityDrownReq::~SceneEntityDrownReq((proto::SceneEntityDrownReq *const)(v2 + 64));
  result = v6;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1513: range 000000000044CCAC-000000000044CD90
ForeachPolicy __cdecl Robot::drownMonster(luabind::adl::object const&)::{lambda(Monster &)#1}::operator()(
        const Robot::drownMonster::<lambda(Monster&)> *const __closure,
        Monster *monster)
{
  uint32_t MonsterId; // ecx
  Monster *v3; // rax
  uint32_t *target_entity_id; // rbx
  uint32_t EntityId; // ecx

  MonsterId = Monster::getMonsterId(monster);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__monster_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__monster_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__monster_id);
  }
  if ( MonsterId != __closure->__monster_id )
    return 0;
  v3 = monster;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    v3 = (Monster *)__asan_report_load8(__closure);
  target_entity_id = __closure->__target_entity_id;
  EntityId = Entity::getEntityId(v3);
  if ( *(_BYTE *)(((unsigned __int64)target_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)target_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)target_entity_id >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(target_entity_id);
  }
  *target_entity_id = EntityId;
  return 1;
};

// Line 1537: range 000000000044D1D6-000000000044D6EC
int32_t __cdecl Robot::gadgetInteract(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t EntityId; // eax
  common::milog::MiLogStream *v9; // rdx
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-188h]
  std::allocator<char> __a; // [rsp+1Fh] [rbp-171h] BYREF
  std::string name; // [rsp+20h] [rbp-170h] BYREF
  char v14[336]; // [rsp+40h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 14 gadget_id:1540 64 4 13 group_id:1542 80 4 12 op_type:1543 96 16 15 gadget_ptr:1545 128"
                        " 40 8 rsp:1539 208 48 8 req:1538";
  *(_QWORD *)(v2 + 16) = Robot::gadgetInteract;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862728] = -202116109;
  proto::GadgetInteractReq::GadgetInteractReq((proto::GadgetInteractReq *const)(v2 + 208));
  proto::GadgetInteractRsp::GadgetInteractRsp((proto::GadgetInteractRsp *const)(v2 + 128));
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "gadget_id", &__a);
  ScriptUtil::getTableValue<unsigned int>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 48));
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "group_id", &__a);
  ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &>(
    &ScriptUtil::no_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 64),
    (const char (*)[8])"op_type",
    (unsigned int *)(v2 + 80),
    (const char (*)[8])param_table,
    (unsigned int *)this);
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  Scene::findGadget((Scene *const)(v2 + 96), (_DWORD)thisa + 1376);
  if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "gadgetInteract",
      1548);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[29])"findGadget fails, gadget_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    EntityId = Entity::getEntityId(v7);
    proto::GadgetInteractReq::set_gadget_entity_id((proto::GadgetInteractReq *const)(v2 + 208), EntityId);
    proto::GadgetInteractReq::set_op_type((proto::GadgetInteractReq *const)(v2 + 208), *(proto::InterOpType *)(v2 + 80));
    if ( Robot::sendProto<proto::GadgetInteractReq,proto::GadgetInteractRsp>(
           thisa,
           (proto::GadgetInteractReq *)(v2 + 208),
           (proto::GadgetInteractRsp *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "gadgetInteract",
        1555);
      v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             (common::milog::MiLogStream *const)&name,
             (const char (*)[18])"sendProto fails, ");
      operator<<(v9, thisa);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
    else
    {
      v6 = proto::GadgetInteractRsp::retcode((const proto::GadgetInteractRsp *const)(v2 + 128));
    }
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 96));
  proto::GadgetInteractRsp::~GadgetInteractRsp((proto::GadgetInteractRsp *const)(v2 + 128));
  proto::GadgetInteractReq::~GadgetInteractReq((proto::GadgetInteractReq *const)(v2 + 208));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 1562: range 000000000044D8BA-000000000044DE12
int32_t __cdecl Robot::evtBeingHit(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  proto::EvtBeingHitInfo *v5; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t EntityId; // eax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  int32_t result; // eax
  const char (*v11)[18]; // [rsp+0h] [rbp-170h]
  unsigned int *v12; // [rsp+8h] [rbp-168h]
  const char (*__f)[17]; // [rsp+10h] [rbp-160h]
  unsigned int *__f_8; // [rsp+18h] [rbp-158h]
  Robot *thisa; // [rsp+28h] [rbp-148h]
  std::allocator<char> __a; // [rsp+37h] [rbp-139h] BYREF
  proto::AttackResult *attack_result; // [rsp+38h] [rbp-138h]
  std::string name; // [rsp+40h] [rbp-130h] BYREF
  unsigned int v19[68]; // [rsp+60h] [rbp-110h] BYREF
  Robot::evtBeingHit::<lambda(Monster&)> v20; // 0:rsi.8,8:edx.4
  Robot::evtBeingHit::<lambda(Gadget&)> v21; // 0:rsi.8,8:edx.4

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 17 forward_type:1564 64 4 22 target_monster_id:1565 80 4 21 target_gadget_id:1566 96 4 17"
                        " element_type:1567 112 4 21 target_entity_id:1569 128 16 15 avatar_ptr:1596 160 32 8 evt:1563";
  *(_QWORD *)(v2 + 16) = Robot::evtBeingHit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -219021312;
  v4[536862726] = -202116109;
  proto::EvtBeingHitNotify::EvtBeingHitNotify((proto::EvtBeingHitNotify *const)(v2 + 160));
  *(_DWORD *)(v2 + 48) = 1;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  *(_DWORD *)(v2 + 96) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "forward_type", &__a);
  ScriptUtil::getTableValue<unsigned int,char const(&)[18],unsigned int &,char const(&)[17],unsigned int &,char const(&)[13],unsigned int &>(
    &ScriptUtil::no_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 48),
    (const char (*)[18])"target_monster_id",
    (unsigned int *)(v2 + 64),
    (const char (*)[17])"target_gadget_id",
    (unsigned int *)(v2 + 80),
    (const char (*)[13])"element_type",
    (unsigned int *)(v2 + 96),
    v11,
    v19,
    __f,
    __f_8,
    (const char (*)[13])param_table,
    (unsigned int *)this);
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  *(_DWORD *)(v2 + 112) = 0;
  if ( *(_DWORD *)(v2 + 64) )
  {
    v20.__target_monster_id = *(_DWORD *)(v2 + 64);
    v20.__target_entity_id = (uint32_t *)(v2 + 112);
    std::function<ForeachPolicy ()(Monster &)>::function<Robot::evtBeingHit(luabind::adl::object const&)::{lambda(Monster &)#1},void,void>(
      (std::function<ForeachPolicy(Monster&)> *const)&name,
      v20);
    Scene::foreachEntity<Monster>(&thisa->scene_, (std::function<ForeachPolicy(Monster&)> *)&name);
    std::function<ForeachPolicy ()(Monster &)>::~function((std::function<ForeachPolicy(Monster&)> *const)&name);
  }
  else if ( *(_DWORD *)(v2 + 80) )
  {
    v21.__target_gadget_id = *(_DWORD *)(v2 + 80);
    v21.__target_entity_id = (uint32_t *)(v2 + 112);
    std::function<ForeachPolicy ()(Gadget &)>::function<Robot::evtBeingHit(luabind::adl::object const&)::{lambda(Gadget &)#2},void,void>(
      (std::function<ForeachPolicy(Gadget&)> *const)&name,
      v21);
    Scene::foreachEntity<Gadget>(&thisa->scene_, (std::function<ForeachPolicy(Gadget&)> *)&name);
    std::function<ForeachPolicy ()(Gadget &)>::~function((std::function<ForeachPolicy(Gadget&)> *const)&name);
  }
  proto::EvtBeingHitNotify::set_forward_type(
    (proto::EvtBeingHitNotify *const)(v2 + 160),
    *(proto::ForwardType *)(v2 + 48));
  v5 = proto::EvtBeingHitNotify::mutable_being_hit_info((proto::EvtBeingHitNotify *const)(v2 + 160));
  attack_result = proto::EvtBeingHitInfo::mutable_attack_result(v5);
  Player::getCurAvatar((const Player *const)(v2 + 128));
  if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 128), 0LL) )
  {
    v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    EntityId = Entity::getEntityId(v6);
    proto::AttackResult::set_attacker_id(attack_result, EntityId);
  }
  proto::AttackResult::set_defense_id(attack_result, *(_DWORD *)(v2 + 112));
  proto::AttackResult::set_element_type(attack_result, *(_DWORD *)(v2 + 96));
  if ( Robot::sendProto<proto::EvtBeingHitNotify>(thisa, (proto::EvtBeingHitNotify *)(v2 + 160)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "evtBeingHit",
      1603);
    v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[18])"sendProto fails, ");
    operator<<(v8, thisa);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v9 = -1;
  }
  else
  {
    v9 = 0;
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 128));
  proto::EvtBeingHitNotify::~EvtBeingHitNotify((proto::EvtBeingHitNotify *const)(v2 + 160));
  result = v9;
  if ( v12 == (unsigned int *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1572: range 000000000044D6EE-000000000044D7D2
ForeachPolicy __cdecl Robot::evtBeingHit(luabind::adl::object const&)::{lambda(Monster &)#1}::operator()(
        const Robot::evtBeingHit::<lambda(Monster&)> *const __closure,
        Monster *monster)
{
  uint32_t MonsterId; // ecx
  Monster *v3; // rax
  uint32_t *target_entity_id; // rbx
  uint32_t EntityId; // ecx

  MonsterId = Monster::getMonsterId(monster);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__target_monster_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__target_monster_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__target_monster_id);
  }
  if ( MonsterId != __closure->__target_monster_id )
    return 0;
  v3 = monster;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    v3 = (Monster *)__asan_report_load8(__closure);
  target_entity_id = __closure->__target_entity_id;
  EntityId = Entity::getEntityId(v3);
  if ( *(_BYTE *)(((unsigned __int64)target_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)target_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)target_entity_id >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(target_entity_id);
  }
  *target_entity_id = EntityId;
  return 1;
};

// Line 1584: range 000000000044D7D4-000000000044D8B8
ForeachPolicy __cdecl Robot::evtBeingHit(luabind::adl::object const&)::{lambda(Gadget &)#2}::operator()(
        const Robot::evtBeingHit::<lambda(Gadget&)> *const __closure,
        Gadget *gadget)
{
  uint32_t GadgetId; // ecx
  Gadget *v3; // rax
  uint32_t *target_entity_id; // rbx
  uint32_t EntityId; // ecx

  GadgetId = Gadget::getGadgetId(gadget);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__target_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__target_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__target_gadget_id);
  }
  if ( GadgetId != __closure->__target_gadget_id )
    return 0;
  v3 = gadget;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    v3 = (Gadget *)__asan_report_load8(__closure);
  target_entity_id = __closure->__target_entity_id;
  EntityId = Entity::getEntityId(v3);
  if ( *(_BYTE *)(((unsigned __int64)target_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)target_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)target_entity_id >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(target_entity_id);
  }
  *target_entity_id = EntityId;
  return 1;
};

// Line 1610: range 000000000044DE14-000000000044E190
int32_t __cdecl Robot::addQuestContentProgress(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-148h]
  const char (*v9)[13]; // [rsp+10h] [rbp-140h]
  unsigned int *v10; // [rsp+18h] [rbp-138h] BYREF
  std::string name; // [rsp+20h] [rbp-130h] BYREF
  char v12[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 17 content_type:1613 64 4 10 param:1614 80 4 17 add_progress:1615 96 32 8 req:1611 160 32 8 rsp:1612";
  *(_QWORD *)(v2 + 16) = Robot::addQuestContentProgress;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  proto::AddQuestContentProgressReq::AddQuestContentProgressReq((proto::AddQuestContentProgressReq *const)(v2 + 96));
  proto::AddQuestContentProgressRsp::AddQuestContentProgressRsp((proto::AddQuestContentProgressRsp *const)(v2 + 160));
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  std::allocator<char>::allocator((char *)&v10 + 7);
  std::string::basic_string<std::allocator<char>>(&name, "content_type", (const std::allocator<char> *)&v10 + 7);
  ScriptUtil::getTableValue<unsigned int,char const(&)[6],unsigned int &,char const(&)[13],unsigned int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 48),
    (const char (*)[6])"param",
    (unsigned int *)(v2 + 64),
    (const char (*)[13])"add_progress",
    (unsigned int *)(v2 + 80),
    (const char (*)[6])param_table,
    (unsigned int *)this,
    v9,
    v10);
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v10 + 7);
  proto::AddQuestContentProgressReq::set_content_type(
    (proto::AddQuestContentProgressReq *const)(v2 + 96),
    *(_DWORD *)(v2 + 48));
  proto::AddQuestContentProgressReq::set_param(
    (proto::AddQuestContentProgressReq *const)(v2 + 96),
    *(_DWORD *)(v2 + 64));
  proto::AddQuestContentProgressReq::set_add_progress(
    (proto::AddQuestContentProgressReq *const)(v2 + 96),
    *(_DWORD *)(v2 + 80));
  if ( Robot::sendProto<proto::AddQuestContentProgressReq,proto::AddQuestContentProgressRsp>(
         thisa,
         (proto::AddQuestContentProgressReq *)(v2 + 96),
         (proto::AddQuestContentProgressRsp *)(v2 + 160)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      stru_DEB7840.gap0,
      1622);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[18])"sendProto fails, ");
    operator<<(v5, thisa);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v6 = proto::AddQuestContentProgressRsp::retcode((const proto::AddQuestContentProgressRsp *const)(v2 + 160));
  }
  proto::AddQuestContentProgressRsp::~AddQuestContentProgressRsp((proto::AddQuestContentProgressRsp *const)(v2 + 160));
  proto::AddQuestContentProgressReq::~AddQuestContentProgressReq((proto::AddQuestContentProgressReq *const)(v2 + 96));
  result = v6;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1629: range 000000000048869B-000000000048894F
__int64 __fastcall findScenePoint<data::DungeonEntry>(uint32_t scene_id, std::vector<unsigned int> *point_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  __int64 result; // rax
  std::map<unsigned int,std::shared_ptr<data::DungeonEntry>>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::map<unsigned int,std::shared_ptr<data::DungeonEntry>>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,std::shared_ptr<data::DungeonEntry>> *__for_range; // [rsp+20h] [rbp-F0h]
  std::pair<unsigned int const,std::shared_ptr<data::DungeonEntry> > *__in; // [rsp+28h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<data::DungeonEntry> > >::type *point_id; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<data::DungeonEntry> > >::type *point_ptr; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 13 scene_id:1629 48 48 14 point_map:1631";
  *(_QWORD *)(v2 + 16) = findScenePoint<data::DungeonEntry>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 32) = scene_id;
  std::map<unsigned int,std::shared_ptr<data::DungeonEntry>>::map((std::map<unsigned int,std::shared_ptr<data::DungeonEntry>> *const)(v2 + 48));
  if ( (unsigned int)JsonConfigMgr::findAllScenePoint<data::DungeonEntry>(
                       &Config::config_ptr->design_config.json_config_mgr,
                       *(_DWORD *)(v2 + 32),
                       (std::map<unsigned int,std::shared_ptr<data::DungeonEntry>> *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "findScenePoint",
      1634);
    v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v14,
           (const char (*)[35])"findAllScenePoint fails, scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    __for_range = (std::map<unsigned int,std::shared_ptr<data::DungeonEntry>> *)(v2 + 48);
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<data::DungeonEntry>>::begin((std::map<unsigned int,std::shared_ptr<data::DungeonEntry>> *const)(v2 + 48))._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<data::DungeonEntry>>::end((std::map<unsigned int,std::shared_ptr<data::DungeonEntry>> *const)(v2 + 48))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<data::DungeonEntry>>>::operator*(&__for_begin);
      point_id = std::get<0ul,unsigned int const,std::shared_ptr<data::DungeonEntry>>(__in);
      point_ptr = std::get<1ul,unsigned int const,std::shared_ptr<data::DungeonEntry>>(__in);
      std::vector<unsigned int>::push_back(point_vec, point_id);
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<data::DungeonEntry>>>::operator++(&__for_begin);
    }
    v6 = 0;
  }
  std::map<unsigned int,std::shared_ptr<data::DungeonEntry>>::~map((std::map<unsigned int,std::shared_ptr<data::DungeonEntry>> *const)(v2 + 48));
  result = v6;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1629: range 0000000000488950-0000000000488C04
__int64 __fastcall findScenePoint<data::DungeonWayPoint>(uint32_t scene_id, std::vector<unsigned int> *point_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  __int64 result; // rax
  std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *__for_range; // [rsp+20h] [rbp-F0h]
  std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint> > *__in; // [rsp+28h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint> > >::type *point_id; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint> > >::type *point_ptr; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 13 scene_id:1629 48 48 14 point_map:1631";
  *(_QWORD *)(v2 + 16) = findScenePoint<data::DungeonWayPoint>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 32) = scene_id;
  std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::map((std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *const)(v2 + 48));
  if ( (unsigned int)JsonConfigMgr::findAllScenePoint<data::DungeonWayPoint>(
                       &Config::config_ptr->design_config.json_config_mgr,
                       *(_DWORD *)(v2 + 32),
                       (std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "findScenePoint",
      1634);
    v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v14,
           (const char (*)[35])"findAllScenePoint fails, scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    __for_range = (std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *)(v2 + 48);
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::begin((std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *const)(v2 + 48))._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::end((std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *const)(v2 + 48))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint>>>::operator*(&__for_begin);
      point_id = std::get<0ul,unsigned int const,std::shared_ptr<data::DungeonWayPoint>>(__in);
      point_ptr = std::get<1ul,unsigned int const,std::shared_ptr<data::DungeonWayPoint>>(__in);
      std::vector<unsigned int>::push_back(point_vec, point_id);
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint>>>::operator++(&__for_begin);
    }
    v6 = 0;
  }
  std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::~map((std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *const)(v2 + 48));
  result = v6;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1629: range 0000000000488C05-0000000000488EB9
__int64 __fastcall findScenePoint<data::SceneTransPoint>(uint32_t scene_id, std::vector<unsigned int> *point_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  __int64 result; // rax
  std::map<unsigned int,std::shared_ptr<data::SceneTransPoint>>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::map<unsigned int,std::shared_ptr<data::SceneTransPoint>>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,std::shared_ptr<data::SceneTransPoint>> *__for_range; // [rsp+20h] [rbp-F0h]
  std::pair<unsigned int const,std::shared_ptr<data::SceneTransPoint> > *__in; // [rsp+28h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<data::SceneTransPoint> > >::type *point_id; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<data::SceneTransPoint> > >::type *point_ptr; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 13 scene_id:1629 48 48 14 point_map:1631";
  *(_QWORD *)(v2 + 16) = findScenePoint<data::SceneTransPoint>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 32) = scene_id;
  std::map<unsigned int,std::shared_ptr<data::SceneTransPoint>>::map((std::map<unsigned int,std::shared_ptr<data::SceneTransPoint>> *const)(v2 + 48));
  if ( (unsigned int)JsonConfigMgr::findAllScenePoint<data::SceneTransPoint>(
                       &Config::config_ptr->design_config.json_config_mgr,
                       *(_DWORD *)(v2 + 32),
                       (std::map<unsigned int,std::shared_ptr<data::SceneTransPoint>> *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "findScenePoint",
      1634);
    v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v14,
           (const char (*)[35])"findAllScenePoint fails, scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    __for_range = (std::map<unsigned int,std::shared_ptr<data::SceneTransPoint>> *)(v2 + 48);
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<data::SceneTransPoint>>::begin((std::map<unsigned int,std::shared_ptr<data::SceneTransPoint>> *const)(v2 + 48))._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<data::SceneTransPoint>>::end((std::map<unsigned int,std::shared_ptr<data::SceneTransPoint>> *const)(v2 + 48))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<data::SceneTransPoint>>>::operator*(&__for_begin);
      point_id = std::get<0ul,unsigned int const,std::shared_ptr<data::SceneTransPoint>>(__in);
      point_ptr = std::get<1ul,unsigned int const,std::shared_ptr<data::SceneTransPoint>>(__in);
      std::vector<unsigned int>::push_back(point_vec, point_id);
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<data::SceneTransPoint>>>::operator++(&__for_begin);
    }
    v6 = 0;
  }
  std::map<unsigned int,std::shared_ptr<data::SceneTransPoint>>::~map((std::map<unsigned int,std::shared_ptr<data::SceneTransPoint>> *const)(v2 + 48));
  result = v6;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1645: range 000000000044E192-000000000044E1FC
void __cdecl Robot::getDungeonEntryPointList(
        Robot *const this,
        uint32_t scene_id,
        std::vector<unsigned int> *point_vec,
        int32_t *ret)
{
  int32_t v4; // ecx

  v4 = findScenePoint<data::DungeonEntry>(scene_id, point_vec);
  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(ret);
  }
  *ret = v4;
};

// Line 1650: range 000000000044E1FE-000000000044E268
void __cdecl Robot::getDungeonWayPointList(
        Robot *const this,
        uint32_t scene_id,
        std::vector<unsigned int> *point_vec,
        int32_t *ret)
{
  int32_t v4; // ecx

  v4 = findScenePoint<data::DungeonWayPoint>(scene_id, point_vec);
  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(ret);
  }
  *ret = v4;
};

// Line 1655: range 000000000044E26A-000000000044E2D4
void __cdecl Robot::getSceneTransPointList(
        Robot *const this,
        uint32_t scene_id,
        std::vector<unsigned int> *point_vec,
        int32_t *ret)
{
  int32_t v4; // ecx

  v4 = findScenePoint<data::SceneTransPoint>(scene_id, point_vec);
  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(ret);
  }
  *ret = v4;
};

// Line 1660: range 000000000044E2D6-000000000044E717
void __cdecl Robot::getDungeonEntryInfo(
        Robot *const this,
        uint32_t point_id,
        std::vector<unsigned int> *dungeon_vec,
        int32_t *ret)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rdx
  int32_t v8; // ecx
  std::vector<unsigned int>::value_type __x; // [rsp+2Ch] [rbp-174h] BYREF
  google::protobuf::RepeatedPtrField<proto::DungeonEntryInfo>::const_iterator __for_begin; // [rsp+30h] [rbp-170h] BYREF
  google::protobuf::RepeatedPtrField<proto::DungeonEntryInfo>::const_iterator __for_end; // [rsp+38h] [rbp-168h] BYREF
  const google::protobuf::RepeatedPtrField<proto::DungeonEntryInfo> *__for_range; // [rsp+40h] [rbp-160h]
  const proto::DungeonEntryInfo *dungeon_entry; // [rsp+48h] [rbp-158h]
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-150h] BYREF
  char v17[304]; // [rsp+70h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 56 8 req:1661 144 80 8 rsp:1662";
  *(_QWORD *)(v4 + 16) = Robot::getDungeonEntryInfo;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862723] = -218959360;
  v6[536862724] = 62194;
  v6[536862727] = -202116109;
  proto::DungeonEntryInfoReq::DungeonEntryInfoReq((proto::DungeonEntryInfoReq *const)(v4 + 48));
  proto::DungeonEntryInfoRsp::DungeonEntryInfoRsp((proto::DungeonEntryInfoRsp *const)(v4 + 144));
  proto::DungeonEntryInfoReq::set_point_id((proto::DungeonEntryInfoReq *const)(v4 + 48), point_id);
  if ( Robot::sendProto<proto::DungeonEntryInfoReq,proto::DungeonEntryInfoRsp>(
         this,
         (proto::DungeonEntryInfoReq *)(v4 + 48),
         (proto::DungeonEntryInfoRsp *)(v4 + 144)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      stru_DEB78C0.gap0,
      1666);
    v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v16, (const char (*)[18])"sendProto fails, ");
    operator<<(v7, this);
    common::milog::MiLogStream::~MiLogStream(&v16);
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(ret);
    }
    *ret = -1;
  }
  else if ( proto::DungeonEntryInfoRsp::retcode((const proto::DungeonEntryInfoRsp *const)(v4 + 144)) )
  {
    v8 = proto::DungeonEntryInfoRsp::retcode((const proto::DungeonEntryInfoRsp *const)(v4 + 144));
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(ret);
    }
    *ret = v8;
  }
  else
  {
    __for_range = proto::DungeonEntryInfoRsp::dungeon_entry_list((const proto::DungeonEntryInfoRsp *const)(v4 + 144));
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::DungeonEntryInfo>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::DungeonEntryInfo>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::DungeonEntryInfo const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      dungeon_entry = google::protobuf::internal::RepeatedPtrIterator<proto::DungeonEntryInfo const>::operator*(&__for_begin);
      __x = proto::DungeonEntryInfo::dungeon_id(dungeon_entry);
      std::vector<unsigned int>::push_back(dungeon_vec, &__x);
      google::protobuf::internal::RepeatedPtrIterator<proto::DungeonEntryInfo const>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(ret);
    }
    *ret = 0;
  }
  proto::DungeonEntryInfoRsp::~DungeonEntryInfoRsp((proto::DungeonEntryInfoRsp *const)(v4 + 144));
  proto::DungeonEntryInfoReq::~DungeonEntryInfoReq((proto::DungeonEntryInfoReq *const)(v4 + 48));
  if ( v17 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1683: range 000000000044E718-000000000044EBEB
int32_t __cdecl Robot::playerEnterDungeon(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rdx
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-188h]
  std::allocator<char> __a; // [rsp+1Fh] [rbp-171h] BYREF
  std::string name; // [rsp+20h] [rbp-170h] BYREF
  char v12[336]; // [rsp+40h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 13 point_id:1684 64 4 15 dungeon_id:1685 80 32 8 msg:1687 144 32 8 rsp:1694 208 40 8 req:1693";
  *(_QWORD *)(v2 + 16) = Robot::playerEnterDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "point_id", &__a);
  ScriptUtil::getTableValue<unsigned int,char const(&)[11],unsigned int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 48),
    (const char (*)[11])"dungeon_id",
    (unsigned int *)(v2 + 64),
    (const char (*)[11])param_table,
    (unsigned int *)this);
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  std::to_string(&name, *(_DWORD *)(v2 + 64));
  std::operator+<char>((std::string *)(v2 + 80), "dungeon clear ", &name);
  std::string::~string(&name);
  if ( Robot::gmTalk(thisa, (const std::string *)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "playerEnterDungeon",
      1690);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[19])"gmTalk fails, msg:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, (const std::string *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    proto::PlayerEnterDungeonReq::PlayerEnterDungeonReq((proto::PlayerEnterDungeonReq *const)(v2 + 208));
    proto::PlayerEnterDungeonRsp::PlayerEnterDungeonRsp((proto::PlayerEnterDungeonRsp *const)(v2 + 144));
    proto::PlayerEnterDungeonReq::set_point_id((proto::PlayerEnterDungeonReq *const)(v2 + 208), *(_DWORD *)(v2 + 48));
    proto::PlayerEnterDungeonReq::set_dungeon_id((proto::PlayerEnterDungeonReq *const)(v2 + 208), *(_DWORD *)(v2 + 64));
    if ( Robot::sendProto<proto::PlayerEnterDungeonReq,proto::PlayerEnterDungeonRsp>(
           thisa,
           (proto::PlayerEnterDungeonReq *)(v2 + 208),
           (proto::PlayerEnterDungeonRsp *)(v2 + 144)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "playerEnterDungeon",
        1699);
      v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             (common::milog::MiLogStream *const)&name,
             (const char (*)[18])"sendProto fails, ");
      operator<<(v7, thisa);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
    else
    {
      v6 = proto::PlayerEnterDungeonRsp::retcode((const proto::PlayerEnterDungeonRsp *const)(v2 + 144));
    }
    proto::PlayerEnterDungeonRsp::~PlayerEnterDungeonRsp((proto::PlayerEnterDungeonRsp *const)(v2 + 144));
    proto::PlayerEnterDungeonReq::~PlayerEnterDungeonReq((proto::PlayerEnterDungeonReq *const)(v2 + 208));
  }
  std::string::~string((std::string *const)(v2 + 80));
  result = v6;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 1706: range 000000000044EBEC-000000000044EE0D
int32_t __cdecl Robot::playerQuitDungeon(Robot *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rdx
  int32_t v5; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-F0h] BYREF
  char v8[208]; // [rsp+30h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 32 8 req:1707 96 32 8 rsp:1708";
  *(_QWORD *)(v1 + 16) = Robot::playerQuitDungeon;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218959118;
  v3[536862724] = -202116109;
  proto::PlayerQuitDungeonReq::PlayerQuitDungeonReq((proto::PlayerQuitDungeonReq *const)(v1 + 32));
  proto::PlayerQuitDungeonRsp::PlayerQuitDungeonRsp((proto::PlayerQuitDungeonRsp *const)(v1 + 96));
  if ( Robot::sendProto<proto::PlayerQuitDungeonReq,proto::PlayerQuitDungeonRsp>(
         this,
         (proto::PlayerQuitDungeonReq *)(v1 + 32),
         (proto::PlayerQuitDungeonRsp *)(v1 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "playerQuitDungeon",
      1711);
    v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v7, (const char (*)[18])"sendProto fails, ");
    operator<<(v4, this);
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = -1;
  }
  else
  {
    v5 = proto::PlayerQuitDungeonRsp::retcode((const proto::PlayerQuitDungeonRsp *const)(v1 + 96));
  }
  proto::PlayerQuitDungeonRsp::~PlayerQuitDungeonRsp((proto::PlayerQuitDungeonRsp *const)(v1 + 96));
  proto::PlayerQuitDungeonReq::~PlayerQuitDungeonReq((proto::PlayerQuitDungeonReq *const)(v1 + 32));
  result = v5;
  if ( v8 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1718: range 000000000044EE0E-000000000044F114
int32_t __cdecl Robot::dungeonWayPointActivate(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-111h] BYREF
  std::string name; // [rsp+20h] [rbp-110h] BYREF
  char v10[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 point_id:1721 64 24 8 req:1719 128 32 8 rsp:1720";
  *(_QWORD *)(v2 + 16) = Robot::dungeonWayPointActivate;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  proto::DungeonWayPointActivateReq::DungeonWayPointActivateReq((proto::DungeonWayPointActivateReq *const)(v2 + 64));
  proto::DungeonWayPointActivateRsp::DungeonWayPointActivateRsp((proto::DungeonWayPointActivateRsp *const)(v2 + 128));
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "point_id", &__a);
  ScriptUtil::getTableValue<unsigned int>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 48));
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  proto::DungeonWayPointActivateReq::set_way_point_id(
    (proto::DungeonWayPointActivateReq *const)(v2 + 64),
    *(_DWORD *)(v2 + 48));
  if ( Robot::sendProto<proto::DungeonWayPointActivateReq,proto::DungeonWayPointActivateRsp>(
         this,
         (proto::DungeonWayPointActivateReq *)(v2 + 64),
         (proto::DungeonWayPointActivateRsp *)(v2 + 128)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "dungeonWayPointActivate",
      1726);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[18])"sendProto fails, ");
    operator<<(v5, this);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v6 = proto::DungeonWayPointActivateRsp::retcode((const proto::DungeonWayPointActivateRsp *const)(v2 + 128));
  }
  proto::DungeonWayPointActivateRsp::~DungeonWayPointActivateRsp((proto::DungeonWayPointActivateRsp *const)(v2 + 128));
  proto::DungeonWayPointActivateReq::~DungeonWayPointActivateReq((proto::DungeonWayPointActivateReq *const)(v2 + 64));
  result = v6;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1733: range 000000000044F116-000000000044F55C
int32_t __cdecl Robot::avatarPromote(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint64_t Guid; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-131h] BYREF
  std::string name; // [rsp+20h] [rbp-130h] BYREF
  char v13[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 14 avatar_id:1736 48 16 15 avatar_ptr:1738 80 32 8 req:1734 144 40 8 rsp:1735";
  *(_QWORD *)(v2 + 16) = Robot::avatarPromote;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  proto::AvatarPromoteReq::AvatarPromoteReq((proto::AvatarPromoteReq *const)(v2 + 80));
  proto::AvatarPromoteRsp::AvatarPromoteRsp((proto::AvatarPromoteRsp *const)(v2 + 144));
  *(_DWORD *)(v2 + 32) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "avatar_id", &__a);
  ScriptUtil::getTableValue<unsigned int>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32));
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  Player::findAvatarByAvatarId((Player *const)(v2 + 48), (_DWORD)this + 896);
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "avatarPromote",
      1741);
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[39])"findAvatarByAvatarId fails, avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    Guid = Avatar::getGuid(v7);
    proto::AvatarPromoteReq::set_guid((proto::AvatarPromoteReq *const)(v2 + 80), Guid);
    if ( Robot::sendProto<proto::AvatarPromoteReq,proto::AvatarPromoteRsp>(
           this,
           (proto::AvatarPromoteReq *)(v2 + 80),
           (proto::AvatarPromoteRsp *)(v2 + 144)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "avatarPromote",
        1747);
      v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             (common::milog::MiLogStream *const)&name,
             (const char (*)[18])"sendProto fails, ");
      operator<<(v9, this);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
    else
    {
      v6 = proto::AvatarPromoteRsp::retcode((const proto::AvatarPromoteRsp *const)(v2 + 144));
    }
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 48));
  proto::AvatarPromoteRsp::~AvatarPromoteRsp((proto::AvatarPromoteRsp *const)(v2 + 144));
  proto::AvatarPromoteReq::~AvatarPromoteReq((proto::AvatarPromoteReq *const)(v2 + 80));
  result = v6;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1754: range 000000000044F55E-000000000044F9D4
int32_t __cdecl Robot::unlockTalent(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint64_t Guid; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-168h]
  std::allocator<char> __a; // [rsp+1Fh] [rbp-151h] BYREF
  std::string name; // [rsp+20h] [rbp-150h] BYREF
  char v14[304]; // [rsp+40h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 14 avatar_id:1757 64 4 14 talent_id:1758 80 16 15 avatar_ptr:1760 112 32 8 req:1755 176 40 8 rsp:1756";
  *(_QWORD *)(v2 + 16) = Robot::unlockTalent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = -219021312;
  v4[536862725] = 62194;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  proto::UnlockAvatarTalentReq::UnlockAvatarTalentReq((proto::UnlockAvatarTalentReq *const)(v2 + 112));
  proto::UnlockAvatarTalentRsp::UnlockAvatarTalentRsp((proto::UnlockAvatarTalentRsp *const)(v2 + 176));
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "avatar_id", &__a);
  ScriptUtil::getTableValue<unsigned int,char const(&)[10],unsigned int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 48),
    (const char (*)[10])"talent_id",
    (unsigned int *)(v2 + 64),
    (const char (*)[10])param_table,
    (unsigned int *)this);
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  Player::findAvatarByAvatarId((Player *const)(v2 + 80), (_DWORD)thisa + 896);
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 80), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "unlockTalent",
      1763);
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[39])"findAvatarByAvatarId fails, avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    Guid = Avatar::getGuid(v7);
    proto::UnlockAvatarTalentReq::set_avatar_guid((proto::UnlockAvatarTalentReq *const)(v2 + 112), Guid);
    proto::UnlockAvatarTalentReq::set_talent_id((proto::UnlockAvatarTalentReq *const)(v2 + 112), *(_DWORD *)(v2 + 64));
    if ( Robot::sendProto<proto::UnlockAvatarTalentReq,proto::UnlockAvatarTalentRsp>(
           thisa,
           (proto::UnlockAvatarTalentReq *)(v2 + 112),
           (proto::UnlockAvatarTalentRsp *)(v2 + 176)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "unlockTalent",
        1770);
      v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             (common::milog::MiLogStream *const)&name,
             (const char (*)[18])"sendProto fails, ");
      operator<<(v9, thisa);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
    else
    {
      v6 = proto::UnlockAvatarTalentRsp::retcode((const proto::UnlockAvatarTalentRsp *const)(v2 + 176));
    }
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 80));
  proto::UnlockAvatarTalentRsp::~UnlockAvatarTalentRsp((proto::UnlockAvatarTalentRsp *const)(v2 + 176));
  proto::UnlockAvatarTalentReq::~UnlockAvatarTalentReq((proto::UnlockAvatarTalentReq *const)(v2 + 112));
  result = v6;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1777: range 000000000044F9D6-000000000044FCD2
int32_t __cdecl Robot::dungeonDieOption(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-111h] BYREF
  std::string name; // [rsp+20h] [rbp-110h] BYREF
  char v10[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 option:1780 64 32 8 req:1778 128 32 8 rsp:1779";
  *(_QWORD *)(v2 + 16) = Robot::dungeonDieOption;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  proto::DungeonDieOptionReq::DungeonDieOptionReq((proto::DungeonDieOptionReq *const)(v2 + 64));
  proto::DungeonDieOptionRsp::DungeonDieOptionRsp((proto::DungeonDieOptionRsp *const)(v2 + 128));
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "option", &__a);
  ScriptUtil::getTableValue<unsigned int>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 48));
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  proto::DungeonDieOptionReq::set_die_option(
    (proto::DungeonDieOptionReq *const)(v2 + 64),
    *(proto::PlayerDieOption *)(v2 + 48));
  if ( Robot::sendProto<proto::DungeonDieOptionReq,proto::DungeonDieOptionRsp>(
         this,
         (proto::DungeonDieOptionReq *)(v2 + 64),
         (proto::DungeonDieOptionRsp *)(v2 + 128)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "dungeonDieOption",
      1785);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[18])"sendProto fails, ");
    operator<<(v5, this);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v6 = proto::DungeonDieOptionRsp::retcode((const proto::DungeonDieOptionRsp *const)(v2 + 128));
  }
  proto::DungeonDieOptionRsp::~DungeonDieOptionRsp((proto::DungeonDieOptionRsp *const)(v2 + 128));
  proto::DungeonDieOptionReq::~DungeonDieOptionReq((proto::DungeonDieOptionReq *const)(v2 + 64));
  result = v6;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1792: range 000000000044FCD4-00000000004500F3
int32_t __cdecl Robot::springUse(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint64_t Guid; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-131h] BYREF
  std::string name; // [rsp+20h] [rbp-130h] BYREF
  char v13[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 14 avatar_id:1795 64 16 15 avatar_ptr:1797 96 32 8 req:1793 160 32 8 rsp:1794";
  *(_QWORD *)(v2 + 16) = Robot::springUse;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  proto::SpringUseReq::SpringUseReq((proto::SpringUseReq *const)(v2 + 96));
  proto::SpringUseRsp::SpringUseRsp((proto::SpringUseRsp *const)(v2 + 160));
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "avatar_id", &__a);
  ScriptUtil::getTableValue<unsigned int>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 48));
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  Player::findAvatarByAvatarId((Player *const)(v2 + 64), (_DWORD)this + 896);
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "springUse",
      1800);
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[39])"findAvatarByAvatarId fails, avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Guid = Avatar::getGuid(v7);
    proto::SpringUseReq::set_guid((proto::SpringUseReq *const)(v2 + 96), Guid);
    if ( Robot::sendProto<proto::SpringUseReq,proto::SpringUseRsp>(
           this,
           (proto::SpringUseReq *)(v2 + 96),
           (proto::SpringUseRsp *)(v2 + 160)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "springUse",
        1806);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)&name,
             (const char (*)[16])"sendProto fails");
      operator<<(v9, this);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v6 = -1;
    }
    else
    {
      v6 = proto::SpringUseRsp::retcode((const proto::SpringUseRsp *const)(v2 + 160));
    }
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 64));
  proto::SpringUseRsp::~SpringUseRsp((proto::SpringUseRsp *const)(v2 + 160));
  proto::SpringUseReq::~SpringUseReq((proto::SpringUseReq *const)(v2 + 96));
  result = v6;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1813: range 00000000004500F4-0000000000450482
int32_t __cdecl Robot::setPlayerProp(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-148h]
  std::allocator<char> __a; // [rsp+17h] [rbp-139h] BYREF
  proto::PropValue *prop_ptr; // [rsp+18h] [rbp-138h]
  std::string name; // [rsp+20h] [rbp-130h] BYREF
  char v12[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 9 type:1816 64 4 10 value:1817 80 24 8 rsp:1815 144 48 8 req:1814";
  *(_QWORD *)(v2 + 16) = Robot::setPlayerProp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  proto::SetPlayerPropReq::SetPlayerPropReq((proto::SetPlayerPropReq *const)(v2 + 144));
  proto::SetPlayerPropRsp::SetPlayerPropRsp((proto::SetPlayerPropRsp *const)(v2 + 80));
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "type", &__a);
  ScriptUtil::getTableValue<unsigned int,char const(&)[6],unsigned int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 48),
    (const char (*)[6])"value",
    (unsigned int *)(v2 + 64),
    (const char (*)[6])param_table,
    (unsigned int *)this);
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  prop_ptr = proto::SetPlayerPropReq::add_prop_list((proto::SetPlayerPropReq *const)(v2 + 144));
  if ( prop_ptr )
  {
    proto::PropValue::set_type(prop_ptr, *(_DWORD *)(v2 + 48));
    proto::PropValue::set_ival(prop_ptr, *(unsigned int *)(v2 + 64));
  }
  if ( Robot::sendProto<proto::SetPlayerPropReq,proto::SetPlayerPropRsp>(
         thisa,
         (proto::SetPlayerPropReq *)(v2 + 144),
         (proto::SetPlayerPropRsp *)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "setPlayerProp",
      1827);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[16])"sendProto fails");
    operator<<(v5, thisa);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v6 = proto::SetPlayerPropRsp::retcode((const proto::SetPlayerPropRsp *const)(v2 + 80));
  }
  proto::SetPlayerPropRsp::~SetPlayerPropRsp((proto::SetPlayerPropRsp *const)(v2 + 80));
  proto::SetPlayerPropReq::~SetPlayerPropReq((proto::SetPlayerPropReq *const)(v2 + 144));
  result = v6;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1834: range 0000000000450484-00000000004506C6
int32_t __cdecl Robot::refreshBackgroundAvatar(Robot *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  common::milog::MiLogStream *v4; // rdx
  int32_t v5; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-130h] BYREF
  char v8[272]; // [rsp+30h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 24 8 req:1835 96 96 8 rsp:1836";
  *(_QWORD *)(v1 + 16) = Robot::refreshBackgroundAvatar;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862726] = -202116109;
  proto::RefreshBackgroundAvatarReq::RefreshBackgroundAvatarReq((proto::RefreshBackgroundAvatarReq *const)(v1 + 32));
  proto::RefreshBackgroundAvatarRsp::RefreshBackgroundAvatarRsp((proto::RefreshBackgroundAvatarRsp *const)(v1 + 96));
  if ( Robot::sendProto<proto::RefreshBackgroundAvatarReq,proto::RefreshBackgroundAvatarRsp>(
         this,
         (proto::RefreshBackgroundAvatarReq *)(v1 + 32),
         (proto::RefreshBackgroundAvatarRsp *)(v1 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "refreshBackgroundAvatar",
      1839);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v7, (const char (*)[16])"sendProto fails");
    operator<<(v4, this);
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = -1;
  }
  else
  {
    v5 = proto::RefreshBackgroundAvatarRsp::retcode((const proto::RefreshBackgroundAvatarRsp *const)(v1 + 96));
  }
  proto::RefreshBackgroundAvatarRsp::~RefreshBackgroundAvatarRsp((proto::RefreshBackgroundAvatarRsp *const)(v1 + 96));
  proto::RefreshBackgroundAvatarReq::~RefreshBackgroundAvatarReq((proto::RefreshBackgroundAvatarReq *const)(v1 + 32));
  result = v5;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1846: range 00000000004507AE-0000000000450BA4
int32_t __cdecl Robot::selectWorktopOption(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  int32_t result; // eax
  char *v8; // [rsp+0h] [rbp-160h]
  Scene *v9; // [rsp+8h] [rbp-158h]
  std::allocator<char> __a; // [rsp+2Fh] [rbp-131h] BYREF
  std::string name; // [rsp+30h] [rbp-130h] BYREF
  char v12[27][10]; // [rsp+50h] [rbp-110h] BYREF
  Robot::selectWorktopOption::<lambda(Gadget&)> v13; // 0:esi.4,8:rdx.8

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 14 gadget_id:1849 64 4 14 option_id:1850 80 4 14 entity_id:1852 96 32 8 req:1847 160 32 8 rsp:1848";
  *(_QWORD *)(v2 + 16) = Robot::selectWorktopOption;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  proto::SelectWorktopOptionReq::SelectWorktopOptionReq((proto::SelectWorktopOptionReq *const)(v2 + 96));
  proto::SelectWorktopOptionRsp::SelectWorktopOptionRsp((proto::SelectWorktopOptionRsp *const)(v2 + 160));
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "gadget_id", &__a);
  ScriptUtil::getTableValue<unsigned int,char const(&)[10],unsigned int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 48),
    (const char (*)[10])"option_id",
    (unsigned int *)(v2 + 64),
    v12,
    &v9->scene_id_);
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  *(_DWORD *)(v2 + 80) = 0;
  v13.__entity_id = (uint32_t *)(v2 + 80);
  v13.__gadget_id = *(_DWORD *)(v2 + 48);
  std::function<ForeachPolicy ()(Gadget &)>::function<Robot::selectWorktopOption(luabind::adl::object const&)::{lambda(Gadget &)#1},void,void>(
    (std::function<ForeachPolicy(Gadget&)> *const)&name,
    v13);
  Scene::foreachEntity<Gadget>(&this->scene_, (std::function<ForeachPolicy(Gadget&)> *)&name);
  std::function<ForeachPolicy ()(Gadget &)>::~function((std::function<ForeachPolicy(Gadget&)> *const)&name);
  proto::SelectWorktopOptionReq::set_gadget_entity_id(
    (proto::SelectWorktopOptionReq *const)(v2 + 96),
    *(_DWORD *)(v2 + 80));
  proto::SelectWorktopOptionReq::set_option_id((proto::SelectWorktopOptionReq *const)(v2 + 96), *(_DWORD *)(v2 + 64));
  if ( Robot::sendProto<proto::SelectWorktopOptionReq,proto::SelectWorktopOptionRsp>(
         this,
         (proto::SelectWorktopOptionReq *)(v2 + 96),
         (proto::SelectWorktopOptionRsp *)(v2 + 160)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "selectWorktopOption",
      1866);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[16])"sendProto fails");
    operator<<(v5, this);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v6 = proto::SelectWorktopOptionRsp::retcode((const proto::SelectWorktopOptionRsp *const)(v2 + 160));
  }
  proto::SelectWorktopOptionRsp::~SelectWorktopOptionRsp((proto::SelectWorktopOptionRsp *const)(v2 + 160));
  proto::SelectWorktopOptionReq::~SelectWorktopOptionReq((proto::SelectWorktopOptionReq *const)(v2 + 96));
  result = v6;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1853: range 00000000004506C8-00000000004507AC
ForeachPolicy __cdecl Robot::selectWorktopOption(luabind::adl::object const&)::{lambda(Gadget &)#1}::operator()(
        const Robot::selectWorktopOption::<lambda(Gadget&)> *const __closure,
        Gadget *gagdet)
{
  uint32_t GadgetId; // ecx
  Gadget *v3; // rax
  uint32_t *entity_id; // rbx
  uint32_t EntityId; // ecx

  GadgetId = Gadget::getGadgetId(gagdet);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( GadgetId != __closure->__gadget_id )
    return 0;
  v3 = gagdet;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__entity_id >> 3) + 0x7FFF8000) )
    v3 = (Gadget *)__asan_report_load8(&__closure->__entity_id);
  entity_id = __closure->__entity_id;
  EntityId = Entity::getEntityId(v3);
  if ( *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(entity_id);
  }
  *entity_id = EntityId;
  return 1;
};

// Line 1873: range 0000000000450BA6-0000000000450DE9
int32_t __cdecl Robot::getOnlinePlayerList(Robot *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  common::milog::MiLogStream *v4; // rdx
  int32_t v5; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-110h] BYREF
  char v8[240]; // [rsp+30h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 24 8 req:1874 96 56 8 rsp:1875";
  *(_QWORD *)(v1 + 16) = Robot::getOnlinePlayerList;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  proto::GetOnlinePlayerListReq::GetOnlinePlayerListReq((proto::GetOnlinePlayerListReq *const)(v1 + 32));
  proto::GetOnlinePlayerListRsp::GetOnlinePlayerListRsp((proto::GetOnlinePlayerListRsp *const)(v1 + 96));
  if ( Robot::sendProto<proto::GetOnlinePlayerListReq,proto::GetOnlinePlayerListRsp>(
         this,
         (proto::GetOnlinePlayerListReq *)(v1 + 32),
         (proto::GetOnlinePlayerListRsp *)(v1 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getOnlinePlayerList",
      1878);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v7, (const char (*)[16])"sendProto fails");
    operator<<(v4, this);
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = -1;
  }
  else
  {
    v5 = proto::GetOnlinePlayerListRsp::retcode((const proto::GetOnlinePlayerListRsp *const)(v1 + 96));
  }
  proto::GetOnlinePlayerListRsp::~GetOnlinePlayerListRsp((proto::GetOnlinePlayerListRsp *const)(v1 + 96));
  proto::GetOnlinePlayerListReq::~GetOnlinePlayerListReq((proto::GetOnlinePlayerListReq *const)(v1 + 32));
  result = v5;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1885: range 0000000000450DEA-00000000004510FF
int32_t __cdecl Robot::getQuestTalkHistory(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-111h] BYREF
  std::string name; // [rsp+20h] [rbp-110h] BYREF
  char v10[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 20 parent_quest_id:1888 48 24 8 req:1886 112 48 8 rsp:1887";
  *(_QWORD *)(v2 + 16) = Robot::getQuestTalkHistory;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  proto::GetQuestTalkHistoryReq::GetQuestTalkHistoryReq((proto::GetQuestTalkHistoryReq *const)(v2 + 48));
  proto::GetQuestTalkHistoryRsp::GetQuestTalkHistoryRsp((proto::GetQuestTalkHistoryRsp *const)(v2 + 112));
  *(_DWORD *)(v2 + 32) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "parent_quest_id", &__a);
  ScriptUtil::getTableValue<unsigned int>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32));
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  proto::GetQuestTalkHistoryReq::set_parent_quest_id(
    (proto::GetQuestTalkHistoryReq *const)(v2 + 48),
    *(_DWORD *)(v2 + 32));
  if ( Robot::sendProto<proto::GetQuestTalkHistoryReq,proto::GetQuestTalkHistoryRsp>(
         this,
         (proto::GetQuestTalkHistoryReq *)(v2 + 48),
         (proto::GetQuestTalkHistoryRsp *)(v2 + 112)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getQuestTalkHistory",
      1893);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[16])"sendProto fails");
    operator<<(v5, this);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v6 = proto::GetQuestTalkHistoryRsp::retcode((const proto::GetQuestTalkHistoryRsp *const)(v2 + 112));
  }
  proto::GetQuestTalkHistoryRsp::~GetQuestTalkHistoryRsp((proto::GetQuestTalkHistoryRsp *const)(v2 + 112));
  proto::GetQuestTalkHistoryReq::~GetQuestTalkHistoryReq((proto::GetQuestTalkHistoryReq *const)(v2 + 48));
  result = v6;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1900: range 0000000000451100-0000000000451580
int32_t __cdecl Robot::executeGroupTrigger(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-1A8h]
  const char (*v9)[17]; // [rsp+10h] [rbp-1A0h]
  unsigned int *v10; // [rsp+18h] [rbp-198h] BYREF
  std::string name; // [rsp+20h] [rbp-190h] BYREF
  const char (*v12[46])[7]; // [rsp+40h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 4 21 source_entity_id:1903 48 4 21 target_entity_id:1905 64 4 11 param1:1906 80 4 11 param2"
                        ":1907 96 4 11 param3:1908 112 24 8 rsp:1902 176 32 16 source_name:1904 240 48 8 req:1901";
  *(_QWORD *)(v2 + 16) = Robot::executeGroupTrigger;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = 61956;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862729] = -202116109;
  proto::ExecuteGroupTriggerReq::ExecuteGroupTriggerReq((proto::ExecuteGroupTriggerReq *const)(v2 + 240));
  proto::ExecuteGroupTriggerRsp::ExecuteGroupTriggerRsp((proto::ExecuteGroupTriggerRsp *const)(v2 + 112));
  *(_DWORD *)(v2 + 32) = 0;
  std::string::basic_string((std::string *const)(v2 + 176));
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  *(_DWORD *)(v2 + 96) = 0;
  std::allocator<char>::allocator((char *)&v10 + 7);
  std::string::basic_string<std::allocator<char>>(&name, "source_entity_id", (const std::allocator<char> *)&v10 + 7);
  ScriptUtil::getTableValue<unsigned int,char const(&)[12],std::string &,char const(&)[17],unsigned int &,char const(&)[7],unsigned int &,char const(&)[7],unsigned int &,char const(&)[7],unsigned int &>(
    &ScriptUtil::no_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32),
    (const char (*)[12])"source_name",
    (std::string *)(v2 + 176),
    (const char (*)[17])"target_entity_id",
    (unsigned int *)(v2 + 48),
    (const char (*)[7])"param1",
    (unsigned int *)(v2 + 64),
    (const char (*)[7])"param2",
    (unsigned int *)(v2 + 80),
    (const char (*)[7])"param3",
    (unsigned int *)(v2 + 96),
    (const char (*)[12])param_table,
    (std::string *)this,
    v9,
    v10,
    (const char (*)[7])name._M_dataplus._M_p,
    (unsigned int *)name._M_string_length,
    (const char (*)[7])name._anon_0._M_allocated_capacity,
    *((unsigned int **)&name._anon_0._M_allocated_capacity + 1),
    v12[0],
    (unsigned int *)v12[1]);
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v10 + 7);
  proto::ExecuteGroupTriggerReq::set_source_entity_id(
    (proto::ExecuteGroupTriggerReq *const)(v2 + 240),
    *(_DWORD *)(v2 + 32));
  proto::ExecuteGroupTriggerReq::set_source_name(
    (proto::ExecuteGroupTriggerReq *const)(v2 + 240),
    (const std::string *)(v2 + 176));
  proto::ExecuteGroupTriggerReq::set_target_entity_id(
    (proto::ExecuteGroupTriggerReq *const)(v2 + 240),
    *(_DWORD *)(v2 + 48));
  proto::ExecuteGroupTriggerReq::set_param1((proto::ExecuteGroupTriggerReq *const)(v2 + 240), *(_DWORD *)(v2 + 64));
  proto::ExecuteGroupTriggerReq::set_param2((proto::ExecuteGroupTriggerReq *const)(v2 + 240), *(_DWORD *)(v2 + 80));
  proto::ExecuteGroupTriggerReq::set_param3((proto::ExecuteGroupTriggerReq *const)(v2 + 240), *(_DWORD *)(v2 + 96));
  if ( Robot::sendProto<proto::ExecuteGroupTriggerReq,proto::ExecuteGroupTriggerRsp>(
         thisa,
         (proto::ExecuteGroupTriggerReq *)(v2 + 240),
         (proto::ExecuteGroupTriggerRsp *)(v2 + 112)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "executeGroupTrigger",
      1919);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[16])"sendProto fails");
    operator<<(v5, thisa);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v6 = proto::ExecuteGroupTriggerRsp::retcode((const proto::ExecuteGroupTriggerRsp *const)(v2 + 112));
  }
  std::string::~string((std::string *const)(v2 + 176));
  proto::ExecuteGroupTriggerRsp::~ExecuteGroupTriggerRsp((proto::ExecuteGroupTriggerRsp *const)(v2 + 112));
  proto::ExecuteGroupTriggerReq::~ExecuteGroupTriggerReq((proto::ExecuteGroupTriggerReq *const)(v2 + 240));
  result = v6;
  if ( v12 == (const char (**)[7])v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1926: range 0000000000451582-000000000045192B
int32_t __cdecl Robot::levelupCity(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-148h]
  const char (*v9)[9]; // [rsp+10h] [rbp-140h]
  unsigned int *v10; // [rsp+18h] [rbp-138h] BYREF
  std::string name; // [rsp+20h] [rbp-130h] BYREF
  char v12[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 13 scene_id:1929 48 4 12 area_id:1930 64 4 13 item_num:1931 80 32 8 req:1927 144 40 8 rsp:1928";
  *(_QWORD *)(v2 + 16) = Robot::levelupCity;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = 61956;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  proto::LevelupCityReq::LevelupCityReq((proto::LevelupCityReq *const)(v2 + 80));
  proto::LevelupCityRsp::LevelupCityRsp((proto::LevelupCityRsp *const)(v2 + 144));
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  std::allocator<char>::allocator((char *)&v10 + 7);
  std::string::basic_string<std::allocator<char>>(&name, "scene_id", (const std::allocator<char> *)&v10 + 7);
  ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &,char const(&)[9],unsigned int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32),
    (const char (*)[8])"area_id",
    (unsigned int *)(v2 + 48),
    (const char (*)[9])"item_num",
    (unsigned int *)(v2 + 64),
    (const char (*)[8])param_table,
    (unsigned int *)this,
    v9,
    v10);
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v10 + 7);
  proto::LevelupCityReq::set_scene_id((proto::LevelupCityReq *const)(v2 + 80), *(_DWORD *)(v2 + 32));
  proto::LevelupCityReq::set_area_id((proto::LevelupCityReq *const)(v2 + 80), *(_DWORD *)(v2 + 48));
  proto::LevelupCityReq::set_item_num((proto::LevelupCityReq *const)(v2 + 80), *(_DWORD *)(v2 + 64));
  if ( Robot::sendProto<proto::LevelupCityReq,proto::LevelupCityRsp>(
         thisa,
         (proto::LevelupCityReq *)(v2 + 80),
         (proto::LevelupCityRsp *)(v2 + 144)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "levelupCity",
      1938);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[16])"sendProto fails");
    operator<<(v5, thisa);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v6 = proto::LevelupCityRsp::retcode((const proto::LevelupCityRsp *const)(v2 + 144));
  }
  proto::LevelupCityRsp::~LevelupCityRsp((proto::LevelupCityRsp *const)(v2 + 144));
  proto::LevelupCityReq::~LevelupCityReq((proto::LevelupCityReq *const)(v2 + 80));
  result = v6;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1945: range 000000000045192C-0000000000451B69
int32_t __cdecl Robot::setPlayerName(Robot *const this, const std::string *nick_name)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-F0h] BYREF
  char v9[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 8 req:1946 96 32 8 rsp:1947";
  *(_QWORD *)(v2 + 16) = Robot::setPlayerName;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  proto::SetPlayerNameReq::SetPlayerNameReq((proto::SetPlayerNameReq *const)(v2 + 32));
  proto::SetPlayerNameRsp::SetPlayerNameRsp((proto::SetPlayerNameRsp *const)(v2 + 96));
  proto::SetPlayerNameReq::set_nick_name((proto::SetPlayerNameReq *const)(v2 + 32), nick_name);
  if ( Robot::sendProto<proto::SetPlayerNameReq,proto::SetPlayerNameRsp>(
         this,
         (proto::SetPlayerNameReq *)(v2 + 32),
         (proto::SetPlayerNameRsp *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "setPlayerName",
      1951);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v8, (const char (*)[16])"sendProto fails");
    operator<<(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v8);
    v6 = -1;
  }
  else
  {
    v6 = proto::SetPlayerNameRsp::retcode((const proto::SetPlayerNameRsp *const)(v2 + 96));
  }
  proto::SetPlayerNameRsp::~SetPlayerNameRsp((proto::SetPlayerNameRsp *const)(v2 + 96));
  proto::SetPlayerNameReq::~SetPlayerNameReq((proto::SetPlayerNameReq *const)(v2 + 32));
  result = v6;
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1958: range 0000000000451B6A-0000000000451E9F
int32_t __cdecl Robot::avatarChangeElementType(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-128h]
  std::allocator<char> __a; // [rsp+1Fh] [rbp-111h] BYREF
  std::string name; // [rsp+20h] [rbp-110h] BYREF
  char v11[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 13 scene_id:1961 48 4 12 area_id:1962 64 24 8 rsp:1960 128 32 8 req:1959";
  *(_QWORD *)(v2 + 16) = Robot::avatarChangeElementType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  proto::AvatarChangeElementTypeReq::AvatarChangeElementTypeReq((proto::AvatarChangeElementTypeReq *const)(v2 + 128));
  proto::AvatarChangeElementTypeRsp::AvatarChangeElementTypeRsp((proto::AvatarChangeElementTypeRsp *const)(v2 + 64));
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "scene_id", &__a);
  ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32),
    (const char (*)[8])"area_id",
    (unsigned int *)(v2 + 48),
    (const char (*)[8])param_table,
    (unsigned int *)this);
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  proto::AvatarChangeElementTypeReq::set_scene_id(
    (proto::AvatarChangeElementTypeReq *const)(v2 + 128),
    *(_DWORD *)(v2 + 32));
  proto::AvatarChangeElementTypeReq::set_area_id(
    (proto::AvatarChangeElementTypeReq *const)(v2 + 128),
    *(_DWORD *)(v2 + 48));
  if ( Robot::sendProto<proto::AvatarChangeElementTypeReq,proto::AvatarChangeElementTypeRsp>(
         thisa,
         (proto::AvatarChangeElementTypeReq *)(v2 + 128),
         (proto::AvatarChangeElementTypeRsp *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "avatarChangeElementType",
      1968);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)&name,
           (const char (*)[16])"sendProto fails");
    operator<<(v5, thisa);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    v6 = proto::AvatarChangeElementTypeRsp::retcode((const proto::AvatarChangeElementTypeRsp *const)(v2 + 64));
  }
  proto::AvatarChangeElementTypeRsp::~AvatarChangeElementTypeRsp((proto::AvatarChangeElementTypeRsp *const)(v2 + 64));
  proto::AvatarChangeElementTypeReq::~AvatarChangeElementTypeReq((proto::AvatarChangeElementTypeReq *const)(v2 + 128));
  result = v6;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1975: range 0000000000451EA0-0000000000452718
int32_t __cdecl Robot::randomGoto(Robot *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rax
  int v7; // eax
  const std::shared_ptr<data::ConfigScenePoint> *v8; // rax
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  float *p_z; // rax
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  data::Vector *p_pos; // rax
  common::milog::MiLogStream *v14; // rdx
  int32_t result; // eax
  uint32_t index; // [rsp+14h] [rbp-28Ch]
  std::unordered_map<unsigned int,std::shared_ptr<data::ConfigScenePoint>>::const_iterator __for_begin; // [rsp+18h] [rbp-288h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<data::ConfigScenePoint>>::const_iterator __for_end; // [rsp+20h] [rbp-280h] BYREF
  const SceneJsonConfig *scene_json_config_ptr; // [rsp+28h] [rbp-278h]
  const std::unordered_map<unsigned int,std::shared_ptr<data::ConfigScenePoint>> *__for_range; // [rsp+30h] [rbp-270h]
  const std::pair<unsigned int const,std::shared_ptr<data::ConfigScenePoint> > *v21; // [rsp+38h] [rbp-268h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<data::ConfigScenePoint> > >::type *point_id; // [rsp+40h] [rbp-260h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<data::ConfigScenePoint> > >::type *config_point_ptr; // [rsp+48h] [rbp-258h]
  std::string __rhs; // [rsp+50h] [rbp-250h] BYREF
  std::string __lhs; // [rsp+70h] [rbp-230h] BYREF
  std::string v26; // [rsp+90h] [rbp-210h] BYREF
  std::string v27; // [rsp+B0h] [rbp-1F0h] BYREF
  std::string v28; // [rsp+D0h] [rbp-1D0h] BYREF
  std::string v29; // [rsp+F0h] [rbp-1B0h] BYREF
  std::string v30; // [rsp+110h] [rbp-190h] BYREF
  common::milog::MiLogStream v31; // [rsp+130h] [rbp-170h] BYREF
  char v32[336]; // [rsp+150h] [rbp-150h] BYREF

  v1 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 4 13 scene_id:1976 48 16 21 config_point_ptr:1994 80 24 14 point_vec:1983 144 32 8 req:1995"
                        " 208 40 8 rsp:1996";
  *(_QWORD *)(v1 + 16) = Robot::randomGoto;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862722] = 62194;
  v3[536862723] = -218959360;
  v3[536862724] = 62194;
  v3[536862725] = -219021312;
  v3[536862726] = 62194;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  *(_DWORD *)(v1 + 32) = Scene::getSceneId(&this->scene_);
  scene_json_config_ptr = JsonConfigMgr::findSceneJsonConfig(
                            &Config::config_ptr->design_config.json_config_mgr,
                            *(_DWORD *)(v1 + 32));
  if ( scene_json_config_ptr )
  {
    std::vector<std::shared_ptr<data::ConfigScenePoint>>::vector((std::vector<std::shared_ptr<data::ConfigScenePoint>> *const)(v1 + 80));
    __for_range = &scene_json_config_ptr->point_map;
    __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<data::ConfigScenePoint>>::begin(&scene_json_config_ptr->point_map)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<data::ConfigScenePoint>>::end(&scene_json_config_ptr->point_map)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<data::ConfigScenePoint>>,false>(
              &__for_begin,
              &__for_end) )
    {
      v21 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<data::ConfigScenePoint>>,false,false>::operator*(&__for_begin);
      point_id = std::get<0ul,unsigned int const,std::shared_ptr<data::ConfigScenePoint>>(v21);
      config_point_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<data::ConfigScenePoint> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<data::ConfigScenePoint>>(v21);
      std::vector<std::shared_ptr<data::ConfigScenePoint>>::push_back(
        (std::vector<std::shared_ptr<data::ConfigScenePoint>> *const)(v1 + 80),
        config_point_ptr);
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<data::ConfigScenePoint>>,false,false>::operator++(&__for_begin);
    }
    if ( std::vector<std::shared_ptr<data::ConfigScenePoint>>::empty((const std::vector<std::shared_ptr<data::ConfigScenePoint>> *const)(v1 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "randomGoto",
        1990);
      v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v31,
             (const char (*)[32])"can't find any point, scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v31);
      v5 = -1;
    }
    else
    {
      v7 = std::vector<std::shared_ptr<data::ConfigScenePoint>>::size((const std::vector<std::shared_ptr<data::ConfigScenePoint>> *const)(v1 + 80));
      index = common::tools::RandomUtils::rand<unsigned int>(0, v7 - 1);
      v8 = std::vector<std::shared_ptr<data::ConfigScenePoint>>::operator[](
             (std::vector<std::shared_ptr<data::ConfigScenePoint>> *const)(v1 + 80),
             index);
      std::shared_ptr<data::ConfigScenePoint>::shared_ptr((std::shared_ptr<data::ConfigScenePoint> *const)(v1 + 48), v8);
      proto::GmTalkReq::GmTalkReq((proto::GmTalkReq *const)(v1 + 144));
      proto::GmTalkRsp::GmTalkRsp((proto::GmTalkRsp *const)(v1 + 208));
      v9 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      p_z = &v9->pos.z;
      if ( *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_z & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_z);
      }
      common::tools::StringUtils::numToStr<float>(&v30, v9->pos.z);
      v11 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&v11->pos.y >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v11->pos.y >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v11->pos.y);
      }
      common::tools::StringUtils::numToStr<float>(&v27, v11->pos.y);
      v12 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
      p_pos = &v12->pos;
      if ( *(_BYTE *)(((unsigned __int64)p_pos >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_pos >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_pos);
      }
      common::tools::StringUtils::numToStr<float>(&__rhs, v12->pos.x);
      std::operator+<char>(&__lhs, "goto ", &__rhs);
      std::operator+<char>(&v26, &__lhs, " ");
      std::operator+<char>(&v28, &v26, &v27);
      std::operator+<char>(&v29, &v28, " ");
      std::operator+<char>((std::string *)&v31, &v29, &v30);
      proto::GmTalkReq::set_msg((proto::GmTalkReq *const)(v1 + 144), (std::string *)&v31);
      std::string::~string((std::string *const)&v31);
      std::string::~string(&v29);
      std::string::~string(&v28);
      std::string::~string(&v26);
      std::string::~string(&__lhs);
      std::string::~string(&__rhs);
      std::string::~string(&v27);
      std::string::~string(&v30);
      if ( Robot::sendProto<proto::GmTalkReq,proto::GmTalkRsp>(
             this,
             (proto::GmTalkReq *)(v1 + 144),
             (proto::GmTalkRsp *)(v1 + 208)) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/operation/robot_op.cpp",
          "randomGoto",
          2000);
        v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                &v31,
                (const char (*)[18])"sendProto fails, ");
        operator<<(v14, this);
        common::milog::MiLogStream::~MiLogStream(&v31);
        v5 = -1;
      }
      else
      {
        v5 = proto::GmTalkRsp::retcode((const proto::GmTalkRsp *const)(v1 + 208));
      }
      proto::GmTalkRsp::~GmTalkRsp((proto::GmTalkRsp *const)(v1 + 208));
      proto::GmTalkReq::~GmTalkReq((proto::GmTalkReq *const)(v1 + 144));
      std::shared_ptr<data::ConfigScenePoint>::~shared_ptr((std::shared_ptr<data::ConfigScenePoint> *const)(v1 + 48));
    }
    std::vector<std::shared_ptr<data::ConfigScenePoint>>::~vector((std::vector<std::shared_ptr<data::ConfigScenePoint>> *const)(v1 + 80));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "randomGoto",
      1980);
    v4 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v31,
           (const char (*)[37])"findSceneJsonConfig fails, scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v31);
    v5 = -1;
  }
  result = v5;
  if ( v32 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 2007: range 000000000045271A-0000000000452D61
int32_t __cdecl Robot::randomMove(Robot *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 Pos; // rax
  float v10; // xmm0_4
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t EntityId; // eax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  common::milog::MiLogStream *v15; // rdx
  int32_t result; // eax
  float z_; // [rsp+4h] [rbp-17Ch]
  float step_len; // [rsp+1Ch] [rbp-164h]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+20h] [rbp-160h]
  proto::MotionInfo *motion_info; // [rsp+28h] [rbp-158h]
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-150h] BYREF
  char v22[304]; // [rsp+50h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 4 13 scene_id:2008 48 12 12 new_pos:2022 80 12 8 pos:2023 112 12 9 step:2028 144 16 19 cur_"
                        "avatar_ptr:2015 176 40 8 req:2033";
  *(_QWORD *)(v1 + 16) = Robot::randomMove;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862721] = 0x4000000;
  v3[536862722] = 62194;
  v3[536862722] = 0x4000000;
  v3[536862723] = 62194;
  v3[536862723] = 0x4000000;
  v3[536862724] = 62194;
  v3[536862725] = 62194;
  v3[536862726] = -218103808;
  v3[536862727] = -202116109;
  *(_DWORD *)(v1 + 32) = Scene::getSceneId(&this->scene_);
  scene_script_config_ptr = LuaConfigMgr::findSceneScriptConfig(
                              &Config::config_ptr->design_config.lua_config_mgr,
                              *(_DWORD *)(v1 + 32));
  if ( scene_script_config_ptr )
  {
    Player::getCurAvatar((const Player *const)(v1 + 144));
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v1 + 144), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "randomMove",
        2018);
      v6 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v21,
             (const char (*)[23])"cur_avatar_ptr is null");
      operator<<(v6, &this->player_);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v5 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 144));
      Entity::setMotionState(v7, MOTION_WALK);
      Vector3::Vector3((Vector3 *const)(v1 + 48), 0.0, 0.0, 0.0);
      v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 144));
      Pos = (unsigned __int64)Entity::getPos(v8);
      if ( (char)(Pos & 7) >= *(_BYTE *)((Pos >> 3) + 0x7FFF8000) && *(_BYTE *)((Pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((Pos + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((Pos + 11) & 7) >= *(_BYTE *)(((Pos + 11) >> 3) + 0x7FFF8000) )
      {
        Pos = __asan_report_load_n(Pos, 12LL);
      }
      *(_QWORD *)(v1 + 80) = *(_QWORD *)Pos;
      *(_DWORD *)(v1 + 88) = *(_DWORD *)(Pos + 8);
      step_len = 1.0;
      do
      {
        step_len = step_len + 1.0;
        z_ = common::tools::RandomUtils::rand<float>(-step_len, step_len);
        v10 = common::tools::RandomUtils::rand<float>(-step_len, step_len);
        Vector3::Vector3((Vector3 *const)(v1 + 112), v10, 0.0, z_);
        *(Vector3 *)(v1 + 48) = operator+((const Vector3 *)(v1 + 80), (const Vector3 *)(v1 + 112));
      }
      while ( !SceneScriptConfig::isPosValid(scene_script_config_ptr, (const Vector3 *)(v1 + 48)) );
      v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 144));
      Entity::setPos(v11, (const Vector3 *)(v1 + 48));
      proto::SceneEntityMoveReq::SceneEntityMoveReq((proto::SceneEntityMoveReq *const)(v1 + 176));
      v12 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 144));
      EntityId = Entity::getEntityId(v12);
      proto::SceneEntityMoveReq::set_entity_id((proto::SceneEntityMoveReq *const)(v1 + 176), EntityId);
      motion_info = proto::SceneEntityMoveReq::mutable_motion_info((proto::SceneEntityMoveReq *const)(v1 + 176));
      v14 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 144));
      Entity::getMotionInfo(v14, motion_info);
      if ( Robot::sendProto<proto::SceneEntityMoveReq>(this, (proto::SceneEntityMoveReq *)(v1 + 176)) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/operation/robot_op.cpp",
          "randomMove",
          2039);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                &v21,
                (const char (*)[16])"sendProto fails");
        operator<<(v15, this);
        common::milog::MiLogStream::~MiLogStream(&v21);
        v5 = -1;
      }
      else
      {
        v5 = 0;
      }
      proto::SceneEntityMoveReq::~SceneEntityMoveReq((proto::SceneEntityMoveReq *const)(v1 + 176));
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 144));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "randomMove",
      2012);
    v4 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v21,
           (const char (*)[39])"findSceneScriptConfig fails, scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v21);
    v5 = -1;
  }
  result = v5;
  if ( v22 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2046: range 0000000000452D62-0000000000453082
int32_t __cdecl Robot::unlockTransPoint(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  Robot *const thisa; // [rsp+8h] [rbp-128h]
  std::allocator<char> __a; // [rsp+1Fh] [rbp-111h] BYREF
  std::string name; // [rsp+20h] [rbp-110h] BYREF
  char v10[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 13 scene_id:2048 48 4 13 point_id:2049 64 24 8 rsp:2054 128 32 8 req:2047";
  *(_QWORD *)(v2 + 16) = Robot::unlockTransPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  proto::UnlockTransPointReq::UnlockTransPointReq((proto::UnlockTransPointReq *const)(v2 + 128));
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "scene_id", &__a);
  ScriptUtil::getTableValue<unsigned int,char const(&)[9],unsigned int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32),
    (const char (*)[9])"point_id",
    (unsigned int *)(v2 + 48),
    (const char (*)[9])param_table,
    (unsigned int *)this);
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  proto::UnlockTransPointReq::set_scene_id((proto::UnlockTransPointReq *const)(v2 + 128), *(_DWORD *)(v2 + 32));
  proto::UnlockTransPointReq::set_point_id((proto::UnlockTransPointReq *const)(v2 + 128), *(_DWORD *)(v2 + 48));
  proto::UnlockTransPointRsp::UnlockTransPointRsp((proto::UnlockTransPointRsp *const)(v2 + 64));
  if ( Robot::sendProto<proto::UnlockTransPointReq,proto::UnlockTransPointRsp>(
         thisa,
         (proto::UnlockTransPointReq *)(v2 + 128),
         (proto::UnlockTransPointRsp *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "unlockTransPoint",
      2057);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
      (common::milog::MiLogStream *const)&name,
      (const char (*)[16])"sendProto fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v5 = -1;
  }
  else
  {
    v5 = proto::UnlockTransPointRsp::retcode((const proto::UnlockTransPointRsp *const)(v2 + 64));
  }
  proto::UnlockTransPointRsp::~UnlockTransPointRsp((proto::UnlockTransPointRsp *const)(v2 + 64));
  proto::UnlockTransPointReq::~UnlockTransPointReq((proto::UnlockTransPointReq *const)(v2 + 128));
  result = v5;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2064: range 0000000000453084-000000000045337C
int32_t __cdecl Robot::playerCook(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  Robot *const thisa; // [rsp+8h] [rbp-108h]
  const char (*v8)[14]; // [rsp+10h] [rbp-100h]
  unsigned int *v9; // [rsp+18h] [rbp-F8h] BYREF
  std::string name; // [rsp+20h] [rbp-F0h] BYREF
  char v11[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 14 recipe_id:2066 48 4 16 qte_quality:2067 64 4 18 assist_avatar:2068 80 40 8 req:2065";
  *(_QWORD *)(v2 + 16) = Robot::playerCook;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = 61956;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  proto::PlayerCookReq::PlayerCookReq((proto::PlayerCookReq *const)(v2 + 80));
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  std::allocator<char>::allocator((char *)&v9 + 7);
  std::string::basic_string<std::allocator<char>>(&name, "recipe_id", (const std::allocator<char> *)&v9 + 7);
  ScriptUtil::getTableValue<unsigned int,char const(&)[12],unsigned int &,char const(&)[14],unsigned int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32),
    (const char (*)[12])"qte_quality",
    (unsigned int *)(v2 + 48),
    (const char (*)[14])"assist_avatar",
    (unsigned int *)(v2 + 64),
    (const char (*)[12])param_table,
    (unsigned int *)this,
    v8,
    v9);
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v9 + 7);
  proto::PlayerCookReq::set_recipe_id((proto::PlayerCookReq *const)(v2 + 80), *(_DWORD *)(v2 + 32));
  proto::PlayerCookReq::set_qte_quality((proto::PlayerCookReq *const)(v2 + 80), *(_DWORD *)(v2 + 48));
  proto::PlayerCookReq::set_assist_avatar((proto::PlayerCookReq *const)(v2 + 80), *(_DWORD *)(v2 + 64));
  if ( Robot::sendProto<proto::PlayerCookReq>(thisa, (proto::PlayerCookReq *)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "playerCook",
      2076);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)&name,
      (const char (*)[17])"sendProto failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v5 = -1;
  }
  else
  {
    v5 = 0;
  }
  proto::PlayerCookReq::~PlayerCookReq((proto::PlayerCookReq *const)(v2 + 80));
  result = v5;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 2083: range 000000000045337E-0000000000453692
int32_t __cdecl Robot::playerCompoundMaterial(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  Robot *const thisa; // [rsp+8h] [rbp-128h]
  std::allocator<char> __a; // [rsp+1Fh] [rbp-111h] BYREF
  std::string name; // [rsp+20h] [rbp-110h] BYREF
  char v10[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 16 compound_id:2085 48 4 10 count:2086 64 32 8 req:2084 128 32 8 rsp:2091";
  *(_QWORD *)(v2 + 16) = Robot::playerCompoundMaterial;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  proto::PlayerCompoundMaterialReq::PlayerCompoundMaterialReq((proto::PlayerCompoundMaterialReq *const)(v2 + 64));
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "compound_id", &__a);
  ScriptUtil::getTableValue<unsigned int,char const(&)[6],unsigned int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32),
    (const char (*)[6])"count",
    (unsigned int *)(v2 + 48),
    (const char (*)[6])param_table,
    (unsigned int *)this);
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  proto::PlayerCompoundMaterialReq::set_compound_id(
    (proto::PlayerCompoundMaterialReq *const)(v2 + 64),
    *(_DWORD *)(v2 + 32));
  proto::PlayerCompoundMaterialReq::set_count((proto::PlayerCompoundMaterialReq *const)(v2 + 64), *(_DWORD *)(v2 + 48));
  proto::PlayerCompoundMaterialRsp::PlayerCompoundMaterialRsp((proto::PlayerCompoundMaterialRsp *const)(v2 + 128));
  if ( Robot::sendProto<proto::PlayerCompoundMaterialReq,proto::PlayerCompoundMaterialRsp>(
         thisa,
         (proto::PlayerCompoundMaterialReq *)(v2 + 64),
         (proto::PlayerCompoundMaterialRsp *)(v2 + 128)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "playerCompoundMaterial",
      2094);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)&name,
      (const char (*)[17])"sendProto failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v5 = -1;
  }
  else
  {
    v5 = proto::PlayerCompoundMaterialRsp::retcode((const proto::PlayerCompoundMaterialRsp *const)(v2 + 128));
  }
  proto::PlayerCompoundMaterialRsp::~PlayerCompoundMaterialRsp((proto::PlayerCompoundMaterialRsp *const)(v2 + 128));
  proto::PlayerCompoundMaterialReq::~PlayerCompoundMaterialReq((proto::PlayerCompoundMaterialReq *const)(v2 + 64));
  result = v5;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2101: range 0000000000453694-00000000004538D7
int32_t __cdecl Robot::getCompoundData(Robot *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  int32_t v4; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-130h] BYREF
  char v7[272]; // [rsp+30h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 24 8 req:2102 112 72 8 rsp:2103";
  *(_QWORD *)(v1 + 16) = Robot::getCompoundData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218959360;
  v3[536862723] = 62194;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  proto::GetCompoundDataReq::GetCompoundDataReq((proto::GetCompoundDataReq *const)(v1 + 48));
  proto::GetCompoundDataRsp::GetCompoundDataRsp((proto::GetCompoundDataRsp *const)(v1 + 112));
  if ( Robot::sendProto<proto::GetCompoundDataReq,proto::GetCompoundDataRsp>(
         this,
         (proto::GetCompoundDataReq *)(v1 + 48),
         (proto::GetCompoundDataRsp *)(v1 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getCompoundData",
      2106);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v6, (const char (*)[17])"sendProto failed");
    common::milog::MiLogStream::~MiLogStream(&v6);
    v4 = -1;
  }
  else
  {
    v4 = proto::GetCompoundDataRsp::retcode((const proto::GetCompoundDataRsp *const)(v1 + 112));
  }
  proto::GetCompoundDataRsp::~GetCompoundDataRsp((proto::GetCompoundDataRsp *const)(v1 + 112));
  proto::GetCompoundDataReq::~GetCompoundDataReq((proto::GetCompoundDataReq *const)(v1 + 48));
  result = v4;
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 2113: range 00000000004538D8-0000000000453BD8
int32_t __cdecl Robot::takeCompoundOutput(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-111h] BYREF
  std::string name; // [rsp+20h] [rbp-110h] BYREF
  char v9[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 16 compound_id:2115 48 32 8 req:2114 112 48 8 rsp:2119";
  *(_QWORD *)(v2 + 16) = Robot::takeCompoundOutput;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  proto::TakeCompoundOutputReq::TakeCompoundOutputReq((proto::TakeCompoundOutputReq *const)(v2 + 48));
  *(_DWORD *)(v2 + 32) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "compound_id", &__a);
  ScriptUtil::getTableValue<unsigned int>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 32));
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  proto::TakeCompoundOutputReq::set_compound_id((proto::TakeCompoundOutputReq *const)(v2 + 48), *(_DWORD *)(v2 + 32));
  proto::TakeCompoundOutputRsp::TakeCompoundOutputRsp((proto::TakeCompoundOutputRsp *const)(v2 + 112));
  if ( Robot::sendProto<proto::TakeCompoundOutputReq,proto::TakeCompoundOutputRsp>(
         this,
         (proto::TakeCompoundOutputReq *)(v2 + 48),
         (proto::TakeCompoundOutputRsp *)(v2 + 112)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "takeCompoundOutput",
      2122);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)&name,
      (const char (*)[17])"sendProto failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v5 = -1;
  }
  else
  {
    v5 = proto::TakeCompoundOutputRsp::retcode((const proto::TakeCompoundOutputRsp *const)(v2 + 112));
  }
  proto::TakeCompoundOutputRsp::~TakeCompoundOutputRsp((proto::TakeCompoundOutputRsp *const)(v2 + 112));
  proto::TakeCompoundOutputReq::~TakeCompoundOutputReq((proto::TakeCompoundOutputReq *const)(v2 + 48));
  result = v5;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2129: range 0000000000453BDA-0000000000453F94
int32_t __cdecl Robot::executeGadgetLua(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  Robot *const thisa; // [rsp+8h] [rbp-168h]
  const char (*v8)[7]; // [rsp+10h] [rbp-160h]
  int *v9; // [rsp+18h] [rbp-158h] BYREF
  std::string name; // [rsp+20h] [rbp-150h] BYREF
  char v11[304]; // [rsp+40h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 21 source_entity_id:2131 64 4 11 param1:2132 80 4 11 param2:2133 96 4 11 param3:2134 112 "
                        "24 8 rsp:2141 176 40 8 req:2130";
  *(_QWORD *)(v2 + 16) = Robot::executeGadgetLua;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = 61956;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  proto::ExecuteGadgetLuaReq::ExecuteGadgetLuaReq((proto::ExecuteGadgetLuaReq *const)(v2 + 176));
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  *(_DWORD *)(v2 + 96) = 0;
  std::allocator<char>::allocator((char *)&v9 + 7);
  std::string::basic_string<std::allocator<char>>(&name, "source_entity_id", (const std::allocator<char> *)&v9 + 7);
  ScriptUtil::getTableValue<unsigned int,char const(&)[7],int &,char const(&)[7],int &,char const(&)[7],int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 48),
    (const char (*)[7])"param1",
    (int *)(v2 + 64),
    (const char (*)[7])"param2",
    (int *)(v2 + 80),
    (const char (*)[7])"param3",
    (int *)(v2 + 96),
    (const char (*)[7])param_table,
    (int *)this,
    v8,
    v9,
    (const char (*)[7])name._M_dataplus._M_p,
    (int *)name._M_string_length);
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v9 + 7);
  proto::ExecuteGadgetLuaReq::set_source_entity_id((proto::ExecuteGadgetLuaReq *const)(v2 + 176), *(_DWORD *)(v2 + 48));
  proto::ExecuteGadgetLuaReq::set_param1((proto::ExecuteGadgetLuaReq *const)(v2 + 176), *(_DWORD *)(v2 + 64));
  proto::ExecuteGadgetLuaReq::set_param2((proto::ExecuteGadgetLuaReq *const)(v2 + 176), *(_DWORD *)(v2 + 80));
  proto::ExecuteGadgetLuaReq::set_param3((proto::ExecuteGadgetLuaReq *const)(v2 + 176), *(_DWORD *)(v2 + 96));
  proto::ExecuteGadgetLuaRsp::ExecuteGadgetLuaRsp((proto::ExecuteGadgetLuaRsp *const)(v2 + 112));
  if ( Robot::sendProto<proto::ExecuteGadgetLuaReq,proto::ExecuteGadgetLuaRsp>(
         thisa,
         (proto::ExecuteGadgetLuaReq *)(v2 + 176),
         (proto::ExecuteGadgetLuaRsp *)(v2 + 112)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "executeGadgetLua",
      2144);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)&name,
      (const char (*)[17])"sendProto failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v5 = -1;
  }
  else
  {
    v5 = proto::ExecuteGadgetLuaRsp::retcode((const proto::ExecuteGadgetLuaRsp *const)(v2 + 112));
  }
  proto::ExecuteGadgetLuaRsp::~ExecuteGadgetLuaRsp((proto::ExecuteGadgetLuaRsp *const)(v2 + 112));
  proto::ExecuteGadgetLuaReq::~ExecuteGadgetLuaReq((proto::ExecuteGadgetLuaReq *const)(v2 + 176));
  result = v5;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2151: range 0000000000453F96-0000000000454571
__int64 __fastcall Robot::jumpSceneByPoint(Robot *const this, uint32_t scene_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<data::PersonalSceneJumpPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  uint32_t jump_point_id; // [rsp+1Ch] [rbp-1A4h]
  std::map<unsigned int,std::shared_ptr<data::PersonalSceneJumpPoint>>::iterator __for_begin; // [rsp+20h] [rbp-1A0h] BYREF
  std::map<unsigned int,std::shared_ptr<data::PersonalSceneJumpPoint>>::iterator __for_end; // [rsp+28h] [rbp-198h] BYREF
  std::map<unsigned int,std::shared_ptr<data::PersonalSceneJumpPoint>> *__for_range; // [rsp+30h] [rbp-190h]
  std::pair<unsigned int const,std::shared_ptr<data::PersonalSceneJumpPoint> > *__in; // [rsp+38h] [rbp-188h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<data::PersonalSceneJumpPoint> > >::type *point_id; // [rsp+40h] [rbp-180h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<data::PersonalSceneJumpPoint> > >::type *jump_point_ptr; // [rsp+48h] [rbp-178h]
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-170h] BYREF
  char v20[336]; // [rsp+70h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 17 cur_scene_id:2152 48 4 13 scene_id:2150 64 24 8 req:2175 128 40 8 rsp:2177 208 48 19 j"
                        "ump_point_map:2155";
  *(_QWORD *)(v2 + 16) = Robot::jumpSceneByPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -218959360;
  v4[536862726] = 62194;
  v4[536862728] = -202116109;
  *(_DWORD *)(v2 + 48) = scene_id;
  *(_DWORD *)(v2 + 32) = Scene::getSceneId(&this->scene_);
  if ( *(_DWORD *)(v2 + 48) == *(_DWORD *)(v2 + 32) )
  {
    v5 = 0;
  }
  else
  {
    std::map<unsigned int,std::shared_ptr<data::PersonalSceneJumpPoint>>::map((std::map<unsigned int,std::shared_ptr<data::PersonalSceneJumpPoint>> *const)(v2 + 208));
    if ( (unsigned int)JsonConfigMgr::findAllScenePoint<data::PersonalSceneJumpPoint>(
                         &Config::config_ptr->design_config.json_config_mgr,
                         *(_DWORD *)(v2 + 32),
                         (std::map<unsigned int,std::shared_ptr<data::PersonalSceneJumpPoint>> *)(v2 + 208)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "jumpSceneByPoint",
        2158);
      v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v19,
             (const char (*)[39])"findAllScenePoint fails, cur_scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
      v5 = -1;
    }
    else
    {
      jump_point_id = 0;
      __for_range = (std::map<unsigned int,std::shared_ptr<data::PersonalSceneJumpPoint>> *)(v2 + 208);
      __for_begin._M_node = std::map<unsigned int,std::shared_ptr<data::PersonalSceneJumpPoint>>::begin((std::map<unsigned int,std::shared_ptr<data::PersonalSceneJumpPoint>> *const)(v2 + 208))._M_node;
      __for_end._M_node = std::map<unsigned int,std::shared_ptr<data::PersonalSceneJumpPoint>>::end((std::map<unsigned int,std::shared_ptr<data::PersonalSceneJumpPoint>> *const)(v2 + 208))._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<data::PersonalSceneJumpPoint>>>::operator*(&__for_begin);
        point_id = std::get<0ul,unsigned int const,std::shared_ptr<data::PersonalSceneJumpPoint>>(__in);
        jump_point_ptr = std::get<1ul,unsigned int const,std::shared_ptr<data::PersonalSceneJumpPoint>>(__in);
        v7 = std::__shared_ptr_access<data::PersonalSceneJumpPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::PersonalSceneJumpPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)jump_point_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&v7->tran_scene_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v7 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->tran_scene_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&v7->tran_scene_id);
        }
        if ( v7->tran_scene_id == *(_DWORD *)(v2 + 48) )
        {
          if ( *(_BYTE *)(((unsigned __int64)point_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(point_id);
          }
          jump_point_id = *point_id;
          break;
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<data::PersonalSceneJumpPoint>>>::operator++(&__for_begin);
      }
      if ( jump_point_id )
      {
        proto::PersonalSceneJumpReq::PersonalSceneJumpReq((proto::PersonalSceneJumpReq *const)(v2 + 64));
        proto::PersonalSceneJumpReq::set_point_id((proto::PersonalSceneJumpReq *const)(v2 + 64), jump_point_id);
        proto::PersonalSceneJumpRsp::PersonalSceneJumpRsp((proto::PersonalSceneJumpRsp *const)(v2 + 128));
        if ( Robot::sendProto<proto::PersonalSceneJumpReq,proto::PersonalSceneJumpRsp>(
               this,
               (proto::PersonalSceneJumpReq *)(v2 + 64),
               (proto::PersonalSceneJumpRsp *)(v2 + 128)) )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/operation/robot_op.cpp",
            "jumpSceneByPoint",
            2180);
          common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v19, (const char (*)[16])"sendProto fails");
          common::milog::MiLogStream::~MiLogStream(&v19);
          v5 = -1;
        }
        else
        {
          v5 = proto::PersonalSceneJumpRsp::retcode((const proto::PersonalSceneJumpRsp *const)(v2 + 128));
        }
        proto::PersonalSceneJumpRsp::~PersonalSceneJumpRsp((proto::PersonalSceneJumpRsp *const)(v2 + 128));
        proto::PersonalSceneJumpReq::~PersonalSceneJumpReq((proto::PersonalSceneJumpReq *const)(v2 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/operation/robot_op.cpp",
          "jumpSceneByPoint",
          2172);
        v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
               &v19,
               (const char (*)[46])"can't find PersonalSceneJumpPoint from scene:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
        v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])", to:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v19);
        v5 = -1;
      }
    }
    std::map<unsigned int,std::shared_ptr<data::PersonalSceneJumpPoint>>::~map((std::map<unsigned int,std::shared_ptr<data::PersonalSceneJumpPoint>> *const)(v2 + 208));
  }
  result = v5;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 2187: range 0000000000454572-0000000000454B45
__int64 __fastcall Robot::jumpSceneByGm(Robot *const this, uint32_t scene_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int *v5; // rax
  unsigned int *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  unsigned int dungeon_id; // [rsp+14h] [rbp-14Ch]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> __y; // [rsp+18h] [rbp-148h] BYREF
  std::unordered_map<unsigned int,std::set<unsigned int>> *scene_dungeon_map; // [rsp+20h] [rbp-140h]
  std::set<unsigned int> *dungeon_set; // [rsp+28h] [rbp-138h]
  std::string __str; // [rsp+30h] [rbp-130h] BYREF
  std::string v17; // [rsp+50h] [rbp-110h] BYREF
  std::string __rhs; // [rsp+70h] [rbp-F0h] BYREF
  char v19[208]; // [rsp+90h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 scene_id:2186 64 8 7 it:2190 96 32 8 msg:2197";
  *(_QWORD *)(v2 + 16) = Robot::jumpSceneByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = scene_id;
  dungeon_id = 0;
  scene_dungeon_map = &Config::config_ptr->design_config.txt_config_mgr.dungeon_config_mgr.scene_dungeon_map;
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                      &Config::config_ptr->design_config.txt_config_mgr.dungeon_config_mgr.scene_dungeon_map,
                                                                                      (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::end(scene_dungeon_map)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
         &__y) )
  {
    dungeon_set = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
    if ( !std::set<unsigned int>::empty(dungeon_set) )
    {
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false>::__node_type *)std::set<unsigned int>::begin(dungeon_set)._M_node;
      v5 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__y);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      dungeon_id = *v6;
    }
  }
  std::string::basic_string((std::string *const)(v2 + 96));
  if ( !dungeon_id )
  {
    std::to_string(&v17, *(_DWORD *)(v2 + 48));
    std::operator+<char>(&__rhs, "jump ", &v17);
    std::string::operator=((std::string *const)(v2 + 96), &__rhs);
    std::string::~string(&__rhs);
    std::string::~string(&v17);
LABEL_14:
    if ( Robot::gmTalk(this, (const std::string *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__rhs,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "jumpSceneByGm",
        2214);
      v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             (common::milog::MiLogStream *const)&__rhs,
             (const char (*)[19])"gmTalk fails, msg:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, (const std::string *)(v2 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__rhs);
      v8 = -1;
    }
    else if ( Robot::enterScene(this) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__rhs,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "jumpSceneByGm",
        2219);
      v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              (common::milog::MiLogStream *const)&__rhs,
              (const char (*)[28])"enterScene fails, scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__rhs);
      v8 = -1;
    }
    else
    {
      v8 = 0;
    }
    goto LABEL_19;
  }
  std::to_string(&__rhs, dungeon_id);
  std::operator+<char>(&__str, "dungeon clear ", &__rhs);
  std::string::operator=((std::string *const)(v2 + 96), &__str);
  std::string::~string(&__str);
  std::string::~string(&__rhs);
  if ( !Robot::gmTalk(this, (const std::string *)(v2 + 96)) )
  {
    std::to_string(&__rhs, dungeon_id);
    std::operator+<char>(&v17, "dungeon ", &__rhs);
    std::string::operator=((std::string *const)(v2 + 96), &v17);
    std::string::~string(&v17);
    std::string::~string(&__rhs);
    goto LABEL_14;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&__rhs,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/operation/robot_op.cpp",
    "jumpSceneByGm",
    2203);
  v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
         (common::milog::MiLogStream *const)&__rhs,
         (const char (*)[19])"gmTalk fails, msg:");
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)(v2 + 96));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__rhs);
  v8 = -1;
LABEL_19:
  std::string::~string((std::string *const)(v2 + 96));
  result = v8;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 2226: range 0000000000454B46-0000000000455209
__int64 __fastcall Robot::completeTalk(Robot *const this, uint32_t talk_id)
{
  unsigned int v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rax
  _DWORD *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r14d
  std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t EntityId; // eax
  common::milog::MiLogStream *v15; // rax
  int v16; // r14d
  __int64 result; // rax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-190h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-188h] BYREF
  data::TalkExcelConfig *talk_config_ptr; // [rsp+30h] [rbp-180h]
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-178h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-170h] BYREF
  char v23[336]; // [rsp+60h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 11 npc_id:2239 64 4 12 talk_id:2225 80 16 15 avatar_ptr:2233 112 16 17 talk_npc_ptr:2241 "
                        "144 32 8 req:2247 208 40 8 rsp:2250";
  *(_QWORD *)(v3 + 16) = Robot::completeTalk;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 64) = talk_id;
  talk_config_ptr = data::QuestExcelConfigMgrBase::findTalkExcelConfig(
                      &Config::config_ptr->design_config.txt_config_mgr.quest_config_mgr,
                      *(_DWORD *)(v3 + 64));
  if ( talk_config_ptr )
  {
    Player::getCurAvatar((const Player *const)(v3 + 80));
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "completeTalk",
        2236);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v22, (const char (*)[19])"avatar_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v22);
      v2 = -1;
    }
    else
    {
      __for_range = &talk_config_ptr->npc_id;
      __for_begin._M_current = std::vector<unsigned int>::begin(&talk_config_ptr->npc_id)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&talk_config_ptr->npc_id)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v8 = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        *(_DWORD *)(v3 + 48) = *v8;
        std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        Scene::forceGetNpc((Scene *const)(v3 + 112), (_DWORD)this + 1376, (const Entity *)*(unsigned int *)(v3 + 48));
        if ( std::operator==<Npc>((const std::shared_ptr<Npc> *)(v3 + 112), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/operation/robot_op.cpp",
            "completeTalk",
            2244);
          v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                 &v22,
                 (const char (*)[28])"forceGetNpc fails, talk_id:");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v9,
                  (const unsigned int *)(v3 + 64));
          v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])", npc_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v22);
          v12 = 0;
        }
        else
        {
          proto::NpcTalkReq::NpcTalkReq((proto::NpcTalkReq *const)(v3 + 144));
          v13 = std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
          EntityId = Entity::getEntityId(v13);
          proto::NpcTalkReq::set_npc_entity_id((proto::NpcTalkReq *const)(v3 + 144), EntityId);
          proto::NpcTalkReq::set_talk_id((proto::NpcTalkReq *const)(v3 + 144), *(_DWORD *)(v3 + 64));
          proto::NpcTalkRsp::NpcTalkRsp((proto::NpcTalkRsp *const)(v3 + 208));
          if ( Robot::sendProto<proto::NpcTalkReq,proto::NpcTalkRsp>(
                 this,
                 (proto::NpcTalkReq *)(v3 + 144),
                 (proto::NpcTalkRsp *)(v3 + 208)) )
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/operation/robot_op.cpp",
              "completeTalk",
              2253);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    &v22,
                    (const char (*)[16])"sendProto fails");
            operator<<(v15, &this->player_);
            common::milog::MiLogStream::~MiLogStream(&v22);
            v2 = -1;
            v16 = 0;
          }
          else
          {
            v16 = 1;
          }
          proto::NpcTalkRsp::~NpcTalkRsp((proto::NpcTalkRsp *const)(v3 + 208));
          proto::NpcTalkReq::~NpcTalkReq((proto::NpcTalkReq *const)(v3 + 144));
          if ( v16 )
            v12 = 2;
          else
            v12 = 1;
        }
        std::shared_ptr<Npc>::~shared_ptr((std::shared_ptr<Npc> *const)(v3 + 112));
        if ( v12 )
        {
          if ( v12 == 1 )
            goto LABEL_25;
          break;
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      v2 = 0;
    }
LABEL_25:
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 80));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "completeTalk",
      2230);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v22,
           (const char (*)[36])"findTalkExcelConfig fails, talk_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v22);
    v2 = -1;
  }
  result = v2;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 2262: range 000000000045520A-00000000004555E5
int32_t __cdecl Robot::enterDungeonByGm(Robot *const this, uint32_t dungeon_id)
{
  std::string *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  std::string v10; // [rsp+10h] [rbp-D0h] BYREF
  std::string __rhs; // [rsp+30h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (std::string *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::string *)v3;
  }
  v2->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v2->_M_string_length = (std::string::size_type)"1 32 32 8 msg:2263";
  v2->_anon_0._M_allocated_capacity = (std::string::size_type)Robot::enterDungeonByGm;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::to_string(&__rhs, dungeon_id);
  std::operator+<char>(v2 + 1, "dungeon clear ", &__rhs);
  std::string::~string(&__rhs);
  if ( Robot::gmTalk(this, v2 + 1) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__rhs,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "enterDungeonByGm",
      2266);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)&__rhs,
           (const char (*)[19])"gmTalk fails, msg:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, v2 + 1);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__rhs);
    v6 = -1;
  }
  else
  {
    std::to_string(&v10, dungeon_id);
    std::operator+<char>(&__rhs, "dungeon ", &v10);
    std::string::operator=(v2 + 1, &__rhs);
    std::string::~string(&__rhs);
    std::string::~string(&v10);
    if ( Robot::gmTalk(this, v2 + 1) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__rhs,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "enterDungeonByGm",
        2272);
      v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             (common::milog::MiLogStream *const)&__rhs,
             (const char (*)[19])"gmTalk fails, msg:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, v2 + 1);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__rhs);
      v6 = -1;
    }
    else if ( Robot::enterScene(this) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&__rhs,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "enterDungeonByGm",
        2277);
      v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             (common::milog::MiLogStream *const)&__rhs,
             (const char (*)[23])"enterScene fails, msg:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, v2 + 1);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__rhs);
      v6 = -1;
    }
    else
    {
      v6 = 0;
    }
  }
  std::string::~string(v2 + 1);
  result = v6;
  if ( v12 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 2284: range 00000000004558A8-000000000045646A
int32_t __cdecl Robot::finishDungeon(Robot *const this)
{
  unsigned __int64 v1; // r14
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  __gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *v9; // rax
  int *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  std::vector<int>::const_reference v12; // rax
  unsigned int *v13; // rdx
  std::vector<int>::const_reference v14; // rax
  _DWORD *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  Quest *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int32_t result; // eax
  int v22; // [rsp+8h] [rbp-168h]
  int v23; // [rsp+8h] [rbp-168h]
  int32_t v24; // [rsp+14h] [rbp-15Ch]
  std::vector<data::DungeonCondConfig>::iterator __for_begin; // [rsp+30h] [rbp-140h] BYREF
  std::vector<data::DungeonCondConfig>::iterator __for_end; // [rsp+38h] [rbp-138h] BYREF
  data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+40h] [rbp-130h]
  data::DungeonPassExcelConfig *dungeon_pass_config_ptr; // [rsp+48h] [rbp-128h]
  std::vector<data::DungeonCondConfig> *__for_range; // [rsp+50h] [rbp-120h]
  const data::DungeonCondConfig *dungeon_cond_config; // [rsp+58h] [rbp-118h]
  common::milog::MiLogStream v31; // [rsp+60h] [rbp-110h] BYREF
  char v32[240]; // [rsp+80h] [rbp-F0h] BYREF
  Robot::finishDungeon::<lambda(Monster&)> v33; // 0:esi.4,8:rdx.8

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 15 dungeon_id:2285 64 4 13 quest_id:2356 80 4 8 ret:2363 96 16 14 quest_ptr:2357 128 32 8 msg:2314";
  *(_QWORD *)(v2 + 16) = Robot::finishDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = Scene::getDungeonId(&this->scene_);
  if ( *(_DWORD *)(v2 + 48) )
  {
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                           &Config::config_ptr->design_config.txt_config_mgr.dungeon_config_mgr,
                           *(_DWORD *)(v2 + 48));
    if ( dungeon_config_ptr )
    {
      p_dungeon_config_mgr = &Config::config_ptr->design_config.txt_config_mgr.dungeon_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->pass_cond >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->pass_cond >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_config_ptr->pass_cond);
      }
      dungeon_pass_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonPassExcelConfig(
                                  p_dungeon_config_mgr,
                                  dungeon_config_ptr->pass_cond);
      if ( dungeon_pass_config_ptr )
      {
        __for_range = &dungeon_pass_config_ptr->conds;
        __for_begin._M_current = std::vector<data::DungeonCondConfig>::begin(&dungeon_pass_config_ptr->conds)._M_current;
        __for_end._M_current = std::vector<data::DungeonCondConfig>::end(&dungeon_pass_config_ptr->conds)._M_current;
        while ( 2 )
        {
          if ( __gnu_cxx::operator!=<data::DungeonCondConfig *,std::vector<data::DungeonCondConfig>>(
                 &__for_begin,
                 &__for_end) )
          {
            dungeon_cond_config = __gnu_cxx::__normal_iterator<data::DungeonCondConfig *,std::vector<data::DungeonCondConfig>>::operator*(&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)&dungeon_cond_config->cond_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&dungeon_cond_config->cond_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&dungeon_cond_config->cond_type);
            }
            switch ( dungeon_cond_config->cond_type )
            {
              case DUNGEON_COND_KILL_MONSTER:
                if ( std::vector<int>::empty(&dungeon_cond_config->param) )
                {
                  common::milog::MiLogStream::create(
                    &v31,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/operation/robot_op.cpp",
                    "finishDungeon",
                    2311);
                  common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    &v31,
                    (const char (*)[15])"param is empty");
                  common::milog::MiLogStream::~MiLogStream(&v31);
                  v24 = -1;
                }
                else
                {
                  v9 = (__gnu_cxx::__alloc_traits<std::allocator<int>,int>::value_type *)std::vector<int>::operator[](
                                                                                           &dungeon_cond_config->param,
                                                                                           0LL);
                  v10 = v9;
                  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v9);
                  }
                  std::to_string((std::string *)&v31, *v10);
                  std::operator+<char>((std::string *)(v2 + 128), "kill monster ", (std::string *)&v31);
                  std::string::~string((std::string *const)&v31);
                  if ( Robot::gmTalk(this, (const std::string *)(v2 + 128)) )
                  {
                    common::milog::MiLogStream::create(
                      &v31,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/operation/robot_op.cpp",
                      "finishDungeon",
                      2317);
                    v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                            &v31,
                            (const char (*)[19])"gmTalk fails, msg:");
                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                      v11,
                      (const std::string *)(v2 + 128));
                    common::milog::MiLogStream::~MiLogStream(&v31);
                    v24 = -1;
                    v22 = 0;
                  }
                  else
                  {
                    v22 = 1;
                  }
                  std::string::~string((std::string *const)(v2 + 128));
                  if ( v22 )
                    goto LABEL_41;
                }
                break;
              case DUNGEON_COND_KILL_GROUP_MONSTER:
                if ( !std::vector<int>::empty(&dungeon_cond_config->param) )
                {
                  v12 = std::vector<int>::operator[](&dungeon_cond_config->param, 0LL);
                  v13 = (unsigned int *)v12;
                  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v12);
                  }
                  v1 = v1 & 0xFFFFFFFF00000000LL | *v13;
                  v33.__this = this;
                  v33.__group_id = v1;
                  std::function<ForeachPolicy ()(Monster &)>::function<Robot::finishDungeon(void)::{lambda(Monster &)#1},void,void>(
                    (std::function<ForeachPolicy(Monster&)> *const)&v31,
                    v33);
                  Scene::foreachEntity<Monster>(&this->scene_, (std::function<ForeachPolicy(Monster&)> *)&v31);
                  std::function<ForeachPolicy ()(Monster &)>::~function((std::function<ForeachPolicy(Monster&)> *const)&v31);
                  goto LABEL_41;
                }
                common::milog::MiLogStream::create(
                  &v31,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/operation/robot_op.cpp",
                  "finishDungeon",
                  2326);
                common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  &v31,
                  (const char (*)[15])"param is empty");
                common::milog::MiLogStream::~MiLogStream(&v31);
                v24 = -1;
                break;
              case DUNGEON_COND_FINISH_QUEST:
                if ( std::vector<int>::empty(&dungeon_cond_config->param) )
                {
                  common::milog::MiLogStream::create(
                    &v31,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/operation/robot_op.cpp",
                    "finishDungeon",
                    2353);
                  common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    &v31,
                    (const char (*)[15])"param is empty");
                  common::milog::MiLogStream::~MiLogStream(&v31);
                  v24 = -1;
                }
                else
                {
                  v14 = std::vector<int>::operator[](&dungeon_cond_config->param, 0LL);
                  v15 = v14;
                  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v14);
                  }
                  *(_DWORD *)(v2 + 64) = *v15;
                  Player::findQuest((const Player *const)(v2 + 96), (_DWORD)this + 896);
                  if ( std::operator==<Quest>((const std::shared_ptr<Quest> *)(v2 + 96), 0LL) )
                  {
                    common::milog::MiLogStream::create(
                      &v31,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/operation/robot_op.cpp",
                      "finishDungeon",
                      2360);
                    v16 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                            &v31,
                            (const char (*)[27])"findQuest fails, quest_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v16,
                      (const unsigned int *)(v2 + 64));
                    common::milog::MiLogStream::~MiLogStream(&v31);
                    v24 = -1;
                    v23 = 0;
                  }
                  else
                  {
                    v17 = std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Quest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                    *(_DWORD *)(v2 + 80) = Quest::finish(v17);
                    if ( *(_DWORD *)(v2 + 80) )
                    {
                      common::milog::MiLogStream::create(
                        &v31,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/operation/robot_op.cpp",
                        "finishDungeon",
                        2366);
                      v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                              &v31,
                              (const char (*)[19])"finish fails, ret:");
                      v19 = common::milog::MiLogStream::operator<<<int,(int *)0>(v18, (const int *)(v2 + 80));
                      v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                              v19,
                              (const char (*)[12])", quest_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v20,
                        (const unsigned int *)(v2 + 64));
                      common::milog::MiLogStream::~MiLogStream(&v31);
                      v24 = -1;
                      v23 = 0;
                    }
                    else
                    {
                      v23 = 1;
                    }
                  }
                  std::shared_ptr<Quest>::~shared_ptr((std::shared_ptr<Quest> *const)(v2 + 96));
                  if ( v23 )
                    goto LABEL_41;
                }
                break;
              default:
LABEL_41:
                if ( *(_BYTE *)(((unsigned __int64)&dungeon_pass_config_ptr->logic_type >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)dungeon_pass_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_pass_config_ptr->logic_type >> 3)
                                                                                         + 0x7FFF8000) )
                {
                  __asan_report_load4(&dungeon_pass_config_ptr->logic_type);
                }
                if ( dungeon_pass_config_ptr->logic_type == LOGIC_OR )
                  goto LABEL_45;
                __gnu_cxx::__normal_iterator<data::DungeonCondConfig *,std::vector<data::DungeonCondConfig>>::operator++(&__for_begin);
                continue;
            }
          }
          else
          {
LABEL_45:
            v24 = 0;
          }
          break;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/operation/robot_op.cpp",
          "finishDungeon",
          2300);
        v8 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
               &v31,
               (const char (*)[45])"findDungeonPassExcelConfig fails, pass_cond:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &dungeon_config_ptr->pass_cond);
        common::milog::MiLogStream::~MiLogStream(&v31);
        v24 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "finishDungeon",
        2294);
      v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v31,
             (const char (*)[42])"findDungeonExcelConfig fails, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v31);
      v24 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "finishDungeon",
      2288);
    v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v31,
           (const char (*)[26])"player is not in dungeon:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v31);
    v24 = -1;
  }
  result = v24;
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2330: range 00000000004555E6-00000000004558A6
ForeachPolicy __cdecl Robot::finishDungeon(void)::{lambda(Monster &)#1}::operator()(
        const Robot::finishDungeon::<lambda(Monster&)> *const __closure,
        Monster *monster)
{
  ForeachPolicy v2; // r14d
  std::string *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  uint32_t GroupId; // ecx
  unsigned int EntityId; // eax
  common::milog::MiLogStream *v8; // rax
  int v9; // r15d
  ForeachPolicy result; // eax
  std::string __rhs; // [rsp+20h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (std::string *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::string *)v4;
  }
  v3->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v3->_M_string_length = (std::string::size_type)"1 32 32 8 msg:2334";
  v3->_anon_0._M_allocated_capacity = (std::string::size_type)Robot::finishDungeon(void)::{lambda(Monster &)#1}::operator();
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  GroupId = Entity::getGroupId(monster);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( GroupId != __closure->__group_id )
    goto LABEL_13;
  EntityId = Entity::getEntityId(monster);
  std::to_string(&__rhs, EntityId);
  std::operator+<char>(v3 + 1, "kill monster ", &__rhs);
  std::string::~string(&__rhs);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this);
  if ( Robot::gmTalk(__closure->__this, v3 + 1) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&__rhs,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "operator()",
      2337);
    v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)&__rhs,
           (const char (*)[19])"gmTalk fails, msg:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, v3 + 1);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&__rhs);
    v2 = FOREACH_BREAK;
    v9 = 0;
  }
  else
  {
    v9 = 1;
  }
  std::string::~string(v3 + 1);
  if ( v9 == 1 )
LABEL_13:
    v2 = FOREACH_CONTINUE;
  result = v2;
  if ( v12 == (char *)v3 )
  {
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 2393: range 000000000045646C-0000000000456957
int32_t __cdecl Robot::gotoPosition(Robot *const this, const Vector3 *pos)
{
  std::string *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  int32_t result; // eax
  std::string __rhs; // [rsp+10h] [rbp-170h] BYREF
  std::string __lhs; // [rsp+30h] [rbp-150h] BYREF
  std::string v10; // [rsp+50h] [rbp-130h] BYREF
  std::string v11; // [rsp+70h] [rbp-110h] BYREF
  std::string v12; // [rsp+90h] [rbp-F0h] BYREF
  std::string v13; // [rsp+B0h] [rbp-D0h] BYREF
  std::string v14; // [rsp+D0h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+F0h] [rbp-90h] BYREF

  v2 = (std::string *)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::string *)v3;
  }
  v2->_M_dataplus._M_p = (std::string::pointer)1102416563;
  v2->_M_string_length = (std::string::size_type)"1 32 32 8 msg:2394";
  v2->_anon_0._M_allocated_capacity = (std::string::size_type)Robot::gotoPosition;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pos + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->z >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pos->z);
  }
  std::to_string(&v14, pos->z);
  if ( *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pos + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pos->y);
  }
  std::to_string(&v11, pos->y);
  if ( *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pos & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pos);
  }
  std::to_string(&__rhs, pos->x);
  std::operator+<char>(&__lhs, "goto ", &__rhs);
  std::operator+<char>(&v10, &__lhs, " ");
  std::operator+<char>(&v12, &v10, &v11);
  std::operator+<char>(&v13, &v12, " ");
  std::operator+<char>(v2 + 1, &v13, &v14);
  std::string::~string(&v13);
  std::string::~string(&v12);
  std::string::~string(&v10);
  std::string::~string(&__lhs);
  std::string::~string(&__rhs);
  std::string::~string(&v11);
  std::string::~string(&v14);
  if ( Robot::gmTalk(this, v2 + 1) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "gotoPosition",
      2397);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)&v14,
           (const char (*)[19])"gmTalk fails, msg:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, v2 + 1);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v14);
    v6 = -1;
  }
  else if ( Robot::enterScene(this) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "gotoPosition",
      2402);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
      (common::milog::MiLogStream *const)&v14,
      (const char (*)[17])"enterScene fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v14);
    v6 = -1;
  }
  else
  {
    v6 = 0;
  }
  std::string::~string(v2 + 1);
  result = v6;
  if ( v15 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_dataplus._M_p = (std::string::pointer)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 2409: range 0000000000456958-0000000000456EE4
int32_t __cdecl Robot::questCreateEntity(Robot *const this, const QuestEntityParam *param)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  proto::CreateEntityInfo *entity_info; // [rsp+18h] [rbp-148h]
  proto::Vector *proto_pos; // [rsp+20h] [rbp-140h]
  proto::Vector *proto_rot; // [rsp+28h] [rbp-138h]
  proto::Vector from; // [rsp+30h] [rbp-130h] BYREF
  common::milog::MiLogStream v12; // [rsp+50h] [rbp-110h] BYREF
  char v13[240]; // [rsp+70h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 40 8 req:2410 112 48 8 rsp:2438";
  *(_QWORD *)(v2 + 16) = Robot::questCreateEntity;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  proto::QuestCreateEntityReq::QuestCreateEntityReq((proto::QuestCreateEntityReq *const)(v2 + 32));
  entity_info = proto::QuestCreateEntityReq::mutable_entity((proto::QuestCreateEntityReq *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&param->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->monster_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->monster_id);
  }
  if ( param->monster_id )
  {
    proto::CreateEntityInfo::set_monster_id(entity_info, param->monster_id);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&param->gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->gadget_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->gadget_id);
    }
    if ( param->gadget_id )
    {
      proto::CreateEntityInfo::set_gadget_id(entity_info, param->gadget_id);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&param->npc_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->npc_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->npc_id);
      }
      if ( param->npc_id )
      {
        proto::CreateEntityInfo::set_npc_id(entity_info, param->npc_id);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&param->item_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->item_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&param->item_id);
        }
        if ( !param->item_id )
        {
          common::milog::MiLogStream::create(
            &v12,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/operation/robot_op.cpp",
            "questCreateEntity",
            2430);
          common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v12, (const char (*)[14])"invalid param");
          common::milog::MiLogStream::~MiLogStream(&v12);
          v5 = -1;
          goto LABEL_27;
        }
        proto::CreateEntityInfo::set_item_id(entity_info, param->item_id);
      }
    }
  }
  proto_pos = proto::CreateEntityInfo::mutable_pos(entity_info);
  Vector3::operator proto::Vector(&from, &param->pos);
  proto::Vector::operator=(proto_pos, &from);
  proto::Vector::~Vector(&from);
  proto_rot = proto::CreateEntityInfo::mutable_rot(entity_info);
  Vector3::operator proto::Vector((proto::Vector *)&v12, &param->rot);
  proto::Vector::operator=(proto_rot, (proto::Vector *)&v12);
  proto::Vector::~Vector((proto::Vector *const)&v12);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  proto::CreateEntityInfo::set_scene_id(entity_info, param->scene_id);
  proto::QuestCreateEntityRsp::QuestCreateEntityRsp((proto::QuestCreateEntityRsp *const)(v2 + 112));
  if ( Robot::sendProto<proto::QuestCreateEntityReq,proto::QuestCreateEntityRsp>(
         this,
         (proto::QuestCreateEntityReq *)(v2 + 32),
         (proto::QuestCreateEntityRsp *)(v2 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "questCreateEntity",
      2441);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v12, (const char (*)[16])"sendProto fails");
    operator<<(v6, &this->player_);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v5 = -1;
  }
  else
  {
    v5 = proto::QuestCreateEntityRsp::retcode((const proto::QuestCreateEntityRsp *const)(v2 + 112));
  }
  proto::QuestCreateEntityRsp::~QuestCreateEntityRsp((proto::QuestCreateEntityRsp *const)(v2 + 112));
LABEL_27:
  proto::QuestCreateEntityReq::~QuestCreateEntityReq((proto::QuestCreateEntityReq *const)(v2 + 32));
  result = v5;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2448: range 0000000000456EE6-000000000045717F
int32_t __cdecl Robot::getGachaInfo(Robot *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  int32_t v5; // r14d
  uint32_t v6; // edx
  int32_t result; // eax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-110h] BYREF
  char v9[240]; // [rsp+30h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 24 8 req:2449 96 64 8 rsp:2450";
  *(_QWORD *)(v1 + 16) = Robot::getGachaInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862725] = -202116109;
  proto::GetGachaInfoReq::GetGachaInfoReq((proto::GetGachaInfoReq *const)(v1 + 32));
  proto::GetGachaInfoRsp::GetGachaInfoRsp((proto::GetGachaInfoRsp *const)(v1 + 96));
  if ( Robot::sendProto<proto::GetGachaInfoReq,proto::GetGachaInfoRsp>(
         this,
         (proto::GetGachaInfoReq *)(v1 + 32),
         (proto::GetGachaInfoRsp *)(v1 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getGachaInfo",
      2453);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v8, (const char (*)[16])"sendProto fails");
    operator<<(v4, &this->player_);
    common::milog::MiLogStream::~MiLogStream(&v8);
    v5 = -1;
  }
  else
  {
    v6 = proto::GetGachaInfoRsp::gacha_random((const proto::GetGachaInfoRsp *const)(v1 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&this->gacha_random_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gacha_random_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->gacha_random_);
    }
    this->gacha_random_ = v6;
    v5 = proto::GetGachaInfoRsp::retcode((const proto::GetGachaInfoRsp *const)(v1 + 96));
  }
  proto::GetGachaInfoRsp::~GetGachaInfoRsp((proto::GetGachaInfoRsp *const)(v1 + 96));
  proto::GetGachaInfoReq::~GetGachaInfoReq((proto::GetGachaInfoReq *const)(v1 + 32));
  result = v5;
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2461: range 0000000000457180-00000000004574FF
int32_t __cdecl Robot::doGacha(
        Robot *const this,
        uint32_t gacha_type,
        uint32_t gacha_schedule_id,
        uint32_t gacha_times,
        const std::string *gacha_tag)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  uint32_t v10; // edx
  int32_t result; // eax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-150h] BYREF
  char v16[304]; // [rsp+40h] [rbp-130h] BYREF

  v5 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 48 8 req:2462 112 112 8 rsp:2463";
  *(_QWORD *)(v5 + 16) = Robot::doGacha;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862722] = -219021312;
  v7[536862723] = 62194;
  v7[536862727] = -202116109;
  proto::DoGachaReq::DoGachaReq((proto::DoGachaReq *const)(v5 + 32));
  proto::DoGachaRsp::DoGachaRsp((proto::DoGachaRsp *const)(v5 + 112));
  proto::DoGachaReq::set_gacha_type((proto::DoGachaReq *const)(v5 + 32), gacha_type);
  proto::DoGachaReq::set_gacha_schedule_id((proto::DoGachaReq *const)(v5 + 32), gacha_schedule_id);
  proto::DoGachaReq::set_gacha_times((proto::DoGachaReq *const)(v5 + 32), gacha_times);
  proto::DoGachaReq::set_gacha_tag((proto::DoGachaReq *const)(v5 + 32), gacha_tag);
  if ( *(_BYTE *)(((unsigned __int64)&this->gacha_random_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gacha_random_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gacha_random_);
  }
  proto::DoGachaReq::set_gacha_random((proto::DoGachaReq *const)(v5 + 32), this->gacha_random_);
  if ( Robot::sendProto<proto::DoGachaReq,proto::DoGachaRsp>(
         this,
         (proto::DoGachaReq *)(v5 + 32),
         (proto::DoGachaRsp *)(v5 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "doGacha",
      2471);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v15, (const char (*)[16])"sendProto fails");
    operator<<(v8, &this->player_);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v9 = -1;
  }
  else
  {
    v10 = proto::DoGachaRsp::new_gacha_random((const proto::DoGachaRsp *const)(v5 + 112));
    if ( *(_BYTE *)(((unsigned __int64)&this->gacha_random_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gacha_random_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->gacha_random_);
    }
    this->gacha_random_ = v10;
    v9 = proto::DoGachaRsp::retcode((const proto::DoGachaRsp *const)(v5 + 112));
  }
  proto::DoGachaRsp::~DoGachaRsp((proto::DoGachaRsp *const)(v5 + 112));
  proto::DoGachaReq::~DoGachaReq((proto::DoGachaReq *const)(v5 + 32));
  result = v9;
  if ( v16 == (char *)v5 )
  {
    *(_DWORD *)((v5 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2479: range 0000000000457500-00000000004577B1
int32_t __cdecl Robot::gachaWish(Robot *const this, uint32_t gacha_type, uint32_t gacha_schedule_id, uint32_t item_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-110h] BYREF
  char v13[240]; // [rsp+40h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 32 8 req:2480 112 48 8 rsp:2481";
  *(_QWORD *)(v4 + 16) = Robot::gachaWish;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = -219021312;
  v6[536862723] = 62194;
  v6[536862725] = -202116109;
  proto::GachaWishReq::GachaWishReq((proto::GachaWishReq *const)(v4 + 48));
  proto::GachaWishRsp::GachaWishRsp((proto::GachaWishRsp *const)(v4 + 112));
  proto::GachaWishReq::set_gacha_type((proto::GachaWishReq *const)(v4 + 48), gacha_type);
  proto::GachaWishReq::set_gacha_schedule_id((proto::GachaWishReq *const)(v4 + 48), gacha_schedule_id);
  proto::GachaWishReq::set_item_id((proto::GachaWishReq *const)(v4 + 48), item_id);
  if ( Robot::sendProto<proto::GachaWishReq,proto::GachaWishRsp>(
         this,
         (proto::GachaWishReq *)(v4 + 48),
         (proto::GachaWishRsp *)(v4 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "gachaWish",
      2487);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v12, (const char (*)[16])"sendProto fails");
    operator<<(v7, &this->player_);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v8 = -1;
  }
  else
  {
    v8 = proto::GachaWishRsp::retcode((const proto::GachaWishRsp *const)(v4 + 112));
  }
  proto::GachaWishRsp::~GachaWishRsp((proto::GachaWishRsp *const)(v4 + 112));
  proto::GachaWishReq::~GachaWishReq((proto::GachaWishReq *const)(v4 + 48));
  result = v8;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2494: range 00000000004577B2-00000000004579AA
int32_t __cdecl Robot::gachaOpenWish(Robot *const this, uint32_t gacha_type, uint32_t gacha_schedule_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 11 notify:2495";
  *(_QWORD *)(v3 + 16) = Robot::gachaOpenWish;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  proto::GachaOpenWishNotify::GachaOpenWishNotify((proto::GachaOpenWishNotify *const)(v3 + 32));
  proto::GachaOpenWishNotify::set_gacha_type((proto::GachaOpenWishNotify *const)(v3 + 32), gacha_type);
  proto::GachaOpenWishNotify::set_gacha_schedule_id((proto::GachaOpenWishNotify *const)(v3 + 32), gacha_schedule_id);
  if ( Robot::sendProto<proto::GachaOpenWishNotify>(this, (proto::GachaOpenWishNotify *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "gachaOpenWish",
      2500);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v10, (const char (*)[16])"sendProto fails");
    operator<<(v6, &this->player_);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v7 = -1;
  }
  else
  {
    v7 = 0;
  }
  proto::GachaOpenWishNotify::~GachaOpenWishNotify((proto::GachaOpenWishNotify *const)(v3 + 32));
  result = v7;
  if ( v11 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 2507: range 00000000004579AC-0000000000457DA8
__int64 __fastcall Robot::doCombine(Robot *const this, uint32_t combine_id, uint32_t combine_count, uint32_t avatar_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint64_t Guid; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-1D0h] BYREF
  char v16[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 14 avatar_id:2506 48 16 15 avatar_ptr:2508 80 40 8 req:2514 160 160 8 rsp:2515";
  *(_QWORD *)(v4 + 16) = Robot::doCombine;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862722] = 62194;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862730] = -202116109;
  v6[536862731] = -202116109;
  *(_DWORD *)(v4 + 32) = avatar_id;
  Player::findAvatarByAvatarId((Player *const)(v4 + 48), (_DWORD)this + 896);
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "doCombine",
      2511);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v15,
           (const char (*)[29])"avatar not found, avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    v8 = -1;
  }
  else
  {
    proto::CombineReq::CombineReq((proto::CombineReq *const)(v4 + 80));
    proto::CombineRsp::CombineRsp((proto::CombineRsp *const)(v4 + 160));
    proto::CombineReq::set_combine_id((proto::CombineReq *const)(v4 + 80), combine_id);
    proto::CombineReq::set_combine_count((proto::CombineReq *const)(v4 + 80), combine_count);
    v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
    Guid = Avatar::getGuid(v9);
    proto::CombineReq::set_avatar_guid((proto::CombineReq *const)(v4 + 80), Guid);
    if ( Robot::sendProto<proto::CombineReq,proto::CombineRsp>(
           this,
           (proto::CombineReq *)(v4 + 80),
           (proto::CombineRsp *)(v4 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "doCombine",
        2521);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v15, (const char (*)[16])"sendProto fails");
      operator<<(v11, &this->player_);
      common::milog::MiLogStream::~MiLogStream(&v15);
      v8 = -1;
    }
    else
    {
      v8 = proto::CombineRsp::retcode((const proto::CombineRsp *const)(v4 + 160));
    }
    proto::CombineRsp::~CombineRsp((proto::CombineRsp *const)(v4 + 160));
    proto::CombineReq::~CombineReq((proto::CombineReq *const)(v4 + 80));
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 48));
  result = v8;
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2528: range 0000000000457DAA-000000000045823C
int32_t __cdecl Robot::doItemGiving(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t v10; // r14d
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-1E8h]
  const char (*v13)[6]; // [rsp+10h] [rbp-1E0h] BYREF
  proto::ItemParam *proto_item_param; // [rsp+18h] [rbp-1D8h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-1D0h] BYREF
  std::string val; // [rsp+40h] [rbp-1B0h] BYREF
  std::string name; // [rsp+60h] [rbp-190h] BYREF
  char v18[368]; // [rsp+80h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 14 giving_id:2529 64 4 12 item_id:2530 80 4 10 count:2531 96 32 8 rsp:2538 160 128 8 req:2533";
  *(_QWORD *)(v2 + 16) = Robot::doItemGiving;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862724] = -218959118;
  v4[536862729] = -202116109;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  std::allocator<char>::allocator((char *)&v13 + 7);
  std::string::basic_string<std::allocator<char>>(&name, "giving_id", (const std::allocator<char> *)&v13 + 7);
  ScriptUtil::getTableValue<unsigned int,char const(&)[8],unsigned int &,char const(&)[6],unsigned int &>(
    &ScriptUtil::has_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 48),
    (const char (*)[8])"item_id",
    (unsigned int *)(v2 + 64),
    (const char (*)[6])"count",
    (unsigned int *)(v2 + 80),
    (const char (*)[8])param_table,
    (unsigned int *)this,
    v13,
    (unsigned int *)proto_item_param);
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v13 + 7);
  proto::ItemGivingReq::ItemGivingReq((proto::ItemGivingReq *const)(v2 + 160));
  proto::ItemGivingReq::set_giving_id((proto::ItemGivingReq *const)(v2 + 160), *(_DWORD *)(v2 + 48));
  proto_item_param = proto::ItemGivingReq::add_item_param_list((proto::ItemGivingReq *const)(v2 + 160));
  proto::ItemParam::set_item_id(proto_item_param, *(_DWORD *)(v2 + 64));
  proto::ItemParam::set_count(proto_item_param, *(_DWORD *)(v2 + 80));
  proto::ItemGivingRsp::ItemGivingRsp((proto::ItemGivingRsp *const)(v2 + 96));
  if ( Robot::sendProto<proto::ItemGivingReq,proto::ItemGivingRsp>(
         thisa,
         (proto::ItemGivingReq *)(v2 + 160),
         (proto::ItemGivingRsp *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "doItemGiving",
      2541);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v15, (const char (*)[16])"sendProto fails");
    v6 = operator<<(v5, &thisa->player_);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v2 + 160));
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" rsp:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&name, (google::protobuf::Message *)(v2 + 96));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &name);
    std::string::~string(&name);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v10 = -1;
  }
  else
  {
    v10 = proto::ItemGivingRsp::retcode((const proto::ItemGivingRsp *const)(v2 + 96));
  }
  proto::ItemGivingRsp::~ItemGivingRsp((proto::ItemGivingRsp *const)(v2 + 96));
  proto::ItemGivingReq::~ItemGivingReq((proto::ItemGivingReq *const)(v2 + 160));
  result = v10;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2548: range 000000000045823E-0000000000458730
void __cdecl Robot::getPlayerDataBin(Robot *const this, luabind::adl::object *rsp_0, int32_t *ret)
{
  bool v3; // bl
  bool v4; // bl
  bool v5; // bl
  const char (*v6)[20]; // [rsp+0h] [rbp-A0h]
  int32_t *retb; // [rsp+8h] [rbp-98h]
  std::allocator<char> v9; // [rsp+2Eh] [rbp-72h] BYREF
  std::allocator<char> __a; // [rsp+2Fh] [rbp-71h] BYREF
  std::string v11; // [rsp+30h] [rbp-70h] BYREF
  std::string table_name; // [rsp+50h] [rbp-50h] BYREF
  std::string msg; // [rsp+70h] [rbp-30h] BYREF

  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&msg, "ROBOT_GET_DATA", &__a);
  v3 = Robot::gmTalk(this, &msg) != 0;
  std::string::~string(&msg);
  std::allocator<char>::~allocator(&__a);
  if ( v3 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&msg,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      stru_DEB9E40.gap0,
      2551);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
      (common::milog::MiLogStream *const)&msg,
      (const char (*)[23])"get robot data failed.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&msg);
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(ret);
    }
    *ret = -1;
  }
  do
  {
    Robot::asyncWait(this, 0x64u);
    Player::getPlayerDataBin[abi:cxx11](&msg, &this->player_);
    v4 = std::string::empty(&msg);
    std::string::~string(&msg);
  }
  while ( v4 );
  Player::getPlayerDataBin[abi:cxx11](&v11, &this->player_);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&msg, "decode", &__a);
  std::allocator<char>::allocator(&v9);
  std::string::basic_string<std::allocator<char>>(&table_name, "proto", &v9);
  v5 = LuaScript::execTableFunc<luabind::adl::object,char const(&)[20],std::string>(
         &this->script_,
         &table_name,
         &msg,
         rsp_0,
         (const char (*)[20])"proto.PlayerDataBin",
         &v11,
         v6,
         (std::string *)ret) != 0;
  std::string::~string(&table_name);
  std::allocator<char>::~allocator(&v9);
  std::string::~string(&msg);
  std::allocator<char>::~allocator(&__a);
  std::string::~string(&v11);
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&msg,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      stru_DEB9E40.gap0,
      2567);
    common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
      (common::milog::MiLogStream *const)&msg,
      (const char (*)[62])"executeFunc proto.decode fails, rsp_name: proto.PlayerDataBin");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&msg);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&msg, byte_DE2A700, &__a);
    Player::setPlayerDataBin(&this->player_, &msg);
    std::string::~string(&msg);
    std::allocator<char>::~allocator(&__a);
    if ( *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)retb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(retb);
    }
    *retb = -1;
  }
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&msg, byte_DE2A700, &__a);
  Player::setPlayerDataBin(&this->player_, &msg);
  std::string::~string(&msg);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)retb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(retb);
  }
  *retb = 0;
};

// Line 2580: range 0000000000458732-0000000000458C3D
void __cdecl Robot::getEmptyPlayerDataBin(Robot *const this, luabind::adl::object *rsp_0, int32_t *ret)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  bool v6; // r14
  const char (*v7)[20]; // [rsp+0h] [rbp-3A0h]
  int32_t *retb; // [rsp+8h] [rbp-398h]
  std::allocator<char> v10; // [rsp+26h] [rbp-37Ah] BYREF
  std::allocator<char> __a; // [rsp+27h] [rbp-379h] BYREF
  std::string *proto_str; // [rsp+28h] [rbp-378h]
  std::string table_name; // [rsp+30h] [rbp-370h] BYREF
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-350h] BYREF
  char v15[816]; // [rsp+70h] [rbp-330h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(768LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 32 8 tmp:2582 112 520 16 empty_proto:2581";
  *(_QWORD *)(v3 + 16) = Robot::getEmptyPlayerDataBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862739] = -218103808;
  v5[536862740] = -202116109;
  v5[536862741] = -202116109;
  v5[536862742] = -202116109;
  v5[536862743] = -202116109;
  proto::PlayerDataBin::PlayerDataBin((proto::PlayerDataBin *const)(v3 + 112));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 48), byte_DE2A700, &__a);
  std::allocator<char>::~allocator(&__a);
  proto_str = (std::string *)(v3 + 48);
  if ( !google::protobuf::MessageLite::SerializeToString(
          (const google::protobuf::MessageLite *const)(v3 + 112),
          (std::string *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getEmptyPlayerDataBin",
      2586);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v14,
      (const char (*)[39])"PlayerDataBin SerializeToString failed");
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v14, "decode", &__a);
  std::allocator<char>::allocator(&v10);
  std::string::basic_string<std::allocator<char>>(&table_name, "proto", &v10);
  v6 = LuaScript::execTableFunc<luabind::adl::object,char const(&)[20],std::string &>(
         &this->script_,
         &table_name,
         (const std::string *)&v14,
         rsp_0,
         (const char (*)[20])"proto.PlayerDataBin",
         proto_str,
         v7,
         (std::string *)ret) != 0;
  std::string::~string(&table_name);
  std::allocator<char>::~allocator(&v10);
  std::string::~string((std::string *const)&v14);
  std::allocator<char>::~allocator(&__a);
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getEmptyPlayerDataBin",
      2591);
    common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
      &v14,
      (const char (*)[62])"executeFunc proto.decode fails, rsp_name: proto.PlayerDataBin");
    common::milog::MiLogStream::~MiLogStream(&v14);
    if ( *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)retb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(retb);
    }
    *retb = -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)retb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retb >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(retb);
  }
  *retb = 0;
  std::string::~string((std::string *const)(v3 + 48));
  proto::PlayerDataBin::~PlayerDataBin((proto::PlayerDataBin *const)(v3 + 112));
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF805C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2598: range 0000000000458C3E-00000000004590D5
int32_t __cdecl Robot::playerChat(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+17h] [rbp-179h] BYREF
  proto::ChatInfo *chat_info; // [rsp+18h] [rbp-178h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-170h] BYREF
  std::string val; // [rsp+40h] [rbp-150h] BYREF
  std::string name; // [rsp+60h] [rbp-130h] BYREF
  char v18[272]; // [rsp+80h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 32 9 text:2599 96 32 8 req:2605 160 32 8 rsp:2606";
  *(_QWORD *)(v2 + 16) = Robot::playerChat;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  std::string::basic_string((std::string *const)(v2 + 32));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "text", &__a);
  v5 = ScriptUtil::getTableValue<std::string>(
         &ScriptUtil::has_exception_instance,
         param_table,
         &name,
         (std::string *)(v2 + 32)) != 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "playerChat",
      2602);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      (common::milog::MiLogStream *const)&name,
      (const char (*)[25])"Not found text in table!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    proto::PlayerChatReq::PlayerChatReq((proto::PlayerChatReq *const)(v2 + 96));
    proto::PlayerChatRsp::PlayerChatRsp((proto::PlayerChatRsp *const)(v2 + 160));
    chat_info = proto::PlayerChatReq::mutable_chat_info((proto::PlayerChatReq *const)(v2 + 96));
    proto::ChatInfo::set_text(chat_info, (const std::string *)(v2 + 32));
    if ( Robot::sendProto<proto::PlayerChatReq,proto::PlayerChatRsp>(
           this,
           (proto::PlayerChatReq *)(v2 + 96),
           (proto::PlayerChatRsp *)(v2 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "playerChat",
        2611);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v15, (const char (*)[16])"sendProto fails");
      v8 = operator<<(v7, &this->player_);
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" req:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v2 + 96));
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" rsp:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&name, (google::protobuf::Message *)(v2 + 160));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &name);
      std::string::~string(&name);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v15);
      v6 = -1;
    }
    else
    {
      v6 = proto::PlayerChatRsp::retcode((const proto::PlayerChatRsp *const)(v2 + 160));
    }
    proto::PlayerChatRsp::~PlayerChatRsp((proto::PlayerChatRsp *const)(v2 + 160));
    proto::PlayerChatReq::~PlayerChatReq((proto::PlayerChatReq *const)(v2 + 96));
  }
  std::string::~string((std::string *const)(v2 + 32));
  result = v6;
  if ( v18 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 2618: range 00000000004590D6-00000000004593EA
int32_t __cdecl Robot::playerApplyEnterMp(Robot *const this, uint32_t target_uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t v10; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-130h] BYREF
  std::string val; // [rsp+30h] [rbp-110h] BYREF
  std::string output; // [rsp+50h] [rbp-F0h] BYREF
  char v15[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 8 req:2619 96 32 8 rsp:2620";
  *(_QWORD *)(v2 + 16) = Robot::playerApplyEnterMp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  proto::PlayerApplyEnterMpReq::PlayerApplyEnterMpReq((proto::PlayerApplyEnterMpReq *const)(v2 + 32));
  proto::PlayerApplyEnterMpRsp::PlayerApplyEnterMpRsp((proto::PlayerApplyEnterMpRsp *const)(v2 + 96));
  proto::PlayerApplyEnterMpReq::set_target_uid((proto::PlayerApplyEnterMpReq *const)(v2 + 32), target_uid);
  if ( Robot::sendProto<proto::PlayerApplyEnterMpReq,proto::PlayerApplyEnterMpRsp>(
         this,
         (proto::PlayerApplyEnterMpReq *)(v2 + 32),
         (proto::PlayerApplyEnterMpRsp *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "playerApplyEnterMp",
      2624);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v12, (const char (*)[16])"sendProto fails");
    v6 = operator<<(v5, &this->player_);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" rsp:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&output, (google::protobuf::Message *)(v2 + 96));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &output);
    std::string::~string(&output);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v10 = -1;
  }
  else
  {
    v10 = proto::PlayerApplyEnterMpRsp::retcode((const proto::PlayerApplyEnterMpRsp *const)(v2 + 96));
  }
  proto::PlayerApplyEnterMpRsp::~PlayerApplyEnterMpRsp((proto::PlayerApplyEnterMpRsp *const)(v2 + 96));
  proto::PlayerApplyEnterMpReq::~PlayerApplyEnterMpReq((proto::PlayerApplyEnterMpReq *const)(v2 + 32));
  result = v10;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 2631: range 00000000004593EC-000000000045970C
int32_t __cdecl Robot::joinPlayerScene(Robot *const this, uint32_t target_uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t v10; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-130h] BYREF
  std::string val; // [rsp+30h] [rbp-110h] BYREF
  std::string output; // [rsp+50h] [rbp-F0h] BYREF
  char v15[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 8 req:2632 96 24 8 rsp:2633";
  *(_QWORD *)(v2 + 16) = Robot::joinPlayerScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  proto::JoinPlayerSceneReq::JoinPlayerSceneReq((proto::JoinPlayerSceneReq *const)(v2 + 32));
  proto::JoinPlayerSceneRsp::JoinPlayerSceneRsp((proto::JoinPlayerSceneRsp *const)(v2 + 96));
  proto::JoinPlayerSceneReq::set_target_uid((proto::JoinPlayerSceneReq *const)(v2 + 32), target_uid);
  if ( Robot::sendProto<proto::JoinPlayerSceneReq,proto::JoinPlayerSceneRsp>(
         this,
         (proto::JoinPlayerSceneReq *)(v2 + 32),
         (proto::JoinPlayerSceneRsp *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "joinPlayerScene",
      2637);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v12, (const char (*)[16])"sendProto fails");
    v6 = operator<<(v5, &this->player_);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" rsp:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&output, (google::protobuf::Message *)(v2 + 96));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &output);
    std::string::~string(&output);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v10 = -1;
  }
  else
  {
    v10 = proto::JoinPlayerSceneRsp::retcode((const proto::JoinPlayerSceneRsp *const)(v2 + 96));
  }
  proto::JoinPlayerSceneRsp::~JoinPlayerSceneRsp((proto::JoinPlayerSceneRsp *const)(v2 + 96));
  proto::JoinPlayerSceneReq::~JoinPlayerSceneReq((proto::JoinPlayerSceneReq *const)(v2 + 32));
  result = v10;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 2644: range 000000000045970E-0000000000459D73
int32_t __cdecl Robot::hitClientTrivial(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  bool v8; // r14
  std::vector<float>::reference v9; // rax
  float *v10; // rdx
  std::vector<float>::reference v11; // rax
  float *v12; // rdx
  std::vector<float>::reference v13; // rax
  float *v14; // rdx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+17h] [rbp-139h] BYREF
  proto::Vector *proto_pos; // [rsp+18h] [rbp-138h]
  char v18[304]; // [rsp+20h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 20 owner_entity_id:2659 64 24 12 pos_vec:2651 128 32 8 pos:2645 192 32 11 notify:2665";
  *(_QWORD *)(v2 + 16) = Robot::hitClientTrivial;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  std::string::basic_string((std::string *const)(v2 + 128));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 192), off_DEB5DC0, &__a);
  v5 = ScriptUtil::getTableValue<std::string>(
         &ScriptUtil::has_exception_instance,
         param_table,
         (const std::string *)(v2 + 192),
         (std::string *)(v2 + 128)) != 0;
  std::string::~string((std::string *const)(v2 + 192));
  std::allocator<char>::~allocator(&__a);
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "hitClientTrivial",
      2648);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[20])"not found pos param");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    v6 = -1;
  }
  else
  {
    std::vector<float>::vector((std::vector<float> *const)(v2 + 64));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 192), ",", &__a);
    common::tools::StringUtils::splitToList<float>(
      (const std::string *)(v2 + 128),
      (const std::string *)(v2 + 192),
      (std::vector<float> *)(v2 + 64),
      0);
    std::string::~string((std::string *const)(v2 + 192));
    std::allocator<char>::~allocator(&__a);
    if ( std::vector<float>::size((const std::vector<float> *const)(v2 + 64)) > 2 )
    {
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 192), "owner_entity_id", &__a);
      v8 = ScriptUtil::getTableValue<unsigned int>(
             &ScriptUtil::has_exception_instance,
             param_table,
             (const std::string *)(v2 + 192),
             (unsigned int *)(v2 + 48)) != 0;
      std::string::~string((std::string *const)(v2 + 192));
      std::allocator<char>::~allocator(&__a);
      if ( v8 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/operation/robot_op.cpp",
          "hitClientTrivial",
          2662);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)(v2 + 192),
          (const char (*)[32])"not found owner_entity_id param");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        v6 = -1;
      }
      else
      {
        proto::HitClientTrivialNotify::HitClientTrivialNotify((proto::HitClientTrivialNotify *const)(v2 + 192));
        proto_pos = proto::HitClientTrivialNotify::mutable_position((proto::HitClientTrivialNotify *const)(v2 + 192));
        v9 = std::vector<float>::operator[]((std::vector<float> *const)(v2 + 64), 0LL);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        proto::Vector::set_x(proto_pos, *v10);
        v11 = std::vector<float>::operator[]((std::vector<float> *const)(v2 + 64), 1uLL);
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        proto::Vector::set_y(proto_pos, *v12);
        v13 = std::vector<float>::operator[]((std::vector<float> *const)(v2 + 64), 2uLL);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        proto::Vector::set_z(proto_pos, *v14);
        proto::HitClientTrivialNotify::set_owner_entity_id(
          (proto::HitClientTrivialNotify *const)(v2 + 192),
          *(_DWORD *)(v2 + 48));
        v6 = Robot::sendProto<proto::HitClientTrivialNotify>(this, (proto::HitClientTrivialNotify *)(v2 + 192));
        proto::HitClientTrivialNotify::~HitClientTrivialNotify((proto::HitClientTrivialNotify *const)(v2 + 192));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "hitClientTrivial",
        2655);
      v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[13])"invalid pos:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)(v2 + 128));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      v6 = -1;
    }
    std::vector<float>::~vector((std::vector<float> *const)(v2 + 64));
  }
  std::string::~string((std::string *const)(v2 + 128));
  result = v6;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2675: range 0000000000459D74-000000000045A259
int32_t __cdecl Robot::focusAvatar(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-188h]
  std::allocator<char> __a; // [rsp+1Fh] [rbp-171h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-170h] BYREF
  std::string val; // [rsp+40h] [rbp-150h] BYREF
  std::string name; // [rsp+60h] [rbp-130h] BYREF
  char v18[272]; // [rsp+80h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 13 is_focus:2677 48 8 16 avatar_guid:2676 80 32 8 req:2683 144 40 8 rsp:2684";
  *(_QWORD *)(v2 + 16) = Robot::focusAvatar;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61953;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  *(_QWORD *)(v2 + 48) = 0LL;
  *(_BYTE *)(v2 + 32) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "avatar_guid", &__a);
  v5 = ScriptUtil::getTableValue<unsigned long,char const(&)[9],bool &>(
         &ScriptUtil::has_exception_instance,
         param_table,
         &name,
         (unsigned __int64 *)(v2 + 48),
         (const char (*)[9])"is_focus",
         (bool *)(v2 + 32),
         (const char (*)[9])param_table,
         (bool *)this) != 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "focusAvatar",
      2680);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      (common::milog::MiLogStream *const)&name,
      (const char (*)[32])"not found owner_entity_id param");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    proto::FocusAvatarReq::FocusAvatarReq((proto::FocusAvatarReq *const)(v2 + 80));
    proto::FocusAvatarRsp::FocusAvatarRsp((proto::FocusAvatarRsp *const)(v2 + 144));
    proto::FocusAvatarReq::set_avatar_guid((proto::FocusAvatarReq *const)(v2 + 80), *(_QWORD *)(v2 + 48));
    proto::FocusAvatarReq::set_is_focus((proto::FocusAvatarReq *const)(v2 + 80), *(_BYTE *)(v2 + 32));
    if ( Robot::sendProto<proto::FocusAvatarReq,proto::FocusAvatarRsp>(
           thisa,
           (proto::FocusAvatarReq *)(v2 + 80),
           (proto::FocusAvatarRsp *)(v2 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "focusAvatar",
        2689);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v15, (const char (*)[16])"sendProto fails");
      v8 = operator<<(v7, &thisa->player_);
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" req:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v2 + 80));
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" rsp:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&name, (google::protobuf::Message *)(v2 + 144));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &name);
      std::string::~string(&name);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v15);
      v6 = -1;
    }
    else
    {
      v6 = proto::FocusAvatarRsp::retcode((const proto::FocusAvatarRsp *const)(v2 + 144));
    }
    proto::FocusAvatarRsp::~FocusAvatarRsp((proto::FocusAvatarRsp *const)(v2 + 144));
    proto::FocusAvatarReq::~FocusAvatarReq((proto::FocusAvatarReq *const)(v2 + 80));
  }
  result = v6;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 2696: range 000000000045A25A-000000000045A56C
int32_t __cdecl Robot::getActivitySchedule(Robot *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  int32_t v9; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-150h] BYREF
  std::string val; // [rsp+30h] [rbp-130h] BYREF
  std::string output; // [rsp+50h] [rbp-110h] BYREF
  char v14[240]; // [rsp+70h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 24 8 req:2697 96 56 8 rsp:2698";
  *(_QWORD *)(v1 + 16) = Robot::getActivitySchedule;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  proto::GetActivityScheduleReq::GetActivityScheduleReq((proto::GetActivityScheduleReq *const)(v1 + 32));
  proto::GetActivityScheduleRsp::GetActivityScheduleRsp((proto::GetActivityScheduleRsp *const)(v1 + 96));
  if ( Robot::sendProto<proto::GetActivityScheduleReq,proto::GetActivityScheduleRsp>(
         this,
         (proto::GetActivityScheduleReq *)(v1 + 32),
         (proto::GetActivityScheduleRsp *)(v1 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getActivitySchedule",
      2701);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v11, (const char (*)[16])"sendProto fails");
    v5 = operator<<(v4, &this->player_);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v5, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v1 + 32));
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" rsp:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&output, (google::protobuf::Message *)(v1 + 96));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &output);
    std::string::~string(&output);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v9 = -1;
  }
  else
  {
    v9 = proto::GetActivityScheduleRsp::retcode((const proto::GetActivityScheduleRsp *const)(v1 + 96));
  }
  proto::GetActivityScheduleRsp::~GetActivityScheduleRsp((proto::GetActivityScheduleRsp *const)(v1 + 96));
  proto::GetActivityScheduleReq::~GetActivityScheduleReq((proto::GetActivityScheduleReq *const)(v1 + 32));
  result = v9;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2708: range 000000000045A56E-000000000045A9DF
int32_t __cdecl Robot::getActivityInfo(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-191h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-190h] BYREF
  std::string val; // [rsp+40h] [rbp-170h] BYREF
  std::string name; // [rsp+60h] [rbp-150h] BYREF
  char v17[304]; // [rsp+80h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 16 activity_id:2709 48 40 8 req:2715 128 96 8 rsp:2717";
  *(_QWORD *)(v2 + 16) = Robot::getActivityInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862727] = -202116109;
  *(_DWORD *)(v2 + 32) = 0;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "activity_id", &__a);
  v5 = ScriptUtil::getTableValue<unsigned int>(
         &ScriptUtil::has_exception_instance,
         param_table,
         &name,
         (unsigned int *)(v2 + 32)) != 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getActivityInfo",
      2712);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
      (common::milog::MiLogStream *const)&name,
      (const char (*)[21])"Not found config_id!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    proto::GetActivityInfoReq::GetActivityInfoReq((proto::GetActivityInfoReq *const)(v2 + 48));
    proto::GetActivityInfoReq::add_activity_id_list((proto::GetActivityInfoReq *const)(v2 + 48), *(_DWORD *)(v2 + 32));
    proto::GetActivityInfoRsp::GetActivityInfoRsp((proto::GetActivityInfoRsp *const)(v2 + 128));
    if ( Robot::sendProto<proto::GetActivityInfoReq,proto::GetActivityInfoRsp>(
           this,
           (proto::GetActivityInfoReq *)(v2 + 48),
           (proto::GetActivityInfoRsp *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "getActivityInfo",
        2720);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v14, (const char (*)[16])"sendProto fails");
      v8 = operator<<(v7, &this->player_);
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" req:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v2 + 48));
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" rsp:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&name, (google::protobuf::Message *)(v2 + 128));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &name);
      std::string::~string(&name);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = -1;
    }
    else
    {
      v6 = proto::GetActivityInfoRsp::retcode((const proto::GetActivityInfoRsp *const)(v2 + 128));
    }
    proto::GetActivityInfoRsp::~GetActivityInfoRsp((proto::GetActivityInfoRsp *const)(v2 + 128));
    proto::GetActivityInfoReq::~GetActivityInfoReq((proto::GetActivityInfoReq *const)(v2 + 48));
  }
  result = v6;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2727: range 000000000045A9E0-000000000045AF01
int32_t __cdecl Robot::seaLampFlyLamp(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  int32_t result; // eax
  Robot *thisa; // [rsp+8h] [rbp-1C8h]
  std::allocator<char> __a; // [rsp+1Fh] [rbp-1B1h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-1B0h] BYREF
  std::string val; // [rsp+40h] [rbp-190h] BYREF
  std::string name; // [rsp+60h] [rbp-170h] BYREF
  char v18[336]; // [rsp+80h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 12 item_id:2728 64 4 13 item_num:2728 80 32 14 wish_text:2729 144 32 8 rsp:2739 208 40 8 req:2735";
  *(_QWORD *)(v2 + 16) = Robot::seaLampFlyLamp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  std::string::basic_string((std::string *const)(v2 + 80));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&name, "item_id", &__a);
  v5 = ScriptUtil::getTableValue<unsigned int,char const(&)[9],unsigned int &>(
         &ScriptUtil::has_exception_instance,
         param_table,
         &name,
         (unsigned int *)(v2 + 48),
         (const char (*)[9])"item_num",
         (unsigned int *)(v2 + 64),
         (const char (*)[9])param_table,
         (unsigned int *)this) != 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator(&__a);
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "seaLampFlyLamp",
      2732);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
      (common::milog::MiLogStream *const)&name,
      (const char (*)[16])"Not found phase");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v6 = -1;
  }
  else
  {
    proto::SeaLampFlyLampReq::SeaLampFlyLampReq((proto::SeaLampFlyLampReq *const)(v2 + 208));
    proto::SeaLampFlyLampReq::set_item_id((proto::SeaLampFlyLampReq *const)(v2 + 208), *(_DWORD *)(v2 + 48));
    proto::SeaLampFlyLampReq::set_item_num((proto::SeaLampFlyLampReq *const)(v2 + 208), *(_DWORD *)(v2 + 64));
    proto::SeaLampFlyLampReq::set_param((proto::SeaLampFlyLampReq *const)(v2 + 208), 999);
    proto::SeaLampFlyLampRsp::SeaLampFlyLampRsp((proto::SeaLampFlyLampRsp *const)(v2 + 144));
    if ( Robot::sendProto<proto::SeaLampFlyLampReq,proto::SeaLampFlyLampRsp>(
           thisa,
           (proto::SeaLampFlyLampReq *)(v2 + 208),
           (proto::SeaLampFlyLampRsp *)(v2 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "seaLampFlyLamp",
        2742);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v15, (const char (*)[16])"sendProto fails");
      v8 = operator<<(v7, &thisa->player_);
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" req:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v2 + 208));
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" rsp:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&name, (google::protobuf::Message *)(v2 + 144));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &name);
      std::string::~string(&name);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v15);
      v6 = -1;
    }
    else
    {
      v6 = proto::SeaLampFlyLampRsp::retcode((const proto::SeaLampFlyLampRsp *const)(v2 + 144));
    }
    proto::SeaLampFlyLampRsp::~SeaLampFlyLampRsp((proto::SeaLampFlyLampRsp *const)(v2 + 144));
    proto::SeaLampFlyLampReq::~SeaLampFlyLampReq((proto::SeaLampFlyLampReq *const)(v2 + 208));
  }
  std::string::~string((std::string *const)(v2 + 80));
  result = v6;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 2749: range 000000000045AF02-000000000045B229
int32_t __cdecl Robot::getPlayerFriendList(Robot *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  int32_t v9; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-170h] BYREF
  std::string val; // [rsp+30h] [rbp-150h] BYREF
  std::string output; // [rsp+50h] [rbp-130h] BYREF
  char v14[272]; // [rsp+70h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 24 8 req:2750 112 72 8 rsp:2751";
  *(_QWORD *)(v1 + 16) = Robot::getPlayerFriendList;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218959360;
  v3[536862723] = 62194;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  proto::GetPlayerFriendListReq::GetPlayerFriendListReq((proto::GetPlayerFriendListReq *const)(v1 + 48));
  proto::GetPlayerFriendListRsp::GetPlayerFriendListRsp((proto::GetPlayerFriendListRsp *const)(v1 + 112));
  if ( Robot::sendProto<proto::GetPlayerFriendListReq,proto::GetPlayerFriendListRsp>(
         this,
         (proto::GetPlayerFriendListReq *)(v1 + 48),
         (proto::GetPlayerFriendListRsp *)(v1 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      stru_DEBA840.gap0,
      2755);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v11, (const char (*)[16])"sendProto fails");
    v5 = operator<<(v4, &this->player_);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v5, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" rsp:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&output, (google::protobuf::Message *)(v1 + 112));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &output);
    std::string::~string(&output);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v9 = -1;
  }
  else
  {
    v9 = proto::GetPlayerFriendListRsp::retcode((const proto::GetPlayerFriendListRsp *const)(v1 + 112));
  }
  proto::GetPlayerFriendListRsp::~GetPlayerFriendListRsp((proto::GetPlayerFriendListRsp *const)(v1 + 112));
  proto::GetPlayerFriendListReq::~GetPlayerFriendListReq((proto::GetPlayerFriendListReq *const)(v1 + 48));
  result = v9;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 2763: range 000000000045B22A-000000000045B53E
int32_t __cdecl Robot::askAddFriend(Robot *const this, uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t v10; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-130h] BYREF
  std::string val; // [rsp+30h] [rbp-110h] BYREF
  std::string output; // [rsp+50h] [rbp-F0h] BYREF
  char v15[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 8 req:2764 96 32 8 rsp:2766";
  *(_QWORD *)(v2 + 16) = Robot::askAddFriend;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  proto::AskAddFriendReq::AskAddFriendReq((proto::AskAddFriendReq *const)(v2 + 32));
  proto::AskAddFriendReq::set_target_uid((proto::AskAddFriendReq *const)(v2 + 32), uid);
  proto::AskAddFriendRsp::AskAddFriendRsp((proto::AskAddFriendRsp *const)(v2 + 96));
  if ( Robot::sendProto<proto::AskAddFriendReq,proto::AskAddFriendRsp>(
         this,
         (proto::AskAddFriendReq *)(v2 + 32),
         (proto::AskAddFriendRsp *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "askAddFriend",
      2770);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v12, (const char (*)[16])"sendProto fails");
    v6 = operator<<(v5, &this->player_);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" rsp:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&output, (google::protobuf::Message *)(v2 + 96));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &output);
    std::string::~string(&output);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v10 = -1;
  }
  else
  {
    v10 = proto::AskAddFriendRsp::retcode((const proto::AskAddFriendRsp *const)(v2 + 96));
  }
  proto::AskAddFriendRsp::~AskAddFriendRsp((proto::AskAddFriendRsp *const)(v2 + 96));
  proto::AskAddFriendReq::~AskAddFriendReq((proto::AskAddFriendReq *const)(v2 + 32));
  result = v10;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 2778: range 000000000045B540-000000000045BFAF
int32_t __cdecl Robot::recharge(Robot *const this, const luabind::adl::object *param_table)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // r15
  bool v7; // r15
  int v8; // r15d
  bool v9; // r15
  bool v10; // r15
  int v11; // r15d
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  int32_t result; // eax
  const char (*v18)[11]; // [rsp+0h] [rbp-290h]
  std::string *v19; // [rsp+8h] [rbp-288h]
  Robot *thisa; // [rsp+18h] [rbp-278h]
  const char (*v21)[16]; // [rsp+20h] [rbp-270h]
  unsigned int *v22; // [rsp+28h] [rbp-268h] BYREF
  proto::ShopCardProduct *card_product; // [rsp+30h] [rbp-260h]
  proto::ShopMcoinProduct *mcoin_product; // [rsp+38h] [rbp-258h]
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-250h] BYREF
  std::string name; // [rsp+60h] [rbp-230h] BYREF
  std::string v27[16]; // [rsp+80h] [rbp-210h] BYREF

  thisa = this;
  v3 = (unsigned __int64)v27;
  v19 = v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 4 15 mcoin_base:2786 64 4 20 mcoin_non_first:2786 80 4 15 mcoin_base:2805 96 4 18 hcoin_pe"
                        "r_day:2805 112 16 22 hcoin_product_obj:2781 144 16 21 card_product_obj:2781 176 32 15 product_id"
                        ":2780 240 32 15 price_tier:2785 304 40 8 rsp:2817 384 56 8 req:2779";
  *(_QWORD *)(v3 + 16) = Robot::recharge;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = 61956;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -234881024;
  v5[536862731] = -218959118;
  v5[536862733] = -218103808;
  v5[536862734] = -202116109;
  proto::RechargeReq::RechargeReq((proto::RechargeReq *const)(v3 + 384));
  std::string::basic_string((std::string *const)(v3 + 176));
  luabind::adl::object::object((luabind::adl::object *const)(v3 + 112));
  luabind::adl::object::object((luabind::adl::object *const)(v3 + 144));
  std::allocator<char>::allocator((char *)&v22 + 7);
  std::string::basic_string<std::allocator<char>>(&name, "hcoin_product", (const std::allocator<char> *)&v22 + 7);
  v6 = ScriptUtil::getTableValue(
         &ScriptUtil::no_exception_instance,
         param_table,
         &name,
         (luabind::adl::object *)(v3 + 112)) == 0;
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v22 + 7);
  if ( v6 )
  {
    mcoin_product = proto::RechargeReq::mutable_mcoin_product((proto::RechargeReq *const)(v3 + 384));
    std::string::basic_string((std::string *const)(v3 + 240));
    *(_DWORD *)(v3 + 48) = 0;
    *(_DWORD *)(v3 + 64) = 0;
    *(_DWORD *)(v3 + 80) = 0;
    *(_DWORD *)(v3 + 96) = 0;
    std::allocator<char>::allocator((char *)&v22 + 7);
    std::string::basic_string<std::allocator<char>>(&name, "product_id", (const std::allocator<char> *)&v22 + 7);
    v7 = ScriptUtil::getTableValue<std::string,char const(&)[11],std::string&,char const(&)[11],unsigned int &,char const(&)[16],unsigned int &,char const(&)[12],unsigned int &,char const(&)[11],unsigned int &>(
           &ScriptUtil::no_exception_instance,
           (const luabind::adl::object *)(v3 + 112),
           &name,
           (std::string *)(v3 + 176),
           (const char (*)[11])"price_tier",
           (std::string *)(v3 + 240),
           (const char (*)[11])"mcoin_base",
           (unsigned int *)(v3 + 48),
           (const char (*)[16])"mcoin_non_first",
           (unsigned int *)(v3 + 64),
           (const char (*)[12])"mcoin_first",
           (unsigned int *)(v3 + 80),
           (const char (*)[11])"bought_num",
           (unsigned int *)(v3 + 96),
           v18,
           v27,
           (const char (*)[11])param_table,
           (unsigned int *)this,
           v21,
           v22,
           (const char (*)[12])card_product,
           (unsigned int *)mcoin_product,
           (const char (*)[11])v25.log_,
           (unsigned int *)v25.ostr_ptr_._M_ptr) != 0;
    std::string::~string(&name);
    std::allocator<char>::~allocator((char *)&v22 + 7);
    if ( v7 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "recharge",
        2791);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        (common::milog::MiLogStream *const)&name,
        (const char (*)[38])"getTableValue(hcoin_product_obj fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v2 = -1;
      v8 = 0;
    }
    else
    {
      proto::ShopMcoinProduct::set_product_id(mcoin_product, (const std::string *)(v3 + 176));
      proto::ShopMcoinProduct::set_price_tier(mcoin_product, (const std::string *)(v3 + 240));
      proto::ShopMcoinProduct::set_mcoin_base(mcoin_product, *(_DWORD *)(v3 + 48));
      proto::ShopMcoinProduct::set_mcoin_non_first(mcoin_product, *(_DWORD *)(v3 + 64));
      proto::ShopMcoinProduct::set_mcoin_first(mcoin_product, *(_DWORD *)(v3 + 80));
      proto::ShopMcoinProduct::set_bought_num(mcoin_product, *(_DWORD *)(v3 + 96));
      v8 = 1;
    }
    std::string::~string((std::string *const)(v3 + 240));
    if ( v8 == 1 )
    {
LABEL_15:
      proto::RechargeRsp::RechargeRsp((proto::RechargeRsp *const)(v3 + 304));
      if ( Robot::sendProto<proto::RechargeReq,proto::RechargeRsp>(
             thisa,
             (proto::RechargeReq *)(v3 + 384),
             (proto::RechargeRsp *)(v3 + 304)) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/operation/robot_op.cpp",
          "recharge",
          2820);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                &v25,
                (const char (*)[16])"sendProto fails");
        v13 = operator<<(v12, &thisa->player_);
        v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" req:");
        google::protobuf::Message::ShortDebugString[abi:cxx11](
          (std::string *)(v3 + 240),
          (google::protobuf::Message *)(v3 + 384));
        v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)(v3 + 240));
        v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" rsp:");
        google::protobuf::Message::ShortDebugString[abi:cxx11](&name, (google::protobuf::Message *)(v3 + 304));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &name);
        std::string::~string(&name);
        std::string::~string((std::string *const)(v3 + 240));
        common::milog::MiLogStream::~MiLogStream(&v25);
        v2 = -1;
      }
      else
      {
        v2 = proto::RechargeRsp::retcode((const proto::RechargeRsp *const)(v3 + 304));
      }
      proto::RechargeRsp::~RechargeRsp((proto::RechargeRsp *const)(v3 + 304));
    }
  }
  else
  {
    std::allocator<char>::allocator((char *)&v22 + 7);
    std::string::basic_string<std::allocator<char>>(&name, "card_product", (const std::allocator<char> *)&v22 + 7);
    v9 = ScriptUtil::getTableValue(
           &ScriptUtil::no_exception_instance,
           param_table,
           &name,
           (luabind::adl::object *)(v3 + 144)) == 0;
    std::string::~string(&name);
    std::allocator<char>::~allocator((char *)&v22 + 7);
    if ( !v9 )
      goto LABEL_15;
    card_product = proto::RechargeReq::mutable_card_product((proto::RechargeReq *const)(v3 + 384));
    std::string::basic_string((std::string *const)(v3 + 240));
    *(_DWORD *)(v3 + 80) = 0;
    *(_DWORD *)(v3 + 96) = 0;
    std::allocator<char>::allocator((char *)&v22 + 7);
    std::string::basic_string<std::allocator<char>>(&name, "product_id", (const std::allocator<char> *)&v22 + 7);
    v10 = ScriptUtil::getTableValue<std::string,char const(&)[11],std::string&,char const(&)[11],unsigned int &,char const(&)[14],unsigned int &>(
            &ScriptUtil::no_exception_instance,
            (const luabind::adl::object *)(v3 + 144),
            &name,
            (std::string *)(v3 + 176),
            (const char (*)[11])"price_tier",
            (std::string *)(v3 + 240),
            (const char (*)[11])"mcoin_base",
            (unsigned int *)(v3 + 80),
            (const char (*)[14])"hcoin_per_day",
            (unsigned int *)(v3 + 96),
            v18,
            v27,
            (const char (*)[11])param_table,
            (unsigned int *)this,
            (const char (*)[14])v21,
            v22) != 0;
    std::string::~string(&name);
    std::allocator<char>::~allocator((char *)&v22 + 7);
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "recharge",
        2808);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        (common::milog::MiLogStream *const)&name,
        (const char (*)[37])"getTableValue(card_product_obj fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
      v2 = -1;
      v11 = 0;
    }
    else
    {
      proto::ShopCardProduct::set_product_id(card_product, (const std::string *)(v3 + 176));
      proto::ShopCardProduct::set_price_tier(card_product, (const std::string *)(v3 + 240));
      proto::ShopCardProduct::set_mcoin_base(card_product, *(_DWORD *)(v3 + 80));
      proto::ShopCardProduct::set_hcoin_per_day(card_product, *(_DWORD *)(v3 + 96));
      v11 = 1;
    }
    std::string::~string((std::string *const)(v3 + 240));
    if ( v11 == 1 )
      goto LABEL_15;
  }
  luabind::adl::object::~object((luabind::adl::object *const)(v3 + 144));
  luabind::adl::object::~object((luabind::adl::object *const)(v3 + 112));
  std::string::~string((std::string *const)(v3 + 176));
  proto::RechargeReq::~RechargeReq((proto::RechargeReq *const)(v3 + 384));
  result = v2;
  if ( v19 == (std::string *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 2827: range 000000000045BFB0-000000000045C2CB
int32_t __cdecl Robot::getShopmallData(Robot *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  int32_t v9; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-150h] BYREF
  std::string val; // [rsp+30h] [rbp-130h] BYREF
  std::string output; // [rsp+50h] [rbp-110h] BYREF
  char v14[240]; // [rsp+70h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 24 8 req:2828 112 48 8 rsp:2829";
  *(_QWORD *)(v1 + 16) = Robot::getShopmallData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218959360;
  v3[536862723] = 62194;
  v3[536862725] = -202116109;
  proto::GetShopmallDataReq::GetShopmallDataReq((proto::GetShopmallDataReq *const)(v1 + 48));
  proto::GetShopmallDataRsp::GetShopmallDataRsp((proto::GetShopmallDataRsp *const)(v1 + 112));
  if ( Robot::sendProto<proto::GetShopmallDataReq,proto::GetShopmallDataRsp>(
         this,
         (proto::GetShopmallDataReq *)(v1 + 48),
         (proto::GetShopmallDataRsp *)(v1 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getShopmallData",
      2832);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v11, (const char (*)[16])"sendProto fails");
    v5 = operator<<(v4, &this->player_);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v5, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v1 + 48));
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" rsp:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&output, (google::protobuf::Message *)(v1 + 112));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &output);
    std::string::~string(&output);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v9 = -1;
  }
  else
  {
    v9 = proto::GetShopmallDataRsp::retcode((const proto::GetShopmallDataRsp *const)(v1 + 112));
  }
  proto::GetShopmallDataRsp::~GetShopmallDataRsp((proto::GetShopmallDataRsp *const)(v1 + 112));
  proto::GetShopmallDataReq::~GetShopmallDataReq((proto::GetShopmallDataReq *const)(v1 + 48));
  result = v9;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2839: range 000000000045C2CC-000000000045C5E0
int32_t __cdecl Robot::getShop(Robot *const this, uint32_t shop_type)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t v10; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-130h] BYREF
  std::string val; // [rsp+30h] [rbp-110h] BYREF
  std::string output; // [rsp+50h] [rbp-F0h] BYREF
  char v15[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 8 req:2840 96 32 8 rsp:2842";
  *(_QWORD *)(v2 + 16) = Robot::getShop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  proto::GetShopReq::GetShopReq((proto::GetShopReq *const)(v2 + 32));
  proto::GetShopReq::set_shop_type((proto::GetShopReq *const)(v2 + 32), shop_type);
  proto::GetShopRsp::GetShopRsp((proto::GetShopRsp *const)(v2 + 96));
  if ( Robot::sendProto<proto::GetShopReq,proto::GetShopRsp>(
         this,
         (proto::GetShopReq *)(v2 + 32),
         (proto::GetShopRsp *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getShop",
      2845);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v12, (const char (*)[16])"sendProto fails");
    v6 = operator<<(v5, &this->player_);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" rsp:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&output, (google::protobuf::Message *)(v2 + 96));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &output);
    std::string::~string(&output);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v10 = -1;
  }
  else
  {
    v10 = proto::GetShopRsp::retcode((const proto::GetShopRsp *const)(v2 + 96));
  }
  proto::GetShopRsp::~GetShopRsp((proto::GetShopRsp *const)(v2 + 96));
  proto::GetShopReq::~GetShopReq((proto::GetShopReq *const)(v2 + 32));
  result = v10;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 2852: range 000000000045C5E2-000000000045CCDA
int32_t __cdecl Robot::buyGoods(
        Robot *const this,
        uint32_t shop_type,
        const luabind::adl::object *goods_table,
        uint32_t buy_count)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  proto::ItemParam *v7; // rax
  proto::ItemParam *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  int32_t v14; // r14d
  int32_t result; // eax
  const char (*v16)[6]; // [rsp+0h] [rbp-220h]
  const char (*v17)[6]; // [rsp+0h] [rbp-220h]
  luabind::adl::object *goods_tableb; // [rsp+8h] [rbp-218h]
  const char (*buy_counta)[6]; // [rsp+10h] [rbp-210h]
  Robot *thisa; // [rsp+18h] [rbp-208h]
  const char (*v22)[6]; // [rsp+20h] [rbp-200h] BYREF
  proto::ShopGoods *goods_proto; // [rsp+28h] [rbp-1F8h]
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-1F0h] BYREF
  std::string val; // [rsp+50h] [rbp-1D0h] BYREF
  std::string name; // [rsp+70h] [rbp-1B0h] BYREF
  char v27[400]; // [rsp+90h] [rbp-190h] BYREF

  buy_counta = (const char (*)[6])__PAIR64__(shop_type, buy_count);
  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 4 13 goods_id:2858 64 4 10 scoin:2858 80 4 10 hcoin:2858 96 4 10 mcoin:2858 112 4 18 goods_"
                        "item_id:2867 128 4 21 goods_item_count:2867 144 16 21 goods_item_table:2865 176 40 8 req:2853 256 64 8 rsp:2872";
  *(_QWORD *)(v4 + 16) = Robot::buyGoods;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = 61956;
  v6[536862725] = 62194;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862730] = -202116109;
  proto::BuyGoodsReq::BuyGoodsReq((proto::BuyGoodsReq *const)(v4 + 176));
  proto::BuyGoodsReq::set_shop_type((proto::BuyGoodsReq *const)(v4 + 176), shop_type);
  proto::BuyGoodsReq::set_buy_count((proto::BuyGoodsReq *const)(v4 + 176), (google::protobuf::uint32)buy_counta);
  goods_proto = proto::BuyGoodsReq::mutable_goods((proto::BuyGoodsReq *const)(v4 + 176));
  *(_DWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 80) = 0;
  *(_DWORD *)(v4 + 96) = 0;
  std::allocator<char>::allocator((char *)&v22 + 7);
  std::string::basic_string<std::allocator<char>>(&name, "goods_id", (const std::allocator<char> *)&v22 + 7);
  ScriptUtil::getTableValue<unsigned int,char const(&)[6],unsigned int &,char const(&)[6],unsigned int &,char const(&)[6],unsigned int &>(
    &ScriptUtil::no_exception_instance,
    goods_table,
    &name,
    (unsigned int *)(v4 + 48),
    (const char (*)[6])"scoin",
    (unsigned int *)(v4 + 64),
    (const char (*)[6])"hcoin",
    (unsigned int *)(v4 + 80),
    (const char (*)[6])"mcoin",
    (unsigned int *)(v4 + 96),
    v16,
    (unsigned int *)goods_table,
    buy_counta,
    (unsigned int *)this,
    v22,
    (unsigned int *)goods_proto);
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v22 + 7);
  proto::ShopGoods::set_goods_id(goods_proto, *(_DWORD *)(v4 + 48));
  proto::ShopGoods::set_scoin(goods_proto, *(_DWORD *)(v4 + 64));
  proto::ShopGoods::set_hcoin(goods_proto, *(_DWORD *)(v4 + 80));
  proto::ShopGoods::set_mcoin(goods_proto, *(_DWORD *)(v4 + 96));
  luabind::adl::object::object((luabind::adl::object *const)(v4 + 144));
  std::allocator<char>::allocator((char *)&v22 + 7);
  std::string::basic_string<std::allocator<char>>(&name, "goods_item", (const std::allocator<char> *)&v22 + 7);
  ScriptUtil::getTableValue(&ScriptUtil::no_exception_instance, goods_tableb, &name, (luabind::adl::object *)(v4 + 144));
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v22 + 7);
  *(_DWORD *)(v4 + 112) = 0;
  *(_DWORD *)(v4 + 128) = 0;
  std::allocator<char>::allocator((char *)&v22 + 7);
  std::string::basic_string<std::allocator<char>>(&name, "item_id", (const std::allocator<char> *)&v22 + 7);
  ScriptUtil::getTableValue<unsigned int,char const(&)[6],unsigned int &>(
    &ScriptUtil::no_exception_instance,
    (const luabind::adl::object *)(v4 + 144),
    &name,
    (unsigned int *)(v4 + 112),
    (const char (*)[6])"count",
    (unsigned int *)(v4 + 128),
    v17,
    (unsigned int *)goods_tableb);
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v22 + 7);
  v7 = proto::ShopGoods::mutable_goods_item(goods_proto);
  proto::ItemParam::set_item_id(v7, *(_DWORD *)(v4 + 112));
  v8 = proto::ShopGoods::mutable_goods_item(goods_proto);
  proto::ItemParam::set_count(v8, *(_DWORD *)(v4 + 128));
  proto::BuyGoodsRsp::BuyGoodsRsp((proto::BuyGoodsRsp *const)(v4 + 256));
  if ( Robot::sendProto<proto::BuyGoodsReq,proto::BuyGoodsRsp>(
         thisa,
         (proto::BuyGoodsReq *)(v4 + 176),
         (proto::BuyGoodsRsp *)(v4 + 256)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "buyGoods",
      2875);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v24, (const char (*)[16])"sendProto fails");
    v10 = operator<<(v9, &thisa->player_);
    v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v4 + 176));
    v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &val);
    v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" rsp:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&name, (google::protobuf::Message *)(v4 + 256));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &name);
    std::string::~string(&name);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v14 = -1;
  }
  else
  {
    v14 = proto::BuyGoodsRsp::retcode((const proto::BuyGoodsRsp *const)(v4 + 256));
  }
  proto::BuyGoodsRsp::~BuyGoodsRsp((proto::BuyGoodsRsp *const)(v4 + 256));
  luabind::adl::object::~object((luabind::adl::object *const)(v4 + 144));
  proto::BuyGoodsReq::~BuyGoodsReq((proto::BuyGoodsReq *const)(v4 + 176));
  result = v14;
  if ( v27 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 2882: range 000000000045CCDC-000000000045CFF8
int32_t __cdecl Robot::activityTakeWatcherReward(Robot *const this, uint32_t activity_id, uint32_t watcher_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  int32_t v11; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-130h] BYREF
  std::string val; // [rsp+30h] [rbp-110h] BYREF
  std::string output; // [rsp+50h] [rbp-F0h] BYREF
  char v17[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 8 req:2883 96 32 8 rsp:2886";
  *(_QWORD *)(v3 + 16) = Robot::activityTakeWatcherReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  proto::ActivityTakeWatcherRewardReq::ActivityTakeWatcherRewardReq((proto::ActivityTakeWatcherRewardReq *const)(v3 + 32));
  proto::ActivityTakeWatcherRewardReq::set_activity_id(
    (proto::ActivityTakeWatcherRewardReq *const)(v3 + 32),
    activity_id);
  proto::ActivityTakeWatcherRewardReq::set_watcher_id((proto::ActivityTakeWatcherRewardReq *const)(v3 + 32), watcher_id);
  proto::ActivityTakeWatcherRewardRsp::ActivityTakeWatcherRewardRsp((proto::ActivityTakeWatcherRewardRsp *const)(v3 + 96));
  if ( Robot::sendProto<proto::ActivityTakeWatcherRewardReq,proto::ActivityTakeWatcherRewardRsp>(
         this,
         (proto::ActivityTakeWatcherRewardReq *)(v3 + 32),
         (proto::ActivityTakeWatcherRewardRsp *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "activityTakeWatcherReward",
      2889);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v14, (const char (*)[16])"sendProto fails");
    v7 = operator<<(v6, &this->player_);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v3 + 32));
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" rsp:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&output, (google::protobuf::Message *)(v3 + 96));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &output);
    std::string::~string(&output);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v11 = -1;
  }
  else
  {
    v11 = proto::ActivityTakeWatcherRewardRsp::retcode((const proto::ActivityTakeWatcherRewardRsp *const)(v3 + 96));
  }
  proto::ActivityTakeWatcherRewardRsp::~ActivityTakeWatcherRewardRsp((proto::ActivityTakeWatcherRewardRsp *const)(v3 + 96));
  proto::ActivityTakeWatcherRewardReq::~ActivityTakeWatcherRewardReq((proto::ActivityTakeWatcherRewardReq *const)(v3 + 32));
  result = v11;
  if ( v17 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 2896: range 000000000045CFFA-000000000045D257
int32_t __cdecl Robot::mpPlayOwnerCheck(Robot *const this, uint32_t mp_play_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int32_t v5; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-110h] BYREF
  char v8[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 8 req:2897 112 40 8 rsp:2899";
  *(_QWORD *)(v2 + 16) = Robot::mpPlayOwnerCheck;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  proto::MpPlayOwnerCheckReq::MpPlayOwnerCheckReq((proto::MpPlayOwnerCheckReq *const)(v2 + 48));
  proto::MpPlayOwnerCheckReq::set_mp_play_id((proto::MpPlayOwnerCheckReq *const)(v2 + 48), mp_play_id);
  proto::MpPlayOwnerCheckRsp::MpPlayOwnerCheckRsp((proto::MpPlayOwnerCheckRsp *const)(v2 + 112));
  if ( Robot::sendProto<proto::MpPlayOwnerCheckReq,proto::MpPlayOwnerCheckRsp>(
         this,
         (proto::MpPlayOwnerCheckReq *)(v2 + 48),
         (proto::MpPlayOwnerCheckRsp *)(v2 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "mpPlayOwnerCheck",
      2902);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v7, (const char (*)[16])"sendProto fails");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = -1;
  }
  else
  {
    v5 = proto::MpPlayOwnerCheckRsp::retcode((const proto::MpPlayOwnerCheckRsp *const)(v2 + 112));
  }
  proto::MpPlayOwnerCheckRsp::~MpPlayOwnerCheckRsp((proto::MpPlayOwnerCheckRsp *const)(v2 + 112));
  proto::MpPlayOwnerCheckReq::~MpPlayOwnerCheckReq((proto::MpPlayOwnerCheckReq *const)(v2 + 48));
  result = v5;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2910: range 000000000045D258-000000000045DA3A
int32_t __cdecl Robot::avatarRelativeMove(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::vector<float>::reference v5; // rax
  _DWORD *v6; // rdx
  std::vector<float>::reference v7; // rax
  _DWORD *v8; // rdx
  std::vector<float>::reference v9; // rax
  _DWORD *v10; // rdx
  std::vector<float>::reference v11; // rax
  _DWORD *v12; // rdx
  std::vector<float>::reference v13; // rax
  _DWORD *v14; // rdx
  std::vector<float>::reference v15; // rax
  _DWORD *v16; // rdx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  const Vector3 *Pos; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  int32_t result; // eax
  __int128 v23; // [rsp+10h] [rbp-200h] BYREF
  std::string name; // [rsp+20h] [rbp-1F0h] BYREF
  char v25[464]; // [rsp+40h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 17 motion_state:2914 64 12 9 step:2917 96 12 10 speed:2927 128 16 19 cur_avatar_ptr:2911 "
                        "160 24 13 step_vec:2918 224 24 14 speed_vec:2928 288 32 13 step_str:2913 352 32 14 speed_str:2913";
  *(_QWORD *)(v2 + 16) = Robot::avatarRelativeMove;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219020288;
  v4[536862723] = -219020288;
  v4[536862724] = -219021312;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  Player::getCurAvatar((const Player *const)(v2 + 128));
  std::string::basic_string((std::string *const)(v2 + 288));
  std::string::basic_string((std::string *const)(v2 + 352));
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator((char *)&v23 + 3);
  std::string::basic_string<std::allocator<char>>(&name, "step", (const std::allocator<char> *)&v23 + 3);
  ScriptUtil::getTableValue<std::string,char const(&)[6],std::string&,char const(&)[6],unsigned int &>(
    &ScriptUtil::no_exception_instance,
    param_table,
    &name,
    (std::string *)(v2 + 288),
    (const char (*)[6])"speed",
    (std::string *)(v2 + 352),
    (const char (*)[6])"state",
    (unsigned int *)(v2 + 48),
    (const char (*)[6])param_table,
    (std::string *)this,
    (const char (*)[6])v23,
    *((unsigned int **)&v23 + 1));
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v23 + 3);
  Vector3::Vector3((Vector3 *const)(v2 + 64), 0.0, 0.0, 0.0);
  std::vector<float>::vector((std::vector<float> *const)(v2 + 160));
  std::allocator<char>::allocator((char *)&v23 + 3);
  std::string::basic_string<std::allocator<char>>(&name, ",", (const std::allocator<char> *)&v23 + 3);
  common::tools::StringUtils::splitToList<float>(
    (const std::string *)(v2 + 288),
    &name,
    (std::vector<float> *)(v2 + 160),
    0);
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v23 + 3);
  if ( std::vector<float>::size((const std::vector<float> *const)(v2 + 160)) > 2 )
  {
    v5 = std::vector<float>::operator[]((std::vector<float> *const)(v2 + 160), 0LL);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 64) = *v6;
    v7 = std::vector<float>::operator[]((std::vector<float> *const)(v2 + 160), 1uLL);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    *(_DWORD *)(v2 + 68) = *v8;
    v9 = std::vector<float>::operator[]((std::vector<float> *const)(v2 + 160), 2uLL);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    *(_DWORD *)(v2 + 72) = *v10;
  }
  Vector3::Vector3((Vector3 *const)(v2 + 96), 0.0, 0.0, 0.0);
  std::vector<float>::vector((std::vector<float> *const)(v2 + 224));
  std::allocator<char>::allocator((char *)&v23 + 3);
  std::string::basic_string<std::allocator<char>>(&name, ",", (const std::allocator<char> *)&v23 + 3);
  common::tools::StringUtils::splitToList<float>(
    (const std::string *)(v2 + 352),
    &name,
    (std::vector<float> *)(v2 + 224),
    0);
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v23 + 3);
  if ( std::vector<float>::size((const std::vector<float> *const)(v2 + 224)) > 2 )
  {
    v11 = std::vector<float>::operator[]((std::vector<float> *const)(v2 + 224), 0LL);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    *(_DWORD *)(v2 + 96) = *v12;
    v13 = std::vector<float>::operator[]((std::vector<float> *const)(v2 + 224), 1uLL);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    *(_DWORD *)(v2 + 100) = *v14;
    v15 = std::vector<float>::operator[]((std::vector<float> *const)(v2 + 224), 2uLL);
    v16 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v15);
    }
    *(_DWORD *)(v2 + 104) = *v16;
  }
  v17 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  Entity::setMotionState(v17, *(proto::MotionState *)(v2 + 48));
  v18 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  v19 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  Pos = Entity::getPos(v19);
  *(Vector3 *)((char *)&v23 + 4) = operator+(Pos, (const Vector3 *)(v2 + 64));
  Entity::setPos(v18, (const Vector3 *)((char *)&v23 + 4));
  v21 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  Entity::setSpeed(v21, (const Vector3 *)(v2 + 96));
  std::vector<float>::~vector((std::vector<float> *const)(v2 + 224));
  std::vector<float>::~vector((std::vector<float> *const)(v2 + 160));
  std::string::~string((std::string *const)(v2 + 352));
  std::string::~string((std::string *const)(v2 + 288));
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 128));
  result = 0;
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 2944: range 000000000045DA3C-000000000045E23C
int32_t __cdecl Robot::entityRelativeMove(Robot *const this, const luabind::adl::object *param_table)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::vector<float>::reference v5; // rax
  _DWORD *v6; // rdx
  std::vector<float>::reference v7; // rax
  _DWORD *v8; // rdx
  std::vector<float>::reference v9; // rax
  _DWORD *v10; // rdx
  std::vector<float>::reference v11; // rax
  _DWORD *v12; // rdx
  std::vector<float>::reference v13; // rax
  _DWORD *v14; // rdx
  std::vector<float>::reference v15; // rax
  _DWORD *v16; // rdx
  Entity *v17; // rax
  Entity *v18; // r14
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  const Vector3 *Pos; // rax
  Entity *v21; // rax
  int32_t result; // eax
  uint32_t thisa; // [rsp+8h] [rbp-208h]
  __int128 v24; // [rsp+10h] [rbp-200h] BYREF
  std::string name; // [rsp+20h] [rbp-1F0h] BYREF
  char v26[464]; // [rsp+40h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 4 17 motion_state:2946 48 4 14 entity_id:2947 64 12 9 step:2952 96 12 10 speed:2962 128 16 "
                        "15 entity_ptr:2950 160 24 13 step_vec:2953 224 24 14 speed_vec:2963 288 32 13 step_str:2945 352 "
                        "32 14 speed_str:2945";
  *(_QWORD *)(v2 + 16) = Robot::entityRelativeMove;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219020288;
  v4[536862723] = -219020288;
  v4[536862724] = -219021312;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  std::string::basic_string((std::string *const)(v2 + 288));
  std::string::basic_string((std::string *const)(v2 + 352));
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  std::allocator<char>::allocator((char *)&v24 + 3);
  std::string::basic_string<std::allocator<char>>(&name, "entity_id", (const std::allocator<char> *)&v24 + 3);
  ScriptUtil::getTableValue<unsigned int,char const(&)[5],std::string &,char const(&)[6],std::string &,char const(&)[6],unsigned int &>(
    &ScriptUtil::no_exception_instance,
    param_table,
    &name,
    (unsigned int *)(v2 + 48),
    (const char (*)[5])"step",
    (std::string *)(v2 + 288),
    (const char (*)[6])"speed",
    (std::string *)(v2 + 352),
    (const char (*)[6])"state",
    (unsigned int *)(v2 + 32),
    (const char (*)[5])param_table,
    (std::string *)this,
    (const char (*)[6])v24,
    *((std::string **)&v24 + 1),
    (const char (*)[6])name._M_dataplus._M_p,
    (unsigned int *)name._M_string_length);
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v24 + 3);
  Robot::findEntity((Robot *const)(v2 + 128), thisa);
  Vector3::Vector3((Vector3 *const)(v2 + 64), 0.0, 0.0, 0.0);
  std::vector<float>::vector((std::vector<float> *const)(v2 + 160));
  std::allocator<char>::allocator((char *)&v24 + 3);
  std::string::basic_string<std::allocator<char>>(&name, ",", (const std::allocator<char> *)&v24 + 3);
  common::tools::StringUtils::splitToList<float>(
    (const std::string *)(v2 + 288),
    &name,
    (std::vector<float> *)(v2 + 160),
    0);
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v24 + 3);
  if ( std::vector<float>::size((const std::vector<float> *const)(v2 + 160)) > 2 )
  {
    v5 = std::vector<float>::operator[]((std::vector<float> *const)(v2 + 160), 0LL);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 64) = *v6;
    v7 = std::vector<float>::operator[]((std::vector<float> *const)(v2 + 160), 1uLL);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    *(_DWORD *)(v2 + 68) = *v8;
    v9 = std::vector<float>::operator[]((std::vector<float> *const)(v2 + 160), 2uLL);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    *(_DWORD *)(v2 + 72) = *v10;
  }
  Vector3::Vector3((Vector3 *const)(v2 + 96), 0.0, 0.0, 0.0);
  std::vector<float>::vector((std::vector<float> *const)(v2 + 224));
  std::allocator<char>::allocator((char *)&v24 + 3);
  std::string::basic_string<std::allocator<char>>(&name, ",", (const std::allocator<char> *)&v24 + 3);
  common::tools::StringUtils::splitToList<float>(
    (const std::string *)(v2 + 352),
    &name,
    (std::vector<float> *)(v2 + 224),
    0);
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v24 + 3);
  if ( std::vector<float>::size((const std::vector<float> *const)(v2 + 224)) > 2 )
  {
    v11 = std::vector<float>::operator[]((std::vector<float> *const)(v2 + 224), 0LL);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    *(_DWORD *)(v2 + 96) = *v12;
    v13 = std::vector<float>::operator[]((std::vector<float> *const)(v2 + 224), 1uLL);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    *(_DWORD *)(v2 + 100) = *v14;
    v15 = std::vector<float>::operator[]((std::vector<float> *const)(v2 + 224), 2uLL);
    v16 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v15);
    }
    *(_DWORD *)(v2 + 104) = *v16;
  }
  v17 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  Entity::setMotionState(v17, *(proto::MotionState *)(v2 + 32));
  v18 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  v19 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  Pos = Entity::getPos(v19);
  *(Vector3 *)((char *)&v24 + 4) = operator+(Pos, (const Vector3 *)(v2 + 64));
  Entity::setPos(v18, (const Vector3 *)((char *)&v24 + 4));
  v21 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  Entity::setSpeed(v21, (const Vector3 *)(v2 + 96));
  std::vector<float>::~vector((std::vector<float> *const)(v2 + 224));
  std::vector<float>::~vector((std::vector<float> *const)(v2 + 160));
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 128));
  std::string::~string((std::string *const)(v2 + 352));
  std::string::~string((std::string *const)(v2 + 288));
  result = 0;
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 2979: range 000000000045E23E-000000000045E684
int32_t __cdecl Robot::unionCmdMove(Robot *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t EntityId; // eax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  std::string *v7; // rax
  std::string *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t v10; // r14d
  int32_t result; // eax
  proto::MotionInfo *motion_info; // [rsp+18h] [rbp-1A8h]
  proto::CombatInvokeEntry *invoke; // [rsp+20h] [rbp-1A0h]
  proto::UnionCmd *cmd; // [rsp+28h] [rbp-198h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-190h] BYREF
  char v16[368]; // [rsp+50h] [rbp-170h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 16 19 cur_avatar_ptr:2980 80 48 21 entity_move_info:2982 160 48 30 combat_invocations_notif"
                        "y:2992 240 48 21 union_cmd_notify:2998";
  *(_QWORD *)(v1 + 16) = Robot::unionCmdMove;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862724] = -218959118;
  v3[536862726] = -219021312;
  v3[536862727] = 62194;
  v3[536862729] = -202116109;
  Player::getCurAvatar((const Player *const)(v1 + 48));
  proto::EntityMoveInfo::EntityMoveInfo((proto::EntityMoveInfo *const)(v1 + 80));
  v4 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
  EntityId = Entity::getEntityId(v4);
  proto::EntityMoveInfo::set_entity_id((proto::EntityMoveInfo *const)(v1 + 80), EntityId);
  motion_info = proto::EntityMoveInfo::mutable_motion_info((proto::EntityMoveInfo *const)(v1 + 80));
  v6 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
  Entity::getMotionInfo(v6, motion_info);
  proto::EntityMoveInfo::set_scene_time((proto::EntityMoveInfo *const)(v1 + 80), 0);
  proto::EntityMoveInfo::set_reliable_seq((proto::EntityMoveInfo *const)(v1 + 80), 0x64u);
  proto::EntityMoveInfo::set_is_reliable((proto::EntityMoveInfo *const)(v1 + 80), 1);
  proto::CombatInvocationsNotify::CombatInvocationsNotify((proto::CombatInvocationsNotify *const)(v1 + 160));
  invoke = proto::CombatInvocationsNotify::add_invoke_list((proto::CombatInvocationsNotify *const)(v1 + 160));
  proto::CombatInvokeEntry::set_argument_type(invoke, ENTITY_MOVE);
  proto::CombatInvokeEntry::set_forward_type(invoke, FORWARD_TO_ALL_EXCEPT_CUR);
  v7 = proto::CombatInvokeEntry::mutable_combat_data[abi:cxx11](invoke);
  google::protobuf::MessageLite::SerializeToString((const google::protobuf::MessageLite *const)(v1 + 80), v7);
  proto::UnionCmdNotify::UnionCmdNotify((proto::UnionCmdNotify *const)(v1 + 240));
  cmd = proto::UnionCmdNotify::add_cmd_list((proto::UnionCmdNotify *const)(v1 + 240));
  proto::UnionCmd::set_message_id(cmd, 0x13Fu);
  v8 = proto::UnionCmd::mutable_body[abi:cxx11](cmd);
  google::protobuf::MessageLite::SerializeToString((const google::protobuf::MessageLite *const)(v1 + 160), v8);
  if ( Robot::sendProto<proto::UnionCmdNotify>(this, (proto::UnionCmdNotify *)(v1 + 240)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "unionCmdMove",
      3005);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v15, (const char (*)[16])"sendProto fails");
    operator<<(v9, this);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v10 = -1;
  }
  else
  {
    v10 = 0;
  }
  proto::UnionCmdNotify::~UnionCmdNotify((proto::UnionCmdNotify *const)(v1 + 240));
  proto::CombatInvocationsNotify::~CombatInvocationsNotify((proto::CombatInvocationsNotify *const)(v1 + 160));
  proto::EntityMoveInfo::~EntityMoveInfo((proto::EntityMoveInfo *const)(v1 + 80));
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 48));
  result = v10;
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3012: range 000000000045E686-000000000045EABE
int32_t __cdecl Robot::unionCmdMoveByEntityId(Robot *const this, uint32_t entity_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  std::string *v6; // rax
  std::string *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int32_t v9; // r14d
  int32_t result; // eax
  proto::MotionInfo *motion_info; // [rsp+18h] [rbp-1A8h]
  proto::CombatInvokeEntry *invoke; // [rsp+20h] [rbp-1A0h]
  proto::UnionCmd *cmd; // [rsp+28h] [rbp-198h]
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-190h] BYREF
  char v15[368]; // [rsp+50h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 16 15 entity_ptr:3013 80 48 21 entity_move_info:3015 160 48 30 combat_invocations_notify:30"
                        "25 240 48 21 union_cmd_notify:3031";
  *(_QWORD *)(v2 + 16) = Robot::unionCmdMoveByEntityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -218959118;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862729] = -202116109;
  Robot::findEntity((Robot *const)(v2 + 48), (uint32_t)this);
  proto::EntityMoveInfo::EntityMoveInfo((proto::EntityMoveInfo *const)(v2 + 80));
  proto::EntityMoveInfo::set_entity_id((proto::EntityMoveInfo *const)(v2 + 80), entity_id);
  motion_info = proto::EntityMoveInfo::mutable_motion_info((proto::EntityMoveInfo *const)(v2 + 80));
  v5 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
  Entity::getMotionInfo(v5, motion_info);
  proto::EntityMoveInfo::set_scene_time((proto::EntityMoveInfo *const)(v2 + 80), 0);
  proto::EntityMoveInfo::set_reliable_seq((proto::EntityMoveInfo *const)(v2 + 80), 0x64u);
  proto::EntityMoveInfo::set_is_reliable((proto::EntityMoveInfo *const)(v2 + 80), 1);
  proto::CombatInvocationsNotify::CombatInvocationsNotify((proto::CombatInvocationsNotify *const)(v2 + 160));
  invoke = proto::CombatInvocationsNotify::add_invoke_list((proto::CombatInvocationsNotify *const)(v2 + 160));
  proto::CombatInvokeEntry::set_argument_type(invoke, ENTITY_MOVE);
  proto::CombatInvokeEntry::set_forward_type(invoke, FORWARD_TO_ALL_EXCEPT_CUR);
  v6 = proto::CombatInvokeEntry::mutable_combat_data[abi:cxx11](invoke);
  google::protobuf::MessageLite::SerializeToString((const google::protobuf::MessageLite *const)(v2 + 80), v6);
  proto::UnionCmdNotify::UnionCmdNotify((proto::UnionCmdNotify *const)(v2 + 240));
  cmd = proto::UnionCmdNotify::add_cmd_list((proto::UnionCmdNotify *const)(v2 + 240));
  proto::UnionCmd::set_message_id(cmd, 0x13Fu);
  v7 = proto::UnionCmd::mutable_body[abi:cxx11](cmd);
  google::protobuf::MessageLite::SerializeToString((const google::protobuf::MessageLite *const)(v2 + 160), v7);
  if ( Robot::sendProto<proto::UnionCmdNotify>(this, (proto::UnionCmdNotify *)(v2 + 240)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "unionCmdMoveByEntityId",
      3038);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v14, (const char (*)[16])"sendProto fails");
    operator<<(v8, this);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v9 = -1;
  }
  else
  {
    v9 = 0;
  }
  proto::UnionCmdNotify::~UnionCmdNotify((proto::UnionCmdNotify *const)(v2 + 240));
  proto::CombatInvocationsNotify::~CombatInvocationsNotify((proto::CombatInvocationsNotify *const)(v2 + 160));
  proto::EntityMoveInfo::~EntityMoveInfo((proto::EntityMoveInfo *const)(v2 + 80));
  std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 48));
  result = v9;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3047: range 000000000045EAC0-000000000045F2F7
int32_t __cdecl Robot::unionCmdAbility(
        Robot *const this,
        const luabind::adl::object *modifier_table,
        const luabind::adl::object *param_table,
        bool is_set_argument_type)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  proto::AbilityString *v7; // rax
  std::string *v8; // rax
  std::string *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t v11; // r14d
  int32_t result; // eax
  const char (*v13)[18]; // [rsp+0h] [rbp-250h]
  const char (*v14)[22]; // [rsp+0h] [rbp-250h]
  const char (*v15)[13]; // [rsp+0h] [rbp-250h]
  bool is_set_argument_typea; // [rsp+4h] [rbp-24Ch]
  luabind::adl::object *param_tableb; // [rsp+8h] [rbp-248h]
  luabind::adl::object *param_tablec; // [rsp+8h] [rbp-248h]
  const char (*modifier_tablea)[9]; // [rsp+10h] [rbp-240h]
  const char (*modifier_tableb)[9]; // [rsp+10h] [rbp-240h]
  int *thisb; // [rsp+18h] [rbp-238h]
  unsigned int *thisc; // [rsp+18h] [rbp-238h]
  Robot *thisa; // [rsp+18h] [rbp-238h]
  const char (*v25)[27]; // [rsp+20h] [rbp-230h] BYREF
  proto::AbilityInvokeEntry *invoke; // [rsp+28h] [rbp-228h]
  proto::AbilityInvokeEntryHead *ability_invoke_entry_head; // [rsp+30h] [rbp-220h]
  proto::UnionCmd *cmd; // [rsp+38h] [rbp-218h]
  std::string name; // [rsp+40h] [rbp-210h] BYREF
  char v30[496]; // [rsp+60h] [rbp-1F0h] BYREF

  BYTE4(v13) = is_set_argument_type;
  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(448LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 48 1 27 is_serverbuff_modifier:3077 64 4 25 instanced_ability_id:3072 80 4 26 instanced_modif"
                        "ier_id:3073 96 4 13 local_id:3074 112 4 14 entity_id:3101 128 4 17 forward_peer:3103 144 4 13 ev"
                        "ent_id:3104 160 48 31 ability_invocations_notify:3068 240 48 21 union_cmd_notify:3124 320 88 33 "
                        "ability_meta_modifier_change:3048";
  *(_QWORD *)(v4 + 16) = Robot::unionCmdAbility;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -234556924;
  v6[536862726] = -219021312;
  v6[536862727] = 62194;
  v6[536862729] = -218959118;
  v6[536862732] = -218103808;
  v6[536862733] = -202116109;
  proto::AbilityMetaModifierChange::AbilityMetaModifierChange((proto::AbilityMetaModifierChange *const)(v4 + 320));
  *(_DWORD *)(v4 + 112) = 0;
  *(_DWORD *)(v4 + 128) = 0;
  *(_DWORD *)(v4 + 144) = 0;
  *(_BYTE *)(v4 + 48) = 0;
  std::allocator<char>::allocator((char *)&v25 + 7);
  std::string::basic_string<std::allocator<char>>(&name, "parent_ability_name", (const std::allocator<char> *)&v25 + 7);
  ScriptUtil::getTableValue<unsigned int,char const(&)[18],int &,char const(&)[16],unsigned int &,char const(&)[27],bool &>(
    &ScriptUtil::no_exception_instance,
    modifier_table,
    &name,
    (unsigned int *)(v4 + 112),
    (const char (*)[18])"modifier_local_id",
    (int *)(v4 + 128),
    (const char (*)[16])"apply_entity_id",
    (unsigned int *)(v4 + 144),
    (const char (*)[27])"is_attached_parent_ability",
    (bool *)(v4 + 48),
    v13,
    (int *)param_table,
    (const char (*)[16])modifier_table,
    (unsigned int *)this,
    v25,
    (bool *)invoke);
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v25 + 7);
  v7 = proto::AbilityMetaModifierChange::mutable_parent_ability_name((proto::AbilityMetaModifierChange *const)(v4 + 320));
  proto::AbilityString::set_hash(v7, *(_DWORD *)(v4 + 112));
  proto::AbilityMetaModifierChange::set_modifier_local_id(
    (proto::AbilityMetaModifierChange *const)(v4 + 320),
    *(_DWORD *)(v4 + 128));
  proto::AbilityMetaModifierChange::set_apply_entity_id(
    (proto::AbilityMetaModifierChange *const)(v4 + 320),
    *(_DWORD *)(v4 + 144));
  proto::AbilityMetaModifierChange::set_is_attached_parent_ability(
    (proto::AbilityMetaModifierChange *const)(v4 + 320),
    *(_BYTE *)(v4 + 48));
  proto::AbilityInvocationsNotify::AbilityInvocationsNotify((proto::AbilityInvocationsNotify *const)(v4 + 160));
  invoke = proto::AbilityInvocationsNotify::add_invokes((proto::AbilityInvocationsNotify *const)(v4 + 160));
  ability_invoke_entry_head = proto::AbilityInvokeEntry::mutable_head(invoke);
  *(_DWORD *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 80) = 0;
  *(_DWORD *)(v4 + 96) = 0;
  *(_DWORD *)(v4 + 112) = 0;
  *(_DWORD *)(v4 + 128) = 0;
  *(_BYTE *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 144) = 0;
  std::allocator<char>::allocator((char *)&v25 + 7);
  std::string::basic_string<std::allocator<char>>(&name, "instanced_ability_id", (const std::allocator<char> *)&v25 + 7);
  ScriptUtil::getTableValue<unsigned int,char const(&)[22],unsigned int &,char const(&)[9],int &,char const(&)[25],int &,char const(&)[10],unsigned int &,char const(&)[23],bool &,char const(&)[16],unsigned int &>(
    &ScriptUtil::no_exception_instance,
    param_tableb,
    &name,
    (unsigned int *)(v4 + 64),
    (const char (*)[22])"instanced_modifier_id",
    (unsigned int *)(v4 + 80),
    (const char (*)[9])"local_id",
    (int *)(v4 + 96),
    (const char (*)[25])"modifier_config_local_id",
    (int *)(v4 + 112),
    (const char (*)[10])"target_id",
    (unsigned int *)(v4 + 128),
    (const char (*)[23])"is_serverbuff_modifier",
    (bool *)(v4 + 48),
    (const char (*)[16])"server_buff_uid",
    (unsigned int *)(v4 + 144),
    v14,
    (unsigned int *)param_tableb,
    modifier_tablea,
    thisb,
    (const char (*)[25])v25,
    (int *)invoke,
    (const char (*)[10])ability_invoke_entry_head,
    (unsigned int *)cmd,
    (const char (*)[23])name._M_dataplus._M_p,
    (bool *)name._M_string_length,
    (const char (*)[16])name._anon_0._M_allocated_capacity,
    *((unsigned int **)&name._anon_0._M_allocated_capacity + 1));
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v25 + 7);
  proto::AbilityInvokeEntryHead::set_instanced_ability_id(ability_invoke_entry_head, *(_DWORD *)(v4 + 64));
  proto::AbilityInvokeEntryHead::set_instanced_modifier_id(ability_invoke_entry_head, *(_DWORD *)(v4 + 80));
  proto::AbilityInvokeEntryHead::set_local_id(ability_invoke_entry_head, *(_DWORD *)(v4 + 96));
  proto::AbilityInvokeEntryHead::set_modifier_config_local_id(ability_invoke_entry_head, *(_DWORD *)(v4 + 112));
  proto::AbilityInvokeEntryHead::set_target_id(ability_invoke_entry_head, *(_DWORD *)(v4 + 128));
  proto::AbilityInvokeEntryHead::set_is_serverbuff_modifier(ability_invoke_entry_head, *(_BYTE *)(v4 + 48));
  proto::AbilityInvokeEntryHead::set_server_buff_uid(ability_invoke_entry_head, *(_DWORD *)(v4 + 144));
  *(_DWORD *)(v4 + 112) = 0;
  *(_DWORD *)(v4 + 128) = 0;
  *(_DWORD *)(v4 + 144) = 0;
  std::allocator<char>::allocator((char *)&v25 + 7);
  std::string::basic_string<std::allocator<char>>(&name, "entity_id", (const std::allocator<char> *)&v25 + 7);
  ScriptUtil::getTableValue<unsigned int,char const(&)[13],unsigned int &,char const(&)[9],unsigned int &>(
    &ScriptUtil::no_exception_instance,
    param_tablec,
    &name,
    (unsigned int *)(v4 + 112),
    (const char (*)[13])"forward_peer",
    (unsigned int *)(v4 + 128),
    (const char (*)[9])"event_id",
    (unsigned int *)(v4 + 144),
    v15,
    (unsigned int *)param_tablec,
    modifier_tableb,
    thisc);
  std::string::~string(&name);
  std::allocator<char>::~allocator((char *)&v25 + 7);
  if ( is_set_argument_typea )
    proto::AbilityInvokeEntry::set_argument_type(invoke, ABILITY_META_MODIFIER_CHANGE);
  v8 = proto::AbilityInvokeEntry::mutable_ability_data[abi:cxx11](invoke);
  google::protobuf::MessageLite::SerializeToString((const google::protobuf::MessageLite *const)(v4 + 320), v8);
  proto::AbilityInvokeEntry::set_entity_id(invoke, *(_DWORD *)(v4 + 112));
  proto::AbilityInvokeEntry::set_forward_type(invoke, FORWARD_TO_ALL_EXCEPT_CUR);
  proto::AbilityInvokeEntry::set_forward_peer(invoke, *(_DWORD *)(v4 + 128));
  proto::AbilityInvokeEntry::set_event_id(invoke, *(_DWORD *)(v4 + 144));
  proto::UnionCmdNotify::UnionCmdNotify((proto::UnionCmdNotify *const)(v4 + 240));
  cmd = proto::UnionCmdNotify::add_cmd_list((proto::UnionCmdNotify *const)(v4 + 240));
  proto::UnionCmd::set_message_id(cmd, 0x4AEu);
  v9 = proto::UnionCmd::mutable_body[abi:cxx11](cmd);
  google::protobuf::MessageLite::SerializeToString((const google::protobuf::MessageLite *const)(v4 + 160), v9);
  if ( Robot::sendProto<proto::UnionCmdNotify>(thisa, (proto::UnionCmdNotify *)(v4 + 240)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&name,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "unionCmdAbility",
      3131);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)&name,
            (const char (*)[16])"sendProto fails");
    operator<<(v10, thisa);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&name);
    v11 = -1;
  }
  else
  {
    v11 = 0;
  }
  proto::UnionCmdNotify::~UnionCmdNotify((proto::UnionCmdNotify *const)(v4 + 240));
  proto::AbilityInvocationsNotify::~AbilityInvocationsNotify((proto::AbilityInvocationsNotify *const)(v4 + 160));
  proto::AbilityMetaModifierChange::~AbilityMetaModifierChange((proto::AbilityMetaModifierChange *const)(v4 + 320));
  result = v11;
  if ( v30 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3138: range 000000000045F2F8-000000000045F57D
int32_t __cdecl Robot::testUnionCmd(Robot *const this, const std::string *msg1, const std::string *msg2)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::string *v6; // rax
  std::string *v7; // rax
  int32_t v8; // r14d
  int32_t result; // eax
  proto::UnionCmd *cmd_1; // [rsp+20h] [rbp-100h]
  proto::UnionCmd *cmd_2; // [rsp+28h] [rbp-F8h]
  char v13[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 32 8 req:3144 112 48 11 notify:3139";
  *(_QWORD *)(v3 + 16) = Robot::testUnionCmd;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  proto::UnionCmdNotify::UnionCmdNotify((proto::UnionCmdNotify *const)(v3 + 112));
  cmd_1 = proto::UnionCmdNotify::add_cmd_list((proto::UnionCmdNotify *const)(v3 + 112));
  cmd_2 = proto::UnionCmdNotify::add_cmd_list((proto::UnionCmdNotify *const)(v3 + 112));
  proto::UnionCmd::set_message_id(cmd_1, 0x62u);
  proto::UnionCmd::set_message_id(cmd_2, 0x62u);
  proto::GmTalkReq::GmTalkReq((proto::GmTalkReq *const)(v3 + 48));
  proto::GmTalkReq::set_msg((proto::GmTalkReq *const)(v3 + 48), msg1);
  v6 = proto::UnionCmd::mutable_body[abi:cxx11](cmd_1);
  google::protobuf::MessageLite::SerializeToString((const google::protobuf::MessageLite *const)(v3 + 48), v6);
  proto::GmTalkReq::set_msg((proto::GmTalkReq *const)(v3 + 48), msg2);
  v7 = proto::UnionCmd::mutable_body[abi:cxx11](cmd_2);
  google::protobuf::MessageLite::SerializeToString((const google::protobuf::MessageLite *const)(v3 + 48), v7);
  v8 = Robot::sendProto<proto::UnionCmdNotify>(this, (proto::UnionCmdNotify *)(v3 + 112));
  proto::GmTalkReq::~GmTalkReq((proto::GmTalkReq *const)(v3 + 48));
  proto::UnionCmdNotify::~UnionCmdNotify((proto::UnionCmdNotify *const)(v3 + 112));
  result = v8;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3153: range 000000000045F57E-000000000045F7A3
int32_t __cdecl Robot::mpPlayOwnerStartInvite(Robot *const this, uint32_t mp_play_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-F0h] BYREF
  char v8[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 8 req:3154 96 32 8 rsp:3156";
  *(_QWORD *)(v2 + 16) = Robot::mpPlayOwnerStartInvite;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  proto::MpPlayOwnerStartInviteReq::MpPlayOwnerStartInviteReq((proto::MpPlayOwnerStartInviteReq *const)(v2 + 32));
  proto::MpPlayOwnerStartInviteReq::set_mp_play_id((proto::MpPlayOwnerStartInviteReq *const)(v2 + 32), mp_play_id);
  proto::MpPlayOwnerStartInviteRsp::MpPlayOwnerStartInviteRsp((proto::MpPlayOwnerStartInviteRsp *const)(v2 + 96));
  if ( Robot::sendProto<proto::MpPlayOwnerStartInviteReq,proto::MpPlayOwnerStartInviteRsp>(
         this,
         (proto::MpPlayOwnerStartInviteReq *)(v2 + 32),
         (proto::MpPlayOwnerStartInviteRsp *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "mpPlayOwnerStartInvite",
      3159);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v7, (const char (*)[16])"sendProto fails");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = -1;
  }
  else
  {
    v5 = proto::MpPlayOwnerStartInviteRsp::retcode((const proto::MpPlayOwnerStartInviteRsp *const)(v2 + 96));
  }
  proto::MpPlayOwnerStartInviteRsp::~MpPlayOwnerStartInviteRsp((proto::MpPlayOwnerStartInviteRsp *const)(v2 + 96));
  proto::MpPlayOwnerStartInviteReq::~MpPlayOwnerStartInviteReq((proto::MpPlayOwnerStartInviteReq *const)(v2 + 32));
  result = v5;
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 3166: range 000000000045F7A4-000000000045F9E6
int32_t __cdecl Robot::mpPlayGuestReplyInvite(Robot *const this, uint32_t mp_play_id, bool is_agree)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-F0h] BYREF
  char v10[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 8 req:3167 96 32 8 rsp:3170";
  *(_QWORD *)(v3 + 16) = Robot::mpPlayGuestReplyInvite;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  proto::MpPlayGuestReplyInviteReq::MpPlayGuestReplyInviteReq((proto::MpPlayGuestReplyInviteReq *const)(v3 + 32));
  proto::MpPlayGuestReplyInviteReq::set_mp_play_id((proto::MpPlayGuestReplyInviteReq *const)(v3 + 32), mp_play_id);
  proto::MpPlayGuestReplyInviteReq::set_is_agree((proto::MpPlayGuestReplyInviteReq *const)(v3 + 32), is_agree);
  proto::MpPlayGuestReplyInviteRsp::MpPlayGuestReplyInviteRsp((proto::MpPlayGuestReplyInviteRsp *const)(v3 + 96));
  if ( Robot::sendProto<proto::MpPlayGuestReplyInviteReq,proto::MpPlayGuestReplyInviteRsp>(
         this,
         (proto::MpPlayGuestReplyInviteReq *)(v3 + 32),
         (proto::MpPlayGuestReplyInviteRsp *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "mpPlayGuestReplyInvite",
      3173);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v9, (const char (*)[16])"sendProto fails");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v6 = -1;
  }
  else
  {
    v6 = proto::MpPlayGuestReplyInviteRsp::retcode((const proto::MpPlayGuestReplyInviteRsp *const)(v3 + 96));
  }
  proto::MpPlayGuestReplyInviteRsp::~MpPlayGuestReplyInviteRsp((proto::MpPlayGuestReplyInviteRsp *const)(v3 + 96));
  proto::MpPlayGuestReplyInviteReq::~MpPlayGuestReplyInviteReq((proto::MpPlayGuestReplyInviteReq *const)(v3 + 32));
  result = v6;
  if ( v10 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 3180: range 000000000045F9E8-000000000045FC27
int32_t __cdecl Robot::mcoinExchangeHcoin(Robot *const this, uint32_t mcoin_cost, uint32_t hcoin)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-F0h] BYREF
  char v10[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 8 req:3181 96 32 8 rsp:3182";
  *(_QWORD *)(v3 + 16) = Robot::mcoinExchangeHcoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  proto::McoinExchangeHcoinReq::McoinExchangeHcoinReq((proto::McoinExchangeHcoinReq *const)(v3 + 32));
  proto::McoinExchangeHcoinRsp::McoinExchangeHcoinRsp((proto::McoinExchangeHcoinRsp *const)(v3 + 96));
  proto::McoinExchangeHcoinReq::set_mcoin_cost((proto::McoinExchangeHcoinReq *const)(v3 + 32), mcoin_cost);
  proto::McoinExchangeHcoinReq::set_hcoin((proto::McoinExchangeHcoinReq *const)(v3 + 32), hcoin);
  if ( Robot::sendProto<proto::McoinExchangeHcoinReq,proto::McoinExchangeHcoinRsp>(
         this,
         (proto::McoinExchangeHcoinReq *)(v3 + 32),
         (proto::McoinExchangeHcoinRsp *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "mcoinExchangeHcoin",
      3187);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v9, (const char (*)[16])"sendProto fails");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v6 = -1;
  }
  else
  {
    v6 = proto::McoinExchangeHcoinRsp::retcode((const proto::McoinExchangeHcoinRsp *const)(v3 + 96));
  }
  proto::McoinExchangeHcoinRsp::~McoinExchangeHcoinRsp((proto::McoinExchangeHcoinRsp *const)(v3 + 96));
  proto::McoinExchangeHcoinReq::~McoinExchangeHcoinReq((proto::McoinExchangeHcoinReq *const)(v3 + 32));
  result = v6;
  if ( v10 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 3194: range 000000000045FC28-000000000045FE85
int32_t __cdecl Robot::getCityReputationInfo(Robot *const this, uint32_t city_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int32_t v5; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-110h] BYREF
  char v8[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 24 8 req:3195 112 40 8 rsp:3196";
  *(_QWORD *)(v2 + 16) = Robot::getCityReputationInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  proto::GetCityReputationInfoReq::GetCityReputationInfoReq((proto::GetCityReputationInfoReq *const)(v2 + 48));
  proto::GetCityReputationInfoRsp::GetCityReputationInfoRsp((proto::GetCityReputationInfoRsp *const)(v2 + 112));
  proto::GetCityReputationInfoReq::set_city_id((proto::GetCityReputationInfoReq *const)(v2 + 48), city_id);
  if ( Robot::sendProto<proto::GetCityReputationInfoReq,proto::GetCityReputationInfoRsp>(
         this,
         (proto::GetCityReputationInfoReq *)(v2 + 48),
         (proto::GetCityReputationInfoRsp *)(v2 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getCityReputationInfo",
      3200);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v7, (const char (*)[16])"sendProto fails");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = -1;
  }
  else
  {
    v5 = proto::GetCityReputationInfoRsp::retcode((const proto::GetCityReputationInfoRsp *const)(v2 + 112));
  }
  proto::GetCityReputationInfoRsp::~GetCityReputationInfoRsp((proto::GetCityReputationInfoRsp *const)(v2 + 112));
  proto::GetCityReputationInfoReq::~GetCityReputationInfoReq((proto::GetCityReputationInfoReq *const)(v2 + 48));
  result = v5;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3207: range 000000000045FE86-00000000004600F3
int32_t __cdecl Robot::takeCityReputationLevelReward(Robot *const this, uint32_t city_id, uint32_t level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-110h] BYREF
  char v10[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 8 req:3208 96 56 8 rsp:3209";
  *(_QWORD *)(v3 + 16) = Robot::takeCityReputationLevelReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  proto::TakeCityReputationLevelRewardReq::TakeCityReputationLevelRewardReq((proto::TakeCityReputationLevelRewardReq *const)(v3 + 32));
  proto::TakeCityReputationLevelRewardRsp::TakeCityReputationLevelRewardRsp((proto::TakeCityReputationLevelRewardRsp *const)(v3 + 96));
  proto::TakeCityReputationLevelRewardReq::set_city_id(
    (proto::TakeCityReputationLevelRewardReq *const)(v3 + 32),
    city_id);
  proto::TakeCityReputationLevelRewardReq::set_level((proto::TakeCityReputationLevelRewardReq *const)(v3 + 32), level);
  if ( Robot::sendProto<proto::TakeCityReputationLevelRewardReq,proto::TakeCityReputationLevelRewardRsp>(
         this,
         (proto::TakeCityReputationLevelRewardReq *)(v3 + 32),
         (proto::TakeCityReputationLevelRewardRsp *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "takeCityReputationLevelReward",
      3214);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v9, (const char (*)[16])"sendProto fails");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v6 = -1;
  }
  else
  {
    v6 = proto::TakeCityReputationLevelRewardRsp::retcode((const proto::TakeCityReputationLevelRewardRsp *const)(v3 + 96));
  }
  proto::TakeCityReputationLevelRewardRsp::~TakeCityReputationLevelRewardRsp((proto::TakeCityReputationLevelRewardRsp *const)(v3 + 96));
  proto::TakeCityReputationLevelRewardReq::~TakeCityReputationLevelRewardReq((proto::TakeCityReputationLevelRewardReq *const)(v3 + 32));
  result = v6;
  if ( v10 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3221: range 00000000004600F4-000000000046051A
int32_t __cdecl Robot::takeCityReputationParentQuest(
        Robot *const this,
        uint32_t city_id,
        const luabind::adl::object *parent_quest_list)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rax
  google::protobuf::uint32 *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-188h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-180h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-178h]
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-170h] BYREF
  char v15[336]; // [rsp+60h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 24 21 parent_quest_vec:3222 96 48 8 req:3228 176 80 8 rsp:3229";
  *(_QWORD *)(v3 + 16) = Robot::takeCityReputationParentQuest;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862728] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 32));
  if ( ScriptUtil::getTableValueAsVector<unsigned int>(
         &ScriptUtil::no_exception_instance,
         parent_quest_list,
         (std::vector<unsigned int> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "takeCityReputationParentQuest",
      3225);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v14,
      (const char (*)[28])"getTableValueAsVector fails");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    proto::TakeCityReputationParentQuestReq::TakeCityReputationParentQuestReq((proto::TakeCityReputationParentQuestReq *const)(v3 + 96));
    proto::TakeCityReputationParentQuestRsp::TakeCityReputationParentQuestRsp((proto::TakeCityReputationParentQuestRsp *const)(v3 + 176));
    proto::TakeCityReputationParentQuestReq::set_city_id(
      (proto::TakeCityReputationParentQuestReq *const)(v3 + 96),
      city_id);
    __for_range = (std::vector<unsigned int> *)(v3 + 32);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 32))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 32))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      proto::TakeCityReputationParentQuestReq::add_parent_quest_list(
        (proto::TakeCityReputationParentQuestReq *const)(v3 + 96),
        *v8);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( Robot::sendProto<proto::TakeCityReputationParentQuestReq,proto::TakeCityReputationParentQuestRsp>(
           this,
           (proto::TakeCityReputationParentQuestReq *)(v3 + 96),
           (proto::TakeCityReputationParentQuestRsp *)(v3 + 176)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "takeCityReputationParentQuest",
        3237);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v14, (const char (*)[16])"sendProto fails");
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = -1;
    }
    else
    {
      v6 = proto::TakeCityReputationParentQuestRsp::retcode((const proto::TakeCityReputationParentQuestRsp *const)(v3 + 176));
    }
    proto::TakeCityReputationParentQuestRsp::~TakeCityReputationParentQuestRsp((proto::TakeCityReputationParentQuestRsp *const)(v3 + 176));
    proto::TakeCityReputationParentQuestReq::~TakeCityReputationParentQuestReq((proto::TakeCityReputationParentQuestReq *const)(v3 + 96));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 32));
  result = v6;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 3244: range 000000000046051C-000000000046075B
int32_t __cdecl Robot::acceptCityReputationRequest(Robot *const this, uint32_t city_id, uint32_t request_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-F0h] BYREF
  char v10[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 8 req:3245 96 32 8 rsp:3246";
  *(_QWORD *)(v3 + 16) = Robot::acceptCityReputationRequest;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  proto::AcceptCityReputationRequestReq::AcceptCityReputationRequestReq((proto::AcceptCityReputationRequestReq *const)(v3 + 32));
  proto::AcceptCityReputationRequestRsp::AcceptCityReputationRequestRsp((proto::AcceptCityReputationRequestRsp *const)(v3 + 96));
  proto::AcceptCityReputationRequestReq::set_city_id((proto::AcceptCityReputationRequestReq *const)(v3 + 32), city_id);
  proto::AcceptCityReputationRequestReq::set_request_id(
    (proto::AcceptCityReputationRequestReq *const)(v3 + 32),
    request_id);
  if ( Robot::sendProto<proto::AcceptCityReputationRequestReq,proto::AcceptCityReputationRequestRsp>(
         this,
         (proto::AcceptCityReputationRequestReq *)(v3 + 32),
         (proto::AcceptCityReputationRequestRsp *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "acceptCityReputationRequest",
      3251);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v9, (const char (*)[16])"sendProto fails");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v6 = -1;
  }
  else
  {
    v6 = proto::AcceptCityReputationRequestRsp::retcode((const proto::AcceptCityReputationRequestRsp *const)(v3 + 96));
  }
  proto::AcceptCityReputationRequestRsp::~AcceptCityReputationRequestRsp((proto::AcceptCityReputationRequestRsp *const)(v3 + 96));
  proto::AcceptCityReputationRequestReq::~AcceptCityReputationRequestReq((proto::AcceptCityReputationRequestReq *const)(v3 + 32));
  result = v6;
  if ( v10 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 3258: range 000000000046075C-000000000046099B
int32_t __cdecl Robot::cancelCityReputationRequest(Robot *const this, uint32_t city_id, uint32_t request_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-F0h] BYREF
  char v10[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 8 req:3259 96 32 8 rsp:3260";
  *(_QWORD *)(v3 + 16) = Robot::cancelCityReputationRequest;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  proto::CancelCityReputationRequestReq::CancelCityReputationRequestReq((proto::CancelCityReputationRequestReq *const)(v3 + 32));
  proto::CancelCityReputationRequestRsp::CancelCityReputationRequestRsp((proto::CancelCityReputationRequestRsp *const)(v3 + 96));
  proto::CancelCityReputationRequestReq::set_city_id((proto::CancelCityReputationRequestReq *const)(v3 + 32), city_id);
  proto::CancelCityReputationRequestReq::set_request_id(
    (proto::CancelCityReputationRequestReq *const)(v3 + 32),
    request_id);
  if ( Robot::sendProto<proto::CancelCityReputationRequestReq,proto::CancelCityReputationRequestRsp>(
         this,
         (proto::CancelCityReputationRequestReq *)(v3 + 32),
         (proto::CancelCityReputationRequestRsp *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "cancelCityReputationRequest",
      3265);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v9, (const char (*)[16])"sendProto fails");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v6 = -1;
  }
  else
  {
    v6 = proto::CancelCityReputationRequestRsp::retcode((const proto::CancelCityReputationRequestRsp *const)(v3 + 96));
  }
  proto::CancelCityReputationRequestRsp::~CancelCityReputationRequestRsp((proto::CancelCityReputationRequestRsp *const)(v3 + 96));
  proto::CancelCityReputationRequestReq::~CancelCityReputationRequestReq((proto::CancelCityReputationRequestReq *const)(v3 + 32));
  result = v6;
  if ( v10 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 3272: range 000000000046099C-0000000000460BDF
int32_t __cdecl Robot::getCityReputationMapInfo(Robot *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  int32_t v4; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-130h] BYREF
  char v7[272]; // [rsp+30h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 24 8 req:3273 112 72 8 rsp:3274";
  *(_QWORD *)(v1 + 16) = Robot::getCityReputationMapInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218959360;
  v3[536862723] = 62194;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  proto::GetCityReputationMapInfoReq::GetCityReputationMapInfoReq((proto::GetCityReputationMapInfoReq *const)(v1 + 48));
  proto::GetCityReputationMapInfoRsp::GetCityReputationMapInfoRsp((proto::GetCityReputationMapInfoRsp *const)(v1 + 112));
  if ( Robot::sendProto<proto::GetCityReputationMapInfoReq,proto::GetCityReputationMapInfoRsp>(
         this,
         (proto::GetCityReputationMapInfoReq *)(v1 + 48),
         (proto::GetCityReputationMapInfoRsp *)(v1 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getCityReputationMapInfo",
      3277);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v6, (const char (*)[16])"sendProto fails");
    common::milog::MiLogStream::~MiLogStream(&v6);
    v4 = -1;
  }
  else
  {
    v4 = proto::GetCityReputationMapInfoRsp::retcode((const proto::GetCityReputationMapInfoRsp *const)(v1 + 112));
  }
  proto::GetCityReputationMapInfoRsp::~GetCityReputationMapInfoRsp((proto::GetCityReputationMapInfoRsp *const)(v1 + 112));
  proto::GetCityReputationMapInfoReq::~GetCityReputationMapInfoReq((proto::GetCityReputationMapInfoReq *const)(v1 + 48));
  result = v4;
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 3284: range 0000000000460BE0-0000000000461006
int32_t __cdecl Robot::takeCityReputationExploreReward(
        Robot *const this,
        uint32_t city_id,
        const luabind::adl::object *explore_list)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rax
  google::protobuf::uint32 *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-188h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-180h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-178h]
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-170h] BYREF
  char v15[336]; // [rsp+60h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 24 19 explore_id_vec:3285 96 48 8 req:3292 176 80 8 rsp:3293";
  *(_QWORD *)(v3 + 16) = Robot::takeCityReputationExploreReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862728] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 32));
  if ( ScriptUtil::getTableValueAsVector<unsigned int>(
         &ScriptUtil::no_exception_instance,
         explore_list,
         (std::vector<unsigned int> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "takeCityReputationExploreReward",
      3288);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v14,
      (const char (*)[28])"getTableValueAsVector fails");
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    proto::TakeCityReputationExploreRewardReq::TakeCityReputationExploreRewardReq((proto::TakeCityReputationExploreRewardReq *const)(v3 + 96));
    proto::TakeCityReputationExploreRewardRsp::TakeCityReputationExploreRewardRsp((proto::TakeCityReputationExploreRewardRsp *const)(v3 + 176));
    proto::TakeCityReputationExploreRewardReq::set_city_id(
      (proto::TakeCityReputationExploreRewardReq *const)(v3 + 96),
      city_id);
    __for_range = (std::vector<unsigned int> *)(v3 + 32);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 32))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 32))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      proto::TakeCityReputationExploreRewardReq::add_explore_id_list(
        (proto::TakeCityReputationExploreRewardReq *const)(v3 + 96),
        *v8);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( Robot::sendProto<proto::TakeCityReputationExploreRewardReq,proto::TakeCityReputationExploreRewardRsp>(
           this,
           (proto::TakeCityReputationExploreRewardReq *)(v3 + 96),
           (proto::TakeCityReputationExploreRewardRsp *)(v3 + 176)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "takeCityReputationExploreReward",
        3301);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v14, (const char (*)[16])"sendProto fails");
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = -1;
    }
    else
    {
      v6 = proto::TakeCityReputationExploreRewardRsp::retcode((const proto::TakeCityReputationExploreRewardRsp *const)(v3 + 176));
    }
    proto::TakeCityReputationExploreRewardRsp::~TakeCityReputationExploreRewardRsp((proto::TakeCityReputationExploreRewardRsp *const)(v3 + 176));
    proto::TakeCityReputationExploreRewardReq::~TakeCityReputationExploreRewardReq((proto::TakeCityReputationExploreRewardReq *const)(v3 + 96));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 32));
  result = v6;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 3308: range 0000000000461008-000000000046125A
int32_t __cdecl Robot::playerOffering(Robot *const this, uint32_t offering_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int32_t v5; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-110h] BYREF
  char v8[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 8 req:3309 96 56 8 rsp:3310";
  *(_QWORD *)(v2 + 16) = Robot::playerOffering;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  proto::PlayerOfferingReq::PlayerOfferingReq((proto::PlayerOfferingReq *const)(v2 + 32));
  proto::PlayerOfferingRsp::PlayerOfferingRsp((proto::PlayerOfferingRsp *const)(v2 + 96));
  proto::PlayerOfferingReq::set_offering_id((proto::PlayerOfferingReq *const)(v2 + 32), offering_id);
  if ( Robot::sendProto<proto::PlayerOfferingReq,proto::PlayerOfferingRsp>(
         this,
         (proto::PlayerOfferingReq *)(v2 + 32),
         (proto::PlayerOfferingRsp *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "playerOffering",
      3314);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v7, (const char (*)[16])"sendProto fails");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = -1;
  }
  else
  {
    v5 = proto::PlayerOfferingRsp::retcode((const proto::PlayerOfferingRsp *const)(v2 + 96));
  }
  proto::PlayerOfferingRsp::~PlayerOfferingRsp((proto::PlayerOfferingRsp *const)(v2 + 96));
  proto::PlayerOfferingReq::~PlayerOfferingReq((proto::PlayerOfferingReq *const)(v2 + 32));
  result = v5;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3321: range 000000000046125C-00000000004614C9
int32_t __cdecl Robot::takeOfferingLevelReward(Robot *const this, uint32_t offering_id, uint32_t level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-110h] BYREF
  char v10[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 8 req:3322 96 56 8 rsp:3323";
  *(_QWORD *)(v3 + 16) = Robot::takeOfferingLevelReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  proto::TakeOfferingLevelRewardReq::TakeOfferingLevelRewardReq((proto::TakeOfferingLevelRewardReq *const)(v3 + 32));
  proto::TakeOfferingLevelRewardRsp::TakeOfferingLevelRewardRsp((proto::TakeOfferingLevelRewardRsp *const)(v3 + 96));
  proto::TakeOfferingLevelRewardReq::set_offering_id((proto::TakeOfferingLevelRewardReq *const)(v3 + 32), offering_id);
  proto::TakeOfferingLevelRewardReq::set_level((proto::TakeOfferingLevelRewardReq *const)(v3 + 32), level);
  if ( Robot::sendProto<proto::TakeOfferingLevelRewardReq,proto::TakeOfferingLevelRewardRsp>(
         this,
         (proto::TakeOfferingLevelRewardReq *)(v3 + 32),
         (proto::TakeOfferingLevelRewardRsp *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "takeOfferingLevelReward",
      3328);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v9, (const char (*)[16])"sendProto fails");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v6 = -1;
  }
  else
  {
    v6 = proto::TakeOfferingLevelRewardRsp::retcode((const proto::TakeOfferingLevelRewardRsp *const)(v3 + 96));
  }
  proto::TakeOfferingLevelRewardRsp::~TakeOfferingLevelRewardRsp((proto::TakeOfferingLevelRewardRsp *const)(v3 + 96));
  proto::TakeOfferingLevelRewardReq::~TakeOfferingLevelRewardReq((proto::TakeOfferingLevelRewardReq *const)(v3 + 32));
  result = v6;
  if ( v10 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3335: range 00000000004614CA-0000000000461750
int32_t __cdecl Robot::attachAvatarWidget(Robot *const this, uint32_t material_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int32_t v5; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-130h] BYREF
  char v8[272]; // [rsp+30h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 48 8 req:3336 128 56 8 rsp:3337";
  *(_QWORD *)(v2 + 16) = Robot::attachAvatarWidget;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  proto::SetWidgetSlotReq::SetWidgetSlotReq((proto::SetWidgetSlotReq *const)(v2 + 48));
  proto::SetWidgetSlotRsp::SetWidgetSlotRsp((proto::SetWidgetSlotRsp *const)(v2 + 128));
  proto::SetWidgetSlotReq::set_op((proto::SetWidgetSlotReq *const)(v2 + 48), WIDGET_SLOT_OP_ATTACH);
  proto::SetWidgetSlotReq::add_tag_list((proto::SetWidgetSlotReq *const)(v2 + 48), WIDGET_SLOT_ATTACH_AVATAR);
  proto::SetWidgetSlotReq::set_material_id((proto::SetWidgetSlotReq *const)(v2 + 48), material_id);
  if ( Robot::sendProto<proto::SetWidgetSlotReq,proto::SetWidgetSlotRsp>(
         this,
         (proto::SetWidgetSlotReq *)(v2 + 48),
         (proto::SetWidgetSlotRsp *)(v2 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "attachAvatarWidget",
      3343);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v7, (const char (*)[16])"sendProto fails");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = -1;
  }
  else
  {
    v5 = proto::SetWidgetSlotRsp::retcode((const proto::SetWidgetSlotRsp *const)(v2 + 128));
  }
  proto::SetWidgetSlotRsp::~SetWidgetSlotRsp((proto::SetWidgetSlotRsp *const)(v2 + 128));
  proto::SetWidgetSlotReq::~SetWidgetSlotReq((proto::SetWidgetSlotReq *const)(v2 + 48));
  result = v5;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 3350: range 0000000000461752-00000000004619D8
int32_t __cdecl Robot::dettachAvatarWidget(Robot *const this, uint32_t material_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int32_t v5; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-130h] BYREF
  char v8[272]; // [rsp+30h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 48 8 req:3351 128 56 8 rsp:3352";
  *(_QWORD *)(v2 + 16) = Robot::dettachAvatarWidget;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  proto::SetWidgetSlotReq::SetWidgetSlotReq((proto::SetWidgetSlotReq *const)(v2 + 48));
  proto::SetWidgetSlotRsp::SetWidgetSlotRsp((proto::SetWidgetSlotRsp *const)(v2 + 128));
  proto::SetWidgetSlotReq::set_op((proto::SetWidgetSlotReq *const)(v2 + 48), WIDGET_SLOT_OP_DETACH);
  proto::SetWidgetSlotReq::add_tag_list((proto::SetWidgetSlotReq *const)(v2 + 48), WIDGET_SLOT_ATTACH_AVATAR);
  proto::SetWidgetSlotReq::set_material_id((proto::SetWidgetSlotReq *const)(v2 + 48), material_id);
  if ( Robot::sendProto<proto::SetWidgetSlotReq,proto::SetWidgetSlotRsp>(
         this,
         (proto::SetWidgetSlotReq *)(v2 + 48),
         (proto::SetWidgetSlotRsp *)(v2 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "dettachAvatarWidget",
      3358);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v7, (const char (*)[16])"sendProto fails");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = -1;
  }
  else
  {
    v5 = proto::SetWidgetSlotRsp::retcode((const proto::SetWidgetSlotRsp *const)(v2 + 128));
  }
  proto::SetWidgetSlotRsp::~SetWidgetSlotRsp((proto::SetWidgetSlotRsp *const)(v2 + 128));
  proto::SetWidgetSlotReq::~SetWidgetSlotReq((proto::SetWidgetSlotReq *const)(v2 + 48));
  result = v5;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 3365: range 00000000004619DA-0000000000461A0C
uint32_t __cdecl Robot::getEntityIdByGroupIdConfigId(Robot *const this, uint32_t group_id, uint32_t config_id)
{
  Scene *Scene; // rax

  Scene = Robot::getScene(this);
  return Scene::getEntityIdByGroupIdConfigId(Scene, group_id, config_id);
};

// Line 3370: range 0000000000461A0E-0000000000461A34
int32_t __cdecl Robot::printEntityGroupIdConfigIdUnionKeyMap(Robot *const this)
{
  Scene *Scene; // rax

  Scene = Robot::getScene(this);
  Scene::printEntityGroupIdConfigIdUnionKeyMap(Scene);
  return 0;
};

// Line 3376: range 0000000000461A36-0000000000461EB4
int32_t __cdecl Robot::validateAppearEntityList(
        Robot *const this,
        const luabind::adl::object *param_table,
        uint32_t expected_avatar_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  bool v7; // r14
  Scene *Scene; // rax
  int32_t result; // eax
  const char (*v10)[10]; // [rsp+0h] [rbp-180h]
  unsigned int *v11; // [rsp+8h] [rbp-178h]
  std::allocator<char> __a; // [rsp+2Fh] [rbp-151h] BYREF
  std::vector<luabind::adl::object>::iterator __for_begin; // [rsp+30h] [rbp-150h] BYREF
  std::vector<luabind::adl::object>::iterator __for_end; // [rsp+38h] [rbp-148h] BYREF
  std::vector<luabind::adl::object> *__for_range; // [rsp+40h] [rbp-140h]
  luabind::adl::object *key; // [rsp+48h] [rbp-138h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-130h] BYREF
  char v18[272]; // [rsp+70h] [rbp-110h] BYREF

  HIDWORD(v11) = expected_avatar_id;
  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 8 14 union_key:3386 80 24 12 key_vec:3378 144 48 17 expected_set:3377";
  *(_QWORD *)(v3 + 16) = Robot::validateAppearEntityList;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862723] = -218959360;
  v5[536862724] = 62194;
  v5[536862726] = -202116109;
  std::set<EntityGroupIdConfigIdUnionKey>::set((std::set<EntityGroupIdConfigIdUnionKey> *const)(v3 + 144));
  std::vector<luabind::adl::object>::vector((std::vector<luabind::adl::object> *const)(v3 + 80));
  if ( ScriptUtil::getTableValueAsVector<luabind::adl::object>(
         &ScriptUtil::no_exception_instance,
         param_table,
         (std::vector<luabind::adl::object> *)(v3 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "validateAppearEntityList",
      3381);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v17,
      (const char (*)[28])"getTableValueAsVector fails");
    common::milog::MiLogStream::~MiLogStream(&v17);
    v6 = -1;
  }
  else
  {
    __for_range = (std::vector<luabind::adl::object> *)(v3 + 80);
    __for_begin._M_current = std::vector<luabind::adl::object>::begin((std::vector<luabind::adl::object> *const)(v3 + 80))._M_current;
    __for_end._M_current = std::vector<luabind::adl::object>::end((std::vector<luabind::adl::object> *const)(v3 + 80))._M_current;
    while ( __gnu_cxx::operator!=<luabind::adl::object *,std::vector<luabind::adl::object>>(&__for_begin, &__for_end) )
    {
      key = __gnu_cxx::__normal_iterator<luabind::adl::object *,std::vector<luabind::adl::object>>::operator*(&__for_begin);
      *(_DWORD *)(v3 + 48) = 0;
      *(_DWORD *)(v3 + 52) = 0;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v17, "group_id", &__a);
      v7 = ScriptUtil::getTableValue<unsigned int,char const(&)[10],unsigned int &>(
             &ScriptUtil::has_exception_instance,
             key,
             (const std::string *)&v17,
             (unsigned int *)(v3 + 48),
             (const char (*)[10])"config_id",
             (unsigned int *)(v3 + 52),
             v10,
             v11) != 0;
      std::string::~string((std::string *const)&v17);
      std::allocator<char>::~allocator(&__a);
      if ( v7 )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/operation/robot_op.cpp",
          "validateAppearEntityList",
          3389);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          &v17,
          (const char (*)[32])"Not found group_id or config_id");
        common::milog::MiLogStream::~MiLogStream(&v17);
        v6 = -1;
        goto LABEL_12;
      }
      std::set<EntityGroupIdConfigIdUnionKey>::insert(
        (std::set<EntityGroupIdConfigIdUnionKey> *const)(v3 + 144),
        (const std::set<EntityGroupIdConfigIdUnionKey>::value_type *)(v3 + 48));
      __gnu_cxx::__normal_iterator<luabind::adl::object *,std::vector<luabind::adl::object>>::operator++(&__for_begin);
    }
    Scene = Robot::getScene(this);
    v6 = Scene::validateAppearEntityList(Scene, (std::set<EntityGroupIdConfigIdUnionKey> *)(v3 + 144), HIDWORD(v11));
  }
LABEL_12:
  std::vector<luabind::adl::object>::~vector((std::vector<luabind::adl::object> *const)(v3 + 80));
  std::set<EntityGroupIdConfigIdUnionKey>::~set((std::set<EntityGroupIdConfigIdUnionKey> *const)(v3 + 144));
  result = v6;
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 3398: range 0000000000461EB6-00000000004620F5
int32_t __cdecl Robot::mechanicusUnlockGear(Robot *const this, uint32_t mechanicus_id, uint32_t gear_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-F0h] BYREF
  char v10[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 8 req:3399 96 32 8 rsp:3400";
  *(_QWORD *)(v3 + 16) = Robot::mechanicusUnlockGear;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  proto::MechanicusUnlockGearReq::MechanicusUnlockGearReq((proto::MechanicusUnlockGearReq *const)(v3 + 32));
  proto::MechanicusUnlockGearRsp::MechanicusUnlockGearRsp((proto::MechanicusUnlockGearRsp *const)(v3 + 96));
  proto::MechanicusUnlockGearReq::set_mechanicus_id((proto::MechanicusUnlockGearReq *const)(v3 + 32), mechanicus_id);
  proto::MechanicusUnlockGearReq::set_gear_id((proto::MechanicusUnlockGearReq *const)(v3 + 32), gear_id);
  if ( Robot::sendProto<proto::MechanicusUnlockGearReq,proto::MechanicusUnlockGearRsp>(
         this,
         (proto::MechanicusUnlockGearReq *)(v3 + 32),
         (proto::MechanicusUnlockGearRsp *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "mechanicusUnlockGear",
      3405);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v9, (const char (*)[16])"sendProto fails");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v6 = -1;
  }
  else
  {
    v6 = proto::MechanicusUnlockGearRsp::retcode((const proto::MechanicusUnlockGearRsp *const)(v3 + 96));
  }
  proto::MechanicusUnlockGearRsp::~MechanicusUnlockGearRsp((proto::MechanicusUnlockGearRsp *const)(v3 + 96));
  proto::MechanicusUnlockGearReq::~MechanicusUnlockGearReq((proto::MechanicusUnlockGearReq *const)(v3 + 32));
  result = v6;
  if ( v10 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 3412: range 00000000004620F6-0000000000462371
int32_t __cdecl Robot::mechanicusLevelupGear(Robot *const this, uint32_t mechanicus_id, uint32_t gear_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  int32_t v6; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-110h] BYREF
  char v10[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 32 8 req:3413 112 40 8 rsp:3414";
  *(_QWORD *)(v3 + 16) = Robot::mechanicusLevelupGear;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  proto::MechanicusLevelupGearReq::MechanicusLevelupGearReq((proto::MechanicusLevelupGearReq *const)(v3 + 48));
  proto::MechanicusLevelupGearRsp::MechanicusLevelupGearRsp((proto::MechanicusLevelupGearRsp *const)(v3 + 112));
  proto::MechanicusLevelupGearReq::set_mechanicus_id((proto::MechanicusLevelupGearReq *const)(v3 + 48), mechanicus_id);
  proto::MechanicusLevelupGearReq::set_gear_id((proto::MechanicusLevelupGearReq *const)(v3 + 48), gear_id);
  if ( Robot::sendProto<proto::MechanicusLevelupGearReq,proto::MechanicusLevelupGearRsp>(
         this,
         (proto::MechanicusLevelupGearReq *)(v3 + 48),
         (proto::MechanicusLevelupGearRsp *)(v3 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "mechanicusLevelupGear",
      3419);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v9, (const char (*)[16])"sendProto fails");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v6 = -1;
  }
  else
  {
    v6 = proto::MechanicusLevelupGearRsp::retcode((const proto::MechanicusLevelupGearRsp *const)(v3 + 112));
  }
  proto::MechanicusLevelupGearRsp::~MechanicusLevelupGearRsp((proto::MechanicusLevelupGearRsp *const)(v3 + 112));
  proto::MechanicusLevelupGearReq::~MechanicusLevelupGearReq((proto::MechanicusLevelupGearReq *const)(v3 + 48));
  result = v6;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3426: range 0000000000462372-00000000004625CF
int32_t __cdecl Robot::mechanicusEnterDungeon(Robot *const this, uint32_t difficult_level)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int32_t v5; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-110h] BYREF
  char v8[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 24 8 req:3427 112 40 8 rsp:3428";
  *(_QWORD *)(v2 + 16) = Robot::mechanicusEnterDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  proto::EnterMechanicusDungeonReq::EnterMechanicusDungeonReq((proto::EnterMechanicusDungeonReq *const)(v2 + 48));
  proto::EnterMechanicusDungeonRsp::EnterMechanicusDungeonRsp((proto::EnterMechanicusDungeonRsp *const)(v2 + 112));
  proto::EnterMechanicusDungeonReq::set_difficult_level(
    (proto::EnterMechanicusDungeonReq *const)(v2 + 48),
    difficult_level);
  if ( Robot::sendProto<proto::EnterMechanicusDungeonReq,proto::EnterMechanicusDungeonRsp>(
         this,
         (proto::EnterMechanicusDungeonReq *)(v2 + 48),
         (proto::EnterMechanicusDungeonRsp *)(v2 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "mechanicusEnterDungeon",
      3432);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v7, (const char (*)[16])"sendProto fails");
    common::milog::MiLogStream::~MiLogStream(&v7);
    v5 = -1;
  }
  else
  {
    v5 = proto::EnterMechanicusDungeonRsp::retcode((const proto::EnterMechanicusDungeonRsp *const)(v2 + 112));
  }
  proto::EnterMechanicusDungeonRsp::~EnterMechanicusDungeonRsp((proto::EnterMechanicusDungeonRsp *const)(v2 + 112));
  proto::EnterMechanicusDungeonReq::~EnterMechanicusDungeonReq((proto::EnterMechanicusDungeonReq *const)(v2 + 48));
  result = v5;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3439: range 00000000004625D0-000000000046280F
int32_t __cdecl Robot::adjustWorldLevel(Robot *const this, uint32_t world_level, uint32_t expect_world_level)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-F0h] BYREF
  char v10[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 8 req:3440 96 32 8 rsp:3441";
  *(_QWORD *)(v3 + 16) = Robot::adjustWorldLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  proto::AdjustWorldLevelReq::AdjustWorldLevelReq((proto::AdjustWorldLevelReq *const)(v3 + 32));
  proto::AdjustWorldLevelRsp::AdjustWorldLevelRsp((proto::AdjustWorldLevelRsp *const)(v3 + 96));
  proto::AdjustWorldLevelReq::set_cur_world_level((proto::AdjustWorldLevelReq *const)(v3 + 32), world_level);
  proto::AdjustWorldLevelReq::set_expect_world_level((proto::AdjustWorldLevelReq *const)(v3 + 32), expect_world_level);
  if ( Robot::sendProto<proto::AdjustWorldLevelReq,proto::AdjustWorldLevelRsp>(
         this,
         (proto::AdjustWorldLevelReq *)(v3 + 32),
         (proto::AdjustWorldLevelRsp *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "adjustWorldLevel",
      3446);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v9, (const char (*)[16])"sendProto fails");
    common::milog::MiLogStream::~MiLogStream(&v9);
    v6 = -1;
  }
  else
  {
    v6 = proto::AdjustWorldLevelRsp::retcode((const proto::AdjustWorldLevelRsp *const)(v3 + 96));
  }
  proto::AdjustWorldLevelRsp::~AdjustWorldLevelRsp((proto::AdjustWorldLevelRsp *const)(v3 + 96));
  proto::AdjustWorldLevelReq::~AdjustWorldLevelReq((proto::AdjustWorldLevelReq *const)(v3 + 32));
  result = v6;
  if ( v10 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 3452: range 0000000000462810-0000000000462B16
int32_t __cdecl Robot::backMyWorld(Robot *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  int32_t v9; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-130h] BYREF
  std::string val; // [rsp+30h] [rbp-110h] BYREF
  std::string output; // [rsp+50h] [rbp-F0h] BYREF
  char v14[208]; // [rsp+70h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 24 8 req:3453 96 24 8 rsp:3454";
  *(_QWORD *)(v1 + 16) = Robot::backMyWorld;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  proto::BackMyWorldReq::BackMyWorldReq((proto::BackMyWorldReq *const)(v1 + 32));
  proto::BackMyWorldRsp::BackMyWorldRsp((proto::BackMyWorldRsp *const)(v1 + 96));
  if ( Robot::sendProto<proto::BackMyWorldReq,proto::BackMyWorldRsp>(
         this,
         (proto::BackMyWorldReq *)(v1 + 32),
         (proto::BackMyWorldRsp *)(v1 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "backMyWorld",
      3457);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v11, (const char (*)[16])"sendProto fails");
    v5 = operator<<(v4, &this->player_);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v5, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v1 + 32));
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" rsp:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&output, (google::protobuf::Message *)(v1 + 96));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &output);
    std::string::~string(&output);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v9 = -1;
  }
  else
  {
    v9 = proto::BackMyWorldRsp::retcode((const proto::BackMyWorldRsp *const)(v1 + 96));
  }
  proto::BackMyWorldRsp::~BackMyWorldRsp((proto::BackMyWorldRsp *const)(v1 + 96));
  proto::BackMyWorldReq::~BackMyWorldReq((proto::BackMyWorldReq *const)(v1 + 32));
  result = v9;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 3464: range 0000000000462B18-0000000000462E50
int32_t __cdecl Robot::tryEnterHome(Robot *const this, uint32_t target_uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t v10; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-150h] BYREF
  std::string val; // [rsp+30h] [rbp-130h] BYREF
  std::string output; // [rsp+50h] [rbp-110h] BYREF
  char v15[240]; // [rsp+70h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 8 req:3465 112 48 8 rsp:3466";
  *(_QWORD *)(v2 + 16) = Robot::tryEnterHome;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  proto::TryEnterHomeReq::TryEnterHomeReq((proto::TryEnterHomeReq *const)(v2 + 48));
  proto::TryEnterHomeRsp::TryEnterHomeRsp((proto::TryEnterHomeRsp *const)(v2 + 112));
  proto::TryEnterHomeReq::set_target_uid((proto::TryEnterHomeReq *const)(v2 + 48), target_uid);
  if ( Robot::sendProto<proto::TryEnterHomeReq,proto::TryEnterHomeRsp>(
         this,
         (proto::TryEnterHomeReq *)(v2 + 48),
         (proto::TryEnterHomeRsp *)(v2 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "tryEnterHome",
      3470);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v12, (const char (*)[16])"sendProto fails");
    v6 = operator<<(v5, &this->player_);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v2 + 48));
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" rsp:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&output, (google::protobuf::Message *)(v2 + 112));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &output);
    std::string::~string(&output);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v10 = -1;
  }
  else
  {
    v10 = proto::TryEnterHomeRsp::retcode((const proto::TryEnterHomeRsp *const)(v2 + 112));
  }
  proto::TryEnterHomeRsp::~TryEnterHomeRsp((proto::TryEnterHomeRsp *const)(v2 + 112));
  proto::TryEnterHomeReq::~TryEnterHomeReq((proto::TryEnterHomeReq *const)(v2 + 48));
  result = v10;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3477: range 0000000000462E52-0000000000463083
int32_t __cdecl Robot::sendHomeGetBasicInfoReq(Robot *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-D0h] BYREF
  std::string val; // [rsp+30h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 8 req:3478";
  *(_QWORD *)(v1 + 16) = Robot::sendHomeGetBasicInfoReq;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  proto::HomeGetBasicInfoReq::HomeGetBasicInfoReq((proto::HomeGetBasicInfoReq *const)(v1 + 32));
  if ( Robot::sendProto<proto::HomeGetBasicInfoReq>(this, (proto::HomeGetBasicInfoReq *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "sendHomeGetBasicInfoReq",
      3481);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v9, (const char (*)[16])"sendProto fails");
    v5 = operator<<(v4, &this->player_);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v5, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v1 + 32));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v9);
    v7 = -1;
  }
  else
  {
    v7 = 0;
  }
  proto::HomeGetBasicInfoReq::~HomeGetBasicInfoReq((proto::HomeGetBasicInfoReq *const)(v1 + 32));
  result = v7;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 3488: range 0000000000463084-000000000046339B
int32_t __cdecl Robot::changeHomeEditMode(Robot *const this, bool is_enter_edit_mode)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t v10; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-130h] BYREF
  std::string val; // [rsp+30h] [rbp-110h] BYREF
  std::string output; // [rsp+50h] [rbp-F0h] BYREF
  char v15[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 8 req:3489 96 32 8 rsp:3490";
  *(_QWORD *)(v2 + 16) = Robot::changeHomeEditMode;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  proto::HomeChangeEditModeReq::HomeChangeEditModeReq((proto::HomeChangeEditModeReq *const)(v2 + 32));
  proto::HomeChangeEditModeRsp::HomeChangeEditModeRsp((proto::HomeChangeEditModeRsp *const)(v2 + 96));
  proto::HomeChangeEditModeReq::set_is_enter_edit_mode(
    (proto::HomeChangeEditModeReq *const)(v2 + 32),
    is_enter_edit_mode);
  if ( Robot::sendProto<proto::HomeChangeEditModeReq,proto::HomeChangeEditModeRsp>(
         this,
         (proto::HomeChangeEditModeReq *)(v2 + 32),
         (proto::HomeChangeEditModeRsp *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "changeHomeEditMode",
      3494);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v12, (const char (*)[16])"sendProto fails");
    v6 = operator<<(v5, &this->player_);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" rsp:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&output, (google::protobuf::Message *)(v2 + 96));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &output);
    std::string::~string(&output);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v10 = -1;
  }
  else
  {
    v10 = proto::HomeChangeEditModeRsp::retcode((const proto::HomeChangeEditModeRsp *const)(v2 + 96));
  }
  proto::HomeChangeEditModeRsp::~HomeChangeEditModeRsp((proto::HomeChangeEditModeRsp *const)(v2 + 96));
  proto::HomeChangeEditModeReq::~HomeChangeEditModeReq((proto::HomeChangeEditModeReq *const)(v2 + 32));
  result = v10;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 3501: range 000000000046339C-00000000004636B0
int32_t __cdecl Robot::changeHomeModule(Robot *const this, uint32_t module_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t v10; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-130h] BYREF
  std::string val; // [rsp+30h] [rbp-110h] BYREF
  std::string output; // [rsp+50h] [rbp-F0h] BYREF
  char v15[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 8 req:3502 96 32 8 rsp:3503";
  *(_QWORD *)(v2 + 16) = Robot::changeHomeModule;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  proto::HomeChangeModuleReq::HomeChangeModuleReq((proto::HomeChangeModuleReq *const)(v2 + 32));
  proto::HomeChangeModuleRsp::HomeChangeModuleRsp((proto::HomeChangeModuleRsp *const)(v2 + 96));
  proto::HomeChangeModuleReq::set_target_module_id((proto::HomeChangeModuleReq *const)(v2 + 32), module_id);
  if ( Robot::sendProto<proto::HomeChangeModuleReq,proto::HomeChangeModuleRsp>(
         this,
         (proto::HomeChangeModuleReq *)(v2 + 32),
         (proto::HomeChangeModuleRsp *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "changeHomeModule",
      3507);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v12, (const char (*)[16])"sendProto fails");
    v6 = operator<<(v5, &this->player_);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" rsp:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&output, (google::protobuf::Message *)(v2 + 96));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &output);
    std::string::~string(&output);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v10 = -1;
  }
  else
  {
    v10 = proto::HomeChangeModuleRsp::retcode((const proto::HomeChangeModuleRsp *const)(v2 + 96));
  }
  proto::HomeChangeModuleRsp::~HomeChangeModuleRsp((proto::HomeChangeModuleRsp *const)(v2 + 96));
  proto::HomeChangeModuleReq::~HomeChangeModuleReq((proto::HomeChangeModuleReq *const)(v2 + 32));
  result = v10;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 3514: range 00000000004636B2-0000000000463B89
int32_t __cdecl Robot::getHomeArrangementInfo(Robot *const this, const luabind::adl::object *scene_id_list)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  google::protobuf::uint32 *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-1A8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-1A0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-198h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-190h] BYREF
  std::string val; // [rsp+50h] [rbp-170h] BYREF
  common::milog::MiLogStream v19; // [rsp+70h] [rbp-150h] BYREF
  char v20[304]; // [rsp+90h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 24 17 scene_id_vec:3517 96 40 8 req:3515 176 48 8 rsp:3516";
  *(_QWORD *)(v2 + 16) = Robot::getHomeArrangementInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862727] = -202116109;
  proto::HomeGetArrangementInfoReq::HomeGetArrangementInfoReq((proto::HomeGetArrangementInfoReq *const)(v2 + 96));
  proto::HomeGetArrangementInfoRsp::HomeGetArrangementInfoRsp((proto::HomeGetArrangementInfoRsp *const)(v2 + 176));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 32));
  if ( ScriptUtil::getTableValueAsVector<unsigned int>(
         &ScriptUtil::no_exception_instance,
         scene_id_list,
         (std::vector<unsigned int> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getHomeArrangementInfo",
      3520);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v19,
      (const char (*)[28])"getTableValueAsVector fails");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    __for_range = (std::vector<unsigned int> *)(v2 + 32);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 32))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 32))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      proto::HomeGetArrangementInfoReq::add_scene_id_list((proto::HomeGetArrangementInfoReq *const)(v2 + 96), *v7);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( Robot::sendProto<proto::HomeGetArrangementInfoReq,proto::HomeGetArrangementInfoRsp>(
           this,
           (proto::HomeGetArrangementInfoReq *)(v2 + 96),
           (proto::HomeGetArrangementInfoRsp *)(v2 + 176)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "getHomeArrangementInfo",
        3529);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v17, (const char (*)[16])"sendProto fails");
      v9 = operator<<(v8, &this->player_);
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" req:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v2 + 96));
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" rsp:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](
        (std::string *)&v19,
        (google::protobuf::Message *)(v2 + 176));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v19);
      std::string::~string((std::string *const)&v19);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v5 = -1;
    }
    else
    {
      v5 = proto::HomeGetArrangementInfoRsp::retcode((const proto::HomeGetArrangementInfoRsp *const)(v2 + 176));
    }
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 32));
  proto::HomeGetArrangementInfoRsp::~HomeGetArrangementInfoRsp((proto::HomeGetArrangementInfoRsp *const)(v2 + 176));
  proto::HomeGetArrangementInfoReq::~HomeGetArrangementInfoReq((proto::HomeGetArrangementInfoReq *const)(v2 + 96));
  result = v5;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3536: range 0000000000463B8A-0000000000463CF6
void __cdecl genRandomFurniture(proto::HomeFurnitureData *furniture)
{
  google::protobuf::uint32 v1; // edx
  float v2; // xmm0_4
  float v3; // xmm0_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  proto::Vector *pos_ptr; // [rsp+10h] [rbp-10h]
  proto::Vector *rot_ptr; // [rsp+18h] [rbp-8h]

  v1 = common::tools::RandomUtils::rand<int>(360000, 375000);
  proto::HomeFurnitureData::set_furniture_id(furniture, v1);
  pos_ptr = proto::HomeFurnitureData::mutable_spawn_pos(furniture);
  v2 = common::tools::RandomUtils::rand<double>(-800.0, 800.0);
  proto::Vector::set_x(pos_ptr, v2);
  v3 = common::tools::RandomUtils::rand<double>(-800.0, 800.0);
  proto::Vector::set_y(pos_ptr, v3);
  v4 = common::tools::RandomUtils::rand<double>(-800.0, 800.0);
  proto::Vector::set_z(pos_ptr, v4);
  rot_ptr = proto::HomeFurnitureData::mutable_spawn_rot(furniture);
  v5 = common::tools::RandomUtils::rand<double>(-360.0, 360.0);
  proto::Vector::set_x(rot_ptr, v5);
  v6 = common::tools::RandomUtils::rand<double>(-360.0, 360.0);
  proto::Vector::set_y(rot_ptr, v6);
  v7 = common::tools::RandomUtils::rand<double>(-360.0, 360.0);
  proto::Vector::set_z(rot_ptr, v7);
  proto::HomeFurnitureData::set_parent_furniture_index(furniture, 0);
};

// Line 3550: range 0000000000463CF8-00000000004643FF
int32_t __cdecl Robot::updateHomeArrangementInfo(
        Robot *const this,
        bool is_room_scene,
        uint32_t furniture_count_in_one_block)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  proto::HomeFurnitureData *v6; // rax
  proto::HomeFurnitureData *v7; // rax
  proto::HomeFurnitureData *v8; // rax
  proto::HomeFurnitureData *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  int32_t v15; // r14d
  int32_t result; // eax
  int i; // [rsp+10h] [rbp-1E0h]
  uint32_t j; // [rsp+14h] [rbp-1DCh]
  int i_0; // [rsp+18h] [rbp-1D8h]
  uint32_t j_0; // [rsp+1Ch] [rbp-1D4h]
  proto::HomeSceneArrangementInfo *scene_proto; // [rsp+20h] [rbp-1D0h]
  proto::Vector *pos_ptr; // [rsp+28h] [rbp-1C8h]
  proto::Vector *rot_ptr; // [rsp+30h] [rbp-1C0h]
  proto::HomeBlockArrangementInfo *block_proto_0; // [rsp+38h] [rbp-1B8h]
  proto::Vector *born_pos_ptr; // [rsp+40h] [rbp-1B0h]
  proto::Vector *born_rot_ptr; // [rsp+48h] [rbp-1A8h]
  proto::Vector *djinn_pos_ptr; // [rsp+50h] [rbp-1A0h]
  proto::HomeBlockArrangementInfo *block_proto; // [rsp+58h] [rbp-198h]
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-190h] BYREF
  std::string val; // [rsp+80h] [rbp-170h] BYREF
  std::string output; // [rsp+A0h] [rbp-150h] BYREF
  char v33[304]; // [rsp+C0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 24 8 rsp:3552 96 32 8 req:3551 160 56 15 main_house:3568";
  *(_QWORD *)(v3 + 16) = Robot::updateHomeArrangementInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862724] = -218959118;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  proto::HomeUpdateArrangementInfoReq::HomeUpdateArrangementInfoReq((proto::HomeUpdateArrangementInfoReq *const)(v3 + 96));
  proto::HomeUpdateArrangementInfoRsp::HomeUpdateArrangementInfoRsp((proto::HomeUpdateArrangementInfoRsp *const)(v3 + 32));
  scene_proto = proto::HomeUpdateArrangementInfoReq::mutable_scene_arrangement_info((proto::HomeUpdateArrangementInfoReq *const)(v3 + 96));
  proto::HomeFurnitureData::HomeFurnitureData((proto::HomeFurnitureData *const)(v3 + 160));
  proto::HomeFurnitureData::set_furniture_id((proto::HomeFurnitureData *const)(v3 + 160), 0x3938D6u);
  pos_ptr = proto::HomeFurnitureData::mutable_spawn_pos((proto::HomeFurnitureData *const)(v3 + 160));
  proto::Vector::set_x(pos_ptr, 800.5);
  proto::Vector::set_y(pos_ptr, 318.1564);
  proto::Vector::set_z(pos_ptr, 124.0);
  rot_ptr = proto::HomeFurnitureData::mutable_spawn_rot((proto::HomeFurnitureData *const)(v3 + 160));
  proto::Vector::set_x(rot_ptr, 0.0);
  proto::Vector::set_y(rot_ptr, 188.15536);
  proto::Vector::set_z(rot_ptr, 0.0);
  proto::HomeFurnitureData::set_parent_furniture_index((proto::HomeFurnitureData *const)(v3 + 160), 0);
  if ( is_room_scene )
  {
    proto::HomeSceneArrangementInfo::set_scene_id(scene_proto, 0x89Au);
    for ( i = 1; i <= 7; ++i )
    {
      block_proto = proto::HomeSceneArrangementInfo::add_block_arrangement_info_list(scene_proto);
      proto::HomeBlockArrangementInfo::set_block_id(block_proto, i);
      for ( j = 0; j < furniture_count_in_one_block; ++j )
      {
        v6 = proto::HomeBlockArrangementInfo::add_deploy_furniure_list(block_proto);
        genRandomFurniture(v6);
      }
    }
  }
  else
  {
    proto::HomeSceneArrangementInfo::set_scene_id(scene_proto, 0x7D1u);
    for ( i_0 = 1; i_0 <= 4; ++i_0 )
    {
      block_proto_0 = proto::HomeSceneArrangementInfo::add_block_arrangement_info_list(scene_proto);
      proto::HomeBlockArrangementInfo::set_block_id(block_proto_0, i_0);
      if ( i_0 == 1 )
      {
        v7 = proto::HomeBlockArrangementInfo::add_deploy_furniure_list(block_proto_0);
        proto::HomeFurnitureData::CopyFrom(v7, (const proto::HomeFurnitureData *)(v3 + 160));
      }
      for ( j_0 = 0; j_0 < furniture_count_in_one_block; ++j_0 )
      {
        v8 = proto::HomeBlockArrangementInfo::add_deploy_furniure_list(block_proto_0);
        genRandomFurniture(v8);
      }
    }
    proto::HomeSceneArrangementInfo::set_is_set_born_pos(scene_proto, 1);
    born_pos_ptr = proto::HomeSceneArrangementInfo::mutable_born_pos(scene_proto);
    proto::Vector::set_x(born_pos_ptr, 798.42706);
    proto::Vector::set_y(born_pos_ptr, 319.32642);
    proto::Vector::set_z(born_pos_ptr, 108.68922);
    born_rot_ptr = proto::HomeSceneArrangementInfo::mutable_born_rot(scene_proto);
    proto::Vector::set_x(born_rot_ptr, 0.0);
    proto::Vector::set_y(born_rot_ptr, 188.15536);
    proto::Vector::set_z(born_rot_ptr, 0.0);
    v9 = proto::HomeSceneArrangementInfo::mutable_main_house(scene_proto);
    proto::HomeFurnitureData::CopyFrom(v9, (const proto::HomeFurnitureData *)(v3 + 160));
    djinn_pos_ptr = proto::HomeSceneArrangementInfo::mutable_djinn_pos(scene_proto);
    proto::Vector::set_x(djinn_pos_ptr, 795.53662);
    proto::Vector::set_y(djinn_pos_ptr, 319.3764);
    proto::Vector::set_z(djinn_pos_ptr, 109.17416);
  }
  if ( Robot::sendProto<proto::HomeUpdateArrangementInfoReq,proto::HomeUpdateArrangementInfoRsp>(
         this,
         (proto::HomeUpdateArrangementInfoReq *)(v3 + 96),
         (proto::HomeUpdateArrangementInfoRsp *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "updateHomeArrangementInfo",
      3631);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v30, (const char (*)[16])"sendProto fails");
    v11 = operator<<(v10, &this->player_);
    v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v3 + 96));
    v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &val);
    v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" rsp:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&output, (google::protobuf::Message *)(v3 + 32));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &output);
    std::string::~string(&output);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v15 = -1;
  }
  else
  {
    v15 = proto::HomeUpdateArrangementInfoRsp::retcode((const proto::HomeUpdateArrangementInfoRsp *const)(v3 + 32));
  }
  proto::HomeFurnitureData::~HomeFurnitureData((proto::HomeFurnitureData *const)(v3 + 160));
  proto::HomeUpdateArrangementInfoRsp::~HomeUpdateArrangementInfoRsp((proto::HomeUpdateArrangementInfoRsp *const)(v3 + 32));
  proto::HomeUpdateArrangementInfoReq::~HomeUpdateArrangementInfoReq((proto::HomeUpdateArrangementInfoReq *const)(v3 + 96));
  result = v15;
  if ( v33 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3638: range 0000000000464400-0000000000464714
int32_t __cdecl Robot::chooseHomeModule(Robot *const this, uint32_t module_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t v10; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-130h] BYREF
  std::string val; // [rsp+30h] [rbp-110h] BYREF
  std::string output; // [rsp+50h] [rbp-F0h] BYREF
  char v15[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 8 req:3639 96 32 8 rsp:3640";
  *(_QWORD *)(v2 + 16) = Robot::chooseHomeModule;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  proto::HomeChooseModuleReq::HomeChooseModuleReq((proto::HomeChooseModuleReq *const)(v2 + 32));
  proto::HomeChooseModuleRsp::HomeChooseModuleRsp((proto::HomeChooseModuleRsp *const)(v2 + 96));
  proto::HomeChooseModuleReq::set_module_id((proto::HomeChooseModuleReq *const)(v2 + 32), module_id);
  if ( Robot::sendProto<proto::HomeChooseModuleReq,proto::HomeChooseModuleRsp>(
         this,
         (proto::HomeChooseModuleReq *)(v2 + 32),
         (proto::HomeChooseModuleRsp *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "chooseHomeModule",
      3644);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v12, (const char (*)[16])"sendProto fails");
    v6 = operator<<(v5, &this->player_);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" rsp:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&output, (google::protobuf::Message *)(v2 + 96));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &output);
    std::string::~string(&output);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v10 = -1;
  }
  else
  {
    v10 = proto::HomeChooseModuleRsp::retcode((const proto::HomeChooseModuleRsp *const)(v2 + 96));
  }
  proto::HomeChooseModuleRsp::~HomeChooseModuleRsp((proto::HomeChooseModuleRsp *const)(v2 + 96));
  proto::HomeChooseModuleReq::~HomeChooseModuleReq((proto::HomeChooseModuleReq *const)(v2 + 32));
  result = v10;
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 3651: range 0000000000464716-0000000000464A32
int32_t __cdecl Robot::talkHomeAvatar(Robot *const this, uint32_t avatar_id, uint32_t talk_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  int32_t v11; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-130h] BYREF
  std::string val; // [rsp+30h] [rbp-110h] BYREF
  std::string output; // [rsp+50h] [rbp-F0h] BYREF
  char v17[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 8 req:3652 96 32 8 rsp:3653";
  *(_QWORD *)(v3 + 16) = Robot::talkHomeAvatar;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  proto::HomeAvatarTalkReq::HomeAvatarTalkReq((proto::HomeAvatarTalkReq *const)(v3 + 32));
  proto::HomeAvatarTalkRsp::HomeAvatarTalkRsp((proto::HomeAvatarTalkRsp *const)(v3 + 96));
  proto::HomeAvatarTalkReq::set_avatar_id((proto::HomeAvatarTalkReq *const)(v3 + 32), avatar_id);
  proto::HomeAvatarTalkReq::set_talk_id((proto::HomeAvatarTalkReq *const)(v3 + 32), talk_id);
  if ( Robot::sendProto<proto::HomeAvatarTalkReq,proto::HomeAvatarTalkRsp>(
         this,
         (proto::HomeAvatarTalkReq *)(v3 + 32),
         (proto::HomeAvatarTalkRsp *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "talkHomeAvatar",
      3658);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v14, (const char (*)[16])"sendProto fails");
    v7 = operator<<(v6, &this->player_);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v3 + 32));
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" rsp:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&output, (google::protobuf::Message *)(v3 + 96));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &output);
    std::string::~string(&output);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v11 = -1;
  }
  else
  {
    v11 = proto::HomeAvatarTalkRsp::retcode((const proto::HomeAvatarTalkRsp *const)(v3 + 96));
  }
  proto::HomeAvatarTalkRsp::~HomeAvatarTalkRsp((proto::HomeAvatarTalkRsp *const)(v3 + 96));
  proto::HomeAvatarTalkReq::~HomeAvatarTalkReq((proto::HomeAvatarTalkReq *const)(v3 + 32));
  result = v11;
  if ( v17 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 3665: range 0000000000464A34-00000000004650AE
void __fastcall Robot::updateHomeBlockFurnitureBySuitId(
        Robot *const this,
        proto::HomeBlockArrangementInfo *block_proto,
        uint32_t suite_id,
        unsigned __int64 guid,
        unsigned __int64 index)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  common::milog::MiLogStream *v8; // rax
  google::protobuf::uint32 v9; // eax
  google::protobuf::int32 v10; // eax
  google::protobuf::uint32 v11; // eax
  google::protobuf::int32 v12; // eax
  google::protobuf::uint32 v13; // eax
  uint32_t i; // [rsp+34h] [rbp-FCh]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-F8h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+40h] [rbp-F0h] BYREF
  const FurnitureSuiteJsonConfig *furniture_json_config_ptr; // [rsp+48h] [rbp-E8h]
  proto::HomeFurnitureSuiteData *furniture_suite; // [rsp+50h] [rbp-E0h]
  proto::Vector *pos_suite; // [rsp+58h] [rbp-D8h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+60h] [rbp-D0h]
  proto::HomeFurnitureData *furniture; // [rsp+68h] [rbp-C8h]
  proto::Vector *pos; // [rsp+70h] [rbp-C0h]
  proto::Vector *rot; // [rsp+78h] [rbp-B8h]
  const std::pair<unsigned int const,unsigned int> *v27; // [rsp+80h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *furniture_id; // [rsp+88h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *furniture_count; // [rsp+90h] [rbp-A0h]
  proto::HomeFurnitureData *furniture_0; // [rsp+98h] [rbp-98h]
  proto::Vector *pos_0; // [rsp+A0h] [rbp-90h]
  proto::Vector *rot_0; // [rsp+A8h] [rbp-88h]
  common::milog::MiLogStream v33; // [rsp+B0h] [rbp-80h] BYREF
  char v34[96]; // [rsp+D0h] [rbp-60h] BYREF

  v5 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 13 suite_id:3664";
  *(_QWORD *)(v5 + 16) = Robot::updateHomeBlockFurnitureBySuitId;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116348;
  *(_DWORD *)(v5 + 32) = suite_id;
  furniture_json_config_ptr = JsonConfigMgr::findFurnitureSuiteJsonConfig(
                                &Config::config_ptr->design_config.json_config_mgr,
                                *(_DWORD *)(v5 + 32));
  if ( furniture_json_config_ptr )
  {
    furniture_suite = proto::HomeBlockArrangementInfo::add_furniture_suite_list(block_proto);
    proto::HomeFurnitureSuiteData::set_suite_id(furniture_suite, *(_DWORD *)(v5 + 32));
    pos_suite = proto::HomeFurnitureSuiteData::mutable_spawn_pos(furniture_suite);
    Robot::randVectorProto(this, pos_suite, VECTOR_POS);
    if ( *(_BYTE *)((guid >> 3) + 0x7FFF8000) != 0 && (char)((guid & 7) + 3) >= *(_BYTE *)((guid >> 3) + 0x7FFF8000) )
      __asan_report_load4(guid);
    v9 = (*(_DWORD *)guid)++;
    proto::HomeFurnitureSuiteData::set_guid(furniture_suite, v9);
    __for_range = &furniture_json_config_ptr->included_furnite_id_count_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&furniture_json_config_ptr->included_furnite_id_count_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&furniture_json_config_ptr->included_furnite_id_count_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v27 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      furniture_id = std::get<0ul,unsigned int const,unsigned int>(v27);
      furniture_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v27);
      for ( i = 0; ; ++i )
      {
        if ( *(_BYTE *)(((unsigned __int64)furniture_count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)furniture_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_count >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(furniture_count);
        }
        if ( i >= *furniture_count )
          break;
        furniture_0 = proto::HomeBlockArrangementInfo::add_deploy_furniure_list(block_proto);
        if ( *(_BYTE *)((index >> 3) + 0x7FFF8000) != 0
          && (char)((index & 7) + 3) >= *(_BYTE *)((index >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(index);
        }
        v10 = (*(_DWORD *)index)++;
        proto::HomeFurnitureSuiteData::add_included_furniture_index_list(furniture_suite, v10);
        if ( *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)furniture_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(furniture_id);
        }
        proto::HomeFurnitureData::set_furniture_id(furniture_0, *furniture_id);
        pos_0 = proto::HomeFurnitureData::mutable_spawn_pos(furniture_0);
        Robot::randVectorProto(this, pos_0, VECTOR_POS);
        rot_0 = proto::HomeFurnitureData::mutable_spawn_rot(furniture_0);
        Robot::randVectorProto(this, rot_0, VECTOR_ROT);
        proto::HomeFurnitureData::set_parent_furniture_index(furniture_0, 0);
        if ( *(_BYTE *)((guid >> 3) + 0x7FFF8000) != 0 && (char)((guid & 7) + 3) >= *(_BYTE *)((guid >> 3) + 0x7FFF8000) )
          __asan_report_load4(guid);
        v11 = (*(_DWORD *)guid)++;
        proto::HomeFurnitureData::set_guid(furniture_0, v11);
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    furniture = proto::HomeBlockArrangementInfo::add_deploy_furniure_list(block_proto);
    if ( *(_BYTE *)((index >> 3) + 0x7FFF8000) != 0 && (char)((index & 7) + 3) >= *(_BYTE *)((index >> 3) + 0x7FFF8000) )
      __asan_report_load4(index);
    v12 = (*(_DWORD *)index)++;
    proto::HomeFurnitureSuiteData::add_included_furniture_index_list(furniture_suite, v12);
    proto::HomeFurnitureData::set_furniture_id(furniture, 0x5C10Du);
    pos = proto::HomeFurnitureData::mutable_spawn_pos(furniture);
    Robot::randVectorProto(this, pos, VECTOR_POS);
    rot = proto::HomeFurnitureData::mutable_spawn_rot(furniture);
    Robot::randVectorProto(this, rot, VECTOR_ROT);
    proto::HomeFurnitureData::set_parent_furniture_index(furniture, 0);
    if ( *(_BYTE *)((guid >> 3) + 0x7FFF8000) != 0 && (char)((guid & 7) + 3) >= *(_BYTE *)((guid >> 3) + 0x7FFF8000) )
      __asan_report_load4(guid);
    v13 = (*(_DWORD *)guid)++;
    proto::HomeFurnitureData::set_guid(furniture, v13);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "updateHomeBlockFurnitureBySuitId",
      3669);
    v8 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           &v33,
           (const char (*)[66])"GET_JSON_CONFIG_MGR.findFurnitureSuiteJsonConfig fails, suite_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v33);
  }
  if ( v34 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3711: range 00000000004650B0-000000000046542D
void __fastcall Robot::updateHomeBlockInfoByAvatarId(
        Robot *const this,
        proto::HomeBlockArrangementInfo *block_proto,
        uint32_t avatar_id,
        uint32_t costume_id,
        unsigned __int64 guid)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  common::milog::MiLogStream *v8; // rax
  google::protobuf::uint32 v9; // eax
  const data::HomeWorldNPCExcelConfig *home_avatar_config_ptr; // [rsp+28h] [rbp-B8h]
  proto::HomeFurnitureData *furniture; // [rsp+30h] [rbp-B0h]
  proto::Vector *pos; // [rsp+38h] [rbp-A8h]
  proto::Vector *rot; // [rsp+40h] [rbp-A0h]
  proto::HomeNpcData *avatar; // [rsp+48h] [rbp-98h]
  proto::Vector *avatar_pos; // [rsp+50h] [rbp-90h]
  proto::Vector *avatar_rot; // [rsp+58h] [rbp-88h]
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-80h] BYREF
  char v21[96]; // [rsp+80h] [rbp-60h] BYREF

  v5 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 14 avatar_id:3710";
  *(_QWORD *)(v5 + 16) = Robot::updateHomeBlockInfoByAvatarId;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116348;
  *(_DWORD *)(v5 + 32) = avatar_id;
  home_avatar_config_ptr = HomeWorldExcelConfigMgr::findHomeWorldNPCExcelConfigByAvatarId(
                             &Config::config_ptr->design_config.txt_config_mgr.home_config_mgr,
                             *(_DWORD *)(v5 + 32));
  if ( home_avatar_config_ptr )
  {
    furniture = proto::HomeBlockArrangementInfo::add_deploy_furniure_list(block_proto);
    if ( *(_BYTE *)(((unsigned __int64)&home_avatar_config_ptr->furniture_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&home_avatar_config_ptr->furniture_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&home_avatar_config_ptr->furniture_id);
    }
    proto::HomeFurnitureData::set_furniture_id(furniture, home_avatar_config_ptr->furniture_id);
    pos = proto::HomeFurnitureData::mutable_spawn_pos(furniture);
    Robot::randVectorProto(this, pos, VECTOR_POS);
    rot = proto::HomeFurnitureData::mutable_spawn_rot(furniture);
    Robot::randVectorProto(this, rot, VECTOR_ROT);
    proto::HomeFurnitureData::set_parent_furniture_index(furniture, 0);
    if ( *(_BYTE *)((guid >> 3) + 0x7FFF8000) != 0 && (char)((guid & 7) + 3) >= *(_BYTE *)((guid >> 3) + 0x7FFF8000) )
      __asan_report_load4(guid);
    v9 = (*(_DWORD *)guid)++;
    proto::HomeFurnitureData::set_guid(furniture, v9);
    avatar = proto::HomeBlockArrangementInfo::add_deploy_npc_list(block_proto);
    proto::HomeNpcData::set_avatar_id(avatar, *(_DWORD *)(v5 + 32));
    avatar_pos = proto::HomeNpcData::mutable_spawn_pos(avatar);
    Robot::randVectorProto(this, avatar_pos, VECTOR_POS);
    avatar_rot = proto::HomeNpcData::mutable_spawn_rot(avatar);
    Robot::randVectorProto(this, avatar_rot, VECTOR_ROT);
    proto::HomeNpcData::set_costume_id(avatar, costume_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "updateHomeBlockInfoByAvatarId",
      3715);
    v8 = common::milog::MiLogStream::operator<<<char [91],(char *[91])0>(
           &v20,
           (const char (*)[91])"GET_TXT_CONFIG_MGR.home_config_mgr.findHomeWorldNPCExcelConfigByAvatarId fails, avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  if ( v21 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3739: range 000000000046542E-00000000004654FB
void __cdecl Robot::randVectorProto(Robot *const this, proto::Vector *vec, Robot::VectorType type)
{
  float v3; // xmm0_4
  float v4; // xmm0_4
  float v5; // xmm0_4
  int min_value; // [rsp+28h] [rbp-8h]
  int max_value; // [rsp+2Ch] [rbp-4h]

  min_value = 0;
  max_value = 0;
  if ( type == VECTOR_POS )
  {
    min_value = -1001914368;
    max_value = 1145569280;
    v3 = common::tools::RandomUtils::rand<float>(-800.0, 800.0);
  }
  else
  {
    if ( type == VECTOR_ROT )
    {
      min_value = -1011613696;
      max_value = 1135869952;
    }
    v3 = common::tools::RandomUtils::rand<float>(*(float *)&min_value, *(float *)&max_value);
  }
  proto::Vector::set_x(vec, v3);
  v4 = common::tools::RandomUtils::rand<float>(*(float *)&min_value, *(float *)&max_value);
  proto::Vector::set_y(vec, v4);
  v5 = common::tools::RandomUtils::rand<float>(*(float *)&min_value, *(float *)&max_value);
  proto::Vector::set_z(vec, v5);
};

// Line 3767: range 00000000004654FC-000000000046618C
int32_t __cdecl Robot::updateHomeArrangementForAvatarTest(
        Robot *const this,
        bool is_room_scene,
        const luabind::adl::object *suite_table,
        const luabind::adl::object *avatar_table,
        const luabind::adl::object *costume_table)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  int32_t v8; // r14d
  std::vector<unsigned int>::size_type v9; // r14
  google::protobuf::uint32 v10; // eax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v11; // rax
  uint32_t *v12; // rdx
  std::vector<unsigned int>::reference v13; // rax
  uint32_t *v14; // rdx
  uint32_t v15; // r14d
  std::vector<unsigned int>::reference v16; // rax
  uint32_t *v17; // rdx
  proto::HomeFurnitureData *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  int32_t result; // eax
  uint32_t i; // [rsp+30h] [rbp-2E0h]
  int i_0; // [rsp+34h] [rbp-2DCh]
  int i_1; // [rsp+38h] [rbp-2D8h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+40h] [rbp-2D0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+48h] [rbp-2C8h] BYREF
  proto::HomeSceneArrangementInfo *scene_proto; // [rsp+50h] [rbp-2C0h]
  proto::Vector *pos_ptr; // [rsp+58h] [rbp-2B8h]
  proto::Vector *rot_ptr; // [rsp+60h] [rbp-2B0h]
  proto::HomeBlockArrangementInfo *block_proto; // [rsp+68h] [rbp-2A8h]
  std::vector<unsigned int> *__for_range; // [rsp+70h] [rbp-2A0h]
  proto::Vector *born_pos_ptr; // [rsp+78h] [rbp-298h]
  proto::Vector *born_rot_ptr; // [rsp+80h] [rbp-290h]
  proto::Vector *djinn_pos_ptr; // [rsp+88h] [rbp-288h]
  proto::HomeBlockArrangementInfo *tmp_block_proto_0; // [rsp+90h] [rbp-280h]
  proto::HomeBlockArrangementInfo *tmp_block_proto; // [rsp+98h] [rbp-278h]
  common::milog::MiLogStream v43; // [rsp+A0h] [rbp-270h] BYREF
  std::string val; // [rsp+C0h] [rbp-250h] BYREF
  common::milog::MiLogStream v45; // [rsp+E0h] [rbp-230h] BYREF
  char v46[528]; // [rsp+100h] [rbp-210h] BYREF

  v5 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(480LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "8 32 4 9 guid:3797 48 4 10 index:3815 64 24 17 suite_id_vec:3768 128 24 18 avatar_id_vec:3774 19"
                        "2 24 19 costume_id_vec:3780 256 24 8 rsp:3794 320 32 8 req:3793 384 56 15 main_house:3798";
  *(_QWORD *)(v5 + 16) = Robot::updateHomeArrangementForAvatarTest;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -234881024;
  v7[536862723] = -218959118;
  v7[536862724] = -234881024;
  v7[536862725] = -218959118;
  v7[536862726] = -234881024;
  v7[536862727] = -218959118;
  v7[536862728] = -234881024;
  v7[536862729] = -218959118;
  v7[536862731] = -218959118;
  v7[536862733] = -218103808;
  v7[536862734] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v5 + 64));
  if ( ScriptUtil::getTableValueAsVector<unsigned int>(
         &ScriptUtil::no_exception_instance,
         suite_table,
         (std::vector<unsigned int> *)(v5 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "updateHomeArrangementForAvatarTest",
      3771);
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      &v45,
      (const char (*)[40])"suite_table getTableValueAsVector fails");
    common::milog::MiLogStream::~MiLogStream(&v45);
    v8 = -1;
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v5 + 128));
    if ( ScriptUtil::getTableValueAsVector<unsigned int>(
           &ScriptUtil::no_exception_instance,
           avatar_table,
           (std::vector<unsigned int> *)(v5 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/operation/robot_op.cpp",
        "updateHomeArrangementForAvatarTest",
        3777);
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        &v45,
        (const char (*)[41])"avatar_table getTableValueAsVector fails");
      common::milog::MiLogStream::~MiLogStream(&v45);
      v8 = -1;
    }
    else
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v5 + 192));
      if ( ScriptUtil::getTableValueAsVector<unsigned int>(
             &ScriptUtil::no_exception_instance,
             costume_table,
             (std::vector<unsigned int> *)(v5 + 192)) )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/operation/robot_op.cpp",
          "updateHomeArrangementForAvatarTest",
          3783);
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          &v45,
          (const char (*)[42])"costume_table getTableValueAsVector fails");
        common::milog::MiLogStream::~MiLogStream(&v45);
        v8 = -1;
      }
      else
      {
        v9 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v5 + 128));
        if ( v9 == std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v5 + 192)) )
        {
          proto::HomeUpdateArrangementInfoReq::HomeUpdateArrangementInfoReq((proto::HomeUpdateArrangementInfoReq *const)(v5 + 320));
          proto::HomeUpdateArrangementInfoRsp::HomeUpdateArrangementInfoRsp((proto::HomeUpdateArrangementInfoRsp *const)(v5 + 256));
          scene_proto = proto::HomeUpdateArrangementInfoReq::mutable_scene_arrangement_info((proto::HomeUpdateArrangementInfoReq *const)(v5 + 320));
          *(_DWORD *)(v5 + 32) = 1;
          proto::HomeFurnitureData::HomeFurnitureData((proto::HomeFurnitureData *const)(v5 + 384));
          proto::HomeFurnitureData::set_furniture_id((proto::HomeFurnitureData *const)(v5 + 384), 0x3938D6u);
          pos_ptr = proto::HomeFurnitureData::mutable_spawn_pos((proto::HomeFurnitureData *const)(v5 + 384));
          proto::Vector::set_x(pos_ptr, 800.5);
          proto::Vector::set_y(pos_ptr, 318.1564);
          proto::Vector::set_z(pos_ptr, 124.0);
          rot_ptr = proto::HomeFurnitureData::mutable_spawn_rot((proto::HomeFurnitureData *const)(v5 + 384));
          proto::Vector::set_x(rot_ptr, 0.0);
          proto::Vector::set_y(rot_ptr, 188.15536);
          proto::Vector::set_z(rot_ptr, 0.0);
          proto::HomeFurnitureData::set_parent_furniture_index((proto::HomeFurnitureData *const)(v5 + 384), 0);
          v10 = *(_DWORD *)(v5 + 32);
          *(_DWORD *)(v5 + 32) = v10 + 1;
          proto::HomeFurnitureData::set_guid((proto::HomeFurnitureData *const)(v5 + 384), v10);
          block_proto = proto::HomeSceneArrangementInfo::add_block_arrangement_info_list(scene_proto);
          proto::HomeBlockArrangementInfo::set_block_id(block_proto, 1u);
          *(_DWORD *)(v5 + 48) = 0;
          __for_range = (std::vector<unsigned int> *)(v5 + 64);
          __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v5 + 64))._M_current;
          __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v5 + 64))._M_current;
          while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
          {
            v11 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
            v12 = v11;
            if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v11);
            }
            Robot::updateHomeBlockFurnitureBySuitId(this, block_proto, *v12, v5 + 32, v5 + 48);
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
          }
          if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v5 + 128)) )
          {
            for ( i = 0; i < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v5 + 128)); ++i )
            {
              v13 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v5 + 192), i);
              v14 = v13;
              if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v13);
              }
              v15 = *v14;
              v16 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v5 + 128), i);
              v17 = v16;
              if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v16);
              }
              Robot::updateHomeBlockInfoByAvatarId(this, block_proto, *v17, v15, v5 + 32);
            }
          }
          if ( is_room_scene )
          {
            proto::HomeSceneArrangementInfo::set_scene_id(scene_proto, 0x89Au);
            for ( i_0 = 2; i_0 <= 7; ++i_0 )
            {
              tmp_block_proto = proto::HomeSceneArrangementInfo::add_block_arrangement_info_list(scene_proto);
              proto::HomeBlockArrangementInfo::set_block_id(tmp_block_proto, i_0);
            }
          }
          else
          {
            proto::HomeSceneArrangementInfo::set_scene_id(scene_proto, 0x7D1u);
            proto::HomeSceneArrangementInfo::set_is_set_born_pos(scene_proto, 1);
            born_pos_ptr = proto::HomeSceneArrangementInfo::mutable_born_pos(scene_proto);
            proto::Vector::set_x(born_pos_ptr, 798.42706);
            proto::Vector::set_y(born_pos_ptr, 319.32642);
            proto::Vector::set_z(born_pos_ptr, 108.68922);
            born_rot_ptr = proto::HomeSceneArrangementInfo::mutable_born_rot(scene_proto);
            proto::Vector::set_x(born_rot_ptr, 0.0);
            proto::Vector::set_y(born_rot_ptr, 188.15536);
            proto::Vector::set_z(born_rot_ptr, 0.0);
            v18 = proto::HomeSceneArrangementInfo::mutable_main_house(scene_proto);
            proto::HomeFurnitureData::CopyFrom(v18, (const proto::HomeFurnitureData *)(v5 + 384));
            djinn_pos_ptr = proto::HomeSceneArrangementInfo::mutable_djinn_pos(scene_proto);
            proto::Vector::set_x(djinn_pos_ptr, 795.53662);
            proto::Vector::set_y(djinn_pos_ptr, 319.3764);
            proto::Vector::set_z(djinn_pos_ptr, 109.17416);
            for ( i_1 = 2; i_1 <= 4; ++i_1 )
            {
              tmp_block_proto_0 = proto::HomeSceneArrangementInfo::add_block_arrangement_info_list(scene_proto);
              proto::HomeBlockArrangementInfo::set_block_id(tmp_block_proto_0, i_1);
            }
          }
          if ( Robot::sendProto<proto::HomeUpdateArrangementInfoReq,proto::HomeUpdateArrangementInfoRsp>(
                 this,
                 (proto::HomeUpdateArrangementInfoReq *)(v5 + 320),
                 (proto::HomeUpdateArrangementInfoRsp *)(v5 + 256)) )
          {
            common::milog::MiLogStream::create(
              &v43,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/operation/robot_op.cpp",
              "updateHomeArrangementForAvatarTest",
              3863);
            v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    &v43,
                    (const char (*)[16])"sendProto fails");
            v20 = operator<<(v19, &this->player_);
            v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" req:");
            google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v5 + 320));
            v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, &val);
            v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" rsp:");
            google::protobuf::Message::ShortDebugString[abi:cxx11](
              (std::string *)&v45,
              (google::protobuf::Message *)(v5 + 256));
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)&v45);
            std::string::~string((std::string *const)&v45);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v43);
            v8 = -1;
          }
          else
          {
            v8 = proto::HomeUpdateArrangementInfoRsp::retcode((const proto::HomeUpdateArrangementInfoRsp *const)(v5 + 256));
          }
          proto::HomeFurnitureData::~HomeFurnitureData((proto::HomeFurnitureData *const)(v5 + 384));
          proto::HomeUpdateArrangementInfoRsp::~HomeUpdateArrangementInfoRsp((proto::HomeUpdateArrangementInfoRsp *const)(v5 + 256));
          proto::HomeUpdateArrangementInfoReq::~HomeUpdateArrangementInfoReq((proto::HomeUpdateArrangementInfoReq *const)(v5 + 320));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/operation/robot_op.cpp",
            "updateHomeArrangementForAvatarTest",
            3789);
          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v45,
            (const char (*)[46])"avatar size is not the same with costume size");
          common::milog::MiLogStream::~MiLogStream(&v45);
          v8 = -1;
        }
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 192));
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 128));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 64));
  result = v8;
  if ( v46 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8034) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 3870: range 000000000046618E-00000000004664BA
int32_t __cdecl Robot::getHomeEventReward(Robot *const this, uint32_t event_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  int32_t v10; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-150h] BYREF
  std::string val; // [rsp+30h] [rbp-130h] BYREF
  std::string output; // [rsp+50h] [rbp-110h] BYREF
  char v15[240]; // [rsp+70h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 8 req:3871 96 56 8 rsp:3872";
  *(_QWORD *)(v2 + 16) = Robot::getHomeEventReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  proto::HomeAvatarRewardEventGetReq::HomeAvatarRewardEventGetReq((proto::HomeAvatarRewardEventGetReq *const)(v2 + 32));
  proto::HomeAvatarRewardEventGetRsp::HomeAvatarRewardEventGetRsp((proto::HomeAvatarRewardEventGetRsp *const)(v2 + 96));
  proto::HomeAvatarRewardEventGetReq::set_event_id((proto::HomeAvatarRewardEventGetReq *const)(v2 + 32), event_id);
  if ( Robot::sendProto<proto::HomeAvatarRewardEventGetReq,proto::HomeAvatarRewardEventGetRsp>(
         this,
         (proto::HomeAvatarRewardEventGetReq *)(v2 + 32),
         (proto::HomeAvatarRewardEventGetRsp *)(v2 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "getHomeEventReward",
      3876);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v12, (const char (*)[16])"sendProto fails");
    v6 = operator<<(v5, &this->player_);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" rsp:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&output, (google::protobuf::Message *)(v2 + 96));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &output);
    std::string::~string(&output);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v10 = -1;
  }
  else
  {
    v10 = proto::HomeAvatarRewardEventGetRsp::retcode((const proto::HomeAvatarRewardEventGetRsp *const)(v2 + 96));
  }
  proto::HomeAvatarRewardEventGetRsp::~HomeAvatarRewardEventGetRsp((proto::HomeAvatarRewardEventGetRsp *const)(v2 + 96));
  proto::HomeAvatarRewardEventGetReq::~HomeAvatarRewardEventGetReq((proto::HomeAvatarRewardEventGetReq *const)(v2 + 32));
  result = v10;
  if ( v15 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 3883: range 00000000004664BC-00000000004667D8
int32_t __cdecl Robot::summonHomeAvatarEvent(Robot *const this, uint32_t avatar_id, uint32_t suit_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  int32_t v11; // r14d
  int32_t result; // eax
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-130h] BYREF
  std::string val; // [rsp+30h] [rbp-110h] BYREF
  std::string output; // [rsp+50h] [rbp-F0h] BYREF
  char v17[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 8 req:3884 96 32 8 rsp:3885";
  *(_QWORD *)(v3 + 16) = Robot::summonHomeAvatarEvent;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -202116109;
  proto::HomeAvatarSummonEventReq::HomeAvatarSummonEventReq((proto::HomeAvatarSummonEventReq *const)(v3 + 32));
  proto::HomeAvatarSummonEventRsp::HomeAvatarSummonEventRsp((proto::HomeAvatarSummonEventRsp *const)(v3 + 96));
  proto::HomeAvatarSummonEventReq::set_avatar_id((proto::HomeAvatarSummonEventReq *const)(v3 + 32), avatar_id);
  proto::HomeAvatarSummonEventReq::set_suit_id((proto::HomeAvatarSummonEventReq *const)(v3 + 32), suit_id);
  if ( Robot::sendProto<proto::HomeAvatarSummonEventReq,proto::HomeAvatarSummonEventRsp>(
         this,
         (proto::HomeAvatarSummonEventReq *)(v3 + 32),
         (proto::HomeAvatarSummonEventRsp *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/operation/robot_op.cpp",
      "summonHomeAvatarEvent",
      3890);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v14, (const char (*)[16])"sendProto fails");
    v7 = operator<<(v6, &this->player_);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v3 + 32));
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" rsp:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&output, (google::protobuf::Message *)(v3 + 96));
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &output);
    std::string::~string(&output);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v11 = -1;
  }
  else
  {
    v11 = proto::HomeAvatarSummonEventRsp::retcode((const proto::HomeAvatarSummonEventRsp *const)(v3 + 96));
  }
  proto::HomeAvatarSummonEventRsp::~HomeAvatarSummonEventRsp((proto::HomeAvatarSummonEventRsp *const)(v3 + 96));
  proto::HomeAvatarSummonEventReq::~HomeAvatarSummonEventReq((proto::HomeAvatarSummonEventReq *const)(v3 + 32));
  result = v11;
  if ( v17 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};
