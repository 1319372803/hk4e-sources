// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/generated_message_util.cc

// Line 56: range 000000000C8970E0-000000000C8970E8
double __cdecl google::protobuf::internal::Infinity()
{
  return INFINITY;
};

// Line 59: range 000000000C8970F0-000000000C8970F8
double __cdecl google::protobuf::internal::NaN()
{
  return NAN;
};

// Line 68: range 000000000C8970B0-000000000C8970D2
void __cdecl google::protobuf::internal::InitEmptyString()
{
  void (*v0)(void); // rsi

  google::protobuf::internal::fixed_address_empty_string[abi:cxx11].union_.space[16] = 0;
  *(_OWORD *)google::protobuf::internal::fixed_address_empty_string[abi:cxx11].union_.space = 0x1FB57250uLL;
  google::protobuf::internal::OnShutdown(
    (google::protobuf::internal *)google::protobuf::internal::DeleteEmptyString,
    v0);
};

// Line 296: range 000000000C897190-000000000C897193
void __fastcall google::protobuf::internal::SerializeMessageNoTable(
        const google::protobuf::MessageLite *msg,
        google::protobuf::io::CodedOutputStream *output)
{
  (*((void (__fastcall **)(const google::protobuf::MessageLite *, google::protobuf::io::CodedOutputStream *))msg->_vptr_MessageLite
   + 13))(
    msg,
    output);
};

// Line 301: range 000000000C8971A0-000000000C8971B8
void __fastcall google::protobuf::internal::SerializeMessageNoTable(
        const google::protobuf::MessageLite *msg,
        google::protobuf::internal::ArrayOutput *output)
{
  output->ptr = (google::protobuf::uint8 *)(*((__int64 (__fastcall **)(const google::protobuf::MessageLite *, bool, google::protobuf::uint8 *))msg->_vptr_MessageLite
                                            + 16))(
                                             msg,
                                             output->is_deterministic,
                                             output->ptr);
};

// Line 308: range 000000000C899CB0-000000000C899D13
// local variable allocation has failed, the output may be wrong!
void __fastcall google::protobuf::internal::SerializeMessageDispatch(
        const google::protobuf::MessageLite *msg,
        const google::protobuf::internal::FieldMetadata *field_table,
        int num_fields,
        google::protobuf::int32 cached_size,
        google::protobuf::io::CodedOutputStream *output)
{
  unsigned __int64 buffer_size; // r8
  google::protobuf::uint8 *buffer; // r10
  void (__fastcall *v9)(const google::protobuf::MessageLite *, bool, google::protobuf::uint8 *); // rax

  buffer_size = (unsigned int)output->buffer_size_;
  if ( cached_size <= (int)buffer_size
    && (buffer = output->buffer_,
        buffer_size = (unsigned int)(buffer_size - cached_size),
        output->buffer_size_ = buffer_size,
        output->buffer_ = &buffer[cached_size],
        buffer) )
  {
    v9 = (void (__fastcall *)(const google::protobuf::MessageLite *, bool, google::protobuf::uint8 *))*((_QWORD *)msg->_vptr_MessageLite + 16);
    if ( output->serialization_deterministic_is_overridden_ )
      v9(msg, output->serialization_deterministic_override_, buffer);
    else
      v9(msg, google::protobuf::io::CodedOutputStream::default_serialization_deterministic_ != 0, buffer);
  }
  else
  {
    google::protobuf::internal::SerializeInternal(
      (google::protobuf::internal *)msg,
      (const unsigned __int8 *)field_table,
      *(const google::protobuf::internal::FieldMetadata **)&num_fields,
      (int)output,
      (google::protobuf::io::CodedOutputStream *)buffer_size);
  }
};

// Line 325: range 000000000C89C5C0-000000000C89C5D5
// local variable allocation has failed, the output may be wrong!
void __fastcall google::protobuf::internal::SerializeMessageDispatch(
        const google::protobuf::MessageLite *msg,
        const google::protobuf::internal::FieldMetadata *field_table,
        int num_fields,
        google::protobuf::int32 cached_size,
        google::protobuf::internal::ArrayOutput *output)
{
  unsigned __int8 *v5; // r9

  output->ptr = (google::protobuf::uint8 *)google::protobuf::internal::SerializeInternalToArray(
                                             (google::protobuf::internal *)msg,
                                             (const unsigned __int8 *)field_table,
                                             *(const google::protobuf::internal::FieldMetadata **)&num_fields,
                                             output->is_deterministic,
                                             (bool)output->ptr,
                                             v5);
};

// Line 334: range 000000000C89C780-000000000C89C832
void __fastcall google::protobuf::internal::SerializeMessageTo<google::protobuf::internal::ArrayOutput>(
        const google::protobuf::MessageLite *msg,
        const void *table_ptr,
        google::protobuf::internal::ArrayOutput *output)
{
  const unsigned __int8 *v4; // rcx
  google::protobuf::uint8 *ptr; // r8
  unsigned int i; // eax
  char v7; // dl
  google::protobuf::uint8 *v8; // r8
  _BOOL8 is_deterministic; // r9
  int v10; // edx
  unsigned int v11; // eax
  google::protobuf::uint8 *j; // rdx
  char v13; // cl
  int (**vptr_MessageLite)(...); // rax

  if ( table_ptr )
  {
    v4 = (const unsigned __int8 *)*((_QWORD *)table_ptr + 1);
    ptr = output->ptr;
    for ( i = *(_DWORD *)((char *)&msg->_vptr_MessageLite + *(unsigned int *)v4); i > 0x7F; *(ptr - 1) = v7 | 0x80 )
    {
      v7 = i;
      i >>= 7;
      ++ptr;
    }
    *ptr = i;
    v8 = ptr + 1;
    is_deterministic = output->is_deterministic;
    v10 = *(_DWORD *)table_ptr;
    output->ptr = v8;
    output->ptr = (google::protobuf::uint8 *)google::protobuf::internal::SerializeInternalToArray(
                                               (google::protobuf::internal *)msg,
                                               v4 + 24,
                                               (const google::protobuf::internal::FieldMetadata *)(unsigned int)(v10 - 1),
                                               is_deterministic,
                                               (bool)v8,
                                               (unsigned __int8 *)is_deterministic);
  }
  else
  {
    v11 = (*((__int64 (__fastcall **)(const google::protobuf::MessageLite *))msg->_vptr_MessageLite + 15))(msg);
    for ( j = output->ptr; v11 > 0x7F; *(j - 1) = v13 | 0x80 )
    {
      v13 = v11;
      v11 >>= 7;
      ++j;
    }
    *j = v11;
    vptr_MessageLite = msg->_vptr_MessageLite;
    output->ptr = j + 1;
    output->ptr = (google::protobuf::uint8 *)((__int64 (__fastcall *)(const google::protobuf::MessageLite *, bool))vptr_MessageLite[16])(
                                               msg,
                                               output->is_deterministic);
  }
};

// Line 334: range 000000000C89C630-000000000C89C738
void __fastcall google::protobuf::internal::SerializeMessageTo<google::protobuf::io::CodedOutputStream>(
        const google::protobuf::MessageLite *msg,
        const void *table_ptr,
        google::protobuf::io::CodedOutputStream *output)
{
  const google::protobuf::internal::FieldMetadata *v4; // r13
  google::protobuf::uint32 v6; // r14d
  unsigned int v7; // edx
  google::protobuf::uint8 *buffer; // rsi
  google::protobuf::uint8 *v9; // rax
  char v10; // cl
  int v11; // eax
  google::protobuf::uint32 v12; // esi
  google::protobuf::uint8 *v13; // rcx
  google::protobuf::uint8 *i; // rax
  char v15; // dl
  int v16; // eax

  if ( table_ptr )
  {
    v4 = (const google::protobuf::internal::FieldMetadata *)*((_QWORD *)table_ptr + 1);
    v6 = *(_DWORD *)((char *)&msg->_vptr_MessageLite + v4->offset);
    v7 = v6;
    if ( output->buffer_size_ <= 4 )
    {
      google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v6);
    }
    else
    {
      buffer = output->buffer_;
      v9 = buffer;
      if ( v6 > 0x7F )
      {
        do
        {
          v10 = v7;
          v7 >>= 7;
          *v9++ = v10 | 0x80;
        }
        while ( v7 > 0x7F );
      }
      *v9 = v7;
      v11 = (_DWORD)v9 + 1 - (_DWORD)buffer;
      output->buffer_size_ -= v11;
      output->buffer_ += v11;
    }
    google::protobuf::internal::SerializeMessageDispatch(msg, v4 + 1, *(_DWORD *)table_ptr - 1, v6, output);
  }
  else
  {
    v12 = (*((__int64 (__fastcall **)(const google::protobuf::MessageLite *))msg->_vptr_MessageLite + 15))(msg);
    if ( output->buffer_size_ <= 4 )
    {
      google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(output, v12);
    }
    else
    {
      v13 = output->buffer_;
      for ( i = v13; v12 > 0x7F; *(i - 1) = v15 | 0x80 )
      {
        v15 = v12;
        v12 >>= 7;
        ++i;
      }
      *i = v12;
      v16 = (_DWORD)i + 1 - (_DWORD)v13;
      output->buffer_size_ -= v16;
      output->buffer_ += v16;
    }
    (*((void (__fastcall **)(const google::protobuf::MessageLite *, google::protobuf::io::CodedOutputStream *))msg->_vptr_MessageLite
     + 13))(
      msg,
      output);
  }
};

// Line 355: range 000000000C89C840-000000000C89C882
void __fastcall google::protobuf::internal::SerializeGroupTo<google::protobuf::internal::ArrayOutput>(
        const google::protobuf::MessageLite *msg,
        const void *table_ptr,
        google::protobuf::internal::ArrayOutput *output)
{
  unsigned __int8 *v3; // r9

  if ( table_ptr )
    output->ptr = (google::protobuf::uint8 *)google::protobuf::internal::SerializeInternalToArray(
                                               (google::protobuf::internal *)msg,
                                               (const unsigned __int8 *)(*((_QWORD *)table_ptr + 1) + 24LL),
                                               (const google::protobuf::internal::FieldMetadata *)(unsigned int)(*(_DWORD *)table_ptr - 1),
                                               output->is_deterministic,
                                               (bool)output->ptr,
                                               v3);
  else
    output->ptr = (google::protobuf::uint8 *)(*((__int64 (__fastcall **)(const google::protobuf::MessageLite *, bool, google::protobuf::uint8 *))msg->_vptr_MessageLite
                                              + 16))(
                                               msg,
                                               output->is_deterministic,
                                               output->ptr);
};

// Line 355: range 000000000C89C740-000000000C89C772
void __fastcall google::protobuf::internal::SerializeGroupTo<google::protobuf::io::CodedOutputStream>(
        const google::protobuf::MessageLite *msg,
        const void *table_ptr,
        google::protobuf::io::CodedOutputStream *output)
{
  if ( table_ptr )
    google::protobuf::internal::SerializeMessageDispatch(
      msg,
      (const google::protobuf::internal::FieldMetadata *)(*((_QWORD *)table_ptr + 1) + 24LL),
      *(_DWORD *)table_ptr - 1,
      *(_DWORD *)((char *)&msg->_vptr_MessageLite + **((unsigned int **)table_ptr + 1)),
      output);
  else
    (*((void (__fastcall **)(const google::protobuf::MessageLite *, google::protobuf::io::CodedOutputStream *))msg->_vptr_MessageLite
     + 13))(
      msg,
      output);
};

// Line 509: range 000000000C72A41A-000000000C72A425
void __fastcall __noreturn google::protobuf::internal::SerializeInternal()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::LogMessage_0 *v1; // r12

  google::protobuf::internal::LogMessage::~LogMessage(v1);
  _Unwind_Resume(v0);
};

// Line 509: range 000000000C72A45A-000000000C72A465
void __fastcall __noreturn google::protobuf::internal::SerializeInternalToArray()
{
  struct _Unwind_Exception *v0; // rbp
  google::protobuf::internal::LogMessage_0 *v1; // r15

  google::protobuf::internal::LogMessage::~LogMessage(v1);
  _Unwind_Resume(v0);
};

// Line 533: range 000000000C8971C0-000000000C897219
void __fastcall google::protobuf::internal::SerializeNotImplemented(google::protobuf::internal *this)
{
  google::protobuf::internal::LogMessage_0 *v1; // rax
  google::protobuf::internal::LogMessage_0 *v2; // rax
  google::protobuf::internal::LogFinisher v3; // [rsp+Fh] [rbp-49h] BYREF
  google::protobuf::internal::LogMessage_0 v4; // [rsp+10h] [rbp-48h] BYREF

  google::protobuf::internal::LogMessage::LogMessage(
    &v4,
    LOGLEVEL_FATAL_0,
    "google/protobuf/generated_message_util.cc",
    534);
  v1 = google::protobuf::internal::LogMessage::operator<<(&v4, "Not implemented field number ");
  v2 = google::protobuf::internal::LogMessage::operator<<(v1, (int)this);
  google::protobuf::internal::LogFinisher::operator=(&v3, v2);
  google::protobuf::internal::LogMessage::~LogMessage(&v4);
};

