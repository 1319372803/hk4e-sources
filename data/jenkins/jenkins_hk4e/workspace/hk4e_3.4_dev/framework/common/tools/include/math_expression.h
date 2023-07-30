// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/include/math_expression.h

// Line 26: range 000000000D46C8B6-000000000D46CB25
void __cdecl common::tools::MathExpressionNode::MathExpressionNode(
        common::tools::MathExpressionNode *const this,
        const common::tools::MathExpressionNode *a2)
{
  common::tools::MathExpressionNode::Type type; // ecx
  char v3; // al
  std::string *p_str; // rsi
  double num_value; // xmm0_8
  bool bool_value; // cl
  char v7; // al
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool is_const_num_node; // cl
  char v11; // dl
  __int64 v12; // rdx
  __int64 v13; // rsi
  uint32_t priority; // ecx
  char v15; // dl
  const common::tools::MathExpressionNode *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type_;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type_ = type;
  p_str = &v16->str_;
  std::string::basic_string(&this->str_, &v16->str_);
  if ( *(_BYTE *)(((unsigned __int64)&v16->num_value_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v16->num_value_);
  num_value = v16->num_value_;
  if ( *(_BYTE *)(((unsigned __int64)&this->num_value_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->num_value_, p_str);
  this->num_value_ = num_value;
  if ( *(char *)(((unsigned __int64)&v16->bool_value_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v16->bool_value_, p_str, &v16->bool_value_);
  bool_value = v16->bool_value_;
  v7 = *(_BYTE *)(((unsigned __int64)&this->bool_value_ >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_str) = v7 != 0;
    __asan_report_store1(&this->bool_value_, p_str, &this->bool_value_);
  }
  this->bool_value_ = bool_value;
  v8 = ((_BYTE)v16 + 49) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&v16->is_const_num_node_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&v16->is_const_num_node_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&v16->is_const_num_node_, v8, v9);
  is_const_num_node = v16->is_const_num_node_;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_const_num_node_ >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 49) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_const_num_node_, v8, v12);
  this->is_const_num_node_ = is_const_num_node;
  v13 = (((_BYTE)v16 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->priority_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->priority_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->priority_);
  }
  priority = v16->priority_;
  v15 = *(_BYTE *)(((unsigned __int64)&this->priority_ >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->priority_, v13);
  }
  this->priority_ = priority;
};

// Line 102: range 000000000D3B9234-000000000D3B93BC
void __cdecl common::tools::MathExpression::MathExpression(
        common::tools::MathExpression *const this,
        const common::tools::MathExpression *a2)
{
  uint32_t logic_operator_priority; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_init; // cl
  char v7; // dl
  __int64 v8; // rdx
  const common::tools::MathExpression *v9; // [rsp+0h] [rbp-20h]

  v9 = a2;
  std::map<std::string,unsigned int>::map(&this->operator_map_, &a2->operator_map_);
  if ( *(_BYTE *)(((unsigned __int64)&v9->logic_operator_priority_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->logic_operator_priority_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->logic_operator_priority_);
  }
  logic_operator_priority = a2->logic_operator_priority_;
  v3 = *(_BYTE *)(((unsigned __int64)&this->logic_operator_priority_ >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->logic_operator_priority_, a2);
  }
  this->logic_operator_priority_ = logic_operator_priority;
  v4 = ((_BYTE)v9 + 52) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v9->is_init_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v9->is_init_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v9->is_init_, v4, v5);
  is_init = v9->is_init_;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_init_ >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_init_, v4, v8);
  this->is_init_ = is_init;
  std::string::basic_string(&this->original_expression_str_, &v9->original_expression_str_);
  std::vector<common::tools::MathExpressionNode>::vector(&this->suffix_node_vec_, &v9->suffix_node_vec_);
};
