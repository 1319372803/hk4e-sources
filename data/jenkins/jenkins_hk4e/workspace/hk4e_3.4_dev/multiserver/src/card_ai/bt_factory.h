// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/card_ai/bt_factory.h

// Line 27: range 000000000D839150-000000000D8391AE
BT::TreeNodeRegisterInfo *__cdecl BT::TreeNodeRegisterInfo::operator=(
        BT::TreeNodeRegisterInfo *const this,
        const BT::TreeNodeRegisterInfo *a2)
{
  std::string::operator=(this, a2);
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::operator=(
    &this->builder,
    &a2->builder);
  std::string::operator=(&this->type_name, &a2->type_name);
  return this;
};

// Line 27: range 000000000DC88EDE-000000000DC88F18
void __cdecl BT::TreeNodeRegisterInfo::TreeNodeRegisterInfo(BT::TreeNodeRegisterInfo *const this)
{
  std::string::basic_string(this);
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function(&this->builder);
  std::string::basic_string(&this->type_name);
};

// Line 27: range 000000000D839114-000000000D83914E
void __cdecl BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo(BT::TreeNodeRegisterInfo *const this)
{
  std::string::~string(&this->type_name);
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::~function(&this->builder);
  std::string::~string(this);
};

// Line 39: range 000000000E0EC8AE-000000000E0EC8C8
void __cdecl BT::BehaviorTreeFactory::~BehaviorTreeFactory(BT::BehaviorTreeFactory *const this)
{
  std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::~unordered_map(&this->node_register_umap_);
};