// Line 534: range 000000000C72A408-000000000C72A415
void __fastcall __noreturn google::protobuf::internal::SerializeNotImplemented(
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

// Line 543: range 000000000C897220-000000000C897227
int __fastcall google::protobuf::internal::FieldMetadata::CalculateType(
        int type,
        google::protobuf::internal::FieldMetadata::FieldTypeClass type_class)
{
  return type + 20 * type_class - 1;
};

// Line 554: range 000000000C897230-000000000C89723B
bool __fastcall google::protobuf::internal::IsNull<9>(const void *ptr)
{
  return *(_QWORD *)(*(_QWORD *)ptr + 8LL) == 0LL;
};

// Line 564: range 000000000C897250-000000000C897257
bool __fastcall google::protobuf::internal::IsNull<10>(const void *ptr)
{
  return *(_QWORD *)ptr == 0LL;
};

// Line 598: range 000000000C8972C0-000000000C899C9F
void __fastcall google::protobuf::internal::SerializeInternal(
        google::protobuf::internal *this,
        const unsigned __int8 *a2,
        const google::protobuf::internal::FieldMetadata *a3,
        google::protobuf::io::CodedOutputStream *a4,
        google::protobuf::io::CodedOutputStream *a5)
{
  const unsigned __int8 *v5; // r14
  const unsigned __int8 *v7; // rbp
  google::protobuf::internal *v9; // rdi
  __int64 v10; // rsi
  google::protobuf::uint32 *v11; // r12
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rsi
  google::protobuf::uint8 *buffer; // rcx
  google::protobuf::uint8 *i; // rax
  char v18; // dl
  int v19; // eax
  int v20; // eax
  google::protobuf::uint8 *v21; // rcx
  google::protobuf::uint8 *j; // rax
  char v23; // dl
  int v24; // eax
  int v25; // eax
  google::protobuf::uint8 *v26; // rcx
  google::protobuf::uint8 *k; // rax
  char v28; // dl
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int (***v34)(...); // r12
  int (**v35)(...); // rsi
  unsigned int v36; // eax
  google::protobuf::uint8 *v37; // rdi
  google::protobuf::uint8 *v38; // rdx
  char v39; // cl
  int v40; // edx
  int (**v41)(...); // rdx
  google::protobuf::io::CodedOutputStream *v42; // rdi
  int (**v43)(...); // rsi
  int v44; // eax
  google::protobuf::uint32 v45; // esi
  google::protobuf::uint8 *v46; // rcx
  google::protobuf::uint8 *m; // rax
  char v48; // dl
  int v49; // eax
  google::protobuf::uint32 v50; // esi
  google::protobuf::uint8 *v51; // rcx
  google::protobuf::uint8 *n; // rax
  char v53; // dl
  int v54; // eax
  int v55; // eax
  int v56; // eax
  const google::protobuf::MessageLite *v57; // r12
  int (**vptr_MessageLite)(...); // rsi
  unsigned int v59; // eax
  google::protobuf::uint8 *v60; // rdi
  google::protobuf::uint8 *v61; // rdx
  char v62; // cl
  int v63; // edx
  int v64; // eax
  int v65; // eax
  google::protobuf::uint8 *v66; // rcx
  google::protobuf::uint8 *ii; // rax
  char v68; // dl
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  google::protobuf::uint8 *v74; // rcx
  google::protobuf::uint8 *jj; // rax
  char v76; // dl
  int v77; // eax
  google::protobuf::uint8 *v78; // rcx
  google::protobuf::uint8 *kk; // rax
  char v80; // dl
  int v81; // eax
  google::protobuf::uint8 *v82; // rcx
  google::protobuf::uint8 *mm; // rax
  char v84; // dl
  int v85; // eax
  google::protobuf::uint8 *v86; // rcx
  google::protobuf::uint8 *nn; // rax
  char v88; // dl
  int v89; // eax
  const google::protobuf::MessageLite *v90; // r12
  int (**v91)(...); // rsi
  unsigned int v92; // eax
  google::protobuf::uint8 *v93; // rdi
  google::protobuf::uint8 *v94; // rdx
  char v95; // cl
  int v96; // edx
  google::protobuf::uint32 v97; // esi
  google::protobuf::uint8 *v98; // rcx
  google::protobuf::uint8 *i1; // rax
  char v100; // dl
  int v101; // eax
  const google::protobuf::MessageLite *v102; // r12
  int (**v103)(...); // rsi
  unsigned int v104; // eax
  google::protobuf::uint8 *v105; // rdi
  google::protobuf::uint8 *v106; // rdx
  char v107; // cl
  int v108; // edx
  google::protobuf::uint8 *v109; // rcx
  google::protobuf::uint8 *i2; // rax
  char v111; // dl
  int v112; // eax
  google::protobuf::uint8 *v113; // rcx
  google::protobuf::uint8 *i3; // rax
  char v115; // dl
  int v116; // eax
  __int64 v117; // r15
  google::protobuf::uint32 v118; // esi
  google::protobuf::uint8 *v119; // rcx
  google::protobuf::uint8 *i4; // rax
  char v121; // dl
  int v122; // eax
  __int64 v123; // r15
  google::protobuf::uint32 v124; // esi
  google::protobuf::uint8 *v125; // rcx
  google::protobuf::uint8 *i5; // rax
  char v127; // dl
  int v128; // eax
  google::protobuf::uint32 v129; // esi
  int v130; // r15d
  google::protobuf::uint32 v131; // esi
  google::protobuf::uint8 *v132; // rcx
  google::protobuf::uint8 *i8; // rax
  char v134; // dl
  int v135; // eax
  int v136; // edi
  int i6; // eax
  google::protobuf::uint64 v138; // rsi
  google::protobuf::uint8 *v139; // rcx
  google::protobuf::uint8 *i7; // rax
  char v141; // dl
  int v142; // eax
  int v143; // r15d
  google::protobuf::uint32 v144; // esi
  google::protobuf::uint8 *v145; // rcx
  google::protobuf::uint8 *i11; // rax
  char v147; // dl
  int v148; // eax
  int v149; // edi
  int i9; // eax
  google::protobuf::uint64 v151; // rsi
  google::protobuf::uint8 *v152; // rcx
  google::protobuf::uint8 *i10; // rax
  char v154; // dl
  int v155; // eax
  int v156; // r15d
  google::protobuf::uint32 v157; // esi
  google::protobuf::uint8 *v158; // rcx
  google::protobuf::uint8 *i14; // rax
  char v160; // dl
  int v161; // eax
  int v162; // edi
  int i12; // eax
  google::protobuf::uint64 v164; // rsi
  google::protobuf::uint8 *v165; // rcx
  google::protobuf::uint8 *i13; // rax
  char v167; // dl
  int v168; // eax
  signed int v169; // r15d
  google::protobuf::uint32 v170; // esi
  google::protobuf::uint8 *v171; // rcx
  google::protobuf::uint8 *i15; // rax
  char v173; // dl
  int v174; // eax
  __int64 v175; // rdx
  signed int v176; // r15d
  google::protobuf::uint32 v177; // esi
  google::protobuf::uint8 *v178; // rcx
  google::protobuf::uint8 *i16; // rax
  char v180; // dl
  int v181; // eax
  __int64 v182; // rdx
  int v183; // r15d
  google::protobuf::uint32 v184; // esi
  google::protobuf::uint8 *v185; // rcx
  google::protobuf::uint8 *i18; // rax
  char v187; // dl
  int v188; // eax
  int v189; // edi
  int i17; // eax
  google::protobuf::uint32 v191; // esi
  __int64 v192; // r15
  google::protobuf::uint32 v193; // esi
  google::protobuf::uint8 *v194; // rcx
  google::protobuf::uint8 *i20; // rax
  char v196; // dl
  int v197; // eax
  int i19; // edx
  __int64 v199; // rax
  __int64 v200; // r8
  __int64 v201; // rsi
  unsigned int v202; // eax
  google::protobuf::uint8 *v203; // rdi
  google::protobuf::uint8 *v204; // rdx
  char v205; // cl
  int v206; // edx
  __int64 v207; // rdx
  const void *v208; // rsi
  __int64 v209; // r15
  google::protobuf::uint32 v210; // esi
  google::protobuf::uint8 *v211; // rcx
  google::protobuf::uint8 *i33; // rax
  char v213; // dl
  int v214; // eax
  __int64 v215; // r15
  google::protobuf::uint32 v216; // esi
  google::protobuf::uint8 *v217; // rcx
  google::protobuf::uint8 *i25; // rax
  char v219; // dl
  int v220; // eax
  int i24; // edx
  __int64 v222; // rax
  __int64 v223; // r8
  __int64 v224; // rsi
  unsigned int v225; // eax
  google::protobuf::uint8 *v226; // rdi
  google::protobuf::uint8 *v227; // rdx
  char v228; // cl
  int v229; // edx
  __int64 v230; // rdx
  const void *v231; // rsi
  int v232; // r15d
  google::protobuf::uint32 v233; // esi
  google::protobuf::uint8 *v234; // rcx
  google::protobuf::uint8 *i28; // rax
  char v236; // dl
  int v237; // eax
  int v238; // edi
  int i26; // eax
  google::protobuf::uint32 v240; // esi
  google::protobuf::uint8 *v241; // rcx
  google::protobuf::uint8 *i27; // rax
  char v243; // dl
  int v244; // eax
  int v245; // r15d
  google::protobuf::uint32 v246; // esi
  google::protobuf::uint8 *v247; // rcx
  google::protobuf::uint8 *i31; // rax
  char v249; // dl
  int v250; // eax
  int v251; // edi
  int i29; // eax
  google::protobuf::uint64 v253; // rsi
  google::protobuf::uint8 *v254; // rcx
  google::protobuf::uint8 *i30; // rax
  char v256; // dl
  int v257; // eax
  __int64 v258; // r15
  google::protobuf::uint32 v259; // esi
  google::protobuf::uint8 *v260; // rcx
  google::protobuf::uint8 *i32; // rax
  char v262; // dl
  int v263; // eax
  google::protobuf::uint32 v264; // esi
  __int64 v265; // r15
  google::protobuf::uint32 v266; // esi
  google::protobuf::uint8 *v267; // rcx
  google::protobuf::uint8 *i22; // rax
  char v269; // dl
  int v270; // eax
  __int64 v271; // rax
  google::protobuf::uint32 v272; // esi
  google::protobuf::uint8 *v273; // rcx
  google::protobuf::uint8 *i21; // rax
  char v275; // dl
  int v276; // eax
  __int64 v277; // r15
  google::protobuf::uint32 v278; // esi
  google::protobuf::uint8 *v279; // rcx
  google::protobuf::uint8 *i23; // rax
  char v281; // dl
  int v282; // eax
  __int64 v283; // rax
  const google::protobuf::MessageLite *v284; // rdi
  __int64 v285; // r15
  google::protobuf::uint32 v286; // esi
  signed int v287; // r15d
  google::protobuf::uint64 v288; // rsi
  google::protobuf::uint8 *v289; // rcx
  google::protobuf::uint8 *i37; // rax
  char v291; // dl
  int v292; // eax
  signed int v293; // r15d
  google::protobuf::uint64 v294; // rsi
  google::protobuf::uint8 *v295; // rcx
  google::protobuf::uint8 *i38; // rax
  char v297; // dl
  int v298; // eax
  signed int v299; // r15d
  google::protobuf::uint64 v300; // rsi
  google::protobuf::uint8 *v301; // rcx
  google::protobuf::uint8 *i39; // rax
  char v303; // dl
  int v304; // eax
  int v305; // r15d
  google::protobuf::uint32 v306; // esi
  google::protobuf::uint8 *v307; // rcx
  google::protobuf::uint8 *i51; // rax
  char v309; // dl
  int v310; // eax
  int i49; // edx
  __int64 v312; // rax
  unsigned __int64 v313; // rsi
  google::protobuf::uint8 *v314; // rcx
  google::protobuf::uint8 *i50; // rax
  char v316; // dl
  int v317; // eax
  __int64 v318; // rax
  __int64 v319; // r15
  int v320; // r15d
  google::protobuf::uint32 v321; // esi
  google::protobuf::uint8 *v322; // rcx
  google::protobuf::uint8 *i36; // rax
  char v324; // dl
  int v325; // eax
  int i34; // edx
  int v327; // eax
  unsigned int v328; // esi
  google::protobuf::uint8 *v329; // rcx
  google::protobuf::uint8 *i35; // rax
  char v331; // dl
  int v332; // eax
  signed int v333; // r15d
  __int64 v334; // rdx
  signed int v335; // r15d
  __int64 v336; // rdx
  signed int v337; // r15d
  google::protobuf::uint8 v338; // al
  google::protobuf::internal::LogMessage_0 *v339; // rax
  google::protobuf::internal::LogMessage_0 *v340; // rax
  google::protobuf::internal::LogMessage_0 *v341; // rax
  google::protobuf::internal::LogMessage_0 *v342; // rax
  signed int v343; // r15d
  google::protobuf::uint32 v344; // esi
  google::protobuf::uint8 *v345; // rcx
  google::protobuf::uint8 *i40; // rax
  char v347; // dl
  int v348; // eax
  signed int v349; // r15d
  google::protobuf::uint64 v350; // rsi
  google::protobuf::uint8 *v351; // rcx
  google::protobuf::uint8 *i41; // rax
  char v353; // dl
  int v354; // eax
  __int64 v355; // r15
  google::protobuf::uint32 v356; // esi
  __int64 v357; // rax
  __int64 v358; // r15
  signed int v359; // r15d
  int v360; // eax
  unsigned int v361; // esi
  google::protobuf::uint8 *v362; // rcx
  google::protobuf::uint8 *i42; // rax
  char v364; // dl
  int v365; // eax
  signed int v366; // r15d
  __int64 v367; // rax
  unsigned __int64 v368; // rsi
  google::protobuf::uint8 *v369; // rcx
  google::protobuf::uint8 *i43; // rax
  char v371; // dl
  int v372; // eax
  google::protobuf::uint32 v373; // esi
  google::protobuf::uint32 v374; // esi
  google::protobuf::uint8 *v375; // rcx
  google::protobuf::uint8 *i44; // rax
  char v377; // dl
  int v378; // eax
  google::protobuf::uint8 *v379; // rcx
  google::protobuf::uint8 *i45; // rax
  char v381; // dl
  int v382; // eax
  google::protobuf::uint8 *v383; // rcx
  google::protobuf::uint8 *i46; // rax
  char v385; // dl
  int v386; // eax
  const google::protobuf::MessageLite *v387; // r12
  int (**v388)(...); // rsi
  unsigned int v389; // eax
  google::protobuf::uint8 *v390; // rdi
  google::protobuf::uint8 *v391; // rdx
  char v392; // cl
  int v393; // edx
  const google::protobuf::MessageLite *v394; // r12
  int (**v395)(...); // rsi
  unsigned int v396; // eax
  google::protobuf::uint8 *v397; // rdi
  google::protobuf::uint8 *v398; // rdx
  char v399; // cl
  int v400; // edx
  google::protobuf::uint8 *v401; // rcx
  google::protobuf::uint8 *i47; // rax
  char v403; // dl
  int v404; // eax
  google::protobuf::uint8 *v405; // rcx
  google::protobuf::uint8 *i48; // rax
  char v407; // dl
  int v408; // eax
  __int64 v409; // [rsp+0h] [rbp-90h]
  __int64 v410; // [rsp+0h] [rbp-90h]
  google::protobuf::internal::LogFinisher v411; // [rsp+17h] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v412; // [rsp+18h] [rbp-78h] BYREF

  if ( (int)a3 > 0 )
  {
    v5 = &a2[24 * ((_DWORD)a3 - 1) + 24];
    v7 = a2;
    do
    {
      v9 = (google::protobuf::internal *)*((unsigned int *)v7 + 3);
      v10 = *(unsigned int *)v7;
      v11 = (google::protobuf::uint32 *)((char *)this + v10);
      switch ( (int)v9 )
      {
        case 0:
          v12 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
          if ( _bittest(&v12, *((_DWORD *)v7 + 2)) )
            goto LABEL_132;
          goto LABEL_5;
        case 1:
          v13 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
          if ( _bittest(&v13, *((_DWORD *)v7 + 2)) )
            goto LABEL_130;
          goto LABEL_5;
        case 2:
          v14 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
          if ( _bittest(&v14, *((_DWORD *)v7 + 2)) )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v15 = *(_QWORD *)v11;
            if ( a4->buffer_size_ <= 9 )
              goto LABEL_530;
            buffer = a4->buffer_;
            for ( i = buffer; v15 > 0x7F; *(i - 1) = v18 | 0x80 )
            {
              v18 = v15;
              v15 >>= 7;
              ++i;
            }
            *i = v15;
            v19 = (_DWORD)i + 1 - (_DWORD)buffer;
            a4->buffer_size_ -= v19;
            a4->buffer_ += v19;
          }
          goto LABEL_5;
        case 3:
          v20 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
          if ( _bittest(&v20, *((_DWORD *)v7 + 2)) )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v15 = *(_QWORD *)v11;
            if ( a4->buffer_size_ <= 9 )
              goto LABEL_530;
            v21 = a4->buffer_;
            for ( j = v21; v15 > 0x7F; *(j - 1) = v23 | 0x80 )
            {
              v23 = v15;
              v15 >>= 7;
              ++j;
            }
            *j = v15;
            v24 = (_DWORD)j + 1 - (_DWORD)v21;
            a4->buffer_size_ -= v24;
            a4->buffer_ += v24;
          }
          goto LABEL_5;
        case 4:
          v25 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
          if ( _bittest(&v25, *((_DWORD *)v7 + 2)) )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v15 = (int)*v11;
            if ( a4->buffer_size_ <= 9 )
              goto LABEL_530;
            v26 = a4->buffer_;
            for ( k = v26; v15 > 0x7F; *(k - 1) = v28 | 0x80 )
            {
              v28 = v15;
              v15 >>= 7;
              ++k;
            }
            *k = v15;
            v29 = (_DWORD)k + 1 - (_DWORD)v26;
            a4->buffer_size_ -= v29;
            a4->buffer_ += v29;
          }
          goto LABEL_5;
        case 5:
          v30 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
          if ( _bittest(&v30, *((_DWORD *)v7 + 2)) )
            goto LABEL_132;
          goto LABEL_5;
        case 6:
          v31 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
          if ( _bittest(&v31, *((_DWORD *)v7 + 2)) )
            goto LABEL_130;
          goto LABEL_5;
        case 7:
          v32 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
          if ( _bittest(&v32, *((_DWORD *)v7 + 2)) )
            goto LABEL_463;
          goto LABEL_5;
        case 8:
          v33 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
          if ( _bittest(&v33, *((_DWORD *)v7 + 2)) )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v34 = *(int (****)(...))v11;
            v35 = v34[1];
            v36 = (unsigned int)v35;
            if ( a4->buffer_size_ <= 4 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, (google::protobuf::uint32)v35);
            }
            else
            {
              v37 = a4->buffer_;
              v38 = v37;
              if ( (unsigned int)v35 > 0x7F )
              {
                do
                {
                  v39 = v36;
                  v36 >>= 7;
                  *v38++ = v39 | 0x80;
                }
                while ( v36 > 0x7F );
              }
              *v38 = v36;
              v40 = (_DWORD)v38 + 1 - (_DWORD)v37;
              a4->buffer_size_ -= v40;
              a4->buffer_ += v40;
            }
            v41 = v34[1];
            v42 = a4;
            v43 = *v34;
            if ( !a4->aliasing_enabled_ )
              goto LABEL_523;
            goto LABEL_481;
          }
          goto LABEL_5;
        case 9:
          v44 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
          if ( _bittest(&v44, *((_DWORD *)v7 + 2)) )
          {
            v45 = *((_DWORD *)v7 + 1);
            if ( a4->buffer_size_ <= 4 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v45);
            }
            else
            {
              v46 = a4->buffer_;
              for ( m = v46; v45 > 0x7F; *(m - 1) = v48 | 0x80 )
              {
                v48 = v45;
                v45 >>= 7;
                ++m;
              }
              *m = v45;
              v49 = (_DWORD)m + 1 - (_DWORD)v46;
              a4->buffer_size_ -= v49;
              a4->buffer_ += v49;
            }
            google::protobuf::internal::SerializeGroupTo<google::protobuf::io::CodedOutputStream>(
              *(const google::protobuf::MessageLite **)v11,
              *((const void **)v7 + 2),
              a4);
            v50 = *((_DWORD *)v7 + 1) + 1;
            if ( a4->buffer_size_ <= 4 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v50);
            }
            else
            {
              v51 = a4->buffer_;
              for ( n = v51; v50 > 0x7F; *(n - 1) = v53 | 0x80 )
              {
                v53 = v50;
                v50 >>= 7;
                ++n;
              }
              *n = v50;
              v54 = (_DWORD)n + 1 - (_DWORD)v51;
              a4->buffer_size_ -= v54;
              a4->buffer_ += v54;
            }
          }
          goto LABEL_5;
        case 10:
          v55 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
          if ( _bittest(&v55, *((_DWORD *)v7 + 2)) )
            goto LABEL_474;
          goto LABEL_5;
        case 11:
          v56 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
          if ( _bittest(&v56, *((_DWORD *)v7 + 2)) )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v57 = *(const google::protobuf::MessageLite **)v11;
            vptr_MessageLite = v57[1]._vptr_MessageLite;
            v59 = (unsigned int)vptr_MessageLite;
            if ( a4->buffer_size_ <= 4 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(
                a4,
                (google::protobuf::uint32)vptr_MessageLite);
            }
            else
            {
              v60 = a4->buffer_;
              v61 = v60;
              if ( (unsigned int)vptr_MessageLite > 0x7F )
              {
                do
                {
                  v62 = v59;
                  v59 >>= 7;
                  *v61++ = v62 | 0x80;
                }
                while ( v59 > 0x7F );
              }
              *v61 = v59;
              v63 = (_DWORD)v61 + 1 - (_DWORD)v60;
              a4->buffer_size_ -= v63;
              a4->buffer_ += v63;
            }
            v41 = v57[1]._vptr_MessageLite;
            v42 = a4;
            v43 = v57->_vptr_MessageLite;
            if ( !a4->aliasing_enabled_ )
              goto LABEL_523;
            goto LABEL_481;
          }
          goto LABEL_5;
        case 12:
          v64 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
          if ( _bittest(&v64, *((_DWORD *)v7 + 2)) )
            goto LABEL_483;
          goto LABEL_5;
        case 13:
          v65 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
          if ( _bittest(&v65, *((_DWORD *)v7 + 2)) )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v15 = (int)*v11;
            if ( a4->buffer_size_ <= 9 )
              goto LABEL_530;
            v66 = a4->buffer_;
            for ( ii = v66; v15 > 0x7F; *(ii - 1) = v68 | 0x80 )
            {
              v68 = v15;
              v15 >>= 7;
              ++ii;
            }
            *ii = v15;
            v69 = (_DWORD)ii + 1 - (_DWORD)v66;
            a4->buffer_size_ -= v69;
            a4->buffer_ += v69;
          }
          goto LABEL_5;
        case 14:
          v70 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
          if ( _bittest(&v70, *((_DWORD *)v7 + 2)) )
            goto LABEL_130;
          goto LABEL_5;
        case 15:
          v71 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
          if ( _bittest(&v71, *((_DWORD *)v7 + 2)) )
            goto LABEL_132;
          goto LABEL_5;
        case 16:
          v72 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
          if ( _bittest(&v72, *((_DWORD *)v7 + 2)) )
            goto LABEL_494;
          goto LABEL_5;
        case 17:
          v73 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
          if ( _bittest(&v73, *((_DWORD *)v7 + 2)) )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v15 = (*(__int64 *)v11 >> 63) ^ (2LL * *(_QWORD *)v11);
            if ( a4->buffer_size_ <= 9 )
              goto LABEL_530;
            v74 = a4->buffer_;
            for ( jj = v74; v15 > 0x7F; *(jj - 1) = v76 | 0x80 )
            {
              v76 = v15;
              v15 >>= 7;
              ++jj;
            }
            *jj = v15;
            v77 = (_DWORD)jj + 1 - (_DWORD)v74;
            a4->buffer_size_ -= v77;
            a4->buffer_ += v77;
          }
          goto LABEL_5;
        case 20:
          if ( *(double *)v11 != 0.0 )
            goto LABEL_132;
          goto LABEL_5;
        case 21:
          if ( *(float *)v11 != 0.0 )
            goto LABEL_130;
          goto LABEL_5;
        case 22:
          if ( *(_QWORD *)v11 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v15 = *(_QWORD *)v11;
            if ( a4->buffer_size_ <= 9 )
              goto LABEL_530;
            v78 = a4->buffer_;
            for ( kk = v78; v15 > 0x7F; *(kk - 1) = v80 | 0x80 )
            {
              v80 = v15;
              v15 >>= 7;
              ++kk;
            }
            *kk = v15;
            v81 = (_DWORD)kk + 1 - (_DWORD)v78;
            a4->buffer_size_ -= v81;
            a4->buffer_ += v81;
          }
          goto LABEL_5;
        case 23:
          if ( *(_QWORD *)v11 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v15 = *(_QWORD *)v11;
            if ( a4->buffer_size_ <= 9 )
              goto LABEL_530;
            v82 = a4->buffer_;
            for ( mm = v82; v15 > 0x7F; *(mm - 1) = v84 | 0x80 )
            {
              v84 = v15;
              v15 >>= 7;
              ++mm;
            }
            *mm = v15;
            v85 = (_DWORD)mm + 1 - (_DWORD)v82;
            a4->buffer_size_ -= v85;
            a4->buffer_ += v85;
          }
          goto LABEL_5;
        case 24:
          if ( *v11 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v15 = (int)*v11;
            if ( a4->buffer_size_ <= 9 )
              goto LABEL_530;
            v86 = a4->buffer_;
            for ( nn = v86; v15 > 0x7F; *(nn - 1) = v88 | 0x80 )
            {
              v88 = v15;
              v15 >>= 7;
              ++nn;
            }
            *nn = v15;
            v89 = (_DWORD)nn + 1 - (_DWORD)v86;
            a4->buffer_size_ -= v89;
            a4->buffer_ += v89;
          }
          goto LABEL_5;
        case 25:
          if ( *(_QWORD *)v11 )
            goto LABEL_132;
          goto LABEL_5;
        case 26:
          if ( *v11 )
            goto LABEL_130;
          goto LABEL_5;
        case 27:
          if ( *(_BYTE *)v11 )
            goto LABEL_463;
          goto LABEL_5;
        case 28:
          if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v90 = *(const google::protobuf::MessageLite **)v11;
            v91 = v90[1]._vptr_MessageLite;
            v92 = (unsigned int)v91;
            if ( a4->buffer_size_ <= 4 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, (google::protobuf::uint32)v91);
            }
            else
            {
              v93 = a4->buffer_;
              v94 = v93;
              if ( (unsigned int)v91 > 0x7F )
              {
                do
                {
                  v95 = v92;
                  v92 >>= 7;
                  *v94++ = v95 | 0x80;
                }
                while ( v92 > 0x7F );
              }
              *v94 = v92;
              v96 = (_DWORD)v94 + 1 - (_DWORD)v93;
              a4->buffer_size_ -= v96;
              a4->buffer_ += v96;
            }
            v41 = v90[1]._vptr_MessageLite;
            v42 = a4;
            v43 = v90->_vptr_MessageLite;
            if ( !a4->aliasing_enabled_ )
              goto LABEL_523;
            goto LABEL_481;
          }
          goto LABEL_5;
        case 29:
          if ( *(_QWORD *)v11 )
          {
            v97 = *((_DWORD *)v7 + 1);
            if ( a4->buffer_size_ <= 4 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v97);
            }
            else
            {
              v98 = a4->buffer_;
              for ( i1 = v98; v97 > 0x7F; *(i1 - 1) = v100 | 0x80 )
              {
                v100 = v97;
                v97 >>= 7;
                ++i1;
              }
              *i1 = v97;
              v101 = (_DWORD)i1 + 1 - (_DWORD)v98;
              a4->buffer_size_ -= v101;
              a4->buffer_ += v101;
            }
            google::protobuf::internal::SerializeGroupTo<google::protobuf::io::CodedOutputStream>(
              *(const google::protobuf::MessageLite **)v11,
              *((const void **)v7 + 2),
              a4);
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1) + 1);
          }
          goto LABEL_5;
        case 30:
          if ( *(_QWORD *)v11 )
            goto LABEL_474;
          goto LABEL_5;
        case 31:
          if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v102 = *(const google::protobuf::MessageLite **)v11;
            v103 = v102[1]._vptr_MessageLite;
            v104 = (unsigned int)v103;
            if ( a4->buffer_size_ <= 4 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, (google::protobuf::uint32)v103);
            }
            else
            {
              v105 = a4->buffer_;
              v106 = v105;
              if ( (unsigned int)v103 > 0x7F )
              {
                do
                {
                  v107 = v104;
                  v104 >>= 7;
                  *v106++ = v107 | 0x80;
                }
                while ( v104 > 0x7F );
              }
              *v106 = v104;
              v108 = (_DWORD)v106 + 1 - (_DWORD)v105;
              a4->buffer_size_ -= v108;
              a4->buffer_ += v108;
            }
            v41 = v102[1]._vptr_MessageLite;
            v42 = a4;
            v43 = v102->_vptr_MessageLite;
            if ( !a4->aliasing_enabled_ )
              goto LABEL_523;
            goto LABEL_481;
          }
          goto LABEL_5;
        case 32:
          if ( *v11 )
            goto LABEL_483;
          goto LABEL_5;
        case 33:
          if ( *v11 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v15 = (int)*v11;
            if ( a4->buffer_size_ <= 9 )
              goto LABEL_530;
            v109 = a4->buffer_;
            for ( i2 = v109; v15 > 0x7F; *(i2 - 1) = v111 | 0x80 )
            {
              v111 = v15;
              v15 >>= 7;
              ++i2;
            }
            *i2 = v15;
            v112 = (_DWORD)i2 + 1 - (_DWORD)v109;
            a4->buffer_size_ -= v112;
            a4->buffer_ += v112;
          }
          goto LABEL_5;
        case 34:
          if ( *v11 )
          {
LABEL_130:
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::io::CodedOutputStream::WriteLittleEndian32(a4, *v11);
          }
          goto LABEL_5;
        case 35:
          if ( *(_QWORD *)v11 )
          {
LABEL_132:
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::io::CodedOutputStream::WriteLittleEndian64(a4, *(_QWORD *)v11);
          }
          goto LABEL_5;
        case 36:
          if ( *v11 )
            goto LABEL_494;
          goto LABEL_5;
        case 37:
          if ( *(_QWORD *)v11 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v15 = (*(__int64 *)v11 >> 63) ^ (2LL * *(_QWORD *)v11);
            if ( a4->buffer_size_ <= 9 )
              goto LABEL_530;
            v113 = a4->buffer_;
            for ( i3 = v113; v15 > 0x7F; *(i3 - 1) = v115 | 0x80 )
            {
              v115 = v15;
              v15 >>= 7;
              ++i3;
            }
            *i3 = v15;
            v116 = (_DWORD)i3 + 1 - (_DWORD)v113;
            a4->buffer_size_ -= v116;
            a4->buffer_ += v116;
          }
          goto LABEL_5;
        case 40:
          if ( (int)*v11 <= 0 )
            goto LABEL_5;
          v117 = 0LL;
          v118 = *((_DWORD *)v7 + 1);
          if ( a4->buffer_size_ > 4 )
            goto LABEL_142;
          while ( 1 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v118);
            while ( 2 )
            {
              ++v117;
              google::protobuf::io::CodedOutputStream::WriteLittleEndian64(
                a4,
                *(_QWORD *)(*((_QWORD *)v11 + 1) + 8 * v117));
              if ( (int)*v11 <= (int)v117 )
                goto LABEL_5;
              v118 = *((_DWORD *)v7 + 1);
              if ( a4->buffer_size_ > 4 )
              {
LABEL_142:
                v119 = a4->buffer_;
                for ( i4 = v119; v118 > 0x7F; *(i4 - 1) = v121 | 0x80 )
                {
                  v121 = v118;
                  v118 >>= 7;
                  ++i4;
                }
                *i4 = v118;
                v122 = (_DWORD)i4 + 1 - (_DWORD)v119;
                a4->buffer_size_ -= v122;
                a4->buffer_ += v122;
                continue;
              }
              break;
            }
          }
        case 41:
          if ( (int)*v11 <= 0 )
            goto LABEL_5;
          v123 = 0LL;
          v124 = *((_DWORD *)v7 + 1);
          if ( a4->buffer_size_ > 4 )
            goto LABEL_150;
