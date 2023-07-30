// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/reflection_ops.cc

// Line 50: range 000000000C8BFA00-000000000C8BFA30
void __fastcall google::protobuf::internal::ReflectionOps::Copy(
        const google::protobuf::Message *from,
        google::protobuf::Message *to)
{
  google::protobuf::Message *v2; // rdx

  if ( from != to )
  {
    google::protobuf::internal::ReflectionOps::Clear((google::protobuf::internal::ReflectionOps *)to, to);
    google::protobuf::internal::ReflectionOps::Merge((google::protobuf::internal::ReflectionOps *)from, to, v2);
  }
};

// Line 55: range 000000000C8BF150-000000000C8BF911
void __fastcall google::protobuf::internal::ReflectionOps::Merge(
        google::protobuf::internal::ReflectionOps *this,
        google::protobuf::internal::LogMessage_0 *a2,
        google::protobuf::Message *a3)
{
  google::protobuf::internal::LogMessage_0 *v3; // r15
  __int64 v4; // rbx
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogMessage_0 *v6; // rax
  google::protobuf::internal::LogMessage_0 *v7; // rax
  google::protobuf::internal::LogMessage_0 *v8; // rax
  google::protobuf::internal::LogMessage_0 *v9; // r12
  __int64 v10; // rax
  google::protobuf::internal::LogMessage_0 *v11; // rax
  google::protobuf::internal::LogMessage_0 *v12; // rsi
  const google::protobuf::Message::Reflection *(__fastcall *v13)(const google::protobuf::Message *const); // rdx
  __int64 v14; // rdx
  __int64 v15; // rbp
  const google::protobuf::Message::Reflection *(__fastcall *v16)(const google::protobuf::Message *const); // rdx
  __int64 v17; // rdx
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rbx
  __int64 v23; // rax
  google::protobuf::UnknownFieldSet *v24; // r12
  const google::protobuf::UnknownFieldSet *v25; // rax
  void (__fastcall *v26)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, google::protobuf::internal::LogMessage_0 *); // rbx
  void (__fastcall *v27)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, __int64); // rbx
  __int64 v28; // rax
  void (__fastcall *v29)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, _QWORD); // rbx
  unsigned __int8 v30; // al
  void (__fastcall *v31)(__int64, google::protobuf::internal::LogMessage_0 *, __int64); // rbx
  void (__fastcall *v32)(__int64, google::protobuf::internal::LogMessage_0 *, __int64); // rbx
  void (__fastcall *v33)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, _QWORD); // rbx
  unsigned int v34; // eax
  unsigned int v35; // ebx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // [rsp+0h] [rbp-B8h]
  void (__fastcall *v40)(__int64, __int64); // [rsp+8h] [rbp-B0h]
  int v41; // [rsp+8h] [rbp-B0h]
  void (__fastcall *v42)(__int64, __int64); // [rsp+10h] [rbp-A8h]
  void (__fastcall *v43)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, google::protobuf::internal::LogMessage_0 *); // [rsp+10h] [rbp-A8h]
  void (__fastcall *v44)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, __int64); // [rsp+10h] [rbp-A8h]
  void (__fastcall *v45)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, __int64); // [rsp+10h] [rbp-A8h]
  void (__fastcall *v46)(__int64, google::protobuf::internal::LogMessage_0 *, __int64); // [rsp+10h] [rbp-A8h]
  void (__fastcall *v47)(__int64, google::protobuf::internal::LogMessage_0 *, __int64); // [rsp+10h] [rbp-A8h]
  __int64 v48; // [rsp+18h] [rbp-A0h]
  google::protobuf::internal::LogFinisher v49[8]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v50; // [rsp+28h] [rbp-90h]
  __int64 v51; // [rsp+30h] [rbp-88h]
  google::protobuf::internal::LogMessage_0 v52; // [rsp+40h] [rbp-78h] BYREF

  v3 = a2;
  if ( this == (google::protobuf::internal::ReflectionOps *)a2 )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v52, LOGLEVEL_FATAL_0, "google/protobuf/reflection_ops.cc", 56);
    a2 = google::protobuf::internal::LogMessage::operator<<(&v52, "CHECK failed: (&from) != (to): ");
    google::protobuf::internal::LogFinisher::operator=(v49, a2);
    google::protobuf::internal::LogMessage::~LogMessage(&v52);
  }
  v4 = (*(__int64 (__fastcall **)(google::protobuf::internal::ReflectionOps *, google::protobuf::internal::LogMessage_0 *, google::protobuf::Message *))(*(_QWORD *)this->gap0 + 192LL))(
         this,
         a2,
         a3);
  if ( v4 != (*(__int64 (__fastcall **)(google::protobuf::internal::LogMessage_0 *))(*(_QWORD *)&v3->level_ + 192LL))(v3) )
  {
    google::protobuf::internal::LogMessage::LogMessage(&v52, LOGLEVEL_FATAL_0, "google/protobuf/reflection_ops.cc", 59);
    v5 = google::protobuf::internal::LogMessage::operator<<(
           &v52,
           "CHECK failed: (to->GetDescriptor()) == (descriptor): ");
    v6 = google::protobuf::internal::LogMessage::operator<<(v5, "Tried to merge messages of different types ");
    v7 = google::protobuf::internal::LogMessage::operator<<(v6, "(merge ");
    v8 = google::protobuf::internal::LogMessage::operator<<(v7, *(const std::string **)(v4 + 8));
    v9 = google::protobuf::internal::LogMessage::operator<<(v8, " to ");
    v10 = (*(__int64 (__fastcall **)(google::protobuf::internal::LogMessage_0 *))(*(_QWORD *)&v3->level_ + 192LL))(v3);
    v11 = google::protobuf::internal::LogMessage::operator<<(v9, *(const std::string **)(v10 + 8));
    v12 = google::protobuf::internal::LogMessage::operator<<(v11, ")");
    google::protobuf::internal::LogFinisher::operator=(v49, v12);
    google::protobuf::internal::LogMessage::~LogMessage(&v52);
  }
  v13 = *(const google::protobuf::Message::Reflection *(__fastcall **)(const google::protobuf::Message *const))(*(_QWORD *)this->gap0 + 184LL);
  if ( v13 == google::protobuf::Message::GetReflection )
  {
    (*(void (__fastcall **)(google::protobuf::internal::ReflectionOps *))(*(_QWORD *)this->gap0 + 192LL))(this);
    v15 = v14;
  }
  else
  {
    v15 = (__int64)v13((const google::protobuf::Message *const)this);
  }
  v16 = *(const google::protobuf::Message::Reflection *(__fastcall **)(const google::protobuf::Message *const))(*(_QWORD *)&v3->level_ + 184LL);
  if ( v16 == google::protobuf::Message::GetReflection )
  {
    (*(void (__fastcall **)(google::protobuf::internal::LogMessage_0 *))(*(_QWORD *)&v3->level_ + 192LL))(v3);
    v18 = v17;
  }
  else
  {
    v18 = (__int64)v16((const google::protobuf::Message *const)v3);
  }
  v19 = *(_QWORD *)v15;
  *(_QWORD *)v49[0].gap0 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  (*(void (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, google::protobuf::internal::LogFinisher *))(v19 + 128))(
    v15,
    this,
    v49);
  v20 = *(_QWORD *)v49[0].gap0;
  if ( *(_QWORD *)v49[0].gap0 != v50 )
  {
    v39 = 0LL;
    do
    {
      v21 = *(_QWORD *)(v20 + 8 * v39);
      if ( *(_DWORD *)(v21 + 60) == 3 )
      {
        v41 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, _QWORD))(*(_QWORD *)v15 + 48LL))(
                v15,
                this,
                *(_QWORD *)(v20 + 8 * v39));
        v35 = 0;
        if ( v41 > 0 )
        {
          do
          {
            switch ( (unsigned int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)v21) )
            {
              case 1u:
                v47 = *(void (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *, __int64))(*(_QWORD *)v18 + 560LL);
                (*(void (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64, _QWORD))(*(_QWORD *)v15 + 376LL))(
                  v15,
                  this,
                  v21,
                  v35);
                v47(v18, v3, v21);
                break;
              case 2u:
                v46 = *(void (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *, __int64))(*(_QWORD *)v18 + 552LL);
                (*(void (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64, _QWORD))(*(_QWORD *)v15 + 368LL))(
                  v15,
                  this,
                  v21,
                  v35);
                v46(v18, v3, v21);
                break;
              case 3u:
              case 0x10u:
              case 0x12u:
                v44 = *(void (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, __int64))(*(_QWORD *)v18 + 528LL);
                v37 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64, _QWORD))(*(_QWORD *)v15 + 344LL))(
                        v15,
                        this,
                        v21,
                        v35);
                goto LABEL_38;
              case 4u:
              case 6u:
                v44 = *(void (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, __int64))(*(_QWORD *)v18 + 544LL);
                v37 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64, _QWORD))(*(_QWORD *)v15 + 360LL))(
                        v15,
                        this,
                        v21,
                        v35);
                goto LABEL_38;
              case 5u:
              case 0xFu:
              case 0x11u:
                v45 = *(void (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, __int64))(*(_QWORD *)v18 + 520LL);
                v38 = (*(unsigned int (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64, _QWORD))(*(_QWORD *)v15 + 336LL))(
                        v15,
                        this,
                        v21,
                        v35);
                goto LABEL_40;
              case 7u:
              case 0xDu:
                v45 = *(void (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, __int64))(*(_QWORD *)v18 + 536LL);
                v38 = (*(unsigned int (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64, _QWORD))(*(_QWORD *)v15 + 352LL))(
                        v15,
                        this,
                        v21,
                        v35);
                goto LABEL_40;
              case 8u:
                v45 = *(void (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, __int64))(*(_QWORD *)v18 + 568LL);
                v38 = (*(unsigned __int8 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64, _QWORD))(*(_QWORD *)v15 + 384LL))(
                        v15,
                        this,
                        v21,
                        v35);
