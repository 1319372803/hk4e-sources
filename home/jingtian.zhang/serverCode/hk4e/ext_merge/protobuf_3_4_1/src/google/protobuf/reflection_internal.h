// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/protobuf_3_4_1/src/google/protobuf/reflection_internal.h

// Line 50: range 000000000C8BC6F0-000000000C8BC6F2
google::protobuf::internal::RepeatedFieldAccessor::Iterator *__fastcall google::protobuf::internal::RandomAccessRepeatedFieldAccessor::BeginIterator(
        const google::protobuf::internal::RandomAccessRepeatedFieldAccessor *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return 0LL;
};

// Line 51: range 000000000C8BC700-000000000C8BC710
google::protobuf::internal::RepeatedFieldAccessor::Iterator *__fastcall google::protobuf::internal::RandomAccessRepeatedFieldAccessor::EndIterator(
        const google::protobuf::internal::RandomAccessRepeatedFieldAccessor *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return (google::protobuf::internal::RepeatedFieldAccessor::Iterator *)(*((int (__fastcall **)(const google::protobuf::internal::RandomAccessRepeatedFieldAccessor *const, const google::protobuf::internal::RepeatedFieldAccessor::Field *))this->_vptr_RepeatedFieldAccessor
                                                                         + 3))(
                                                                          this,
                                                                          data);
};

// Line 54: range 000000000C8BC720-000000000C8BC723
google::protobuf::internal::RepeatedFieldAccessor::Iterator *__fastcall google::protobuf::internal::RandomAccessRepeatedFieldAccessor::CopyIterator(
        const google::protobuf::internal::RandomAccessRepeatedFieldAccessor *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor::Iterator *iterator)
{
  return (google::protobuf::internal::RepeatedFieldAccessor::Iterator *)iterator;
};

// Line 60: range 000000000C8BC730-000000000C8BC734
google::protobuf::internal::RepeatedFieldAccessor::Iterator *__fastcall google::protobuf::internal::RandomAccessRepeatedFieldAccessor::AdvanceIterator(
        const google::protobuf::internal::RandomAccessRepeatedFieldAccessor *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        google::protobuf::internal::RepeatedFieldAccessor::Iterator *iterator)
{
  return (char *)iterator + 1;
};

// Line 65: range 000000000C8BC740-000000000C8BC746
bool __fastcall google::protobuf::internal::RandomAccessRepeatedFieldAccessor::EqualsIterator(
        const google::protobuf::internal::RandomAccessRepeatedFieldAccessor *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor::Iterator *a,
        const google::protobuf::internal::RepeatedFieldAccessor::Iterator *b)
{
  return b == a;
};

// Line 68: range 000000000C8BC750-000000000C8BC763
void __fastcall google::protobuf::internal::RandomAccessRepeatedFieldAccessor::DeleteIterator(
        const google::protobuf::internal::RandomAccessRepeatedFieldAccessor *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        google::protobuf::internal::RepeatedFieldAccessor::Iterator *iterator)
{
  ;
};

// Line 96: range 000000000C8BC8A0-000000000C8BC8A2
int __fastcall google::protobuf::internal::RepeatedFieldWrapper<bool>::Size(
        const google::protobuf::internal::RepeatedFieldWrapper<bool> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return *(_DWORD *)data;
};

// Line 96: range 000000000C8BC920-000000000C8BC922
int __fastcall google::protobuf::internal::RepeatedFieldWrapper<double>::Size(
        const google::protobuf::internal::RepeatedFieldWrapper<double> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return *(_DWORD *)data;
};

// Line 96: range 000000000C8BC9B0-000000000C8BC9B2
int __fastcall google::protobuf::internal::RepeatedFieldWrapper<float>::Size(
        const google::protobuf::internal::RepeatedFieldWrapper<float> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return *(_DWORD *)data;
};

// Line 96: range 000000000C8BCBE0-000000000C8BCBE2
int __fastcall google::protobuf::internal::RepeatedFieldWrapper<int>::Size(
        const google::protobuf::internal::RepeatedFieldWrapper<int> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return *(_DWORD *)data;
};

// Line 96: range 000000000C8BCAD0-000000000C8BCAD2
int __fastcall google::protobuf::internal::RepeatedFieldWrapper<long>::Size(
        const google::protobuf::internal::RepeatedFieldWrapper<long int> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return *(_DWORD *)data;
};

// Line 96: range 000000000C8BCB60-000000000C8BCB62
int __fastcall google::protobuf::internal::RepeatedFieldWrapper<unsigned int>::Size(
        const google::protobuf::internal::RepeatedFieldWrapper<unsigned int> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return *(_DWORD *)data;
};

// Line 96: range 000000000C8BCA40-000000000C8BCA42
int __fastcall google::protobuf::internal::RepeatedFieldWrapper<unsigned long>::Size(
        const google::protobuf::internal::RepeatedFieldWrapper<long unsigned int> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return *(_DWORD *)data;
};

// Line 100: range 000000000C8BD220-000000000C8BD24E
const google::protobuf::internal::RepeatedFieldAccessor::Value *__fastcall google::protobuf::internal::RepeatedFieldWrapper<bool>::Get(
        const google::protobuf::internal::RepeatedFieldWrapper<bool> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index,
        google::protobuf::internal::RepeatedFieldAccessor::Value *scratch_space)
{
  __int64 v4; // rsi
  const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::Value *(__fastcall *v5)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool> *const, const bool *, google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::Value *); // rax

  v4 = *((_QWORD *)data + 1);
  v5 = (const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::Value *(__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool> *const, const bool *, google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 19);
  if ( v5 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::ConvertFromT )
    return (const google::protobuf::internal::RepeatedFieldAccessor::Value *)(v4 + index + 8);
  else
    return v5(
             (const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool> *const)this,
             (const bool *)(v4 + index + 8),
             scratch_space);
};

// Line 100: range 000000000C8BD250-000000000C8BD27E
const google::protobuf::internal::RepeatedFieldAccessor::Value *__fastcall google::protobuf::internal::RepeatedFieldWrapper<double>::Get(
        const google::protobuf::internal::RepeatedFieldWrapper<double> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index,
        google::protobuf::internal::RepeatedFieldAccessor::Value *scratch_space)
{
  __int64 v4; // rsi
  const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::Value *(__fastcall *v5)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double> *const, const double *, google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::Value *); // rax

  v4 = *((_QWORD *)data + 1);
  v5 = (const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::Value *(__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double> *const, const double *, google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 19);
  if ( v5 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::ConvertFromT )
    return (const google::protobuf::internal::RepeatedFieldAccessor::Value *)(v4 + 8LL * index + 8);
  else
    return v5(
             (const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double> *const)this,
             (const double *)(v4 + 8LL * index + 8),
             scratch_space);
};

// Line 100: range 000000000C8BD280-000000000C8BD2AE
const google::protobuf::internal::RepeatedFieldAccessor::Value *__fastcall google::protobuf::internal::RepeatedFieldWrapper<float>::Get(
        const google::protobuf::internal::RepeatedFieldWrapper<float> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index,
        google::protobuf::internal::RepeatedFieldAccessor::Value *scratch_space)
{
  __int64 v4; // rsi
  const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::Value *(__fastcall *v5)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float> *const, const float *, google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::Value *); // rax

  v4 = *((_QWORD *)data + 1);
  v5 = (const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::Value *(__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float> *const, const float *, google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 19);
  if ( v5 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::ConvertFromT )
    return (const google::protobuf::internal::RepeatedFieldAccessor::Value *)(v4 + 4LL * index + 8);
  else
    return v5(
             (const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float> *const)this,
             (const float *)(v4 + 4LL * index + 8),
             scratch_space);
};

// Line 100: range 000000000C8BD340-000000000C8BD36E
const google::protobuf::internal::RepeatedFieldAccessor::Value *__fastcall google::protobuf::internal::RepeatedFieldWrapper<int>::Get(
        const google::protobuf::internal::RepeatedFieldWrapper<int> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index,
        google::protobuf::internal::RepeatedFieldAccessor::Value *scratch_space)
{
  __int64 v4; // rsi
  const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::Value *(__fastcall *v5)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int> *const, const int *, google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::Value *); // rax

  v4 = *((_QWORD *)data + 1);
  v5 = (const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::Value *(__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int> *const, const int *, google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 19);
  if ( v5 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::ConvertFromT )
    return (const google::protobuf::internal::RepeatedFieldAccessor::Value *)(v4 + 4LL * index + 8);
  else
    return v5(
             (const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int> *const)this,
             (const int *)(v4 + 4LL * index + 8),
             scratch_space);
};

// Line 100: range 000000000C8BD2E0-000000000C8BD30E
const google::protobuf::internal::RepeatedFieldAccessor::Value *__fastcall google::protobuf::internal::RepeatedFieldWrapper<long>::Get(
        const google::protobuf::internal::RepeatedFieldWrapper<long int> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index,
        google::protobuf::internal::RepeatedFieldAccessor::Value *scratch_space)
{
  __int64 v4; // rsi
  const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int>::Value *(__fastcall *v5)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int> *const, const __int64 *, google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int>::Value *); // rax

  v4 = *((_QWORD *)data + 1);
  v5 = (const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int>::Value *(__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int> *const, const __int64 *, google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 19);
  if ( v5 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long>::ConvertFromT )
    return (const google::protobuf::internal::RepeatedFieldAccessor::Value *)(v4 + 8LL * index + 8);
  else
    return v5(
             (const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int> *const)this,
             (const __int64 *)(v4 + 8LL * index + 8),
             scratch_space);
};

