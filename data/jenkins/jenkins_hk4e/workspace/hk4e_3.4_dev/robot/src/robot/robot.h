// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/robot/src/robot/robot.h

// Line 43: range 00000000004DA164-00000000004DA56E
void __cdecl RobotConf::RobotConf(RobotConf *const this)
{
  std::string::basic_string(&this->host);
  if ( *(_BYTE *)(((unsigned __int64)&this->port >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->port >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->port);
  }
  this->port = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout_ms >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timeout_ms >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->timeout_ms);
  }
  this->timeout_ms = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->account_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->account_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->account_type);
  }
  this->account_type = 0;
  std::string::basic_string(&this->account_uid);
  std::string::basic_string(&this->account_token);
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->channel_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->channel_id);
  }
  this->channel_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_guest >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_guest >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_guest);
  }
  this->is_guest = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid);
  }
  this->uid = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open_log >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open_log >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open_log);
  }
  this->is_open_log = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_compress >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 125) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_compress >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_compress);
  }
  this->is_compress = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_crc32 >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 126) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_crc32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_crc32);
  }
  this->is_crc32 = 1;
  std::string::basic_string(&this->client_version);
  if ( *(_BYTE *)(((unsigned __int64)&this->platform_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->platform_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->platform_type);
  }
  this->platform_type = 0;
  std::string::basic_string(&this->online_id);
  std::string::basic_string(&this->psn_region);
  if ( *(char *)(((unsigned __int64)&this->is_force_exit >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_force_exit);
  this->is_force_exit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_read_data_config >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 23) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_read_data_config >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_read_data_config);
  }
  this->is_read_data_config = 1;
  std::string::basic_string(&this->cloud_client_ip);
  if ( *(char *)(((unsigned __int64)&this->is_use_req_rsp_helper >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_use_req_rsp_helper);
  this->is_use_req_rsp_helper = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_use_not_zero_helper >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_use_not_zero_helper >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_use_not_zero_helper);
  }
  this->is_use_not_zero_helper = 0;
};

// Line 43: range 00000000004DA570-00000000004DA5F0
void __cdecl RobotConf::~RobotConf(RobotConf *const this)
{
  std::string::~string(&this->cloud_client_ip);
  std::string::~string(&this->psn_region);
  std::string::~string(&this->online_id);
  std::string::~string(&this->client_version);
  std::string::~string(&this->account_token);
  std::string::~string(&this->account_uid);
  std::string::~string(&this->host);
};