LABEL_40:
                v45(v18, v3, v21, v38);
                break;
              case 9u:
              case 0xCu:
                v43 = *(void (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, google::protobuf::internal::LogMessage_0 *))(*(_QWORD *)v18 + 576LL);
                (*(void (__fastcall **)(google::protobuf::internal::LogMessage_0 *, __int64, google::protobuf::internal::ReflectionOps *, __int64, _QWORD))(*(_QWORD *)v15 + 392LL))(
                  &v52,
                  v15,
                  this,
                  v21,
                  v35);
                v43(v18, v3, v21, &v52);
                if ( *(google::protobuf::internal::LogMessage_0 **)&v52.level_ != (google::protobuf::internal::LogMessage_0 *)&v52.line_ )
                  operator delete(*(void **)&v52.level_);
                break;
              case 0xAu:
              case 0xBu:
                v48 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, _QWORD))(*(_QWORD *)v18 + 600LL))(
                        v18,
                        v3,
                        v21,
                        0LL);
                v42 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v48 + 152LL);
                v36 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64, _QWORD))(*(_QWORD *)v15 + 416LL))(
                        v15,
                        this,
                        v21,
                        v35);
                v42(v48, v36);
                break;
              case 0xEu:
                v44 = *(void (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, __int64))(*(_QWORD *)v18 + 584LL);
                v37 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64, _QWORD))(*(_QWORD *)v15 + 400LL))(
                        v15,
                        this,
                        v21,
                        v35);