// Line 100: range 000000000C8BD310-000000000C8BD33E
const google::protobuf::internal::RepeatedFieldAccessor::Value *__fastcall google::protobuf::internal::RepeatedFieldWrapper<unsigned int>::Get(
        const google::protobuf::internal::RepeatedFieldWrapper<unsigned int> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index,
        google::protobuf::internal::RepeatedFieldAccessor::Value *scratch_space)
{
  __int64 v4; // rsi
  const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::Value *(__fastcall *v5)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int> *const, const unsigned int *, google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::Value *); // rax

  v4 = *((_QWORD *)data + 1);
  v5 = (const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::Value *(__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int> *const, const unsigned int *, google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 19);
  if ( v5 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::ConvertFromT )
    return (const google::protobuf::internal::RepeatedFieldAccessor::Value *)(v4 + 4LL * index + 8);
  else
    return v5(
             (const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int> *const)this,
             (const unsigned int *)(v4 + 4LL * index + 8),
             scratch_space);
};

// Line 100: range 000000000C8BD2B0-000000000C8BD2DE
const google::protobuf::internal::RepeatedFieldAccessor::Value *__fastcall google::protobuf::internal::RepeatedFieldWrapper<unsigned long>::Get(
        const google::protobuf::internal::RepeatedFieldWrapper<long unsigned int> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index,
        google::protobuf::internal::RepeatedFieldAccessor::Value *scratch_space)
{
  __int64 v4; // rsi
  const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int>::Value *(__fastcall *v5)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int> *const, const unsigned __int64 *, google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int>::Value *); // rax

  v4 = *((_QWORD *)data + 1);
  v5 = (const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int>::Value *(__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int> *const, const unsigned __int64 *, google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 19);
  if ( v5 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned long>::ConvertFromT )
    return (const google::protobuf::internal::RepeatedFieldAccessor::Value *)(v4 + 8LL * index + 8);
  else
    return v5(
             (const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int> *const)this,
             (const unsigned __int64 *)(v4 + 8LL * index + 8),
             scratch_space);
};

// Line 105: range 000000000C8BD560-000000000C8BD5A3
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<bool>::Set(
        const google::protobuf::internal::RepeatedFieldWrapper<bool> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value)
{
  bool (__fastcall *v4)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::Value *); // rax

  v4 = (bool (__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 18);
  if ( v4 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::ConvertToT )
    *(_BYTE *)(*((_QWORD *)data + 1) + index + 8LL) = *(_BYTE *)value;
  else
    *(_BYTE *)(*((_QWORD *)data + 1) + index + 8LL) = v4(
                                                        (const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool> *const)this,
                                                        value);
};

// Line 105: range 000000000C8BD520-000000000C8BD55D
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<double>::Set(
        const google::protobuf::internal::RepeatedFieldWrapper<double> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value)
{
  __int64 v4; // xmm0_8
  __int64 v5; // rbx
  double (__fastcall *v6)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::Value *); // rax

  v5 = index;
  v6 = (double (__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 18);
  if ( v6 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::ConvertToT )
    v4 = *(_QWORD *)value;
  else
    v6((const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double> *const)this, value);
  *(_QWORD *)(*((_QWORD *)data + 1) + 8 * v5 + 8) = v4;
};

// Line 105: range 000000000C8BD490-000000000C8BD4CD
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<float>::Set(
        const google::protobuf::internal::RepeatedFieldWrapper<float> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value)
{
  int v4; // xmm0_4
  __int64 v5; // rbx
  float (__fastcall *v6)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::Value *); // rax

  v5 = index;
  v6 = (float (__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 18);
  if ( v6 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::ConvertToT )
    v4 = *(_DWORD *)value;
  else
    v6((const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float> *const)this, value);
  *(_DWORD *)(*((_QWORD *)data + 1) + 4 * v5 + 8) = v4;
};

// Line 105: range 000000000C8BD440-000000000C8BD483
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<int>::Set(
        const google::protobuf::internal::RepeatedFieldWrapper<int> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value)
{
  int (__fastcall *v4)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::Value *); // rax

  v4 = (int (__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 18);
  if ( v4 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::ConvertToT )
    *(_DWORD *)(*((_QWORD *)data + 1) + 4LL * index + 8) = *(_DWORD *)value;
  else
    *(_DWORD *)(*((_QWORD *)data + 1) + 4LL * index + 8) = v4(
                                                             (const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int> *const)this,
                                                             value);
};

// Line 105: range 000000000C8BD3A0-000000000C8BD3EC
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<long>::Set(
        const google::protobuf::internal::RepeatedFieldWrapper<long int> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value)
{
  __int64 (__fastcall *v4)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int>::Value *); // rax

  v4 = (__int64 (__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 18);
  if ( v4 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long>::ConvertToT )
    *(_QWORD *)(*((_QWORD *)data + 1) + 8LL * index + 8) = *(_QWORD *)value;
  else
    *(_QWORD *)(*((_QWORD *)data + 1) + 8LL * index + 8) = v4(
                                                             (const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int> *const)this,
                                                             value);
};

// Line 105: range 000000000C8BD4D0-000000000C8BD513
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<unsigned int>::Set(
        const google::protobuf::internal::RepeatedFieldWrapper<unsigned int> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value)
{
  unsigned int (__fastcall *v4)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::Value *); // rax

  v4 = (unsigned int (__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 18);
  if ( v4 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::ConvertToT )
    *(_DWORD *)(*((_QWORD *)data + 1) + 4LL * index + 8) = *(_DWORD *)value;
  else
    *(_DWORD *)(*((_QWORD *)data + 1) + 4LL * index + 8) = v4(
                                                             (const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int> *const)this,
                                                             value);
};

// Line 105: range 000000000C8BD3F0-000000000C8BD43C
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<unsigned long>::Set(
        const google::protobuf::internal::RepeatedFieldWrapper<long unsigned int> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value)
{
  unsigned __int64 (__fastcall *v4)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int>::Value *); // rax

  v4 = (unsigned __int64 (__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 18);
  if ( v4 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned long>::ConvertToT )
    *(_QWORD *)(*((_QWORD *)data + 1) + 8LL * index + 8) = *(_QWORD *)value;
  else
    *(_QWORD *)(*((_QWORD *)data + 1) + 8LL * index + 8) = v4(
                                                             (const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int> *const)this,
                                                             value);
};

// Line 108: range 000000000C8BEDA0-000000000C8BEDF7
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<bool>::Add(
        const google::protobuf::internal::RepeatedFieldWrapper<bool> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value)
{
  bool (__fastcall *v4)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::Value *); // rax
  char v5; // bp
  __int64 v6; // rsi
  __int64 v7; // rax

  v4 = (bool (__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 18);
  if ( v4 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::ConvertToT )
    v5 = *(_BYTE *)value;
  else
    v5 = v4((const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool> *const)this, value);
  v6 = *(int *)data;
  if ( (_DWORD)v6 == *((_DWORD *)data + 1) )
  {
    google::protobuf::RepeatedField<bool>::Reserve((google::protobuf::RepeatedField<bool> *const)data, v6 + 1);
    v6 = *(int *)data;
  }
  v7 = *((_QWORD *)data + 1);
  *(_DWORD *)data = v6 + 1;
  *(_BYTE *)(v7 + v6 + 8) = v5;
};

// Line 108: range 000000000C8BDB90-000000000C8BDBF5
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<double>::Add(
        const google::protobuf::internal::RepeatedFieldWrapper<double> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value)
{
  __int64 v3; // xmm0_8
  double (__fastcall *v5)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::Value *); // rax
  __int64 v6; // rsi
  __int64 v7; // rax

  v5 = (double (__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 18);
  if ( v5 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::ConvertToT )
    v3 = *(_QWORD *)value;
  else
    v5((const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double> *const)this, value);
  v6 = *(int *)data;
  if ( (_DWORD)v6 == *((_DWORD *)data + 1) )
  {
    google::protobuf::RepeatedField<double>::Reserve((google::protobuf::RepeatedField<double> *const)data, v6 + 1);
    v6 = *(int *)data;
  }
  v7 = *((_QWORD *)data + 1);
  *(_DWORD *)data = v6 + 1;
  *(_QWORD *)(v7 + 8 * v6 + 8) = v3;
};

// Line 108: range 000000000C8BDB20-000000000C8BDB85
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<float>::Add(
        const google::protobuf::internal::RepeatedFieldWrapper<float> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value)
{
  int v3; // xmm0_4
  float (__fastcall *v5)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::Value *); // rax
  __int64 v6; // rsi
  __int64 v7; // rax

  v5 = (float (__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 18);
  if ( v5 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::ConvertToT )
    v3 = *(_DWORD *)value;
  else
    v5((const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float> *const)this, value);
  v6 = *(int *)data;
  if ( (_DWORD)v6 == *((_DWORD *)data + 1) )
  {
    google::protobuf::RepeatedField<float>::Reserve((google::protobuf::RepeatedField<float> *const)data, v6 + 1);
    v6 = *(int *)data;
  }
  v7 = *((_QWORD *)data + 1);
  *(_DWORD *)data = v6 + 1;
  *(_DWORD *)(v7 + 4 * v6 + 8) = v3;
};