// Line 45: range 000000000D951688-000000000D9516AD
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionGenCandidateOnstageCharacter>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::ActionGenCandidateOnstageCharacter>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionGenCandidateOnstageCharacter>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::ActionGenCandidateOnstageCharacter>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D95138E-000000000D9513B3
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionGenChangeCharacterPlan>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::ActionGenChangeCharacterPlan>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionGenChangeCharacterPlan>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::ActionGenChangeCharacterPlan>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D951192-000000000D9511B7
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionGenChangeToCanAttackCharacter>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::ActionGenChangeToCanAttackCharacter>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionGenChangeToCanAttackCharacter>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::ActionGenChangeToCanAttackCharacter>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D950E98-000000000D950EBD
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionGenCharacterPlan>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::ActionGenCharacterPlan>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionGenCharacterPlan>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::ActionGenCharacterPlan>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D951290-000000000D9512B5
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionGenPlayCardPlan>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::ActionGenPlayCardPlan>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionGenPlayCardPlan>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::ActionGenPlayCardPlan>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D951094-000000000D9510B9
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionGenRebootPlan>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::ActionGenRebootPlan>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionGenRebootPlan>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::ActionGenRebootPlan>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D95158A-000000000D9515AF
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionRedraw>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::ActionRedraw>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionRedraw>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::ActionRedraw>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D950D9A-000000000D950DBF
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionRerollDice>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::ActionRerollDice>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionRerollDice>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::ActionRerollDice>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D950C9C-000000000D950CC1
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionReserveDiceByHand>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::ActionReserveDiceByHand>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionReserveDiceByHand>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::ActionReserveDiceByHand>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D950B9E-000000000D950BC3
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionReserveDiceByRole>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::ActionReserveDiceByRole>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionReserveDiceByRole>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::ActionReserveDiceByRole>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D95148C-000000000D9514B1
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionReserveHandCardByTag>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::ActionReserveHandCardByTag>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionReserveHandCardByTag>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::ActionReserveHandCardByTag>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D951786-000000000D9517AB
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionSelectOnstage>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::ActionSelectOnstage>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionSelectOnstage>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::ActionSelectOnstage>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D950F96-000000000D950FBB
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionSortAndExecPlan>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::ActionSortAndExecPlan>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionSortAndExecPlan>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::ActionSortAndExecPlan>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D9501EC-000000000D950211
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<double>>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<double>>(std::enable_if<std::is_base_of<BT::TreeNode,BT::AssignNode<double>>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<double> >::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D9500EE-000000000D950113
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<int>>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<int>>(std::enable_if<std::is_base_of<BT::TreeNode,BT::AssignNode<int>>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<int> >::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D9502EA-000000000D95030F
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<std::string>>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<std::string>>(std::enable_if<std::is_base_of<BT::TreeNode,BT::AssignNode<std::string>>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<std::string > >::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D9504E6-000000000D95050B
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<std::vector<double>>>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<std::vector<double>>>(std::enable_if<std::is_base_of<BT::TreeNode,BT::AssignNode<std::vector<double>>>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<std::vector<double> > >::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D9503E8-000000000D95040D
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<std::vector<int>>>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<std::vector<int>>>(std::enable_if<std::is_base_of<BT::TreeNode,BT::AssignNode<std::vector<int>>>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<std::vector<int> > >::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D9507A6-000000000D9507CB
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsActionPhase>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsActionPhase>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ConditionCheckIsActionPhase>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsActionPhase>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D9509A2-000000000D9509C7
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsDrawPhase>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsDrawPhase>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ConditionCheckIsDrawPhase>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsDrawPhase>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D9506A8-000000000D9506CD
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsRerollPhase>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsRerollPhase>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ConditionCheckIsRerollPhase>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsRerollPhase>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D9508A4-000000000D9508C9
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsSelectOnstageCharacterPhase>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsSelectOnstageCharacterPhase>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ConditionCheckIsSelectOnstageCharacterPhase>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsSelectOnstageCharacterPhase>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D950AA0-000000000D950AC5
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::DoPassNode>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::DoPassNode>(std::enable_if<std::is_base_of<BT::TreeNode,BT::DoPassNode>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::DoPassNode>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D94FD9C-000000000D94FDC1
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::ForceSuccessNode>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::ForceSuccessNode>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ForceSuccessNode>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::ForceSuccessNode>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D94FB2C-000000000D94FB51
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::SelectorNode>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::SelectorNode>(std::enable_if<std::is_base_of<BT::TreeNode,BT::SelectorNode>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::SelectorNode>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D94F9EC-000000000D94FA11
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::SequenceNode>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::SequenceNode>(std::enable_if<std::is_base_of<BT::TreeNode,BT::SequenceNode>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::SequenceNode>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D94FE9A-000000000D94FEBF
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::SubtreeNode>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::SubtreeNode>(std::enable_if<std::is_base_of<BT::TreeNode,BT::SubtreeNode>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::SubtreeNode>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 45: range 000000000D94FC2A-000000000D94FC4F
BT::NodeBuilder *__cdecl BT::BehaviorTreeFactory::createBuilder<BT::SwitchNode>(
        BT::NodeBuilder *retstr,
        BT::BehaviorTreeFactory *const this,
        std::enable_if<true,void>::type *a3)
{
  std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)>::function<std::function<std::shared_ptr<BT::TreeNode> ()(std::string const&,BT::NodeConfigure const&)> BT::BehaviorTreeFactory::createBuilder<BT::SwitchNode>(std::enable_if<std::is_base_of<BT::TreeNode,BT::SwitchNode>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1},void,void>(
    retstr,
    (BT::BehaviorTreeFactory::createBuilder<BT::SwitchNode>::<lambda(const string&, const BT::NodeConfigure&)>)this);
  return retstr;
};

// Line 47: range 000000000D9515B0-000000000D951624
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionGenCandidateOnstageCharacter>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionGenCandidateOnstageCharacter>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::ActionGenCandidateOnstageCharacter>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::ActionGenCandidateOnstageCharacter *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::ActionGenCandidateOnstageCharacter *)operator new(0x88uLL);
  ZN2BT34ActionGenCandidateOnstageCharacterCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D9512B6-000000000D95132A
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionGenChangeCharacterPlan>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionGenChangeCharacterPlan>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::ActionGenChangeCharacterPlan>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::ActionGenChangeCharacterPlan *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::ActionGenChangeCharacterPlan *)operator new(0x88uLL);
  ZN2BT28ActionGenChangeCharacterPlanCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D9510BA-000000000D95112E
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionGenChangeToCanAttackCharacter>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionGenChangeToCanAttackCharacter>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::ActionGenChangeToCanAttackCharacter>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::ActionGenChangeToCanAttackCharacter *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::ActionGenChangeToCanAttackCharacter *)operator new(0x88uLL);
  ZN2BT35ActionGenChangeToCanAttackCharacterCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D950DC0-000000000D950E34
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionGenCharacterPlan>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionGenCharacterPlan>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::ActionGenCharacterPlan>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::ActionGenCharacterPlan *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::ActionGenCharacterPlan *)operator new(0x88uLL);
  ZN2BT22ActionGenCharacterPlanCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D9511B8-000000000D95122C
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionGenPlayCardPlan>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionGenPlayCardPlan>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::ActionGenPlayCardPlan>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::ActionGenPlayCardPlan *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::ActionGenPlayCardPlan *)operator new(0x88uLL);
  ZN2BT21ActionGenPlayCardPlanCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D950FBC-000000000D951030
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionGenRebootPlan>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionGenRebootPlan>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::ActionGenRebootPlan>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::ActionGenRebootPlan *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::ActionGenRebootPlan *)operator new(0x88uLL);
  ZN2BT19ActionGenRebootPlanCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D9514B2-000000000D951526
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionRedraw>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionRedraw>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::ActionRedraw>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::ActionRedraw *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::ActionRedraw *)operator new(0x88uLL);
  ZN2BT12ActionRedrawCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D950CC2-000000000D950D36
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionRerollDice>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionRerollDice>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::ActionRerollDice>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::ActionRerollDice *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::ActionRerollDice *)operator new(0x88uLL);
  ZN2BT16ActionRerollDiceCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D950BC4-000000000D950C38
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionReserveDiceByHand>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionReserveDiceByHand>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::ActionReserveDiceByHand>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::ActionReserveDiceByHand *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::ActionReserveDiceByHand *)operator new(0x88uLL);
  ZN2BT23ActionReserveDiceByHandCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D950AC6-000000000D950B3A
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionReserveDiceByRole>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionReserveDiceByRole>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::ActionReserveDiceByRole>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::ActionReserveDiceByRole *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::ActionReserveDiceByRole *)operator new(0x88uLL);
  ZN2BT23ActionReserveDiceByRoleCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D9513B4-000000000D951428
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionReserveHandCardByTag>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionReserveHandCardByTag>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::ActionReserveHandCardByTag>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::ActionReserveHandCardByTag *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::ActionReserveHandCardByTag *)operator new(0x88uLL);
  ZN2BT26ActionReserveHandCardByTagCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D9516AE-000000000D951722
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionSelectOnstage>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionSelectOnstage>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::ActionSelectOnstage>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::ActionSelectOnstage *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::ActionSelectOnstage *)operator new(0x88uLL);
  ZN2BT19ActionSelectOnstageCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D950EBE-000000000D950F32
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::ActionSortAndExecPlan>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ActionSortAndExecPlan>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::ActionSortAndExecPlan>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::ActionSortAndExecPlan *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::ActionSortAndExecPlan *)operator new(0x88uLL);
  ZN2BT21ActionSortAndExecPlanCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D950114-000000000D950188
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<double>>(std::enable_if<std::is_base_of<BT::TreeNode,BT::AssignNode<double>>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<double> >::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::AssignNode<double> *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::AssignNode<double> *)operator new(0x88uLL);
  ZN2BT10AssignNodeIdECI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D94FEC0-000000000D94FF34
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<int>>(std::enable_if<std::is_base_of<BT::TreeNode,BT::AssignNode<int>>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<int> >::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::AssignNode<int> *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::AssignNode<int> *)operator new(0x88uLL);
  ZN2BT10AssignNodeIiECI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D950212-000000000D950286
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<std::string>>(std::enable_if<std::is_base_of<BT::TreeNode,BT::AssignNode<std::string>>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<std::string > >::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::AssignNode<std::string > *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::AssignNode<std::string > *)operator new(0x88uLL);
  ZN2BT10AssignNodeINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEECI2NS_8LeafNodeEERKS6_RKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D95040E-000000000D950482
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<std::vector<double>>>(std::enable_if<std::is_base_of<BT::TreeNode,BT::AssignNode<std::vector<double>>>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<std::vector<double> > >::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::AssignNode<std::vector<double> > *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::AssignNode<std::vector<double> > *)operator new(0x88uLL);
  ZN2BT10AssignNodeISt6vectorIdSaIdEEECI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D950310-000000000D950384
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<std::vector<int>>>(std::enable_if<std::is_base_of<BT::TreeNode,BT::AssignNode<std::vector<int>>>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<std::vector<int> > >::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::AssignNode<std::vector<int> > *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::AssignNode<std::vector<int> > *)operator new(0x88uLL);
  ZN2BT10AssignNodeISt6vectorIiSaIiEEECI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D9506CE-000000000D950742
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsActionPhase>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ConditionCheckIsActionPhase>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsActionPhase>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::ConditionCheckIsActionPhase *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::ConditionCheckIsActionPhase *)operator new(0x88uLL);
  ZN2BT27ConditionCheckIsActionPhaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D9508CA-000000000D95093E
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsDrawPhase>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ConditionCheckIsDrawPhase>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsDrawPhase>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::ConditionCheckIsDrawPhase *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::ConditionCheckIsDrawPhase *)operator new(0x88uLL);
  ZN2BT25ConditionCheckIsDrawPhaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D95050C-000000000D950580
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsRerollPhase>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ConditionCheckIsRerollPhase>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsRerollPhase>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::ConditionCheckIsRerollPhase *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::ConditionCheckIsRerollPhase *)operator new(0x88uLL);
  ZN2BT27ConditionCheckIsRerollPhaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D9507CC-000000000D950840
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsSelectOnstageCharacterPhase>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ConditionCheckIsSelectOnstageCharacterPhase>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsSelectOnstageCharacterPhase>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::ConditionCheckIsSelectOnstageCharacterPhase *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::ConditionCheckIsSelectOnstageCharacterPhase *)operator new(0x88uLL);
  ZN2BT43ConditionCheckIsSelectOnstageCharacterPhaseCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D9509C8-000000000D950A3C
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::DoPassNode>(std::enable_if<std::is_base_of<BT::TreeNode,BT::DoPassNode>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::DoPassNode>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::DoPassNode *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::DoPassNode *)operator new(0x88uLL);
  ZN2BT10DoPassNodeCI2NS_8LeafNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D94FC50-000000000D94FCC4
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::ForceSuccessNode>(std::enable_if<std::is_base_of<BT::TreeNode,BT::ForceSuccessNode>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::ForceSuccessNode>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::ForceSuccessNode *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::ForceSuccessNode *)operator new(0x98uLL);
  ZN2BT16ForceSuccessNodeCI2NS_8TreeNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D94FA12-000000000D94FA86
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::SelectorNode>(std::enable_if<std::is_base_of<BT::TreeNode,BT::SelectorNode>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::SelectorNode>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::SelectorNode *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::SelectorNode *)operator new(0xA8uLL);
  ZN2BT12SelectorNodeCI2NS_8TreeNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D94F826-000000000D94F89A
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::SequenceNode>(std::enable_if<std::is_base_of<BT::TreeNode,BT::SequenceNode>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::SequenceNode>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::SequenceNode *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::SequenceNode *)operator new(0xA8uLL);
  ZN2BT12SequenceNodeCI2NS_8TreeNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D94FDC2-000000000D94FE36
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::SubtreeNode>(std::enable_if<std::is_base_of<BT::TreeNode,BT::SubtreeNode>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::SubtreeNode>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::SubtreeNode *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::SubtreeNode *)operator new(0x98uLL);
  ZN2BT11SubtreeNodeCI2NS_8TreeNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 47: range 000000000D94FB52-000000000D94FBC6