LABEL_155:
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v124);
          while ( 1 )
          {
            v129 = *(_DWORD *)(*((_QWORD *)v11 + 1) + 4 * v123++ + 8);
            google::protobuf::io::CodedOutputStream::WriteLittleEndian32(a4, v129);
            if ( (int)*v11 <= (int)v123 )
              goto LABEL_5;
            v124 = *((_DWORD *)v7 + 1);
            if ( a4->buffer_size_ <= 4 )
              goto LABEL_155;
LABEL_150:
            v125 = a4->buffer_;
            for ( i5 = v125; v124 > 0x7F; *(i5 - 1) = v127 | 0x80 )
            {
              v127 = v124;
              v124 >>= 7;
              ++i5;
            }
            *i5 = v124;
            v128 = (_DWORD)i5 + 1 - (_DWORD)v125;
            a4->buffer_size_ -= v128;
            a4->buffer_ += v128;
          }
        case 42:
          if ( (int)*v11 <= 0 )
            goto LABEL_5;
          v130 = 0;
          v131 = *((_DWORD *)v7 + 1);
          if ( a4->buffer_size_ > 4 )
            goto LABEL_158;
LABEL_167:
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v131);
          for ( i6 = a4->buffer_size_; ; i6 = v136 )
          {
            v138 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 8LL * v130 + 8);
            if ( i6 <= 9 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(a4, v138);
            }
            else
            {
              v139 = a4->buffer_;
              for ( i7 = v139; v138 > 0x7F; *(i7 - 1) = v141 | 0x80 )
              {
                v141 = v138;
                v138 >>= 7;
                ++i7;
              }
              *i7 = v138;
              v142 = (_DWORD)i7 + 1 - (_DWORD)v139;
              a4->buffer_size_ -= v142;
              a4->buffer_ += v142;
            }
            if ( (int)*v11 <= ++v130 )
              break;
            v131 = *((_DWORD *)v7 + 1);
            if ( a4->buffer_size_ <= 4 )
              goto LABEL_167;
LABEL_158:
            v132 = a4->buffer_;
            for ( i8 = v132; v131 > 0x7F; *(i8 - 1) = v134 | 0x80 )
            {
              v134 = v131;
              v131 >>= 7;
              ++i8;
            }
            *i8 = v131;
            v135 = (_DWORD)i8 + 1 - (_DWORD)v132;
            v136 = a4->buffer_size_ - v135;
            a4->buffer_ += v135;
            a4->buffer_size_ = v136;
          }
          goto LABEL_5;
        case 43:
          if ( (int)*v11 <= 0 )
            goto LABEL_5;
          v143 = 0;
          v144 = *((_DWORD *)v7 + 1);
          if ( a4->buffer_size_ > 4 )
            goto LABEL_170;
LABEL_179:
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v144);
          for ( i9 = a4->buffer_size_; ; i9 = v149 )
          {
            v151 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 8LL * v143 + 8);
            if ( i9 <= 9 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(a4, v151);
            }
            else
            {
              v152 = a4->buffer_;
              for ( i10 = v152; v151 > 0x7F; *(i10 - 1) = v154 | 0x80 )
              {
                v154 = v151;
                v151 >>= 7;
                ++i10;
              }
              *i10 = v151;
              v155 = (_DWORD)i10 + 1 - (_DWORD)v152;
              a4->buffer_size_ -= v155;
              a4->buffer_ += v155;
            }
            if ( (int)*v11 <= ++v143 )
              break;
            v144 = *((_DWORD *)v7 + 1);
            if ( a4->buffer_size_ <= 4 )
              goto LABEL_179;
LABEL_170:
            v145 = a4->buffer_;
            for ( i11 = v145; v144 > 0x7F; *(i11 - 1) = v147 | 0x80 )
            {
              v147 = v144;
              v144 >>= 7;
              ++i11;
            }
            *i11 = v144;
            v148 = (_DWORD)i11 + 1 - (_DWORD)v145;
            v149 = a4->buffer_size_ - v148;
            a4->buffer_ += v148;
            a4->buffer_size_ = v149;
          }
          goto LABEL_5;
        case 44:
          if ( (int)*v11 <= 0 )
            goto LABEL_5;
          v156 = 0;
          v157 = *((_DWORD *)v7 + 1);
          if ( a4->buffer_size_ > 4 )
            goto LABEL_182;
LABEL_191:
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v157);
          for ( i12 = a4->buffer_size_; ; i12 = v162 )
          {
            v164 = *(int *)(*((_QWORD *)v11 + 1) + 4LL * v156 + 8);
            if ( i12 <= 9 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(a4, v164);
            }
            else
            {
              v165 = a4->buffer_;
              for ( i13 = v165; v164 > 0x7F; *(i13 - 1) = v167 | 0x80 )
              {
                v167 = v164;
                v164 >>= 7;
                ++i13;
              }
              *i13 = v164;
              v168 = (_DWORD)i13 + 1 - (_DWORD)v165;
              a4->buffer_size_ -= v168;
              a4->buffer_ += v168;
            }
            if ( (int)*v11 <= ++v156 )
              break;
            v157 = *((_DWORD *)v7 + 1);
            if ( a4->buffer_size_ <= 4 )
              goto LABEL_191;
LABEL_182:
            v158 = a4->buffer_;
            for ( i14 = v158; v157 > 0x7F; *(i14 - 1) = v160 | 0x80 )
            {
              v160 = v157;
              v157 >>= 7;
              ++i14;
            }
            *i14 = v157;
            v161 = (_DWORD)i14 + 1 - (_DWORD)v158;
            v162 = a4->buffer_size_ - v161;
            a4->buffer_ += v161;
            a4->buffer_size_ = v162;
          }
          goto LABEL_5;
        case 45:
          if ( (int)*v11 <= 0 )
            goto LABEL_5;
          v169 = 0;
          v170 = *((_DWORD *)v7 + 1);
          if ( a4->buffer_size_ > 4 )
            goto LABEL_194;
LABEL_199:
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v170);
          while ( 1 )
          {
            v175 = v169++;
            google::protobuf::io::CodedOutputStream::WriteLittleEndian64(
              a4,
              *(_QWORD *)(*((_QWORD *)v11 + 1) + 8 * v175 + 8));
            if ( (int)*v11 <= v169 )
              goto LABEL_5;
            v170 = *((_DWORD *)v7 + 1);
            if ( a4->buffer_size_ <= 4 )
              goto LABEL_199;
LABEL_194:
            v171 = a4->buffer_;
            for ( i15 = v171; v170 > 0x7F; *(i15 - 1) = v173 | 0x80 )
            {
              v173 = v170;
              v170 >>= 7;
              ++i15;
            }
            *i15 = v170;
            v174 = (_DWORD)i15 + 1 - (_DWORD)v171;
            a4->buffer_size_ -= v174;
            a4->buffer_ += v174;
          }
        case 46:
          if ( (int)*v11 <= 0 )
            goto LABEL_5;
          v176 = 0;
          v177 = *((_DWORD *)v7 + 1);
          if ( a4->buffer_size_ > 4 )
            goto LABEL_202;
LABEL_207:
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v177);
          while ( 1 )
          {
            v182 = v176++;
            google::protobuf::io::CodedOutputStream::WriteLittleEndian32(
              a4,
              *(_DWORD *)(*((_QWORD *)v11 + 1) + 4 * v182 + 8));
            if ( (int)*v11 <= v176 )
              goto LABEL_5;
            v177 = *((_DWORD *)v7 + 1);
            if ( a4->buffer_size_ <= 4 )
              goto LABEL_207;
LABEL_202:
            v178 = a4->buffer_;
            for ( i16 = v178; v177 > 0x7F; *(i16 - 1) = v180 | 0x80 )
            {
              v180 = v177;
              v177 >>= 7;
              ++i16;
            }
            *i16 = v177;
            v181 = (_DWORD)i16 + 1 - (_DWORD)v178;
            a4->buffer_size_ -= v181;
            a4->buffer_ += v181;
          }
        case 47:
          if ( (int)*v11 <= 0 )
            goto LABEL_5;
          v183 = 0;
          v184 = *((_DWORD *)v7 + 1);
          if ( a4->buffer_size_ > 4 )
            goto LABEL_210;
LABEL_217:
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v184);
          for ( i17 = a4->buffer_size_; ; i17 = v189 )
          {
            v191 = *(unsigned __int8 *)(*((_QWORD *)v11 + 1) + v183 + 8LL);
            if ( i17 <= 4 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v191);
            }
            else
            {
              *a4->buffer_++ = v191;
              --a4->buffer_size_;
            }
            if ( (int)*v11 <= ++v183 )
              break;
            v184 = *((_DWORD *)v7 + 1);
            if ( a4->buffer_size_ <= 4 )
              goto LABEL_217;
LABEL_210:
            v185 = a4->buffer_;
            for ( i18 = v185; v184 > 0x7F; *(i18 - 1) = v187 | 0x80 )
            {
              v187 = v184;
              v184 >>= 7;
              ++i18;
            }
            *i18 = v184;
            v188 = (_DWORD)i18 + 1 - (_DWORD)v185;
            v189 = a4->buffer_size_ - v188;
            a4->buffer_ += v188;
            a4->buffer_size_ = v189;
          }
          goto LABEL_5;
        case 48:
          if ( (int)v11[2] <= 0 )
            goto LABEL_5;
          v192 = 0LL;
          v193 = *((_DWORD *)v7 + 1);
          if ( a4->buffer_size_ > 4 )
            goto LABEL_220;
LABEL_233:
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v193);
          for ( i19 = a4->buffer_size_; ; a4->buffer_size_ = i19 )
          {
            v199 = *((_QWORD *)v11 + 2);
            if ( v199 )
              v199 += 8LL;
            v200 = *(_QWORD *)(v199 + 8 * v192);
            v201 = *(_QWORD *)(v200 + 8);
            v202 = v201;
            if ( i19 <= 4 )
            {
              v409 = v200;
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v201);
              v200 = v409;
            }
            else
            {
              v203 = a4->buffer_;
              v204 = v203;
              if ( (unsigned int)v201 > 0x7F )
              {
                do
                {
                  v205 = v202;
                  v202 >>= 7;
                  *v204++ = v205 | 0x80;
                }
                while ( v202 > 0x7F );
              }
              *v204 = v202;
              v206 = (_DWORD)v204 + 1 - (_DWORD)v203;
              a4->buffer_size_ -= v206;
              a4->buffer_ += v206;
            }
            v207 = *(_QWORD *)(v200 + 8);
            v208 = *(const void **)v200;
            if ( a4->aliasing_enabled_ )
              google::protobuf::io::CodedOutputStream::WriteAliasedRaw(a4, v208, v207);
            else
              google::protobuf::io::CodedOutputStream::WriteRaw(a4, v208, v207);
            if ( (int)v11[2] <= (int)++v192 )
              break;
            v193 = *((_DWORD *)v7 + 1);
            if ( a4->buffer_size_ <= 4 )
              goto LABEL_233;
LABEL_220:
            v194 = a4->buffer_;
            for ( i20 = v194; v193 > 0x7F; *(i20 - 1) = v196 | 0x80 )
            {
              v196 = v193;
              v193 >>= 7;
              ++i20;
            }
            *i20 = v193;
            v197 = (_DWORD)i20 + 1 - (_DWORD)v194;
            a4->buffer_ += v197;
            i19 = a4->buffer_size_ - v197;
          }
          goto LABEL_5;
        case 49:
          if ( (int)v11[2] <= 0 )
            goto LABEL_5;
          v265 = 0LL;
          v266 = *((_DWORD *)v7 + 1);
          if ( a4->buffer_size_ > 4 )
            goto LABEL_292;
LABEL_303:
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v266);
          while ( 1 )
          {
            v271 = *((_QWORD *)v11 + 2);
            if ( v271 )
              v271 += 8LL;
            google::protobuf::internal::SerializeGroupTo<google::protobuf::io::CodedOutputStream>(
              *(const google::protobuf::MessageLite **)(v271 + 8 * v265),
              *((const void **)v7 + 2),
              a4);
            v272 = *((_DWORD *)v7 + 1) + 1;
            if ( a4->buffer_size_ <= 4 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v272);
            }
            else
            {
              v273 = a4->buffer_;
              for ( i21 = v273; v272 > 0x7F; *(i21 - 1) = v275 | 0x80 )
              {
                v275 = v272;
                v272 >>= 7;
                ++i21;
              }
              *i21 = v272;
              v276 = (_DWORD)i21 + 1 - (_DWORD)v273;
              a4->buffer_size_ -= v276;
              a4->buffer_ += v276;
            }
            if ( (int)v11[2] <= (int)++v265 )
              goto LABEL_5;
            v266 = *((_DWORD *)v7 + 1);
            if ( a4->buffer_size_ <= 4 )
              goto LABEL_303;
LABEL_292:
            v267 = a4->buffer_;
            for ( i22 = v267; v266 > 0x7F; *(i22 - 1) = v269 | 0x80 )
            {
              v269 = v266;
              v266 >>= 7;
              ++i22;
            }
            *i22 = v266;
            v270 = (_DWORD)i22 + 1 - (_DWORD)v267;
            a4->buffer_size_ -= v270;
            a4->buffer_ += v270;
          }
        case 50:
          if ( (int)v11[2] <= 0 )
            goto LABEL_5;
          v277 = 0LL;
          v278 = *((_DWORD *)v7 + 1);
          if ( a4->buffer_size_ > 4 )
            goto LABEL_306;
LABEL_313:
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v278);
          while ( 1 )
          {
            v283 = *((_QWORD *)v11 + 2);
            if ( v283 )
              v283 += 8LL;
            v284 = *(const google::protobuf::MessageLite **)(v283 + 8 * v277++);
            google::protobuf::internal::SerializeMessageTo<google::protobuf::io::CodedOutputStream>(
              v284,
              *((const void **)v7 + 2),
              a4);
            if ( (int)v11[2] <= (int)v277 )
              goto LABEL_5;
            v278 = *((_DWORD *)v7 + 1);
            if ( a4->buffer_size_ <= 4 )
              goto LABEL_313;
LABEL_306:
            v279 = a4->buffer_;
            for ( i23 = v279; v278 > 0x7F; *(i23 - 1) = v281 | 0x80 )
            {
              v281 = v278;
              v278 >>= 7;
              ++i23;
            }
            *i23 = v278;
            v282 = (_DWORD)i23 + 1 - (_DWORD)v279;
            a4->buffer_size_ -= v282;
            a4->buffer_ += v282;
          }
        case 51:
          if ( (int)v11[2] <= 0 )
            goto LABEL_5;
          v215 = 0LL;
          v216 = *((_DWORD *)v7 + 1);
          if ( a4->buffer_size_ > 4 )
            goto LABEL_244;
LABEL_257:
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v216);
          for ( i24 = a4->buffer_size_; ; a4->buffer_size_ = i24 )
          {
            v222 = *((_QWORD *)v11 + 2);
            if ( v222 )
              v222 += 8LL;
            v223 = *(_QWORD *)(v222 + 8 * v215);
            v224 = *(_QWORD *)(v223 + 8);
            v225 = v224;
            if ( i24 <= 4 )
            {
              v410 = v223;
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v224);
              v223 = v410;
            }
            else
            {
              v226 = a4->buffer_;
              v227 = v226;
              if ( (unsigned int)v224 > 0x7F )
              {
                do
                {
                  v228 = v225;
                  v225 >>= 7;
                  *v227++ = v228 | 0x80;
                }
                while ( v225 > 0x7F );
              }
              *v227 = v225;
              v229 = (_DWORD)v227 + 1 - (_DWORD)v226;
              a4->buffer_size_ -= v229;
              a4->buffer_ += v229;
            }
            v230 = *(_QWORD *)(v223 + 8);
            v231 = *(const void **)v223;
            if ( a4->aliasing_enabled_ )
              google::protobuf::io::CodedOutputStream::WriteAliasedRaw(a4, v231, v230);
            else
              google::protobuf::io::CodedOutputStream::WriteRaw(a4, v231, v230);
            if ( (int)v11[2] <= (int)++v215 )
              break;
            v216 = *((_DWORD *)v7 + 1);
            if ( a4->buffer_size_ <= 4 )
              goto LABEL_257;
LABEL_244:
            v217 = a4->buffer_;
            for ( i25 = v217; v216 > 0x7F; *(i25 - 1) = v219 | 0x80 )
            {
              v219 = v216;
              v216 >>= 7;
              ++i25;
            }
            *i25 = v216;
            v220 = (_DWORD)i25 + 1 - (_DWORD)v217;
            a4->buffer_ += v220;
            i24 = a4->buffer_size_ - v220;
          }
          goto LABEL_5;
        case 52:
          if ( (int)*v11 <= 0 )
            goto LABEL_5;
          v232 = 0;
          v233 = *((_DWORD *)v7 + 1);
          if ( a4->buffer_size_ > 4 )
            goto LABEL_260;
LABEL_269:
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v233);
          for ( i26 = a4->buffer_size_; ; i26 = v238 )
          {
            v240 = *(_DWORD *)(*((_QWORD *)v11 + 1) + 4LL * v232 + 8);
            if ( i26 <= 4 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v240);
            }
            else
            {
              v241 = a4->buffer_;
              for ( i27 = v241; v240 > 0x7F; *(i27 - 1) = v243 | 0x80 )
              {
                v243 = v240;
                v240 >>= 7;
                ++i27;
              }
              *i27 = v240;
              v244 = (_DWORD)i27 + 1 - (_DWORD)v241;
              a4->buffer_size_ -= v244;
              a4->buffer_ += v244;
            }
            if ( (int)*v11 <= ++v232 )
              break;
            v233 = *((_DWORD *)v7 + 1);
            if ( a4->buffer_size_ <= 4 )
              goto LABEL_269;
LABEL_260:
            v234 = a4->buffer_;
            for ( i28 = v234; v233 > 0x7F; *(i28 - 1) = v236 | 0x80 )
            {
              v236 = v233;
              v233 >>= 7;
              ++i28;
            }
            *i28 = v233;
            v237 = (_DWORD)i28 + 1 - (_DWORD)v234;
            v238 = a4->buffer_size_ - v237;
            a4->buffer_ += v237;
            a4->buffer_size_ = v238;
          }
          goto LABEL_5;
        case 53:
          if ( (int)*v11 <= 0 )
            goto LABEL_5;
          v245 = 0;
          v246 = *((_DWORD *)v7 + 1);
          if ( a4->buffer_size_ > 4 )
            goto LABEL_272;
LABEL_281:
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v246);
          for ( i29 = a4->buffer_size_; ; i29 = v251 )
          {
            v253 = *(int *)(*((_QWORD *)v11 + 1) + 4LL * v245 + 8);
            if ( i29 <= 9 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(a4, v253);
            }
            else
            {
              v254 = a4->buffer_;
              for ( i30 = v254; v253 > 0x7F; *(i30 - 1) = v256 | 0x80 )
              {
                v256 = v253;
                v253 >>= 7;
                ++i30;
              }
              *i30 = v253;
              v257 = (_DWORD)i30 + 1 - (_DWORD)v254;
              a4->buffer_size_ -= v257;
              a4->buffer_ += v257;
            }
            if ( (int)*v11 <= ++v245 )
              break;
            v246 = *((_DWORD *)v7 + 1);
            if ( a4->buffer_size_ <= 4 )
              goto LABEL_281;
LABEL_272:
            v247 = a4->buffer_;
            for ( i31 = v247; v246 > 0x7F; *(i31 - 1) = v249 | 0x80 )
            {
              v249 = v246;
              v246 >>= 7;
              ++i31;
            }
            *i31 = v246;
            v250 = (_DWORD)i31 + 1 - (_DWORD)v247;
            v251 = a4->buffer_size_ - v250;
            a4->buffer_ += v250;
            a4->buffer_size_ = v251;
          }
          goto LABEL_5;
        case 54:
          if ( (int)*v11 <= 0 )
            goto LABEL_5;
          v258 = 0LL;
          v259 = *((_DWORD *)v7 + 1);
          if ( a4->buffer_size_ > 4 )
            goto LABEL_284;