LABEL_38:
                v44(v18, v3, v21, v37);
                break;
              default:
                break;
            }
            ++v35;
          }
          while ( v41 != v35 );
        }
      }
      else
      {
        switch ( (unsigned int)google::protobuf::FieldDescriptor::type(*(google::protobuf::FieldDescriptor **)(v20 + 8 * v39)) )
        {
          case 1u:
            v32 = *(void (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *, __int64))(*(_QWORD *)v18 + 272LL);
            (*(void (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64))(*(_QWORD *)v15
                                                                                                  + 176LL))(
              v15,
              this,
              v21);
            v32(v18, v3, v21);
            break;
          case 2u:
            v31 = *(void (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *, __int64))(*(_QWORD *)v18 + 264LL);
            (*(void (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64))(*(_QWORD *)v15
                                                                                                  + 168LL))(
              v15,
              this,
              v21);
            v31(v18, v3, v21);
            break;
          case 3u:
          case 0x10u:
          case 0x12u:
            v27 = *(void (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, __int64))(*(_QWORD *)v18 + 240LL);
            v28 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64))(*(_QWORD *)v15 + 144LL))(
                    v15,
                    this,
                    v21);
            goto LABEL_21;
          case 4u:
          case 6u:
            v27 = *(void (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, __int64))(*(_QWORD *)v18 + 256LL);
            v28 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64))(*(_QWORD *)v15 + 160LL))(
                    v15,
                    this,
                    v21);
            goto LABEL_21;
          case 5u:
          case 0xFu:
          case 0x11u:
            v33 = *(void (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, _QWORD))(*(_QWORD *)v18 + 232LL);
            v34 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64))(*(_QWORD *)v15 + 136LL))(
                    v15,
                    this,
                    v21);
            goto LABEL_27;
          case 7u:
          case 0xDu:
            v33 = *(void (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, _QWORD))(*(_QWORD *)v18 + 248LL);
            v34 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64))(*(_QWORD *)v15 + 152LL))(
                    v15,
                    this,
                    v21);
LABEL_27:
            v33(v18, v3, v21, v34);
            break;
          case 8u:
            v29 = *(void (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, _QWORD))(*(_QWORD *)v18 + 280LL);
            v30 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64))(*(_QWORD *)v15 + 184LL))(
                    v15,
                    this,
                    v21);
            v29(v18, v3, v21, v30);
            break;
          case 9u:
          case 0xCu:
            v26 = *(void (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, google::protobuf::internal::LogMessage_0 *))(*(_QWORD *)v18 + 288LL);
            (*(void (__fastcall **)(google::protobuf::internal::LogMessage_0 *, __int64, google::protobuf::internal::ReflectionOps *, __int64))(*(_QWORD *)v15 + 192LL))(
              &v52,
              v15,
              this,
              v21);
            v26(v18, v3, v21, &v52);
            if ( *(google::protobuf::internal::LogMessage_0 **)&v52.level_ != (google::protobuf::internal::LogMessage_0 *)&v52.line_ )
              operator delete(*(void **)&v52.level_);
            break;
          case 0xAu:
          case 0xBu:
            v22 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, _QWORD))(*(_QWORD *)v18 + 312LL))(
                    v18,
                    v3,
                    v21,
                    0LL);
            v40 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 152LL);
            v23 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64, _QWORD))(*(_QWORD *)v15 + 216LL))(
                    v15,
                    this,
                    v21,
                    0LL);
            v40(v22, v23);
            break;
          case 0xEu:
            v27 = *(void (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *, __int64, __int64))(*(_QWORD *)v18 + 296LL);
            v28 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64))(*(_QWORD *)v15 + 200LL))(
                    v15,
                    this,
                    v21);
LABEL_21:
            v27(v18, v3, v21, v28);
            break;
          default:
            break;
        }
      }
      v20 = *(_QWORD *)v49[0].gap0;
      ++v39;
    }
    while ( (v50 - *(_QWORD *)v49[0].gap0) >> 3 > v39 );
  }
  v24 = (google::protobuf::UnknownFieldSet *)(*(__int64 (__fastcall **)(__int64, google::protobuf::internal::LogMessage_0 *))(*(_QWORD *)v18 + 24LL))(
                                               v18,
                                               v3);
  v25 = (const google::protobuf::UnknownFieldSet *)(*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *))(*(_QWORD *)v15 + 16LL))(
                                                     v15,
                                                     this);
  google::protobuf::UnknownFieldSet::MergeFrom(v24, v25);
  if ( *(_QWORD *)v49[0].gap0 )
    operator delete(*(void **)v49[0].gap0);
};

// Line 56: range 000000000C72B5F4-000000000C72B5FF
void __fastcall __noreturn google::protobuf::internal::ReflectionOps::Merge()
{
  google::protobuf::internal::LogMessage_0 *v0; // rbp
  struct _Unwind_Exception *v1; // r12

  google::protobuf::internal::LogMessage::~LogMessage(v0);
  _Unwind_Resume(v1);
};

// Line 130: range 000000000C8BF920-000000000C8BF9F5
void __fastcall google::protobuf::internal::ReflectionOps::Clear(
        google::protobuf::internal::ReflectionOps *this,
        google::protobuf::Message *a2)
{
  const google::protobuf::Message::Reflection *(__fastcall *v2)(const google::protobuf::Message *const); // rdx
  __int64 v3; // rdx
  __int64 v4; // rbp
  __int64 v5; // rax
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rbx
  google::protobuf::UnknownFieldSet *v8; // rdi
  void *v9; // [rsp+0h] [rbp-38h] BYREF
  _BYTE *v10; // [rsp+8h] [rbp-30h]
  __int64 v11; // [rsp+10h] [rbp-28h]

  v2 = *(const google::protobuf::Message::Reflection *(__fastcall **)(const google::protobuf::Message *const))(*(_QWORD *)this->gap0 + 184LL);
  if ( v2 == google::protobuf::Message::GetReflection )
  {
    (*(void (__fastcall **)(google::protobuf::internal::ReflectionOps *, google::protobuf::Message *))(*(_QWORD *)this->gap0 + 192LL))(
      this,
      a2);
    v4 = v3;
  }
  else
  {
    v4 = ((__int64 (__fastcall *)(google::protobuf::internal::ReflectionOps *, google::protobuf::Message *))v2)(
           this,
           a2);
  }
  v5 = *(_QWORD *)v4;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  (*(void (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, void **))(v5 + 128))(v4, this, &v9);
  v6 = v9;
  if ( v9 != v10 )
  {
    v7 = 0LL;
    do
    {
      (*(void (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, _QWORD))(*(_QWORD *)v4 + 56LL))(
        v4,
        this,
        v6[v7]);
      v6 = v9;
      ++v7;
    }
    while ( (v10 - (_BYTE *)v9) >> 3 > v7 );
  }
  v8 = (google::protobuf::UnknownFieldSet *)(*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *))(*(_QWORD *)v4 + 24LL))(
                                              v4,
                                              this);
  if ( v8->fields_ )
    google::protobuf::UnknownFieldSet::ClearFallback(v8);
  if ( v9 )
    operator delete(v9);
};

