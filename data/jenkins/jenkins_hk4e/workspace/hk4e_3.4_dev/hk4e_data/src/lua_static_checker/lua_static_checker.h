// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/lua_static_checker/lua_static_checker.h

// Line 61: range 000000000F7890B4-000000000F78914E
void __cdecl LuaIndexCheckerContext::LuaIndexCheckerContext(
        LuaIndexCheckerContext *const this,
        std::set<std::string> *p_higher_scope_checked_name_set)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, p_higher_scope_checked_name_set, this);
  this->is_on_if_check_ = 0;
  std::set<std::string>::set(&this->checked_element_name_set_, p_higher_scope_checked_name_set);
  if ( *(char *)(((unsigned __int64)&this->is_ignore_index_check_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ignore_index_check_, p_higher_scope_checked_name_set, &this->is_ignore_index_check_);
  this->is_ignore_index_check_ = 0;
};

// Line 62: range 000000000F789150-000000000F78916E
void __cdecl LuaIndexCheckerContext::~LuaIndexCheckerContext(LuaIndexCheckerContext *const this)
{
  std::set<std::string>::~set(&this->checked_element_name_set_);
};

// Line 70: range 000000000F791774-000000000F791850
void __cdecl LuaScopeContext::LuaScopeContext(LuaScopeContext *const this)
{
  __int64 v1; // rsi

  std::map<std::string,std::stack<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>>::map(&this->scoped_names_);
  std::stack<std::set<std::string>>::stack<std::deque<std::set<std::string>>,void>(&this->scope_stack_);
  std::stack<LuaIndexCheckerContext>::stack<std::deque<LuaIndexCheckerContext>,void>(&this->index_checker_context_stack_);
  std::stack<std::set<std::string>>::stack<std::deque<std::set<std::string>>,void>(&this->function_scope_stack_);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id_, v1);
  }
  this->group_id_ = 0;
};

// Line 70: range 000000000F791852-000000000F79189E
void __cdecl LuaScopeContext::~LuaScopeContext(LuaScopeContext *const this)
{
  std::stack<std::set<std::string>>::~stack(&this->function_scope_stack_);
  std::stack<LuaIndexCheckerContext>::~stack(&this->index_checker_context_stack_);
  std::stack<std::set<std::string>>::~stack(&this->scope_stack_);
  std::map<std::string,std::stack<std::pair<std::set<std::string> *,std::shared_ptr<LuaASTNode>>>>::~map(&this->scoped_names_);
};

// Line 108: range 000000000F96D15A-000000000F96D19D
LuaASTTableNode *__cdecl LuaASTTableNode::operator=(LuaASTTableNode *const this, LuaASTTableNode *a2)
{
  std::map<std::string,std::shared_ptr<LuaASTNode>>::operator=(&this->hash_part, &a2->hash_part);
  std::vector<std::shared_ptr<LuaASTNode>>::operator=(&this->array_part, &a2->array_part);
  return this;
};

// Line 108: range 000000000F7F8A6A-000000000F7F8AAD
LuaASTTableNode *__cdecl LuaASTTableNode::operator=(LuaASTTableNode *const this, const LuaASTTableNode *a2)
{
  std::map<std::string,std::shared_ptr<LuaASTNode>>::operator=(&this->hash_part, &a2->hash_part);
  std::vector<std::shared_ptr<LuaASTNode>>::operator=(&this->array_part, &a2->array_part);
  return this;
};

// Line 108: range 000000000F7919D8-000000000F791A02
void __cdecl LuaASTTableNode::LuaASTTableNode(LuaASTTableNode *const this)
{
  std::map<std::string,std::shared_ptr<LuaASTNode>>::map(&this->hash_part);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->array_part);
};

// Line 108: range 000000000F9C20C8-000000000F9C2108
void __cdecl LuaASTTableNode::LuaASTTableNode(LuaASTTableNode *const this, LuaASTTableNode *a2)
{
  std::map<std::string,std::shared_ptr<LuaASTNode>>::map(&this->hash_part, &a2->hash_part);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->array_part, &a2->array_part);
};