LABEL_289:
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v259);
          while ( 1 )
          {
            v264 = *(_DWORD *)(*((_QWORD *)v11 + 1) + 4 * v258++ + 8);
            google::protobuf::io::CodedOutputStream::WriteLittleEndian32(a4, v264);
            if ( (int)*v11 <= (int)v258 )
              goto LABEL_5;
            v259 = *((_DWORD *)v7 + 1);
            if ( a4->buffer_size_ <= 4 )
              goto LABEL_289;
LABEL_284:
            v260 = a4->buffer_;
            for ( i32 = v260; v259 > 0x7F; *(i32 - 1) = v262 | 0x80 )
            {
              v262 = v259;
              v259 >>= 7;
              ++i32;
            }
            *i32 = v259;
            v263 = (_DWORD)i32 + 1 - (_DWORD)v260;
            a4->buffer_size_ -= v263;
            a4->buffer_ += v263;
          }
        case 55:
          if ( (int)*v11 <= 0 )
            goto LABEL_5;
          v209 = 0LL;
          v210 = *((_DWORD *)v7 + 1);
          if ( a4->buffer_size_ > 4 )
            goto LABEL_236;
LABEL_241:
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v210);
          while ( 1 )
          {
            ++v209;
            google::protobuf::io::CodedOutputStream::WriteLittleEndian64(
              a4,
              *(_QWORD *)(*((_QWORD *)v11 + 1) + 8 * v209));
            if ( (int)*v11 <= (int)v209 )
              goto LABEL_5;
            v210 = *((_DWORD *)v7 + 1);
            if ( a4->buffer_size_ <= 4 )
              goto LABEL_241;
LABEL_236:
            v211 = a4->buffer_;
            for ( i33 = v211; v210 > 0x7F; *(i33 - 1) = v213 | 0x80 )
            {
              v213 = v210;
              v210 >>= 7;
              ++i33;
            }
            *i33 = v210;
            v214 = (_DWORD)i33 + 1 - (_DWORD)v211;
            a4->buffer_size_ -= v214;
            a4->buffer_ += v214;
          }
        case 56:
          if ( (int)*v11 <= 0 )
            goto LABEL_5;
          v320 = 0;
          v321 = *((_DWORD *)v7 + 1);
          if ( a4->buffer_size_ > 4 )
            goto LABEL_365;
LABEL_374:
          google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v321);
          for ( i34 = a4->buffer_size_; ; a4->buffer_size_ = i34 )
          {
            v327 = *(_DWORD *)(*((_QWORD *)v11 + 1) + 4LL * v320 + 8);
            v328 = (v327 >> 31) ^ (2 * v327);
            if ( i34 <= 4 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v328);
            }
            else
            {
              v329 = a4->buffer_;
              for ( i35 = v329; v328 > 0x7F; *(i35 - 1) = v331 | 0x80 )
              {
                v331 = v328;
                v328 >>= 7;
                ++i35;
              }
              *i35 = v328;
              v332 = (_DWORD)i35 + 1 - (_DWORD)v329;
              a4->buffer_size_ -= v332;
              a4->buffer_ += v332;
            }
            if ( (int)*v11 <= ++v320 )
              break;
            v321 = *((_DWORD *)v7 + 1);
            if ( a4->buffer_size_ <= 4 )
              goto LABEL_374;
LABEL_365:
            v322 = a4->buffer_;
            for ( i36 = v322; v321 > 0x7F; *(i36 - 1) = v324 | 0x80 )
            {
              v324 = v321;
              v321 >>= 7;
              ++i36;
            }
            *i36 = v321;
            v325 = (_DWORD)i36 + 1 - (_DWORD)v322;
            a4->buffer_ += v325;
            i34 = a4->buffer_size_ - v325;
          }
          goto LABEL_5;
        case 57:
          if ( (int)*v11 <= 0 )
            goto LABEL_5;
          v305 = 0;
          v306 = *((_DWORD *)v7 + 1);
          if ( a4->buffer_size_ > 4 )
            goto LABEL_348;
          break;
        case 60:
          if ( *v11 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, v11[4]);
            if ( (int)*v11 > 0 )
            {
              v318 = 0LL;
              do
              {
                v319 = v318 + 1;
                google::protobuf::io::CodedOutputStream::WriteLittleEndian64(
                  a4,
                  *(_QWORD *)(*((_QWORD *)v11 + 1) + 8 * (v318 + 1)));
                v318 = v319;
              }
              while ( (int)*v11 > (int)v319 );
            }
          }
          goto LABEL_5;
        case 61:
          if ( *v11 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, v11[4]);
            if ( (int)*v11 > 0 )
            {
              v285 = 0LL;
              do
              {
                v286 = *(_DWORD *)(*((_QWORD *)v11 + 1) + 4 * v285++ + 8);
                google::protobuf::io::CodedOutputStream::WriteLittleEndian32(a4, v286);
              }
              while ( (int)*v11 > (int)v285 );
            }
          }
          goto LABEL_5;
        case 62:
          if ( *v11 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, v11[4]);
            if ( (int)*v11 > 0 )
            {
              v287 = 0;
              do
              {
                v288 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 8LL * v287 + 8);
                if ( a4->buffer_size_ <= 9 )
                {
                  google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(a4, v288);
                }
                else
                {
                  v289 = a4->buffer_;
                  for ( i37 = v289; v288 > 0x7F; *(i37 - 1) = v291 | 0x80 )
                  {
                    v291 = v288;
                    v288 >>= 7;
                    ++i37;
                  }
                  *i37 = v288;
                  v292 = (_DWORD)i37 + 1 - (_DWORD)v289;
                  a4->buffer_size_ -= v292;
                  a4->buffer_ += v292;
                }
                ++v287;
              }
              while ( (int)*v11 > v287 );
            }
          }
          goto LABEL_5;
        case 63:
          if ( *v11 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, v11[4]);
            if ( (int)*v11 > 0 )
            {
              v293 = 0;
              do
              {
                v294 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 8LL * v293 + 8);
                if ( a4->buffer_size_ <= 9 )
                {
                  google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(a4, v294);
                }
                else
                {
                  v295 = a4->buffer_;
                  for ( i38 = v295; v294 > 0x7F; *(i38 - 1) = v297 | 0x80 )
                  {
                    v297 = v294;
                    v294 >>= 7;
                    ++i38;
                  }
                  *i38 = v294;
                  v298 = (_DWORD)i38 + 1 - (_DWORD)v295;
                  a4->buffer_size_ -= v298;
                  a4->buffer_ += v298;
                }
                ++v293;
              }
              while ( (int)*v11 > v293 );
            }
          }
          goto LABEL_5;
        case 64:
          if ( *v11 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, v11[4]);
            if ( (int)*v11 > 0 )
            {
              v299 = 0;
              do
              {
                v300 = *(int *)(*((_QWORD *)v11 + 1) + 4LL * v299 + 8);
                if ( a4->buffer_size_ <= 9 )
                {
                  google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(a4, v300);
                }
                else
                {
                  v301 = a4->buffer_;
                  for ( i39 = v301; v300 > 0x7F; *(i39 - 1) = v303 | 0x80 )
                  {
                    v303 = v300;
                    v300 >>= 7;
                    ++i39;
                  }
                  *i39 = v300;
                  v304 = (_DWORD)i39 + 1 - (_DWORD)v301;
                  a4->buffer_size_ -= v304;
                  a4->buffer_ += v304;
                }
                ++v299;
              }
              while ( (int)*v11 > v299 );
            }
          }
          goto LABEL_5;
        case 65:
          if ( *v11 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, v11[4]);
            if ( (int)*v11 > 0 )
            {
              v333 = 0;
              do
              {
                v334 = v333++;
                google::protobuf::io::CodedOutputStream::WriteLittleEndian64(
                  a4,
                  *(_QWORD *)(*((_QWORD *)v11 + 1) + 8 * v334 + 8));
              }
              while ( (int)*v11 > v333 );
            }
          }
          goto LABEL_5;
        case 66:
          if ( *v11 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, v11[4]);
            if ( (int)*v11 > 0 )
            {
              v335 = 0;
              do
              {
                v336 = v335++;
                google::protobuf::io::CodedOutputStream::WriteLittleEndian32(
                  a4,
                  *(_DWORD *)(*((_QWORD *)v11 + 1) + 4 * v336 + 8));
              }
              while ( (int)*v11 > v335 );
            }
          }
          goto LABEL_5;
        case 67:
          if ( *v11 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, v11[4]);
            if ( (int)*v11 > 0 )
            {
              v337 = 0;
              do
              {
                v338 = *(_BYTE *)(*((_QWORD *)v11 + 1) + v337 + 8LL);
                if ( a4->buffer_size_ > 4 )
                {
                  *a4->buffer_++ = v338;
                  --a4->buffer_size_;
                }
                else
                {
                  google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v338);
                }
                ++v337;
              }
              while ( (int)*v11 > v337 );
            }
          }
          goto LABEL_5;
        case 68:
        case 69:
        case 70:
        case 71:
          google::protobuf::internal::LogMessage::LogMessage(
            &v412,
            LOGLEVEL_FATAL_0,
            "google/protobuf/generated_message_util.cc",
            509);
          v339 = google::protobuf::internal::LogMessage::operator<<(&v412, "Not implemented field number ");
          v340 = google::protobuf::internal::LogMessage::operator<<(v339, *((_DWORD *)v7 + 1));
          v341 = google::protobuf::internal::LogMessage::operator<<(v340, " with type ");
          v342 = google::protobuf::internal::LogMessage::operator<<(v341, *((_DWORD *)v7 + 3));
          google::protobuf::internal::LogFinisher::operator=(&v411, v342);
          google::protobuf::internal::LogMessage::~LogMessage(&v412);
          goto LABEL_5;
        case 72:
          if ( *v11 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, v11[4]);
            if ( (int)*v11 > 0 )
            {
              v343 = 0;
              do
              {
                v344 = *(_DWORD *)(*((_QWORD *)v11 + 1) + 4LL * v343 + 8);
                if ( a4->buffer_size_ <= 4 )
                {
                  google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v344);
                }
                else
                {
                  v345 = a4->buffer_;
                  for ( i40 = v345; v344 > 0x7F; *(i40 - 1) = v347 | 0x80 )
                  {
                    v347 = v344;
                    v344 >>= 7;
                    ++i40;
                  }
                  *i40 = v344;
                  v348 = (_DWORD)i40 + 1 - (_DWORD)v345;
                  a4->buffer_size_ -= v348;
                  a4->buffer_ += v348;
                }
                ++v343;
              }
              while ( (int)*v11 > v343 );
            }
          }
          goto LABEL_5;
        case 73:
          if ( *v11 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, v11[4]);
            if ( (int)*v11 > 0 )
            {
              v349 = 0;
              do
              {
                v350 = *(int *)(*((_QWORD *)v11 + 1) + 4LL * v349 + 8);
                if ( a4->buffer_size_ <= 9 )
                {
                  google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(a4, v350);
                }
                else
                {
                  v351 = a4->buffer_;
                  for ( i41 = v351; v350 > 0x7F; *(i41 - 1) = v353 | 0x80 )
                  {
                    v353 = v350;
                    v350 >>= 7;
                    ++i41;
                  }
                  *i41 = v350;
                  v354 = (_DWORD)i41 + 1 - (_DWORD)v351;
                  a4->buffer_size_ -= v354;
                  a4->buffer_ += v354;
                }
                ++v349;
              }
              while ( (int)*v11 > v349 );
            }
          }
          goto LABEL_5;
        case 74:
          if ( *v11 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, v11[4]);
            if ( (int)*v11 > 0 )
            {
              v355 = 0LL;
              do
              {
                v356 = *(_DWORD *)(*((_QWORD *)v11 + 1) + 4 * v355++ + 8);
                google::protobuf::io::CodedOutputStream::WriteLittleEndian32(a4, v356);
              }
              while ( (int)*v11 > (int)v355 );
            }
          }
          goto LABEL_5;
        case 75:
          if ( *v11 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, v11[4]);
            if ( (int)*v11 > 0 )
            {
              v357 = 0LL;
              do
              {
                v358 = v357 + 1;
                google::protobuf::io::CodedOutputStream::WriteLittleEndian64(
                  a4,
                  *(_QWORD *)(*((_QWORD *)v11 + 1) + 8 * (v357 + 1)));
                v357 = v358;
              }
              while ( (int)*v11 > (int)v358 );
            }
          }
          goto LABEL_5;
        case 76:
          if ( *v11 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, v11[4]);
            if ( (int)*v11 > 0 )
            {
              v359 = 0;
              do
              {
                v360 = *(_DWORD *)(*((_QWORD *)v11 + 1) + 4LL * v359 + 8);
                v361 = (v360 >> 31) ^ (2 * v360);
                if ( a4->buffer_size_ <= 4 )
                {
                  google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v361);
                }
                else
                {
                  v362 = a4->buffer_;
                  for ( i42 = v362; v361 > 0x7F; *(i42 - 1) = v364 | 0x80 )
                  {
                    v364 = v361;
                    v361 >>= 7;
                    ++i42;
                  }
                  *i42 = v361;
                  v365 = (_DWORD)i42 + 1 - (_DWORD)v362;
                  a4->buffer_size_ -= v365;
                  a4->buffer_ += v365;
                }
                ++v359;
              }
              while ( (int)*v11 > v359 );
            }
          }
          goto LABEL_5;
        case 77:
          if ( *v11 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, v11[4]);
            if ( (int)*v11 > 0 )
            {
              v366 = 0;
              do
              {
                v367 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 8LL * v366 + 8);
                v368 = (v367 >> 63) ^ (2 * v367);
                if ( a4->buffer_size_ <= 9 )
                {
                  google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(a4, v368);
                }
                else
                {
                  v369 = a4->buffer_;
                  for ( i43 = v369; v368 > 0x7F; *(i43 - 1) = v371 | 0x80 )
                  {
                    v371 = v368;
                    v368 >>= 7;
                    ++i43;
                  }
                  *i43 = v368;
                  v372 = (_DWORD)i43 + 1 - (_DWORD)v369;
                  a4->buffer_size_ -= v372;
                  a4->buffer_ += v372;
                }
                ++v366;
              }
              while ( (int)*v11 > v366 );
            }
          }
          goto LABEL_5;
        case 80:
          v373 = *((_DWORD *)v7 + 1);
          if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v373 >> 3 )
            goto LABEL_492;
          goto LABEL_5;
        case 81:
          v374 = *((_DWORD *)v7 + 1);
          if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v374 >> 3 )
            goto LABEL_490;
          goto LABEL_5;
        case 82:
          if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == *((_DWORD *)v7 + 1) >> 3 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v15 = *(_QWORD *)v11;
            if ( a4->buffer_size_ <= 9 )
              goto LABEL_530;
            v375 = a4->buffer_;
            for ( i44 = v375; v15 > 0x7F; *(i44 - 1) = v377 | 0x80 )
            {
              v377 = v15;
              v15 >>= 7;
              ++i44;
            }
            *i44 = v15;
            v378 = (_DWORD)i44 + 1 - (_DWORD)v375;
            a4->buffer_size_ -= v378;
            a4->buffer_ += v378;
          }
          goto LABEL_5;
        case 83:
          if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == *((_DWORD *)v7 + 1) >> 3 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v15 = *(_QWORD *)v11;
            if ( a4->buffer_size_ <= 9 )
              goto LABEL_530;
            v379 = a4->buffer_;
            for ( i45 = v379; v15 > 0x7F; *(i45 - 1) = v381 | 0x80 )
            {
              v381 = v15;
              v15 >>= 7;
              ++i45;
            }
            *i45 = v15;
            v382 = (_DWORD)i45 + 1 - (_DWORD)v379;
            a4->buffer_size_ -= v382;
            a4->buffer_ += v382;
          }
          goto LABEL_5;
        case 84:
          if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == *((_DWORD *)v7 + 1) >> 3 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v15 = (int)*v11;
            if ( a4->buffer_size_ <= 9 )
              goto LABEL_530;
            v383 = a4->buffer_;
            for ( i46 = v383; v15 > 0x7F; *(i46 - 1) = v385 | 0x80 )
            {
              v385 = v15;
              v15 >>= 7;
              ++i46;
            }
            *i46 = v15;
            v386 = (_DWORD)i46 + 1 - (_DWORD)v383;
            a4->buffer_size_ -= v386;
            a4->buffer_ += v386;
          }
          goto LABEL_5;
        case 85:
          v373 = *((_DWORD *)v7 + 1);
          if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v373 >> 3 )
            goto LABEL_492;
          goto LABEL_5;
        case 86:
          v374 = *((_DWORD *)v7 + 1);
          if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v374 >> 3 )
            goto LABEL_490;
          goto LABEL_5;
        case 87:
          if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == *((_DWORD *)v7 + 1) >> 3 )
          {
LABEL_463:
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *(unsigned __int8 *)v11);
          }
          goto LABEL_5;
        case 88:
          if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == *((_DWORD *)v7 + 1) >> 3 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v387 = *(const google::protobuf::MessageLite **)v11;
            v388 = v387[1]._vptr_MessageLite;
            v389 = (unsigned int)v388;
            if ( a4->buffer_size_ <= 4 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, (google::protobuf::uint32)v388);
            }
            else
            {
              v390 = a4->buffer_;
              v391 = v390;
              if ( (unsigned int)v388 > 0x7F )
              {
                do
                {
                  v392 = v389;
                  v389 >>= 7;
                  *v391++ = v392 | 0x80;
                }
                while ( v389 > 0x7F );
              }
              *v391 = v389;
              v393 = (_DWORD)v391 + 1 - (_DWORD)v390;
              a4->buffer_size_ -= v393;
              a4->buffer_ += v393;
            }
            v41 = v387[1]._vptr_MessageLite;
            v42 = a4;
            v43 = v387->_vptr_MessageLite;
            if ( !a4->aliasing_enabled_ )
              goto LABEL_523;
            goto LABEL_481;
          }
          goto LABEL_5;
        case 89:
          if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == *((_DWORD *)v7 + 1) >> 3 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::internal::SerializeGroupTo<google::protobuf::io::CodedOutputStream>(
              *(const google::protobuf::MessageLite **)v11,
              *((const void **)v7 + 2),
              a4);
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1) + 1);
          }
          goto LABEL_5;
        case 90:
          if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == *((_DWORD *)v7 + 1) >> 3 )
          {
LABEL_474:
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::internal::SerializeMessageTo<google::protobuf::io::CodedOutputStream>(
              *(const google::protobuf::MessageLite **)v11,
              *((const void **)v7 + 2),
              a4);
          }
          goto LABEL_5;
        case 91:
          if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == *((_DWORD *)v7 + 1) >> 3 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v394 = *(const google::protobuf::MessageLite **)v11;
            v395 = v394[1]._vptr_MessageLite;
            v396 = (unsigned int)v395;
            if ( a4->buffer_size_ <= 4 )
            {
              google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, (google::protobuf::uint32)v395);
            }
            else
            {
              v397 = a4->buffer_;
              v398 = v397;
              if ( (unsigned int)v395 > 0x7F )
              {
                do
                {
                  v399 = v396;
                  v396 >>= 7;
                  *v398++ = v399 | 0x80;
                }
                while ( v396 > 0x7F );
              }
              *v398 = v396;
              v400 = (_DWORD)v398 + 1 - (_DWORD)v397;
              a4->buffer_size_ -= v400;
              a4->buffer_ += v400;
            }
            v41 = v394[1]._vptr_MessageLite;
            v42 = a4;
            v43 = v394->_vptr_MessageLite;
            if ( a4->aliasing_enabled_ )
LABEL_481:
              google::protobuf::io::CodedOutputStream::WriteAliasedRaw(v42, v43, (int)v41);
            else
LABEL_523:
              google::protobuf::io::CodedOutputStream::WriteRaw(v42, v43, (int)v41);
          }
          goto LABEL_5;
        case 92:
          if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == *((_DWORD *)v7 + 1) >> 3 )
          {
LABEL_483:
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *v11);
          }
          goto LABEL_5;
        case 93:
          if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == *((_DWORD *)v7 + 1) >> 3 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v15 = (int)*v11;
            if ( a4->buffer_size_ <= 9 )
              goto LABEL_530;
            v401 = a4->buffer_;
            for ( i47 = v401; v15 > 0x7F; *(i47 - 1) = v403 | 0x80 )
            {
              v403 = v15;
              v15 >>= 7;
              ++i47;
            }
            *i47 = v15;
            v404 = (_DWORD)i47 + 1 - (_DWORD)v401;
            a4->buffer_size_ -= v404;
            a4->buffer_ += v404;
          }
          goto LABEL_5;
        case 94:
          v374 = *((_DWORD *)v7 + 1);
          if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v374 >> 3 )
          {
LABEL_490:
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, v374);
            google::protobuf::io::CodedOutputStream::WriteLittleEndian32(a4, *v11);
          }
          goto LABEL_5;
        case 95:
          v373 = *((_DWORD *)v7 + 1);
          if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v373 >> 3 )
          {
LABEL_492:
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, v373);
            google::protobuf::io::CodedOutputStream::WriteLittleEndian64(a4, *(_QWORD *)v11);
          }
          goto LABEL_5;
        case 96:
          if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == *((_DWORD *)v7 + 1) >> 3 )
          {
LABEL_494:
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, ((int)*v11 >> 31) ^ (2 * *v11));
          }
          goto LABEL_5;
        case 97:
          if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == *((_DWORD *)v7 + 1) >> 3 )
          {
            google::protobuf::io::CodedOutputStream::WriteVarint32(a4, *((_DWORD *)v7 + 1));
            v15 = (*(__int64 *)v11 >> 63) ^ (2LL * *(_QWORD *)v11);
            if ( a4->buffer_size_ <= 9 )
            {
LABEL_530:
              google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(a4, v15);
            }
            else
            {
              v405 = a4->buffer_;
              for ( i48 = v405; v15 > 0x7F; *(i48 - 1) = v407 | 0x80 )
              {
                v407 = v15;
                v15 >>= 7;
                ++i48;
              }
              *i48 = v15;
              v408 = (_DWORD)i48 + 1 - (_DWORD)v405;
              a4->buffer_size_ -= v408;
              a4->buffer_ += v408;
            }
          }
          goto LABEL_5;
        case 100:
          (*((void (__fastcall **)(google::protobuf::internal *, __int64, _QWORD, _QWORD, google::protobuf::io::CodedOutputStream *))v7
           + 2))(
            this,
            v10,
            *((unsigned int *)v7 + 1),
            *((unsigned int *)v7 + 2),
            a4);
          goto LABEL_5;
        default:
          google::protobuf::internal::SerializeNotImplemented(v9);
          goto LABEL_5;
      }