// Line 142: range 000000000C8BFBC0-000000000C8C04DE
__int64 __fastcall google::protobuf::internal::ReflectionOps::IsInitialized(
        google::protobuf::internal::ReflectionOps *this,
        const google::protobuf::Message *a2)
{
  __int64 v3; // r14
  __int64 (*v4)(void); // rdx
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // r12d
  __int64 result; // rax
  int v11; // r15d
  unsigned int v12; // r14d
  __int64 v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rax
  const google::protobuf::Descriptor *v19; // rax
  const google::protobuf::internal::MapFieldBase *v20; // r14
  google::protobuf::internal::MapFieldBase *(__fastcall *v21)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *); // rax
  __int64 v22; // rax
  const google::protobuf::Message::Reflection *(__fastcall *v23)(const google::protobuf::Message *const); // rdx
  __int64 v24; // rdx
  __int64 v25; // rdi
  google::protobuf::internal::MapFieldBase *(__fastcall *v26)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *); // rcx
  __int64 v27; // rax
  const google::protobuf::Descriptor *v28; // r15
  std::forward_iterator_tag v29; // cl
  google::protobuf::FieldDescriptor *FieldByName; // rax
  int v31; // r15d
  const google::protobuf::Descriptor *v32; // r15
  std::forward_iterator_tag v33; // cl
  google::protobuf::FieldDescriptor *v34; // rax
  __int64 v35; // rax
  const google::protobuf::Message::Reflection *(__fastcall *v36)(const google::protobuf::Message *const); // rdx
  __int64 v37; // rdx
  __int64 v38; // rdi
  google::protobuf::internal::MapFieldBase *(__fastcall *v39)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *); // rcx
  __int64 v40; // rax
  const google::protobuf::Descriptor *v41; // r15
  std::forward_iterator_tag v42; // cl
  google::protobuf::FieldDescriptor *v43; // rax
  int v44; // r15d
  const google::protobuf::Descriptor *v45; // r12
  std::forward_iterator_tag v46; // cl
  google::protobuf::FieldDescriptor *v47; // rax
  google::protobuf::FieldDescriptor::CppType v48; // eax
  google::protobuf::internal::LogMessage_0 *v49; // rax
  google::protobuf::internal::LogMessage_0 *v50; // rax
  google::protobuf::internal::LogMessage_0 *v51; // rax
  google::protobuf::internal::LogMessage_0 *v52; // rax
  google::protobuf::internal::LogMessage_0 *v53; // rax
  google::protobuf::internal::LogMessage_0 *v54; // rax
  google::protobuf::internal::LogMessage_0 *v55; // r12
  __int64 v56; // rax
  google::protobuf::internal::LogMessage_0 *v57; // rsi
  google::protobuf::internal::LogMessage_0 *v58; // rax
  google::protobuf::internal::LogMessage_0 *v59; // rsi
  void *v60; // r8
  void *int64_value; // r8
  google::protobuf::internal::LogMessage_0 *v62; // rax
  google::protobuf::internal::LogMessage_0 *v63; // rax
  google::protobuf::MapKey::KeyValue v64; // rax
  google::protobuf::MapKey::KeyValue v65; // rax
  unsigned __int8 v66; // [rsp+8h] [rbp-150h]
  google::protobuf::MapKey::KeyValue v67; // [rsp+8h] [rbp-150h]
  google::protobuf::MapKey::KeyValue v68; // [rsp+8h] [rbp-150h]
  google::protobuf::internal::LogFinisher v69; // [rsp+1Fh] [rbp-139h] BYREF
  void *v70; // [rsp+20h] [rbp-138h] BYREF
  _BYTE *v71; // [rsp+28h] [rbp-130h]
  __int64 v72; // [rsp+30h] [rbp-128h]
  char v73[8]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v74; // [rsp+48h] [rbp-110h]
  google::protobuf::MapKey v75; // [rsp+50h] [rbp-108h] BYREF
  __int64 v76; // [rsp+60h] [rbp-F8h]
  google::protobuf::FieldDescriptor::CppType v77; // [rsp+68h] [rbp-F0h]
  char v78[8]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v79; // [rsp+78h] [rbp-E0h]
  google::protobuf::MapKey v80; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v81; // [rsp+90h] [rbp-C8h]
  google::protobuf::FieldDescriptor::CppType v82; // [rsp+98h] [rbp-C0h]
  google::protobuf::internal::LogMessage_0 v83; // [rsp+A0h] [rbp-B8h] BYREF
  google::protobuf::internal::LogMessage_0 key[2]; // [rsp+E0h] [rbp-78h] BYREF

  v3 = (*(__int64 (__fastcall **)(google::protobuf::internal::ReflectionOps *, const google::protobuf::Message *))(*(_QWORD *)this->gap0 + 192LL))(
         this,
         a2);
  v4 = *(__int64 (**)(void))(*(_QWORD *)this->gap0 + 184LL);
  if ( (char *)v4 == (char *)google::protobuf::Message::GetReflection )
  {
    (*(void (**)(void))(*(_QWORD *)this->gap0 + 192LL))();
    v6 = v5;
  }
  else
  {
    v6 = v4();
  }
  v7 = *(_QWORD *)v6;
  if ( *(int *)(v3 + 104) > 0 )
  {
    v8 = 0LL;
    v9 = 0;
    do
    {
      if ( *(_DWORD *)(v8 + *(_QWORD *)(v3 + 40) + 60) == 2 )
      {
        result = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *))(v7 + 40))(v6, this);
        if ( !(_BYTE)result )
          return result;
        v7 = *(_QWORD *)v6;
      }
      ++v9;
      v8 += 152LL;
    }
    while ( v9 < *(_DWORD *)(v3 + 104) );
  }
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  (*(void (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, void **))(v7 + 128))(v6, this, &v70);
  v14 = v70;
  if ( v70 == v71 )
  {
LABEL_63:
    result = 1LL;
    goto LABEL_14;
  }
  v15 = 0LL;
  while ( 1 )
  {
    v16 = v14[v15];
    if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)v16)] != CPPTYPE_MESSAGE_0 )
      goto LABEL_19;
    if ( google::protobuf::FieldDescriptor::is_map((google::protobuf::FieldDescriptor *)v16) )
    {
      v19 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)v16);
      if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(v19->fields_ + 1)] != CPPTYPE_MESSAGE_0 )
        goto LABEL_19;
      v20 = 0LL;
      v21 = *(google::protobuf::internal::MapFieldBase *(__fastcall **)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v6 + 728LL);
      if ( v21 != google::protobuf::Reflection::MapData )
        v20 = v21(
                (const google::protobuf::Reflection *const)v6,
                (google::protobuf::Message *)this,
                (const google::protobuf::FieldDescriptor *)v16);
      if ( google::protobuf::internal::MapFieldBase::IsMapValid(v20) )
        break;
    }
    v17 = *(_QWORD *)v6;
    if ( *(_DWORD *)(v16 + 60) == 3 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64))(v17 + 48))(
              v6,
              this,
              v16);
      if ( v11 > 0 )
      {
        v12 = 0;
        while ( 1 )
        {
          v13 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64, _QWORD))(*(_QWORD *)v6 + 416LL))(
                  v6,
                  this,
                  v16,
                  v12);
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 64LL))(v13);
          if ( !(_BYTE)result )
            break;
          if ( v11 == ++v12 )
            goto LABEL_19;
        }