// Line 108: range 000000000C8BD9A0-000000000C8BD9F7
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<int>::Add(
        const google::protobuf::internal::RepeatedFieldWrapper<int> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value)
{
  int (__fastcall *v4)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::Value *); // rax
  int v5; // ebp
  __int64 v6; // rsi
  __int64 v7; // rax

  v4 = (int (__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 18);
  if ( v4 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::ConvertToT )
    v5 = *(_DWORD *)value;
  else
    v5 = v4((const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int> *const)this, value);
  v6 = *(int *)data;
  if ( (_DWORD)v6 == *((_DWORD *)data + 1) )
  {
    google::protobuf::RepeatedField<int>::Reserve((google::protobuf::RepeatedField<int> *const)data, v6 + 1);
    v6 = *(int *)data;
  }
  v7 = *((_QWORD *)data + 1);
  *(_DWORD *)data = v6 + 1;
  *(_DWORD *)(v7 + 4 * v6 + 8) = v5;
};

// Line 108: range 000000000C8BDAC0-000000000C8BDB18
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<long>::Add(
        const google::protobuf::internal::RepeatedFieldWrapper<long int> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value)
{
  __int64 (__fastcall *v4)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int>::Value *); // rax
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rax

  v4 = (__int64 (__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 18);
  if ( v4 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long>::ConvertToT )
    v5 = *(_QWORD *)value;
  else
    v5 = v4((const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int> *const)this, value);
  v6 = *(int *)data;
  if ( (_DWORD)v6 == *((_DWORD *)data + 1) )
  {
    google::protobuf::RepeatedField<long>::Reserve((google::protobuf::RepeatedField<long int> *const)data, v6 + 1);
    v6 = *(int *)data;
  }
  v7 = *((_QWORD *)data + 1);
  *(_DWORD *)data = v6 + 1;
  *(_QWORD *)(v7 + 8 * v6 + 8) = v5;
};

// Line 108: range 000000000C8BDA00-000000000C8BDA57
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<unsigned int>::Add(
        const google::protobuf::internal::RepeatedFieldWrapper<unsigned int> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value)
{
  unsigned int (__fastcall *v4)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::Value *); // rax
  unsigned int v5; // ebp
  __int64 v6; // rsi
  __int64 v7; // rax

  v4 = (unsigned int (__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 18);
  if ( v4 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::ConvertToT )
    v5 = *(_DWORD *)value;
  else
    v5 = v4((const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int> *const)this, value);
  v6 = *(int *)data;
  if ( (_DWORD)v6 == *((_DWORD *)data + 1) )
  {
    google::protobuf::RepeatedField<unsigned int>::Reserve(
      (google::protobuf::RepeatedField<unsigned int> *const)data,
      v6 + 1);
    v6 = *(int *)data;
  }
  v7 = *((_QWORD *)data + 1);
  *(_DWORD *)data = v6 + 1;
  *(_DWORD *)(v7 + 4 * v6 + 8) = v5;
};

// Line 108: range 000000000C8BDA60-000000000C8BDAB8
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<unsigned long>::Add(
        const google::protobuf::internal::RepeatedFieldWrapper<long unsigned int> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value)
{
  unsigned __int64 (__fastcall *v4)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int>::Value *); // rax
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rax

  v4 = (unsigned __int64 (__fastcall *)(const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int> *const, const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int>::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 18);
  if ( v4 == google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned long>::ConvertToT )
    v5 = *(_QWORD *)value;
  else
    v5 = v4((const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int> *const)this, value);
  v6 = *(int *)data;
  if ( (_DWORD)v6 == *((_DWORD *)data + 1) )
  {
    google::protobuf::RepeatedField<unsigned long>::Reserve(
      (google::protobuf::RepeatedField<long unsigned int> *const)data,
      v6 + 1);
    v6 = *(int *)data;
  }
  v7 = *((_QWORD *)data + 1);
  *(_DWORD *)data = v6 + 1;
  *(_QWORD *)(v7 + 8 * v6 + 8) = v5;
};

// Line 115: range 000000000C8BC8D0-000000000C8BC8EE
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<bool>::SwapElements(
        const google::protobuf::internal::RepeatedFieldWrapper<bool> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index1,
        int index2)
{
  __int64 v4; // rax
  char v5; // si

  v4 = *((_QWORD *)data + 1);
  v5 = *(_BYTE *)(v4 + index1 + 8);
  *(_BYTE *)(v4 + index1 + 8) = *(_BYTE *)(v4 + index2 + 8);
  *(_BYTE *)(v4 + index2 + 8) = v5;
};

// Line 115: range 000000000C8BC950-000000000C8BC976
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<double>::SwapElements(
        const google::protobuf::internal::RepeatedFieldWrapper<double> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index1,
        int index2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // xmm0_8

  v4 = *((_QWORD *)data + 1);
  v5 = v4 + 8LL * index1;
  v6 = v4 + 8LL * index2;
  v7 = *(_QWORD *)(v5 + 8);
  *(_QWORD *)(v5 + 8) = *(_QWORD *)(v6 + 8);
  *(_QWORD *)(v6 + 8) = v7;
};

// Line 115: range 000000000C8BC9E0-000000000C8BCA06
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<float>::SwapElements(
        const google::protobuf::internal::RepeatedFieldWrapper<float> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index1,
        int index2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // xmm0_4

  v4 = *((_QWORD *)data + 1);
  v5 = v4 + 4LL * index1;
  v6 = v4 + 4LL * index2;
  v7 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = v7;
};

// Line 115: range 000000000C8BCC10-000000000C8BCC2E
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<int>::SwapElements(
        const google::protobuf::internal::RepeatedFieldWrapper<int> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index1,
        int index2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // esi

  v4 = *((_QWORD *)data + 1);
  v5 = v4 + 4LL * index1;
  v6 = v4 + 4LL * index2;
  v7 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = v7;
};

// Line 115: range 000000000C8BCB00-000000000C8BCB22
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<long>::SwapElements(
        const google::protobuf::internal::RepeatedFieldWrapper<long int> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index1,
        int index2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi

  v4 = *((_QWORD *)data + 1);
  v5 = v4 + 8LL * index1;
  v6 = v4 + 8LL * index2;
  v7 = *(_QWORD *)(v5 + 8);
  *(_QWORD *)(v5 + 8) = *(_QWORD *)(v6 + 8);
  *(_QWORD *)(v6 + 8) = v7;
};

// Line 115: range 000000000C8BCB90-000000000C8BCBAE
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<unsigned int>::SwapElements(
        const google::protobuf::internal::RepeatedFieldWrapper<unsigned int> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index1,
        int index2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // esi

  v4 = *((_QWORD *)data + 1);
  v5 = v4 + 4LL * index1;
  v6 = v4 + 4LL * index2;
  v7 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = v7;
};

// Line 115: range 000000000C8BCA70-000000000C8BCA92
void __fastcall google::protobuf::internal::RepeatedFieldWrapper<unsigned long>::SwapElements(
        const google::protobuf::internal::RepeatedFieldWrapper<long unsigned int> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index1,
        int index2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rsi

  v4 = *((_QWORD *)data + 1);
  v5 = v4 + 8LL * index1;
  v6 = v4 + 8LL * index2;
  v7 = *(_QWORD *)(v5 + 8);
  *(_QWORD *)(v5 + 8) = *(_QWORD *)(v6 + 8);
  *(_QWORD *)(v6 + 8) = v7;
};

// Line 151: range 000000000C8BCC60-000000000C8BCC63
int __fastcall google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message>::Size(
        const google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return *((_DWORD *)data + 2);
};

// Line 151: range 000000000C8BC810-000000000C8BC813
int __fastcall google::protobuf::internal::RepeatedPtrFieldWrapper<std::string>::Size(
        const google::protobuf::internal::RepeatedPtrFieldWrapper<std::string > *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return *((_DWORD *)data + 2);
};