// Line 69: range 00000000004E3220-00000000004E3330
User *__cdecl User::operator=(User *const this, const User *a2)
{
  uint32_t uid; // ecx
  uint64_t client_rand_key; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  uid = a2->uid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->uid = uid;
  std::string::operator=(&this->token, &a2->token);
  std::string::operator=(&this->secret_key, &a2->secret_key);
  if ( *(_BYTE *)(((unsigned __int64)&a2->client_rand_key >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->client_rand_key);
  client_rand_key = a2->client_rand_key;
  if ( *(_BYTE *)(((unsigned __int64)&this->client_rand_key >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->client_rand_key = client_rand_key;
  return this;
};

// Line 69: range 00000000004DA5F2-00000000004DA68A
void __cdecl User::User(User *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->uid = 0;
  std::string::basic_string(&this->token);
  std::string::basic_string(&this->secret_key);
  if ( *(_BYTE *)(((unsigned __int64)&this->client_rand_key >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->client_rand_key = 0LL;
};

// Line 69: range 00000000008F2AF0-00000000008F2BFD
void __cdecl User::User(User *const this, User *a2)
{
  uint32_t uid; // ecx
  uint64_t client_rand_key; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  uid = a2->uid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->uid = uid;
  std::string::basic_string(&this->token, &a2->token);
  std::string::basic_string(&this->secret_key, &a2->secret_key);
  if ( *(_BYTE *)(((unsigned __int64)&a2->client_rand_key >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->client_rand_key);
  client_rand_key = a2->client_rand_key;
  if ( *(_BYTE *)(((unsigned __int64)&this->client_rand_key >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->client_rand_key = client_rand_key;
};

// Line 69: range 0000000000639EC4-0000000000639FF8
void __cdecl User::User(User *const this, const User *a2)
{
  uint32_t uid; // ecx
  uint64_t client_rand_key; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  uid = a2->uid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->uid = uid;
  std::string::basic_string(&this->token, &a2->token);
  std::string::basic_string(&this->secret_key, &a2->secret_key);
  if ( *(_BYTE *)(((unsigned __int64)&a2->client_rand_key >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->client_rand_key);
  client_rand_key = a2->client_rand_key;
  if ( *(_BYTE *)(((unsigned __int64)&this->client_rand_key >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->client_rand_key = client_rand_key;
};

// Line 69: range 00000000004DA68C-00000000004DA6BA
void __cdecl User::~User(User *const this)
{
  std::string::~string(&this->secret_key);
  std::string::~string(&this->token);
};

// Line 78: range 00000000004E39FC-00000000004E3B9B
void __cdecl QuestEntityParam::QuestEntityParam(QuestEntityParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->scene_id = 0;
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->monster_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->monster_id);
  }
  this->monster_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_id);
  }
  this->gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->npc_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->npc_id);
  }
  this->npc_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_id);
  }
  this->item_id = 0;
};

// Line 97: range 00000000009A95CC-00000000009A9754
void __cdecl Robot::~Robot(Robot *const this)
{
  std::list<std::function<int ()(Robot &)>>::~list(&this->logic_func_que_);
  std::unordered_map<unsigned int,luabind::adl::object>::~unordered_map(&this->lua_recv_cmd_id_map_);
  std::unordered_map<unsigned int,std::pair<std::string,std::string>>::~unordered_map(&this->lua_recv_map_);
  std::unordered_map<unsigned int,std::pair<std::string,luabind::adl::object>>::~unordered_map(&this->lua_recv_func_map_);
  Scene::~Scene(&this->scene_);
  Player::~Player(&this->player_);
  std::shared_ptr<common::minet::PacketSenderCoroExec>::~shared_ptr(&this->coro_exec_ptr_);
  std::shared_ptr<common::minet::Coroutine>::~shared_ptr(&this->coro_ptr_);
  std::shared_ptr<common::minet::kcp_client>::~shared_ptr(&this->client_);
  LuaScript::~LuaScript(&this->script_);
  User::~User(&this->user_);
  RobotConf::~RobotConf(&this->conf_);
  std::shared_ptr<common::tools::TimerMgr>::~shared_ptr(&this->timer_mgr_ptr_);
  std::vector<std::string>::~vector(&this->stringVector);
  std::vector<std::string>::~vector(&this->floatVector);
  std::vector<std::string>::~vector(&this->doubleVector);
  std::vector<std::string>::~vector(&this->uInt64Vector);
  std::vector<std::string>::~vector(&this->uInt32Vector);
  std::vector<std::string>::~vector(&this->int64Vector);
  std::vector<std::string>::~vector(&this->int32Vector);
  luabind::adl::object::~object(&this->recv_proto);
  std::enable_shared_from_this<Robot>::~enable_shared_from_this(this);
};

// Line 118: range 00000000004DAC72-00000000004DB2E0
void __cdecl Robot::Robot(Robot *const this, uint32_t robot_id)
{
  std::shared_ptr<lua_State> p_lua_state_ptr; // [rsp+10h] [rbp-20h] BYREF

  std::enable_shared_from_this<Robot>::enable_shared_from_this(this);
  luabind::adl::object::object(&this->recv_proto);
  std::vector<std::string>::vector(&this->int32Vector);
  std::vector<std::string>::vector(&this->int64Vector);
  std::vector<std::string>::vector(&this->uInt32Vector);
  std::vector<std::string>::vector(&this->uInt64Vector);
  std::vector<std::string>::vector(&this->doubleVector);
  std::vector<std::string>::vector(&this->floatVector);
  std::vector<std::string>::vector(&this->stringVector);
  if ( *(_BYTE *)(((unsigned __int64)&this->robot_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->robot_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->robot_id_);
  }
  this->robot_id_ = robot_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->retcode_);
  }
  this->retcode_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->game_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->game_time_);
  }
  this->game_time_ = 0;
  if ( *(_WORD *)(((unsigned __int64)&this->timer_mgr_ptr_ >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->timer_mgr_ptr_, (((_BYTE)this - 52) & 7u) + 3);
  std::make_shared<common::tools::TimerMgr>();
  RobotConf::RobotConf(&this->conf_);
  User::User(&this->user_);
  Robot::createLuaState();
  LuaScript::LuaScript(&this->script_, &p_lua_state_ptr);
  std::shared_ptr<lua_State>::~shared_ptr(&p_lua_state_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->status_);
  }
  this->status_ = STATUS_NONE;
  std::shared_ptr<common::minet::kcp_client>::shared_ptr(&this->client_, 0LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->token_);
  }
  this->token_ = 0;
  std::shared_ptr<common::minet::Coroutine>::shared_ptr(&this->coro_ptr_);
  std::shared_ptr<common::minet::PacketSenderCoroExec>::shared_ptr(&this->coro_exec_ptr_);
  if ( *(char *)(((unsigned __int64)&this->rsp_resume_coro_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->rsp_resume_coro_);
  this->rsp_resume_coro_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->awaiting_cmd_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 122) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->awaiting_cmd_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->awaiting_cmd_id_);
  }
  this->awaiting_cmd_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_log_open_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_log_open_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_log_open_);
  }
  this->is_log_open_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 125) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finished_);
  }
  this->is_finished_ = 0;
  Player::Player(&this->player_, this);
  Scene::Scene(&this->scene_, this);
  std::unordered_map<unsigned int,std::pair<std::string,luabind::adl::object>>::unordered_map(&this->lua_recv_func_map_);
  std::unordered_map<unsigned int,std::pair<std::string,std::string>>::unordered_map(&this->lua_recv_map_);
  std::unordered_map<unsigned int,luabind::adl::object>::unordered_map(&this->lua_recv_cmd_id_map_);
  std::list<std::function<int ()(Robot &)>>::list(&this->logic_func_que_);
  if ( *(_BYTE *)(((unsigned __int64)&this->client_sequence_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->client_sequence_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->client_sequence_id_);
  }
  this->client_sequence_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->round_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->round_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->round_);
  }
  this->round_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->revert_message_byte_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->revert_message_byte_index_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->revert_message_byte_index_);
  }
  this->revert_message_byte_index_ = -1;
};