LABEL_357:
      google::protobuf::io::CodedOutputStream::WriteVarint32SlowPath(a4, v306);
      for ( i49 = a4->buffer_size_; ; a4->buffer_size_ = i49 )
      {
        v312 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 8LL * v305 + 8);
        v313 = (v312 >> 63) ^ (2 * v312);
        if ( i49 <= 9 )
        {
          google::protobuf::io::CodedOutputStream::WriteVarint64SlowPath(a4, v313);
        }
        else
        {
          v314 = a4->buffer_;
          for ( i50 = v314; v313 > 0x7F; *(i50 - 1) = v316 | 0x80 )
          {
            v316 = v313;
            v313 >>= 7;
            ++i50;
          }
          *i50 = v313;
          v317 = (_DWORD)i50 + 1 - (_DWORD)v314;
          a4->buffer_size_ -= v317;
          a4->buffer_ += v317;
        }
        if ( (int)*v11 <= ++v305 )
          break;
        v306 = *((_DWORD *)v7 + 1);
        if ( a4->buffer_size_ <= 4 )
          goto LABEL_357;
LABEL_348:
        v307 = a4->buffer_;
        for ( i51 = v307; v306 > 0x7F; *(i51 - 1) = v309 | 0x80 )
        {
          v309 = v306;
          v306 >>= 7;
          ++i51;
        }
        *i51 = v306;
        v310 = (_DWORD)i51 + 1 - (_DWORD)v307;
        a4->buffer_ += v310;
        i49 = a4->buffer_size_ - v310;
      }
LABEL_5:
      v7 += 24;
    }
    while ( v5 != v7 );
  }
};