// Line 108: range 000000000F8C70FE-000000000F8C7161
void __cdecl LuaASTTableNode::LuaASTTableNode(LuaASTTableNode *const this, const LuaASTTableNode *a2)
{
  std::map<std::string,std::shared_ptr<LuaASTNode>>::map(&this->hash_part, &a2->hash_part);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->array_part, &a2->array_part);
};

// Line 108: range 000000000F791A04-000000000F791A2E
void __cdecl LuaASTTableNode::~LuaASTTableNode(LuaASTTableNode *const this)
{
  std::vector<std::shared_ptr<LuaASTNode>>::~vector(&this->array_part);
  std::map<std::string,std::shared_ptr<LuaASTNode>>::~map(&this->hash_part);
};

// Line 126: range 000000000F96C798-000000000F96C7F6
LuaASTForinNode *__cdecl LuaASTForinNode::operator=(LuaASTForinNode *const this, LuaASTForinNode *a2)
{
  std::vector<std::shared_ptr<LuaASTNode>>::operator=(&this->id_vec, &a2->id_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::operator=(&this->expr_vec, &a2->expr_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::operator=(&this->block, &a2->block);
  return this;
};

// Line 126: range 000000000F7F8EB0-000000000F7F8F0E
LuaASTForinNode *__cdecl LuaASTForinNode::operator=(LuaASTForinNode *const this, const LuaASTForinNode *a2)
{
  std::vector<std::shared_ptr<LuaASTNode>>::operator=(&this->id_vec, &a2->id_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::operator=(&this->expr_vec, &a2->expr_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::operator=(&this->block, &a2->block);
  return this;
};

// Line 126: range 000000000F791B08-000000000F791B42
void __cdecl LuaASTForinNode::LuaASTForinNode(LuaASTForinNode *const this)
{
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->id_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->expr_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->block);
};

// Line 126: range 000000000F9C1B10-000000000F9C1B6B
void __cdecl LuaASTForinNode::LuaASTForinNode(LuaASTForinNode *const this, LuaASTForinNode *a2)
{
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->id_vec, &a2->id_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->expr_vec, &a2->expr_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->block, &a2->block);
};

// Line 126: range 000000000F9277FC-000000000F92788F
void __cdecl LuaASTForinNode::LuaASTForinNode(LuaASTForinNode *const this, const LuaASTForinNode *a2)
{
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->id_vec, &a2->id_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->expr_vec, &a2->expr_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->block, &a2->block);
};

// Line 126: range 000000000F791B44-000000000F791B7E
void __cdecl LuaASTForinNode::~LuaASTForinNode(LuaASTForinNode *const this)
{
  std::vector<std::shared_ptr<LuaASTNode>>::~vector(&this->block);
  std::vector<std::shared_ptr<LuaASTNode>>::~vector(&this->expr_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::~vector(&this->id_vec);
};

// Line 133: range 000000000F96CA0C-000000000F96CA6A
LuaASTFornumNode *__cdecl LuaASTFornumNode::operator=(LuaASTFornumNode *const this, LuaASTFornumNode *a2)
{
  std::shared_ptr<LuaASTNode>::operator=(&this->id_node_ptr, &a2->id_node_ptr);
  std::vector<std::shared_ptr<LuaASTNode>>::operator=(&this->expr_vec, &a2->expr_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::operator=(&this->block, &a2->block);
  return this;
};

// Line 133: range 000000000F7F90AE-000000000F7F910C
LuaASTFornumNode *__cdecl LuaASTFornumNode::operator=(LuaASTFornumNode *const this, const LuaASTFornumNode *a2)
{
  std::shared_ptr<LuaASTNode>::operator=(&this->id_node_ptr, &a2->id_node_ptr);
  std::vector<std::shared_ptr<LuaASTNode>>::operator=(&this->expr_vec, &a2->expr_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::operator=(&this->block, &a2->block);
  return this;
};

// Line 133: range 000000000F791B80-000000000F791BBA
void __cdecl LuaASTFornumNode::LuaASTFornumNode(LuaASTFornumNode *const this)
{
  std::shared_ptr<LuaASTNode>::shared_ptr(&this->id_node_ptr);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->expr_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->block);
};

// Line 133: range 000000000F9C1C12-000000000F9C1C6D
void __cdecl LuaASTFornumNode::LuaASTFornumNode(LuaASTFornumNode *const this, LuaASTFornumNode *a2)
{
  std::shared_ptr<LuaASTNode>::shared_ptr(&this->id_node_ptr, &a2->id_node_ptr);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->expr_vec, &a2->expr_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->block, &a2->block);
};

// Line 133: range 000000000F927A7E-000000000F927B11
void __cdecl LuaASTFornumNode::LuaASTFornumNode(LuaASTFornumNode *const this, const LuaASTFornumNode *a2)
{
  std::shared_ptr<LuaASTNode>::shared_ptr(&this->id_node_ptr, &a2->id_node_ptr);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->expr_vec, &a2->expr_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->block, &a2->block);
};

// Line 133: range 000000000F791BBC-000000000F791BF6
void __cdecl LuaASTFornumNode::~LuaASTFornumNode(LuaASTFornumNode *const this)
{
  std::vector<std::shared_ptr<LuaASTNode>>::~vector(&this->block);
  std::vector<std::shared_ptr<LuaASTNode>>::~vector(&this->expr_vec);
  std::shared_ptr<LuaASTNode>::~shared_ptr(&this->id_node_ptr);
};

// Line 140: range 000000000F96CC80-000000000F96CCC3
LuaASTSetNode *__cdecl LuaASTSetNode::operator=(LuaASTSetNode *const this, LuaASTSetNode *a2)
{
  std::vector<std::shared_ptr<LuaASTNode>>::operator=(&this->lhs_vec, &a2->lhs_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::operator=(&this->expr_vec, &a2->expr_vec);
  return this;
};

// Line 140: range 000000000F7F7C16-000000000F7F7C59
LuaASTSetNode *__cdecl LuaASTSetNode::operator=(LuaASTSetNode *const this, const LuaASTSetNode *a2)
{
  std::vector<std::shared_ptr<LuaASTNode>>::operator=(&this->lhs_vec, &a2->lhs_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::operator=(&this->expr_vec, &a2->expr_vec);
  return this;
};

// Line 140: range 000000000F7918F4-000000000F79191E
void __cdecl LuaASTSetNode::LuaASTSetNode(LuaASTSetNode *const this)
{
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->lhs_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->expr_vec);
};

// Line 140: range 000000000F9C1D14-000000000F9C1D54
void __cdecl LuaASTSetNode::LuaASTSetNode(LuaASTSetNode *const this, LuaASTSetNode *a2)
{
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->lhs_vec, &a2->lhs_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->expr_vec, &a2->expr_vec);
};

// Line 140: range 000000000F9262CC-000000000F92632F
void __cdecl LuaASTSetNode::LuaASTSetNode(LuaASTSetNode *const this, const LuaASTSetNode *a2)
{
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->lhs_vec, &a2->lhs_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->expr_vec, &a2->expr_vec);
};