// Line 155: range 000000000C8BD370-000000000C8BD39E
const google::protobuf::internal::RepeatedFieldAccessor::Value *__fastcall google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message>::Get(
        const google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message> *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index,
        google::protobuf::internal::RepeatedFieldAccessor::Value *scratch_space)
{
  __int64 v4; // rsi
  const google::protobuf::internal::RepeatedPtrFieldMessageAccessor::Value *(__fastcall *v5)(const google::protobuf::internal::RepeatedPtrFieldMessageAccessor *const, const google::protobuf::Message *, google::protobuf::internal::RepeatedPtrFieldMessageAccessor::Value *); // rax

  v4 = *((_QWORD *)data + 2);
  v5 = (const google::protobuf::internal::RepeatedPtrFieldMessageAccessor::Value *(__fastcall *)(const google::protobuf::internal::RepeatedPtrFieldMessageAccessor *const, const google::protobuf::Message *, google::protobuf::internal::RepeatedPtrFieldMessageAccessor::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 20);
  if ( v5 == google::protobuf::internal::RepeatedPtrFieldMessageAccessor::ConvertFromT )
    return *(const google::protobuf::internal::RepeatedFieldAccessor::Value **)(v4 + 8LL * index + 8);
  else
    return v5(
             (const google::protobuf::internal::RepeatedPtrFieldMessageAccessor *const)this,
             *(const google::protobuf::Message **)(v4 + 8LL * index + 8),
             scratch_space);
};

// Line 155: range 000000000C8BD190-000000000C8BD1BE
const google::protobuf::internal::RepeatedFieldAccessor::Value *__fastcall google::protobuf::internal::RepeatedPtrFieldWrapper<std::string>::Get(
        const google::protobuf::internal::RepeatedPtrFieldWrapper<std::string > *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index,
        google::protobuf::internal::RepeatedFieldAccessor::Value *scratch_space)
{
  __int64 v4; // rsi
  const google::protobuf::internal::RepeatedPtrFieldStringAccessor::Value *(__fastcall *v5)(const google::protobuf::internal::RepeatedPtrFieldStringAccessor *const, const std::string *, google::protobuf::internal::RepeatedPtrFieldStringAccessor::Value *); // rax

  v4 = *((_QWORD *)data + 2);
  v5 = (const google::protobuf::internal::RepeatedPtrFieldStringAccessor::Value *(__fastcall *)(const google::protobuf::internal::RepeatedPtrFieldStringAccessor *const, const std::string *, google::protobuf::internal::RepeatedPtrFieldStringAccessor::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 20);
  if ( v5 == google::protobuf::internal::RepeatedPtrFieldStringAccessor::ConvertFromT )
    return *(const google::protobuf::internal::RepeatedFieldAccessor::Value **)(v4 + 8LL * index + 8);
  else
    return v5(
             (const google::protobuf::internal::RepeatedPtrFieldStringAccessor *const)this,
             *(const std::string **)(v4 + 8LL * index + 8),
             scratch_space);
};

// Line 161: range 000000000C8BD5F0-000000000C8BD62B
void __fastcall google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message>::Set(
        const google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value)
{
  __int64 v6; // rcx
  void (__fastcall *v7)(const google::protobuf::internal::RepeatedPtrFieldMessageAccessor *const, const google::protobuf::internal::RepeatedPtrFieldMessageAccessor::Value *, google::protobuf::Message *); // rax

  v6 = *((_QWORD *)data + 2);
  v7 = (void (__fastcall *)(const google::protobuf::internal::RepeatedPtrFieldMessageAccessor *const, const google::protobuf::internal::RepeatedPtrFieldMessageAccessor::Value *, google::protobuf::Message *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 19);
  if ( v7 == google::protobuf::internal::RepeatedPtrFieldMessageAccessor::ConvertToT )
    (*(void (__fastcall **)(_QWORD, const google::protobuf::internal::RepeatedFieldAccessor::Value *))(**(_QWORD **)(v6 + 8LL * index + 8) + 144LL))(
      *(_QWORD *)(v6 + 8LL * index + 8),
      value);
  else
    v7(
      (const google::protobuf::internal::RepeatedPtrFieldMessageAccessor *const)this,
      value,
      *(google::protobuf::Message **)(v6 + 8LL * index + 8));
};

// Line 161: range 000000000C8BD5B0-000000000C8BD5E3
void __fastcall google::protobuf::internal::RepeatedPtrFieldWrapper<std::string>::Set(
        const google::protobuf::internal::RepeatedPtrFieldWrapper<std::string > *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value)
{
  __int64 v6; // rcx
  void (__fastcall *v7)(const google::protobuf::internal::RepeatedPtrFieldStringAccessor *const, const google::protobuf::internal::RepeatedPtrFieldStringAccessor::Value *, std::string *); // rax

  v6 = *((_QWORD *)data + 2);
  v7 = (void (__fastcall *)(const google::protobuf::internal::RepeatedPtrFieldStringAccessor *const, const google::protobuf::internal::RepeatedPtrFieldStringAccessor::Value *, std::string *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 19);
  if ( v7 == google::protobuf::internal::RepeatedPtrFieldStringAccessor::ConvertToT )
    std::string::_M_assign(*(_QWORD *)(v6 + 8LL * index + 8), value);
  else
    v7(
      (const google::protobuf::internal::RepeatedPtrFieldStringAccessor *const)this,
      value,
      *(std::string **)(v6 + 8LL * index + 8));
};

// Line 163: range 000000000C8BE680-000000000C8BE70B
void __fastcall google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message>::Add(
        const google::protobuf::internal::RepeatedPtrFieldWrapper<google::protobuf::Message> *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value)
{
  google::protobuf::Message *(__fastcall *v4)(const google::protobuf::internal::RepeatedPtrFieldMessageAccessor *const, const google::protobuf::internal::RepeatedPtrFieldMessageAccessor::Value *); // rax
  google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *v5; // rbp
  void (__fastcall *v6)(const google::protobuf::internal::RepeatedPtrFieldMessageAccessor *const, const google::protobuf::internal::RepeatedPtrFieldMessageAccessor::Value *, google::protobuf::Message *); // rax
  google::protobuf::internal::true_type v7; // [rsp+30h] [rbp+8h]

  v4 = (google::protobuf::Message *(__fastcall *)(const google::protobuf::internal::RepeatedPtrFieldMessageAccessor *const, const google::protobuf::internal::RepeatedPtrFieldMessageAccessor::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 18);
  if ( v4 == google::protobuf::internal::RepeatedPtrFieldMessageAccessor::New )
    v5 = (google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *)(*(__int64 (__fastcall **)(const google::protobuf::internal::RepeatedFieldAccessor::Value *))(*(_QWORD *)value + 24LL))(value);
  else
    v5 = v4((const google::protobuf::internal::RepeatedPtrFieldMessageAccessor *const)this, value);
  v6 = (void (__fastcall *)(const google::protobuf::internal::RepeatedPtrFieldMessageAccessor *const, const google::protobuf::internal::RepeatedPtrFieldMessageAccessor::Value *, google::protobuf::Message *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 19);
  if ( v6 == google::protobuf::internal::RepeatedPtrFieldMessageAccessor::ConvertToT )
    (*((void (__fastcall **)(google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *, const google::protobuf::internal::RepeatedFieldAccessor::Value *))v5->_vptr_MessageLite
     + 18))(
      v5,
      value);
  else
    v6((const google::protobuf::internal::RepeatedPtrFieldMessageAccessor *const)this, value, v5);
  google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedInternal<google::protobuf::RepeatedPtrField<google::protobuf::Message>::TypeHandler>(
    (google::protobuf::internal::RepeatedPtrFieldBase *const)data,
    v5,
    v7);
};

// Line 163: range 000000000C8BF050-000000000C8BF148
void __fastcall google::protobuf::internal::RepeatedPtrFieldWrapper<std::string>::Add(
        const google::protobuf::internal::RepeatedPtrFieldWrapper<std::string > *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value)
{
  std::string *(__fastcall *v5)(const google::protobuf::internal::RepeatedPtrFieldStringAccessor *const, const google::protobuf::internal::RepeatedPtrFieldStringAccessor::Value *); // rax
  google::protobuf::internal::StringTypeHandler::Type *v6; // rbp
  void (__fastcall *v7)(const google::protobuf::internal::RepeatedPtrFieldStringAccessor *const, const google::protobuf::internal::RepeatedPtrFieldStringAccessor::Value *, std::string *); // rax
  int *v8; // rax
  __int64 v9; // rdx
  int *v10; // rax
  __int64 v11; // rcx
  google::protobuf::internal::StringTypeHandler::Type **v12; // rsi
  _DWORD *v13; // rax

  v5 = (std::string *(__fastcall *)(const google::protobuf::internal::RepeatedPtrFieldStringAccessor *const, const google::protobuf::internal::RepeatedPtrFieldStringAccessor::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 18);
  if ( v5 == google::protobuf::internal::RepeatedPtrFieldStringAccessor::New[abi:cxx11] )
  {
    v6 = (google::protobuf::internal::StringTypeHandler::Type *)operator new(0x20uLL);
    v6->_M_dataplus._M_p = v6->_anon_0._M_local_buf;
    v6->_M_string_length = 0LL;
    v6->_anon_0._M_local_buf[0] = 0;
  }
  else
  {
    v6 = v5((const google::protobuf::internal::RepeatedPtrFieldStringAccessor *const)this, value);
  }
  v7 = (void (__fastcall *)(const google::protobuf::internal::RepeatedPtrFieldStringAccessor *const, const google::protobuf::internal::RepeatedPtrFieldStringAccessor::Value *, std::string *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 19);
  if ( v7 == google::protobuf::internal::RepeatedPtrFieldStringAccessor::ConvertToT )
    std::string::_M_assign(v6, value);
  else
    v7((const google::protobuf::internal::RepeatedPtrFieldStringAccessor *const)this, value, v6);
  if ( *(_QWORD *)data || (v8 = (int *)*((_QWORD *)data + 2)) == 0LL || (v9 = *v8, (int)v9 >= *((_DWORD *)data + 3)) )
  {
    google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedSlowWithCopy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
      (google::protobuf::internal::RepeatedPtrFieldBase *const)data,
      v6,
      0LL,
      *(google::protobuf::Arena **)data);
  }
  else
  {
    v10 = v8 + 2;
    v11 = *((int *)data + 2);
    v12 = (google::protobuf::internal::StringTypeHandler::Type **)&v10[2 * v11];
    if ( (int)v9 > (int)v11 )
      *(_QWORD *)&v10[2 * v9] = *v12;
    *v12 = v6;
    v13 = (_DWORD *)*((_QWORD *)data + 2);
    *((_DWORD *)data + 2) = v11 + 1;
    ++*v13;
  }
};

// Line 208: range 000000000C8BCDD0-000000000C8BCDD5
void __fastcall google::protobuf::internal::MapFieldAccessor::~MapFieldAccessor(
        google::protobuf::internal::MapFieldAccessor *const this)
{
  operator delete(this, 8uLL);
};

// Line 208: range 000000000C8BC770-000000000C8BC786
void __fastcall google::protobuf::internal::MapFieldAccessor::~MapFieldAccessor(
        google::protobuf::internal::MapFieldAccessor *const this)
{
  ;
};

// Line 209: range 000000000C8BD080-000000000C8BD098
bool __fastcall google::protobuf::internal::MapFieldAccessor::IsEmpty(
        const google::protobuf::internal::MapFieldAccessor *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return google::protobuf::internal::MapFieldBase::GetRepeatedField((const google::protobuf::internal::MapFieldBase *const)data)->current_size_ == 0;
};

// Line 212: range 000000000C8BD0A0-000000000C8BD0B3
int __fastcall google::protobuf::internal::MapFieldAccessor::Size(
        const google::protobuf::internal::MapFieldAccessor *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  return google::protobuf::internal::MapFieldBase::GetRepeatedField((const google::protobuf::internal::MapFieldBase *const)data)->current_size_;
};

// Line 215: range 000000000C8BD1C0-000000000C8BD21E
const google::protobuf::internal::RepeatedFieldAccessor::Value *__fastcall google::protobuf::internal::MapFieldAccessor::Get(
        const google::protobuf::internal::MapFieldAccessor *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index,
        google::protobuf::internal::RepeatedFieldAccessor::Value *scratch_space)
{
  const google::protobuf::internal::RepeatedFieldAccessor::Value *(__fastcall *v5)(const google::protobuf::internal::MapFieldAccessor *const, const google::protobuf::Message *, google::protobuf::internal::RepeatedFieldAccessor::Value *); // r13
  const google::protobuf::internal::RepeatedFieldAccessor::Value *result; // rax

  v5 = (const google::protobuf::internal::RepeatedFieldAccessor::Value *(__fastcall *)(const google::protobuf::internal::MapFieldAccessor *const, const google::protobuf::Message *, google::protobuf::internal::RepeatedFieldAccessor::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 20);
  result = google::protobuf::internal::MapFieldBase::GetRepeatedField((const google::protobuf::internal::MapFieldBase *const)data)->rep_->elements[index];
  if ( v5 != google::protobuf::internal::MapFieldAccessor::ConvertFromEntry )
    return v5(this, (const google::protobuf::Message *)result, scratch_space);
  return result;
};

// Line 219: range 000000000C8BD110-000000000C8BD15F
void __fastcall google::protobuf::internal::MapFieldAccessor::Clear(
        const google::protobuf::internal::MapFieldAccessor *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  google::protobuf::internal::RepeatedPtrFieldBase *v2; // r12
  int current_size; // eax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rdx
  void **elements; // rbx
  __int64 v6; // rbp
  __int64 v7; // rdi

  v2 = google::protobuf::internal::MapFieldBase::MutableRepeatedField((google::protobuf::internal::MapFieldBase *const)data);
  current_size = v2->current_size_;
  if ( current_size > 0 )
  {
    rep = v2->rep_;
    elements = rep->elements;
    v6 = (__int64)&rep[1] + 8 * (unsigned int)(current_size - 1);
    do
    {
      v7 = (__int64)*elements++;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
    }
    while ( elements != (void **)v6 );
    v2->current_size_ = 0;
  }
};

// Line 222: range 000000000C8BD630-000000000C8BD69E
void __fastcall google::protobuf::internal::MapFieldAccessor::Set(
        const google::protobuf::internal::MapFieldAccessor *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value)
{
  __int64 v5; // rbx
  void (__fastcall *v6)(const google::protobuf::internal::MapFieldAccessor *const, const google::protobuf::internal::RepeatedFieldAccessor::Value *, google::protobuf::Message *); // r13
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax

  v5 = index;
  v6 = (void (__fastcall *)(const google::protobuf::internal::MapFieldAccessor *const, const google::protobuf::internal::RepeatedFieldAccessor::Value *, google::protobuf::Message *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 19);
  rep = google::protobuf::internal::MapFieldBase::MutableRepeatedField((google::protobuf::internal::MapFieldBase *const)data)->rep_;
  if ( v6 == google::protobuf::internal::MapFieldAccessor::ConvertToEntry )
    (*(void (__fastcall **)(void *, const google::protobuf::internal::RepeatedFieldAccessor::Value *))(*(_QWORD *)rep->elements[v5] + 144LL))(
      rep->elements[v5],
      value);
  else
    v6(this, value, (google::protobuf::Message *)rep->elements[v5]);
};

// Line 225: range 000000000C8BE5E0-000000000C8BE673
void __fastcall google::protobuf::internal::MapFieldAccessor::Add(
        const google::protobuf::internal::MapFieldAccessor *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value)
{
  google::protobuf::Message *(__fastcall *v4)(const google::protobuf::internal::MapFieldAccessor *const, const google::protobuf::internal::RepeatedFieldAccessor::Value *); // rax
  google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *v5; // rbp
  void (__fastcall *v6)(const google::protobuf::internal::MapFieldAccessor *const, const google::protobuf::internal::RepeatedFieldAccessor::Value *, google::protobuf::Message *); // rax
  google::protobuf::internal::RepeatedPtrFieldBase *v7; // rax
  google::protobuf::internal::true_type v8; // [rsp+30h] [rbp+8h]

  v4 = (google::protobuf::Message *(__fastcall *)(const google::protobuf::internal::MapFieldAccessor *const, const google::protobuf::internal::RepeatedFieldAccessor::Value *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 18);
  if ( v4 == google::protobuf::internal::MapFieldAccessor::New )
    v5 = (google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *)(*(__int64 (__fastcall **)(const google::protobuf::internal::RepeatedFieldAccessor::Value *))(*(_QWORD *)value + 24LL))(value);
  else
    v5 = v4(this, value);
  v6 = (void (__fastcall *)(const google::protobuf::internal::MapFieldAccessor *const, const google::protobuf::internal::RepeatedFieldAccessor::Value *, google::protobuf::Message *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 19);
  if ( v6 == google::protobuf::internal::MapFieldAccessor::ConvertToEntry )
    (*((void (__fastcall **)(google::protobuf::internal::GenericTypeHandler<google::protobuf::Message>::Type *, const google::protobuf::internal::RepeatedFieldAccessor::Value *))v5->_vptr_MessageLite
     + 18))(
      v5,
      value);
  else
    v6(this, value, v5);
  v7 = google::protobuf::internal::MapFieldBase::MutableRepeatedField((google::protobuf::internal::MapFieldBase *const)data);
  google::protobuf::internal::RepeatedPtrFieldBase::AddAllocatedInternal<google::protobuf::RepeatedPtrField<google::protobuf::Message>::TypeHandler>(
    v7,
    v5,
    v8);
};

// Line 230: range 000000000C8BD160-000000000C8BD18C
void __fastcall google::protobuf::internal::MapFieldAccessor::RemoveLast(
        const google::protobuf::internal::MapFieldAccessor *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data)
{
  google::protobuf::internal::RepeatedPtrFieldBase *v2; // rax
  int current_size; // esi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rcx
  void *v5; // rdi

  v2 = google::protobuf::internal::MapFieldBase::MutableRepeatedField((google::protobuf::internal::MapFieldBase *const)data);
  current_size = v2->current_size_;
  rep = v2->rep_;
  v2->current_size_ = current_size - 1;
  v5 = rep->elements[current_size - 1];
  (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 56LL))(v5);
};

// Line 233: range 000000000C8BD0D0-000000000C8BD106
void __fastcall google::protobuf::internal::MapFieldAccessor::SwapElements(
        const google::protobuf::internal::MapFieldAccessor *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        int index1,
        int index2)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  char *v7; // rdx
  char *v8; // rax
  __int64 v9; // rcx

  v4 = index1;
  v5 = index2;
  rep = google::protobuf::internal::MapFieldBase::MutableRepeatedField((google::protobuf::internal::MapFieldBase *const)data)->rep_;
  v7 = (char *)rep + 8 * v4;
  v8 = (char *)rep + 8 * v5;
  v9 = *((_QWORD *)v7 + 1);
  *((_QWORD *)v7 + 1) = *((_QWORD *)v8 + 1);
  *((_QWORD *)v8 + 1) = v9;
};

// Line 236: range 000000000C8BE350-000000000C8BE421
void __fastcall google::protobuf::internal::MapFieldAccessor::Swap(
        const google::protobuf::internal::MapFieldAccessor *const this,
        google::protobuf::internal::RepeatedFieldAccessor::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor *other_mutator,
        google::protobuf::internal::RepeatedFieldAccessor::Field *other_data)
{
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::RepeatedPtrFieldBase *v6; // rbp
  google::protobuf::internal::RepeatedPtrFieldBase *v7; // rsi
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *rep; // rax
  int current_size; // edx
  int total_size; // edx
  google::protobuf::internal::LogFinisher v11; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v12; // [rsp+10h] [rbp-58h] BYREF

  if ( other_mutator != this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v12,
      LOGLEVEL_FATAL_0,
      "./google/protobuf/reflection_internal.h",
      240);
    v5 = google::protobuf::internal::LogMessage::operator<<(&v12, "CHECK failed: this == other_mutator: ");
    google::protobuf::internal::LogFinisher::operator=(&v11, v5);
    google::protobuf::internal::LogMessage::~LogMessage(&v12);
  }
  v6 = google::protobuf::internal::MapFieldBase::MutableRepeatedField((google::protobuf::internal::MapFieldBase *const)data);
  v7 = google::protobuf::internal::MapFieldBase::MutableRepeatedField((google::protobuf::internal::MapFieldBase *const)other_data);
  if ( v7 != v6 )
  {
    if ( v7->arena_ == v6->arena_ )
    {
      rep = v6->rep_;
      v6->rep_ = v7->rep_;
      current_size = v7->current_size_;
      v7->rep_ = rep;
      LODWORD(rep) = v6->current_size_;
      v6->current_size_ = current_size;
      total_size = v7->total_size_;
      v7->current_size_ = (int)rep;
      LODWORD(rep) = v6->total_size_;
      v6->total_size_ = total_size;
      v7->total_size_ = (int)rep;
    }
    else
    {
      google::protobuf::internal::RepeatedPtrFieldBase::SwapFallback<google::protobuf::RepeatedPtrField<google::protobuf::Message>::TypeHandler>(
        v6,
        v7);
    }
  }
};

// Line 260: range 000000000C8BC790-000000000C8BC796
void __fastcall google::protobuf::internal::MapFieldAccessor::ConvertToEntry(
        const google::protobuf::internal::MapFieldAccessor *const this,
        const google::protobuf::internal::RepeatedFieldAccessor::Value *value,
        google::protobuf::Message *result)
{
  (*((void (__fastcall **)(google::protobuf::Message *, const google::protobuf::internal::RepeatedFieldAccessor::Value *))result->_vptr_MessageLite
   + 18))(
    result,
    value);
};

// Line 264: range 000000000C8BC7A0-000000000C8BC7A3
const google::protobuf::internal::RepeatedFieldAccessor::Value *__fastcall google::protobuf::internal::MapFieldAccessor::ConvertFromEntry(
        const google::protobuf::internal::MapFieldAccessor *const this,
        const google::protobuf::Message *value,
        google::protobuf::internal::RepeatedFieldAccessor::Value *scratch_space)
{
  return value;
};

// Line 279: range 000000000C8BC880-000000000C8BC897
void __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::~RepeatedFieldPrimitiveAccessor(
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool> *const this)
{
  ;
};

// Line 279: range 000000000C8BCE60-000000000C8BCE65
void __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::~RepeatedFieldPrimitiveAccessor(
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool> *const this)
{
  operator delete(this, 8uLL);
};

// Line 279: range 000000000C8BCE50-000000000C8BCE55
void __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::~RepeatedFieldPrimitiveAccessor(
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double> *const this)
{
  operator delete(this, 8uLL);
};

// Line 279: range 000000000C8BCE40-000000000C8BCE45
void __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::~RepeatedFieldPrimitiveAccessor(
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float> *const this)
{
  operator delete(this, 8uLL);
};

// Line 279: range 000000000C8BC860-000000000C8BC870
void __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::~RepeatedFieldPrimitiveAccessor(
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float> *const this)
{
  ;
};

// Line 279: range 000000000C8BCE00-000000000C8BCE05
void __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::~RepeatedFieldPrimitiveAccessor(
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int> *const this)
{
  operator delete(this, 8uLL);
};

// Line 279: range 000000000C8BC820-000000000C8BC830
void __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::~RepeatedFieldPrimitiveAccessor(
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int> *const this)
{
  ;
};

// Line 279: range 000000000C8BC840-000000000C8BC850
void __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long>::~RepeatedFieldPrimitiveAccessor(
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int> *const this)
{
  ;
};

// Line 279: range 000000000C8BCE20-000000000C8BCE25
void __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long>::~RepeatedFieldPrimitiveAccessor(
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int> *const this)
{
  operator delete(this, 8uLL);
};

// Line 279: range 000000000C8BCE10-000000000C8BCE15
void __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::~RepeatedFieldPrimitiveAccessor(
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int> *const this)
{
  operator delete(this, 8uLL);
};

// Line 279: range 000000000C8BCE30-000000000C8BCE35
void __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned long>::~RepeatedFieldPrimitiveAccessor(
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int> *const this)
{
  operator delete(this, 8uLL);
};

// Line 280: range 000000000C8BEE00-000000000C8BEE82
void __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::Swap(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool> *const this,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor *other_mutator,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::Field *other_data)
{
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogFinisher v6; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v7; // [rsp+10h] [rbp-58h] BYREF

  if ( other_mutator != this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v7,
      LOGLEVEL_FATAL_0,
      "./google/protobuf/reflection_internal.h",
      287);
    v5 = google::protobuf::internal::LogMessage::operator<<(&v7, "CHECK failed: this == other_mutator: ");
    google::protobuf::internal::LogFinisher::operator=(&v6, v5);
    google::protobuf::internal::LogMessage::~LogMessage(&v7);
  }
  google::protobuf::RepeatedField<bool>::Swap(
    (google::protobuf::RepeatedField<bool> *const)data,
    (google::protobuf::RepeatedField<bool> *)other_data);
};

// Line 280: range 000000000C8BEA40-000000000C8BEAC2
void __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::Swap(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double> *const this,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor *other_mutator,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::Field *other_data)
{
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogFinisher v6; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v7; // [rsp+10h] [rbp-58h] BYREF

  if ( other_mutator != this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v7,
      LOGLEVEL_FATAL_0,
      "./google/protobuf/reflection_internal.h",
      287);
    v5 = google::protobuf::internal::LogMessage::operator<<(&v7, "CHECK failed: this == other_mutator: ");
    google::protobuf::internal::LogFinisher::operator=(&v6, v5);
    google::protobuf::internal::LogMessage::~LogMessage(&v7);
  }
  google::protobuf::RepeatedField<double>::Swap(
    (google::protobuf::RepeatedField<double> *const)data,
    (google::protobuf::RepeatedField<double> *)other_data);
};

// Line 280: range 000000000C8BEAD0-000000000C8BEB52
void __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::Swap(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float> *const this,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor *other_mutator,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::Field *other_data)
{
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogFinisher v6; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v7; // [rsp+10h] [rbp-58h] BYREF

  if ( other_mutator != this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v7,
      LOGLEVEL_FATAL_0,
      "./google/protobuf/reflection_internal.h",
      287);
    v5 = google::protobuf::internal::LogMessage::operator<<(&v7, "CHECK failed: this == other_mutator: ");
    google::protobuf::internal::LogFinisher::operator=(&v6, v5);
    google::protobuf::internal::LogMessage::~LogMessage(&v7);
  }
  google::protobuf::RepeatedField<float>::Swap(
    (google::protobuf::RepeatedField<float> *const)data,
    (google::protobuf::RepeatedField<float> *)other_data);
};

// Line 280: range 000000000C8BED10-000000000C8BED92
void __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::Swap(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int> *const this,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor *other_mutator,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::Field *other_data)
{
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogFinisher v6; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v7; // [rsp+10h] [rbp-58h] BYREF

  if ( other_mutator != this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v7,
      LOGLEVEL_FATAL_0,
      "./google/protobuf/reflection_internal.h",
      287);
    v5 = google::protobuf::internal::LogMessage::operator<<(&v7, "CHECK failed: this == other_mutator: ");
    google::protobuf::internal::LogFinisher::operator=(&v6, v5);
    google::protobuf::internal::LogMessage::~LogMessage(&v7);
  }
  google::protobuf::RepeatedField<int>::Swap(
    (google::protobuf::RepeatedField<int> *const)data,
    (google::protobuf::RepeatedField<int> *)other_data);
};

// Line 280: range 000000000C8BEBF0-000000000C8BEC72
void __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long>::Swap(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int> *const this,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int>::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor *other_mutator,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int>::Field *other_data)
{
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogFinisher v6; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v7; // [rsp+10h] [rbp-58h] BYREF

  if ( other_mutator != this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v7,
      LOGLEVEL_FATAL_0,
      "./google/protobuf/reflection_internal.h",
      287);
    v5 = google::protobuf::internal::LogMessage::operator<<(&v7, "CHECK failed: this == other_mutator: ");
    google::protobuf::internal::LogFinisher::operator=(&v6, v5);
    google::protobuf::internal::LogMessage::~LogMessage(&v7);
  }
  google::protobuf::RepeatedField<long>::Swap(
    (google::protobuf::RepeatedField<long int> *const)data,
    (google::protobuf::RepeatedField<long int> *)other_data);
};

// Line 280: range 000000000C8BEC80-000000000C8BED02
void __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::Swap(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int> *const this,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor *other_mutator,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::Field *other_data)
{
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogFinisher v6; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v7; // [rsp+10h] [rbp-58h] BYREF

  if ( other_mutator != this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v7,
      LOGLEVEL_FATAL_0,
      "./google/protobuf/reflection_internal.h",
      287);
    v5 = google::protobuf::internal::LogMessage::operator<<(&v7, "CHECK failed: this == other_mutator: ");
    google::protobuf::internal::LogFinisher::operator=(&v6, v5);
    google::protobuf::internal::LogMessage::~LogMessage(&v7);
  }
  google::protobuf::RepeatedField<unsigned int>::Swap(
    (google::protobuf::RepeatedField<unsigned int> *const)data,
    (google::protobuf::RepeatedField<unsigned int> *)other_data);
};

// Line 280: range 000000000C8BEB60-000000000C8BEBE2
void __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned long>::Swap(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int> *const this,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int>::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor *other_mutator,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int>::Field *other_data)
{
  google::protobuf::internal::LogMessage_0 *v5; // rax
  google::protobuf::internal::LogFinisher v6; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v7; // [rsp+10h] [rbp-58h] BYREF

  if ( other_mutator != this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v7,
      LOGLEVEL_FATAL_0,
      "./google/protobuf/reflection_internal.h",
      287);
    v5 = google::protobuf::internal::LogMessage::operator<<(&v7, "CHECK failed: this == other_mutator: ");
    google::protobuf::internal::LogFinisher::operator=(&v6, v5);
    google::protobuf::internal::LogMessage::~LogMessage(&v7);
  }
  google::protobuf::RepeatedField<unsigned long>::Swap(
    (google::protobuf::RepeatedField<long unsigned int> *const)data,
    (google::protobuf::RepeatedField<long unsigned int> *)other_data);
};

// Line 293: range 000000000C8BCB30-000000000C8BCB33
__int64 __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long>::ConvertToT(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int> *const this,
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int>::Value *value)
{
  return *(_QWORD *)value;
};

// Line 293: range 000000000C8BC8F0-000000000C8BC8F3
bool __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::ConvertToT(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool> *const this,
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::Value *value)
{
  return *(_BYTE *)value;
};

// Line 293: range 000000000C8BC980-000000000C8BC984
double __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::ConvertToT(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double> *const this,
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::Value *value)
{
  return *(double *)value;
};

// Line 293: range 000000000C8BCA10-000000000C8BCA14
float __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::ConvertToT(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float> *const this,
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::Value *value)
{
  return *(float *)value;
};

// Line 293: range 000000000C8BCC30-000000000C8BCC32
int __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::ConvertToT(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int> *const this,
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::Value *value)
{
  return *(_DWORD *)value;
};

// Line 293: range 000000000C8BCAA0-000000000C8BCAA3
unsigned __int64 __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned long>::ConvertToT(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int> *const this,
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int>::Value *value)
{
  return *(_QWORD *)value;
};

// Line 293: range 000000000C8BCBB0-000000000C8BCBB2
unsigned int __fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::ConvertToT(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int> *const this,
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::Value *value)
{
  return *(_DWORD *)value;
};

// Line 295: range 000000000C8BC900-000000000C8BC903
const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::Value *__fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::ConvertFromT(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool> *const this,
        const bool *value,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<bool>::Value *scratch_space)
{
  return value;
};

// Line 295: range 000000000C8BC990-000000000C8BC993
const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::Value *__fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::ConvertFromT(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double> *const this,
        const double *value,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<double>::Value *scratch_space)
{
  return value;
};

// Line 295: range 000000000C8BCA20-000000000C8BCA23
const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::Value *__fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::ConvertFromT(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float> *const this,
        const float *value,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<float>::Value *scratch_space)
{
  return value;
};

// Line 295: range 000000000C8BCC40-000000000C8BCC43
const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::Value *__fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::ConvertFromT(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int> *const this,
        const int *value,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<int>::Value *scratch_space)
{
  return value;
};

// Line 295: range 000000000C8BCB40-000000000C8BCB43
const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int>::Value *__fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long>::ConvertFromT(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int> *const this,
        const __int64 *value,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long int>::Value *scratch_space)
{
  return value;
};

// Line 295: range 000000000C8BCAB0-000000000C8BCAB3
const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int>::Value *__fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned long>::ConvertFromT(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int> *const this,
        const unsigned __int64 *value,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<long unsigned int>::Value *scratch_space)
{
  return value;
};

// Line 295: range 000000000C8BCBC0-000000000C8BCBC3
const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::Value *__fastcall google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::ConvertFromT(
        const google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int> *const this,
        const unsigned int *value,
        google::protobuf::internal::RepeatedFieldPrimitiveAccessor<unsigned int>::Value *scratch_space)
{
  return value;
};

// Line 310: range 000000000C8BCDE0-000000000C8BCDE5
void __fastcall google::protobuf::internal::RepeatedPtrFieldStringAccessor::~RepeatedPtrFieldStringAccessor(
        google::protobuf::internal::RepeatedPtrFieldStringAccessor *const this)
{
  operator delete(this, 8uLL);
};

// Line 310: range 000000000C8BC7B0-000000000C8BC7C3
void __fastcall google::protobuf::internal::RepeatedPtrFieldStringAccessor::~RepeatedPtrFieldStringAccessor(
        google::protobuf::internal::RepeatedPtrFieldStringAccessor *const this)
{
  ;
};

// Line 311: range 000000000C8BDDA0-000000000C8BE085
void __fastcall google::protobuf::internal::RepeatedPtrFieldStringAccessor::Swap(
        const google::protobuf::internal::RepeatedPtrFieldStringAccessor *const this,
        google::protobuf::internal::RepeatedPtrFieldStringAccessor::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor *other_mutator,
        google::protobuf::internal::RepeatedPtrFieldStringAccessor::Field *other_data)
{
  unsigned int i; // r13d
  int (**vptr_RepeatedFieldAccessor)(...); // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  std::forward_iterator_tag v10; // cl
  int (__fastcall *v11)(const google::protobuf::internal::RepeatedPtrFieldWrapper<std::string > *const, const google::protobuf::internal::RepeatedFieldAccessor::Field *); // rax
  int v12; // r15d
  std::forward_iterator_tag v13; // cl
  int j; // r13d
  char **v15; // rax
  google::protobuf::internal::RepeatedPtrFieldBase::Rep *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // edx
  int v20; // edx
  int v21; // [rsp+14h] [rbp-A4h]
  google::protobuf::RepeatedPtrField<std::string > tmp; // [rsp+20h] [rbp-98h] BYREF
  std::string v23; // [rsp+40h] [rbp-78h] BYREF
  std::string v24; // [rsp+60h] [rbp-58h] BYREF

  if ( this == other_mutator )
  {
    if ( data != other_data )
    {
      if ( *(_QWORD *)other_data == *(_QWORD *)data )
      {
        v18 = *((_QWORD *)data + 2);
        *((_QWORD *)data + 2) = *((_QWORD *)other_data + 2);
        v19 = *((_DWORD *)other_data + 2);
        *((_QWORD *)other_data + 2) = v18;
        LODWORD(v18) = *((_DWORD *)data + 2);
        *((_DWORD *)data + 2) = v19;
        v20 = *((_DWORD *)other_data + 3);
        *((_DWORD *)other_data + 2) = v18;
        LODWORD(v18) = *((_DWORD *)data + 3);
        *((_DWORD *)data + 3) = v20;
        *((_DWORD *)other_data + 3) = v18;
      }
      else
      {
        google::protobuf::internal::RepeatedPtrFieldBase::SwapFallback<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
          (google::protobuf::internal::RepeatedPtrFieldBase *const)data,
          (google::protobuf::internal::RepeatedPtrFieldBase *)other_data);
      }
    }
  }
  else
  {
    memset(&tmp, 0, sizeof(tmp));
    if ( *(_QWORD *)data )
    {
      google::protobuf::internal::RepeatedPtrFieldBase::SwapFallback<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(
        &tmp,
        (google::protobuf::internal::RepeatedPtrFieldBase *)data);
    }
    else
    {
      v16 = (google::protobuf::internal::RepeatedPtrFieldBase::Rep *)*((_QWORD *)data + 2);
      v17 = *((_QWORD *)data + 1);
      *((_QWORD *)data + 2) = 0LL;
      tmp.rep_ = v16;
      *(_QWORD *)&tmp.current_size_ = v17;
      *((_QWORD *)data + 1) = 0LL;
    }
    v21 = (*((__int64 (__fastcall **)(const google::protobuf::internal::RepeatedFieldAccessor *, google::protobuf::internal::RepeatedPtrFieldStringAccessor::Field *))other_mutator->_vptr_RepeatedFieldAccessor
           + 3))(
            other_mutator,
            other_data);
    if ( v21 > 0 )
    {
      for ( i = 0; i != v21; ++i )
      {
        vptr_RepeatedFieldAccessor = other_mutator->_vptr_RepeatedFieldAccessor;
        v24._M_dataplus._M_p = v24._anon_0._M_local_buf;
        v24._M_string_length = 0LL;
        v24._anon_0._M_local_buf[0] = 0;
        v8 = ((__int64 (__fastcall *)(const google::protobuf::internal::RepeatedFieldAccessor *, google::protobuf::internal::RepeatedPtrFieldStringAccessor::Field *, _QWORD, std::string *))vptr_RepeatedFieldAccessor[4])(
               other_mutator,
               other_data,
               i,
               &v24);
        v9 = *(_QWORD *)(v8 + 8);
        v23._M_dataplus._M_p = v23._anon_0._M_local_buf;
        std::string::_M_construct<char *>(
          &v23,
          *(char **)v8,
          (char *)(*(_QWORD *)v8 + v9),
          (std::forward_iterator_tag)&v23._anon_0);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v24._M_dataplus._M_p != &v24._anon_0 )
          operator delete(v24._M_dataplus._M_p);
        v24._M_dataplus._M_p = v24._anon_0._M_local_buf;
        std::string::_M_construct<char *>(&v24, v23._M_dataplus._M_p, &v23._M_dataplus._M_p[v23._M_string_length], v10);
        (*((void (__fastcall **)(const google::protobuf::internal::RepeatedPtrFieldStringAccessor *const, google::protobuf::internal::RepeatedPtrFieldStringAccessor::Field *, std::string *))this->_vptr_RepeatedFieldAccessor
         + 7))(
          this,
          data,
          &v24);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v24._M_dataplus._M_p != &v24._anon_0 )
          operator delete(v24._M_dataplus._M_p);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v23._M_dataplus._M_p != &v23._anon_0 )
          operator delete(v23._M_dataplus._M_p);
      }
    }
    v11 = (int (__fastcall *)(const google::protobuf::internal::RepeatedPtrFieldWrapper<std::string > *const, const google::protobuf::internal::RepeatedFieldAccessor::Field *))*((_QWORD *)this->_vptr_RepeatedFieldAccessor + 3);
    if ( v11 == google::protobuf::internal::RepeatedPtrFieldWrapper<std::string>::Size )
      v12 = *((_DWORD *)data + 2);
    else
      v12 = v11(this, data);
    (*((void (__fastcall **)(const google::protobuf::internal::RepeatedFieldAccessor *, google::protobuf::internal::RepeatedPtrFieldStringAccessor::Field *))other_mutator->_vptr_RepeatedFieldAccessor
     + 5))(
      other_mutator,
      other_data);
    if ( v12 > 0 )
    {
      for ( j = 0; j != v12; ++j )
      {
        v15 = (char **)tmp.rep_->elements[j];
        v24._M_dataplus._M_p = v24._anon_0._M_local_buf;
        std::string::_M_construct<char *>(&v24, *v15, &v15[1][(_QWORD)*v15], v13);
        (*((void (__fastcall **)(const google::protobuf::internal::RepeatedFieldAccessor *, google::protobuf::internal::RepeatedPtrFieldStringAccessor::Field *, std::string *))other_mutator->_vptr_RepeatedFieldAccessor
         + 7))(
          other_mutator,
          other_data,
          &v24);
        if ( (std::string::$CFBEC286C7F52157F7E59FC354047095 *)v24._M_dataplus._M_p != &v24._anon_0 )
          operator delete(v24._M_dataplus._M_p);
      }
    }
    google::protobuf::internal::RepeatedPtrFieldBase::Destroy<google::protobuf::RepeatedPtrField<std::string>::TypeHandler>(&tmp);
  }
};