// Line 123: range 00000000004DB2E2-00000000004DB32E
Robot::Status __cdecl Robot::getStatus(const Robot *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->status_);
  }
  return this->status_;
};

// Line 146: range 00000000004DB330-00000000004DB343
const RobotConf *__cdecl Robot::getConf(const Robot *const this)
{
  return &this->conf_;
};

// Line 147: range 00000000004DB344-00000000004DB357
const User *__cdecl Robot::getUser(const Robot *const this)
{
  return &this->user_;
};

// Line 148: range 00000000004DB358-00000000004DB36B
LuaScript *__cdecl Robot::getScript(Robot *const this)
{
  return &this->script_;
};

// Line 150: range 00000000004DB36C-00000000004DB3BE
bool __cdecl Robot::isLogOpen(const Robot *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_log_open_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_log_open_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_log_open_);
  }
  return this->is_log_open_;
};

// Line 151: range 00000000004DB3C0-00000000004DB41A
void __cdecl Robot::setLogOpen(Robot *const this, bool is_log_open)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_log_open_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_log_open_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_log_open_);
  }
  this->is_log_open_ = is_log_open;
};

// Line 152: range 00000000004DB41C-00000000004DB46E
bool __cdecl Robot::isFinished(const Robot *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 125) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finished_);
  }
  return this->is_finished_;
};