// Line 140: range 000000000F791920-000000000F79194A
void __cdecl LuaASTSetNode::~LuaASTSetNode(LuaASTSetNode *const this)
{
  std::vector<std::shared_ptr<LuaASTNode>>::~vector(&this->expr_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::~vector(&this->lhs_vec);
};

// Line 146: range 000000000F96CED8-000000000F96CF1B
LuaASTLocalNode *__cdecl LuaASTLocalNode::operator=(LuaASTLocalNode *const this, LuaASTLocalNode *a2)
{
  std::vector<std::shared_ptr<LuaASTNode>>::operator=(&this->id_vec, &a2->id_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::operator=(&this->expr_vec, &a2->expr_vec);
  return this;
};

// Line 146: range 000000000F7F92AC-000000000F7F92EF
LuaASTLocalNode *__cdecl LuaASTLocalNode::operator=(LuaASTLocalNode *const this, const LuaASTLocalNode *a2)
{
  std::vector<std::shared_ptr<LuaASTNode>>::operator=(&this->id_vec, &a2->id_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::operator=(&this->expr_vec, &a2->expr_vec);
  return this;
};

// Line 146: range 000000000F791BF8-000000000F791C22
void __cdecl LuaASTLocalNode::LuaASTLocalNode(LuaASTLocalNode *const this)
{
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->id_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->expr_vec);
};

// Line 146: range 000000000F9C1DFA-000000000F9C1E3A
void __cdecl LuaASTLocalNode::LuaASTLocalNode(LuaASTLocalNode *const this, LuaASTLocalNode *a2)
{
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->id_vec, &a2->id_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->expr_vec, &a2->expr_vec);
};

// Line 146: range 000000000F927D34-000000000F927D97
void __cdecl LuaASTLocalNode::LuaASTLocalNode(LuaASTLocalNode *const this, const LuaASTLocalNode *a2)
{
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->id_vec, &a2->id_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->expr_vec, &a2->expr_vec);
};