// Line 333: range 000000000C8BCF00-000000000C8BCF25
std::string *__fastcall google::protobuf::internal::RepeatedPtrFieldStringAccessor::New[abi:cxx11](
        const google::protobuf::internal::RepeatedPtrFieldStringAccessor *const this,
        const google::protobuf::internal::RepeatedPtrFieldStringAccessor::Value *a2)
{
  std::string *result; // rax

  result = (std::string *)operator new(0x20uLL);
  result->_M_string_length = 0LL;
  result->_M_dataplus._M_p = result->_anon_0._M_local_buf;
  result->_anon_0._M_local_buf[0] = 0;
  return result;
};

// Line 336: range 000000000C8BD0C0-000000000C8BD0C3
void __fastcall google::protobuf::internal::RepeatedPtrFieldStringAccessor::ConvertToT(
        const google::protobuf::internal::RepeatedPtrFieldStringAccessor *const this,
        const google::protobuf::internal::RepeatedPtrFieldStringAccessor::Value *value,
        std::string *result)
{
  std::string::_M_assign(result, value);
};

// Line 353: range 000000000C8BCDF0-000000000C8BCDF5
void __fastcall google::protobuf::internal::RepeatedPtrFieldMessageAccessor::~RepeatedPtrFieldMessageAccessor(
        google::protobuf::internal::RepeatedPtrFieldMessageAccessor *const this)
{
  operator delete(this, 8uLL);
};