// Line 638: range 000000000C899D20-000000000C89C5BB
google::protobuf::uint8 *__fastcall google::protobuf::internal::SerializeInternalToArray(
        google::protobuf::internal *this,
        const unsigned __int8 *a2,
        const google::protobuf::internal::FieldMetadata *a3,
        bool a4,
        google::protobuf::uint8 *a5,
        unsigned __int8 *a6)
{
  const unsigned __int8 *v7; // rbp
  const unsigned __int8 *v8; // r13
  google::protobuf::internal *v9; // rdi
  _QWORD *v10; // rbx
  int v12; // eax
  unsigned int v13; // eax
  google::protobuf::uint8 *i; // rdx
  char v15; // cl
  google::protobuf::uint8 *v16; // rdx
  int v17; // eax
  unsigned int v18; // eax
  google::protobuf::uint8 *j; // rdx
  char v20; // cl
  google::protobuf::uint8 *v21; // rdx
  int v22; // eax
  unsigned int v23; // edx
  google::protobuf::uint8 *k; // rax
  char v25; // cl
  unsigned __int64 v26; // rdx
  _BYTE *m; // rax
  char v28; // cl
  int v29; // eax
  unsigned int v30; // edx
  google::protobuf::uint8 *n; // rax
  char v32; // cl
  unsigned __int64 v33; // rdx
  _BYTE *ii; // rax
  char v35; // cl
  int v36; // eax
  unsigned int v37; // edx
  google::protobuf::uint8 *jj; // rax
  char v39; // cl
  unsigned __int64 v40; // rdx
  _BYTE *kk; // rax
  char v42; // cl
  int v43; // eax
  unsigned int v44; // eax
  google::protobuf::uint8 *mm; // rdx
  char v46; // cl
  google::protobuf::uint8 *v47; // rdx
  int v48; // eax
  unsigned int v49; // eax
  google::protobuf::uint8 *nn; // rdx
  char v51; // cl
  google::protobuf::uint8 *v52; // rdx
  int v53; // eax
  unsigned int v54; // eax
  google::protobuf::uint8 *i1; // rdx
  char v56; // cl
  google::protobuf::uint8 *v57; // rdx
  int v58; // eax
  unsigned int v59; // eax
  google::protobuf::uint8 *i2; // rdx
  char v61; // cl
  int v62; // eax
  unsigned int v63; // eax
  google::protobuf::uint8 *i3; // rdx
  char v65; // cl
  const void *v66; // rsi
  const google::protobuf::MessageLite *v67; // rdi
  google::protobuf::uint8 *ptr; // rdx
  unsigned int i4; // eax
  char v70; // cl
  int v71; // eax
  unsigned int v72; // eax
  google::protobuf::uint8 *i5; // rdx
  char v74; // cl
  int v75; // eax
  char v76; // cl
  int v77; // eax
  unsigned int v78; // edx
  google::protobuf::uint8 *i6; // rax
  char v80; // cl
  unsigned int v81; // edx
  _BYTE *i7; // rax
  char v83; // cl
  int v84; // eax
  unsigned int v85; // edx
  google::protobuf::uint8 *i8; // rax
  char v87; // cl
  unsigned __int64 v88; // rdx
  _BYTE *i9; // rax
  char v90; // cl
  int v91; // eax
  unsigned int v92; // eax
  google::protobuf::uint8 *i10; // rdx
  char v94; // cl
  google::protobuf::uint8 *v95; // rdx
  int v96; // eax
  unsigned int v97; // eax
  google::protobuf::uint8 *i11; // rdx
  char v99; // cl
  google::protobuf::uint8 *v100; // rdx
  int v101; // eax
  unsigned int v102; // edx
  google::protobuf::uint8 *i12; // rax
  char v104; // cl
  _BYTE *v105; // rax
  unsigned int i13; // edx
  char v107; // cl
  int v108; // eax
  unsigned int v109; // edx
  google::protobuf::uint8 *i14; // rax
  char v111; // cl
  _BYTE *v112; // rax
  unsigned __int64 i15; // rdx
  char v114; // cl
  unsigned int v115; // eax
  google::protobuf::uint8 *i16; // rdx
  char v117; // cl
  google::protobuf::uint8 *v118; // rdx
  unsigned int v119; // eax
  google::protobuf::uint8 *i17; // rdx
  char v121; // cl
  google::protobuf::uint8 *v122; // rdx
  unsigned int v123; // edx
  google::protobuf::uint8 *i18; // rax
  char v125; // cl
  unsigned __int64 v126; // rdx
  _BYTE *i19; // rax
  char v128; // cl
  unsigned int v129; // edx
  google::protobuf::uint8 *i20; // rax
  char v131; // cl
  unsigned __int64 v132; // rdx
  _BYTE *i21; // rax
  char v134; // cl
  unsigned int v135; // edx
  google::protobuf::uint8 *i22; // rax
  char v137; // cl
  unsigned __int64 v138; // rdx
  _BYTE *i23; // rax
  char v140; // cl
  unsigned int v141; // eax
  google::protobuf::uint8 *i24; // rdx
  char v143; // cl
  google::protobuf::uint8 *v144; // rdx
  unsigned int v145; // eax
  google::protobuf::uint8 *i25; // rdx
  char v147; // cl
  google::protobuf::uint8 *v148; // rdx
  unsigned int v149; // eax
  google::protobuf::uint8 *i26; // rdx
  char v151; // cl
  google::protobuf::uint8 *v152; // rdx
  char v153; // cl
  unsigned int v154; // eax
  google::protobuf::uint8 *i27; // rdx
  char v156; // cl
  const void *v157; // rsi
  const google::protobuf::MessageLite *v158; // rdi
  google::protobuf::uint8 *v159; // rdx
  unsigned int i28; // eax
  char v161; // cl
  char v162; // cl
  unsigned int v163; // edx
  google::protobuf::uint8 *i78; // rax
  char v165; // cl
  unsigned int v166; // edx
  _BYTE *i79; // rax
  char v168; // cl
  int v169; // r11d
  google::protobuf::uint8 *v170; // rax
  int v171; // edx
  __int64 v172; // rsi
  google::protobuf::uint8 *v173; // rdx
  int v174; // esi
  unsigned int i49; // eax
  char v176; // cl
  __int64 v177; // rax
  unsigned int v178; // edx
  google::protobuf::uint8 *i104; // rax
  char v180; // cl
  unsigned __int64 v181; // rdx
  _BYTE *i105; // rax
  char v183; // cl
  unsigned int v184; // edx
  google::protobuf::uint8 *i106; // rax
  char v186; // cl
  unsigned __int64 v187; // rdx
  _BYTE *i107; // rax
  char v189; // cl
  unsigned int v190; // eax
  google::protobuf::uint8 *i108; // rdx
  char v192; // cl
  google::protobuf::uint8 *v193; // rdx
  unsigned int v194; // eax
  google::protobuf::uint8 *i109; // rdx
  char v196; // cl
  google::protobuf::uint8 *v197; // rdx
  unsigned int v198; // eax
  google::protobuf::uint8 *i110; // rdx
  char v200; // cl
  google::protobuf::uint8 *v201; // rdx
  char v202; // cl
  unsigned int v203; // eax
  google::protobuf::uint8 *i111; // rdx
  char v205; // cl
  const void *v206; // rsi
  const google::protobuf::MessageLite *v207; // rdi
  google::protobuf::uint8 *v208; // rdx
  unsigned int i112; // eax
  char v210; // cl
  char v211; // cl
  const void *v212; // rsi
  const google::protobuf::MessageLite *v213; // rdi
  char v214; // cl
  unsigned int v215; // edx
  google::protobuf::uint8 *i113; // rax
  char v217; // cl
  unsigned int v218; // edx
  _BYTE *i114; // rax
  char v220; // cl
  unsigned int v221; // edx
  google::protobuf::uint8 *i115; // rax
  char v223; // cl
  unsigned __int64 v224; // rdx
  _BYTE *i116; // rax
  char v226; // cl
  unsigned int v227; // eax
  google::protobuf::uint8 *i117; // rdx
  char v229; // cl
  google::protobuf::uint8 *v230; // rdx
  unsigned int v231; // eax
  google::protobuf::uint8 *i118; // rdx
  char v233; // cl
  google::protobuf::uint8 *v234; // rdx
  unsigned int v235; // edx
  google::protobuf::uint8 *i119; // rax
  char v237; // cl
  _BYTE *v238; // rax
  unsigned int i120; // edx
  char v240; // cl
  unsigned int v241; // edx
  google::protobuf::uint8 *i121; // rax
  char v243; // cl
  _BYTE *v244; // rax
  unsigned __int64 i122; // rdx
  char v246; // cl
  __int64 v247; // rcx
  __int64 v248; // rdx
  __int64 v249; // rsi
  unsigned int v250; // eax
  google::protobuf::uint8 *i87; // rdx
  char v252; // cl
  unsigned int v253; // eax
  _BYTE *i88; // rdx
  char v255; // cl
  int v256; // eax
  google::protobuf::uint8 *v257; // rdx
  int v258; // esi
  unsigned __int64 i89; // rax
  char v260; // cl
  unsigned int v261; // edx
  google::protobuf::uint8 *i90; // rax
  char v263; // cl
  unsigned int v264; // edx
  _BYTE *i91; // rax
  char v266; // cl
  int v267; // r15d
  google::protobuf::uint8 *v268; // rdx
  int v269; // ecx
  __int64 v270; // rsi
  google::protobuf::uint8 *v271; // rax
  unsigned int v272; // edx
  google::protobuf::uint8 *i92; // rax
  char v274; // cl
  unsigned int v275; // edx
  _BYTE *i93; // rax
  char v277; // cl
  int v278; // r10d
  google::protobuf::uint8 *v279; // rdx
  int v280; // ecx
  __int64 v281; // rsi
  google::protobuf::uint8 *v282; // rax
  unsigned int v283; // eax
  google::protobuf::uint8 *i94; // rdx
  char v285; // cl
  unsigned int v286; // eax
  _BYTE *i95; // rdx
  char v288; // cl
  int v289; // esi
  google::protobuf::uint8 *v290; // rdx
  int v291; // esi
  int v292; // ecx
  unsigned int i96; // eax
  char v294; // cl
  unsigned int v295; // eax
  google::protobuf::uint8 *i97; // rdx
  char v297; // cl
  unsigned int v298; // eax
  _BYTE *i98; // rdx
  char v300; // cl
  int v301; // eax
  google::protobuf::uint8 *v302; // rdx
  int v303; // esi
  __int64 v304; // rcx
  unsigned __int64 i99; // rax
  char v306; // cl
  unsigned int v307; // eax
  google::protobuf::uint8 *i101; // rdx
  char v309; // cl
  google::protobuf::uint8 *v310; // rdx
  unsigned int v311; // eax
  google::protobuf::uint8 *i100; // rdx
  char v313; // cl
  google::protobuf::uint8 *v314; // rdx
  unsigned int v315; // edx
  google::protobuf::uint8 *i102; // rax
  char v317; // cl
  unsigned __int64 v318; // rdx
  _BYTE *i103; // rax
  char v320; // cl
  unsigned int v321; // eax
  google::protobuf::uint8 *i84; // rdx
  char v323; // cl
  unsigned int v324; // eax
  _BYTE *i85; // rdx
  char v326; // cl
  int v327; // esi
  google::protobuf::uint8 *v328; // rdx
  int v329; // esi
  unsigned int i86; // eax
  char v331; // cl
  unsigned int v332; // edx
  google::protobuf::uint8 *i82; // rax
  char v334; // cl
  unsigned int v335; // edx
  _BYTE *i83; // rax
  char v337; // cl
  int v338; // edx
  google::protobuf::uint8 *v339; // rax
  int v340; // edx
  __int64 v341; // rcx
  unsigned int v342; // edx
  google::protobuf::uint8 *i80; // rax
  char v344; // cl
  unsigned int v345; // edx
  _BYTE *i81; // rax
  char v347; // cl
  int v348; // edi
  google::protobuf::uint8 *v349; // rax
  int v350; // edx
  __int64 v351; // rsi
  google::protobuf::internal::LogMessage_0 *v352; // rax
  google::protobuf::internal::LogMessage_0 *v353; // rax
  google::protobuf::internal::LogMessage_0 *v354; // rax
  google::protobuf::internal::LogMessage_0 *v355; // rax
  unsigned int v356; // edx
  google::protobuf::uint8 *i37; // rax
  char v358; // cl
  _BYTE *v359; // rax
  unsigned __int64 i38; // rdx
  char v361; // cl
  google::protobuf::uint8 *v362; // rdx
  __int64 v363; // rdi
  int v364; // esi
  unsigned int i39; // eax
  char v366; // cl
  __int64 v367; // rax
  google::protobuf::uint8 *v368; // rdx
  __int64 v369; // rdi
  int v370; // esi
  unsigned int i40; // eax
  char v372; // cl
  int v373; // eax
  google::protobuf::uint8 *v374; // rax
  int v375; // esi
  unsigned int i41; // edx
  char v377; // cl
  _BYTE *v378; // rax
  unsigned __int64 i42; // rdx
  char v380; // cl
  google::protobuf::uint8 *v381; // rax
  int v382; // esi
  unsigned int i43; // edx
  char v384; // cl
  _BYTE *v385; // rax
  unsigned __int64 i44; // rdx
  char v387; // cl
  google::protobuf::uint8 *v388; // rax
  int v389; // esi
  unsigned int i45; // edx
  char v391; // cl
  _BYTE *v392; // rax
  unsigned __int64 i46; // rdx
  char v394; // cl
  google::protobuf::uint8 *v395; // rdx
  int v396; // esi
  unsigned int i47; // eax
  char v398; // cl
  __int64 v399; // rcx
  google::protobuf::uint8 *v400; // rdx
  int v401; // esi
  unsigned int i48; // eax
  char v403; // cl
  __int64 v404; // rcx
  unsigned int v405; // edx
  google::protobuf::uint8 *i31; // rax
  char v407; // cl
  unsigned __int64 v408; // rdx
  _BYTE *i32; // rax
  char v410; // cl
  unsigned int v411; // eax
  google::protobuf::uint8 *i33; // rdx
  char v413; // cl
  google::protobuf::uint8 *v414; // rdx
  unsigned int v415; // eax
  google::protobuf::uint8 *i34; // rdx
  char v417; // cl
  google::protobuf::uint8 *v418; // rdx
  unsigned int v419; // edx
  google::protobuf::uint8 *i35; // rax
  char v421; // cl
  _BYTE *v422; // rax
  unsigned int i36; // edx
  char v424; // cl
  char v425; // cl
  const std::string *v426; // rdi
  unsigned int v427; // edx
  google::protobuf::uint8 *i29; // rax
  char v429; // cl
  unsigned int v430; // edx
  _BYTE *i30; // rax
  char v432; // cl
  google::protobuf::uint8 *v433; // rdx
  __int64 v434; // rdi
  int v435; // esi
  unsigned int i60; // eax
  char v437; // cl
  __int64 v438; // rax
  google::protobuf::uint8 *v439; // rax
  int v440; // esi
  unsigned int i61; // edx
  char v442; // cl
  _BYTE *v443; // rax
  int v444; // ecx
  unsigned int i62; // edx
  char v446; // cl
  google::protobuf::uint8 *v447; // rax
  int v448; // esi
  unsigned int i63; // edx
  char v450; // cl
  _BYTE *v451; // rax
  __int64 v452; // rcx
  unsigned __int64 i64; // rdx
  char v454; // cl
  unsigned int v455; // edx
  google::protobuf::uint8 *i65; // rax
  char v457; // cl
  unsigned int v458; // edx
  _BYTE *i66; // rax
  char v460; // cl
  int v461; // r14d
  google::protobuf::uint8 *v462; // rdx
  int v463; // ecx
  __int64 v464; // rsi
  google::protobuf::uint8 *v465; // rax
  unsigned int v466; // edx
  google::protobuf::uint8 *i67; // rax
  char v468; // cl
  unsigned int v469; // edx
  _BYTE *i68; // rax
  char v471; // cl
  int v472; // r9d
  google::protobuf::uint8 *v473; // rdx
  int v474; // ecx
  __int64 v475; // rsi
  google::protobuf::uint8 *v476; // rax
  unsigned int v477; // eax
  google::protobuf::uint8 *i72; // rdx
  char v479; // cl
  unsigned int v480; // eax
  _BYTE *i73; // rdx
  char v482; // cl
  int v483; // eax
  google::protobuf::uint8 *v484; // rdx
  int v485; // esi
  unsigned __int64 i74; // rax
  char v487; // cl
  unsigned int v488; // eax
  google::protobuf::uint8 *i69; // rdx
  char v490; // cl
  unsigned int v491; // eax
  _BYTE *i70; // rdx
  char v493; // cl
  int v494; // esi
  google::protobuf::uint8 *v495; // rdx
  int v496; // esi
  unsigned __int64 i71; // rax
  char v498; // cl
  unsigned int v499; // eax
  google::protobuf::uint8 *i75; // rdx
  char v501; // cl
  unsigned int v502; // eax
  _BYTE *i76; // rdx
  char v504; // cl
  int v505; // eax
  google::protobuf::uint8 *v506; // rdx
  int v507; // esi
  unsigned __int64 i77; // rax
  char v509; // cl
  google::protobuf::uint8 *v510; // rax
  __int64 v511; // r15
  unsigned int i54; // edx
  char v513; // cl
  google::protobuf::uint8 *v514; // rsi
  __int64 v515; // rax
  const std::string *v516; // rdi
  google::protobuf::uint8 *v517; // rax
  __int64 v518; // r14
  unsigned int i51; // edx
  char v520; // si
  const void *v521; // rsi
  __int64 v522; // rax
  unsigned int v523; // edx
  google::protobuf::uint8 *i52; // rax
  char v525; // si
  __int64 v526; // r14
  unsigned int v527; // eax
  google::protobuf::uint8 *i53; // rdx
  char v529; // cl
  __int64 v530; // rax
  const google::protobuf::MessageLite *v531; // rdi
  google::protobuf::uint8 *v532; // rax
  __int64 v533; // r15
  unsigned int i50; // edx
  char v535; // cl
  google::protobuf::uint8 *v536; // rsi
  __int64 v537; // rax
  const std::string *v538; // rdi
  google::protobuf::uint8 *v539; // rax
  int v540; // esi
  unsigned int i57; // edx
  char v542; // cl
  _BYTE *v543; // rax
  unsigned __int64 i58; // rdx
  char v545; // cl
  google::protobuf::uint8 *v546; // rdx
  __int64 v547; // rdi
  int v548; // esi
  unsigned int i59; // eax
  char v550; // cl
  int v551; // eax
  google::protobuf::uint8 *v552; // rax
  int v553; // esi
  unsigned int i55; // edx
  char v555; // cl
  _BYTE *v556; // rax
  unsigned int i56; // edx
  char v558; // cl
  google::protobuf::internal::ArrayOutput output; // [rsp+10h] [rbp-A8h] BYREF
  google::protobuf::io::ArrayOutputStream v561; // [rsp+20h] [rbp-98h] BYREF
  google::protobuf::internal::LogMessage_0 v562[2]; // [rsp+40h] [rbp-78h] BYREF

  output.ptr = a5;
  output.is_deterministic = a4;
  if ( (int)a3 <= 0 )
    return a5;
  v7 = a2;
  v8 = &a2[24 * ((_DWORD)a3 - 1) + 24];
  do
  {
    v9 = (google::protobuf::internal *)*((unsigned int *)v7 + 3);
    v10 = (_QWORD *)((char *)this + *(unsigned int *)v7);
    switch ( (int)v9 )
    {
      case 0:
        v12 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
        if ( _bittest(&v12, *((_DWORD *)v7 + 2)) )
        {
          v13 = *((_DWORD *)v7 + 1);
          for ( i = output.ptr; v13 > 0x7F; *(i - 1) = v15 | 0x80 )
          {
            v15 = v13;
            v13 >>= 7;
            ++i;
          }
          *i = v13;
          v16 = i + 9;
          *((_QWORD *)v16 - 1) = *v10;
          output.ptr = v16;
        }
        break;
      case 1:
        v17 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
        if ( _bittest(&v17, *((_DWORD *)v7 + 2)) )
        {
          v18 = *((_DWORD *)v7 + 1);
          for ( j = output.ptr; v18 > 0x7F; *(j - 1) = v20 | 0x80 )
          {
            v20 = v18;
            v18 >>= 7;
            ++j;
          }
          *j = v18;
          v21 = j + 5;
          *((_DWORD *)v21 - 1) = *(_DWORD *)v10;
          output.ptr = v21;
        }
        break;
      case 2:
        v22 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
        if ( _bittest(&v22, *((_DWORD *)v7 + 2)) )
        {
          v23 = *((_DWORD *)v7 + 1);
          for ( k = output.ptr; v23 > 0x7F; *(k - 1) = v25 | 0x80 )
          {
            v25 = v23;
            v23 >>= 7;
            ++k;
          }
          *k = v23;
          v26 = *v10;
          for ( m = k + 1; v26 > 0x7F; *(m - 1) = v28 | 0x80 )
          {
            v28 = v26;
            v26 >>= 7;
            ++m;
          }
          *m = v26;
          output.ptr = m + 1;
        }
        break;
      case 3:
        v29 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
        if ( _bittest(&v29, *((_DWORD *)v7 + 2)) )
        {
          v30 = *((_DWORD *)v7 + 1);
          for ( n = output.ptr; v30 > 0x7F; *(n - 1) = v32 | 0x80 )
          {
            v32 = v30;
            v30 >>= 7;
            ++n;
          }
          *n = v30;
          v33 = *v10;
          for ( ii = n + 1; v33 > 0x7F; *(ii - 1) = v35 | 0x80 )
          {
            v35 = v33;
            v33 >>= 7;
            ++ii;
          }
          *ii = v33;
          output.ptr = ii + 1;
        }
        break;
      case 4:
        v36 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
        if ( _bittest(&v36, *((_DWORD *)v7 + 2)) )
        {
          v37 = *((_DWORD *)v7 + 1);
          for ( jj = output.ptr; v37 > 0x7F; *(jj - 1) = v39 | 0x80 )
          {
            v39 = v37;
            v37 >>= 7;
            ++jj;
          }
          *jj = v37;
          v40 = *(int *)v10;
          for ( kk = jj + 1; v40 > 0x7F; *(kk - 1) = v42 | 0x80 )
          {
            v42 = v40;
            v40 >>= 7;
            ++kk;
          }
          *kk = v40;
          output.ptr = kk + 1;
        }
        break;
      case 5:
        v43 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
        if ( _bittest(&v43, *((_DWORD *)v7 + 2)) )
        {
          v44 = *((_DWORD *)v7 + 1);
          for ( mm = output.ptr; v44 > 0x7F; *(mm - 1) = v46 | 0x80 )
          {
            v46 = v44;
            v44 >>= 7;
            ++mm;
          }
          *mm = v44;
          v47 = mm + 9;
          *((_QWORD *)v47 - 1) = *v10;
          output.ptr = v47;
        }
        break;
      case 6:
        v48 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
        if ( _bittest(&v48, *((_DWORD *)v7 + 2)) )
        {
          v49 = *((_DWORD *)v7 + 1);
          for ( nn = output.ptr; v49 > 0x7F; *(nn - 1) = v51 | 0x80 )
          {
            v51 = v49;
            v49 >>= 7;
            ++nn;
          }
          *nn = v49;
          v52 = nn + 5;
          *((_DWORD *)v52 - 1) = *(_DWORD *)v10;
          output.ptr = v52;
        }
        break;
      case 7:
        v53 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
        if ( _bittest(&v53, *((_DWORD *)v7 + 2)) )
        {
          v54 = *((_DWORD *)v7 + 1);
          for ( i1 = output.ptr; v54 > 0x7F; *(i1 - 1) = v56 | 0x80 )
          {
            v56 = v54;
            v54 >>= 7;
            ++i1;
          }
          *i1 = v54;
          v57 = i1 + 2;
          *(v57 - 1) = *(_BYTE *)v10;
          output.ptr = v57;
        }
        break;
      case 8:
        v58 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
        if ( _bittest(&v58, *((_DWORD *)v7 + 2)) )
        {
          v59 = *((_DWORD *)v7 + 1);
          for ( i2 = output.ptr; v59 > 0x7F; *(i2 - 1) = v61 | 0x80 )
          {
            v61 = v59;
            v59 >>= 7;
            ++i2;
          }
          goto LABEL_409;
        }
        break;
      case 9:
        v62 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
        if ( _bittest(&v62, *((_DWORD *)v7 + 2)) )
        {
          v63 = *((_DWORD *)v7 + 1);
          for ( i3 = output.ptr; v63 > 0x7F; *(i3 - 1) = v65 | 0x80 )
          {
            v65 = v63;
            v63 >>= 7;
            ++i3;
          }
          *i3 = v63;
          v66 = (const void *)*((_QWORD *)v7 + 2);
          v67 = (const google::protobuf::MessageLite *)*v10;
          output.ptr = i3 + 1;
          google::protobuf::internal::SerializeGroupTo<google::protobuf::internal::ArrayOutput>(v67, v66, &output);
          ptr = output.ptr;
          for ( i4 = *((_DWORD *)v7 + 1) + 1; i4 > 0x7F; *(ptr - 1) = v70 | 0x80 )
          {
            v70 = i4;
            i4 >>= 7;
            ++ptr;
          }
          *ptr = i4;
          output.ptr = ptr + 1;
        }
        break;
      case 10:
        v71 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
        if ( _bittest(&v71, *((_DWORD *)v7 + 2)) )
        {
          v72 = *((_DWORD *)v7 + 1);
          for ( i5 = output.ptr; v72 > 0x7F; *(i5 - 1) = v74 | 0x80 )
          {
            v74 = v72;
            v72 >>= 7;
            ++i5;
          }
          goto LABEL_199;
        }
        break;
      case 11:
        v75 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
        if ( _bittest(&v75, *((_DWORD *)v7 + 2)) )
        {
          v59 = *((_DWORD *)v7 + 1);
          for ( i2 = output.ptr; v59 > 0x7F; *(i2 - 1) = v76 | 0x80 )
          {
            v76 = v59;
            v59 >>= 7;
            ++i2;
          }
          goto LABEL_409;
        }
        break;
      case 12:
        v77 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
        if ( _bittest(&v77, *((_DWORD *)v7 + 2)) )
        {
          v78 = *((_DWORD *)v7 + 1);
          for ( i6 = output.ptr; v78 > 0x7F; *(i6 - 1) = v80 | 0x80 )
          {
            v80 = v78;
            v78 >>= 7;
            ++i6;
          }
          *i6 = v78;
          v81 = *(_DWORD *)v10;
          for ( i7 = i6 + 1; v81 > 0x7F; *(i7 - 1) = v83 | 0x80 )
          {
            v83 = v81;
            v81 >>= 7;
            ++i7;
          }
          *i7 = v81;
          output.ptr = i7 + 1;
        }
        break;
      case 13:
        v84 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
        if ( _bittest(&v84, *((_DWORD *)v7 + 2)) )
        {
          v85 = *((_DWORD *)v7 + 1);
          for ( i8 = output.ptr; v85 > 0x7F; *(i8 - 1) = v87 | 0x80 )
          {
            v87 = v85;
            v85 >>= 7;
            ++i8;
          }
          *i8 = v85;
          v88 = *(int *)v10;
          for ( i9 = i8 + 1; v88 > 0x7F; *(i9 - 1) = v90 | 0x80 )
          {
            v90 = v88;
            v88 >>= 7;
            ++i9;
          }
          *i9 = v88;
          output.ptr = i9 + 1;
        }
        break;
      case 14:
        v91 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
        if ( _bittest(&v91, *((_DWORD *)v7 + 2)) )
        {
          v92 = *((_DWORD *)v7 + 1);
          for ( i10 = output.ptr; v92 > 0x7F; *(i10 - 1) = v94 | 0x80 )
          {
            v94 = v92;
            v92 >>= 7;
            ++i10;
          }
          *i10 = v92;
          v95 = i10 + 5;
          *((_DWORD *)v95 - 1) = *(_DWORD *)v10;
          output.ptr = v95;
        }
        break;
      case 15:
        v96 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
        if ( _bittest(&v96, *((_DWORD *)v7 + 2)) )
        {
          v97 = *((_DWORD *)v7 + 1);
          for ( i11 = output.ptr; v97 > 0x7F; *(i11 - 1) = v99 | 0x80 )
          {
            v99 = v97;
            v97 >>= 7;
            ++i11;
          }
          *i11 = v97;
          v100 = i11 + 9;
          *((_QWORD *)v100 - 1) = *v10;
          output.ptr = v100;
        }
        break;
      case 16:
        v101 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
        if ( _bittest(&v101, *((_DWORD *)v7 + 2)) )
        {
          v102 = *((_DWORD *)v7 + 1);
          for ( i12 = output.ptr; v102 > 0x7F; *(i12 - 1) = v104 | 0x80 )
          {
            v104 = v102;
            v102 >>= 7;
            ++i12;
          }
          *i12 = v102;
          v105 = i12 + 1;
          for ( i13 = (*(int *)v10 >> 31) ^ (2 * *(_DWORD *)v10); i13 > 0x7F; *(v105 - 1) = v107 | 0x80 )
          {
            v107 = i13;
            i13 >>= 7;
            ++v105;
          }
          *v105 = i13;
          output.ptr = v105 + 1;
        }
        break;
      case 17:
        v108 = *((_DWORD *)this + (*((_DWORD *)v7 + 2) >> 5));
        if ( _bittest(&v108, *((_DWORD *)v7 + 2)) )
        {
          v109 = *((_DWORD *)v7 + 1);
          for ( i14 = output.ptr; v109 > 0x7F; *(i14 - 1) = v111 | 0x80 )
          {
            v111 = v109;
            v109 >>= 7;
            ++i14;
          }
          *i14 = v109;
          v112 = i14 + 1;
          for ( i15 = ((__int64)*v10 >> 63) ^ (2LL * *v10); i15 > 0x7F; *(v112 - 1) = v114 | 0x80 )
          {
            v114 = i15;
            i15 >>= 7;
            ++v112;
          }
          *v112 = i15;
          output.ptr = v112 + 1;
        }
        break;
      case 20:
        if ( *(double *)v10 != 0.0 )
        {
          v115 = *((_DWORD *)v7 + 1);
          for ( i16 = output.ptr; v115 > 0x7F; *(i16 - 1) = v117 | 0x80 )
          {
            v117 = v115;
            v115 >>= 7;
            ++i16;
          }
          *i16 = v115;
          v118 = i16 + 9;
          *((_QWORD *)v118 - 1) = *v10;
          output.ptr = v118;
        }
        break;
      case 21:
        if ( *(float *)v10 != 0.0 )
        {
          v119 = *((_DWORD *)v7 + 1);
          for ( i17 = output.ptr; v119 > 0x7F; *(i17 - 1) = v121 | 0x80 )
          {
            v121 = v119;
            v119 >>= 7;
            ++i17;
          }
          *i17 = v119;
          v122 = i17 + 5;
          *((_DWORD *)v122 - 1) = *(_DWORD *)v10;
          output.ptr = v122;
        }
        break;
      case 22:
        if ( *v10 )
        {
          v123 = *((_DWORD *)v7 + 1);
          for ( i18 = output.ptr; v123 > 0x7F; *(i18 - 1) = v125 | 0x80 )
          {
            v125 = v123;
            v123 >>= 7;
            ++i18;
          }
          *i18 = v123;
          v126 = *v10;
          for ( i19 = i18 + 1; v126 > 0x7F; *(i19 - 1) = v128 | 0x80 )
          {
            v128 = v126;
            v126 >>= 7;
            ++i19;
          }
          *i19 = v126;
          output.ptr = i19 + 1;
        }
        break;
      case 23:
        if ( *v10 )
        {
          v129 = *((_DWORD *)v7 + 1);
          for ( i20 = output.ptr; v129 > 0x7F; *(i20 - 1) = v131 | 0x80 )
          {
            v131 = v129;
            v129 >>= 7;
            ++i20;
          }
          *i20 = v129;
          v132 = *v10;
          for ( i21 = i20 + 1; v132 > 0x7F; *(i21 - 1) = v134 | 0x80 )
          {
            v134 = v132;
            v132 >>= 7;
            ++i21;
          }
          *i21 = v132;
          output.ptr = i21 + 1;
        }
        break;
      case 24:
        if ( *(_DWORD *)v10 )
        {
          v135 = *((_DWORD *)v7 + 1);
          for ( i22 = output.ptr; v135 > 0x7F; *(i22 - 1) = v137 | 0x80 )
          {
            v137 = v135;
            v135 >>= 7;
            ++i22;
          }
          *i22 = v135;
          v138 = *(int *)v10;
          for ( i23 = i22 + 1; v138 > 0x7F; *(i23 - 1) = v140 | 0x80 )
          {
            v140 = v138;
            v138 >>= 7;
            ++i23;
          }
          *i23 = v138;
          output.ptr = i23 + 1;
        }
        break;
      case 25:
        if ( *v10 )
        {
          v141 = *((_DWORD *)v7 + 1);
          for ( i24 = output.ptr; v141 > 0x7F; *(i24 - 1) = v143 | 0x80 )
          {
            v143 = v141;
            v141 >>= 7;
            ++i24;
          }
          *i24 = v141;
          v144 = i24 + 9;
          *((_QWORD *)v144 - 1) = *v10;
          output.ptr = v144;
        }
        break;
      case 26:
        if ( *(_DWORD *)v10 )
        {
          v145 = *((_DWORD *)v7 + 1);
          for ( i25 = output.ptr; v145 > 0x7F; *(i25 - 1) = v147 | 0x80 )
          {
            v147 = v145;
            v145 >>= 7;
            ++i25;
          }
          *i25 = v145;
          v148 = i25 + 5;
          *((_DWORD *)v148 - 1) = *(_DWORD *)v10;
          output.ptr = v148;
        }
        break;
      case 27:
        if ( *(_BYTE *)v10 )
        {
          v149 = *((_DWORD *)v7 + 1);
          for ( i26 = output.ptr; v149 > 0x7F; *(i26 - 1) = v151 | 0x80 )
          {
            v151 = v149;
            v149 >>= 7;
            ++i26;
          }
          *i26 = v149;
          v152 = i26 + 2;
          *(v152 - 1) = *(_BYTE *)v10;
          output.ptr = v152;
        }
        break;
      case 28:
        if ( *(_QWORD *)(*v10 + 8LL) )
        {
          v59 = *((_DWORD *)v7 + 1);
          for ( i2 = output.ptr; v59 > 0x7F; *(i2 - 1) = v153 | 0x80 )
          {
            v153 = v59;
            v59 >>= 7;
            ++i2;
          }
          goto LABEL_409;
        }
        break;
      case 29:
        if ( *v10 )
        {
          v154 = *((_DWORD *)v7 + 1);
          for ( i27 = output.ptr; v154 > 0x7F; *(i27 - 1) = v156 | 0x80 )
          {
            v156 = v154;
            v154 >>= 7;
            ++i27;
          }
          *i27 = v154;
          v157 = (const void *)*((_QWORD *)v7 + 2);
          v158 = (const google::protobuf::MessageLite *)*v10;
          output.ptr = i27 + 1;
          google::protobuf::internal::SerializeGroupTo<google::protobuf::internal::ArrayOutput>(v158, v157, &output);
          v159 = output.ptr;
          for ( i28 = *((_DWORD *)v7 + 1) + 1; i28 > 0x7F; *(v159 - 1) = v161 | 0x80 )
          {
            v161 = i28;
            i28 >>= 7;
            ++v159;
          }
          *v159 = i28;
          output.ptr = v159 + 1;
        }
        break;
      case 30:
        if ( *v10 )
        {
          v72 = *((_DWORD *)v7 + 1);
          for ( i5 = output.ptr; v72 > 0x7F; *(i5 - 1) = v162 | 0x80 )
          {
            v162 = v72;
            v72 >>= 7;
            ++i5;
          }
          goto LABEL_199;
        }
        break;
      case 31:
        if ( *(_QWORD *)(*v10 + 8LL) )
        {
          v59 = *((_DWORD *)v7 + 1);
          for ( i2 = output.ptr; v59 > 0x7F; *(i2 - 1) = v425 | 0x80 )
          {
            v425 = v59;
            v59 >>= 7;
            ++i2;
          }
          goto LABEL_409;
        }
        break;
      case 32:
        if ( *(_DWORD *)v10 )
        {
          v427 = *((_DWORD *)v7 + 1);
          for ( i29 = output.ptr; v427 > 0x7F; *(i29 - 1) = v429 | 0x80 )
          {
            v429 = v427;
            v427 >>= 7;
            ++i29;
          }
          *i29 = v427;
          v430 = *(_DWORD *)v10;
          for ( i30 = i29 + 1; v430 > 0x7F; *(i30 - 1) = v432 | 0x80 )
          {
            v432 = v430;
            v430 >>= 7;
            ++i30;
          }
          *i30 = v430;
          output.ptr = i30 + 1;
        }
        break;
      case 33:
        if ( *(_DWORD *)v10 )
        {
          v405 = *((_DWORD *)v7 + 1);
          for ( i31 = output.ptr; v405 > 0x7F; *(i31 - 1) = v407 | 0x80 )
          {
            v407 = v405;
            v405 >>= 7;
            ++i31;
          }
          *i31 = v405;
          v408 = *(int *)v10;
          for ( i32 = i31 + 1; v408 > 0x7F; *(i32 - 1) = v410 | 0x80 )
          {
            v410 = v408;
            v408 >>= 7;
            ++i32;
          }
          *i32 = v408;
          output.ptr = i32 + 1;
        }
        break;
      case 34:
        if ( *(_DWORD *)v10 )
        {
          v411 = *((_DWORD *)v7 + 1);
          for ( i33 = output.ptr; v411 > 0x7F; *(i33 - 1) = v413 | 0x80 )
          {
            v413 = v411;
            v411 >>= 7;
            ++i33;
          }
          *i33 = v411;
          v414 = i33 + 5;
          *((_DWORD *)v414 - 1) = *(_DWORD *)v10;
          output.ptr = v414;
        }
        break;
      case 35:
        if ( *v10 )
        {
          v415 = *((_DWORD *)v7 + 1);
          for ( i34 = output.ptr; v415 > 0x7F; *(i34 - 1) = v417 | 0x80 )
          {
            v417 = v415;
            v415 >>= 7;
            ++i34;
          }
          *i34 = v415;
          v418 = i34 + 9;
          *((_QWORD *)v418 - 1) = *v10;
          output.ptr = v418;
        }
        break;
      case 36:
        if ( *(_DWORD *)v10 )
        {
          v419 = *((_DWORD *)v7 + 1);
          for ( i35 = output.ptr; v419 > 0x7F; *(i35 - 1) = v421 | 0x80 )
          {
            v421 = v419;
            v419 >>= 7;
            ++i35;
          }
          *i35 = v419;
          v422 = i35 + 1;
          for ( i36 = (*(int *)v10 >> 31) ^ (2 * *(_DWORD *)v10); i36 > 0x7F; *(v422 - 1) = v424 | 0x80 )
          {
            v424 = i36;
            i36 >>= 7;
            ++v422;
          }
          *v422 = i36;
          output.ptr = v422 + 1;
        }
        break;
      case 37:
        if ( *v10 )
        {
          v356 = *((_DWORD *)v7 + 1);
          for ( i37 = output.ptr; v356 > 0x7F; *(i37 - 1) = v358 | 0x80 )
          {
            v358 = v356;
            v356 >>= 7;
            ++i37;
          }
          *i37 = v356;
          v359 = i37 + 1;
          for ( i38 = ((__int64)*v10 >> 63) ^ (2LL * *v10); i38 > 0x7F; *(v359 - 1) = v361 | 0x80 )
          {
            v361 = i38;
            i38 >>= 7;
            ++v359;
          }
          *v359 = i38;
          output.ptr = v359 + 1;
        }
        break;
      case 40:
        if ( *(int *)v10 > 0 )
        {
          v362 = output.ptr;
          v363 = 8LL;
          v364 = 0;
          do
          {
            for ( i39 = *((_DWORD *)v7 + 1); i39 > 0x7F; *(v362 - 1) = v366 | 0x80 )
            {
              v366 = i39;
              i39 >>= 7;
              ++v362;
            }
            *v362 = i39;
            v362 += 9;
            ++v364;
            v367 = *(_QWORD *)(v10[1] + v363);
            v363 += 8LL;
            *((_QWORD *)v362 - 1) = v367;
            output.ptr = v362;
          }
          while ( *(_DWORD *)v10 > v364 );
        }
        break;
      case 41:
        if ( *(int *)v10 > 0 )
        {
          v368 = output.ptr;
          v369 = 8LL;
          v370 = 0;
          do
          {
            for ( i40 = *((_DWORD *)v7 + 1); i40 > 0x7F; *(v368 - 1) = v372 | 0x80 )
            {
              v372 = i40;
              i40 >>= 7;
              ++v368;
            }
            *v368 = i40;
            v368 += 5;
            ++v370;
            v373 = *(_DWORD *)(v10[1] + v369);
            v369 += 4LL;
            *((_DWORD *)v368 - 1) = v373;
            output.ptr = v368;
          }
          while ( *(_DWORD *)v10 > v370 );
        }
        break;
      case 42:
        if ( *(int *)v10 > 0 )
        {
          v374 = output.ptr;
          v375 = 0;
          do
          {
            for ( i41 = *((_DWORD *)v7 + 1); i41 > 0x7F; *(v374 - 1) = v377 | 0x80 )
            {
              v377 = i41;
              i41 >>= 7;
              ++v374;
            }
            *v374 = i41;
            v378 = v374 + 1;
            for ( i42 = *(_QWORD *)(v10[1] + 8LL * v375 + 8); i42 > 0x7F; *(v378 - 1) = v380 | 0x80 )
            {
              v380 = i42;
              i42 >>= 7;
              ++v378;
            }
            *v378 = i42;
            v374 = v378 + 1;
            ++v375;
            output.ptr = v374;
          }
          while ( *(_DWORD *)v10 > v375 );
        }
        break;
      case 43:
        if ( *(int *)v10 > 0 )
        {
          v381 = output.ptr;
          v382 = 0;
          do
          {
            for ( i43 = *((_DWORD *)v7 + 1); i43 > 0x7F; *(v381 - 1) = v384 | 0x80 )
            {
              v384 = i43;
              i43 >>= 7;
              ++v381;
            }
            *v381 = i43;
            v385 = v381 + 1;
            for ( i44 = *(_QWORD *)(v10[1] + 8LL * v382 + 8); i44 > 0x7F; *(v385 - 1) = v387 | 0x80 )
            {
              v387 = i44;
              i44 >>= 7;
              ++v385;
            }
            *v385 = i44;
            v381 = v385 + 1;
            ++v382;
            output.ptr = v381;
          }
          while ( *(_DWORD *)v10 > v382 );
        }
        break;
      case 44:
        if ( *(int *)v10 > 0 )
        {
          v388 = output.ptr;
          v389 = 0;
          do
          {
            for ( i45 = *((_DWORD *)v7 + 1); i45 > 0x7F; *(v388 - 1) = v391 | 0x80 )
            {
              v391 = i45;
              i45 >>= 7;
              ++v388;
            }
            *v388 = i45;
            v392 = v388 + 1;
            for ( i46 = *(int *)(v10[1] + 4LL * v389 + 8); i46 > 0x7F; *(v392 - 1) = v394 | 0x80 )
            {
              v394 = i46;
              i46 >>= 7;
              ++v392;
            }
            *v392 = i46;
            v388 = v392 + 1;
            ++v389;
            output.ptr = v388;
          }
          while ( *(_DWORD *)v10 > v389 );
        }
        break;
      case 45:
        if ( *(int *)v10 > 0 )
        {
          v395 = output.ptr;
          v396 = 0;
          do
          {
            for ( i47 = *((_DWORD *)v7 + 1); i47 > 0x7F; *(v395 - 1) = v398 | 0x80 )
            {
              v398 = i47;
              i47 >>= 7;
              ++v395;
            }
            *v395 = i47;
            v399 = v396;
            v395 += 9;
            ++v396;
            *((_QWORD *)v395 - 1) = *(_QWORD *)(v10[1] + 8 * v399 + 8);
            output.ptr = v395;
          }
          while ( *(_DWORD *)v10 > v396 );
        }
        break;
      case 46:
        if ( *(int *)v10 > 0 )
        {
          v400 = output.ptr;
          v401 = 0;
          do
          {
            for ( i48 = *((_DWORD *)v7 + 1); i48 > 0x7F; *(v400 - 1) = v403 | 0x80 )
            {
              v403 = i48;
              i48 >>= 7;
              ++v400;
            }
            *v400 = i48;
            v404 = v401;
            v400 += 5;
            ++v401;
            *((_DWORD *)v400 - 1) = *(_DWORD *)(v10[1] + 4 * v404 + 8);
            output.ptr = v400;
          }
          while ( *(_DWORD *)v10 > v401 );
        }
        break;
      case 47:
        if ( *(int *)v10 > 0 )
        {
          v173 = output.ptr;
          v174 = 0;
          do
          {
            for ( i49 = *((_DWORD *)v7 + 1); i49 > 0x7F; *(v173 - 1) = v176 | 0x80 )
            {
              v176 = i49;
              i49 >>= 7;
              ++v173;
            }
            *v173 = i49;
            v177 = v174;
            v173 += 2;
            ++v174;
            *(v173 - 1) = *(_BYTE *)(v10[1] + v177 + 8);
            output.ptr = v173;
          }
          while ( *(_DWORD *)v10 > v174 );
        }
        break;
      case 48:
        if ( *((int *)v10 + 2) > 0 )
        {
          v532 = output.ptr;
          v533 = 0LL;
          do
          {
            for ( i50 = *((_DWORD *)v7 + 1); i50 > 0x7F; *(v532 - 1) = v535 | 0x80 )
            {
              v535 = i50;
              i50 >>= 7;
              ++v532;
            }
            *v532 = i50;
            v536 = v532 + 1;
            v537 = v10[2];
            output.ptr = v536;
            if ( v537 )
              v537 += 8LL;
            v538 = *(const std::string **)(v537 + 8 * v533++);
            v532 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v538, v536);
            output.ptr = v532;
          }
          while ( *((_DWORD *)v10 + 2) > (int)v533 );
        }
        break;
      case 49:
        if ( *((int *)v10 + 2) > 0 )
        {
          v517 = output.ptr;
          v518 = 0LL;
          do
          {
            for ( i51 = *((_DWORD *)v7 + 1); i51 > 0x7F; *(v517 - 1) = v520 | 0x80 )
            {
              v520 = i51;
              i51 >>= 7;
              ++v517;
            }
            *v517 = i51;
            v521 = (const void *)*((_QWORD *)v7 + 2);
            output.ptr = v517 + 1;
            v522 = v10[2];
            if ( v522 )
              v522 += 8LL;
            google::protobuf::internal::SerializeGroupTo<google::protobuf::internal::ArrayOutput>(
              *(const google::protobuf::MessageLite **)(v522 + 8 * v518),
              v521,
              &output);
            v523 = *((_DWORD *)v7 + 1) + 1;
            for ( i52 = output.ptr; v523 > 0x7F; *(i52 - 1) = v525 | 0x80 )
            {
              v525 = v523;
              v523 >>= 7;
              ++i52;
            }
            *i52 = v523;
            v517 = i52 + 1;
            ++v518;
            output.ptr = v517;
          }
          while ( *((_DWORD *)v10 + 2) > (int)v518 );
        }
        break;
      case 50:
        if ( *((int *)v10 + 2) > 0 )
        {
          v526 = 0LL;
          do
          {
            v527 = *((_DWORD *)v7 + 1);
            for ( i53 = output.ptr; v527 > 0x7F; *(i53 - 1) = v529 | 0x80 )
            {
              v529 = v527;
              v527 >>= 7;
              ++i53;
            }
            *i53 = v527;
            v530 = v10[2];
            output.ptr = i53 + 1;
            if ( v530 )
              v530 += 8LL;
            v531 = *(const google::protobuf::MessageLite **)(v530 + 8 * v526++);
            google::protobuf::internal::SerializeMessageTo<google::protobuf::internal::ArrayOutput>(
              v531,
              *((const void **)v7 + 2),
              &output);
          }
          while ( *((_DWORD *)v10 + 2) > (int)v526 );
        }
        break;
      case 51:
        if ( *((int *)v10 + 2) > 0 )
        {
          v510 = output.ptr;
          v511 = 0LL;
          do
          {
            for ( i54 = *((_DWORD *)v7 + 1); i54 > 0x7F; *(v510 - 1) = v513 | 0x80 )
            {
              v513 = i54;
              i54 >>= 7;
              ++v510;
            }
            *v510 = i54;
            v514 = v510 + 1;
            v515 = v10[2];
            output.ptr = v514;
            if ( v515 )
              v515 += 8LL;
            v516 = *(const std::string **)(v515 + 8 * v511++);
            v510 = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v516, v514);
            output.ptr = v510;
          }
          while ( *((_DWORD *)v10 + 2) > (int)v511 );
        }
        break;
      case 52:
        if ( *(int *)v10 > 0 )
        {
          v552 = output.ptr;
          v553 = 0;
          do
          {
            for ( i55 = *((_DWORD *)v7 + 1); i55 > 0x7F; *(v552 - 1) = v555 | 0x80 )
            {
              v555 = i55;
              i55 >>= 7;
              ++v552;
            }
            *v552 = i55;
            v556 = v552 + 1;
            for ( i56 = *(_DWORD *)(v10[1] + 4LL * v553 + 8); i56 > 0x7F; *(v556 - 1) = v558 | 0x80 )
            {
              v558 = i56;
              i56 >>= 7;
              ++v556;
            }
            *v556 = i56;
            v552 = v556 + 1;
            ++v553;
            output.ptr = v552;
          }
          while ( *(_DWORD *)v10 > v553 );
        }
        break;
      case 53:
        if ( *(int *)v10 > 0 )
        {
          v539 = output.ptr;
          v540 = 0;
          do
          {
            for ( i57 = *((_DWORD *)v7 + 1); i57 > 0x7F; *(v539 - 1) = v542 | 0x80 )
            {
              v542 = i57;
              i57 >>= 7;
              ++v539;
            }
            *v539 = i57;
            v543 = v539 + 1;
            for ( i58 = *(int *)(v10[1] + 4LL * v540 + 8); i58 > 0x7F; *(v543 - 1) = v545 | 0x80 )
            {
              v545 = i58;
              i58 >>= 7;
              ++v543;
            }
            *v543 = i58;
            v539 = v543 + 1;
            ++v540;
            output.ptr = v539;
          }
          while ( *(_DWORD *)v10 > v540 );
        }
        break;
      case 54:
        if ( *(int *)v10 > 0 )
        {
          v546 = output.ptr;
          v547 = 8LL;
          v548 = 0;
          do
          {
            for ( i59 = *((_DWORD *)v7 + 1); i59 > 0x7F; *(v546 - 1) = v550 | 0x80 )
            {
              v550 = i59;
              i59 >>= 7;
              ++v546;
            }
            *v546 = i59;
            v546 += 5;
            ++v548;
            v551 = *(_DWORD *)(v10[1] + v547);
            v547 += 4LL;
            *((_DWORD *)v546 - 1) = v551;
            output.ptr = v546;
          }
          while ( *(_DWORD *)v10 > v548 );
        }
        break;
      case 55:
        if ( *(int *)v10 > 0 )
        {
          v433 = output.ptr;
          v434 = 8LL;
          v435 = 0;
          do
          {
            for ( i60 = *((_DWORD *)v7 + 1); i60 > 0x7F; *(v433 - 1) = v437 | 0x80 )
            {
              v437 = i60;
              i60 >>= 7;
              ++v433;
            }
            *v433 = i60;
            v433 += 9;
            ++v435;
            v438 = *(_QWORD *)(v10[1] + v434);
            v434 += 8LL;
            *((_QWORD *)v433 - 1) = v438;
            output.ptr = v433;
          }
          while ( *(_DWORD *)v10 > v435 );
        }
        break;
      case 56:
        if ( *(int *)v10 > 0 )
        {
          v439 = output.ptr;
          v440 = 0;
          do
          {
            for ( i61 = *((_DWORD *)v7 + 1); i61 > 0x7F; *(v439 - 1) = v442 | 0x80 )
            {
              v442 = i61;
              i61 >>= 7;
              ++v439;
            }
            *v439 = i61;
            v443 = v439 + 1;
            v444 = *(_DWORD *)(v10[1] + 4LL * v440 + 8);
            for ( i62 = (v444 >> 31) ^ (2 * v444); i62 > 0x7F; *(v443 - 1) = v446 | 0x80 )
            {
              v446 = i62;
              i62 >>= 7;
              ++v443;
            }
            *v443 = i62;
            v439 = v443 + 1;
            ++v440;
            output.ptr = v439;
          }
          while ( *(_DWORD *)v10 > v440 );
        }
        break;
      case 57:
        if ( *(int *)v10 > 0 )
        {
          v447 = output.ptr;
          v448 = 0;
          do
          {
            for ( i63 = *((_DWORD *)v7 + 1); i63 > 0x7F; *(v447 - 1) = v450 | 0x80 )
            {
              v450 = i63;
              i63 >>= 7;
              ++v447;
            }
            *v447 = i63;
            v451 = v447 + 1;
            v452 = *(_QWORD *)(v10[1] + 8LL * v448 + 8);
            for ( i64 = (v452 >> 63) ^ (2 * v452); i64 > 0x7F; *(v451 - 1) = v454 | 0x80 )
            {
              v454 = i64;
              i64 >>= 7;
              ++v451;
            }
            *v451 = i64;
            v447 = v451 + 1;
            ++v448;
            output.ptr = v447;
          }
          while ( *(_DWORD *)v10 > v448 );
        }
        break;
      case 60:
        if ( *(_DWORD *)v10 )
        {
          v455 = *((_DWORD *)v7 + 1);
          for ( i65 = output.ptr; v455 > 0x7F; *(i65 - 1) = v457 | 0x80 )
          {
            v457 = v455;
            v455 >>= 7;
            ++i65;
          }
          *i65 = v455;
          v458 = *((_DWORD *)v10 + 4);
          for ( i66 = i65 + 1; v458 > 0x7F; *(i66 - 1) = v460 | 0x80 )
          {
            v460 = v458;
            v458 >>= 7;
            ++i66;
          }
          *i66 = v458;
          v461 = *(_DWORD *)v10;
          v462 = i66 + 1;
          output.ptr = i66 + 1;
          if ( v461 > 0 )
          {
            v463 = 0;
            v464 = 7LL - (_QWORD)i66;
            do
            {
              ++v463;
              v465 = &v462[v10[1]];
              v462 += 8;
              *((_QWORD *)v462 - 1) = *(_QWORD *)&v465[v464];
              output.ptr = v462;
            }
            while ( *(_DWORD *)v10 > v463 );
          }
        }
        break;
      case 61:
        if ( *(_DWORD *)v10 )
        {
          v466 = *((_DWORD *)v7 + 1);
          for ( i67 = output.ptr; v466 > 0x7F; *(i67 - 1) = v468 | 0x80 )
          {
            v468 = v466;
            v466 >>= 7;
            ++i67;
          }
          *i67 = v466;
          v469 = *((_DWORD *)v10 + 4);
          for ( i68 = i67 + 1; v469 > 0x7F; *(i68 - 1) = v471 | 0x80 )
          {
            v471 = v469;
            v469 >>= 7;
            ++i68;
          }
          *i68 = v469;
          v472 = *(_DWORD *)v10;
          v473 = i68 + 1;
          output.ptr = i68 + 1;
          if ( v472 > 0 )
          {
            v474 = 0;
            v475 = 7LL - (_QWORD)i68;
            do
            {
              ++v474;
              v476 = &v473[v10[1]];
              v473 += 4;
              *((_DWORD *)v473 - 1) = *(_DWORD *)&v476[v475];
              output.ptr = v473;
            }
            while ( *(_DWORD *)v10 > v474 );
          }
        }
        break;
      case 62:
        if ( *(_DWORD *)v10 )
        {
          v488 = *((_DWORD *)v7 + 1);
          for ( i69 = output.ptr; v488 > 0x7F; *(i69 - 1) = v490 | 0x80 )
          {
            v490 = v488;
            v488 >>= 7;
            ++i69;
          }
          *i69 = v488;
          v491 = *((_DWORD *)v10 + 4);
          for ( i70 = i69 + 1; v491 > 0x7F; *(i70 - 1) = v493 | 0x80 )
          {
            v493 = v491;
            v491 >>= 7;
            ++i70;
          }
          *i70 = v491;
          v494 = *(_DWORD *)v10;
          v495 = i70 + 1;
          output.ptr = v495;
          if ( v494 > 0 )
          {
            v496 = 0;
            do
            {
              for ( i71 = *(_QWORD *)(v10[1] + 8LL * v496 + 8); i71 > 0x7F; *(v495 - 1) = v498 | 0x80 )
              {
                v498 = i71;
                i71 >>= 7;
                ++v495;
              }
              *v495++ = i71;
              ++v496;
              output.ptr = v495;
            }
            while ( *(_DWORD *)v10 > v496 );
          }
        }
        break;
      case 63:
        if ( *(_DWORD *)v10 )
        {
          v477 = *((_DWORD *)v7 + 1);
          for ( i72 = output.ptr; v477 > 0x7F; *(i72 - 1) = v479 | 0x80 )
          {
            v479 = v477;
            v477 >>= 7;
            ++i72;
          }
          *i72 = v477;
          v480 = *((_DWORD *)v10 + 4);
          for ( i73 = i72 + 1; v480 > 0x7F; *(i73 - 1) = v482 | 0x80 )
          {
            v482 = v480;
            v480 >>= 7;
            ++i73;
          }
          *i73 = v480;
          v483 = *(_DWORD *)v10;
          v484 = i73 + 1;
          output.ptr = v484;
          if ( v483 > 0 )
          {
            v485 = 0;
            do
            {
              for ( i74 = *(_QWORD *)(v10[1] + 8LL * v485 + 8); i74 > 0x7F; *(v484 - 1) = v487 | 0x80 )
              {
                v487 = i74;
                i74 >>= 7;
                ++v484;
              }
              *v484++ = i74;
              ++v485;
              output.ptr = v484;
            }
            while ( *(_DWORD *)v10 > v485 );
          }
        }
        break;
      case 64:
        if ( *(_DWORD *)v10 )
        {
          v499 = *((_DWORD *)v7 + 1);
          for ( i75 = output.ptr; v499 > 0x7F; *(i75 - 1) = v501 | 0x80 )
          {
            v501 = v499;
            v499 >>= 7;
            ++i75;
          }
          *i75 = v499;
          v502 = *((_DWORD *)v10 + 4);
          for ( i76 = i75 + 1; v502 > 0x7F; *(i76 - 1) = v504 | 0x80 )
          {
            v504 = v502;
            v502 >>= 7;
            ++i76;
          }
          *i76 = v502;
          v505 = *(_DWORD *)v10;
          v506 = i76 + 1;
          output.ptr = v506;
          if ( v505 > 0 )
          {
            v507 = 0;
            do
            {
              for ( i77 = *(int *)(v10[1] + 4LL * v507 + 8); i77 > 0x7F; *(v506 - 1) = v509 | 0x80 )
              {
                v509 = i77;
                i77 >>= 7;
                ++v506;
              }
              *v506++ = i77;
              ++v507;
              output.ptr = v506;
            }
            while ( *(_DWORD *)v10 > v507 );
          }
        }
        break;
      case 65:
        if ( *(_DWORD *)v10 )
        {
          v163 = *((_DWORD *)v7 + 1);
          for ( i78 = output.ptr; v163 > 0x7F; *(i78 - 1) = v165 | 0x80 )
          {
            v165 = v163;
            v163 >>= 7;
            ++i78;
          }
          *i78 = v163;
          v166 = *((_DWORD *)v10 + 4);
          for ( i79 = i78 + 1; v166 > 0x7F; *(i79 - 1) = v168 | 0x80 )
          {
            v168 = v166;
            v166 >>= 7;
            ++i79;
          }
          *i79 = v166;
          v169 = *(_DWORD *)v10;
          v170 = i79 + 1;
          output.ptr = v170;
          if ( v169 > 0 )
          {
            v171 = 0;
            do
            {
              v172 = v171;
              v170 += 8;
              ++v171;
              *((_QWORD *)v170 - 1) = *(_QWORD *)(v10[1] + 8 * v172 + 8);
              output.ptr = v170;
            }
            while ( *(_DWORD *)v10 > v171 );
          }
        }
        break;
      case 66:
        if ( *(_DWORD *)v10 )
        {
          v342 = *((_DWORD *)v7 + 1);
          for ( i80 = output.ptr; v342 > 0x7F; *(i80 - 1) = v344 | 0x80 )
          {
            v344 = v342;
            v342 >>= 7;
            ++i80;
          }
          *i80 = v342;
          v345 = *((_DWORD *)v10 + 4);
          for ( i81 = i80 + 1; v345 > 0x7F; *(i81 - 1) = v347 | 0x80 )
          {
            v347 = v345;
            v345 >>= 7;
            ++i81;
          }
          *i81 = v345;
          v348 = *(_DWORD *)v10;
          v349 = i81 + 1;
          output.ptr = v349;
          if ( v348 > 0 )
          {
            v350 = 0;
            do
            {
              v351 = v350;
              v349 += 4;
              ++v350;
              *((_DWORD *)v349 - 1) = *(_DWORD *)(v10[1] + 4 * v351 + 8);
              output.ptr = v349;
            }
            while ( *(_DWORD *)v10 > v350 );
          }
        }
        break;
      case 67:
        if ( *(_DWORD *)v10 )
        {
          v332 = *((_DWORD *)v7 + 1);
          for ( i82 = output.ptr; v332 > 0x7F; *(i82 - 1) = v334 | 0x80 )
          {
            v334 = v332;
            v332 >>= 7;
            ++i82;
          }
          *i82 = v332;
          v335 = *((_DWORD *)v10 + 4);
          for ( i83 = i82 + 1; v335 > 0x7F; *(i83 - 1) = v337 | 0x80 )
          {
            v337 = v335;
            v335 >>= 7;
            ++i83;
          }
          *i83 = v335;
          v338 = *(_DWORD *)v10;
          v339 = i83 + 1;
          output.ptr = v339;
          if ( v338 > 0 )
          {
            v340 = 0;
            do
            {
              v341 = v340;
              ++v339;
              ++v340;
              *(v339 - 1) = *(_BYTE *)(v10[1] + v341 + 8);
              output.ptr = v339;
            }
            while ( *(_DWORD *)v10 > v340 );
          }
        }
        break;
      case 68:
      case 69:
      case 70:
      case 71:
        google::protobuf::internal::LogMessage::LogMessage(
          v562,
          LOGLEVEL_FATAL_0,
          "google/protobuf/generated_message_util.cc",
          509);
        v352 = google::protobuf::internal::LogMessage::operator<<(v562, "Not implemented field number ");
        v353 = google::protobuf::internal::LogMessage::operator<<(v352, *((_DWORD *)v7 + 1));
        v354 = google::protobuf::internal::LogMessage::operator<<(v353, " with type ");
        v355 = google::protobuf::internal::LogMessage::operator<<(v354, *((_DWORD *)v7 + 3));
        google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v561, v355);
        google::protobuf::internal::LogMessage::~LogMessage(v562);
        break;
      case 72:
        if ( *(_DWORD *)v10 )
        {
          v321 = *((_DWORD *)v7 + 1);
          for ( i84 = output.ptr; v321 > 0x7F; *(i84 - 1) = v323 | 0x80 )
          {
            v323 = v321;
            v321 >>= 7;
            ++i84;
          }
          *i84 = v321;
          v324 = *((_DWORD *)v10 + 4);
          for ( i85 = i84 + 1; v324 > 0x7F; *(i85 - 1) = v326 | 0x80 )
          {
            v326 = v324;
            v324 >>= 7;
            ++i85;
          }
          *i85 = v324;
          v327 = *(_DWORD *)v10;
          v328 = i85 + 1;
          output.ptr = v328;
          if ( v327 > 0 )
          {
            v329 = 0;
            do
            {
              for ( i86 = *(_DWORD *)(v10[1] + 4LL * v329 + 8); i86 > 0x7F; *(v328 - 1) = v331 | 0x80 )
              {
                v331 = i86;
                i86 >>= 7;
                ++v328;
              }
              *v328++ = i86;
              ++v329;
              output.ptr = v328;
            }
            while ( *(_DWORD *)v10 > v329 );
          }
        }
        break;
      case 73:
        if ( *(_DWORD *)v10 )
        {
          v250 = *((_DWORD *)v7 + 1);
          for ( i87 = output.ptr; v250 > 0x7F; *(i87 - 1) = v252 | 0x80 )
          {
            v252 = v250;
            v250 >>= 7;
            ++i87;
          }
          *i87 = v250;
          v253 = *((_DWORD *)v10 + 4);
          for ( i88 = i87 + 1; v253 > 0x7F; *(i88 - 1) = v255 | 0x80 )
          {
            v255 = v253;
            v253 >>= 7;
            ++i88;
          }
          *i88 = v253;
          v256 = *(_DWORD *)v10;
          v257 = i88 + 1;
          output.ptr = v257;
          if ( v256 > 0 )
          {
            v258 = 0;
            do
            {
              for ( i89 = *(int *)(v10[1] + 4LL * v258 + 8); i89 > 0x7F; *(v257 - 1) = v260 | 0x80 )
              {
                v260 = i89;
                i89 >>= 7;
                ++v257;
              }
              *v257++ = i89;
              ++v258;
              output.ptr = v257;
            }
            while ( *(_DWORD *)v10 > v258 );
          }
        }
        break;
      case 74:
        if ( *(_DWORD *)v10 )
        {
          v261 = *((_DWORD *)v7 + 1);
          for ( i90 = output.ptr; v261 > 0x7F; *(i90 - 1) = v263 | 0x80 )
          {
            v263 = v261;
            v261 >>= 7;
            ++i90;
          }
          *i90 = v261;
          v264 = *((_DWORD *)v10 + 4);
          for ( i91 = i90 + 1; v264 > 0x7F; *(i91 - 1) = v266 | 0x80 )
          {
            v266 = v264;
            v264 >>= 7;
            ++i91;
          }
          *i91 = v264;
          v267 = *(_DWORD *)v10;
          v268 = i91 + 1;
          output.ptr = i91 + 1;
          if ( v267 > 0 )
          {
            v269 = 0;
            v270 = 7LL - (_QWORD)i91;
            do
            {
              ++v269;
              v271 = &v268[v10[1]];
              v268 += 4;
              *((_DWORD *)v268 - 1) = *(_DWORD *)&v271[v270];
              output.ptr = v268;
            }
            while ( *(_DWORD *)v10 > v269 );
          }
        }
        break;
      case 75:
        if ( *(_DWORD *)v10 )
        {
          v272 = *((_DWORD *)v7 + 1);
          for ( i92 = output.ptr; v272 > 0x7F; *(i92 - 1) = v274 | 0x80 )
          {
            v274 = v272;
            v272 >>= 7;
            ++i92;
          }
          *i92 = v272;
          v275 = *((_DWORD *)v10 + 4);
          for ( i93 = i92 + 1; v275 > 0x7F; *(i93 - 1) = v277 | 0x80 )
          {
            v277 = v275;
            v275 >>= 7;
            ++i93;
          }
          *i93 = v275;
          v278 = *(_DWORD *)v10;
          v279 = i93 + 1;
          output.ptr = i93 + 1;
          if ( v278 > 0 )
          {
            v280 = 0;
            v281 = 7LL - (_QWORD)i93;
            do
            {
              ++v280;
              v282 = &v279[v10[1]];
              v279 += 8;
              *((_QWORD *)v279 - 1) = *(_QWORD *)&v282[v281];
              output.ptr = v279;
            }
            while ( *(_DWORD *)v10 > v280 );
          }
        }
        break;
      case 76:
        if ( *(_DWORD *)v10 )
        {
          v283 = *((_DWORD *)v7 + 1);
          for ( i94 = output.ptr; v283 > 0x7F; *(i94 - 1) = v285 | 0x80 )
          {
            v285 = v283;
            v283 >>= 7;
            ++i94;
          }
          *i94 = v283;
          v286 = *((_DWORD *)v10 + 4);
          for ( i95 = i94 + 1; v286 > 0x7F; *(i95 - 1) = v288 | 0x80 )
          {
            v288 = v286;
            v286 >>= 7;
            ++i95;
          }
          *i95 = v286;
          v289 = *(_DWORD *)v10;
          v290 = i95 + 1;
          output.ptr = v290;
          if ( v289 > 0 )
          {
            v291 = 0;
            do
            {
              v292 = *(_DWORD *)(v10[1] + 4LL * v291 + 8);
              for ( i96 = (v292 >> 31) ^ (2 * v292); i96 > 0x7F; *(v290 - 1) = v294 | 0x80 )
              {
                v294 = i96;
                i96 >>= 7;
                ++v290;
              }
              *v290++ = i96;
              ++v291;
              output.ptr = v290;
            }
            while ( *(_DWORD *)v10 > v291 );
          }
        }
        break;
      case 77:
        if ( *(_DWORD *)v10 )
        {
          v295 = *((_DWORD *)v7 + 1);
          for ( i97 = output.ptr; v295 > 0x7F; *(i97 - 1) = v297 | 0x80 )
          {
            v297 = v295;
            v295 >>= 7;
            ++i97;
          }
          *i97 = v295;
          v298 = *((_DWORD *)v10 + 4);
          for ( i98 = i97 + 1; v298 > 0x7F; *(i98 - 1) = v300 | 0x80 )
          {
            v300 = v298;
            v298 >>= 7;
            ++i98;
          }
          *i98 = v298;
          v301 = *(_DWORD *)v10;
          v302 = i98 + 1;
          output.ptr = v302;
          if ( v301 > 0 )
          {
            v303 = 0;
            do
            {
              v304 = *(_QWORD *)(v10[1] + 8LL * v303 + 8);
              for ( i99 = (v304 >> 63) ^ (2 * v304); i99 > 0x7F; *(v302 - 1) = v306 | 0x80 )
              {
                v306 = i99;
                i99 >>= 7;
                ++v302;
              }
              *v302++ = i99;
              ++v303;
              output.ptr = v302;
            }
            while ( *(_DWORD *)v10 > v303 );
          }
        }
        break;
      case 80:
        v311 = *((_DWORD *)v7 + 1);
        if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v311 >> 3 )
        {
          for ( i100 = output.ptr; v311 > 0x7F; *(i100 - 1) = v313 | 0x80 )
          {
            v313 = v311;
            v311 >>= 7;
            ++i100;
          }
          *i100 = v311;
          v314 = i100 + 9;
          *((_QWORD *)v314 - 1) = *v10;
          output.ptr = v314;
        }
        break;
      case 81:
        v307 = *((_DWORD *)v7 + 1);
        if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v307 >> 3 )
        {
          for ( i101 = output.ptr; v307 > 0x7F; *(i101 - 1) = v309 | 0x80 )
          {
            v309 = v307;
            v307 >>= 7;
            ++i101;
          }
          *i101 = v307;
          v310 = i101 + 5;
          *((_DWORD *)v310 - 1) = *(_DWORD *)v10;
          output.ptr = v310;
        }
        break;
      case 82:
        v315 = *((_DWORD *)v7 + 1);
        if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v315 >> 3 )
        {
          for ( i102 = output.ptr; v315 > 0x7F; *(i102 - 1) = v317 | 0x80 )
          {
            v317 = v315;
            v315 >>= 7;
            ++i102;
          }
          *i102 = v315;
          v318 = *v10;
          for ( i103 = i102 + 1; v318 > 0x7F; *(i103 - 1) = v320 | 0x80 )
          {
            v320 = v318;
            v318 >>= 7;
            ++i103;
          }
          *i103 = v318;
          output.ptr = i103 + 1;
        }
        break;
      case 83:
        v178 = *((_DWORD *)v7 + 1);
        if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v178 >> 3 )
        {
          for ( i104 = output.ptr; v178 > 0x7F; *(i104 - 1) = v180 | 0x80 )
          {
            v180 = v178;
            v178 >>= 7;
            ++i104;
          }
          *i104 = v178;
          v181 = *v10;
          for ( i105 = i104 + 1; v181 > 0x7F; *(i105 - 1) = v183 | 0x80 )
          {
            v183 = v181;
            v181 >>= 7;
            ++i105;
          }
          *i105 = v181;
          output.ptr = i105 + 1;
        }
        break;
      case 84:
        v184 = *((_DWORD *)v7 + 1);
        if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v184 >> 3 )
        {
          for ( i106 = output.ptr; v184 > 0x7F; *(i106 - 1) = v186 | 0x80 )
          {
            v186 = v184;
            v184 >>= 7;
            ++i106;
          }
          *i106 = v184;
          v187 = *(int *)v10;
          for ( i107 = i106 + 1; v187 > 0x7F; *(i107 - 1) = v189 | 0x80 )
          {
            v189 = v187;
            v187 >>= 7;
            ++i107;
          }
          *i107 = v187;
          output.ptr = i107 + 1;
        }
        break;
      case 85:
        v190 = *((_DWORD *)v7 + 1);
        if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v190 >> 3 )
        {
          for ( i108 = output.ptr; v190 > 0x7F; *(i108 - 1) = v192 | 0x80 )
          {
            v192 = v190;
            v190 >>= 7;
            ++i108;
          }
          *i108 = v190;
          v193 = i108 + 9;
          *((_QWORD *)v193 - 1) = *v10;
          output.ptr = v193;
        }
        break;
      case 86:
        v194 = *((_DWORD *)v7 + 1);
        if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v194 >> 3 )
        {
          for ( i109 = output.ptr; v194 > 0x7F; *(i109 - 1) = v196 | 0x80 )
          {
            v196 = v194;
            v194 >>= 7;
            ++i109;
          }
          *i109 = v194;
          v197 = i109 + 5;
          *((_DWORD *)v197 - 1) = *(_DWORD *)v10;
          output.ptr = v197;
        }
        break;
      case 87:
        v198 = *((_DWORD *)v7 + 1);
        if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v198 >> 3 )
        {
          for ( i110 = output.ptr; v198 > 0x7F; *(i110 - 1) = v200 | 0x80 )
          {
            v200 = v198;
            v198 >>= 7;
            ++i110;
          }
          *i110 = v198;
          v201 = i110 + 2;
          *(v201 - 1) = *(_BYTE *)v10;
          output.ptr = v201;
        }
        break;
      case 88:
        v59 = *((_DWORD *)v7 + 1);
        if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v59 >> 3 )
        {
          for ( i2 = output.ptr; v59 > 0x7F; *(i2 - 1) = v202 | 0x80 )
          {
            v202 = v59;
            v59 >>= 7;
            ++i2;
          }
          goto LABEL_409;
        }
        break;
      case 89:
        v203 = *((_DWORD *)v7 + 1);
        if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v203 >> 3 )
        {
          for ( i111 = output.ptr; v203 > 0x7F; *(i111 - 1) = v205 | 0x80 )
          {
            v205 = v203;
            v203 >>= 7;
            ++i111;
          }
          *i111 = v203;
          v206 = (const void *)*((_QWORD *)v7 + 2);
          v207 = (const google::protobuf::MessageLite *)*v10;
          output.ptr = i111 + 1;
          google::protobuf::internal::SerializeGroupTo<google::protobuf::internal::ArrayOutput>(v207, v206, &output);
          v208 = output.ptr;
          for ( i112 = *((_DWORD *)v7 + 1) + 1; i112 > 0x7F; *(v208 - 1) = v210 | 0x80 )
          {
            v210 = i112;
            i112 >>= 7;
            ++v208;
          }
          *v208 = i112;
          output.ptr = v208 + 1;
        }
        break;
      case 90:
        v72 = *((_DWORD *)v7 + 1);
        if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v72 >> 3 )
        {
          for ( i5 = output.ptr; v72 > 0x7F; *(i5 - 1) = v211 | 0x80 )
          {
            v211 = v72;
            v72 >>= 7;
            ++i5;
          }
LABEL_199:
          *i5 = v72;
          v212 = (const void *)*((_QWORD *)v7 + 2);
          v213 = (const google::protobuf::MessageLite *)*v10;
          output.ptr = i5 + 1;
          google::protobuf::internal::SerializeMessageTo<google::protobuf::internal::ArrayOutput>(v213, v212, &output);
        }
        break;
      case 91:
        v59 = *((_DWORD *)v7 + 1);
        if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v59 >> 3 )
        {
          for ( i2 = output.ptr; v59 > 0x7F; *(i2 - 1) = v214 | 0x80 )
          {
            v214 = v59;
            v59 >>= 7;
            ++i2;
          }
LABEL_409:
          *i2 = v59;
          v426 = (const std::string *)*v10;
          output.ptr = i2 + 1;
          output.ptr = google::protobuf::io::CodedOutputStream::WriteStringWithSizeToArray(v426, i2 + 1);
        }
        break;
      case 92:
        v215 = *((_DWORD *)v7 + 1);
        if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v215 >> 3 )
        {
          for ( i113 = output.ptr; v215 > 0x7F; *(i113 - 1) = v217 | 0x80 )
          {
            v217 = v215;
            v215 >>= 7;
            ++i113;
          }
          *i113 = v215;
          v218 = *(_DWORD *)v10;
          for ( i114 = i113 + 1; v218 > 0x7F; *(i114 - 1) = v220 | 0x80 )
          {
            v220 = v218;
            v218 >>= 7;
            ++i114;
          }
          *i114 = v218;
          output.ptr = i114 + 1;
        }
        break;
      case 93:
        v221 = *((_DWORD *)v7 + 1);
        if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v221 >> 3 )
        {
          for ( i115 = output.ptr; v221 > 0x7F; *(i115 - 1) = v223 | 0x80 )
          {
            v223 = v221;
            v221 >>= 7;
            ++i115;
          }
          *i115 = v221;
          v224 = *(int *)v10;
          for ( i116 = i115 + 1; v224 > 0x7F; *(i116 - 1) = v226 | 0x80 )
          {
            v226 = v224;
            v224 >>= 7;
            ++i116;
          }
          *i116 = v224;
          output.ptr = i116 + 1;
        }
        break;
      case 94:
        v227 = *((_DWORD *)v7 + 1);
        if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v227 >> 3 )
        {
          for ( i117 = output.ptr; v227 > 0x7F; *(i117 - 1) = v229 | 0x80 )
          {
            v229 = v227;
            v227 >>= 7;
            ++i117;
          }
          *i117 = v227;
          v230 = i117 + 5;
          *((_DWORD *)v230 - 1) = *(_DWORD *)v10;
          output.ptr = v230;
        }
        break;
      case 95:
        v231 = *((_DWORD *)v7 + 1);
        if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v231 >> 3 )
        {
          for ( i118 = output.ptr; v231 > 0x7F; *(i118 - 1) = v233 | 0x80 )
          {
            v233 = v231;
            v231 >>= 7;
            ++i118;
          }
          *i118 = v231;
          v234 = i118 + 9;
          *((_QWORD *)v234 - 1) = *v10;
          output.ptr = v234;
        }
        break;
      case 96:
        v235 = *((_DWORD *)v7 + 1);
        if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v235 >> 3 )
        {
          for ( i119 = output.ptr; v235 > 0x7F; *(i119 - 1) = v237 | 0x80 )
          {
            v237 = v235;
            v235 >>= 7;
            ++i119;
          }
          *i119 = v235;
          v238 = i119 + 1;
          for ( i120 = (*(int *)v10 >> 31) ^ (2 * *(_DWORD *)v10); i120 > 0x7F; *(v238 - 1) = v240 | 0x80 )
          {
            v240 = i120;
            i120 >>= 7;
            ++v238;
          }
          *v238 = i120;
          output.ptr = v238 + 1;
        }
        break;
      case 97:
        v241 = *((_DWORD *)v7 + 1);
        if ( *(_DWORD *)((char *)this + *((unsigned int *)v7 + 2)) == v241 >> 3 )
        {
          for ( i121 = output.ptr; v241 > 0x7F; *(i121 - 1) = v243 | 0x80 )
          {
            v243 = v241;
            v241 >>= 7;
            ++i121;
          }
          *i121 = v241;
          v244 = i121 + 1;
          for ( i122 = ((__int64)*v10 >> 63) ^ (2LL * *v10); i122 > 0x7F; *(v244 - 1) = v246 | 0x80 )
          {
            v246 = i122;
            i122 >>= 7;
            ++v244;
          }
          *v244 = i122;
          output.ptr = v244 + 1;
        }
        break;
      case 100:
        google::protobuf::io::ArrayOutputStream::ArrayOutputStream(&v561, output.ptr, 0x7FFFFFFF, -1);
        google::protobuf::io::CodedOutputStream::CodedOutputStream(
          (google::protobuf::io::CodedOutputStream *const)v562,
          &v561);
        v247 = *((unsigned int *)v7 + 2);
        v248 = *((unsigned int *)v7 + 1);
        v249 = *(unsigned int *)v7;
        BYTE2(v562[0].message_._M_dataplus._M_p) = 1;
        BYTE3(v562[0].message_._M_dataplus._M_p) = a4;
        (*((void (__fastcall **)(google::protobuf::internal *, __int64, __int64, __int64, google::protobuf::internal::LogMessage_0 *))v7
         + 2))(
          this,
          v249,
          v248,
          v247,
          v562);
        output.ptr += *(&v562[0].line_ + 1) - v562[0].line_;
        google::protobuf::io::CodedOutputStream::~CodedOutputStream((google::protobuf::io::CodedOutputStream *const)v562);
        break;
      default:
        google::protobuf::internal::SerializeNotImplemented(v9);
        break;
    }
    v7 += 24;
  }
  while ( v8 != v7 );
  return output.ptr;
};

