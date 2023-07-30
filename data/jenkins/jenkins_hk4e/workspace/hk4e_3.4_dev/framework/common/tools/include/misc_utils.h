// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/include/misc_utils.h

// Line 74: range 000000000C661AC6-000000000C661B11
bool __cdecl common::tools::MiscUtils::isContains<std::set<std::string> const,std::string>(
        const std::set<std::string> *container,
        const std::string *value)
{
  std::_Rb_tree_const_iterator<std::string >::_Self __x; // [rsp+10h] [rbp-10h] BYREF
  std::_Rb_tree_const_iterator<std::string >::_Self __y; // [rsp+18h] [rbp-8h] BYREF

  __y._M_node = std::set<std::string>::end(container)._M_node;
  __x._M_node = std::set<std::string>::find(container, value)._M_node;
  return std::operator!=(&__x, &__y);
};

// Line 74: range 000000000C661628-000000000C6616B3
bool __cdecl common::tools::MiscUtils::isContains<std::set<unsigned int> const,int>(
        const std::set<unsigned int> *container,
        const int *value)
{
  std::set<unsigned int>::key_type __x; // [rsp+1Ch] [rbp-14h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self v4; // [rsp+20h] [rbp-10h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+28h] [rbp-8h] BYREF

  __y._M_node = std::set<unsigned int>::end(container)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(value);
  }
  __x = *value;
  v4._M_node = std::set<unsigned int>::find(container, &__x)._M_node;
  return std::operator!=(&v4, &__y);
};

// Line 74: range 000000000F048A04-000000000F048B6A
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
        std::unordered_map<unsigned int,unsigned int> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                            container,
                                                                            value);
  result = std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 142: range 000000000CE608D4-000000000CE60AA9
std::map<data::ElementType,unsigned int>::mapped_type __cdecl common::tools::MiscUtils::findMapWithDefaultValue<std::map<data::ElementType,unsigned int>>(
        const std::map<data::ElementType,unsigned int> *map,
        const std::map<data::ElementType,unsigned int>::key_type *key,
        std::map<data::ElementType,unsigned int>::mapped_type default_value)
{
  std::_Rb_tree_const_iterator<std::pair<const data::ElementType,unsigned int> > *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // al
  std::map<data::ElementType,unsigned int>::mapped_type result; // eax
  std::_Rb_tree_const_iterator<std::pair<const data::ElementType,unsigned int> >::pointer v8; // rdx
  unsigned int *p_second; // rax
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (std::_Rb_tree_const_iterator<std::pair<const data::ElementType,unsigned int> > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::_Rb_tree_const_iterator<std::pair<const data::ElementType,unsigned int> > *)v4;
  }
  v3->_M_node = (std::_Rb_tree_const_iterator<std::pair<const data::ElementType,unsigned int> >::_Base_ptr)1102416563;
  v3[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::ElementType,unsigned int> >::_Base_ptr)"2 32 8 8 iter:476 64 8 9 <unknown>";
  v3[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::ElementType,unsigned int> >::_Base_ptr)common::tools::MiscUtils::findMapWithDefaultValue<std::map<data::ElementType,unsigned int>>;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[4], key);
  v3[4]._M_node = std::map<data::ElementType,unsigned int>::find(map, key)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[8], key);
  v3[8]._M_node = std::map<data::ElementType,unsigned int>::end(map)._M_node;
  v6 = std::operator==(v3 + 4, v3 + 8);
  *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    result = default_value;
  }
  else
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<data::ElementType const,unsigned int>>::operator->(v3 + 4);
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v8->second;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_node = (std::_Rb_tree_const_iterator<std::pair<const data::ElementType,unsigned int> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 175: range 0000000012F4C63A-0000000012F4C74B
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::TalentFilterCond>(
        std::vector<data::TalentFilterCond> *vec)
{
  std::vector<data::TalentFilterCond>::reference v1; // rax
  data::TalentFilterCond *v2; // rdx
  __int64 v3; // rsi
  std::vector<data::TalentFilterCond>::reference v4; // rax
  data::TalentFilterCond *v5; // rdx
  char v6; // cl
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]
  data::TalentFilterCond val; // [rsp+1Ch] [rbp-14h]

  index = 0;
  for ( i = 0; i < std::vector<data::TalentFilterCond>::size(vec); ++i )
  {
    v1 = std::vector<data::TalentFilterCond>::operator[](vec, i);
    v2 = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    val = *v2;
    if ( *v2 )
    {
      if ( index != i )
      {
        v3 = index;
        v4 = std::vector<data::TalentFilterCond>::operator[](vec, index);
        v5 = v4;
        v6 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
        if ( v6 != 0 && (char)(((unsigned __int8)v4 & 7) + 3) >= v6 )
        {
          LOBYTE(v3) = v6 != 0;
          __asan_report_store4(v4, v3);
        }
        *v5 = val;
      }
      ++index;
    }
  }
  std::vector<data::TalentFilterCond>::resize(vec, index);
};

// Line 175: range 000000000CE74ED2-000000000CE74FE3
void __cdecl common::tools::MiscUtils::removeEmptyElement<unsigned int>(std::vector<unsigned int> *vec)
{
  std::vector<unsigned int>::reference v1; // rax
  unsigned int *v2; // rdx
  __int64 v3; // rsi
  std::vector<unsigned int>::reference v4; // rax
  unsigned int *v5; // rdx
  char v6; // cl
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]
  unsigned int val; // [rsp+1Ch] [rbp-14h]

  index = 0;
  for ( i = 0; i < std::vector<unsigned int>::size(vec); ++i )
  {
    v1 = std::vector<unsigned int>::operator[](vec, i);
    v2 = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    val = *v2;
    if ( *v2 )
    {
      if ( index != i )
      {
        v3 = index;
        v4 = std::vector<unsigned int>::operator[](vec, index);
        v5 = v4;
        v6 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
        if ( v6 != 0 && (char)(((unsigned __int8)v4 & 7) + 3) >= v6 )
        {
          LOBYTE(v3) = v6 != 0;
          __asan_report_store4(v4, v3);
        }
        *v5 = val;
      }
      ++index;
    }
  }
  std::vector<unsigned int>::resize(vec, index);
};

// Line 180: range 000000000CE78708-000000000CE789B2
std::vector<unsigned int> *__cdecl common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,data::WeatherExcelConfig>>(
        std::vector<unsigned int> *retstr,
        const std::unordered_map<unsigned int,data::WeatherExcelConfig> *map)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeatherExcelConfig>,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<unsigned int>::size_type v5; // rsi
  unsigned int *M_current; // rbx
  std::vector<unsigned int>::iterator v7; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeatherExcelConfig>,false,false>::reference v10; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::WeatherExcelConfig> >::type *k; // [rsp+20h] [rbp-90h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeatherExcelConfig>,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeatherExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeatherExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeatherExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:502 64 8 13 __for_end:502";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeatherExcelConfig>,false>::__node_type *)common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,data::WeatherExcelConfig>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::vector<unsigned int>::vector(retstr);
  v5 = std::unordered_map<unsigned int,data::WeatherExcelConfig>::size(map);
  std::vector<unsigned int>::reserve(retstr, v5);
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v5);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::WeatherExcelConfig>::begin(map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v5);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::WeatherExcelConfig>::end(map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::WeatherExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeatherExcelConfig>,false,false>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,data::WeatherExcelConfig>(v10);
    std::get<1ul,unsigned int const,data::WeatherExcelConfig>(v10);
    std::vector<unsigned int>::push_back(retstr, k);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeatherExcelConfig>,false,false>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  M_current = std::vector<unsigned int>::end(retstr)._M_current;
  v7._M_current = std::vector<unsigned int>::begin(retstr)._M_current;
  std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
    v7,
    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeatherExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 216: range 0000000012EE6948-0000000012EE6A43
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::ChessCardEffect,data::ChessCardEffectType data::ChessCardEffect::*>(
        std::vector<data::ChessCardEffect> *vec,
        data::ChessCardEffectType *member)
{
  unsigned __int64 v2; // rcx
  const data::ChessCardEffect *v3; // rbx
  data::ChessCardEffect *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::ChessCardEffect>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::ChessCardEffect>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::ChessCardEffect>::operator[](vec, i);
        v4 = std::vector<data::ChessCardEffect>::operator[](vec, index);
        data::ChessCardEffect::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::ChessCardEffect>::resize(vec, index);
};

// Line 216: range 00000000147C9404-00000000147C94FF
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::ConfigHomeGather,unsigned int data::ConfigHomeGather::*>(
        std::vector<data::ConfigHomeGather> *vec,
        unsigned int *member)
{
  unsigned __int64 v2; // rcx
  const data::ConfigHomeGather *v3; // rbx
  data::ConfigHomeGather *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::ConfigHomeGather>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::ConfigHomeGather>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::ConfigHomeGather>::operator[](vec, i);
        v4 = std::vector<data::ConfigHomeGather>::operator[](vec, index);
        data::ConfigHomeGather::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::ConfigHomeGather>::resize(vec, index);
};

// Line 216: range 0000000013C73008-0000000013C73103
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::DailyTaskAction,data::DailyTaskActionType data::DailyTaskAction::*>(
        std::vector<data::DailyTaskAction> *vec,
        data::DailyTaskActionType *member)
{
  unsigned __int64 v2; // rcx
  const data::DailyTaskAction *v3; // rbx
  data::DailyTaskAction *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::DailyTaskAction>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::DailyTaskAction>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::DailyTaskAction>::operator[](vec, i);
        v4 = std::vector<data::DailyTaskAction>::operator[](vec, index);
        data::DailyTaskAction::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::DailyTaskAction>::resize(vec, index);
};

// Line 216: range 0000000013C76D7A-0000000013C76E75
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::DropNode,unsigned int data::DropNode::*>(
        std::vector<data::DropNode> *vec,
        unsigned int *member)
{
  unsigned __int64 v2; // rcx
  const data::DropNode *v3; // rbx
  data::DropNode *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::DropNode>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::DropNode>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::DropNode>::operator[](vec, i);
        v4 = std::vector<data::DropNode>::operator[](vec, index);
        data::DropNode::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::DropNode>::resize(vec, index);
};

// Line 216: range 0000000013C821EE-0000000013C822E9
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::DungeonCondConfig,data::DungeonCondType data::DungeonCondConfig::*>(
        std::vector<data::DungeonCondConfig> *vec,
        data::DungeonCondType *member)
{
  unsigned __int64 v2; // rcx
  const data::DungeonCondConfig *v3; // rbx
  data::DungeonCondConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::DungeonCondConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::DungeonCondConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::DungeonCondConfig>::operator[](vec, i);
        v4 = std::vector<data::DungeonCondConfig>::operator[](vec, index);
        data::DungeonCondConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::DungeonCondConfig>::resize(vec, index);
};

// Line 216: range 0000000012F4A3E0-0000000012F4A4DB
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::ExtraPropConfig,data::FightPropType data::ExtraPropConfig::*>(
        std::vector<data::ExtraPropConfig> *vec,
        data::FightPropType *member)
{
  unsigned __int64 v2; // rcx
  const data::ExtraPropConfig *v3; // rbx
  data::ExtraPropConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::ExtraPropConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::ExtraPropConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::ExtraPropConfig>::operator[](vec, i);
        v4 = std::vector<data::ExtraPropConfig>::operator[](vec, index);
        data::ExtraPropConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::ExtraPropConfig>::resize(vec, index);
};

// Line 216: range 0000000013C882E4-0000000013C883DF
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::FetterConditionConfig,data::FetterCondType data::FetterConditionConfig::*>(
        std::vector<data::FetterConditionConfig> *vec,
        data::FetterCondType *member)
{
  unsigned __int64 v2; // rcx
  const data::FetterConditionConfig *v3; // rbx
  data::FetterConditionConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::FetterConditionConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::FetterConditionConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::FetterConditionConfig>::operator[](vec, i);
        v4 = std::vector<data::FetterConditionConfig>::operator[](vec, index);
        data::FetterConditionConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::FetterConditionConfig>::resize(vec, index);
};

// Line 216: range 0000000012F491B2-0000000012F492AD
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::FightPropGrowConfig,data::FightPropType data::FightPropGrowConfig::*>(
        std::vector<data::FightPropGrowConfig> *vec,
        data::FightPropType *member)
{
  unsigned __int64 v2; // rcx
  const data::FightPropGrowConfig *v3; // rbx
  data::FightPropGrowConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::FightPropGrowConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::FightPropGrowConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::FightPropGrowConfig>::operator[](vec, i);
        v4 = std::vector<data::FightPropGrowConfig>::operator[](vec, index);
        data::FightPropGrowConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::FightPropGrowConfig>::resize(vec, index);
};

// Line 216: range 00000000147B4A04-00000000147B4AFF
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::FireworksReformParamConfig,data::FireworksReformParamType data::FireworksReformParamConfig::*>(
        std::vector<data::FireworksReformParamConfig> *vec,
        data::FireworksReformParamType *member)
{
  unsigned __int64 v2; // rcx
  const data::FireworksReformParamConfig *v3; // rbx
  data::FireworksReformParamConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::FireworksReformParamConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::FireworksReformParamConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::FireworksReformParamConfig>::operator[](vec, i);
        v4 = std::vector<data::FireworksReformParamConfig>::operator[](vec, index);
        data::FireworksReformParamConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::FireworksReformParamConfig>::resize(vec, index);
};

// Line 216: range 00000000147B7E50-00000000147B7F4B
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::GCGProficiencyReward,unsigned int data::GCGProficiencyReward::*>(
        std::vector<data::GCGProficiencyReward> *vec,
        unsigned int *member)
{
  unsigned __int64 v2; // rcx
  const data::GCGProficiencyReward *v3; // rbx
  data::GCGProficiencyReward *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::GCGProficiencyReward>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::GCGProficiencyReward>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::GCGProficiencyReward>::operator[](vec, i);
        v4 = std::vector<data::GCGProficiencyReward>::operator[](vec, index);
        data::GCGProficiencyReward::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::GCGProficiencyReward>::resize(vec, index);
};

// Line 216: range 00000000147C17B6-00000000147C18B1
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::GachaNewbieUpConfig,unsigned int data::GachaNewbieUpConfig::*>(
        std::vector<data::GachaNewbieUpConfig> *vec,
        unsigned int *member)
{
  unsigned __int64 v2; // rcx
  const data::GachaNewbieUpConfig *v3; // rbx
  data::GachaNewbieUpConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::GachaNewbieUpConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::GachaNewbieUpConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::GachaNewbieUpConfig>::operator[](vec, i);
        v4 = std::vector<data::GachaNewbieUpConfig>::operator[](vec, index);
        data::GachaNewbieUpConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::GachaNewbieUpConfig>::resize(vec, index);
};

// Line 216: range 00000000147C4BE8-00000000147C4CE3
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::GadgetInteractActionConfig,data::InteractActionType data::GadgetInteractActionConfig::*>(
        std::vector<data::GadgetInteractActionConfig> *vec,
        data::InteractActionType *member)
{
  unsigned __int64 v2; // rcx
  const data::GadgetInteractActionConfig *v3; // rbx
  data::GadgetInteractActionConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::GadgetInteractActionConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::GadgetInteractActionConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::GadgetInteractActionConfig>::operator[](vec, i);
        v4 = std::vector<data::GadgetInteractActionConfig>::operator[](vec, index);
        data::GadgetInteractActionConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::GadgetInteractActionConfig>::resize(vec, index);
};

// Line 216: range 00000000147C4A46-00000000147C4B41
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::GadgetInteractCond,data::InteractCondType data::GadgetInteractCond::*>(
        std::vector<data::GadgetInteractCond> *vec,
        data::InteractCondType *member)
{
  unsigned __int64 v2; // rcx
  const data::GadgetInteractCond *v3; // rbx
  data::GadgetInteractCond *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::GadgetInteractCond>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::GadgetInteractCond>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::GadgetInteractCond>::operator[](vec, i);
        v4 = std::vector<data::GadgetInteractCond>::operator[](vec, index);
        data::GadgetInteractCond::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::GadgetInteractCond>::resize(vec, index);
};

// Line 216: range 00000000147C7D54-00000000147C7E4F
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::H5ActivityCondConfig,data::H5ActivityCondType data::H5ActivityCondConfig::*>(
        std::vector<data::H5ActivityCondConfig> *vec,
        data::H5ActivityCondType *member)
{
  unsigned __int64 v2; // rcx
  const data::H5ActivityCondConfig *v3; // rbx
  data::H5ActivityCondConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::H5ActivityCondConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::H5ActivityCondConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::H5ActivityCondConfig>::operator[](vec, i);
        v4 = std::vector<data::H5ActivityCondConfig>::operator[](vec, index);
        data::H5ActivityCondConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::H5ActivityCondConfig>::resize(vec, index);
};

// Line 216: range 00000000147C8C3C-00000000147C8D37
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::HomeWorldLimitShopCond,data::HomeWorldLimitShopCondType data::HomeWorldLimitShopCond::*>(
        std::vector<data::HomeWorldLimitShopCond> *vec,
        data::HomeWorldLimitShopCondType *member)
{
  unsigned __int64 v2; // rcx
  const data::HomeWorldLimitShopCond *v3; // rbx
  data::HomeWorldLimitShopCond *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::HomeWorldLimitShopCond>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::HomeWorldLimitShopCond>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::HomeWorldLimitShopCond>::operator[](vec, i);
        v4 = std::vector<data::HomeWorldLimitShopCond>::operator[](vec, index);
        data::HomeWorldLimitShopCond::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::HomeWorldLimitShopCond>::resize(vec, index);
};

// Line 216: range 000000000CE54826-000000000CE54921
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::IdCountConfig,unsigned int data::IdCountConfig::*>(
        std::vector<data::IdCountConfig> *vec,
        unsigned int *member)
{
  unsigned __int64 v2; // rcx
  const data::IdCountConfig *v3; // rbx
  data::IdCountConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::IdCountConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::IdCountConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::IdCountConfig>::operator[](vec, i);
        v4 = std::vector<data::IdCountConfig>::operator[](vec, index);
        data::IdCountConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::IdCountConfig>::resize(vec, index);
};

// Line 216: range 00000000147CBB9C-00000000147CBC97
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::InferenceAction,data::InferenceActionType data::InferenceAction::*>(
        std::vector<data::InferenceAction> *vec,
        data::InferenceActionType *member)
{
  unsigned __int64 v2; // rcx
  const data::InferenceAction *v3; // rbx
  data::InferenceAction *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::InferenceAction>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::InferenceAction>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::InferenceAction>::operator[](vec, i);
        v4 = std::vector<data::InferenceAction>::operator[](vec, index);
        data::InferenceAction::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::InferenceAction>::resize(vec, index);
};

// Line 216: range 0000000012F11EB4-0000000012F11FAF
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::IrodoriChessCardEffect,data::IrodoriChessCardEffectType data::IrodoriChessCardEffect::*>(
        std::vector<data::IrodoriChessCardEffect> *vec,
        data::IrodoriChessCardEffectType *member)
{
  unsigned __int64 v2; // rcx
  const data::IrodoriChessCardEffect *v3; // rbx
  data::IrodoriChessCardEffect *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::IrodoriChessCardEffect>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::IrodoriChessCardEffect>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::IrodoriChessCardEffect>::operator[](vec, i);
        v4 = std::vector<data::IrodoriChessCardEffect>::operator[](vec, index);
        data::IrodoriChessCardEffect::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::IrodoriChessCardEffect>::resize(vec, index);
};

// Line 216: range 0000000012F10934-0000000012F10A2F
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::IrodoriFlowerConfig,unsigned int data::IrodoriFlowerConfig::*>(
        std::vector<data::IrodoriFlowerConfig> *vec,
        unsigned int *member)
{
  unsigned __int64 v2; // rcx
  const data::IrodoriFlowerConfig *v3; // rbx
  data::IrodoriFlowerConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::IrodoriFlowerConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::IrodoriFlowerConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::IrodoriFlowerConfig>::operator[](vec, i);
        v4 = std::vector<data::IrodoriFlowerConfig>::operator[](vec, index);
        data::IrodoriFlowerConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::IrodoriFlowerConfig>::resize(vec, index);
};

// Line 216: range 0000000012F120DE-0000000012F121D9
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::IrodoriPoetryScanConfig,unsigned int data::IrodoriPoetryScanConfig::*>(
        std::vector<data::IrodoriPoetryScanConfig> *vec,
        unsigned int *member)
{
  unsigned __int64 v2; // rcx
  const data::IrodoriPoetryScanConfig *v3; // rbx
  data::IrodoriPoetryScanConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::IrodoriPoetryScanConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::IrodoriPoetryScanConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::IrodoriPoetryScanConfig>::operator[](vec, i);
        v4 = std::vector<data::IrodoriPoetryScanConfig>::operator[](vec, index);
        data::IrodoriPoetryScanConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::IrodoriPoetryScanConfig>::resize(vec, index);
};

// Line 216: range 00000000147FA1F0-00000000147FA2EB
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::ItemUseConfig,data::ItemUseOp data::ItemUseConfig::*>(
        std::vector<data::ItemUseConfig> *vec,
        data::ItemUseOp *member)
{
  unsigned __int64 v2; // rcx
  const data::ItemUseConfig *v3; // rbx
  data::ItemUseConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::ItemUseConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::ItemUseConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::ItemUseConfig>::operator[](vec, i);
        v4 = std::vector<data::ItemUseConfig>::operator[](vec, index);
        data::ItemUseConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::ItemUseConfig>::resize(vec, index);
};

// Line 216: range 00000000147FBF94-00000000147FC08F
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::MonsterDrop,unsigned int data::MonsterDrop::*>(
        std::vector<data::MonsterDrop> *vec,
        unsigned int *member)
{
  unsigned __int64 v2; // rcx
  const data::MonsterDrop *v3; // rbx
  data::MonsterDrop *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::MonsterDrop>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::MonsterDrop>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::MonsterDrop>::operator[](vec, i);
        v4 = std::vector<data::MonsterDrop>::operator[](vec, index);
        data::MonsterDrop::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::MonsterDrop>::resize(vec, index);
};

// Line 216: range 00000000135F2F14-00000000135F300F
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::NewActivityCond,data::NewActivityCondType data::NewActivityCond::*>(
        std::vector<data::NewActivityCond> *vec,
        data::NewActivityCondType *member)
{
  unsigned __int64 v2; // rcx
  const data::NewActivityCond *v3; // rbx
  data::NewActivityCond *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::NewActivityCond>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::NewActivityCond>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::NewActivityCond>::operator[](vec, i);
        v4 = std::vector<data::NewActivityCond>::operator[](vec, index);
        data::NewActivityCond::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::NewActivityCond>::resize(vec, index);
};

// Line 216: range 0000000014800A1C-0000000014800B17
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::OfferingActionContent,data::OfferingActionType data::OfferingActionContent::*>(
        std::vector<data::OfferingActionContent> *vec,
        data::OfferingActionType *member)
{
  unsigned __int64 v2; // rcx
  const data::OfferingActionContent *v3; // rbx
  data::OfferingActionContent *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::OfferingActionContent>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::OfferingActionContent>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::OfferingActionContent>::operator[](vec, i);
        v4 = std::vector<data::OfferingActionContent>::operator[](vec, index);
        data::OfferingActionContent::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::OfferingActionContent>::resize(vec, index);
};

// Line 216: range 000000000CE58246-000000000CE58341
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::PackageContentConfig,unsigned int data::PackageContentConfig::*>(
        std::vector<data::PackageContentConfig> *vec,
        unsigned int *member)
{
  unsigned __int64 v2; // rcx
  const data::PackageContentConfig *v3; // rbx
  data::PackageContentConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::PackageContentConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::PackageContentConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::PackageContentConfig>::operator[](vec, i);
        v4 = std::vector<data::PackageContentConfig>::operator[](vec, index);
        data::PackageContentConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::PackageContentConfig>::resize(vec, index);
};

// Line 216: range 0000000012F49BE6-0000000012F49CE1
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::PropValConfig,data::FightPropType data::PropValConfig::*>(
        std::vector<data::PropValConfig> *vec,
        data::FightPropType *member)
{
  unsigned __int64 v2; // rcx
  const data::PropValConfig *v3; // rbx
  data::PropValConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::PropValConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::PropValConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::PropValConfig>::operator[](vec, i);
        v4 = std::vector<data::PropValConfig>::operator[](vec, index);
        data::PropValConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::PropValConfig>::resize(vec, index);
};

// Line 216: range 0000000012F4B34C-0000000012F4B447
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::ProudSkillOpenConfig,unsigned int data::ProudSkillOpenConfig::*>(
        std::vector<data::ProudSkillOpenConfig> *vec,
        unsigned int *member)
{
  unsigned __int64 v2; // rcx
  const data::ProudSkillOpenConfig *v3; // rbx
  data::ProudSkillOpenConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::ProudSkillOpenConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::ProudSkillOpenConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::ProudSkillOpenConfig>::operator[](vec, i);
        v4 = std::vector<data::ProudSkillOpenConfig>::operator[](vec, index);
        data::ProudSkillOpenConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::ProudSkillOpenConfig>::resize(vec, index);
};

// Line 216: range 000000000F04156A-000000000F041665
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::QuestCond,data::QuestCondType data::QuestCond::*>(
        std::vector<data::QuestCond> *vec,
        data::QuestCondType *member)
{
  unsigned __int64 v2; // rcx
  const data::QuestCond *v3; // rbx
  data::QuestCond *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::QuestCond>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::QuestCond>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::QuestCond>::operator[](vec, i);
        v4 = std::vector<data::QuestCond>::operator[](vec, index);
        data::QuestCond::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::QuestCond>::resize(vec, index);
};

// Line 216: range 000000000F0417B8-000000000F0418B3
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::QuestContent,data::QuestContentType data::QuestContent::*>(
        std::vector<data::QuestContent> *vec,
        data::QuestContentType *member)
{
  unsigned __int64 v2; // rcx
  const data::QuestContent *v3; // rbx
  data::QuestContent *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::QuestContent>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::QuestContent>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::QuestContent>::operator[](vec, i);
        v4 = std::vector<data::QuestContent>::operator[](vec, index);
        data::QuestContent::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::QuestContent>::resize(vec, index);
};

// Line 216: range 0000000013C6FB6E-0000000013C6FC69
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::RandomItemConfig,unsigned int data::RandomItemConfig::*>(
        std::vector<data::RandomItemConfig> *vec,
        unsigned int *member)
{
  unsigned __int64 v2; // rcx
  const data::RandomItemConfig *v3; // rbx
  data::RandomItemConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::RandomItemConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::RandomItemConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::RandomItemConfig>::operator[](vec, i);
        v4 = std::vector<data::RandomItemConfig>::operator[](vec, index);
        data::RandomItemConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::RandomItemConfig>::resize(vec, index);
};

// Line 216: range 000000000F04AD36-000000000F04AE31
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::RandomQuestCond,data::QuestCondType data::RandomQuestCond::*>(
        std::vector<data::RandomQuestCond> *vec,
        data::QuestCondType *member)
{
  unsigned __int64 v2; // rcx
  const data::RandomQuestCond *v3; // rbx
  data::RandomQuestCond *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::RandomQuestCond>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::RandomQuestCond>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::RandomQuestCond>::operator[](vec, i);
        v4 = std::vector<data::RandomQuestCond>::operator[](vec, index);
        data::RandomQuestCond::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::RandomQuestCond>::resize(vec, index);
};

// Line 216: range 000000000F04AF0E-000000000F04B009
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::RandomQuestContent,data::QuestContentType data::RandomQuestContent::*>(
        std::vector<data::RandomQuestContent> *vec,
        data::QuestContentType *member)
{
  unsigned __int64 v2; // rcx
  const data::RandomQuestContent *v3; // rbx
  data::RandomQuestContent *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::RandomQuestContent>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::RandomQuestContent>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::RandomQuestContent>::operator[](vec, i);
        v4 = std::vector<data::RandomQuestContent>::operator[](vec, index);
        data::RandomQuestContent::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::RandomQuestContent>::resize(vec, index);
};

// Line 216: range 000000001480E0C4-000000001480E1BF
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::ReputationEntranceCond,data::ReputationEntranceCondType data::ReputationEntranceCond::*>(
        std::vector<data::ReputationEntranceCond> *vec,
        data::ReputationEntranceCondType *member)
{
  unsigned __int64 v2; // rcx
  const data::ReputationEntranceCond *v3; // rbx
  data::ReputationEntranceCond *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::ReputationEntranceCond>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::ReputationEntranceCond>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::ReputationEntranceCond>::operator[](vec, i);
        v4 = std::vector<data::ReputationEntranceCond>::operator[](vec, index);
        data::ReputationEntranceCond::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::ReputationEntranceCond>::resize(vec, index);
};

// Line 216: range 000000000CE4F358-000000000CE4F453
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::RewardItemConfig,unsigned int data::RewardItemConfig::*>(
        std::vector<data::RewardItemConfig> *vec,
        unsigned int *member)
{
  unsigned __int64 v2; // rcx
  const data::RewardItemConfig *v3; // rbx
  data::RewardItemConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::RewardItemConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::RewardItemConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::RewardItemConfig>::operator[](vec, i);
        v4 = std::vector<data::RewardItemConfig>::operator[](vec, index);
        data::RewardItemConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::RewardItemConfig>::resize(vec, index);
};

// Line 216: range 000000000CE51F28-000000000CE52023
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::RoutineActionContent,data::RoutineActionype data::RoutineActionContent::*>(
        std::vector<data::RoutineActionContent> *vec,
        data::RoutineActionype *member)
{
  unsigned __int64 v2; // rcx
  const data::RoutineActionContent *v3; // rbx
  data::RoutineActionContent *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::RoutineActionContent>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::RoutineActionContent>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::RoutineActionContent>::operator[](vec, i);
        v4 = std::vector<data::RoutineActionContent>::operator[](vec, index);
        data::RoutineActionContent::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::RoutineActionContent>::resize(vec, index);
};

// Line 216: range 000000000CE51CA6-000000000CE51DA1
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::RoutineCondContent,data::RoutineCondType data::RoutineCondContent::*>(
        std::vector<data::RoutineCondContent> *vec,
        data::RoutineCondType *member)
{
  unsigned __int64 v2; // rcx
  const data::RoutineCondContent *v3; // rbx
  data::RoutineCondContent *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::RoutineCondContent>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::RoutineCondContent>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::RoutineCondContent>::operator[](vec, i);
        v4 = std::vector<data::RoutineCondContent>::operator[](vec, index);
        data::RoutineCondContent::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::RoutineCondContent>::resize(vec, index);
};

// Line 216: range 000000000CE578E8-000000000CE579E3
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::ShopmallRecommendCond,data::ShopmallRecommendCondType data::ShopmallRecommendCond::*>(
        std::vector<data::ShopmallRecommendCond> *vec,
        data::ShopmallRecommendCondType *member)
{
  unsigned __int64 v2; // rcx
  const data::ShopmallRecommendCond *v3; // rbx
  data::ShopmallRecommendCond *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::ShopmallRecommendCond>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::ShopmallRecommendCond>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::ShopmallRecommendCond>::operator[](vec, i);
        v4 = std::vector<data::ShopmallRecommendCond>::operator[](vec, index);
        data::ShopmallRecommendCond::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::ShopmallRecommendCond>::resize(vec, index);
};

// Line 216: range 000000000CE5A7AE-000000000CE5A8A9
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::SignInCondConfig,data::SignInCondType data::SignInCondConfig::*>(
        std::vector<data::SignInCondConfig> *vec,
        data::SignInCondType *member)
{
  unsigned __int64 v2; // rcx
  const data::SignInCondConfig *v3; // rbx
  data::SignInCondConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::SignInCondConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::SignInCondConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::SignInCondConfig>::operator[](vec, i);
        v4 = std::vector<data::SignInCondConfig>::operator[](vec, index);
        data::SignInCondConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::SignInCondConfig>::resize(vec, index);
};

// Line 216: range 000000000CE5B194-000000000CE5B28F
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::SignInRewardItemConfig,unsigned int data::SignInRewardItemConfig::*>(
        std::vector<data::SignInRewardItemConfig> *vec,
        unsigned int *member)
{
  unsigned __int64 v2; // rcx
  const data::SignInRewardItemConfig *v3; // rbx
  data::SignInRewardItemConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::SignInRewardItemConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::SignInRewardItemConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::SignInRewardItemConfig>::operator[](vec, i);
        v4 = std::vector<data::SignInRewardItemConfig>::operator[](vec, index);
        data::SignInRewardItemConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::SignInRewardItemConfig>::resize(vec, index);
};

// Line 216: range 000000000CE5F0E8-000000000CE5F1E3
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::StrengthBaseScoreConfig,data::StrengthenPointType data::StrengthBaseScoreConfig::*>(
        std::vector<data::StrengthBaseScoreConfig> *vec,
        data::StrengthenPointType *member)
{
  unsigned __int64 v2; // rcx
  const data::StrengthBaseScoreConfig *v3; // rbx
  data::StrengthBaseScoreConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::StrengthBaseScoreConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::StrengthBaseScoreConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::StrengthBaseScoreConfig>::operator[](vec, i);
        v4 = std::vector<data::StrengthBaseScoreConfig>::operator[](vec, index);
        data::StrengthBaseScoreConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::StrengthBaseScoreConfig>::resize(vec, index);
};

// Line 216: range 000000000F048DD6-000000000F048ED1
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::TalkCond,data::QuestCondType data::TalkCond::*>(
        std::vector<data::TalkCond> *vec,
        data::QuestCondType *member)
{
  unsigned __int64 v2; // rcx
  const data::TalkCond *v3; // rbx
  data::TalkCond *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::TalkCond>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::TalkCond>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::TalkCond>::operator[](vec, i);
        v4 = std::vector<data::TalkCond>::operator[](vec, index);
        data::TalkCond::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::TalkCond>::resize(vec, index);
};

// Line 216: range 000000000CE64264-000000000CE6435F
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::TowerCondition,data::TowerCondType data::TowerCondition::*>(
        std::vector<data::TowerCondition> *vec,
        data::TowerCondType *member)
{
  unsigned __int64 v2; // rcx
  const data::TowerCondition *v3; // rbx
  data::TowerCondition *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::TowerCondition>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::TowerCondition>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::TowerCondition>::operator[](vec, i);
        v4 = std::vector<data::TowerCondition>::operator[](vec, index);
        data::TowerCondition::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::TowerCondition>::resize(vec, index);
};

// Line 216: range 000000000F058A40-000000000F058B3B
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::WatcherPredicateConfig,data::WatcherPredicateType data::WatcherPredicateConfig::*>(
        std::vector<data::WatcherPredicateConfig> *vec,
        data::WatcherPredicateType *member)
{
  unsigned __int64 v2; // rcx
  const data::WatcherPredicateConfig *v3; // rbx
  data::WatcherPredicateConfig *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::WatcherPredicateConfig>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::WatcherPredicateConfig>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::WatcherPredicateConfig>::operator[](vec, i);
        v4 = std::vector<data::WatcherPredicateConfig>::operator[](vec, index);
        data::WatcherPredicateConfig::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::WatcherPredicateConfig>::resize(vec, index);
};

// Line 216: range 000000000CE7516C-000000000CE75267
void __cdecl common::tools::MiscUtils::removeEmptyElement<data::WeaponProperty,data::GrowCurveType data::WeaponProperty::*>(
        std::vector<data::WeaponProperty> *vec,
        data::GrowCurveType *member)
{
  unsigned __int64 v2; // rcx
  const data::WeaponProperty *v3; // rbx
  data::WeaponProperty *v4; // rax
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]

  index = 0;
  for ( i = 0; i < std::vector<data::WeaponProperty>::size(vec); ++i )
  {
    v2 = (unsigned __int64)member + (_QWORD)std::vector<data::WeaponProperty>::operator[](vec, i);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    if ( *(_DWORD *)v2 )
    {
      if ( index != i )
      {
        v3 = std::vector<data::WeaponProperty>::operator[](vec, i);
        v4 = std::vector<data::WeaponProperty>::operator[](vec, index);
        data::WeaponProperty::operator=(v4, v3);
      }
      ++index;
    }
  }
  std::vector<data::WeaponProperty>::resize(vec, index);
};