// Line 146: range 000000000F791C24-000000000F791C4E
void __cdecl LuaASTLocalNode::~LuaASTLocalNode(LuaASTLocalNode *const this)
{
  std::vector<std::shared_ptr<LuaASTNode>>::~vector(&this->expr_vec);
  std::vector<std::shared_ptr<LuaASTNode>>::~vector(&this->id_vec);
};

// Line 152: range 000000000F7F7E12-000000000F7F7E3A
LuaASTOpNode *__cdecl LuaASTOpNode::operator=(LuaASTOpNode *const this, LuaASTOpNode *a2)
{
  std::shared_ptr<LuaASTNode>::operator=(&this->rlt_node_ptr, &a2->rlt_node_ptr);
  return this;
};

// Line 152: range 000000000F8C2950-000000000F8C2975
void __cdecl LuaASTOpNode::LuaASTOpNode(LuaASTOpNode *const this, LuaASTOpNode *a2)
{
  std::shared_ptr<LuaASTNode>::shared_ptr(&this->rlt_node_ptr, &a2->rlt_node_ptr);
};

// Line 152: range 000000000F79194C-000000000F791966
void __cdecl LuaASTOpNode::~LuaASTOpNode(LuaASTOpNode *const this)
{
  std::shared_ptr<LuaASTNode>::~shared_ptr(&this->rlt_node_ptr);
};

// Line 154: range 000000000F789250-000000000F789275
void __cdecl LuaASTOpNode::LuaASTOpNode(LuaASTOpNode *const this, LuaASTNodePtr *p_node_ptr)
{
  std::shared_ptr<LuaASTNode>::shared_ptr(&this->rlt_node_ptr, p_node_ptr);
};

// Line 158: range 000000000F7F8DEA-000000000F7F8E2D
LuaFunctionNode *__cdecl LuaFunctionNode::operator=(LuaFunctionNode *const this, LuaFunctionNode *a2)
{
  std::set<std::string>::operator=(&this->call_name_set, &a2->call_name_set);
  std::string::operator=(&this->function_name, &a2->function_name);
  return this;
};

// Line 158: range 000000000F8C47BA-000000000F8C47FA
void __cdecl LuaFunctionNode::LuaFunctionNode(LuaFunctionNode *const this, LuaFunctionNode *a2)
{
  std::set<std::string>::set(&this->call_name_set, &a2->call_name_set);
  std::string::basic_string(&this->function_name, &a2->function_name);
};

// Line 158: range 000000000F791ADC-000000000F791B06
void __cdecl LuaFunctionNode::~LuaFunctionNode(LuaFunctionNode *const this)
{
  std::string::~string(&this->function_name);
  std::set<std::string>::~set(&this->call_name_set);
};

// Line 160: range 000000000F789276-000000000F7892AB
void __cdecl LuaFunctionNode::LuaFunctionNode(LuaFunctionNode *const this, const std::set<std::string> *call_name_set)
{
  std::set<std::string>::set(&this->call_name_set, call_name_set);
  std::string::basic_string(&this->function_name);
};

// Line 165: range 000000000F790586-000000000F7906FD
void __cdecl LuaASTNode::LuaASTNode(LuaASTNode *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->type = UNKOWN;
  std::vector<std::shared_ptr<LuaASTNode>>::vector(&this->children);
  std::string::basic_string(&this->err_msg);
  std::variant<double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::variant(&this->value);
  std::weak_ptr<LuaASTNode>::weak_ptr(&this->ref_node_weak_ptr);
  std::string::basic_string(&this->name);
  std::any::any(&this->fix_val);
  if ( *(char *)(((unsigned __int64)&this->is_skip >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_skip, v1, &this->is_skip);
  this->is_skip = 0;
  v2 = ((_BYTE)this - 31) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_do_index_check >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_do_index_check >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_do_index_check, v2, v3);
  this->is_do_index_check = 1;
  v4 = ((_BYTE)this - 30) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_index_check_passed >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_index_check_passed >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_index_check_passed, v4, v5);
  this->is_index_check_passed = 1;
};