// Line 153: range 00000000004DB470-00000000004DB4BD
bool __cdecl Robot::isRspResumeCoro(const Robot *const this)
{
  if ( *(char *)(((unsigned __int64)&this->rsp_resume_coro_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->rsp_resume_coro_);
  return this->rsp_resume_coro_;
};

// Line 154: range 00000000004DB4BE-00000000004DB513
void __cdecl Robot::setRspResumeCoro(Robot *const this, bool rsp_resume_coro)
{
  if ( *(char *)(((unsigned __int64)&this->rsp_resume_coro_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->rsp_resume_coro_);
  this->rsp_resume_coro_ = rsp_resume_coro;
};

// Line 155: range 00000000004DB514-00000000004DB591
bool __cdecl Robot::isAwaitingCmdId(const Robot *const this, uint16_t cmd_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->awaiting_cmd_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 122) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->awaiting_cmd_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&this->awaiting_cmd_id_);
  }
  return !this->awaiting_cmd_id_ || cmd_id == this->awaiting_cmd_id_;
};

// Line 157: range 00000000004DB592-00000000004DB5E4
void __cdecl Robot::setHasRecv(Robot *const this, uint32_t flag)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->has_recv_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->has_recv_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->has_recv_);
  }
  this->has_recv_ = flag;
};

// Line 158: range 00000000004DB5E6-00000000004DB632
uint32_t __cdecl Robot::getHasRecv(Robot *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->has_recv_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->has_recv_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->has_recv_);
  }
  return this->has_recv_;
};

// Line 160: range 00000000004DB67E-00000000004DB6AA
luabind::adl::object __cdecl Robot::getRecvProto(Robot *const this)
{
  const luabind::adl::object *v1; // rsi
  luabind::adl::object result; // 0:rax.12

  luabind::adl::object::object((luabind::adl::object *const)this, v1 + 1);
  result.m_handle.m_interpreter = (lua_State_0 *)this;
  return result;
};

// Line 214: range 00000000004DB6AC-00000000004DB6BF
Player *__cdecl Robot::getPlayer(Robot *const this)
{
  return &this->player_;
};

// Line 215: range 00000000004DB6C0-00000000004DB6D3
Scene *__cdecl Robot::getScene(Robot *const this)
{
  return &this->scene_;
};

// Line 216: range 00000000004DB6D4-00000000004DB6E6
RobotReporter *__cdecl Robot::getReporter(Robot *const this)
{
  return MultiThreadSingleton<RobotReporter>::instance();
};

// Line 217: range 00000000004DB6E8-00000000004DB734
uint32_t __cdecl Robot::getRound(Robot *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->round_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->round_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->round_);
  }
  return this->round_;
};