// Line 282: range 000000000CE617C8-000000000CE61A72
std::vector<unsigned int> *__cdecl common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>>(
        std::vector<unsigned int> *retstr,
        const std::unordered_map<unsigned int,data::TowerScheduleExcelConfig> *map)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<unsigned int>::size_type v5; // rsi
  unsigned int *M_current; // rbx
  std::vector<unsigned int>::iterator v7; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false>::reference v10; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::TowerScheduleExcelConfig> >::type *k; // [rsp+20h] [rbp-90h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:502 64 8 13 __for_end:502";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false>::__node_type *)common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::vector<unsigned int>::vector(retstr);
  v5 = std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>::size(map);
  std::vector<unsigned int>::reserve(retstr, v5);
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v5);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>::begin(map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v5);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>::end(map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,data::TowerScheduleExcelConfig>(v10);
    std::get<1ul,unsigned int const,data::TowerScheduleExcelConfig>(v10);
    std::vector<unsigned int>::push_back(retstr, k);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  M_current = std::vector<unsigned int>::end(retstr)._M_current;
  v7._M_current = std::vector<unsigned int>::begin(retstr)._M_current;
  std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
    v7,
    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 345: range 00000000128F6A74-00000000128F6BDA
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>,unsigned int>(
        std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                                   container,
                                                                                                   value);
  result = std::__detail::operator!=<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 397: range 000000000CE6A322-000000000CE6A488
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig>,unsigned int>(
        std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityTrialAvatarConfig>::find(
                                                                                               container,
                                                                                               value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::ActivityTrialAvatarConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityTrialAvatarConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityTrialAvatarConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 448: range 00000000147FC636-00000000147FC7C3
bool __cdecl common::tools::MiscUtils::isContains<data::FightPropType>(
        const std::vector<data::FightPropType> *vec,
        const data::FightPropType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const data::FightPropType *M_current; // r14
  const data::FightPropType *v6; // rcx
  bool result; // al
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<data::FightPropType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::vector<data::FightPropType>::const_iterator *)(v2 + 64) = std::vector<data::FightPropType>::end(vec);
  M_current = std::vector<data::FightPropType>::end(vec)._M_current;
  v6 = std::vector<data::FightPropType>::begin(vec)._M_current;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(__gnu_cxx::__normal_iterator<const data::FightPropType*,std::vector<data::FightPropType> > *)(v2 + 32) = std::find<__gnu_cxx::__normal_iterator<data::FightPropType const*,std::vector<data::FightPropType>>,data::FightPropType>((__gnu_cxx::__normal_iterator<const data::FightPropType*,std::vector<data::FightPropType> >)v6, (__gnu_cxx::__normal_iterator<const data::FightPropType*,std::vector<data::FightPropType> >)M_current, value);
  result = __gnu_cxx::operator!=<data::FightPropType const*,std::vector<data::FightPropType>>(
             (const __gnu_cxx::__normal_iterator<const data::FightPropType*,std::vector<data::FightPropType> > *)(v2 + 32),
             (const __gnu_cxx::__normal_iterator<const data::FightPropType*,std::vector<data::FightPropType> > *)(v2 + 64));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 448: range 000000000E1D5876-000000000E1D5A03
bool __cdecl common::tools::MiscUtils::isContains<data::GCGSupportType>(
        const std::vector<data::GCGSupportType> *vec,
        const data::GCGSupportType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const data::GCGSupportType *M_current; // r14
  const data::GCGSupportType *v6; // rcx
  bool result; // al
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<data::GCGSupportType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::vector<data::GCGSupportType>::const_iterator *)(v2 + 64) = std::vector<data::GCGSupportType>::end(vec);
  M_current = std::vector<data::GCGSupportType>::end(vec)._M_current;
  v6 = std::vector<data::GCGSupportType>::begin(vec)._M_current;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(__gnu_cxx::__normal_iterator<const data::GCGSupportType*,std::vector<data::GCGSupportType> > *)(v2 + 32) = std::find<__gnu_cxx::__normal_iterator<data::GCGSupportType const*,std::vector<data::GCGSupportType>>,data::GCGSupportType>((__gnu_cxx::__normal_iterator<const data::GCGSupportType*,std::vector<data::GCGSupportType> >)v6, (__gnu_cxx::__normal_iterator<const data::GCGSupportType*,std::vector<data::GCGSupportType> >)M_current, value);
  result = __gnu_cxx::operator!=<data::GCGSupportType const*,std::vector<data::GCGSupportType>>(
             (const __gnu_cxx::__normal_iterator<const data::GCGSupportType*,std::vector<data::GCGSupportType> > *)(v2 + 32),
             (const __gnu_cxx::__normal_iterator<const data::GCGSupportType*,std::vector<data::GCGSupportType> > *)(v2 + 64));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 448: range 000000000CE5D252-000000000CE5D3DF
bool __cdecl common::tools::MiscUtils::isContains<std::string>(
        const std::vector<std::string> *vec,
        const std::string *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::string *M_current; // r14
  const std::string *v6; // rcx
  bool result; // al
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::string>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::vector<std::string>::const_iterator *)(v2 + 64) = std::vector<std::string>::end(vec);
  M_current = std::vector<std::string>::end(vec)._M_current;
  v6 = std::vector<std::string>::begin(vec)._M_current;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 32) = std::find<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>,std::string>(
                                                                                               (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >)v6,
                                                                                               (__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >)M_current,
                                                                                               value);
  result = __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
             (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 32),
             (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 64));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 448: range 000000000CE6A74E-000000000CE6A8DB
bool __cdecl common::tools::MiscUtils::isContains<unsigned int>(
        const std::vector<unsigned int> *vec,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *M_current; // r14
  const unsigned int *v6; // rcx
  bool result; // al
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::vector<unsigned int>::const_iterator *)(v2 + 64) = std::vector<unsigned int>::end(vec);
  M_current = std::vector<unsigned int>::end(vec)._M_current;
  v6 = std::vector<unsigned int>::begin(vec)._M_current;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 32) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                 (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v6,
                                                                                                 (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                 value);
  result = __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
             (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 32),
             (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 64));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 454: range 000000000F7CE68E-000000000F7CE81B
bool __cdecl common::tools::MiscUtils::isContains<data::CombatPropertyIndex>(
        std::vector<data::CombatPropertyIndex> *vec,
        const data::CombatPropertyIndex *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::CombatPropertyIndex *M_current; // r14
  data::CombatPropertyIndex *v6; // rcx
  bool result; // al
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<data::CombatPropertyIndex>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::vector<data::CombatPropertyIndex>::iterator *)(v2 + 64) = std::vector<data::CombatPropertyIndex>::end(vec);
  M_current = std::vector<data::CombatPropertyIndex>::end(vec)._M_current;
  v6 = std::vector<data::CombatPropertyIndex>::begin(vec)._M_current;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(__gnu_cxx::__normal_iterator<data::CombatPropertyIndex*,std::vector<data::CombatPropertyIndex> > *)(v2 + 32) = std::find<__gnu_cxx::__normal_iterator<data::CombatPropertyIndex *,std::vector<data::CombatPropertyIndex>>,data::CombatPropertyIndex>((__gnu_cxx::__normal_iterator<data::CombatPropertyIndex*,std::vector<data::CombatPropertyIndex> >)v6, (__gnu_cxx::__normal_iterator<data::CombatPropertyIndex*,std::vector<data::CombatPropertyIndex> >)M_current, value);
  result = __gnu_cxx::operator!=<data::CombatPropertyIndex *,std::vector<data::CombatPropertyIndex>>(
             (const __gnu_cxx::__normal_iterator<data::CombatPropertyIndex*,std::vector<data::CombatPropertyIndex> > *)(v2 + 32),
             (const __gnu_cxx::__normal_iterator<data::CombatPropertyIndex*,std::vector<data::CombatPropertyIndex> > *)(v2 + 64));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 454: range 000000000F7D9720-000000000F7D98AD
bool __cdecl common::tools::MiscUtils::isContains<unsigned int>(
        std::vector<unsigned int> *vec,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int *M_current; // r14
  unsigned int *v6; // rcx
  bool result; // al
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::vector<unsigned int>::iterator *)(v2 + 64) = std::vector<unsigned int>::end(vec);
  M_current = std::vector<unsigned int>::end(vec)._M_current;
  v6 = std::vector<unsigned int>::begin(vec)._M_current;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 32) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                                                                                           (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v6,
                                                                                           (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                           value);
  result = __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
             (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 32),
             (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 64));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000147CDBB8-00000000147CDD1E
bool __cdecl common::tools::MiscUtils::isContains<std::map<data::ItemLimitType,std::pair<std::string,std::string>> const,data::ItemLimitType>(
        const std::map<data::ItemLimitType,std::pair<std::string,std::string >> *container,
        const data::ItemLimitType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<data::ItemLimitType,std::pair<std::string,std::string>> const,data::ItemLimitType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::map<data::ItemLimitType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::ItemLimitType,std::pair<std::string,std::string>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::map<data::ItemLimitType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 32) = std::map<data::ItemLimitType,std::pair<std::string,std::string>>::find(container, value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::ItemLimitType,std::pair<std::string,std::string > > >::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<std::pair<const data::ItemLimitType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000135F062A-00000000135F0790
bool __cdecl common::tools::MiscUtils::isContains<std::map<data::NewActivityType,std::pair<std::string,std::string>> const,data::NewActivityType>(
        const std::map<data::NewActivityType,std::pair<std::string,std::string >> *container,
        const data::NewActivityType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<data::NewActivityType,std::pair<std::string,std::string>> const,data::NewActivityType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::map<data::NewActivityType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 64) = std::map<data::NewActivityType,std::pair<std::string,std::string>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::map<data::NewActivityType,std::pair<std::string,std::string >>::const_iterator *)(v2 + 32) = std::map<data::NewActivityType,std::pair<std::string,std::string>>::find(container, value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::NewActivityType,std::pair<std::string,std::string > > >::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<std::pair<const data::NewActivityType,std::pair<std::string,std::string > > >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012ED83E6-0000000012ED854C
bool __cdecl common::tools::MiscUtils::isContains<std::map<data::QualityType,float> const,data::QualityType>(
        const std::map<data::QualityType,float> *container,
        const data::QualityType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<data::QualityType,float> const,data::QualityType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::map<data::QualityType,float>::const_iterator *)(v2 + 64) = std::map<data::QualityType,float>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::map<data::QualityType,float>::const_iterator *)(v2 + 32) = std::map<data::QualityType,float>::find(
                                                                      container,
                                                                      value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const data::QualityType,float> >::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<std::pair<const data::QualityType,float> >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012F4CB26-0000000012F4CC8C
bool __cdecl common::tools::MiscUtils::isContains<std::map<data::TalentFilterCond,data::ElementType>,data::TalentFilterCond>(
        std::map<data::TalentFilterCond,data::ElementType> *container,
        const data::TalentFilterCond *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<data::TalentFilterCond,data::ElementType>,data::TalentFilterCond>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::map<data::TalentFilterCond,data::ElementType>::iterator *)(v2 + 64) = std::map<data::TalentFilterCond,data::ElementType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::map<data::TalentFilterCond,data::ElementType>::iterator *)(v2 + 32) = std::map<data::TalentFilterCond,data::ElementType>::find(
                                                                                 container,
                                                                                 value);
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<const data::TalentFilterCond,data::ElementType> >::_Self *)(v2 + 32),
             (const std::_Rb_tree_iterator<std::pair<const data::TalentFilterCond,data::ElementType> >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012F49DDC-0000000012F49F42
bool __cdecl common::tools::MiscUtils::isContains<std::map<std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig> const,std::pair<unsigned int,unsigned int>>(
        const std::map<std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig> *container,
        const std::pair<unsigned int,unsigned int> *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig> const,std::pair<unsigned int,unsigned int>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::map<std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig>::const_iterator *)(v2 + 64) = std::map<std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::map<std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig>::const_iterator *)(v2 + 32) = std::map<std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig>::find(container, value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig> >::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,data::AvatarPromoteExcelConfig> >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000CE76852-000000000CE769B8
bool __cdecl common::tools::MiscUtils::isContains<std::map<std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig> const,std::pair<unsigned int,unsigned int>>(
        const std::map<std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig> *container,
        const std::pair<unsigned int,unsigned int> *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig> const,std::pair<unsigned int,unsigned int>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::map<std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig>::const_iterator *)(v2 + 64) = std::map<std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::map<std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig>::const_iterator *)(v2 + 32) = std::map<std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig>::find(container, value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig> >::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,data::WeaponPromoteExcelConfig> >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000014808CB8-0000000014808E1E
bool __cdecl common::tools::MiscUtils::isContains<std::map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>> const,std::pair<unsigned int,unsigned int>>(
        const std::map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>> *container,
        const std::pair<unsigned int,unsigned int> *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>> const,std::pair<unsigned int,unsigned int>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>>::const_iterator *)(v2 + 32) = std::map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>>::find(container, value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::set<unsigned int> > >::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::set<unsigned int> > >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7DA8DA-000000000F7DAA40
bool __cdecl common::tools::MiscUtils::isContains<std::map<std::string,unsigned int>,std::string>(
        std::map<std::string,unsigned int> *container,
        const std::string *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<std::string,unsigned int>,std::string>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::map<std::string,unsigned int>::iterator *)(v2 + 64) = std::map<std::string,unsigned int>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::map<std::string,unsigned int>::iterator *)(v2 + 32) = std::map<std::string,unsigned int>::find(
                                                                 container,
                                                                 value);
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Self *)(v2 + 32),
             (const std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012F0B5B4-0000000012F0B71A
bool __cdecl common::tools::MiscUtils::isContains<std::map<unsigned int,MonsterScriptConfig>,unsigned int>(
        std::map<unsigned int,MonsterScriptConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<unsigned int,MonsterScriptConfig>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::map<unsigned int,MonsterScriptConfig>::iterator *)(v2 + 64) = std::map<unsigned int,MonsterScriptConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::map<unsigned int,MonsterScriptConfig>::iterator *)(v2 + 32) = std::map<unsigned int,MonsterScriptConfig>::find(
                                                                         container,
                                                                         value);
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::_Self *)(v2 + 32),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,MonsterScriptConfig> >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000CECB4B8-000000000CECB61E
bool __cdecl common::tools::MiscUtils::isContains<std::map<unsigned int,SuiteDiskGadgetConfig> const,unsigned int>(
        const std::map<unsigned int,SuiteDiskGadgetConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<unsigned int,SuiteDiskGadgetConfig> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::map<unsigned int,SuiteDiskGadgetConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,SuiteDiskGadgetConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::map<unsigned int,SuiteDiskGadgetConfig>::const_iterator *)(v2 + 32) = std::map<unsigned int,SuiteDiskGadgetConfig>::find(
                                                                                 container,
                                                                                 value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SuiteDiskGadgetConfig> >::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SuiteDiskGadgetConfig> >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012EDAB92-0000000012EDACF8
bool __cdecl common::tools::MiscUtils::isContains<std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> const,unsigned int>(
        const std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::const_iterator *)(v2 + 32) = std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>::find(
                                                                                                   container,
                                                                                                   value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig> >::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::ActivityArenaChallengeExcelConfig> >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000CE483F6-000000000CE4855C
bool __cdecl common::tools::MiscUtils::isContains<std::map<unsigned int,float> const,unsigned int>(
        const std::map<unsigned int,float> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<unsigned int,float> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::map<unsigned int,float>::const_iterator *)(v2 + 64) = std::map<unsigned int,float>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::map<unsigned int,float>::const_iterator *)(v2 + 32) = std::map<unsigned int,float>::find(container, value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012F0B0BE-0000000012F0B224
bool __cdecl common::tools::MiscUtils::isContains<std::map<unsigned int,proto::FungusTrainingPoolPreviewDetail>,unsigned int>(
        std::map<unsigned int,proto::FungusTrainingPoolPreviewDetail> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<unsigned int,proto::FungusTrainingPoolPreviewDetail>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::map<unsigned int,proto::FungusTrainingPoolPreviewDetail>::iterator *)(v2 + 64) = std::map<unsigned int,proto::FungusTrainingPoolPreviewDetail>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::map<unsigned int,proto::FungusTrainingPoolPreviewDetail>::iterator *)(v2 + 32) = std::map<unsigned int,proto::FungusTrainingPoolPreviewDetail>::find(
                                                                                            container,
                                                                                            value);
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::FungusTrainingPoolPreviewDetail> >::_Self *)(v2 + 32),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::FungusTrainingPoolPreviewDetail> >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000CE798C0-000000000CE79AB9
bool __cdecl common::tools::MiscUtils::isContains<std::map<unsigned int,std::map<unsigned int,float>> const,data::ClimateType>(
        const std::map<unsigned int,std::map<unsigned int,float>> *container,
        const data::ClimateType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rsi
  data::ClimateType v6; // ecx
  char v7; // al
  bool result; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<unsigned int,std::map<unsigned int,float>> const,data::ClimateType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, value);
  *(std::map<unsigned int,std::map<unsigned int,float>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::map<unsigned int,float>>::end(container);
  v5 = ((unsigned __int8)value & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(value);
  }
  v6 = *value;
  v7 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && v7 <= 3 )
    __asan_report_store4(v2 + 48, v5);
  *(_DWORD *)(v2 + 48) = v6;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v5);
  *(std::map<unsigned int,std::map<unsigned int,float>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,float>>::find(
                                                                                        container,
                                                                                        (const std::map<unsigned int,std::map<unsigned int,float>>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,float> > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,float> > >::_Self *)(v2 + 96));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 460: range 00000000128F460E-00000000128F4774
bool __cdecl common::tools::MiscUtils::isContains<std::map<unsigned int,std::pair<unsigned int,unsigned int>>,unsigned int>(
        std::map<unsigned int,std::pair<unsigned int,unsigned int>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<unsigned int,std::pair<unsigned int,unsigned int>>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v2 + 64) = std::map<unsigned int,std::pair<unsigned int,unsigned int>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v2 + 32) = std::map<unsigned int,std::pair<unsigned int,unsigned int>>::find(
                                                                                          container,
                                                                                          value);
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::_Self *)(v2 + 32),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000CE7815E-000000000CE782C4
bool __cdecl common::tools::MiscUtils::isContains<std::map<unsigned int,std::set<unsigned int>> const,unsigned int>(
        const std::map<unsigned int,std::set<unsigned int>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<unsigned int,std::set<unsigned int>> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::set<unsigned int>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 32) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                  container,
                                                                                  value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012EE8AE0-0000000012EE8C46