LABEL_13:
        v14 = v70;
        goto LABEL_14;
      }
    }
    else
    {
      v18 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64, _QWORD))(v17 + 216))(
              v6,
              this,
              v16,
              0LL);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 64LL))(v18);
      if ( !(_BYTE)result )
        goto LABEL_13;
    }
LABEL_19:
    v14 = v70;
    if ( ++v15 >= (unsigned __int64)((v71 - (_BYTE *)v70) >> 3) )
      goto LABEL_63;
  }
  v22 = *(_QWORD *)this->gap0;
  v75.type_ = 0;
  v76 = 0LL;
  v23 = *(const google::protobuf::Message::Reflection *(__fastcall **)(const google::protobuf::Message *const))(v22 + 184);
  v77 = 0;
  if ( v23 == google::protobuf::Message::GetReflection )
  {
    (*(void (__fastcall **)(google::protobuf::internal::ReflectionOps *))(v22 + 192))(this);
    v25 = v24;
  }
  else
  {
    v25 = (__int64)v23((const google::protobuf::Message *const)this);
  }
  v26 = *(google::protobuf::internal::MapFieldBase *(__fastcall **)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v25 + 728LL);
  v27 = 0LL;
  if ( v26 != google::protobuf::Reflection::MapData )
    v27 = (__int64)v26(
                     (const google::protobuf::Reflection *const)v25,
                     (google::protobuf::Message *)this,
                     (const google::protobuf::FieldDescriptor *)v16);
  v74 = v27;
  v28 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)v16);
  *(_QWORD *)&key[0].level_ = &key[0].line_;
  std::string::_M_construct<char const*>((std::string *const)key, off_1A19A99E, &off_1A19A99E[3], v29);
  FieldByName = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(
                                                       v28,
                                                       (const std::string *)key);
  v31 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(FieldByName)];
  if ( v75.type_ != v31 )
  {
    if ( v75.type_ == 9 )
    {
      int64_value = (void *)v75.val_.int64_value_;
      if ( v75.val_.int64_value_ )
      {
        if ( v75.val_.string_value_->_M_dataplus._M_p != (std::string::pointer)(v75.val_.int64_value_ + 16) )
        {
          v68.string_value_ = (std::string *)v75.val_;
          operator delete(v75.val_.string_value_->_M_dataplus._M_p);
          int64_value = (void *)v68.int64_value_;
        }
        operator delete(int64_value, 0x20uLL);
      }
    }
    v75.type_ = v31;
    if ( v31 == 9 )
    {
      v65.int64_value_ = operator new(0x20uLL);
      *(_QWORD *)(v65.int64_value_ + 8) = 0LL;
      v65.string_value_->_M_dataplus._M_p = (std::string::pointer)(v65.int64_value_ + 16);
      *(_BYTE *)(v65.int64_value_ + 16) = 0;
      v75.val_ = v65;
    }
  }
  if ( *(google::protobuf::internal::LogMessage_0 **)&key[0].level_ != (google::protobuf::internal::LogMessage_0 *)&key[0].line_ )
    operator delete(*(void **)&key[0].level_);
  v32 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)v16);
  *(_QWORD *)&key[0].level_ = &key[0].line_;
  std::string::_M_construct<char const*>((std::string *const)key, "value", "", v33);
  v34 = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(
                                               v32,
                                               (const std::string *)key);
  v77 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(v34)];
  if ( *(google::protobuf::internal::LogMessage_0 **)&key[0].level_ != (google::protobuf::internal::LogMessage_0 *)&key[0].line_ )
    operator delete(*(void **)&key[0].level_);
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v74 + 96LL))(v74, v73);
  v35 = *(_QWORD *)this->gap0;
  v80.type_ = 0;
  v81 = 0LL;
  v36 = *(const google::protobuf::Message::Reflection *(__fastcall **)(const google::protobuf::Message *const))(v35 + 184);
  v82 = 0;
  if ( v36 == google::protobuf::Message::GetReflection )
  {
    (*(void (__fastcall **)(google::protobuf::internal::ReflectionOps *))(v35 + 192))(this);
    v38 = v37;
  }
  else
  {
    v38 = (__int64)v36((const google::protobuf::Message *const)this);
  }
  v39 = *(google::protobuf::internal::MapFieldBase *(__fastcall **)(const google::protobuf::Reflection *const, google::protobuf::Message *, const google::protobuf::FieldDescriptor *))(*(_QWORD *)v38 + 728LL);
  v40 = 0LL;
  if ( v39 != google::protobuf::Reflection::MapData )
    v40 = (__int64)v39(
                     (const google::protobuf::Reflection *const)v38,
                     (google::protobuf::Message *)this,
                     (const google::protobuf::FieldDescriptor *)v16);
  v79 = v40;
  v41 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)v16);
  *(_QWORD *)&key[0].level_ = &key[0].line_;
  std::string::_M_construct<char const*>((std::string *const)key, off_1A19A99E, &off_1A19A99E[3], v42);
  v43 = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(
                                               v41,
                                               (const std::string *)key);
  v44 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(v43)];
  if ( v80.type_ != v44 )
  {
    if ( v80.type_ == 9 )
    {
      v60 = (void *)v80.val_.int64_value_;
      if ( v80.val_.int64_value_ )
      {
        if ( v80.val_.string_value_->_M_dataplus._M_p != (std::string::pointer)(v80.val_.int64_value_ + 16) )
        {
          v67.string_value_ = (std::string *)v80.val_;
          operator delete(v80.val_.string_value_->_M_dataplus._M_p);
          v60 = (void *)v67.int64_value_;
        }
        operator delete(v60, 0x20uLL);
      }
    }
    v80.type_ = v44;
    if ( v44 == 9 )
    {
      v64.int64_value_ = operator new(0x20uLL);
      *(_QWORD *)(v64.int64_value_ + 8) = 0LL;
      v64.string_value_->_M_dataplus._M_p = (std::string::pointer)(v64.int64_value_ + 16);
      *(_BYTE *)(v64.int64_value_ + 16) = 0;
      v80.val_ = v64;
    }
  }
  if ( *(google::protobuf::internal::LogMessage_0 **)&key[0].level_ != (google::protobuf::internal::LogMessage_0 *)&key[0].line_ )
    operator delete(*(void **)&key[0].level_);
  v45 = google::protobuf::FieldDescriptor::message_type((google::protobuf::FieldDescriptor *)v16);
  *(_QWORD *)&key[0].level_ = &key[0].line_;
  std::string::_M_construct<char const*>((std::string *const)key, "value", "", v46);
  v47 = (google::protobuf::FieldDescriptor *)google::protobuf::Descriptor::FindFieldByName(
                                               v45,
                                               (const std::string *)key);
  v82 = google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type(v47)];
  if ( *(google::protobuf::internal::LogMessage_0 **)&key[0].level_ != (google::protobuf::internal::LogMessage_0 *)&key[0].line_ )
    operator delete(*(void **)&key[0].level_);
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v79 + 96LL))(v79, v78);
  (*((void (__fastcall **)(const google::protobuf::internal::MapFieldBase *, char *))v20->_vptr_MapFieldBase + 6))(
    v20,
    v73);
  (*((void (__fastcall **)(const google::protobuf::internal::MapFieldBase *, char *))v20->_vptr_MapFieldBase + 7))(
    v20,
    v78);
  while ( 1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v74 + 40LL))(v74, v73, v78) )
    {
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v79 + 104LL))(v79, v78);
      google::protobuf::MapKey::~MapKey(&v80);
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v74 + 104LL))(v74, v73);
      google::protobuf::MapKey::~MapKey(&v75);
      goto LABEL_19;
    }
    v48 = v77;
    if ( !v77 || !v76 )
    {
      google::protobuf::internal::LogMessage::LogMessage(key, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 680);
      v58 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
      v59 = google::protobuf::internal::LogMessage::operator<<(v58, "MapValueRef::type MapValueRef is not initialized.");
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)&v83, v59);
      google::protobuf::internal::LogMessage::~LogMessage(key);
      v48 = v77;
    }
    if ( v48 != CPPTYPE_MESSAGE_0 )
    {
      google::protobuf::internal::LogMessage::LogMessage(&v83, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 651);
      v49 = google::protobuf::internal::LogMessage::operator<<(&v83, "Protocol Buffer map usage error:\n");
      v50 = google::protobuf::internal::LogMessage::operator<<(v49, "MapValueRef::GetMessageValue");
      v51 = google::protobuf::internal::LogMessage::operator<<(v50, " type does not match\n");
      v52 = google::protobuf::internal::LogMessage::operator<<(v51, "  Expected : ");
      v53 = google::protobuf::internal::LogMessage::operator<<(
              v52,
              google::protobuf::FieldDescriptor::kCppTypeToName[10]);
      v54 = google::protobuf::internal::LogMessage::operator<<(v53, "\n");
      v55 = google::protobuf::internal::LogMessage::operator<<(v54, "  Actual   : ");
      v56 = v77;
      if ( !v77 || !v76 )
      {
        google::protobuf::internal::LogMessage::LogMessage(key, LOGLEVEL_FATAL_0, "./google/protobuf/map_field.h", 680);
        v62 = google::protobuf::internal::LogMessage::operator<<(key, "Protocol Buffer map usage error:\n");
        v63 = google::protobuf::internal::LogMessage::operator<<(
                v62,
                "MapValueRef::type MapValueRef is not initialized.");
        google::protobuf::internal::LogFinisher::operator=(&v69, v63);
        google::protobuf::internal::LogMessage::~LogMessage(key);
        v56 = v77;
      }
      v57 = google::protobuf::internal::LogMessage::operator<<(
              v55,
              google::protobuf::FieldDescriptor::kCppTypeToName[v56]);
      google::protobuf::internal::LogFinisher::operator=((google::protobuf::internal::LogFinisher *const)key, v57);
      google::protobuf::internal::LogMessage::~LogMessage(&v83);
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v76 + 64LL))(v76) )
      break;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v74 + 120LL))(v74, v73);
  }
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v79 + 104LL))(v79, v78);
  google::protobuf::MapKey::~MapKey(&v80);
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v74 + 104LL))(v74, v73);
  google::protobuf::MapKey::~MapKey(&v75);
  v14 = v70;
  result = 0LL;