// Line 353: range 000000000C8BC7D0-000000000C8BC7E6
void __fastcall google::protobuf::internal::RepeatedPtrFieldMessageAccessor::~RepeatedPtrFieldMessageAccessor(
        google::protobuf::internal::RepeatedPtrFieldMessageAccessor *const this)
{
  ;
};

// Line 354: range 000000000C8BE430-000000000C8BE4FB
void __fastcall google::protobuf::internal::RepeatedPtrFieldMessageAccessor::Swap(
        const google::protobuf::internal::RepeatedPtrFieldMessageAccessor *const this,
        google::protobuf::internal::RepeatedPtrFieldMessageAccessor::Field *data,
        const google::protobuf::internal::RepeatedFieldAccessor *other_mutator,
        google::protobuf::internal::RepeatedPtrFieldMessageAccessor::Field *other_data)
{
  google::protobuf::internal::LogMessage_0 *v5; // rax
  __int64 v6; // rax
  int v7; // edx
  int v8; // edx
  google::protobuf::internal::LogFinisher v9; // [rsp+Fh] [rbp-59h] BYREF
  google::protobuf::internal::LogMessage_0 v10; // [rsp+10h] [rbp-58h] BYREF

  if ( other_mutator != this )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      &v10,
      LOGLEVEL_FATAL_0,
      "./google/protobuf/reflection_internal.h",
      358);
    v5 = google::protobuf::internal::LogMessage::operator<<(&v10, "CHECK failed: this == other_mutator: ");
    google::protobuf::internal::LogFinisher::operator=(&v9, v5);
    google::protobuf::internal::LogMessage::~LogMessage(&v10);
  }
  if ( data != other_data )
  {
    if ( *(_QWORD *)other_data == *(_QWORD *)data )
    {
      v6 = *((_QWORD *)data + 2);
      *((_QWORD *)data + 2) = *((_QWORD *)other_data + 2);
      v7 = *((_DWORD *)other_data + 2);
      *((_QWORD *)other_data + 2) = v6;
      LODWORD(v6) = *((_DWORD *)data + 2);
      *((_DWORD *)data + 2) = v7;
      v8 = *((_DWORD *)other_data + 3);
      *((_DWORD *)other_data + 2) = v6;
      LODWORD(v6) = *((_DWORD *)data + 3);
      *((_DWORD *)data + 3) = v8;
      *((_DWORD *)other_data + 3) = v6;
    }
    else
    {
      google::protobuf::internal::RepeatedPtrFieldBase::SwapFallback<google::protobuf::RepeatedPtrField<google::protobuf::Message>::TypeHandler>(
        (google::protobuf::internal::RepeatedPtrFieldBase *const)data,
        (google::protobuf::internal::RepeatedPtrFieldBase *)other_data);
    }
  }
};

// Line 367: range 000000000C8BC7F0-000000000C8BC7F6
void __fastcall google::protobuf::internal::RepeatedPtrFieldMessageAccessor::ConvertToT(
        const google::protobuf::internal::RepeatedPtrFieldMessageAccessor *const this,
        const google::protobuf::internal::RepeatedPtrFieldMessageAccessor::Value *value,
        google::protobuf::Message *result)
{
  (*((void (__fastcall **)(google::protobuf::Message *, const google::protobuf::internal::RepeatedPtrFieldMessageAccessor::Value *))result->_vptr_MessageLite
   + 18))(
    result,
    value);
};

// Line 369: range 000000000C8BC800-000000000C8BC803
const google::protobuf::internal::RepeatedPtrFieldMessageAccessor::Value *__fastcall google::protobuf::internal::RepeatedPtrFieldMessageAccessor::ConvertFromT(
        const google::protobuf::internal::RepeatedPtrFieldMessageAccessor *const this,
        const google::protobuf::Message *value,
        google::protobuf::internal::RepeatedPtrFieldMessageAccessor::Value *scratch_space)
{
  return value;
};