bool __cdecl common::tools::MiscUtils::isContains<std::map<unsigned int,std::set<unsigned int>>,unsigned int>(
        std::map<unsigned int,std::set<unsigned int>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<unsigned int,std::set<unsigned int>>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 64) = std::map<unsigned int,std::set<unsigned int>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 32) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                            container,
                                                                            value);
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 32),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012EDF24E-0000000012EDF3B4
bool __cdecl common::tools::MiscUtils::isContains<std::map<unsigned int,std::unordered_set<unsigned int>>,unsigned int>(
        std::map<unsigned int,std::unordered_set<unsigned int>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<unsigned int,std::unordered_set<unsigned int>>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::map<unsigned int,std::unordered_set<unsigned int>>::iterator *)(v2 + 64) = std::map<unsigned int,std::unordered_set<unsigned int>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::map<unsigned int,std::unordered_set<unsigned int>>::iterator *)(v2 + 32) = std::map<unsigned int,std::unordered_set<unsigned int>>::find(
                                                                                      container,
                                                                                      value);
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > >::_Self *)(v2 + 32),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> > >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012EDF3B6-0000000012EDF51C
bool __cdecl common::tools::MiscUtils::isContains<std::map<unsigned int,std::vector<unsigned int>>,unsigned int>(
        std::map<unsigned int,std::vector<unsigned int>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<unsigned int,std::vector<unsigned int>>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 64) = std::map<unsigned int,std::vector<unsigned int>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 32) = std::map<unsigned int,std::vector<unsigned int>>::find(
                                                                               container,
                                                                               value);
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 32),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000CE4944E-000000000CE495B4
bool __cdecl common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int> const,unsigned int>(
        const std::map<unsigned int,unsigned int> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 32) = std::map<unsigned int,unsigned int>::find(
                                                                        container,
                                                                        value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000CEC95FC-000000000CEC9762
bool __cdecl common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
        std::map<unsigned int,unsigned int> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 32) = std::map<unsigned int,unsigned int>::find(
                                                                  container,
                                                                  value);
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 32),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7BF998-000000000F7BFAFE
bool __cdecl common::tools::MiscUtils::isContains<std::set<Coordinate>,Coordinate>(
        std::set<Coordinate> *container,
        const Coordinate *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::set<Coordinate>,Coordinate>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::set<Coordinate>::iterator *)(v2 + 64) = std::set<Coordinate>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::set<Coordinate>::iterator *)(v2 + 32) = std::set<Coordinate>::find(container, value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<Coordinate>::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<Coordinate>::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012EDDB2A-0000000012EDDC90
bool __cdecl common::tools::MiscUtils::isContains<std::set<data::BartenderCupType>,data::BartenderCupType>(
        std::set<data::BartenderCupType> *container,
        const data::BartenderCupType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::set<data::BartenderCupType>,data::BartenderCupType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::set<data::BartenderCupType>::iterator *)(v2 + 64) = std::set<data::BartenderCupType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::set<data::BartenderCupType>::iterator *)(v2 + 32) = std::set<data::BartenderCupType>::find(container, value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<data::BartenderCupType>::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<data::BartenderCupType>::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7EB15E-000000000F7EB2C4
bool __cdecl common::tools::MiscUtils::isContains<std::set<data::EventType> const,data::EventType>(
        const std::set<data::EventType> *container,
        const data::EventType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::set<data::EventType> const,data::EventType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::set<data::EventType>::iterator *)(v2 + 64) = std::set<data::EventType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::set<data::EventType>::const_iterator *)(v2 + 32) = std::set<data::EventType>::find(container, value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<data::EventType>::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<data::EventType>::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012F4AB3C-0000000012F4ACA2
bool __cdecl common::tools::MiscUtils::isContains<std::set<data::FightPropType> const,data::FightPropType>(
        const std::set<data::FightPropType> *container,
        const data::FightPropType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::set<data::FightPropType> const,data::FightPropType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::set<data::FightPropType>::iterator *)(v2 + 64) = std::set<data::FightPropType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::set<data::FightPropType>::const_iterator *)(v2 + 32) = std::set<data::FightPropType>::find(container, value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<data::FightPropType>::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<data::FightPropType>::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000147BAFEE-00000000147BB154
bool __cdecl common::tools::MiscUtils::isContains<std::set<data::GCGTagType> const,data::GCGTagType>(
        const std::set<data::GCGTagType> *container,
        const data::GCGTagType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::set<data::GCGTagType> const,data::GCGTagType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::set<data::GCGTagType>::iterator *)(v2 + 64) = std::set<data::GCGTagType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::set<data::GCGTagType>::const_iterator *)(v2 + 32) = std::set<data::GCGTagType>::find(container, value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<data::GCGTagType>::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<data::GCGTagType>::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7B3108-000000000F7B326E
bool __cdecl common::tools::MiscUtils::isContains<std::set<data::GCGTriggerType>,data::GCGTriggerType>(
        std::set<data::GCGTriggerType> *container,
        const data::GCGTriggerType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::set<data::GCGTriggerType>,data::GCGTriggerType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::set<data::GCGTriggerType>::iterator *)(v2 + 64) = std::set<data::GCGTriggerType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::set<data::GCGTriggerType>::iterator *)(v2 + 32) = std::set<data::GCGTriggerType>::find(container, value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<data::GCGTriggerType>::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<data::GCGTriggerType>::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000147FAAFA-00000000147FAC60
bool __cdecl common::tools::MiscUtils::isContains<std::set<data::MaterialType> const,data::MaterialType>(
        const std::set<data::MaterialType> *container,
        const data::MaterialType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::set<data::MaterialType> const,data::MaterialType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::set<data::MaterialType>::iterator *)(v2 + 64) = std::set<data::MaterialType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::set<data::MaterialType>::const_iterator *)(v2 + 32) = std::set<data::MaterialType>::find(container, value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<data::MaterialType>::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<data::MaterialType>::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7C0640-000000000F7C07A6
bool __cdecl common::tools::MiscUtils::isContains<std::set<int> const,int>(
        const std::set<int> *container,
        const int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::set<int> const,int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::set<int>::iterator *)(v2 + 64) = std::set<int>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::set<int>::const_iterator *)(v2 + 32) = std::set<int>::find(container, value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<int>::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<int>::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000013C802E4-0000000013C80512
bool __cdecl common::tools::MiscUtils::isContains<std::set<std::pair<unsigned int,std::string>>,std::pair<data::DropLimitType,std::string>>(
        std::set<std::pair<unsigned int,std::string >> *container,
        const std::pair<data::DropLimitType,std::string > *value)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  bool v5; // r14
  bool result; // al
  char v7[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 8 9 <unknown> 80 8 9 <unknown> 112 40 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::set<std::pair<unsigned int,std::string>>,std::pair<data::DropLimitType,std::string>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, value);
  *(std::set<std::pair<unsigned int,std::string >>::iterator *)(v2 + 80) = std::set<std::pair<unsigned int,std::string>>::end(container);
  std::pair<unsigned int,std::string>::pair<data::DropLimitType,std::string,true>(
    (std::pair<unsigned int,std::string > *const)(v2 + 112),
    value);
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, value);
  *(std::set<std::pair<unsigned int,std::string >>::iterator *)(v2 + 48) = std::set<std::pair<unsigned int,std::string>>::find(
                                                                             container,
                                                                             (const std::set<std::pair<unsigned int,std::string >>::key_type *)(v2 + 112));
  v5 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int,std::string > >::_Self *)(v2 + 48),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int,std::string > >::_Self *)(v2 + 80));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  std::pair<unsigned int,std::string>::~pair((std::pair<unsigned int,std::string > *const)(v2 + 112));
  result = v5;
  if ( v7 == (char *)v2 )
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

// Line 460: range 000000000F7FAC4E-000000000F7FADB4
bool __cdecl common::tools::MiscUtils::isContains<std::set<std::shared_ptr<LuaASTNode>>,std::shared_ptr<LuaASTNode>>(
        std::set<std::shared_ptr<LuaASTNode>> *container,
        const std::shared_ptr<LuaASTNode> *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::set<std::shared_ptr<LuaASTNode>>,std::shared_ptr<LuaASTNode>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::set<std::shared_ptr<LuaASTNode>>::iterator *)(v2 + 64) = std::set<std::shared_ptr<LuaASTNode>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::set<std::shared_ptr<LuaASTNode>>::iterator *)(v2 + 32) = std::set<std::shared_ptr<LuaASTNode>>::find(
                                                                    container,
                                                                    value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::shared_ptr<LuaASTNode> >::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<std::shared_ptr<LuaASTNode> >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000C660F1A-000000000C660FDA
bool __cdecl common::tools::MiscUtils::isContains<std::set<std::string> const,char [8]>(
        const std::set<std::string> *container,
        const char (*value)[8])
{
  bool v2; // bl
  std::allocator<char> __a; // [rsp+1Fh] [rbp-41h] BYREF
  std::_Rb_tree_const_iterator<std::string >::_Self v5; // [rsp+20h] [rbp-40h] BYREF
  std::_Rb_tree_const_iterator<std::string >::_Self __y; // [rsp+28h] [rbp-38h] BYREF
  std::string __x; // [rsp+30h] [rbp-30h] BYREF

  __y._M_node = std::set<std::string>::end(container)._M_node;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&__x, (const char *)value, &__a);
  v5._M_node = std::set<std::string>::find(container, &__x)._M_node;
  v2 = std::operator!=(&v5, &__y);
  std::string::~string(&__x);
  std::allocator<char>::~allocator(&__a);
  return v2;
};

// Line 460: range 000000000F7DBEA4-000000000F7DC00A
bool __cdecl common::tools::MiscUtils::isContains<std::set<std::string>,std::string>(
        std::set<std::string> *container,
        const std::string *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::set<std::string>,std::string>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::set<std::string>::iterator *)(v2 + 64) = std::set<std::string>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::set<std::string>::iterator *)(v2 + 32) = std::set<std::string>::find(container, value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<std::string >::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000C65828E-000000000C6582D9
bool __cdecl common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
        const std::set<unsigned int> *container,
        const unsigned int *value)
{
  std::_Rb_tree_const_iterator<unsigned int>::_Self __x; // [rsp+10h] [rbp-10h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+18h] [rbp-8h] BYREF

  __y._M_node = std::set<unsigned int>::end(container)._M_node;
  __x._M_node = std::set<unsigned int>::find(container, value)._M_node;
  return std::operator!=(&__x, &__y);
};

// Line 460: range 000000001480B0D2-000000001480B2CC
bool __cdecl common::tools::MiscUtils::isContains<std::set<unsigned int>,int>(
        std::set<unsigned int> *container,
        const int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rsi
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::set<unsigned int>,int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, value);
  *(std::set<unsigned int>::iterator *)(v2 + 96) = std::set<unsigned int>::end(container);
  if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(value);
  }
  v5 = *(unsigned int *)value;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v5);
  *(_DWORD *)(v2 + 48) = v5;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v5);
  *(std::set<unsigned int>::iterator *)(v2 + 64) = std::set<unsigned int>::find(
                                                     container,
                                                     (const std::set<unsigned int>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 96));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 460: range 000000000CE531F0-000000000CE53356