LABEL_14:
  if ( v14 )
  {
    v66 = result;
    operator delete(v14);
    return v66;
  }
  return result;
};

// Line 203: range 000000000C8BFA40-000000000C8BFBAD
void __fastcall google::protobuf::internal::ReflectionOps::DiscardUnknownFields(
        google::protobuf::internal::ReflectionOps *this,
        google::protobuf::Message *a2)
{
  const google::protobuf::Message::Reflection *(__fastcall *v3)(const google::protobuf::Message *const); // rdx
  __int64 v4; // rdx
  __int64 v5; // rbp
  google::protobuf::UnknownFieldSet *v6; // rdi
  __int64 v7; // rax
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // r15d
  unsigned int i; // r14d
  __int64 v15; // rax
  void *v16; // [rsp+0h] [rbp-58h] BYREF
  _BYTE *v17; // [rsp+8h] [rbp-50h]
  __int64 v18; // [rsp+10h] [rbp-48h]

  v3 = *(const google::protobuf::Message::Reflection *(__fastcall **)(const google::protobuf::Message *const))(*(_QWORD *)this->gap0 + 184LL);
  if ( v3 == google::protobuf::Message::GetReflection )
  {
    (*(void (__fastcall **)(google::protobuf::internal::ReflectionOps *, google::protobuf::Message *))(*(_QWORD *)this->gap0 + 192LL))(
      this,
      a2);
    v5 = v4;
  }
  else
  {
    v5 = ((__int64 (__fastcall *)(google::protobuf::internal::ReflectionOps *, google::protobuf::Message *))v3)(
           this,
           a2);
  }
  v6 = (google::protobuf::UnknownFieldSet *)(*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *))(*(_QWORD *)v5 + 24LL))(
                                              v5,
                                              this);
  if ( v6->fields_ )
    google::protobuf::UnknownFieldSet::ClearFallback(v6);
  v7 = *(_QWORD *)v5;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  (*(void (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, void **))(v7 + 128))(v5, this, &v16);
  v8 = v16;
  if ( v17 != v16 )
  {
    v9 = 0LL;
    do
    {
      v10 = v8[v9];
      if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)v10)] == CPPTYPE_MESSAGE_0 )
      {
        v11 = *(_QWORD *)v5;
        if ( *(_DWORD *)(v10 + 60) == 3 )
        {
          v13 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64))(v11 + 48))(
                  v5,
                  this,
                  v10);
          if ( v13 > 0 )
          {
            for ( i = 0; i != v13; ++i )
            {
              v15 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64, _QWORD))(*(_QWORD *)v5 + 512LL))(
                      v5,
                      this,
                      v10,
                      i);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 160LL))(v15);
            }
          }
        }
        else
        {
          v12 = (*(__int64 (__fastcall **)(__int64, google::protobuf::internal::ReflectionOps *, __int64, _QWORD))(v11 + 312))(
                  v5,
                  this,
                  v10,
                  0LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 160LL))(v12);
        }
      }
      v8 = v16;
      ++v9;
    }
    while ( (v17 - (_BYTE *)v16) >> 3 > v9 );
  }
  if ( v8 )
    operator delete(v8);
};

