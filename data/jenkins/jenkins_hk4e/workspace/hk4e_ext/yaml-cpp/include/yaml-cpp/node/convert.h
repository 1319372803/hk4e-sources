// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/yaml-cpp/include/yaml-cpp/node/convert.h

// Line 118: range 0000000015319C30-0000000015319DC2
void __fastcall YAML::conversion::inner_encode<int>(const int *rhs, std::stringstream *stream)
{
  char v2; // cl

  v2 = *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000);
  if ( (char)(((unsigned __int8)rhs & 7) + 3) >= v2 && v2 )
  {
    __asan_report_load4(rhs);
    YAML::conversion::ConvertStreamTo<int>((std::stringstream *)rhs, (int *)stream);
  }
  else
  {
    std::ostream::operator<<((char *)stream + 16, *(unsigned int *)rhs);
  }
};

// Line 140: range 0000000015319DC7-0000000015319F1E
std::enable_if<true,bool>::type __fastcall YAML::conversion::ConvertStreamTo<double>(
        std::stringstream *stream,
        double *rhs)
{
  std::stringstream *v2; // rbx
  __int64 v3; // rax
  char *v4; // rax
  char v5; // cl
  int v6; // edx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  char v10; // dl
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  char v15; // dl

  v2 = stream;
  if ( *(_BYTE *)(((unsigned __int64)stream >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
    goto LABEL_12;
  }
  v3 = *(_QWORD *)stream;
  stream = (std::stringstream *)(*(_QWORD *)stream - 24LL);
  if ( *(_BYTE *)(((unsigned __int64)stream >> 3) + 0x7FFF8000) )
  {
LABEL_12:
    __asan_report_load8();
LABEL_13:
    __asan_report_load4(stream);
    goto LABEL_14;
  }
  v4 = (char *)v2 + *(_QWORD *)(v3 - 24);
  stream = (std::stringstream *)(v4 + 24);
  v5 = *(_BYTE *)(((unsigned __int64)(v4 + 24) >> 3) + 0x7FFF8000);
  if ( (char)((((_BYTE)v4 + 24) & 7) + 3) >= v5 && v5 )
    goto LABEL_13;
  v6 = *((_DWORD *)v4 + 6);
  BYTE1(v6) &= ~0x10u;
  *((_DWORD *)v4 + 6) = v6;
  v7 = std::istream::_M_extract<double>(v2, rhs);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
  {
LABEL_14:
    v8 = v7;
    __asan_report_load8();
    goto LABEL_15;
  }
  v8 = *(_QWORD *)v7 - 24LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
  {
LABEL_15:
    __asan_report_load8();
LABEL_16:
    __asan_report_load4(v8);
    goto LABEL_17;
  }
  v9 = *(_QWORD *)(*(_QWORD *)v7 - 24LL) + v7;
  v8 = v9 + 32;
  v10 = *(_BYTE *)(((v9 + 32) >> 3) + 0x7FFF8000);
  if ( v10 && v10 <= 3 )
    goto LABEL_16;
  if ( (*(_BYTE *)(v9 + 32) & 5) != 0 )
    return 0;
LABEL_17:
  v12 = std::ws<char,std::char_traits<char>>(v2);
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
  {
    v13 = v12;
    __asan_report_load8();
    goto LABEL_24;
  }
  v13 = *(_QWORD *)v12 - 24LL;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
  {
LABEL_24:
    __asan_report_load8();
LABEL_25:
    __asan_report_load4(v13);
    return 1;
  }
  v14 = *(_QWORD *)(*(_QWORD *)v12 - 24LL) + v12;
  v13 = v14 + 32;
  v15 = *(_BYTE *)(((v14 + 32) >> 3) + 0x7FFF8000);
  if ( v15 && v15 <= 3 )
    goto LABEL_25;
  return (*(_BYTE *)(v14 + 32) & 2) != 0;
};

// Line 199: range 000000001531DAFE-000000001531DE7D
bool __fastcall YAML::convert<int>::decode(const YAML::Node *node, int *rhs)
{
  char *v2; // rdx
  _DWORD *v5; // rbx
  unsigned __int64 p_m_pNode; // rdi
  char v7; // al
  int v8; // eax
  YAML::InvalidNode *exception; // rdi
  bool v10; // r12
  unsigned __int64 m_pNode; // rdi
  __int64 v13; // rsi
  YAML::InvalidNode *v14; // rdi
  __int64 vars0[6]; // [rsp+0h] [rbp+0h] BYREF
  _BYTE _30[152]; // [rsp+30h] [rbp+30h] BYREF
  int anonymous0; // [rsp+C8h] [rbp+C8h]

  if ( _asan_option_detect_stack_use_after_return )
    __asan_stack_malloc_3(512LL);
  vars0[0] = 1102416563LL;
  vars0[1] = (__int64)"1 48 392 10 stream:199";
  vars0[2] = (__int64)YAML::convert<int>::decode;
  v5 = (_DWORD *)((unsigned __int64)vars0 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862733] = -218103808;
  v5[536862734] = -202116109;
  v5[536862735] = -202116109;
  if ( *(char *)(((unsigned __int64)node >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(node);
LABEL_15:
    exception = (YAML::InvalidNode *)__cxa_allocate_exception(0x40uLL);
    YAML::InvalidNode::InvalidNode(exception, &node->m_invalidKey);
    __asan_handle_no_return(exception);
    _cxa_throw(exception, (struct type_info *)&`typeinfo for'YAML::InvalidNode, YAML::InvalidNode::~InvalidNode);
  }
  if ( !node->m_isValid )
    goto LABEL_15;
  p_m_pNode = (unsigned __int64)&node->m_pNode;
  if ( *(_BYTE *)(((unsigned __int64)&node->m_pNode >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_17:
    __asan_report_load8();
    goto LABEL_18;
  }
  p_m_pNode = (unsigned __int64)node->m_pNode;
  if ( !p_m_pNode )
  {
LABEL_21:
    v8 = 1;
    goto LABEL_23;
  }
  if ( *(_BYTE *)((p_m_pNode >> 3) + 0x7FFF8000) )
    goto LABEL_17;
  p_m_pNode = *(_QWORD *)p_m_pNode;
  if ( *(_BYTE *)((p_m_pNode >> 3) + 0x7FFF8000) )
  {
LABEL_18:
    __asan_report_load8();
    goto LABEL_19;
  }
  p_m_pNode = *(_QWORD *)p_m_pNode;
  if ( *(char *)((p_m_pNode >> 3) + 0x7FFF8000) < 0 )
  {
LABEL_19:
    __asan_report_load1(p_m_pNode);
LABEL_20:
    __asan_report_load4(v2);
    goto LABEL_21;
  }
  if ( *(_BYTE *)p_m_pNode )
  {
    v2 = (char *)(p_m_pNode + 16);
    v7 = *(_BYTE *)(((p_m_pNode + 16) >> 3) + 0x7FFF8000);
    if ( !v7 || v7 > 3 )
    {
      v8 = *(_DWORD *)(p_m_pNode + 16);
      goto LABEL_23;
    }
    goto LABEL_20;
  }
  v8 = 0;
LABEL_23:
  if ( v8 == 2 )
  {
    if ( !node->m_isValid )
    {
      v14 = (YAML::InvalidNode *)__cxa_allocate_exception(0x40uLL);
      YAML::InvalidNode::InvalidNode(v14, &node->m_invalidKey);
      __asan_handle_no_return(v14);
      _cxa_throw(v14, (struct type_info *)&`typeinfo for'YAML::InvalidNode, YAML::InvalidNode::~InvalidNode);
    }
    m_pNode = (unsigned __int64)node->m_pNode;
    if ( m_pNode )
    {
      if ( *(_BYTE *)((m_pNode >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else
      {
        m_pNode = *(_QWORD *)m_pNode;
        if ( !*(_BYTE *)((m_pNode >> 3) + 0x7FFF8000) )
        {
          v13 = *(_QWORD *)m_pNode + 64LL;
LABEL_31:
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(_30, v13, 24LL);
          anonymous0 &= ~2u;
          std::istream::peek((std::istream *)_30);
          v10 = YAML::conversion::ConvertStreamTo<int>((std::stringstream *)_30, rhs);
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(_30);
          goto LABEL_25;
        }
      }
      __asan_report_load8();
    }
    v13 = YAML::detail::node_data::empty_scalar[abi:cxx11](m_pNode, rhs, v2);
    goto LABEL_31;
  }
  v10 = 0;
LABEL_25:
  *(_QWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8000) = 0LL;
  *(_QWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF8034) = 0LL;
  *(_DWORD *)(((unsigned __int64)vars0 >> 3) + 0x7FFF803C) = 0;
  return v10;
};