bool __cdecl common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
        std::set<unsigned int> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::set<unsigned int>::iterator *)(v2 + 64) = std::set<unsigned int>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::set<unsigned int>::iterator *)(v2 + 32) = std::set<unsigned int>::find(container, value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000147CDF6A-00000000147CE0D0
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<ItemIndexKey,unsigned int> const,ItemIndexKey>(
        const std::unordered_map<ItemIndexKey,unsigned int> *container,
        const ItemIndexKey *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<ItemIndexKey,unsigned int> const,ItemIndexKey>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<ItemIndexKey,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<ItemIndexKey,unsigned int>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<ItemIndexKey,unsigned int>::const_iterator *)(v2 + 32) = std::unordered_map<ItemIndexKey,unsigned int>::find(
                                                                                  container,
                                                                                  value);
  result = std::__detail::operator!=<std::pair<ItemIndexKey const,unsigned int>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<const ItemIndexKey,unsigned int>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const ItemIndexKey,unsigned int>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012F0F368-0000000012F0F4CE
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,std::unordered_set<unsigned int>> const,data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>(
        const std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,std::unordered_set<unsigned int>> *container,
        const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,std::unordered_set<unsigned int>> const,data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,std::unordered_set<unsigned int>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 32) = std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,std::unordered_set<unsigned int>>::find(container, value);
  result = std::__detail::operator!=<std::pair<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY const,std::unordered_set<unsigned int>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,std::unordered_set<unsigned int> >,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,std::unordered_set<unsigned int> >,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012F0EB6E-0000000012F0ECD4
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> const,data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>(
        const std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> *container,
        const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int> const,data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::const_iterator *)(v2 + 32) = std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::find(container, value);
  result = std::__detail::operator!=<std::pair<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY const,unsigned int>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000147CDE02-00000000147CDF68
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig> const,data::ItemLimitType>(
        const std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig> *container,
        const data::ItemLimitType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig> const,data::ItemLimitType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::find(container, value);
  result = std::__detail::operator!=<std::pair<data::ItemLimitType const,data::OutputControlLimitExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000147FB99C-00000000147FBB02
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<data::MiracleTag,unsigned int> const,data::MiracleTag>(
        const std::unordered_map<data::MiracleTag,unsigned int> *container,
        const data::MiracleTag *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<data::MiracleTag,unsigned int> const,data::MiracleTag>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<data::MiracleTag,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<data::MiracleTag,unsigned int>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<data::MiracleTag,unsigned int>::const_iterator *)(v2 + 32) = std::unordered_map<data::MiracleTag,unsigned int>::find(
                                                                                      container,
                                                                                      value);
  result = std::__detail::operator!=<std::pair<data::MiracleTag const,unsigned int>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<const data::MiracleTag,unsigned int>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const data::MiracleTag,unsigned int>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000135EFE76-00000000135EFFDC
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<data::NewActivityType,data::NewActivityItemLimitExcelConfig>,data::NewActivityType>(
        std::unordered_map<data::NewActivityType,data::NewActivityItemLimitExcelConfig> *container,
        const data::NewActivityType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<data::NewActivityType,data::NewActivityItemLimitExcelConfig>,data::NewActivityType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<data::NewActivityType,data::NewActivityItemLimitExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<data::NewActivityType,data::NewActivityItemLimitExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<data::NewActivityType,data::NewActivityItemLimitExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<data::NewActivityType,data::NewActivityItemLimitExcelConfig>::find(container, value);
  result = std::__detail::operator!=<std::pair<data::NewActivityType const,data::NewActivityItemLimitExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<const data::NewActivityType,data::NewActivityItemLimitExcelConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const data::NewActivityType,data::NewActivityItemLimitExcelConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012F381C0-0000000012F38326
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<data::RogueDiaryResourceType,unsigned int>,data::RogueDiaryResourceType>(
        std::unordered_map<data::RogueDiaryResourceType,unsigned int> *container,
        const data::RogueDiaryResourceType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<data::RogueDiaryResourceType,unsigned int>,data::RogueDiaryResourceType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<data::RogueDiaryResourceType,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<data::RogueDiaryResourceType,unsigned int>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<data::RogueDiaryResourceType,unsigned int>::iterator *)(v2 + 32) = std::unordered_map<data::RogueDiaryResourceType,unsigned int>::find(
                                                                                            container,
                                                                                            value);
  result = std::__detail::operator!=<std::pair<data::RogueDiaryResourceType const,unsigned int>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<const data::RogueDiaryResourceType,unsigned int>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const data::RogueDiaryResourceType,unsigned int>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000128F6190-00000000128F62F6
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<data::RoguelikeCardType,unsigned int>,data::RoguelikeCardType>(
        std::unordered_map<data::RoguelikeCardType,unsigned int> *container,
        const data::RoguelikeCardType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<data::RoguelikeCardType,unsigned int>,data::RoguelikeCardType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<data::RoguelikeCardType,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<data::RoguelikeCardType,unsigned int>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<data::RoguelikeCardType,unsigned int>::iterator *)(v2 + 32) = std::unordered_map<data::RoguelikeCardType,unsigned int>::find(
                                                                                       container,
                                                                                       value);
  result = std::__detail::operator!=<std::pair<data::RoguelikeCardType const,unsigned int>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<const data::RoguelikeCardType,unsigned int>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const data::RoguelikeCardType,unsigned int>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7BBAB0-000000000F7BBCAA
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<int,ConfigAbilityHashMap>,unsigned int>(
        std::unordered_map<int,ConfigAbilityHashMap> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rsi
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<int,ConfigAbilityHashMap>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, value);
  *(std::unordered_map<int,ConfigAbilityHashMap>::iterator *)(v2 + 96) = std::unordered_map<int,ConfigAbilityHashMap>::end(container);
  if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(value);
  }
  v5 = *value;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v5);
  *(_DWORD *)(v2 + 48) = v5;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v5);
  *(std::unordered_map<int,ConfigAbilityHashMap>::iterator *)(v2 + 64) = std::unordered_map<int,ConfigAbilityHashMap>::find(
                                                                           container,
                                                                           (const std::unordered_map<int,ConfigAbilityHashMap>::key_type *)(v2 + 48));
  result = std::__detail::operator!=<std::pair<int const,ConfigAbilityHashMap>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<int const,ConfigAbilityHashMap>,false> *)(v2 + 64),
             (const std::__detail::_Node_iterator_base<std::pair<int const,ConfigAbilityHashMap>,false> *)(v2 + 96));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 460: range 000000000F7C92F0-000000000F7C9456
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<std::string,data::ConfigAbilityPropertyEntry>,std::string>(
        std::unordered_map<std::string,data::ConfigAbilityPropertyEntry> *container,
        const std::string *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<std::string,data::ConfigAbilityPropertyEntry>,std::string>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<std::string,data::ConfigAbilityPropertyEntry>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::ConfigAbilityPropertyEntry>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<std::string,data::ConfigAbilityPropertyEntry>::iterator *)(v2 + 32) = std::unordered_map<std::string,data::ConfigAbilityPropertyEntry>::find(
                                                                                               container,
                                                                                               value);
  result = std::__detail::operator!=<std::pair<std::string const,data::ConfigAbilityPropertyEntry>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigAbilityPropertyEntry>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigAbilityPropertyEntry>,true> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7D626C-000000000F7D63D2
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int> const,std::string>(
        const std::unordered_map<std::string,unsigned int> *container,
        const std::string *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int> const,std::string>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<std::string,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,unsigned int>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<std::string,unsigned int>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,unsigned int>::find(
                                                                                 container,
                                                                                 value);
  result = std::__detail::operator!=<std::pair<std::string const,unsigned int>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7D6068-000000000F7D61CE
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int>,std::string>(
        std::unordered_map<std::string,unsigned int> *container,
        const std::string *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int>,std::string>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<std::string,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<std::string,unsigned int>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<std::string,unsigned int>::iterator *)(v2 + 32) = std::unordered_map<std::string,unsigned int>::find(
                                                                           container,
                                                                           value);
  result = std::__detail::operator!=<std::pair<std::string const,unsigned int>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012EE06E2-0000000012EE0848
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>,unsigned int>(
        std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,BrickBreakerWorldLevelGroupConfig>::find(
                                                                                                 container,
                                                                                                 value);
  result = std::__detail::operator!=<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,BrickBreakerWorldLevelGroupConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7D8054-000000000F7D81BA
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,MainCoopJsonConfig> const,unsigned int>(
        const std::unordered_map<unsigned int,MainCoopJsonConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,MainCoopJsonConfig> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,MainCoopJsonConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,MainCoopJsonConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,MainCoopJsonConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,MainCoopJsonConfig>::find(
                                                                                        container,
                                                                                        value);
  result = std::__detail::operator!=<std::pair<unsigned int const,MainCoopJsonConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MainCoopJsonConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MainCoopJsonConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7D81E2-000000000F7D8348
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,bool> const,unsigned int>(
        const std::unordered_map<unsigned int,bool> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,bool> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,bool>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,bool>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,bool>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,bool>::find(
                                                                          container,
                                                                          value);
  result = std::__detail::operator!=<std::pair<unsigned int const,bool>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,bool>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,bool>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012EDA094-0000000012EDA1FA
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig> const,unsigned int>(
        const std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig>::find(container, value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::ActivityAbilityGroupRuleConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityAbilityGroupRuleConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityAbilityGroupRuleConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012ED9B50-0000000012ED9CB6
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig>,unsigned int>(
        std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivityAbilityGroupRuleConfig>::find(
                                                                                                    container,
                                                                                                    value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::ActivityAbilityGroupRuleConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityAbilityGroupRuleConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityAbilityGroupRuleConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012EDB822-0000000012EDB988
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::AsterMidGroupsExcelConfig>,unsigned int>(
        std::unordered_map<unsigned int,data::AsterMidGroupsExcelConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::AsterMidGroupsExcelConfig>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::AsterMidGroupsExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::AsterMidGroupsExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::AsterMidGroupsExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::AsterMidGroupsExcelConfig>::find(
                                                                                               container,
                                                                                               value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::AsterMidGroupsExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMidGroupsExcelConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AsterMidGroupsExcelConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012EDFA72-0000000012EDFBD8
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::BlitzRushStageExcelConfig> const,unsigned int>(
        const std::unordered_map<unsigned int,data::BlitzRushStageExcelConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::BlitzRushStageExcelConfig> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::BlitzRushStageExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::BlitzRushStageExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::BlitzRushStageExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::BlitzRushStageExcelConfig>::find(
                                                                                                     container,
                                                                                                     value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::BlitzRushStageExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlitzRushStageExcelConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BlitzRushStageExcelConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7D1E58-000000000F7D1FBE
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::ConfigWidgetCdGroup>,unsigned int>(
        std::unordered_map<unsigned int,data::ConfigWidgetCdGroup> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::ConfigWidgetCdGroup>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::ConfigWidgetCdGroup>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ConfigWidgetCdGroup>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::ConfigWidgetCdGroup>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ConfigWidgetCdGroup>::find(
                                                                                         container,
                                                                                         value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::ConfigWidgetCdGroup>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ConfigWidgetCdGroup>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ConfigWidgetCdGroup>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000013C74A5A-0000000013C74C54
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::DailyTaskExcelConfig> const,int>(
        const std::unordered_map<unsigned int,data::DailyTaskExcelConfig> *container,
        const int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rsi
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::DailyTaskExcelConfig> const,int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, value);
  *(std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::end(container);
  if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(value);
  }
  v5 = *(unsigned int *)value;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v5);
  *(_DWORD *)(v2 + 48) = v5;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v5);
  *(std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::find(
                                                                                                container,
                                                                                                (const std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::key_type *)(v2 + 48));
  result = std::__detail::operator!=<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false> *)(v2 + 64),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false> *)(v2 + 96));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 460: range 0000000013C7479A-0000000013C74900
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::DailyTaskExcelConfig> const,unsigned int>(
        const std::unordered_map<unsigned int,data::DailyTaskExcelConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::DailyTaskExcelConfig> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::DailyTaskExcelConfig>::find(
                                                                                                container,
                                                                                                value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskExcelConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000013C737D4-0000000013C7393A
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig> const,unsigned int>(
        const std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::DailyTaskRewardExcelConfig>::find(container, value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DailyTaskRewardExcelConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000013C88BB2-0000000013C88D18
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::FettersExcelConfig> const,unsigned int>(
        const std::unordered_map<unsigned int,data::FettersExcelConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::FettersExcelConfig> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::FettersExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::FettersExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::FettersExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::FettersExcelConfig>::find(
                                                                                              container,
                                                                                              value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::FettersExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FettersExcelConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FettersExcelConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000CF0AA8E-000000000CF0ABF4
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>,unsigned int>(
        std::unordered_map<unsigned int,data::H5ActivityScheduleConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::H5ActivityScheduleConfig>::find(
                                                                                              container,
                                                                                              value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::H5ActivityScheduleConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000147C9134-00000000147C929A
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::HomeWorldFarmFieldExcelConfig>,unsigned int>(
        std::unordered_map<unsigned int,data::HomeWorldFarmFieldExcelConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::HomeWorldFarmFieldExcelConfig>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::HomeWorldFarmFieldExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HomeWorldFarmFieldExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::HomeWorldFarmFieldExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::HomeWorldFarmFieldExcelConfig>::find(
                                                                                                   container,
                                                                                                   value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldFarmFieldExcelConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000147C9910-00000000147C9A76
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::HomeWorldFurnitureExcelConfig>,unsigned int>(
        std::unordered_map<unsigned int,data::HomeWorldFurnitureExcelConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::HomeWorldFurnitureExcelConfig>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::HomeWorldFurnitureExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::HomeWorldFurnitureExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::HomeWorldFurnitureExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::HomeWorldFurnitureExcelConfig>::find(
                                                                                                   container,
                                                                                                   value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldFurnitureExcelConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000147F86F8-00000000147F885E
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::MailExcelConfig>,unsigned int>(
        std::unordered_map<unsigned int,data::MailExcelConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::MailExcelConfig>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::MailExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MailExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::MailExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::MailExcelConfig>::find(
                                                                                     container,
                                                                                     value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::MailExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MailExcelConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MailExcelConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F049578-000000000F0496DE
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::MainQuestExcelConfig> const,unsigned int>(
        const std::unordered_map<unsigned int,data::MainQuestExcelConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::MainQuestExcelConfig> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::MainQuestExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MainQuestExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::MainQuestExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::MainQuestExcelConfig>::find(
                                                                                                container,
                                                                                                value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::MainQuestExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MainQuestExcelConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MainQuestExcelConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000147FA992-00000000147FAAF8
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::MaterialSourceDataExcelConfig> const,unsigned int>(
        const std::unordered_map<unsigned int,data::MaterialSourceDataExcelConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::MaterialSourceDataExcelConfig> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::MaterialSourceDataExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MaterialSourceDataExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::MaterialSourceDataExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::MaterialSourceDataExcelConfig>::find(container, value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::MaterialSourceDataExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialSourceDataExcelConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MaterialSourceDataExcelConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012EDBDEA-0000000012EDBF50
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::NewActivityExcelConfig> const,unsigned int>(
        const std::unordered_map<unsigned int,data::NewActivityExcelConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::NewActivityExcelConfig> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::NewActivityExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::NewActivityExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::NewActivityExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::NewActivityExcelConfig>::find(
                                                                                                  container,
                                                                                                  value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::NewActivityExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::NewActivityExcelConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::NewActivityExcelConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000135F3570-00000000135F376A
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::NewActivityWatcherConfig>,int>(
        std::unordered_map<unsigned int,data::NewActivityWatcherConfig> *container,
        const int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rsi
  bool result; // al
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::NewActivityWatcherConfig>,int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, value);
  *(std::unordered_map<unsigned int,data::NewActivityWatcherConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::NewActivityWatcherConfig>::end(container);
  if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(value);
  }
  v5 = *(unsigned int *)value;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v5);
  *(_DWORD *)(v2 + 48) = v5;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v5);
  *(std::unordered_map<unsigned int,data::NewActivityWatcherConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::NewActivityWatcherConfig>::find(
                                                                                              container,
                                                                                              (const std::unordered_map<unsigned int,data::NewActivityWatcherConfig>::key_type *)(v2 + 48));
  result = std::__detail::operator!=<std::pair<unsigned int const,data::NewActivityWatcherConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::NewActivityWatcherConfig>,false> *)(v2 + 64),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::NewActivityWatcherConfig>,false> *)(v2 + 96));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 460: range 0000000013C88E82-0000000013C88FE8
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::PhotographExpressionExcelConfig> const,unsigned int>(
        const std::unordered_map<unsigned int,data::PhotographExpressionExcelConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::PhotographExpressionExcelConfig> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::PhotographExpressionExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::PhotographExpressionExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::PhotographExpressionExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::PhotographExpressionExcelConfig>::find(container, value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::PhotographExpressionExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PhotographExpressionExcelConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PhotographExpressionExcelConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000013C88D1A-0000000013C88E80
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::PhotographPosenameExcelConfig> const,unsigned int>(
        const std::unordered_map<unsigned int,data::PhotographPosenameExcelConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::PhotographPosenameExcelConfig> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::PhotographPosenameExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::PhotographPosenameExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::PhotographPosenameExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::PhotographPosenameExcelConfig>::find(container, value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::PhotographPosenameExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PhotographPosenameExcelConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PhotographPosenameExcelConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F049410-000000000F049576
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::QuestExcelConfig> const,unsigned int>(
        const std::unordered_map<unsigned int,data::QuestExcelConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::QuestExcelConfig> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::QuestExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::QuestExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::QuestExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::QuestExcelConfig>::find(
                                                                                            container,
                                                                                            value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::QuestExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::QuestExcelConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::QuestExcelConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000001480475E-00000000148048C4
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::RandTaskRewardConfig> const,unsigned int>(
        const std::unordered_map<unsigned int,data::RandTaskRewardConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::RandTaskRewardConfig> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::RandTaskRewardConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RandTaskRewardConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::RandTaskRewardConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::RandTaskRewardConfig>::find(
                                                                                                container,
                                                                                                value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::RandTaskRewardConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RandTaskRewardConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RandTaskRewardConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000CE5B2B6-000000000CE5B41C
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::SignInDayExcelConfig>,unsigned int>(
        std::unordered_map<unsigned int,data::SignInDayExcelConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::SignInDayExcelConfig>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::SignInDayExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::SignInDayExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::SignInDayExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::SignInDayExcelConfig>::find(
                                                                                          container,
                                                                                          value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::SignInDayExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SignInDayExcelConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SignInDayExcelConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F05851A-000000000F058680
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::WatcherConfig *> const,unsigned int>(
        const std::unordered_map<unsigned int,data::WatcherConfig*> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::WatcherConfig *> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::WatcherConfig*>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::WatcherConfig *>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::WatcherConfig*>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::WatcherConfig *>::find(
                                                                                          container,
                                                                                          value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::WatcherConfig *>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WatcherConfig*>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WatcherConfig*>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F058216-000000000F05837C
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::WatcherConfig *>,unsigned int>(
        std::unordered_map<unsigned int,data::WatcherConfig*> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::WatcherConfig *>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::WatcherConfig*>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::WatcherConfig *>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::WatcherConfig*>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::WatcherConfig *>::find(
                                                                                    container,
                                                                                    value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::WatcherConfig *>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WatcherConfig*>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WatcherConfig*>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000CE766EA-000000000CE76850
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::WeaponLevelExcelConfig> const,unsigned int>(
        const std::unordered_map<unsigned int,data::WeaponLevelExcelConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::WeaponLevelExcelConfig> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::WeaponLevelExcelConfig>::find(
                                                                                                  container,
                                                                                                  value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WeaponLevelExcelConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F02A318-000000000F02A47E
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::WorldAreaConfig *> const,unsigned int>(
        const std::unordered_map<unsigned int,data::WorldAreaConfig*> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::WorldAreaConfig *> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::WorldAreaConfig*>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::WorldAreaConfig *>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::WorldAreaConfig*>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::WorldAreaConfig *>::find(
                                                                                            container,
                                                                                            value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::WorldAreaConfig *>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WorldAreaConfig*>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::WorldAreaConfig*>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000CED5264-000000000CED53CA
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>,unsigned int>(
        std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::find(container, value);
  result = std::__detail::operator!=<std::pair<unsigned int const,std::map<unsigned int,MonsterScriptConfig>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,MonsterScriptConfig> >,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,MonsterScriptConfig> >,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012EDA8DE-0000000012EDAA44
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> const,unsigned int>(
        const std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>::find(container, value);
  result = std::__detail::operator!=<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> >,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig> >,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000128F44A6-00000000128F460C
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>,unsigned int>(
        std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::find(container, value);
  result = std::__detail::operator!=<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> >,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> >,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000135F4780-00000000135F48E6
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> const,unsigned int>(
        const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::find(container, value);
  result = std::__detail::operator!=<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000013C71C1C-0000000013C71D82
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>,unsigned int>(
        std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::find(
                                                                                                    container,
                                                                                                    value);
  result = std::__detail::operator!=<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F02A480-000000000F02A5E6
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>> const,unsigned int>(
        const std::unordered_map<unsigned int,std::set<unsigned int>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            container,
                                                                                            value);
  result = std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000128F8140-00000000128F82A6
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>>,unsigned int>(
        std::unordered_map<unsigned int,std::set<unsigned int>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                      container,
                                                                                      value);
  result = std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000135F170C-00000000135F1872
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::string> const,unsigned int>(
        const std::unordered_map<unsigned int,std::string> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::string> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,std::string>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::string>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,std::string>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::string>::find(
                                                                                 container,
                                                                                 value);
  result = std::__detail::operator!=<std::pair<unsigned int const,std::string>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000128F6CDA-00000000128F6E40
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>,unsigned int>(
        std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::find(container, value);
  result = std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int> >,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int> >,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012EDA644-0000000012EDA7AA
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>,unsigned int>(
        std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>::find(container, value);
  result = std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> >,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::map<unsigned int,data::ActivityArenaChallengeExcelConfig>> >,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000135F45F2-00000000135F4758
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>> const,unsigned int>(
        const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::find(container, value);
  result = std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> >,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> >,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012F49F44-0000000012F4A0AA
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> const,unsigned int>(
        const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::find(container, value);
  result = std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000135F3F24-00000000135F408A
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_set<unsigned int>> const,unsigned int>(
        const std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_set<unsigned int>> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::find(container, value);
  result = std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012ED9F06-0000000012EDA06C
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<data::ActivityAbilityGroupRuleConfig>> const,unsigned int>(
        const std::unordered_map<unsigned int,std::vector<data::ActivityAbilityGroupRuleConfig>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<data::ActivityAbilityGroupRuleConfig>> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,std::vector<data::ActivityAbilityGroupRuleConfig>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<data::ActivityAbilityGroupRuleConfig>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,std::vector<data::ActivityAbilityGroupRuleConfig>>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::vector<data::ActivityAbilityGroupRuleConfig>>::find(container, value);
  result = std::__detail::operator!=<std::pair<unsigned int const,std::vector<data::ActivityAbilityGroupRuleConfig>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::ActivityAbilityGroupRuleConfig> >,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::ActivityAbilityGroupRuleConfig> >,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000147FB80E-00000000147FB974
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<data::MiracleTag>> const,unsigned int>(
        const std::unordered_map<unsigned int,std::vector<data::MiracleTag>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<data::MiracleTag>> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,std::vector<data::MiracleTag>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<data::MiracleTag>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,std::vector<data::MiracleTag>>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::vector<data::MiracleTag>>::find(
                                                                                                   container,
                                                                                                   value);
  result = std::__detail::operator!=<std::pair<unsigned int const,std::vector<data::MiracleTag>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::MiracleTag> >,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::MiracleTag> >,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7CFB9C-000000000F7CFD02
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<data::RandomQuestEntranceExcelConfig>>,unsigned int>(
        std::unordered_map<unsigned int,std::vector<data::RandomQuestEntranceExcelConfig>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<data::RandomQuestEntranceExcelConfig>>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,std::vector<data::RandomQuestEntranceExcelConfig>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<data::RandomQuestEntranceExcelConfig>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,std::vector<data::RandomQuestEntranceExcelConfig>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::vector<data::RandomQuestEntranceExcelConfig>>::find(container, value);
  result = std::__detail::operator!=<std::pair<unsigned int const,std::vector<data::RandomQuestEntranceExcelConfig>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::RandomQuestEntranceExcelConfig> >,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::RandomQuestEntranceExcelConfig> >,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000147FED36-00000000147FEE9C
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<unsigned int>> const,unsigned int>(
        const std::unordered_map<unsigned int,std::vector<unsigned int>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<unsigned int>> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               container,
                                                                                               value);
  result = std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000013C7208A-0000000013C721F0
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<unsigned int>>,unsigned int>(
        std::unordered_map<unsigned int,std::vector<unsigned int>> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<unsigned int>>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                         container,
                                                                                         value);
  result = std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F048502-000000000F048668
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
        const std::unordered_map<unsigned int,unsigned int> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  container,
                                                                                  value);
  result = std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012F5083E-0000000012F509A4
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<BattlePassRewardTag>,BattlePassRewardTag>(
        std::unordered_set<BattlePassRewardTag> *container,
        const BattlePassRewardTag *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<BattlePassRewardTag>,BattlePassRewardTag>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<BattlePassRewardTag>::iterator *)(v2 + 64) = std::unordered_set<BattlePassRewardTag>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<BattlePassRewardTag>::iterator *)(v2 + 32) = std::unordered_set<BattlePassRewardTag>::find(
                                                                      container,
                                                                      value);
  result = std::__detail::operator!=<BattlePassRewardTag,false>(
             (const std::__detail::_Node_iterator_base<BattlePassRewardTag,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<BattlePassRewardTag,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000147CEB28-00000000147CEC8E
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<ItemIndexKey> const,ItemIndexKey>(
        const std::unordered_set<ItemIndexKey> *container,
        const ItemIndexKey *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<ItemIndexKey> const,ItemIndexKey>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<ItemIndexKey>::const_iterator *)(v2 + 64) = std::unordered_set<ItemIndexKey>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<ItemIndexKey>::const_iterator *)(v2 + 32) = std::unordered_set<ItemIndexKey>::find(
                                                                     container,
                                                                     value);
  result = std::__detail::operator!=<ItemIndexKey,false>(
             (const std::__detail::_Node_iterator_base<ItemIndexKey,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<ItemIndexKey,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000147CE8DA-00000000147CEA40
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<ItemLimitWhiteListIndex> const,ItemLimitWhiteListIndex>(
        const std::unordered_set<ItemLimitWhiteListIndex> *container,
        const ItemLimitWhiteListIndex *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<ItemLimitWhiteListIndex> const,ItemLimitWhiteListIndex>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<ItemLimitWhiteListIndex>::const_iterator *)(v2 + 64) = std::unordered_set<ItemLimitWhiteListIndex>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<ItemLimitWhiteListIndex>::const_iterator *)(v2 + 32) = std::unordered_set<ItemLimitWhiteListIndex>::find(
                                                                                container,
                                                                                value);
  result = std::__detail::operator!=<ItemLimitWhiteListIndex,false>(
             (const std::__detail::_Node_iterator_base<ItemLimitWhiteListIndex,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<ItemLimitWhiteListIndex,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7D6F3C-000000000F7D70A2
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<data::AbilityTargetting> const,data::AbilityTargetting>(
        const std::unordered_set<data::AbilityTargetting> *container,
        const data::AbilityTargetting *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<data::AbilityTargetting> const,data::AbilityTargetting>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<data::AbilityTargetting>::const_iterator *)(v2 + 64) = std::unordered_set<data::AbilityTargetting>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<data::AbilityTargetting>::const_iterator *)(v2 + 32) = std::unordered_set<data::AbilityTargetting>::find(
                                                                                container,
                                                                                value);
  result = std::__detail::operator!=<data::AbilityTargetting,false>(
             (const std::__detail::_Node_iterator_base<data::AbilityTargetting,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<data::AbilityTargetting,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012F51D24-0000000012F51E8A
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<data::BlossomRefreshType>,data::BlossomRefreshType>(
        std::unordered_set<data::BlossomRefreshType> *container,
        const data::BlossomRefreshType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<data::BlossomRefreshType>,data::BlossomRefreshType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<data::BlossomRefreshType>::iterator *)(v2 + 64) = std::unordered_set<data::BlossomRefreshType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<data::BlossomRefreshType>::iterator *)(v2 + 32) = std::unordered_set<data::BlossomRefreshType>::find(
                                                                           container,
                                                                           value);
  result = std::__detail::operator!=<data::BlossomRefreshType,false>(
             (const std::__detail::_Node_iterator_base<data::BlossomRefreshType,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<data::BlossomRefreshType,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7AF09E-000000000F7AF204
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<data::GCGChooseTargetCharaterType>,data::GCGChooseTargetCharaterType>(
        std::unordered_set<data::GCGChooseTargetCharaterType> *container,
        const data::GCGChooseTargetCharaterType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<data::GCGChooseTargetCharaterType>,data::GCGChooseTargetCharaterType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<data::GCGChooseTargetCharaterType>::iterator *)(v2 + 64) = std::unordered_set<data::GCGChooseTargetCharaterType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<data::GCGChooseTargetCharaterType>::iterator *)(v2 + 32) = std::unordered_set<data::GCGChooseTargetCharaterType>::find(
                                                                                    container,
                                                                                    value);
  result = std::__detail::operator!=<data::GCGChooseTargetCharaterType,false>(
             (const std::__detail::_Node_iterator_base<data::GCGChooseTargetCharaterType,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<data::GCGChooseTargetCharaterType,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7AE5EC-000000000F7AE752
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<data::GCGDeclaredValueType>,data::GCGDeclaredValueType>(
        std::unordered_set<data::GCGDeclaredValueType> *container,
        const data::GCGDeclaredValueType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<data::GCGDeclaredValueType>,data::GCGDeclaredValueType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<data::GCGDeclaredValueType>::iterator *)(v2 + 64) = std::unordered_set<data::GCGDeclaredValueType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<data::GCGDeclaredValueType>::iterator *)(v2 + 32) = std::unordered_set<data::GCGDeclaredValueType>::find(
                                                                             container,
                                                                             value);
  result = std::__detail::operator!=<data::GCGDeclaredValueType,false>(
             (const std::__detail::_Node_iterator_base<data::GCGDeclaredValueType,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<data::GCGDeclaredValueType,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7AE9DA-000000000F7AEB40
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<data::GCGEffectCampType>,data::GCGEffectCampType>(
        std::unordered_set<data::GCGEffectCampType> *container,
        const data::GCGEffectCampType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<data::GCGEffectCampType>,data::GCGEffectCampType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<data::GCGEffectCampType>::iterator *)(v2 + 64) = std::unordered_set<data::GCGEffectCampType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<data::GCGEffectCampType>::iterator *)(v2 + 32) = std::unordered_set<data::GCGEffectCampType>::find(
                                                                          container,
                                                                          value);
  result = std::__detail::operator!=<data::GCGEffectCampType,false>(
             (const std::__detail::_Node_iterator_base<data::GCGEffectCampType,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<data::GCGEffectCampType,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7B1462-000000000F7B15C8
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<data::GCGEffectCostType>,data::GCGEffectCostType>(
        std::unordered_set<data::GCGEffectCostType> *container,
        const data::GCGEffectCostType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<data::GCGEffectCostType>,data::GCGEffectCostType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<data::GCGEffectCostType>::iterator *)(v2 + 64) = std::unordered_set<data::GCGEffectCostType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<data::GCGEffectCostType>::iterator *)(v2 + 32) = std::unordered_set<data::GCGEffectCostType>::find(
                                                                          container,
                                                                          value);
  result = std::__detail::operator!=<data::GCGEffectCostType,false>(
             (const std::__detail::_Node_iterator_base<data::GCGEffectCostType,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<data::GCGEffectCostType,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7B0616-000000000F7B077C
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<data::GCGEffectCreatePositionType>,data::GCGEffectCreatePositionType>(
        std::unordered_set<data::GCGEffectCreatePositionType> *container,
        const data::GCGEffectCreatePositionType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<data::GCGEffectCreatePositionType>,data::GCGEffectCreatePositionType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<data::GCGEffectCreatePositionType>::iterator *)(v2 + 64) = std::unordered_set<data::GCGEffectCreatePositionType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<data::GCGEffectCreatePositionType>::iterator *)(v2 + 32) = std::unordered_set<data::GCGEffectCreatePositionType>::find(
                                                                                    container,
                                                                                    value);
  result = std::__detail::operator!=<data::GCGEffectCreatePositionType,false>(
             (const std::__detail::_Node_iterator_base<data::GCGEffectCreatePositionType,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<data::GCGEffectCreatePositionType,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7B0F98-000000000F7B10FE
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<data::GCGEffectDamageElementType>,data::GCGEffectDamageElementType>(
        std::unordered_set<data::GCGEffectDamageElementType> *container,
        const data::GCGEffectDamageElementType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<data::GCGEffectDamageElementType>,data::GCGEffectDamageElementType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<data::GCGEffectDamageElementType>::iterator *)(v2 + 64) = std::unordered_set<data::GCGEffectDamageElementType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<data::GCGEffectDamageElementType>::iterator *)(v2 + 32) = std::unordered_set<data::GCGEffectDamageElementType>::find(
                                                                                   container,
                                                                                   value);
  result = std::__detail::operator!=<data::GCGEffectDamageElementType,false>(
             (const std::__detail::_Node_iterator_base<data::GCGEffectDamageElementType,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<data::GCGEffectDamageElementType,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7AFB00-000000000F7AFC66
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<data::GCGEffectDiceType>,data::GCGEffectDiceType>(
        std::unordered_set<data::GCGEffectDiceType> *container,
        const data::GCGEffectDiceType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<data::GCGEffectDiceType>,data::GCGEffectDiceType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<data::GCGEffectDiceType>::iterator *)(v2 + 64) = std::unordered_set<data::GCGEffectDiceType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<data::GCGEffectDiceType>::iterator *)(v2 + 32) = std::unordered_set<data::GCGEffectDiceType>::find(
                                                                          container,
                                                                          value);
  result = std::__detail::operator!=<data::GCGEffectDiceType,false>(
             (const std::__detail::_Node_iterator_base<data::GCGEffectDiceType,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<data::GCGEffectDiceType,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7AF400-000000000F7AF566
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<data::GCGEffectElementType>,data::GCGEffectElementType>(
        std::unordered_set<data::GCGEffectElementType> *container,
        const data::GCGEffectElementType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<data::GCGEffectElementType>,data::GCGEffectElementType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<data::GCGEffectElementType>::iterator *)(v2 + 64) = std::unordered_set<data::GCGEffectElementType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<data::GCGEffectElementType>::iterator *)(v2 + 32) = std::unordered_set<data::GCGEffectElementType>::find(
                                                                             container,
                                                                             value);
  result = std::__detail::operator!=<data::GCGEffectElementType,false>(
             (const std::__detail::_Node_iterator_base<data::GCGEffectElementType,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<data::GCGEffectElementType,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7AFE62-000000000F7AFFC8
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<data::GCGEffectGenDiceType>,data::GCGEffectGenDiceType>(
        std::unordered_set<data::GCGEffectGenDiceType> *container,
        const data::GCGEffectGenDiceType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<data::GCGEffectGenDiceType>,data::GCGEffectGenDiceType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<data::GCGEffectGenDiceType>::iterator *)(v2 + 64) = std::unordered_set<data::GCGEffectGenDiceType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<data::GCGEffectGenDiceType>::iterator *)(v2 + 32) = std::unordered_set<data::GCGEffectGenDiceType>::find(
                                                                             container,
                                                                             value);
  result = std::__detail::operator!=<data::GCGEffectGenDiceType,false>(
             (const std::__detail::_Node_iterator_base<data::GCGEffectGenDiceType,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<data::GCGEffectGenDiceType,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7B0200-000000000F7B0366
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<data::GCGEffectSelectNextOnstageType>,data::GCGEffectSelectNextOnstageType>(
        std::unordered_set<data::GCGEffectSelectNextOnstageType> *container,
        const data::GCGEffectSelectNextOnstageType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<data::GCGEffectSelectNextOnstageType>,data::GCGEffectSelectNextOnstageType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<data::GCGEffectSelectNextOnstageType>::iterator *)(v2 + 64) = std::unordered_set<data::GCGEffectSelectNextOnstageType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<data::GCGEffectSelectNextOnstageType>::iterator *)(v2 + 32) = std::unordered_set<data::GCGEffectSelectNextOnstageType>::find(
                                                                                       container,
                                                                                       value);
  result = std::__detail::operator!=<data::GCGEffectSelectNextOnstageType,false>(
             (const std::__detail::_Node_iterator_base<data::GCGEffectSelectNextOnstageType,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<data::GCGEffectSelectNextOnstageType,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7AED3C-000000000F7AEEA2
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<data::GCGEffectTargetChooseType>,data::GCGEffectTargetChooseType>(
        std::unordered_set<data::GCGEffectTargetChooseType> *container,
        const data::GCGEffectTargetChooseType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<data::GCGEffectTargetChooseType>,data::GCGEffectTargetChooseType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<data::GCGEffectTargetChooseType>::iterator *)(v2 + 64) = std::unordered_set<data::GCGEffectTargetChooseType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<data::GCGEffectTargetChooseType>::iterator *)(v2 + 32) = std::unordered_set<data::GCGEffectTargetChooseType>::find(
                                                                                  container,
                                                                                  value);
  result = std::__detail::operator!=<data::GCGEffectTargetChooseType,false>(
             (const std::__detail::_Node_iterator_base<data::GCGEffectTargetChooseType,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<data::GCGEffectTargetChooseType,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7B0A88-000000000F7B0BEE
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<data::GCGTokenType>,data::GCGTokenType>(
        std::unordered_set<data::GCGTokenType> *container,
        const data::GCGTokenType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<data::GCGTokenType>,data::GCGTokenType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<data::GCGTokenType>::iterator *)(v2 + 64) = std::unordered_set<data::GCGTokenType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<data::GCGTokenType>::iterator *)(v2 + 32) = std::unordered_set<data::GCGTokenType>::find(
                                                                     container,
                                                                     value);
  result = std::__detail::operator!=<data::GCGTokenType,false>(
             (const std::__detail::_Node_iterator_base<data::GCGTokenType,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<data::GCGTokenType,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7AF762-000000000F7AF8C8
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<data::GCGValueOperatorType>,data::GCGValueOperatorType>(
        std::unordered_set<data::GCGValueOperatorType> *container,
        const data::GCGValueOperatorType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<data::GCGValueOperatorType>,data::GCGValueOperatorType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<data::GCGValueOperatorType>::iterator *)(v2 + 64) = std::unordered_set<data::GCGValueOperatorType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<data::GCGValueOperatorType>::iterator *)(v2 + 32) = std::unordered_set<data::GCGValueOperatorType>::find(
                                                                             container,
                                                                             value);
  result = std::__detail::operator!=<data::GCGValueOperatorType,false>(
             (const std::__detail::_Node_iterator_base<data::GCGValueOperatorType,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<data::GCGValueOperatorType,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000013C6EDCA-0000000013C6EF30
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>> const,std::pair<unsigned int,unsigned int>>(
        const std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<unsigned int,unsigned int> > > *container,
        const std::pair<unsigned int,unsigned int> *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>> const,std::pair<unsigned int,unsigned int>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<unsigned int,unsigned int> > >::const_iterator *)(v2 + 64) = std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<unsigned int,unsigned int> > >::const_iterator *)(v2 + 32) = std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::find(container, value);
  result = std::__detail::operator!=<std::pair<unsigned int,unsigned int>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int,unsigned int>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int,unsigned int>,true> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000135F4CE0-00000000135F4E46
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>,std::pair<unsigned int,unsigned int>>(
        std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<unsigned int,unsigned int> > > *container,
        const std::pair<unsigned int,unsigned int> *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>,std::pair<unsigned int,unsigned int>>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<unsigned int,unsigned int> > >::iterator *)(v2 + 64) = std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<unsigned int,unsigned int> > >::iterator *)(v2 + 32) = std::unordered_set<std::pair<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<unsigned int,unsigned int>>>::find(container, value);
  result = std::__detail::operator!=<std::pair<unsigned int,unsigned int>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int,unsigned int>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int,unsigned int>,true> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000E1D4AA4-000000000E1D4C0A
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<std::string> const,std::string>(
        const std::unordered_set<std::string> *container,
        const std::string *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<std::string> const,std::string>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<std::string>::const_iterator *)(v2 + 64) = std::unordered_set<std::string>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<std::string>::const_iterator *)(v2 + 32) = std::unordered_set<std::string>::find(
                                                                    container,
                                                                    value);
  result = std::__detail::operator!=<std::string,true>(
             (const std::__detail::_Node_iterator_base<std::string,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::string,true> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7CFF34-000000000F7D009A
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<std::string>,std::string>(
        std::unordered_set<std::string> *container,
        const std::string *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<std::string>,std::string>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<std::string>::iterator *)(v2 + 64) = std::unordered_set<std::string>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<std::string>::iterator *)(v2 + 32) = std::unordered_set<std::string>::find(container, value);
  result = std::__detail::operator!=<std::string,true>(
             (const std::__detail::_Node_iterator_base<std::string,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::string,true> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000F7C7EDC-000000000F7C8042
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<std::type_index>,std::type_index>(
        std::unordered_set<std::type_index> *container,
        const std::type_index *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<std::type_index>,std::type_index>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<std::type_index>::iterator *)(v2 + 64) = std::unordered_set<std::type_index>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<std::type_index>::iterator *)(v2 + 32) = std::unordered_set<std::type_index>::find(
                                                                  container,
                                                                  value);
  result = std::__detail::operator!=<std::type_index,false>(
             (const std::__detail::_Node_iterator_base<std::type_index,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::type_index,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 0000000012ED92FC-0000000012ED94F5
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,data::WatcherTriggerType>(
        const std::unordered_set<unsigned int> *container,
        const data::WatcherTriggerType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rsi
  data::WatcherTriggerType v6; // ecx
  char v7; // al
  bool result; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,data::WatcherTriggerType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, value);
  *(std::unordered_set<unsigned int>::const_iterator *)(v2 + 96) = std::unordered_set<unsigned int>::end(container);
  v5 = ((unsigned __int8)value & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(value);
  }
  v6 = *value;
  v7 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && v7 <= 3 )
    __asan_report_store4(v2 + 48, v5);
  *(_DWORD *)(v2 + 48) = v6;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v5);
  *(std::unordered_set<unsigned int>::const_iterator *)(v2 + 64) = std::unordered_set<unsigned int>::find(
                                                                     container,
                                                                     (const std::unordered_set<unsigned int>::key_type *)(v2 + 48));
  result = std::__detail::operator!=<unsigned int,false>(
             (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 64),
             (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 96));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 460: range 000000000CE490B6-000000000CE4921C
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
        const std::unordered_set<unsigned int> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<unsigned int>::const_iterator *)(v2 + 64) = std::unordered_set<unsigned int>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<unsigned int>::const_iterator *)(v2 + 32) = std::unordered_set<unsigned int>::find(
                                                                     container,
                                                                     value);
  result = std::__detail::operator!=<unsigned int,false>(
             (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 00000000135F0792-00000000135F098B
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,data::NewActivityType>(
        std::unordered_set<unsigned int> *container,
        const data::NewActivityType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rsi
  data::NewActivityType v6; // ecx
  char v7; // al
  bool result; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,data::NewActivityType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, value);
  *(std::unordered_set<unsigned int>::iterator *)(v2 + 96) = std::unordered_set<unsigned int>::end(container);
  v5 = ((unsigned __int8)value & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(value);
  }
  v6 = *value;
  v7 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && v7 <= 3 )
    __asan_report_store4(v2 + 48, v5);
  *(_DWORD *)(v2 + 48) = v6;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v5);
  *(std::unordered_set<unsigned int>::iterator *)(v2 + 64) = std::unordered_set<unsigned int>::find(
                                                               container,
                                                               (const std::unordered_set<unsigned int>::key_type *)(v2 + 48));
  result = std::__detail::operator!=<unsigned int,false>(
             (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 64),
             (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 96));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 460: range 000000000CE63758-000000000CE638BE
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
        std::unordered_set<unsigned int> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_set<unsigned int>::iterator *)(v2 + 64) = std::unordered_set<unsigned int>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_set<unsigned int>::iterator *)(v2 + 32) = std::unordered_set<unsigned int>::find(container, value);
  result = std::__detail::operator!=<unsigned int,false>(
             (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 460: range 000000000C9AAEFA-000000000C9AAF0B
bool __fastcall common::tools::MiscUtils::isContains<std::map<std::type_index,std::any>,std::type_index>(
        std::map<std::type_index,std::any> *container,
        const std::type_index *value)
{
  return &container->_M_t._M_impl.std::_Rb_tree_header != (std::_Rb_tree_header *)std::_Rb_tree<std::type_index,std::pair<std::type_index const,std::any>,std::_Select1st<std::pair<std::type_index const,std::any>>,std::less<std::type_index>,std::allocator<std::pair<std::type_index const,std::any>>>::find(
                                                                                    &container->_M_t,
                                                                                    value)._M_node;
};

// Line 467: range 00000000147B7296-00000000147B74E6
void __cdecl common::tools::MiscUtils::removeValues<std::vector<data::GCGTagType>,data::GCGTagType>(
        std::vector<data::GCGTagType> *container,
        const data::GCGTagType *value)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::GCGTagType *M_current; // r14
  data::GCGTagType *v6; // rcx
  char v7[208]; // [rsp+10h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::removeValues<std::vector<data::GCGTagType>,data::GCGTagType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::vector<data::GCGTagType>::iterator *)(v2 + 64) = std::vector<data::GCGTagType>::end(container);
  __gnu_cxx::__normal_iterator<data::GCGTagType const*,std::vector<data::GCGTagType>>::__normal_iterator<data::GCGTagType*>(
    (__gnu_cxx::__normal_iterator<const data::GCGTagType*,std::vector<data::GCGTagType> > *const)(v2 + 128),
    (const __gnu_cxx::__normal_iterator<data::GCGTagType*,std::vector<data::GCGTagType> > *)(v2 + 64));
  M_current = std::vector<data::GCGTagType>::end(container)._M_current;
  v6 = std::vector<data::GCGTagType>::begin(container)._M_current;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v2 + 64);
  *(__gnu_cxx::__normal_iterator<data::GCGTagType*,std::vector<data::GCGTagType> > *)(v2 + 32) = std::remove<__gnu_cxx::__normal_iterator<data::GCGTagType *,std::vector<data::GCGTagType>>,data::GCGTagType>(
                                                                                                   (__gnu_cxx::__normal_iterator<data::GCGTagType*,std::vector<data::GCGTagType> >)v6,
                                                                                                   (__gnu_cxx::__normal_iterator<data::GCGTagType*,std::vector<data::GCGTagType> >)M_current,
                                                                                                   value);
  __gnu_cxx::__normal_iterator<data::GCGTagType const*,std::vector<data::GCGTagType>>::__normal_iterator<data::GCGTagType*>(
    (__gnu_cxx::__normal_iterator<const data::GCGTagType*,std::vector<data::GCGTagType> > *const)(v2 + 96),
    (const __gnu_cxx::__normal_iterator<data::GCGTagType*,std::vector<data::GCGTagType> > *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2 + 96);
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2 + 128);
  std::vector<data::GCGTagType>::erase(
    container,
    *(std::vector<data::GCGTagType>::const_iterator *)(v2 + 96),
    *(std::vector<data::GCGTagType>::const_iterator *)(v2 + 128));
  if ( v7 == (char *)v2 )
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
};

// Line 474: range 00000000135F03C2-00000000135F0591
std::map<data::NewActivityType,std::pair<std::string,std::string >>::mapped_type *__cdecl common::tools::MiscUtils::findMapWithDefaultValue<std::map<data::NewActivityType,std::pair<std::string,std::string>>>(
        std::map<data::NewActivityType,std::pair<std::string,std::string >>::mapped_type *retstr,
        const std::map<data::NewActivityType,std::pair<std::string,std::string >> *map,
        const std::map<data::NewActivityType,std::pair<std::string,std::string >>::key_type *key,
        std::map<data::NewActivityType,std::pair<std::string,std::string >>::mapped_type *p_default_value)
{
  std::_Rb_tree_const_iterator<std::pair<const data::NewActivityType,std::pair<std::string,std::string > > > *v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  bool v7; // al
  std::pair<std::string,std::string > *p_second; // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (std::_Rb_tree_const_iterator<std::pair<const data::NewActivityType,std::pair<std::string,std::string > > > *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = (std::_Rb_tree_const_iterator<std::pair<const data::NewActivityType,std::pair<std::string,std::string > > > *)v5;
  }
  v4->_M_node = (std::_Rb_tree_const_iterator<std::pair<const data::NewActivityType,std::pair<std::string,std::string > > >::_Base_ptr)1102416563;
  v4[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::NewActivityType,std::pair<std::string,std::string > > >::_Base_ptr)"2 32 8 8 iter:476 64 8 9 <unknown>";
  v4[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<const data::NewActivityType,std::pair<std::string,std::string > > >::_Base_ptr)common::tools::MiscUtils::findMapWithDefaultValue<std::map<data::NewActivityType,std::pair<std::string,std::string>>>;
  v6 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v4[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v4[4], map);
  v4[4]._M_node = std::map<data::NewActivityType,std::pair<std::string,std::string>>::find(map, key)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v4[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v4[8], key);
  v4[8]._M_node = std::map<data::NewActivityType,std::pair<std::string,std::string>>::end(map)._M_node;
  v7 = std::operator==(v4 + 4, v4 + 8);
  *(_BYTE *)(((unsigned __int64)&v4[8] >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    std::pair<std::string,std::string>::pair(retstr, p_default_value);
  }
  else
  {
    p_second = &std::_Rb_tree_const_iterator<std::pair<data::NewActivityType const,std::pair<std::string,std::string>>>::operator->(v4 + 4)->second;
    std::pair<std::string,std::string>::pair(retstr, p_second);
  }
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v4->_M_node = (std::_Rb_tree_const_iterator<std::pair<const data::NewActivityType,std::pair<std::string,std::string > > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 474: range 0000000013C81636-0000000013C8180B
std::map<unsigned int,unsigned int>::mapped_type __cdecl common::tools::MiscUtils::findMapWithDefaultValue<std::map<unsigned int,unsigned int>>(
        const std::map<unsigned int,unsigned int> *map,
        const std::map<unsigned int,unsigned int>::key_type *key,
        std::map<unsigned int,unsigned int>::mapped_type default_value)
{
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // al
  std::map<unsigned int,unsigned int>::mapped_type result; // eax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v8; // rdx
  unsigned int *p_second; // rax
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *)v4;
  }
  v3->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)1102416563;
  v3[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)"2 32 8 8 iter:476 64 8 9 <unknown>";
  v3[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)common::tools::MiscUtils::findMapWithDefaultValue<std::map<unsigned int,unsigned int>>;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[4], key);
  v3[4]._M_node = std::map<unsigned int,unsigned int>::find(map, key)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[8], key);
  v3[8]._M_node = std::map<unsigned int,unsigned int>::end(map)._M_node;
  v6 = std::operator==(v3 + 4, v3 + 8);
  *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    result = default_value;
  }
  else
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->(v3 + 4);
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v8->second;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 474: range 000000000CE5EA3C-000000000CE5EC08
std::unordered_map<data::AbilityFilterIndex,unsigned int>::mapped_type __cdecl common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<data::AbilityFilterIndex,unsigned int>>(
        const std::unordered_map<data::AbilityFilterIndex,unsigned int> *map,
        const std::unordered_map<data::AbilityFilterIndex,unsigned int>::key_type *key,
        std::unordered_map<data::AbilityFilterIndex,unsigned int>::mapped_type default_value)
{
  std::__detail::_Node_const_iterator<std::pair<const data::AbilityFilterIndex,unsigned int>,false,false> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // al
  std::unordered_map<data::AbilityFilterIndex,unsigned int>::mapped_type result; // eax
  std::__detail::_Node_const_iterator<std::pair<const data::AbilityFilterIndex,unsigned int>,false,false>::pointer v8; // rax
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (std::__detail::_Node_const_iterator<std::pair<const data::AbilityFilterIndex,unsigned int>,false,false> *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::__detail::_Node_const_iterator<std::pair<const data::AbilityFilterIndex,unsigned int>,false,false> *)v4;
  }
  v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const data::AbilityFilterIndex,unsigned int>,false>::__node_type *)1102416563;
  v3[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const data::AbilityFilterIndex,unsigned int>,false>::__node_type *)"2 32 8 8 iter:476 64 8 9 <unknown>";
  v3[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const data::AbilityFilterIndex,unsigned int>,false>::__node_type *)common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<data::AbilityFilterIndex,unsigned int>>;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[4], key);
  v3[4]._M_cur = std::unordered_map<data::AbilityFilterIndex,unsigned int>::find(map, key)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[8], key);
  v3[8]._M_cur = std::unordered_map<data::AbilityFilterIndex,unsigned int>::end(map)._M_cur;
  v6 = std::__detail::operator==<std::pair<data::AbilityFilterIndex const,unsigned int>,false>(v3 + 4, v3 + 8);
  *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    result = default_value;
  }
  else
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<data::AbilityFilterIndex const,unsigned int>,false,false>::operator->(v3 + 4);
    if ( *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) <= 3 )
    {
      v8 = (std::__detail::_Node_const_iterator<std::pair<const data::AbilityFilterIndex,unsigned int>,false,false>::pointer)__asan_report_load4(&v8->second);
    }
    result = v8->second;
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const data::AbilityFilterIndex,unsigned int>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 474: range 000000000F7BB7DC-000000000F7BB9AB
std::unordered_map<int,std::string>::mapped_type *__cdecl common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<int,std::string>>(
        std::unordered_map<int,std::string>::mapped_type *retstr,
        const std::unordered_map<int,std::string> *map,
        const std::unordered_map<int,std::string>::key_type *key,
        std::unordered_map<int,std::string>::mapped_type *p_default_value)
{
  std::__detail::_Node_const_iterator<std::pair<int const,std::string >,false,false> *v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  bool v7; // al
  std::string *p_second; // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (std::__detail::_Node_const_iterator<std::pair<int const,std::string >,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = (std::__detail::_Node_const_iterator<std::pair<int const,std::string >,false,false> *)v5;
  }
  v4->_M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::string >,false>::__node_type *)1102416563;
  v4[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::string >,false>::__node_type *)"2 32 8 8 iter:476 64 8 9 <unknown>";
  v4[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::string >,false>::__node_type *)common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<int,std::string>>;
  v6 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v4[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v4[4], map);
  v4[4]._M_cur = std::unordered_map<int,std::string>::find(map, key)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v4[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v4[8], key);
  v4[8]._M_cur = std::unordered_map<int,std::string>::end(map)._M_cur;
  v7 = std::__detail::operator==<std::pair<int const,std::string>,false>(v4 + 4, v4 + 8);
  *(_BYTE *)(((unsigned __int64)&v4[8] >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    std::string::basic_string(retstr, p_default_value);
  }
  else
  {
    p_second = &std::__detail::_Node_const_iterator<std::pair<int const,std::string>,false,false>::operator->(v4 + 4)->second;
    std::string::basic_string(retstr, p_second);
  }
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v4->_M_cur = (std::__detail::_Node_iterator_base<std::pair<int const,std::string >,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 474: range 0000000013C6EBF4-0000000013C6EDC9
std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int> >,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int> >,std::allocator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int> > >::mapped_type __cdecl common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int,unsigned int> const,unsigned int>>>>(
        const std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int> >,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int> >,std::allocator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int> > > *map,
        const std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int> >,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int> >,std::allocator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int> > >::key_type *key,
        std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int> >,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int> >,std::allocator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int> > >::mapped_type default_value)
{
  std::__detail::_Node_const_iterator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int>,false,true> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // al
  std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int> >,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int> >,std::allocator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int> > >::mapped_type result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int>,false,true>::pointer v8; // rdx
  unsigned int *p_second; // rax
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (std::__detail::_Node_const_iterator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int>,false,true> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::__detail::_Node_const_iterator<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int>,false,true> *)v4;
  }
  v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int>,true>::__node_type *)1102416563;
  v3[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int>,true>::__node_type *)"2 32 8 8 iter:476 64 8 9 <unknown>";
  v3[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int>,true>::__node_type *)common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int,unsigned int> const,unsigned int>>>>;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[4], key);
  v3[4]._M_cur = std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int,unsigned int> const,unsigned int>>>::find(
                   map,
                   key)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[8], key);
  v3[8]._M_cur = std::unordered_map<std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int,boost::hash<std::tuple<unsigned int,unsigned int,unsigned int>>,std::equal_to<std::tuple<unsigned int,unsigned int,unsigned int>>,std::allocator<std::pair<std::tuple<unsigned int,unsigned int,unsigned int> const,unsigned int>>>::end(map)._M_cur;
  v6 = std::__detail::operator==<std::pair<std::tuple<unsigned int,unsigned int,unsigned int> const,unsigned int>,true>(
         v3 + 4,
         v3 + 8);
  *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    result = default_value;
  }
  else
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<std::tuple<unsigned int,unsigned int,unsigned int> const,unsigned int>,false,true>::operator->(v3 + 4);
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v8->second;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::tuple<unsigned int,unsigned int,unsigned int>,unsigned int>,true>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 474: range 000000000CE5EC0A-000000000CE5EDD9
std::unordered_map<unsigned int,std::string>::mapped_type *__cdecl common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned int,std::string>>(
        std::unordered_map<unsigned int,std::string>::mapped_type *retstr,
        const std::unordered_map<unsigned int,std::string> *map,
        const std::unordered_map<unsigned int,std::string>::key_type *key,
        std::unordered_map<unsigned int,std::string>::mapped_type *p_default_value)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::string >,false,false> *v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  bool v7; // al
  std::string *p_second; // rdx
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v4 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::string >,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::string >,false,false> *)v5;
  }
  v4->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false>::__node_type *)1102416563;
  v4[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false>::__node_type *)"2 32 8 8 iter:476 64 8 9 <unknown>";
  v4[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false>::__node_type *)common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned int,std::string>>;
  v6 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v4[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v4[4], map);
  v4[4]._M_cur = std::unordered_map<unsigned int,std::string>::find(map, key)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v4[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v4[8], key);
  v4[8]._M_cur = std::unordered_map<unsigned int,std::string>::end(map)._M_cur;
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::string>,false>(v4 + 4, v4 + 8);
  *(_BYTE *)(((unsigned __int64)&v4[8] >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    std::string::basic_string(retstr, p_default_value);
  }
  else
  {
    p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::string>,false,false>::operator->(v4 + 4)->second;
    std::string::basic_string(retstr, p_second);
  }
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v4->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::string >,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 474: range 00000000147BBD82-00000000147BBF57
std::unordered_map<unsigned int,unsigned int>::mapped_type __cdecl common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned int,unsigned int>>(
        const std::unordered_map<unsigned int,unsigned int> *map,
        const std::unordered_map<unsigned int,unsigned int>::key_type *key,
        std::unordered_map<unsigned int,unsigned int>::mapped_type default_value)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  bool v6; // al
  std::unordered_map<unsigned int,unsigned int>::mapped_type result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v8; // rdx
  unsigned int *p_second; // rax
  char v11[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *)v4;
  }
  v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)1102416563;
  v3[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)"2 32 8 8 iter:476 64 8 9 <unknown>";
  v3[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned int,unsigned int>>;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[4], key);
  v3[4]._M_cur = std::unordered_map<unsigned int,unsigned int>::find(map, key)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[8], key);
  v3[8]._M_cur = std::unordered_map<unsigned int,unsigned int>::end(map)._M_cur;
  v6 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(v3 + 4, v3 + 8);
  *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    result = default_value;
  }
  else
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->(v3 + 4);
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v8->second;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 486: range 000000000CF21390-000000000CF21524
common::tools::transcribe_cv_t *__cdecl common::tools::MiscUtils::findMapValuePointer<std::unordered_map<std::pair<unsigned int,std::string>,data::DbSecurityLibraryConfig,boost::hash<std::pair<unsigned int,std::string>>,std::equal_to<std::pair<unsigned int,std::string>>,std::allocator<std::pair<std::pair<unsigned int,std::string> const,data::DbSecurityLibraryConfig>>> const>(
        const std::unordered_map<std::pair<unsigned int,std::string >,data::DbSecurityLibraryConfig,boost::hash<std::pair<unsigned int,std::string > >,std::equal_to<std::pair<unsigned int,std::string > >,std::allocator<std::pair<const std::pair<unsigned int,std::string >,data::DbSecurityLibraryConfig> > > *map,
        const std::unordered_map<std::pair<unsigned int,std::string >,data::DbSecurityLibraryConfig,boost::hash<std::pair<unsigned int,std::string > >,std::equal_to<std::pair<unsigned int,std::string > >,std::allocator<std::pair<const std::pair<unsigned int,std::string >,data::DbSecurityLibraryConfig> > >::key_type *key)
{
  std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,std::string >,data::DbSecurityLibraryConfig>,false,true> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  common::tools::transcribe_cv_t *result; // rax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,std::string >,data::DbSecurityLibraryConfig>,false,true> *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,std::string >,data::DbSecurityLibraryConfig>,false,true> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,std::string >,data::DbSecurityLibraryConfig>,true>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,std::string >,data::DbSecurityLibraryConfig>,true>::__node_type *)"2 32 8 8 iter:488 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,std::string >,data::DbSecurityLibraryConfig>,true>::__node_type *)common::tools::MiscUtils::findMapValuePointer<std::unordered_map<std::pair<unsigned int,std::string>,data::DbSecurityLibraryConfig,boost::hash<std::pair<unsigned int,std::string>>,std::equal_to<std::pair<unsigned int,std::string>>,std::allocator<std::pair<std::pair<unsigned int,std::string> const,data::DbSecurityLibraryConfig>>> const>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], key);
  v2[4]._M_cur = std::unordered_map<std::pair<unsigned int,std::string>,data::DbSecurityLibraryConfig,boost::hash<std::pair<unsigned int,std::string>>,std::equal_to<std::pair<unsigned int,std::string>>,std::allocator<std::pair<std::pair<unsigned int,std::string> const,data::DbSecurityLibraryConfig>>>::find(
                   map,
                   key)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], key);
  v2[8]._M_cur = std::unordered_map<std::pair<unsigned int,std::string>,data::DbSecurityLibraryConfig,boost::hash<std::pair<unsigned int,std::string>>,std::equal_to<std::pair<unsigned int,std::string>>,std::allocator<std::pair<std::pair<unsigned int,std::string> const,data::DbSecurityLibraryConfig>>>::end(map)._M_cur;
  v5 = std::__detail::operator!=<std::pair<std::pair const<unsigned int,std::string>,data::DbSecurityLibraryConfig>,true>(
         v2 + 4,
         v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
    result = &std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,std::string>,data::DbSecurityLibraryConfig>,false,true>::operator->(v2 + 4)->second;
  else
    result = 0LL;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,std::string >,data::DbSecurityLibraryConfig>,true>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 486: range 000000000CE66B68-000000000CE66CFC
common::tools::transcribe_cv_t_0 *__cdecl common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,std::vector<data::TowerRewardExcelConfig>> const>(
        const std::unordered_map<unsigned int,std::vector<data::TowerRewardExcelConfig>> *map,
        const std::unordered_map<unsigned int,std::vector<data::TowerRewardExcelConfig>>::key_type *key)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::TowerRewardExcelConfig> >,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  common::tools::transcribe_cv_t_0 *result; // rax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::TowerRewardExcelConfig> >,false,false> *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::TowerRewardExcelConfig> >,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::TowerRewardExcelConfig> >,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::TowerRewardExcelConfig> >,false>::__node_type *)"2 32 8 8 iter:488 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::TowerRewardExcelConfig> >,false>::__node_type *)common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,std::vector<data::TowerRewardExcelConfig>> const>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], key);
  v2[4]._M_cur = std::unordered_map<unsigned int,std::vector<data::TowerRewardExcelConfig>>::find(map, key)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], key);
  v2[8]._M_cur = std::unordered_map<unsigned int,std::vector<data::TowerRewardExcelConfig>>::end(map)._M_cur;
  v5 = std::__detail::operator!=<std::pair<unsigned int const,std::vector<data::TowerRewardExcelConfig>>,false>(
         v2 + 4,
         v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::TowerRewardExcelConfig>>,false,false>::operator->(v2 + 4)->second;
  else
    result = 0LL;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::TowerRewardExcelConfig> >,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 486: range 000000000CE62C40-000000000CE62DD4
common::tools::transcribe_cv_t_1 *__cdecl common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig> const>(
        const std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig> *map,
        const std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::key_type *key)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  common::tools::transcribe_cv_t_1 *result; // rax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false,false> *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false>::__node_type *)"2 32 8 8 iter:488 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false>::__node_type *)common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig> const>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], key);
  v2[4]._M_cur = std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::find(map, key)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], key);
  v2[8]._M_cur = std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::end(map)._M_cur;
  v5 = std::__detail::operator!=<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false>(
         v2 + 4,
         v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false,false>::operator->(v2 + 4)->second;
  else
    result = 0LL;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 486: range 000000000F7F10D8-000000000F7F126C
common::tools::transcribe_cv_t_2 *__cdecl common::tools::MiscUtils::findMapValuePointer<std::unordered_map<std::string,std::array<unsigned int,4ul>>>(
        std::unordered_map<std::string,std::array<unsigned int,4>> *map,
        const std::unordered_map<std::string,std::array<unsigned int,4>>::key_type *key)
{
  std::__detail::_Node_iterator<std::pair<const std::string,std::array<unsigned int,4> >,false,true> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  common::tools::transcribe_cv_t_2 *result; // rax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<const std::string,std::array<unsigned int,4> >,false,true> *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<const std::string,std::array<unsigned int,4> >,false,true> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::array<unsigned int,4> >,true>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::array<unsigned int,4> >,true>::__node_type *)"2 32 8 8 iter:488 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::array<unsigned int,4> >,true>::__node_type *)common::tools::MiscUtils::findMapValuePointer<std::unordered_map<std::string,std::array<unsigned int,4ul>>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], key);
  v2[4]._M_cur = std::unordered_map<std::string,std::array<unsigned int,4ul>>::find(map, key)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], key);
  v2[8]._M_cur = std::unordered_map<std::string,std::array<unsigned int,4ul>>::end(map)._M_cur;
  v5 = std::__detail::operator!=<std::pair<std::string const,std::array<unsigned int,4ul>>,true>(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
    result = &std::__detail::_Node_iterator<std::pair<std::string const,std::array<unsigned int,4ul>>,false,true>::operator->(v2 + 4)->second;
  else
    result = 0LL;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::array<unsigned int,4> >,true>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 486: range 000000000F7D92D8-000000000F7D946C
common::tools::transcribe_cv_t_3 *__cdecl common::tools::MiscUtils::findMapValuePointer<std::unordered_map<std::string,float>>(
        std::unordered_map<std::string,float> *map,
        const std::unordered_map<std::string,float>::key_type *key)
{
  std::__detail::_Node_iterator<std::pair<const std::string,float>,false,true> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  common::tools::transcribe_cv_t_3 *result; // rax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<const std::string,float>,false,true> *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<const std::string,float>,false,true> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,float>,true>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,float>,true>::__node_type *)"2 32 8 8 iter:488 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,float>,true>::__node_type *)common::tools::MiscUtils::findMapValuePointer<std::unordered_map<std::string,float>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], key);
  v2[4]._M_cur = std::unordered_map<std::string,float>::find(map, key)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], key);
  v2[8]._M_cur = std::unordered_map<std::string,float>::end(map)._M_cur;
  v5 = std::__detail::operator!=<std::pair<std::string const,float>,true>(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
    result = &std::__detail::_Node_iterator<std::pair<std::string const,float>,false,true>::operator->(v2 + 4)->second;
  else
    result = 0LL;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,float>,true>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 486: range 000000001480B742-000000001480B8D6
common::tools::transcribe_cv_t_3 *__cdecl common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,float>>(
        std::unordered_map<unsigned int,float> *map,
        const std::unordered_map<unsigned int,float>::key_type *key)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,float>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  common::tools::transcribe_cv_t_3 *result; // rax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,float>,false,false> *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,float>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,float>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,float>,false>::__node_type *)"2 32 8 8 iter:488 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,float>,false>::__node_type *)common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,float>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], key);
  v2[4]._M_cur = std::unordered_map<unsigned int,float>::find(map, key)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], key);
  v2[8]._M_cur = std::unordered_map<unsigned int,float>::end(map)._M_cur;
  v5 = std::__detail::operator!=<std::pair<unsigned int const,float>,false>(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,float>,false,false>::operator->(v2 + 4)->second;
  else
    result = 0LL;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,float>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 486: range 000000000F7D8E86-000000000F7D901A
common::tools::transcribe_cv_t_4 *__cdecl common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,ConfigSceneWeatherArea> const>(
        const std::unordered_map<unsigned int,ConfigSceneWeatherArea> *map,
        const std::unordered_map<unsigned int,ConfigSceneWeatherArea>::key_type *key)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,ConfigSceneWeatherArea>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  common::tools::transcribe_cv_t_4 *result; // rax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,ConfigSceneWeatherArea>,false,false> *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,ConfigSceneWeatherArea>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,ConfigSceneWeatherArea>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,ConfigSceneWeatherArea>,false>::__node_type *)"2 32 8 8 iter:488 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,ConfigSceneWeatherArea>,false>::__node_type *)common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,ConfigSceneWeatherArea> const>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], key);
  v2[4]._M_cur = std::unordered_map<unsigned int,ConfigSceneWeatherArea>::find(map, key)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], key);
  v2[8]._M_cur = std::unordered_map<unsigned int,ConfigSceneWeatherArea>::end(map)._M_cur;
  v5 = std::__detail::operator!=<std::pair<unsigned int const,ConfigSceneWeatherArea>,false>(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,ConfigSceneWeatherArea>,false,false>::operator->(v2 + 4)->second;
  else
    result = 0LL;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,ConfigSceneWeatherArea>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 486: range 0000000012F487D4-0000000012F48968
common::tools::transcribe_cv_t_5 *__cdecl common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,std::set<unsigned int>> const>(
        const std::map<unsigned int,std::set<unsigned int>> *map,
        const std::map<unsigned int,std::set<unsigned int>>::key_type *key)
{
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  common::tools::transcribe_cv_t_5 *result; // rax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Base_ptr)"2 32 8 8 iter:488 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Base_ptr)common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,std::set<unsigned int>> const>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], key);
  v2[4]._M_node = std::map<unsigned int,std::set<unsigned int>>::find(map, key)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], key);
  v2[8]._M_node = std::map<unsigned int,std::set<unsigned int>>::end(map)._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->(v2 + 4)->second;
  else
    result = 0LL;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 486: range 0000000012EE701A-0000000012EE71AE
common::tools::transcribe_cv_t_5 *__cdecl common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,std::set<unsigned int>> const>(
        const std::unordered_map<unsigned int,std::set<unsigned int>> *map,
        const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *key)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  common::tools::transcribe_cv_t_5 *result; // rax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false>::__node_type *)"2 32 8 8 iter:488 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false>::__node_type *)common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,std::set<unsigned int>> const>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], key);
  v2[4]._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::find(map, key)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], key);
  v2[8]._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::end(map)._M_cur;
  v5 = std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->(v2 + 4)->second;
  else
    result = 0LL;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 486: range 00000000147CA328-00000000147CA4BC
common::tools::transcribe_cv_t_6 *__cdecl common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig> const>(
        const std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig> *map,
        const std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>::key_type *key)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  common::tools::transcribe_cv_t_6 *result; // rax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig>,false,false> *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig>,false>::__node_type *)"2 32 8 8 iter:488 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig>,false>::__node_type *)common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig> const>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], key);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>::find(map, key)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], key);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>::end(map)._M_cur;
  v5 = std::__detail::operator!=<std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig>,false>(
         v2 + 4,
         v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig>,false,false>::operator->(v2 + 4)->second;
  else
    result = 0LL;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::HomeWorldWoodExchangeMaterialConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 486: range 00000000147CA192-00000000147CA326
common::tools::transcribe_cv_t_7 *__cdecl common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>> const>(
        const std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>> *map,
        const std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>>::key_type *key)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig> >,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  common::tools::transcribe_cv_t_7 *result; // rax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig> >,false,false> *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig> >,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig> >,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig> >,false>::__node_type *)"2 32 8 8 iter:488 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig> >,false>::__node_type *)common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>> const>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], key);
  v2[4]._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>>::find(
                   map,
                   key)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], key);
  v2[8]._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>>::end(map)._M_cur;
  v5 = std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>>,false>(
         v2 + 4,
         v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>>,false,false>::operator->(v2 + 4)->second;
  else
    result = 0LL;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig> >,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 486: range 00000000147C9E70-00000000147CA004
common::tools::transcribe_cv_t_8 *__cdecl common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>>>(
        std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>> *map,
        const std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>>::key_type *key)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig> >,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  common::tools::transcribe_cv_t_8 *result; // rax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig> >,false,false> *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig> >,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig> >,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig> >,false>::__node_type *)"2 32 8 8 iter:488 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig> >,false>::__node_type *)common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], key);
  v2[4]._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>>::find(
                   map,
                   key)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], key);
  v2[8]._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>>::end(map)._M_cur;
  v5 = std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>>,false>(
         v2 + 4,
         v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig>>,false,false>::operator->(v2 + 4)->second;
  else
    result = 0LL;
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::HomeWorldWoodExchangeMaterialConfig> >,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 498: range 000000000CF16CA6-000000000CF16F50
std::vector<LuaShellIndex> *__cdecl common::tools::MiscUtils::getAllMapKeys<std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>>(
        std::vector<LuaShellIndex> *retstr,
        const std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>> *map)
{
  std::__detail::_Node_const_iterator<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<LuaShellIndex>::size_type v5; // rsi
  LuaShellIndex *M_current; // rbx
  std::vector<LuaShellIndex>::iterator v7; // rax
  std::__detail::_Node_const_iterator<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false,false>::reference v10; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> > >::type *k; // [rsp+20h] [rbp-90h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false>::__node_type *)"2 32 8 15 __for_begin:502 64 8 13 __for_end:502";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false>::__node_type *)common::tools::MiscUtils::getAllMapKeys<std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::vector<LuaShellIndex>::vector(retstr);
  v5 = std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::size(map);
  std::vector<LuaShellIndex>::reserve(retstr, v5);
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v5);
  v2[4]._M_cur = std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::begin(map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v5);
  v2[8]._M_cur = std::unordered_map<LuaShellIndex,std::map<unsigned int,data::LuaShellConfig>>::end(map)._M_cur;
  while ( std::__detail::operator!=<std::pair<LuaShellIndex const,std::map<unsigned int,data::LuaShellConfig>>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<LuaShellIndex const,std::map<unsigned int,data::LuaShellConfig>>,false,false>::operator*(v2 + 4);
    k = std::get<0ul,LuaShellIndex const,std::map<unsigned int,data::LuaShellConfig>>(v10);
    std::get<1ul,LuaShellIndex const,std::map<unsigned int,data::LuaShellConfig>>(v10);
    std::vector<LuaShellIndex>::push_back(retstr, k);
    std::__detail::_Node_const_iterator<std::pair<LuaShellIndex const,std::map<unsigned int,data::LuaShellConfig>>,false,false>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  M_current = std::vector<LuaShellIndex>::end(retstr)._M_current;
  v7._M_current = std::vector<LuaShellIndex>::begin(retstr)._M_current;
  std::sort<__gnu_cxx::__normal_iterator<LuaShellIndex *,std::vector<LuaShellIndex>>>(
    v7,
    (__gnu_cxx::__normal_iterator<LuaShellIndex*,std::vector<LuaShellIndex> >)M_current);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const LuaShellIndex,std::map<unsigned int,data::LuaShellConfig> >,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 498: range 000000000F7F4488-000000000F7F4732
std::vector<std::string> *__cdecl common::tools::MiscUtils::getAllMapKeys<std::map<std::string,std::shared_ptr<LuaASTNode>>>(
        std::vector<std::string> *retstr,
        const std::map<std::string,std::shared_ptr<LuaASTNode>> *map)
{
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<LuaASTNode> > >::_Self *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<std::string>::size_type v5; // rsi
  std::string *M_current; // rbx
  std::vector<std::string>::iterator v7; // rax
  std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<LuaASTNode> > >::reference v10; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<const std::string,std::shared_ptr<LuaASTNode> > >::type *k; // [rsp+20h] [rbp-90h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<LuaASTNode> > >::_Self *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<LuaASTNode> > >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<LuaASTNode> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<LuaASTNode> > >::_Base_ptr)"2 32 8 15 __for_begin:502 64 8 13 __for_end:502";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<LuaASTNode> > >::_Base_ptr)common::tools::MiscUtils::getAllMapKeys<std::map<std::string,std::shared_ptr<LuaASTNode>>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::vector<std::string>::vector(retstr);
  v5 = std::map<std::string,std::shared_ptr<LuaASTNode>>::size(map);
  std::vector<std::string>::reserve(retstr, v5);
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v5);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<LuaASTNode>>::begin(map)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v5);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<LuaASTNode>>::end(map)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::shared_ptr<LuaASTNode>>>::operator*(v2 + 4);
    k = std::get<0ul,std::string const,std::shared_ptr<LuaASTNode>>(v10);
    std::get<1ul,std::string const,std::shared_ptr<LuaASTNode>>(v10);
    std::vector<std::string>::push_back(retstr, k);
    std::_Rb_tree_const_iterator<std::pair<std::string const,std::shared_ptr<LuaASTNode>>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  M_current = std::vector<std::string>::end(retstr)._M_current;
  v7._M_current = std::vector<std::string>::begin(retstr)._M_current;
  std::sort<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>>(
    v7,
    (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >)M_current);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<const std::string,std::shared_ptr<LuaASTNode> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 498: range 000000000CEEEE26-000000000CEEF0D0
std::vector<std::string> *__cdecl common::tools::MiscUtils::getAllMapKeys<std::unordered_map<std::string,data::CmdFrequencyConfig>>(
        std::vector<std::string> *retstr,
        const std::unordered_map<std::string,data::CmdFrequencyConfig> *map)
{
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::CmdFrequencyConfig>,false,true> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<std::string>::size_type v5; // rsi
  std::string *M_current; // rbx
  std::vector<std::string>::iterator v7; // rax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::CmdFrequencyConfig>,false,true>::reference v10; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<const std::string,data::CmdFrequencyConfig> >::type *k; // [rsp+20h] [rbp-90h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,data::CmdFrequencyConfig>,false,true> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,data::CmdFrequencyConfig>,false,true> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::CmdFrequencyConfig>,true>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::CmdFrequencyConfig>,true>::__node_type *)"2 32 8 15 __for_begin:502 64 8 13 __for_end:502";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::CmdFrequencyConfig>,true>::__node_type *)common::tools::MiscUtils::getAllMapKeys<std::unordered_map<std::string,data::CmdFrequencyConfig>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::vector<std::string>::vector(retstr);
  v5 = std::unordered_map<std::string,data::CmdFrequencyConfig>::size(map);
  std::vector<std::string>::reserve(retstr, v5);
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v5);
  v2[4]._M_cur = std::unordered_map<std::string,data::CmdFrequencyConfig>::begin(map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v5);
  v2[8]._M_cur = std::unordered_map<std::string,data::CmdFrequencyConfig>::end(map)._M_cur;
  while ( std::__detail::operator!=<std::pair<std::string const,data::CmdFrequencyConfig>,true>(v2 + 4, v2 + 8) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::CmdFrequencyConfig>,false,true>::operator*(v2 + 4);
    k = std::get<0ul,std::string const,data::CmdFrequencyConfig>(v10);
    std::get<1ul,std::string const,data::CmdFrequencyConfig>(v10);
    std::vector<std::string>::push_back(retstr, k);
    std::__detail::_Node_const_iterator<std::pair<std::string const,data::CmdFrequencyConfig>,false,true>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  M_current = std::vector<std::string>::end(retstr)._M_current;
  v7._M_current = std::vector<std::string>::begin(retstr)._M_current;
  std::sort<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>>(
    v7,
    (__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >)M_current);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,data::CmdFrequencyConfig>,true>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 498: range 0000000012F17142-0000000012F173EC
std::vector<unsigned int> *__cdecl common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,data::MichiaeBattleSkillExcelConfig>>(
        std::vector<unsigned int> *retstr,
        const std::map<unsigned int,data::MichiaeBattleSkillExcelConfig> *map)
{
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig> >::_Self *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<unsigned int>::size_type v5; // rsi
  unsigned int *M_current; // rbx
  std::vector<unsigned int>::iterator v7; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig> >::reference v10; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig> >::type *k; // [rsp+20h] [rbp-90h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig> >::_Self *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig> >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig> >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig> >::_Base_ptr)"2 32 8 15 __for_begin:502 64 8 13 __for_end:502";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig> >::_Base_ptr)common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,data::MichiaeBattleSkillExcelConfig>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::vector<unsigned int>::vector(retstr);
  v5 = std::map<unsigned int,data::MichiaeBattleSkillExcelConfig>::size(map);
  std::vector<unsigned int>::reserve(retstr, v5);
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v5);
  v2[4]._M_node = std::map<unsigned int,data::MichiaeBattleSkillExcelConfig>::begin(map)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v5);
  v2[8]._M_node = std::map<unsigned int,data::MichiaeBattleSkillExcelConfig>::end(map)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig>>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,data::MichiaeBattleSkillExcelConfig>(v10);
    std::get<1ul,unsigned int const,data::MichiaeBattleSkillExcelConfig>(v10);
    std::vector<unsigned int>::push_back(retstr, k);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  M_current = std::vector<unsigned int>::end(retstr)._M_current;
  v7._M_current = std::vector<unsigned int>::begin(retstr)._M_current;
  std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
    v7,
    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::MichiaeBattleSkillExcelConfig> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 498: range 000000000CE62DD6-000000000CE63080
std::vector<unsigned int> *__cdecl common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,unsigned int>>(
        std::vector<unsigned int> *retstr,
        const std::map<unsigned int,unsigned int> *map)
{
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<unsigned int>::size_type v5; // rsi
  unsigned int *M_current; // rbx
  std::vector<unsigned int>::iterator v7; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v10; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *k; // [rsp+20h] [rbp-90h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)"2 32 8 15 __for_begin:502 64 8 13 __for_end:502";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,unsigned int>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::vector<unsigned int>::vector(retstr);
  v5 = std::map<unsigned int,unsigned int>::size(map);
  std::vector<unsigned int>::reserve(retstr, v5);
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v5);
  v2[4]._M_node = std::map<unsigned int,unsigned int>::begin(map)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v5);
  v2[8]._M_node = std::map<unsigned int,unsigned int>::end(map)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,unsigned int>(v10);
    std::get<1ul,unsigned int const,unsigned int>(v10);
    std::vector<unsigned int>::push_back(retstr, k);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  M_current = std::vector<unsigned int>::end(retstr)._M_current;
  v7._M_current = std::vector<unsigned int>::begin(retstr)._M_current;
  std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
    v7,
    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 498: range 00000000128F6EAE-00000000128F7158
std::vector<unsigned int> *__cdecl common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,PointScriptConfig>>(
        std::vector<unsigned int> *retstr,
        const std::unordered_map<unsigned int,PointScriptConfig> *map)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,PointScriptConfig>,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<unsigned int>::size_type v5; // rsi
  unsigned int *M_current; // rbx
  std::vector<unsigned int>::iterator v7; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,PointScriptConfig>,false,false>::reference v10; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,PointScriptConfig> >::type *k; // [rsp+20h] [rbp-90h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,PointScriptConfig>,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,PointScriptConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,PointScriptConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,PointScriptConfig>,false>::__node_type *)"2 32 8 15 __for_begin:502 64 8 13 __for_end:502";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,PointScriptConfig>,false>::__node_type *)common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,PointScriptConfig>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::vector<unsigned int>::vector(retstr);
  v5 = std::unordered_map<unsigned int,PointScriptConfig>::size(map);
  std::vector<unsigned int>::reserve(retstr, v5);
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v5);
  v2[4]._M_cur = std::unordered_map<unsigned int,PointScriptConfig>::begin(map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v5);
  v2[8]._M_cur = std::unordered_map<unsigned int,PointScriptConfig>::end(map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,PointScriptConfig>,false>(v2 + 4, v2 + 8) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,PointScriptConfig>,false,false>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,PointScriptConfig>(v10);
    std::get<1ul,unsigned int const,PointScriptConfig>(v10);
    std::vector<unsigned int>::push_back(retstr, k);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,PointScriptConfig>,false,false>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  M_current = std::vector<unsigned int>::end(retstr)._M_current;
  v7._M_current = std::vector<unsigned int>::begin(retstr)._M_current;
  std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
    v7,
    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,PointScriptConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 498: range 000000000CE5BA10-000000000CE5BCBA
std::vector<unsigned int> *__cdecl common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,data::SignInCondExcelConfig>>(
        std::vector<unsigned int> *retstr,
        const std::unordered_map<unsigned int,data::SignInCondExcelConfig> *map)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SignInCondExcelConfig>,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<unsigned int>::size_type v5; // rsi
  unsigned int *M_current; // rbx
  std::vector<unsigned int>::iterator v7; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SignInCondExcelConfig>,false,false>::reference v10; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::SignInCondExcelConfig> >::type *k; // [rsp+20h] [rbp-90h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SignInCondExcelConfig>,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SignInCondExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SignInCondExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SignInCondExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:502 64 8 13 __for_end:502";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SignInCondExcelConfig>,false>::__node_type *)common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,data::SignInCondExcelConfig>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::vector<unsigned int>::vector(retstr);
  v5 = std::unordered_map<unsigned int,data::SignInCondExcelConfig>::size(map);
  std::vector<unsigned int>::reserve(retstr, v5);
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v5);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::SignInCondExcelConfig>::begin(map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v5);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::SignInCondExcelConfig>::end(map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::SignInCondExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SignInCondExcelConfig>,false,false>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,data::SignInCondExcelConfig>(v10);
    std::get<1ul,unsigned int const,data::SignInCondExcelConfig>(v10);
    std::vector<unsigned int>::push_back(retstr, k);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::SignInCondExcelConfig>,false,false>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  M_current = std::vector<unsigned int>::end(retstr)._M_current;
  v7._M_current = std::vector<unsigned int>::begin(retstr)._M_current;
  std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
    v7,
    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SignInCondExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 498: range 0000000012F47180-0000000012F4742A
std::vector<unsigned int> *__cdecl common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,data::VintageMarketHelpSkillExcelConfig>>(
        std::vector<unsigned int> *retstr,
        const std::unordered_map<unsigned int,data::VintageMarketHelpSkillExcelConfig> *map)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig>,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<unsigned int>::size_type v5; // rsi
  unsigned int *M_current; // rbx
  std::vector<unsigned int>::iterator v7; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig>,false,false>::reference v10; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig> >::type *k; // [rsp+20h] [rbp-90h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig>,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:502 64 8 13 __for_end:502";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig>,false>::__node_type *)common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,data::VintageMarketHelpSkillExcelConfig>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::vector<unsigned int>::vector(retstr);
  v5 = std::unordered_map<unsigned int,data::VintageMarketHelpSkillExcelConfig>::size(map);
  std::vector<unsigned int>::reserve(retstr, v5);
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v5);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::VintageMarketHelpSkillExcelConfig>::begin(map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v5);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::VintageMarketHelpSkillExcelConfig>::end(map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig>,false,false>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,data::VintageMarketHelpSkillExcelConfig>(v10);
    std::get<1ul,unsigned int const,data::VintageMarketHelpSkillExcelConfig>(v10);
    std::vector<unsigned int>::push_back(retstr, k);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig>,false,false>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  M_current = std::vector<unsigned int>::end(retstr)._M_current;
  v7._M_current = std::vector<unsigned int>::begin(retstr)._M_current;
  std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
    v7,
    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketHelpSkillExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 498: range 000000000CE5BCBC-000000000CE5BF66
std::vector<unsigned int> *__cdecl common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>>(
        std::vector<unsigned int> *retstr,
        const std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>> *map)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig> >,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<unsigned int>::size_type v5; // rsi
  unsigned int *M_current; // rbx
  std::vector<unsigned int>::iterator v7; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig> >,false,false>::reference v10; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig> > >::type *k; // [rsp+20h] [rbp-90h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig> >,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig> >,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig> >,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig> >,false>::__node_type *)"2 32 8 15 __for_begin:502 64 8 13 __for_end:502";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig> >,false>::__node_type *)common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::vector<unsigned int>::vector(retstr);
  v5 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>::size(map);
  std::vector<unsigned int>::reserve(retstr, v5);
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v5);
  v2[4]._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>::begin(map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v5);
  v2[8]._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>::end(map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>,false,false>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>(v10);
    std::get<1ul,unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>(v10);
    std::vector<unsigned int>::push_back(retstr, k);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig>>,false,false>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  M_current = std::vector<unsigned int>::end(retstr)._M_current;
  v7._M_current = std::vector<unsigned int>::begin(retstr)._M_current;
  std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
    v7,
    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::SignInDayExcelConfig> >,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 498: range 0000000012ED9050-0000000012ED92FA
std::vector<unsigned int> *__cdecl common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,unsigned int>>(
        std::vector<unsigned int> *retstr,
        const std::unordered_map<unsigned int,unsigned int> *map)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<unsigned int>::size_type v5; // rsi
  unsigned int *M_current; // rbx
  std::vector<unsigned int>::iterator v7; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v10; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *k; // [rsp+20h] [rbp-90h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)"2 32 8 15 __for_begin:502 64 8 13 __for_end:502";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,unsigned int>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::vector<unsigned int>::vector(retstr);
  v5 = std::unordered_map<unsigned int,unsigned int>::size(map);
  std::vector<unsigned int>::reserve(retstr, v5);
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v5);
  v2[4]._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v5);
  v2[8]._M_cur = std::unordered_map<unsigned int,unsigned int>::end(map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(v2 + 4, v2 + 8) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,unsigned int>(v10);
    std::get<1ul,unsigned int const,unsigned int>(v10);
    std::vector<unsigned int>::push_back(retstr, k);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(v2 + 4);
  }
  *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  M_current = std::vector<unsigned int>::end(retstr)._M_current;
  v7._M_current = std::vector<unsigned int>::begin(retstr)._M_current;
  std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
    v7,
    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 512: range 0000000012F45264-0000000012F4549D
std::set<unsigned int> *__cdecl common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,ActivityVintageMarketStoreConfig>>(
        std::set<unsigned int> *retstr,
        const std::map<unsigned int,ActivityVintageMarketStoreConfig> *map)
{
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::_Self *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::reference v6; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::type *k; // [rsp+20h] [rbp-90h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::_Self *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::_Self *)v3;
  }
  v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::_Base_ptr)"2 32 8 15 __for_begin:515 64 8 13 __for_end:515";
  v2[2]._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::_Base_ptr)common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,ActivityVintageMarketStoreConfig>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::set<unsigned int>::set(retstr);
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], map);
  v2[4]._M_node = std::map<unsigned int,ActivityVintageMarketStoreConfig>::begin(map)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], map);
  v2[8]._M_node = std::map<unsigned int,ActivityVintageMarketStoreConfig>::end(map)._M_node;
  while ( std::operator!=(v2 + 4, v2 + 8) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig>>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,ActivityVintageMarketStoreConfig>(v6);
    std::get<1ul,unsigned int const,ActivityVintageMarketStoreConfig>(v6);
    std::set<unsigned int>::insert(retstr, k);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig>>::operator++(v2 + 4);
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityVintageMarketStoreConfig> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 512: range 00000000147C4D18-00000000147C4F51
std::set<unsigned int> *__cdecl common::tools::MiscUtils::getAllMapKeysSet<std::unordered_map<unsigned int,data::GadgetChainExcelConfig>>(
        std::set<unsigned int> *retstr,
        const std::unordered_map<unsigned int,data::GadgetChainExcelConfig> *map)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GadgetChainExcelConfig>,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GadgetChainExcelConfig>,false,false>::reference v6; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::GadgetChainExcelConfig> >::type *k; // [rsp+20h] [rbp-90h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GadgetChainExcelConfig>,false,false> *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GadgetChainExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GadgetChainExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GadgetChainExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:515 64 8 13 __for_end:515";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GadgetChainExcelConfig>,false>::__node_type *)common::tools::MiscUtils::getAllMapKeysSet<std::unordered_map<unsigned int,data::GadgetChainExcelConfig>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::set<unsigned int>::set(retstr);
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], map);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::GadgetChainExcelConfig>::begin(map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], map);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::GadgetChainExcelConfig>::end(map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GadgetChainExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GadgetChainExcelConfig>,false,false>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,data::GadgetChainExcelConfig>(v6);
    std::get<1ul,unsigned int const,data::GadgetChainExcelConfig>(v6);
    std::set<unsigned int>::insert(retstr, k);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GadgetChainExcelConfig>,false,false>::operator++(v2 + 4);
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GadgetChainExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 512: range 000000001480B8D8-000000001480BB11
std::set<unsigned int> *__cdecl common::tools::MiscUtils::getAllMapKeysSet<std::unordered_map<unsigned int,data::ReliquaryMainPropGuaranteeExcelConfig>>(
        std::set<unsigned int> *retstr,
        const std::unordered_map<unsigned int,data::ReliquaryMainPropGuaranteeExcelConfig> *map)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false,false>::reference v6; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig> >::type *k; // [rsp+20h] [rbp-90h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false,false> *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:515 64 8 13 __for_end:515";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false>::__node_type *)common::tools::MiscUtils::getAllMapKeysSet<std::unordered_map<unsigned int,data::ReliquaryMainPropGuaranteeExcelConfig>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::set<unsigned int>::set(retstr);
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], map);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::ReliquaryMainPropGuaranteeExcelConfig>::begin(map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], map);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::ReliquaryMainPropGuaranteeExcelConfig>::end(map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false,false>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>(v6);
    std::get<1ul,unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>(v6);
    std::set<unsigned int>::insert(retstr, k);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false,false>::operator++(v2 + 4);
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ReliquaryMainPropGuaranteeExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 512: range 0000000012F45AB6-0000000012F45CEF
std::set<unsigned int> *__cdecl common::tools::MiscUtils::getAllMapKeysSet<std::unordered_map<unsigned int,data::VintageMarketRoundExcelConfig>>(
        std::set<unsigned int> *retstr,
        const std::unordered_map<unsigned int,data::VintageMarketRoundExcelConfig> *map)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::VintageMarketRoundExcelConfig>,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::VintageMarketRoundExcelConfig>,false,false>::reference v6; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::VintageMarketRoundExcelConfig> >::type *k; // [rsp+20h] [rbp-90h]
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::VintageMarketRoundExcelConfig>,false,false> *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::VintageMarketRoundExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketRoundExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketRoundExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:515 64 8 13 __for_end:515";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketRoundExcelConfig>,false>::__node_type *)common::tools::MiscUtils::getAllMapKeysSet<std::unordered_map<unsigned int,data::VintageMarketRoundExcelConfig>>;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::set<unsigned int>::set(retstr);
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], map);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::VintageMarketRoundExcelConfig>::begin(map)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], map);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::VintageMarketRoundExcelConfig>::end(map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::VintageMarketRoundExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::VintageMarketRoundExcelConfig>,false,false>::operator*(v2 + 4);
    k = std::get<0ul,unsigned int const,data::VintageMarketRoundExcelConfig>(v6);
    std::get<1ul,unsigned int const,data::VintageMarketRoundExcelConfig>(v6);
    std::set<unsigned int>::insert(retstr, k);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::VintageMarketRoundExcelConfig>,false,false>::operator++(v2 + 4);
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::VintageMarketRoundExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 545: range 0000000014714EC8-000000001471517A
std::vector<data::GCGChallengeReward>::size_type __fastcall common::tools::MiscUtils::erase_if<data::GCGChallengeReward,GCGPlayingExcelConfigMgr::rewriteGameRewardConfig(TxtConfigMgr &)::{lambda(data::GCGChallengeReward&)#1}>(
        std::vector<data::GCGChallengeReward> *vec,
        data::GCGChallengeReward *pred,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  bool v10; // al
  std::vector<data::GCGChallengeReward>::size_type result; // rax
  std::vector<data::GCGChallengeReward>::size_type num; // [rsp+18h] [rbp-C8h]
  char v13[192]; // [rsp+20h] [rbp-C0h] BYREF

  v7 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 48 1 8 pred:545 64 8 8 iter:548 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v7 + 16) = common::tools::MiscUtils::erase_if<data::GCGChallengeReward,GCGPlayingExcelConfigMgr::rewriteGameRewardConfig(TxtConfigMgr &)::{lambda(data::GCGChallengeReward&)#1}>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -218959360;
  v9[536862723] = -218959360;
  v9[536862724] = -202116352;
  *(_BYTE *)(v7 + 48) = a7;
  num = 0LL;
  if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v7 + 64, pred);
  *(std::vector<data::GCGChallengeReward>::iterator *)(v7 + 64) = std::vector<data::GCGChallengeReward>::begin(vec);
  while ( 1 )
  {
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v7 + 96, pred);
    *(std::vector<data::GCGChallengeReward>::iterator *)(v7 + 96) = std::vector<data::GCGChallengeReward>::end(vec);
    v10 = __gnu_cxx::operator!=<data::GCGChallengeReward *,std::vector<data::GCGChallengeReward>>(
            (const __gnu_cxx::__normal_iterator<data::GCGChallengeReward*,std::vector<data::GCGChallengeReward> > *)(v7 + 64),
            (const __gnu_cxx::__normal_iterator<data::GCGChallengeReward*,std::vector<data::GCGChallengeReward> > *)(v7 + 96));
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v10 )
      break;
    pred = __gnu_cxx::__normal_iterator<data::GCGChallengeReward *,std::vector<data::GCGChallengeReward>>::operator*((const __gnu_cxx::__normal_iterator<data::GCGChallengeReward*,std::vector<data::GCGChallengeReward> > *const)(v7 + 64));
    if ( GCGPlayingExcelConfigMgr::rewriteGameRewardConfig(TxtConfigMgr &)::{lambda(data::GCGChallengeReward &)#1}::operator()(
           (const GCGPlayingExcelConfigMgr::rewriteGameRewardConfig::<lambda(data::GCGChallengeReward&)> *const)(v7 + 48),
           pred) )
    {
      *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = 0;
      __gnu_cxx::__normal_iterator<data::GCGChallengeReward const*,std::vector<data::GCGChallengeReward>>::__normal_iterator<data::GCGChallengeReward*>(
        (__gnu_cxx::__normal_iterator<const data::GCGChallengeReward*,std::vector<data::GCGChallengeReward> > *const)(v7 + 128),
        (const __gnu_cxx::__normal_iterator<data::GCGChallengeReward*,std::vector<data::GCGChallengeReward> > *)(v7 + 64));
      if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v7 + 64, v7 + 64);
      if ( *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v7 + 128);
      pred = *(data::GCGChallengeReward **)(v7 + 128);
      *(std::vector<data::GCGChallengeReward>::iterator *)(v7 + 64) = std::vector<data::GCGChallengeReward>::erase(
                                                                        vec,
                                                                        (std::vector<data::GCGChallengeReward>::const_iterator)pred);
      *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = -8;
      ++num;
    }
    else
    {
      __gnu_cxx::__normal_iterator<data::GCGChallengeReward *,std::vector<data::GCGChallengeReward>>::operator++((__gnu_cxx::__normal_iterator<data::GCGChallengeReward*,std::vector<data::GCGChallengeReward> > *const)(v7 + 64));
    }
  }
  result = num;
  if ( v13 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 545: range 0000000014714ADE-0000000014714D90
std::vector<data::GCGCharacterDynamicLevel>::size_type __fastcall common::tools::MiscUtils::erase_if<data::GCGCharacterDynamicLevel,GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig(TxtConfigMgr &)::{lambda(data::GCGCharacterDynamicLevel&)#1}>(
        std::vector<data::GCGCharacterDynamicLevel> *vec,
        data::GCGCharacterDynamicLevel *pred,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  bool v10; // al
  std::vector<data::GCGCharacterDynamicLevel>::size_type result; // rax
  std::vector<data::GCGCharacterDynamicLevel>::size_type num; // [rsp+18h] [rbp-C8h]
  char v13[192]; // [rsp+20h] [rbp-C0h] BYREF

  v7 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 48 1 8 pred:545 64 8 8 iter:548 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v7 + 16) = common::tools::MiscUtils::erase_if<data::GCGCharacterDynamicLevel,GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig(TxtConfigMgr &)::{lambda(data::GCGCharacterDynamicLevel&)#1}>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -218959360;
  v9[536862723] = -218959360;
  v9[536862724] = -202116352;
  *(_BYTE *)(v7 + 48) = a7;
  num = 0LL;
  if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v7 + 64, pred);
  *(std::vector<data::GCGCharacterDynamicLevel>::iterator *)(v7 + 64) = std::vector<data::GCGCharacterDynamicLevel>::begin(vec);
  while ( 1 )
  {
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v7 + 96, pred);
    *(std::vector<data::GCGCharacterDynamicLevel>::iterator *)(v7 + 96) = std::vector<data::GCGCharacterDynamicLevel>::end(vec);
    v10 = __gnu_cxx::operator!=<data::GCGCharacterDynamicLevel *,std::vector<data::GCGCharacterDynamicLevel>>(
            (const __gnu_cxx::__normal_iterator<data::GCGCharacterDynamicLevel*,std::vector<data::GCGCharacterDynamicLevel> > *)(v7 + 64),
            (const __gnu_cxx::__normal_iterator<data::GCGCharacterDynamicLevel*,std::vector<data::GCGCharacterDynamicLevel> > *)(v7 + 96));
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v10 )
      break;
    pred = __gnu_cxx::__normal_iterator<data::GCGCharacterDynamicLevel *,std::vector<data::GCGCharacterDynamicLevel>>::operator*((const __gnu_cxx::__normal_iterator<data::GCGCharacterDynamicLevel*,std::vector<data::GCGCharacterDynamicLevel> > *const)(v7 + 64));
    if ( GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig(TxtConfigMgr &)::{lambda(data::GCGCharacterDynamicLevel &)#1}::operator()(
           (const GCGPlayingExcelConfigMgr::rewriteCharacterLevelConfig::<lambda(data::GCGCharacterDynamicLevel&)> *const)(v7 + 48),
           pred) )
    {
      *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = 0;
      __gnu_cxx::__normal_iterator<data::GCGCharacterDynamicLevel const*,std::vector<data::GCGCharacterDynamicLevel>>::__normal_iterator<data::GCGCharacterDynamicLevel*>(
        (__gnu_cxx::__normal_iterator<const data::GCGCharacterDynamicLevel*,std::vector<data::GCGCharacterDynamicLevel> > *const)(v7 + 128),
        (const __gnu_cxx::__normal_iterator<data::GCGCharacterDynamicLevel*,std::vector<data::GCGCharacterDynamicLevel> > *)(v7 + 64));
      if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v7 + 64, v7 + 64);
      if ( *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v7 + 128);
      pred = *(data::GCGCharacterDynamicLevel **)(v7 + 128);
      *(std::vector<data::GCGCharacterDynamicLevel>::iterator *)(v7 + 64) = std::vector<data::GCGCharacterDynamicLevel>::erase(
                                                                              vec,
                                                                              (std::vector<data::GCGCharacterDynamicLevel>::const_iterator)pred);
      *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = -8;
      ++num;
    }
    else
    {
      __gnu_cxx::__normal_iterator<data::GCGCharacterDynamicLevel *,std::vector<data::GCGCharacterDynamicLevel>>::operator++((__gnu_cxx::__normal_iterator<data::GCGCharacterDynamicLevel*,std::vector<data::GCGCharacterDynamicLevel> > *const)(v7 + 64));
    }
  }
  result = num;
  if ( v13 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 545: range 0000000014714576-0000000014714828
std::vector<data::GCGChooseSortCond>::size_type __fastcall common::tools::MiscUtils::erase_if<data::GCGChooseSortCond,GCGGameExcelConfigMgr::rewriteChooseTargetConfig(TxtConfigMgr &)::{lambda(data::GCGChooseSortCond&)#2}>(
        std::vector<data::GCGChooseSortCond> *vec,
        data::GCGChooseSortCond *pred,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  bool v10; // al
  std::vector<data::GCGChooseSortCond>::size_type result; // rax
  std::vector<data::GCGChooseSortCond>::size_type num; // [rsp+18h] [rbp-C8h]
  char v13[192]; // [rsp+20h] [rbp-C0h] BYREF

  v7 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 48 1 8 pred:545 64 8 8 iter:548 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v7 + 16) = common::tools::MiscUtils::erase_if<data::GCGChooseSortCond,GCGGameExcelConfigMgr::rewriteChooseTargetConfig(TxtConfigMgr &)::{lambda(data::GCGChooseSortCond&)#2}>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -218959360;
  v9[536862723] = -218959360;
  v9[536862724] = -202116352;
  *(_BYTE *)(v7 + 48) = a7;
  num = 0LL;
  if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v7 + 64, pred);
  *(std::vector<data::GCGChooseSortCond>::iterator *)(v7 + 64) = std::vector<data::GCGChooseSortCond>::begin(vec);
  while ( 1 )
  {
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v7 + 96, pred);
    *(std::vector<data::GCGChooseSortCond>::iterator *)(v7 + 96) = std::vector<data::GCGChooseSortCond>::end(vec);
    v10 = __gnu_cxx::operator!=<data::GCGChooseSortCond *,std::vector<data::GCGChooseSortCond>>(
            (const __gnu_cxx::__normal_iterator<data::GCGChooseSortCond*,std::vector<data::GCGChooseSortCond> > *)(v7 + 64),
            (const __gnu_cxx::__normal_iterator<data::GCGChooseSortCond*,std::vector<data::GCGChooseSortCond> > *)(v7 + 96));
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v10 )
      break;
    pred = __gnu_cxx::__normal_iterator<data::GCGChooseSortCond *,std::vector<data::GCGChooseSortCond>>::operator*((const __gnu_cxx::__normal_iterator<data::GCGChooseSortCond*,std::vector<data::GCGChooseSortCond> > *const)(v7 + 64));
    if ( GCGGameExcelConfigMgr::rewriteChooseTargetConfig(TxtConfigMgr &)::{lambda(data::GCGChooseSortCond &)#2}::operator()(
           (const GCGGameExcelConfigMgr::rewriteChooseTargetConfig::<lambda(data::GCGChooseSortCond&)> *const)(v7 + 48),
           pred) )
    {
      *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = 0;
      __gnu_cxx::__normal_iterator<data::GCGChooseSortCond const*,std::vector<data::GCGChooseSortCond>>::__normal_iterator<data::GCGChooseSortCond*>(
        (__gnu_cxx::__normal_iterator<const data::GCGChooseSortCond*,std::vector<data::GCGChooseSortCond> > *const)(v7 + 128),
        (const __gnu_cxx::__normal_iterator<data::GCGChooseSortCond*,std::vector<data::GCGChooseSortCond> > *)(v7 + 64));
      if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v7 + 64, v7 + 64);
      if ( *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v7 + 128);
      pred = *(data::GCGChooseSortCond **)(v7 + 128);
      *(std::vector<data::GCGChooseSortCond>::iterator *)(v7 + 64) = std::vector<data::GCGChooseSortCond>::erase(
                                                                       vec,
                                                                       (std::vector<data::GCGChooseSortCond>::const_iterator)pred);
      *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = -8;
      ++num;
    }
    else
    {
      __gnu_cxx::__normal_iterator<data::GCGChooseSortCond *,std::vector<data::GCGChooseSortCond>>::operator++((__gnu_cxx::__normal_iterator<data::GCGChooseSortCond*,std::vector<data::GCGChooseSortCond> > *const)(v7 + 64));
    }
  }
  result = num;
  if ( v13 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 545: range 00000000147142C2-0000000014714574
std::vector<data::GCGChooseTargetCond>::size_type __fastcall common::tools::MiscUtils::erase_if<data::GCGChooseTargetCond,GCGGameExcelConfigMgr::rewriteChooseTargetConfig(TxtConfigMgr &)::{lambda(data::GCGChooseTargetCond&)#1}>(
        std::vector<data::GCGChooseTargetCond> *vec,
        data::GCGChooseTargetCond *pred,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  bool v10; // al
  std::vector<data::GCGChooseTargetCond>::size_type result; // rax
  std::vector<data::GCGChooseTargetCond>::size_type num; // [rsp+18h] [rbp-C8h]
  char v13[192]; // [rsp+20h] [rbp-C0h] BYREF

  v7 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 48 1 8 pred:545 64 8 8 iter:548 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v7 + 16) = common::tools::MiscUtils::erase_if<data::GCGChooseTargetCond,GCGGameExcelConfigMgr::rewriteChooseTargetConfig(TxtConfigMgr &)::{lambda(data::GCGChooseTargetCond&)#1}>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -218959360;
  v9[536862723] = -218959360;
  v9[536862724] = -202116352;
  *(_BYTE *)(v7 + 48) = a7;
  num = 0LL;
  if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v7 + 64, pred);
  *(std::vector<data::GCGChooseTargetCond>::iterator *)(v7 + 64) = std::vector<data::GCGChooseTargetCond>::begin(vec);
  while ( 1 )
  {
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v7 + 96, pred);
    *(std::vector<data::GCGChooseTargetCond>::iterator *)(v7 + 96) = std::vector<data::GCGChooseTargetCond>::end(vec);
    v10 = __gnu_cxx::operator!=<data::GCGChooseTargetCond *,std::vector<data::GCGChooseTargetCond>>(
            (const __gnu_cxx::__normal_iterator<data::GCGChooseTargetCond*,std::vector<data::GCGChooseTargetCond> > *)(v7 + 64),
            (const __gnu_cxx::__normal_iterator<data::GCGChooseTargetCond*,std::vector<data::GCGChooseTargetCond> > *)(v7 + 96));
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v10 )
      break;
    pred = __gnu_cxx::__normal_iterator<data::GCGChooseTargetCond *,std::vector<data::GCGChooseTargetCond>>::operator*((const __gnu_cxx::__normal_iterator<data::GCGChooseTargetCond*,std::vector<data::GCGChooseTargetCond> > *const)(v7 + 64));
    if ( GCGGameExcelConfigMgr::rewriteChooseTargetConfig(TxtConfigMgr &)::{lambda(data::GCGChooseTargetCond &)#1}::operator()(
           (const GCGGameExcelConfigMgr::rewriteChooseTargetConfig::<lambda(data::GCGChooseTargetCond&)> *const)(v7 + 48),
           pred) )
    {
      *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = 0;
      __gnu_cxx::__normal_iterator<data::GCGChooseTargetCond const*,std::vector<data::GCGChooseTargetCond>>::__normal_iterator<data::GCGChooseTargetCond*>(
        (__gnu_cxx::__normal_iterator<const data::GCGChooseTargetCond*,std::vector<data::GCGChooseTargetCond> > *const)(v7 + 128),
        (const __gnu_cxx::__normal_iterator<data::GCGChooseTargetCond*,std::vector<data::GCGChooseTargetCond> > *)(v7 + 64));
      if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v7 + 64, v7 + 64);
      if ( *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v7 + 128);
      pred = *(data::GCGChooseTargetCond **)(v7 + 128);
      *(std::vector<data::GCGChooseTargetCond>::iterator *)(v7 + 64) = std::vector<data::GCGChooseTargetCond>::erase(
                                                                         vec,
                                                                         (std::vector<data::GCGChooseTargetCond>::const_iterator)pred);
      *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = -8;
      ++num;
    }
    else
    {
      __gnu_cxx::__normal_iterator<data::GCGChooseTargetCond *,std::vector<data::GCGChooseTargetCond>>::operator++((__gnu_cxx::__normal_iterator<data::GCGChooseTargetCond*,std::vector<data::GCGChooseTargetCond> > *const)(v7 + 64));
    }
  }
  result = num;
  if ( v13 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 545: range 0000000014713AA6-0000000014713D58
std::vector<data::GCGCost>::size_type __fastcall common::tools::MiscUtils::erase_if<data::GCGCost,GCGGameExcelConfigMgr::rewriteCardConfig(TxtConfigMgr &)::{lambda(data::GCGCost&)#2}>(
        std::vector<data::GCGCost> *vec,
        data::GCGCost *pred,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  bool v10; // al
  std::vector<data::GCGCost>::size_type result; // rax
  std::vector<data::GCGCost>::size_type num; // [rsp+18h] [rbp-C8h]
  char v13[192]; // [rsp+20h] [rbp-C0h] BYREF

  v7 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 48 1 8 pred:545 64 8 8 iter:548 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v7 + 16) = common::tools::MiscUtils::erase_if<data::GCGCost,GCGGameExcelConfigMgr::rewriteCardConfig(TxtConfigMgr &)::{lambda(data::GCGCost&)#2}>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -218959360;
  v9[536862723] = -218959360;
  v9[536862724] = -202116352;
  *(_BYTE *)(v7 + 48) = a7;
  num = 0LL;
  if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v7 + 64, pred);
  *(std::vector<data::GCGCost>::iterator *)(v7 + 64) = std::vector<data::GCGCost>::begin(vec);
  while ( 1 )
  {
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v7 + 96, pred);
    *(std::vector<data::GCGCost>::iterator *)(v7 + 96) = std::vector<data::GCGCost>::end(vec);
    v10 = __gnu_cxx::operator!=<data::GCGCost *,std::vector<data::GCGCost>>(
            (const __gnu_cxx::__normal_iterator<data::GCGCost*,std::vector<data::GCGCost> > *)(v7 + 64),
            (const __gnu_cxx::__normal_iterator<data::GCGCost*,std::vector<data::GCGCost> > *)(v7 + 96));
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v10 )
      break;
    pred = __gnu_cxx::__normal_iterator<data::GCGCost *,std::vector<data::GCGCost>>::operator*((const __gnu_cxx::__normal_iterator<data::GCGCost*,std::vector<data::GCGCost> > *const)(v7 + 64));
    if ( GCGGameExcelConfigMgr::rewriteCardConfig(TxtConfigMgr &)::{lambda(data::GCGCost &)#2}::operator()(
           (const GCGGameExcelConfigMgr::rewriteCardConfig::<lambda(data::GCGCost&)> *const)(v7 + 48),
           pred) )
    {
      *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = 0;
      __gnu_cxx::__normal_iterator<data::GCGCost const*,std::vector<data::GCGCost>>::__normal_iterator<data::GCGCost*>(
        (__gnu_cxx::__normal_iterator<const data::GCGCost*,std::vector<data::GCGCost> > *const)(v7 + 128),
        (const __gnu_cxx::__normal_iterator<data::GCGCost*,std::vector<data::GCGCost> > *)(v7 + 64));
      if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v7 + 64, v7 + 64);
      if ( *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v7 + 128);
      pred = *(data::GCGCost **)(v7 + 128);
      *(std::vector<data::GCGCost>::iterator *)(v7 + 64) = std::vector<data::GCGCost>::erase(
                                                             vec,
                                                             (std::vector<data::GCGCost>::const_iterator)pred);
      *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = -8;
      ++num;
    }
    else
    {
      __gnu_cxx::__normal_iterator<data::GCGCost *,std::vector<data::GCGCost>>::operator++((__gnu_cxx::__normal_iterator<data::GCGCost*,std::vector<data::GCGCost> > *const)(v7 + 64));
    }
  }
  result = num;
  if ( v13 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 545: range 000000001471400E-00000000147142C0
std::vector<data::GCGCost>::size_type __fastcall common::tools::MiscUtils::erase_if<data::GCGCost,GCGGameExcelConfigMgr::rewriteSkillConfig(TxtConfigMgr &)::{lambda(data::GCGCost&)#1}>(
        std::vector<data::GCGCost> *vec,
        data::GCGCost *pred,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  bool v10; // al
  std::vector<data::GCGCost>::size_type result; // rax
  std::vector<data::GCGCost>::size_type num; // [rsp+18h] [rbp-C8h]
  char v13[192]; // [rsp+20h] [rbp-C0h] BYREF

  v7 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 48 1 8 pred:545 64 8 8 iter:548 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v7 + 16) = common::tools::MiscUtils::erase_if<data::GCGCost,GCGGameExcelConfigMgr::rewriteSkillConfig(TxtConfigMgr &)::{lambda(data::GCGCost&)#1}>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -218959360;
  v9[536862723] = -218959360;
  v9[536862724] = -202116352;
  *(_BYTE *)(v7 + 48) = a7;
  num = 0LL;
  if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v7 + 64, pred);
  *(std::vector<data::GCGCost>::iterator *)(v7 + 64) = std::vector<data::GCGCost>::begin(vec);
  while ( 1 )
  {
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v7 + 96, pred);
    *(std::vector<data::GCGCost>::iterator *)(v7 + 96) = std::vector<data::GCGCost>::end(vec);
    v10 = __gnu_cxx::operator!=<data::GCGCost *,std::vector<data::GCGCost>>(
            (const __gnu_cxx::__normal_iterator<data::GCGCost*,std::vector<data::GCGCost> > *)(v7 + 64),
            (const __gnu_cxx::__normal_iterator<data::GCGCost*,std::vector<data::GCGCost> > *)(v7 + 96));
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v10 )
      break;
    pred = __gnu_cxx::__normal_iterator<data::GCGCost *,std::vector<data::GCGCost>>::operator*((const __gnu_cxx::__normal_iterator<data::GCGCost*,std::vector<data::GCGCost> > *const)(v7 + 64));
    if ( GCGGameExcelConfigMgr::rewriteSkillConfig(TxtConfigMgr &)::{lambda(data::GCGCost &)#1}::operator()(
           (const GCGGameExcelConfigMgr::rewriteSkillConfig::<lambda(data::GCGCost&)> *const)(v7 + 48),
           pred) )
    {
      *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = 0;
      __gnu_cxx::__normal_iterator<data::GCGCost const*,std::vector<data::GCGCost>>::__normal_iterator<data::GCGCost*>(
        (__gnu_cxx::__normal_iterator<const data::GCGCost*,std::vector<data::GCGCost> > *const)(v7 + 128),
        (const __gnu_cxx::__normal_iterator<data::GCGCost*,std::vector<data::GCGCost> > *)(v7 + 64));
      if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v7 + 64, v7 + 64);
      if ( *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v7 + 128);
      pred = *(data::GCGCost **)(v7 + 128);
      *(std::vector<data::GCGCost>::iterator *)(v7 + 64) = std::vector<data::GCGCost>::erase(
                                                             vec,
                                                             (std::vector<data::GCGCost>::const_iterator)pred);
      *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = -8;
      ++num;
    }
    else
    {
      __gnu_cxx::__normal_iterator<data::GCGCost *,std::vector<data::GCGCost>>::operator++((__gnu_cxx::__normal_iterator<data::GCGCost*,std::vector<data::GCGCost> > *const)(v7 + 64));
    }
  }
  result = num;
  if ( v13 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 545: range 000000001471517C-000000001471542E
std::vector<data::GCGLevelCond>::size_type __fastcall common::tools::MiscUtils::erase_if<data::GCGLevelCond,GCGPlayingExcelConfigMgr::rewriteGameRewardConfig(TxtConfigMgr &)::{lambda(data::GCGLevelCond&)#2}>(
        std::vector<data::GCGLevelCond> *vec,
        data::GCGLevelCond *pred,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  bool v10; // al
  std::vector<data::GCGLevelCond>::size_type result; // rax
  std::vector<data::GCGLevelCond>::size_type num; // [rsp+18h] [rbp-C8h]
  char v13[192]; // [rsp+20h] [rbp-C0h] BYREF

  v7 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 48 1 8 pred:545 64 8 8 iter:548 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v7 + 16) = common::tools::MiscUtils::erase_if<data::GCGLevelCond,GCGPlayingExcelConfigMgr::rewriteGameRewardConfig(TxtConfigMgr &)::{lambda(data::GCGLevelCond&)#2}>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -218959360;
  v9[536862723] = -218959360;
  v9[536862724] = -202116352;
  *(_BYTE *)(v7 + 48) = a7;
  num = 0LL;
  if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v7 + 64, pred);
  *(std::vector<data::GCGLevelCond>::iterator *)(v7 + 64) = std::vector<data::GCGLevelCond>::begin(vec);
  while ( 1 )
  {
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v7 + 96, pred);
    *(std::vector<data::GCGLevelCond>::iterator *)(v7 + 96) = std::vector<data::GCGLevelCond>::end(vec);
    v10 = __gnu_cxx::operator!=<data::GCGLevelCond *,std::vector<data::GCGLevelCond>>(
            (const __gnu_cxx::__normal_iterator<data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *)(v7 + 64),
            (const __gnu_cxx::__normal_iterator<data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *)(v7 + 96));
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v10 )
      break;
    pred = __gnu_cxx::__normal_iterator<data::GCGLevelCond *,std::vector<data::GCGLevelCond>>::operator*((const __gnu_cxx::__normal_iterator<data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *const)(v7 + 64));
    if ( GCGPlayingExcelConfigMgr::rewriteGameRewardConfig(TxtConfigMgr &)::{lambda(data::GCGLevelCond &)#2}::operator()(
           (const GCGPlayingExcelConfigMgr::rewriteGameRewardConfig::<lambda(data::GCGLevelCond&)> *const)(v7 + 48),
           pred) )
    {
      *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = 0;
      __gnu_cxx::__normal_iterator<data::GCGLevelCond const*,std::vector<data::GCGLevelCond>>::__normal_iterator<data::GCGLevelCond*>(
        (__gnu_cxx::__normal_iterator<const data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *const)(v7 + 128),
        (const __gnu_cxx::__normal_iterator<data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *)(v7 + 64));
      if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v7 + 64, v7 + 64);
      if ( *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v7 + 128);
      pred = *(data::GCGLevelCond **)(v7 + 128);
      *(std::vector<data::GCGLevelCond>::iterator *)(v7 + 64) = std::vector<data::GCGLevelCond>::erase(
                                                                  vec,
                                                                  (std::vector<data::GCGLevelCond>::const_iterator)pred);
      *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = -8;
      ++num;
    }
    else
    {
      __gnu_cxx::__normal_iterator<data::GCGLevelCond *,std::vector<data::GCGLevelCond>>::operator++((__gnu_cxx::__normal_iterator<data::GCGLevelCond*,std::vector<data::GCGLevelCond> > *const)(v7 + 64));
    }
  }
  result = num;
  if ( v13 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 545: range 00000000147137F2-0000000014713AA4
std::vector<data::GCGTokenConfig>::size_type __fastcall common::tools::MiscUtils::erase_if<data::GCGTokenConfig,GCGGameExcelConfigMgr::rewriteCardConfig(TxtConfigMgr &)::{lambda(data::GCGTokenConfig&)#1}>(
        std::vector<data::GCGTokenConfig> *vec,
        data::GCGTokenConfig *pred,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  bool v10; // al
  std::vector<data::GCGTokenConfig>::size_type result; // rax
  std::vector<data::GCGTokenConfig>::size_type num; // [rsp+18h] [rbp-C8h]
  char v13[192]; // [rsp+20h] [rbp-C0h] BYREF

  v7 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 48 1 8 pred:545 64 8 8 iter:548 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v7 + 16) = common::tools::MiscUtils::erase_if<data::GCGTokenConfig,GCGGameExcelConfigMgr::rewriteCardConfig(TxtConfigMgr &)::{lambda(data::GCGTokenConfig&)#1}>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -218959360;
  v9[536862723] = -218959360;
  v9[536862724] = -202116352;
  *(_BYTE *)(v7 + 48) = a7;
  num = 0LL;
  if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v7 + 64, pred);
  *(std::vector<data::GCGTokenConfig>::iterator *)(v7 + 64) = std::vector<data::GCGTokenConfig>::begin(vec);
  while ( 1 )
  {
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v7 + 96, pred);
    *(std::vector<data::GCGTokenConfig>::iterator *)(v7 + 96) = std::vector<data::GCGTokenConfig>::end(vec);
    v10 = __gnu_cxx::operator!=<data::GCGTokenConfig *,std::vector<data::GCGTokenConfig>>(
            (const __gnu_cxx::__normal_iterator<data::GCGTokenConfig*,std::vector<data::GCGTokenConfig> > *)(v7 + 64),
            (const __gnu_cxx::__normal_iterator<data::GCGTokenConfig*,std::vector<data::GCGTokenConfig> > *)(v7 + 96));
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v10 )
      break;
    pred = __gnu_cxx::__normal_iterator<data::GCGTokenConfig *,std::vector<data::GCGTokenConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GCGTokenConfig*,std::vector<data::GCGTokenConfig> > *const)(v7 + 64));
    if ( GCGGameExcelConfigMgr::rewriteCardConfig(TxtConfigMgr &)::{lambda(data::GCGTokenConfig &)#1}::operator()(
           (const GCGGameExcelConfigMgr::rewriteCardConfig::<lambda(data::GCGTokenConfig&)> *const)(v7 + 48),
           pred) )
    {
      *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = 0;
      __gnu_cxx::__normal_iterator<data::GCGTokenConfig const*,std::vector<data::GCGTokenConfig>>::__normal_iterator<data::GCGTokenConfig*>(
        (__gnu_cxx::__normal_iterator<const data::GCGTokenConfig*,std::vector<data::GCGTokenConfig> > *const)(v7 + 128),
        (const __gnu_cxx::__normal_iterator<data::GCGTokenConfig*,std::vector<data::GCGTokenConfig> > *)(v7 + 64));
      if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v7 + 64, v7 + 64);
      if ( *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v7 + 128);
      pred = *(data::GCGTokenConfig **)(v7 + 128);
      *(std::vector<data::GCGTokenConfig>::iterator *)(v7 + 64) = std::vector<data::GCGTokenConfig>::erase(
                                                                    vec,
                                                                    (std::vector<data::GCGTokenConfig>::const_iterator)pred);
      *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = -8;
      ++num;
    }
    else
    {
      __gnu_cxx::__normal_iterator<data::GCGTokenConfig *,std::vector<data::GCGTokenConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GCGTokenConfig*,std::vector<data::GCGTokenConfig> > *const)(v7 + 64));
    }
  }
  result = num;
  if ( v13 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 545: range 0000000014713D5A-000000001471400C
std::vector<data::GCGTokenConfig>::size_type __fastcall common::tools::MiscUtils::erase_if<data::GCGTokenConfig,GCGGameExcelConfigMgr::rewriteCardConfig(TxtConfigMgr &)::{lambda(data::GCGTokenConfig&)#3}>(
        std::vector<data::GCGTokenConfig> *vec,
        data::GCGTokenConfig *pred,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  bool v10; // al
  std::vector<data::GCGTokenConfig>::size_type result; // rax
  std::vector<data::GCGTokenConfig>::size_type num; // [rsp+18h] [rbp-C8h]
  char v13[192]; // [rsp+20h] [rbp-C0h] BYREF

  v7 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 48 1 8 pred:545 64 8 8 iter:548 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v7 + 16) = common::tools::MiscUtils::erase_if<data::GCGTokenConfig,GCGGameExcelConfigMgr::rewriteCardConfig(TxtConfigMgr &)::{lambda(data::GCGTokenConfig&)#3}>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -218959360;
  v9[536862723] = -218959360;
  v9[536862724] = -202116352;
  *(_BYTE *)(v7 + 48) = a7;
  num = 0LL;
  if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v7 + 64, pred);
  *(std::vector<data::GCGTokenConfig>::iterator *)(v7 + 64) = std::vector<data::GCGTokenConfig>::begin(vec);
  while ( 1 )
  {
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v7 + 96, pred);
    *(std::vector<data::GCGTokenConfig>::iterator *)(v7 + 96) = std::vector<data::GCGTokenConfig>::end(vec);
    v10 = __gnu_cxx::operator!=<data::GCGTokenConfig *,std::vector<data::GCGTokenConfig>>(
            (const __gnu_cxx::__normal_iterator<data::GCGTokenConfig*,std::vector<data::GCGTokenConfig> > *)(v7 + 64),
            (const __gnu_cxx::__normal_iterator<data::GCGTokenConfig*,std::vector<data::GCGTokenConfig> > *)(v7 + 96));
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v10 )
      break;
    pred = __gnu_cxx::__normal_iterator<data::GCGTokenConfig *,std::vector<data::GCGTokenConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GCGTokenConfig*,std::vector<data::GCGTokenConfig> > *const)(v7 + 64));
    if ( GCGGameExcelConfigMgr::rewriteCardConfig(TxtConfigMgr &)::{lambda(data::GCGTokenConfig &)#3}::operator()(
           (const GCGGameExcelConfigMgr::rewriteCardConfig::<lambda(data::GCGTokenConfig&)> *const)(v7 + 48),
           pred) )
    {
      *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = 0;
      __gnu_cxx::__normal_iterator<data::GCGTokenConfig const*,std::vector<data::GCGTokenConfig>>::__normal_iterator<data::GCGTokenConfig*>(
        (__gnu_cxx::__normal_iterator<const data::GCGTokenConfig*,std::vector<data::GCGTokenConfig> > *const)(v7 + 128),
        (const __gnu_cxx::__normal_iterator<data::GCGTokenConfig*,std::vector<data::GCGTokenConfig> > *)(v7 + 64));
      if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v7 + 64, v7 + 64);
      if ( *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v7 + 128);
      pred = *(data::GCGTokenConfig **)(v7 + 128);
      *(std::vector<data::GCGTokenConfig>::iterator *)(v7 + 64) = std::vector<data::GCGTokenConfig>::erase(
                                                                    vec,
                                                                    (std::vector<data::GCGTokenConfig>::const_iterator)pred);
      *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = -8;
      ++num;
    }
    else
    {
      __gnu_cxx::__normal_iterator<data::GCGTokenConfig *,std::vector<data::GCGTokenConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GCGTokenConfig*,std::vector<data::GCGTokenConfig> > *const)(v7 + 64));
    }
  }
  result = num;
  if ( v13 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 545: range 000000001471482A-0000000014714ADC
std::vector<data::GCGWaitingCharacterInfo>::size_type __fastcall common::tools::MiscUtils::erase_if<data::GCGWaitingCharacterInfo,GCGGameExcelConfigMgr::rewriteDeckConfig(TxtConfigMgr &)::{lambda(data::GCGWaitingCharacterInfo&)#1}>(
        std::vector<data::GCGWaitingCharacterInfo> *vec,
        data::GCGWaitingCharacterInfo *pred,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  bool v10; // al
  std::vector<data::GCGWaitingCharacterInfo>::size_type result; // rax
  std::vector<data::GCGWaitingCharacterInfo>::size_type num; // [rsp+18h] [rbp-C8h]
  char v13[192]; // [rsp+20h] [rbp-C0h] BYREF

  v7 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "4 48 1 8 pred:545 64 8 8 iter:548 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v7 + 16) = common::tools::MiscUtils::erase_if<data::GCGWaitingCharacterInfo,GCGGameExcelConfigMgr::rewriteDeckConfig(TxtConfigMgr &)::{lambda(data::GCGWaitingCharacterInfo&)#1}>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -218959360;
  v9[536862723] = -218959360;
  v9[536862724] = -202116352;
  *(_BYTE *)(v7 + 48) = a7;
  num = 0LL;
  if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v7 + 64, pred);
  *(std::vector<data::GCGWaitingCharacterInfo>::iterator *)(v7 + 64) = std::vector<data::GCGWaitingCharacterInfo>::begin(vec);
  while ( 1 )
  {
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v7 + 96, pred);
    *(std::vector<data::GCGWaitingCharacterInfo>::iterator *)(v7 + 96) = std::vector<data::GCGWaitingCharacterInfo>::end(vec);
    v10 = __gnu_cxx::operator!=<data::GCGWaitingCharacterInfo *,std::vector<data::GCGWaitingCharacterInfo>>(
            (const __gnu_cxx::__normal_iterator<data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *)(v7 + 64),
            (const __gnu_cxx::__normal_iterator<data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *)(v7 + 96));
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v10 )
      break;
    pred = __gnu_cxx::__normal_iterator<data::GCGWaitingCharacterInfo *,std::vector<data::GCGWaitingCharacterInfo>>::operator*((const __gnu_cxx::__normal_iterator<data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *const)(v7 + 64));
    if ( GCGGameExcelConfigMgr::rewriteDeckConfig(TxtConfigMgr &)::{lambda(data::GCGWaitingCharacterInfo &)#1}::operator()(
           (const GCGGameExcelConfigMgr::rewriteDeckConfig::<lambda(data::GCGWaitingCharacterInfo&)> *const)(v7 + 48),
           pred) )
    {
      *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = 0;
      __gnu_cxx::__normal_iterator<data::GCGWaitingCharacterInfo const*,std::vector<data::GCGWaitingCharacterInfo>>::__normal_iterator<data::GCGWaitingCharacterInfo*>(
        (__gnu_cxx::__normal_iterator<const data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *const)(v7 + 128),
        (const __gnu_cxx::__normal_iterator<data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *)(v7 + 64));
      if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v7 + 64, v7 + 64);
      if ( *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v7 + 128);
      pred = *(data::GCGWaitingCharacterInfo **)(v7 + 128);
      *(std::vector<data::GCGWaitingCharacterInfo>::iterator *)(v7 + 64) = std::vector<data::GCGWaitingCharacterInfo>::erase(
                                                                             vec,
                                                                             (std::vector<data::GCGWaitingCharacterInfo>::const_iterator)pred);
      *(_BYTE *)(((v7 + 128) >> 3) + 0x7FFF8000) = -8;
      ++num;
    }
    else
    {
      __gnu_cxx::__normal_iterator<data::GCGWaitingCharacterInfo *,std::vector<data::GCGWaitingCharacterInfo>>::operator++((__gnu_cxx::__normal_iterator<data::GCGWaitingCharacterInfo*,std::vector<data::GCGWaitingCharacterInfo> > *const)(v7 + 64));
    }
  }
  result = num;
  if ( v13 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 583: range 0000000014717EF8-0000000014718195
std::unordered_map<unsigned int,unsigned int>::size_type __fastcall common::tools::MiscUtils::erase_if<unsigned int,unsigned int,InvestigationExcelConfigMgr::checkInvestigationMonsterConfig(TxtConfigMgr const&)::{lambda(std::pair<unsigned int const,unsigned int>)#1}>(
        std::unordered_map<unsigned int,unsigned int> *map,
        std::pair<unsigned int const,unsigned int> pred,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  bool v10; // al
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v11; // rax
  std::pair<unsigned int const,unsigned int> *v12; // rdx
  std::unordered_map<unsigned int,unsigned int>::size_type result; // rax
  std::unordered_map<unsigned int,unsigned int>::size_type num; // [rsp+18h] [rbp-A8h]
  char v15[160]; // [rsp+20h] [rbp-A0h] BYREF

  v7 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(128LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "3 48 1 8 pred:583 64 8 8 iter:586 96 8 9 <unknown>";
  *(_QWORD *)(v7 + 16) = common::tools::MiscUtils::erase_if<unsigned int,unsigned int,InvestigationExcelConfigMgr::checkInvestigationMonsterConfig(TxtConfigMgr const&)::{lambda(std::pair<unsigned int const,unsigned int>)#1}>;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -218959360;
  v9[536862723] = -202116352;
  *(_BYTE *)(v7 + 48) = a7;
  num = 0LL;
  if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v7 + 64, pred);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v7 + 64) = std::unordered_map<unsigned int,unsigned int>::begin(map);
  while ( 1 )
  {
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v7 + 96, pred);
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v7 + 96) = std::unordered_map<unsigned int,unsigned int>::end(map);
    v10 = std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v7 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v7 + 96));
    *(_BYTE *)(((v7 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v10 )
      break;
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v7 + 64));
    v12 = v11;
    if ( ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v11 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v11, 8LL);
    }
    pred = *v12;
    if ( InvestigationExcelConfigMgr::checkInvestigationMonsterConfig(TxtConfigMgr const&)::{lambda(std::pair<unsigned int const,unsigned int>)#1}::operator()(
           (const InvestigationExcelConfigMgr::checkInvestigationMonsterConfig::<lambda(std::pair<unsigned int const, unsigned int>)> *const)(v7 + 48),
           pred) )
    {
      if ( *(_BYTE *)(((v7 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v7 + 64, pred);
      pred = *(std::pair<unsigned int const,unsigned int> *)(v7 + 64);
      *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v7 + 64) = std::unordered_map<unsigned int,unsigned int>::erase(
                                                                                map,
                                                                                (std::unordered_map<unsigned int,unsigned int>::iterator)pred);
      ++num;
    }
    else
    {
      std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v7 + 64));
    }
  }
  result = num;
  if ( v15 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 820: range 000000000F041F60-000000000F042071
void __cdecl common::tools::MiscUtils::removeEmptyElement<int>(std::vector<int> *vec)
{
  std::vector<int>::reference v1; // rax
  int *v2; // rdx
  __int64 v3; // rsi
  std::vector<int>::reference v4; // rax
  int *v5; // rdx
  char v6; // cl
  uint32_t index; // [rsp+14h] [rbp-1Ch]
  uint32_t i; // [rsp+18h] [rbp-18h]
  int val; // [rsp+1Ch] [rbp-14h]

  index = 0;
  for ( i = 0; i < std::vector<int>::size(vec); ++i )
  {
    v1 = std::vector<int>::operator[](vec, i);
    v2 = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v1);
    }
    val = *v2;
    if ( *v2 )
    {
      if ( index != i )
      {
        v3 = index;
        v4 = std::vector<int>::operator[](vec, index);
        v5 = v4;
        v6 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
        if ( v6 != 0 && (char)(((unsigned __int8)v4 & 7) + 3) >= v6 )
        {
          LOBYTE(v3) = v6 != 0;
          __asan_report_store4(v4, v3);
        }
        *v5 = val;
      }
      ++index;
    }
  }
  std::vector<int>::resize(vec, index);
};