// Line 228: range 000000000C8C04F0-000000000C8C068B
std::string *__fastcall google::protobuf::internal::SubMessagePrefix(std::string *a1, __int64 a2, __int64 a3, int a4)
{
  std::string::size_type M_string_length; // rax
  std::string v8[2]; // [rsp+0h] [rbp-48h] BYREF

  a1->_M_dataplus._M_p = a1->_anon_0._M_local_buf;
  std::string::_M_construct<char *>(
    a1,
    *(char **)a2,
    (char *)(*(_QWORD *)a2 + *(_QWORD *)(a2 + 8)),
    (std::forward_iterator_tag)a4);
  if ( *(_BYTE *)(a3 + 66) )
  {
    if ( a1->_M_string_length == 0x3FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append(a1, "(", 1LL);
    std::string::_M_append(a1, **(const char ***)(a3 + 8), *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL));
    if ( a1->_M_string_length == 0x3FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append(a1, ")", 1LL);
  }
  else
  {
    std::string::_M_append(a1, **(const char ***)a3, *(_QWORD *)(*(_QWORD *)a3 + 8LL));
  }
  M_string_length = a1->_M_string_length;
  if ( a4 != -1 )
  {
    if ( M_string_length == 0x3FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append(a1, "[", 1LL);
    google::protobuf::SimpleItoa[abi:cxx11](v8, a4);
    std::string::_M_append(a1, v8[0]._M_dataplus._M_p, v8[0]._M_string_length);
    if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v8[0]._M_dataplus._M_p != &v8[0]._anon_0 )
      operator delete(v8[0]._M_dataplus._M_p);
    if ( a1->_M_string_length == 0x3FFFFFFFFFFFFFFFLL )
      std::__throw_length_error("basic_string::append");
    std::string::_M_append(a1, "]", 1LL);
    M_string_length = a1->_M_string_length;
  }
  if ( M_string_length == 0x3FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::append");
  std::string::_M_append(a1, ".", 1LL);
  return a1;
};

// Line 249: range 000000000C8C0690-000000000C8C099F
void __fastcall google::protobuf::internal::ReflectionOps::FindInitializationErrors(
        __int64 a1,
        __int64 a2,
        std::vector<std::string> *a3)
{
  __int64 v5; // r12
  __int64 (*v6)(void); // rdx
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // ebp
  std::forward_iterator_tag v12; // cl
  _QWORD *v13; // rdi
  unsigned __int64 v14; // rbx
  __int64 v15; // r12
  __int64 v16; // rax
  int v17; // ebp
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  std::string *v21; // rcx
  __m128i *M_finish; // rsi
  unsigned int v23; // ebp
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  int v27; // [rsp+0h] [rbp-98h]
  __int64 v28; // [rsp+8h] [rbp-90h]
  __int64 v29; // [rsp+10h] [rbp-88h]
  int v30; // [rsp+10h] [rbp-88h]
  void *v31; // [rsp+18h] [rbp-80h]
  void *v32; // [rsp+20h] [rbp-78h] BYREF
  int v33[2]; // [rsp+28h] [rbp-70h]
  int v34[2]; // [rsp+30h] [rbp-68h]
  void *v35; // [rsp+38h] [rbp-60h]
  std::string v36; // [rsp+40h] [rbp-58h] BYREF

  v28 = a2;
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 192LL))(a1);
  v6 = *(__int64 (**)(void))(*(_QWORD *)a1 + 184LL);
  if ( (char *)v6 == (char *)google::protobuf::Message::GetReflection )
  {
    (*(void (**)(void))(*(_QWORD *)a1 + 192LL))();
    v8 = v7;
  }
  else
  {
    v8 = v6();
  }
  v9 = *(_QWORD *)v8;
  if ( *(int *)(v5 + 104) > 0 )
  {
    v10 = 0LL;
    v11 = 0;
    do
    {
      if ( *(_DWORD *)(v10 + *(_QWORD *)(v5 + 40) + 60) == 2 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(v9 + 40))(v8, a1) )
        {
          v29 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + v10);
          v36._M_dataplus._M_p = v36._anon_0._M_local_buf;
          std::string::_M_construct<char *>(&v36, *(char **)v28, (char *)(*(_QWORD *)v28 + *(_QWORD *)(v28 + 8)), v12);
          std::string::_M_append(&v36, *(const char **)v29, *(_QWORD *)(v29 + 8));
          M_finish = (__m128i *)a3->_M_impl._M_finish;
          if ( M_finish == (__m128i *)a3->_M_impl._M_end_of_storage )
          {
            std::vector<std::string>::_M_realloc_insert<std::string>(
              a3,
              (std::vector<std::string>::iterator)M_finish,
              &v36,
              v21);
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v36._M_dataplus._M_p != &v36._anon_0 )
              operator delete(v36._M_dataplus._M_p);
          }
          else
          {
            M_finish->m128i_i64[0] = (__int64)M_finish[1].m128i_i64;
            if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v36._M_dataplus._M_p == &v36._anon_0 )
            {
              M_finish[1] = _mm_load_si128((const __m128i *)&v36._anon_0);
            }
            else
            {
              M_finish->m128i_i64[0] = (__int64)v36._M_dataplus._M_p;
              M_finish[1].m128i_i64[0] = v36._anon_0._M_allocated_capacity;
            }
            M_finish->m128i_i64[1] = v36._M_string_length;
            ++a3->_M_impl._M_finish;
          }
        }
        v9 = *(_QWORD *)v8;
      }
      ++v11;
      v10 += 152LL;
    }
    while ( v11 < *(_DWORD *)(v5 + 104) );
  }
  v32 = 0LL;
  *(_QWORD *)v33 = 0LL;
  *(_QWORD *)v34 = 0LL;
  (*(void (__fastcall **)(__int64, __int64, void **))(v9 + 128))(v8, a1, &v32);
  v13 = v32;
  if ( *(void **)v33 != v32 )
  {
    v14 = 0LL;
    do
    {
      v15 = v13[v14];
      if ( google::protobuf::FieldDescriptor::kTypeToCppTypeMap[(int)google::protobuf::FieldDescriptor::type((google::protobuf::FieldDescriptor *)v15)] == CPPTYPE_MESSAGE_0 )
      {
        v16 = *(_QWORD *)v8;
        if ( *(_DWORD *)(v15 + 60) == 3 )
        {
          HIDWORD(v31) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v16 + 48))(v8, a1, v15);
          if ( SHIDWORD(v31) > 0 )
          {
            v23 = 0;
            do
            {
              v30 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 416LL))(
                      v8,
                      a1,
                      v15,
                      v23);
              google::protobuf::internal::SubMessagePrefix(&v36, v28, v15, v23);
              google::protobuf::internal::ReflectionOps::FindInitializationErrors(
                v30,
                (int)&v36,
                (int)a3,
                v24,
                v25,
                v26,
                v27,
                v28,
                v30,
                v31,
                (int)v32,
                v33[0],
                v34[0],
                v35,
                (int)v36._M_dataplus._M_p,
                v36._M_string_length);
              if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v36._M_dataplus._M_p != &v36._anon_0 )
                operator delete(v36._M_dataplus._M_p);
              ++v23;
            }
            while ( HIDWORD(v31) != v23 );
          }
        }
        else
        {
          v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(v16 + 216))(v8, a1, v15, 0LL);
          google::protobuf::internal::SubMessagePrefix(&v36, v28, v15, -1);
          google::protobuf::internal::ReflectionOps::FindInitializationErrors(
            v17,
            (int)&v36,
            (int)a3,
            v18,
            v19,
            v20,
            v27,
            v28,
            v29,
            v31,
            (int)v32,
            v33[0],
            v34[0],
            v35,
            (int)v36._M_dataplus._M_p,
            v36._M_string_length);
          if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v36._M_dataplus._M_p != &v36._anon_0 )
            operator delete(v36._M_dataplus._M_p);
        }
      }
      v13 = v32;
      ++v14;
    }
    while ( (__int64)(*(_QWORD *)v33 - (_QWORD)v32) >> 3 > v14 );
  }
  if ( v13 )
    operator delete(v13);
};

// Line 291: range 000000000C746AC0-000000000C746AE1
void __cdecl GLOBAL__sub_I__ZN6google8protobuf8internal13ReflectionOps4CopyERKNS0_7MessageEPS3_()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
};