// Line 220: range 00000000004E2A54-00000000004E321E
RobotConf *__cdecl RobotConf::operator=(RobotConf *const this, const RobotConf *a2)
{
  uint16_t port; // cx
  uint32_t timeout_ms; // ecx
  uint32_t account_type; // ecx
  uint32_t channel_id; // ecx
  bool is_guest; // cl
  uint32_t uid; // ecx
  bool is_open_log; // cl
  bool is_compress; // cl
  bool is_crc32; // cl
  uint32_t platform_type; // ecx
  bool is_force_exit; // cl
  bool is_read_data_config; // cl
  bool is_use_req_rsp_helper; // cl
  bool is_use_not_zero_helper; // cl

  std::string::operator=(&this->host, &a2->host);
  if ( *(_BYTE *)(((unsigned __int64)&a2->port >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->port >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_load2(&a2->port);
  }
  port = a2->port;
  if ( *(_BYTE *)(((unsigned __int64)&this->port >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->port >> 3) + 0x7FFF8000) <= 1 )
  {
    __asan_report_store2(&this->port);
  }
  this->port = port;
  if ( *(_BYTE *)(((unsigned __int64)&a2->timeout_ms >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->timeout_ms >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->timeout_ms);
  }
  timeout_ms = a2->timeout_ms;
  if ( *(_BYTE *)(((unsigned __int64)&this->timeout_ms >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timeout_ms >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->timeout_ms);
  }
  this->timeout_ms = timeout_ms;
  if ( *(_BYTE *)(((unsigned __int64)&a2->account_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->account_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->account_type);
  }
  account_type = a2->account_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->account_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->account_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->account_type);
  }
  this->account_type = account_type;
  std::string::operator=(&this->account_uid, &a2->account_uid);
  std::string::operator=(&this->account_token, &a2->account_token);
  if ( *(_BYTE *)(((unsigned __int64)&a2->channel_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->channel_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->channel_id);
  }
  channel_id = a2->channel_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->channel_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->channel_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->channel_id);
  }
  this->channel_id = channel_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_guest >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_guest >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_guest);
  }
  is_guest = a2->is_guest;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_guest >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_guest >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_guest);
  }
  this->is_guest = is_guest;
  if ( *(_BYTE *)(((unsigned __int64)&a2->uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->uid);
  }
  uid = a2->uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid);
  }
  this->uid = uid;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_open_log >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_open_log >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_open_log);
  }
  is_open_log = a2->is_open_log;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open_log >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open_log >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open_log);
  }
  this->is_open_log = is_open_log;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_compress >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 125) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_compress >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_compress);
  }
  is_compress = a2->is_compress;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_compress >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 125) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_compress >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_compress);
  }
  this->is_compress = is_compress;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_crc32 >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 126) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_crc32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_crc32);
  }
  is_crc32 = a2->is_crc32;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_crc32 >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 126) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_crc32 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_crc32);
  }
  this->is_crc32 = is_crc32;
  std::string::operator=(&this->client_version, &a2->client_version);
  if ( *(_BYTE *)(((unsigned __int64)&a2->platform_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->platform_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->platform_type);
  }
  platform_type = a2->platform_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->platform_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->platform_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->platform_type);
  }
  this->platform_type = platform_type;
  std::string::operator=(&this->online_id, &a2->online_id);
  std::string::operator=(&this->psn_region, &a2->psn_region);
  if ( *(char *)(((unsigned __int64)&a2->is_force_exit >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_force_exit);
  is_force_exit = a2->is_force_exit;
  if ( *(char *)(((unsigned __int64)&this->is_force_exit >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_force_exit);
  this->is_force_exit = is_force_exit;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_read_data_config >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 23) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_read_data_config >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_read_data_config);
  }
  is_read_data_config = a2->is_read_data_config;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_read_data_config >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 23) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_read_data_config >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_read_data_config);
  }
  this->is_read_data_config = is_read_data_config;
  std::string::operator=(&this->cloud_client_ip, &a2->cloud_client_ip);
  if ( *(char *)(((unsigned __int64)&a2->is_use_req_rsp_helper >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_use_req_rsp_helper);
  is_use_req_rsp_helper = a2->is_use_req_rsp_helper;
  if ( *(char *)(((unsigned __int64)&this->is_use_req_rsp_helper >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_use_req_rsp_helper);
  this->is_use_req_rsp_helper = is_use_req_rsp_helper;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_use_not_zero_helper >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_use_not_zero_helper >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_use_not_zero_helper);
  }
  is_use_not_zero_helper = a2->is_use_not_zero_helper;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_use_not_zero_helper >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 17) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_use_not_zero_helper >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_use_not_zero_helper);
  }
  this->is_use_not_zero_helper = is_use_not_zero_helper;
  return this;
};

// Line 237: range 00000000004DB736-00000000004DB782
uint32_t __cdecl Robot::getUid(const Robot *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->user_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->user_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->user_);
  }
  return this->user_.uid;
};

// Line 431: range 00000000004DB784-00000000004DB7D8
int32_t __cdecl Robot::getRetcode(const Robot *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->retcode_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->retcode_);
  }
  return this->retcode_;
};