// Line 951: range 000000000D002764-000000000D0028CA
bool __cdecl common::tools::MiscUtils::isContains<std::set<data::EquipType> const,data::EquipType>(
        const std::set<data::EquipType> *container,
        const data::EquipType *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::set<data::EquipType> const,data::EquipType>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::set<data::EquipType>::iterator *)(v2 + 64) = std::set<data::EquipType>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::set<data::EquipType>::const_iterator *)(v2 + 32) = std::set<data::EquipType>::find(container, value);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<data::EquipType>::_Self *)(v2 + 32),
             (const std::_Rb_tree_const_iterator<data::EquipType>::_Self *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1016: range 000000000F7C950C-000000000F7C9672
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<std::string,data::DynamicArgument>,std::string>(
        std::unordered_map<std::string,data::DynamicArgument> *container,
        const std::string *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<std::string,data::DynamicArgument>,std::string>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<std::string,data::DynamicArgument>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::DynamicArgument>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<std::string,data::DynamicArgument>::iterator *)(v2 + 32) = std::unordered_map<std::string,data::DynamicArgument>::find(
                                                                                    container,
                                                                                    value);
  result = std::__detail::operator!=<std::pair<std::string const,data::DynamicArgument>,true>(
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DynamicArgument>,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::DynamicArgument>,true> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1383: range 000000000CF1C3AA-000000000CF1C510
bool __cdecl common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::OpActivityScheduleConfig>,unsigned int>(
        std::unordered_map<unsigned int,data::OpActivityScheduleConfig> *container,
        const unsigned int *value)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,data::OpActivityScheduleConfig>,unsigned int>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, value);
  *(std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::end(container);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, value);
  *(std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::OpActivityScheduleConfig>::find(
                                                                                              container,
                                                                                              value);
  result = std::__detail::operator!=<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OpActivityScheduleConfig>,false> *)(v2 + 64));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};