std::unique_ptr<BT::TreeNode> __cdecl BT::BehaviorTreeFactory::createBuilder<BT::SwitchNode>(std::enable_if<std::is_base_of<BT::TreeNode,BT::SwitchNode>::value,void>::type *)::{lambda(std::string const&,BT::NodeConfigure const&)#1}::operator()(
        const BT::BehaviorTreeFactory::createBuilder<BT::SwitchNode>::<lambda(const string&, const BT::NodeConfigure&)> *const this,
        const std::string *name,
        const BT::NodeConfigure *config)
{
  const BT::NodeConfigure *v3; // rcx
  BT::SwitchNode *__p; // [rsp+8h] [rbp-38h]
  const BT::NodeConfigure *configa; // [rsp+10h] [rbp-30h]

  configa = v3;
  __p = (BT::SwitchNode *)operator new(0xA0uLL);
  ZN2BT10SwitchNodeCI2NS_8TreeNodeEERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKNS_13NodeConfigureE(
    __p,
    (const std::string *)config,
    configa);
  std::unique_ptr<BT::TreeNode>::unique_ptr<std::default_delete<BT::TreeNode>,void>(
    (std::unique_ptr<BT::TreeNode> *const)this,
    __p);
  return (std::unique_ptr<BT::TreeNode>)this;
};