// Line 165: range 000000000F7906FE-000000000F790772
void __cdecl LuaASTNode::~LuaASTNode(LuaASTNode *const this)
{
  std::any::~any(&this->fix_val);
  std::string::~string(&this->name);
  std::weak_ptr<LuaASTNode>::~weak_ptr(&this->ref_node_weak_ptr);
  std::variant<double,bool,std::string,std::vector<std::string>,LuaASTForinNode,LuaASTFornumNode,LuaASTSetNode,LuaASTLocalNode,LuaASTTableNode,LuaASTOpNode,LuaFunctionNode>::~variant(&this->value);
  std::string::~string(&this->err_msg);
  std::vector<std::shared_ptr<LuaASTNode>>::~vector(&this->children);
};

// Line 191: range 000000000F790360-000000000F7903F8
void __cdecl LuaASTContext::~LuaASTContext(LuaASTContext *const this)
{
  std::string::~string(&this->real_file_path);
  std::map<unsigned int,std::string>::~map(&this->line_2_file_path_map);
  std::map<std::string,std::vector<std::string>>::~map(&this->gramma_infos_map);
  std::map<std::string,unsigned int>::~map(&this->call_counters_map);
  std::string::~string(&this->call_name);
  std::unordered_map<std::string,std::array<unsigned int,4ul>>::~unordered_map(&this->result_map);
  std::map<std::string,std::vector<std::string>>::~map(&this->skipped_err_infos_map);
  std::map<std::string,std::vector<std::string>>::~map(&this->err_infos_map);
};

// Line 194: range 000000000F789518-000000000F789731
void __cdecl LuaASTContext::LuaASTContext(LuaASTContext *const this, const LuaConfigMgr *lua_config_mgr)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, lua_config_mgr);
  this->lua_config_mgr = (LuaConfigMgr *)lua_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, lua_config_mgr);
  }
  this->group_id = 0;
  std::map<std::string,std::vector<std::string>>::map(&this->err_infos_map);
  std::map<std::string,std::vector<std::string>>::map(&this->skipped_err_infos_map);
  std::unordered_map<std::string,std::array<unsigned int,4ul>>::unordered_map(&this->result_map);
  std::string::basic_string(&this->call_name);
  std::map<std::string,unsigned int>::map(&this->call_counters_map);
  std::map<std::string,std::vector<std::string>>::map(&this->gramma_infos_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->data_checker_stop_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->data_checker_stop_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->data_checker_stop_count, lua_config_mgr);
  }
  this->data_checker_stop_count = 0;
  std::map<unsigned int,std::string>::map(&this->line_2_file_path_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->real_line_number >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->real_line_number >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->real_line_number, lua_config_mgr);
  }
  this->real_line_number = 0;
  std::string::basic_string(&this->real_file_path);
  if ( *(char *)(((unsigned __int64)&this->is_version_skip >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_version_skip, lua_config_mgr, &this->is_version_skip);
  this->is_version_skip = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->version, (((_BYTE)this - 116) & 7u) + 3);
  }
  this->version = 0.0;
};

// Line 228: range 000000000F9C33F6-000000000F9C344B
void __cdecl ScriptLibCallChecker::ScriptLibCallChecker(ScriptLibCallChecker *const this)
{
  __int64 v1; // rsi

  std::function<CheckerResult ()(LuaASTContext &,std::vector<std::any> &,bool)>::function(&this->func);
  if ( *(char *)(((unsigned __int64)&this->is_log_error >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_log_error, v1, &this->is_log_error);
  this->is_log_error = 1;
};

// Line 228: range 000000000F99B962-000000000F99B97C
void __cdecl ScriptLibCallChecker::~ScriptLibCallChecker(ScriptLibCallChecker *const this)
{
  std::function<CheckerResult ()(LuaASTContext &,std::vector<std::any> &,bool)>::~function(&this->func);
};