// Line 685: range 000000000C897270-000000000C89727D
void __fastcall google::protobuf::internal::ExtensionSerializer(
        const google::protobuf::uint8 *ptr,
        google::protobuf::uint32 offset,
        google::protobuf::uint32 tag,
        google::protobuf::uint32 has_offset,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::internal::ExtensionSet::SerializeWithCachedSizes(
    (const google::protobuf::internal::ExtensionSet *const)&ptr[offset],
    tag,
    has_offset,
    output);
};

// Line 692: range 000000000C897290-000000000C8972B5
void __fastcall google::protobuf::internal::UnknownFieldSerializerLite(
        const google::protobuf::uint8 *ptr,
        google::protobuf::uint32 offset,
        google::protobuf::uint32 tag,
        google::protobuf::uint32 has_offset,
        google::protobuf::io::CodedOutputStream *output)
{
  google::protobuf::internal::ExplicitlyConstructed<std::string > *v5; // rax

  v5 = (google::protobuf::internal::ExplicitlyConstructed<std::string > *)(*(_QWORD *)&ptr[offset] & 0xFFFFFFFFFFFFFFFELL);
  if ( (*(_QWORD *)&ptr[offset] & 1) == 0 )
    v5 = &google::protobuf::internal::fixed_address_empty_string[abi:cxx11];
  google::protobuf::io::CodedOutputStream::WriteRaw(
    output,
    v5->union_.align_to_ptr,
    *((_DWORD *)&v5->union_.align_to_ptr + 2));
};

// Line 700: range 000000000C746940-000000000C746961
void __cdecl GLOBAL__sub_I__ZN6google8protobuf8internal8InfinityEv()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