// Line 54: range 000000000D89AC74-000000000D89AF52
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::ActionGenCandidateOnstageCharacter>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::ActionGenCandidateOnstageCharacter>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::ActionGenCandidateOnstageCharacter>(
      (BT::NodeBuilder *)(v2 + 64),
      this,
      0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::ActionGenCandidateOnstageCharacter);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D89A3D4-000000000D89A6B2
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::ActionGenChangeCharacterPlan>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::ActionGenChangeCharacterPlan>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::ActionGenChangeCharacterPlan>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::ActionGenChangeCharacterPlan);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D899E14-000000000D89A0F2
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::ActionGenChangeToCanAttackCharacter>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::ActionGenChangeToCanAttackCharacter>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::ActionGenChangeToCanAttackCharacter>(
      (BT::NodeBuilder *)(v2 + 64),
      this,
      0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::ActionGenChangeToCanAttackCharacter);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D899574-000000000D899852
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::ActionGenCharacterPlan>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::ActionGenCharacterPlan>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::ActionGenCharacterPlan>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::ActionGenCharacterPlan);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D89A0F4-000000000D89A3D2
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::ActionGenPlayCardPlan>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::ActionGenPlayCardPlan>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::ActionGenPlayCardPlan>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::ActionGenPlayCardPlan);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D899B34-000000000D899E12
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::ActionGenRebootPlan>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::ActionGenRebootPlan>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::ActionGenRebootPlan>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::ActionGenRebootPlan);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D89A994-000000000D89AC72
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::ActionRedraw>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::ActionRedraw>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::ActionRedraw>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::ActionRedraw);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D899294-000000000D899572
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::ActionRerollDice>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::ActionRerollDice>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::ActionRerollDice>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::ActionRerollDice);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D898FB4-000000000D899292
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::ActionReserveDiceByHand>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::ActionReserveDiceByHand>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::ActionReserveDiceByHand>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::ActionReserveDiceByHand);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D898CD4-000000000D898FB2
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::ActionReserveDiceByRole>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::ActionReserveDiceByRole>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::ActionReserveDiceByRole>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::ActionReserveDiceByRole);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D89A6B4-000000000D89A992
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::ActionReserveHandCardByTag>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::ActionReserveHandCardByTag>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::ActionReserveHandCardByTag>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::ActionReserveHandCardByTag);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D89AF54-000000000D89B232
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::ActionSelectOnstage>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::ActionSelectOnstage>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::ActionSelectOnstage>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::ActionSelectOnstage);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D899854-000000000D899B32
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::ActionSortAndExecPlan>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::ActionSortAndExecPlan>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::ActionSortAndExecPlan>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::ActionSortAndExecPlan);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D8972F4-000000000D8975D2
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::AssignNode<double>>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::AssignNode<double>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<double>>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::AssignNode<double>);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D897014-000000000D8972F2
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::AssignNode<int>>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::AssignNode<int>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<int>>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::AssignNode<int>);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D8975D4-000000000D8978B2
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::AssignNode<std::string>>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::AssignNode<std::string>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<std::string>>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::AssignNode<std::string>);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D897B94-000000000D897E72
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::AssignNode<std::vector<double>>>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::AssignNode<std::vector<double>>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<std::vector<double>>>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::AssignNode<std::vector<double>>);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D8978B4-000000000D897B92
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::AssignNode<std::vector<int>>>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::AssignNode<std::vector<int>>>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::AssignNode<std::vector<int>>>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::AssignNode<std::vector<int>>);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D898154-000000000D898432
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::ConditionCheckIsActionPhase>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::ConditionCheckIsActionPhase>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsActionPhase>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::ConditionCheckIsActionPhase);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D898714-000000000D8989F2
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::ConditionCheckIsDrawPhase>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::ConditionCheckIsDrawPhase>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsDrawPhase>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::ConditionCheckIsDrawPhase);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D897E74-000000000D898152
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::ConditionCheckIsRerollPhase>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::ConditionCheckIsRerollPhase>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsRerollPhase>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::ConditionCheckIsRerollPhase);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D898434-000000000D898712
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::ConditionCheckIsSelectOnstageCharacterPhase>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::ConditionCheckIsSelectOnstageCharacterPhase>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::ConditionCheckIsSelectOnstageCharacterPhase>(
      (BT::NodeBuilder *)(v2 + 64),
      this,
      0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::ConditionCheckIsSelectOnstageCharacterPhase);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D8989F4-000000000D898CD2
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::DoPassNode>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::DoPassNode>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::DoPassNode>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::DoPassNode);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D896A54-000000000D896D32
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::ForceSuccessNode>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::ForceSuccessNode>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::ForceSuccessNode>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::ForceSuccessNode);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D896494-000000000D896772
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::SelectorNode>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::SelectorNode>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::SelectorNode>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::SelectorNode);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D8961B4-000000000D896492
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::SequenceNode>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::SequenceNode>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::SequenceNode>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::SequenceNode);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D896D34-000000000D897012
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::SubtreeNode>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::SubtreeNode>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::SubtreeNode>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::SubtreeNode);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 54: range 000000000D896774-000000000D896A52
int32_t __cdecl BT::BehaviorTreeFactory::registerNode<BT::SwitchNode>(
        BT::BehaviorTreeFactory *const this,
        const std::string *node_name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  const char *v8; // rax
  BT::TreeNodeRegisterInfo *v9; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-F1h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-F0h] BYREF
  char v13[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 16 register_info:68";
  *(_QWORD *)(v2 + 16) = BT::BehaviorTreeFactory::registerNode<BT::SwitchNode>;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  if ( std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::count(&this->node_register_umap_, node_name) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/card_ai/bt_factory.h",
      "registerNode",
      65);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v12, (const char (*)[11])"node name:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" register dup!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    std::string::basic_string(v2 + 32, node_name);
    BT::BehaviorTreeFactory::createBuilder<BT::SwitchNode>((BT::NodeBuilder *)(v2 + 64), this, 0LL);
    std::allocator<char>::allocator(&__a);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'BT::SwitchNode);
    std::string::basic_string<std::allocator<char>>((std::string *const)(v2 + 96), v8, &__a);
    std::allocator<char>::~allocator(&__a);
    v9 = std::unordered_map<std::string,BT::TreeNodeRegisterInfo>::operator[](&this->node_register_umap_, node_name);
    BT::TreeNodeRegisterInfo::operator=(v9, (const BT::TreeNodeRegisterInfo *)(v2 + 32));
    v7 = 0;
    BT::TreeNodeRegisterInfo::~TreeNodeRegisterInfo((BT::TreeNodeRegisterInfo *const)(v2 + 32));
  }
  result = v7;
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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
