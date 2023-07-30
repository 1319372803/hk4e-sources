// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/script/script_lib.h

// Line 27: range 000000001385C3B2-000000001385C534
void __cdecl ScriptContext::ScriptContext(ScriptContext *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl
  bool v4; // dl

  std::weak_ptr<Scene>::weak_ptr(&this->scene_wtr);
  std::weak_ptr<Group>::weak_ptr(&this->group_wtr);
  std::weak_ptr<Trigger>::weak_ptr(&this->trigger_wtr);
  std::weak_ptr<Gadget>::weak_ptr(&this->gadget_wtr);
  std::weak_ptr<Monster>::weak_ptr(&this->monster_wtr);
  if ( *(_BYTE *)(((unsigned __int64)&this->source_entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->source_entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->source_entity_id, v1, (_BYTE)this + 80);
  }
  this->source_entity_id = 0;
  v2 = (((_BYTE)this + 84) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->target_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_entity_id >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->target_entity_id, v2, v3);
  this->target_entity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid, v2, (_BYTE)this + 88);
  }
  this->uid = 0;
  v4 = *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->owner_uid, (((_BYTE)this + 92) & 7u) + 3, v4);
  this->owner_uid = 0;
  std::string::basic_string(&this->file_path);
  std::string::basic_string(&this->func_name);
};

// Line 27: range 0000000015A77CE4-0000000015A78017
void __cdecl ScriptContext::ScriptContext(ScriptContext *const this, const ScriptContext *a2)
{
  MonsterWtr *p_monster_wtr; // rsi
  uint32_t source_entity_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t target_entity_id; // ecx
  char v7; // dl
  bool v8; // dl
  uint32_t uid; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t owner_uid; // ecx
  char v13; // dl
  bool v14; // dl

  std::weak_ptr<Scene>::weak_ptr(&this->scene_wtr, &a2->scene_wtr);
  std::weak_ptr<Group>::weak_ptr(&this->group_wtr, &a2->group_wtr);
  std::weak_ptr<Trigger>::weak_ptr(&this->trigger_wtr, &a2->trigger_wtr);
  std::weak_ptr<Gadget>::weak_ptr(&this->gadget_wtr, &a2->gadget_wtr);
  p_monster_wtr = &a2->monster_wtr;
  std::weak_ptr<Monster>::weak_ptr(&this->monster_wtr, p_monster_wtr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->source_entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->source_entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  source_entity_id = a2->source_entity_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->source_entity_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_monster_wtr) = v4 != 0;
    __asan_report_store4(&this->source_entity_id, p_monster_wtr, (_BYTE)this + 80);
  }
  this->source_entity_id = source_entity_id;
  v5 = (((_BYTE)a2 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->target_entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  target_entity_id = a2->target_entity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->target_entity_id >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  v8 = v7 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v7;
  if ( v8 )
    __asan_report_store4(&this->target_entity_id, v5, v8);
  this->target_entity_id = target_entity_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  uid = a2->uid;
  v10 = *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(v5) = v10 != 0;
    __asan_report_store4(&this->uid, v5, (_BYTE)this + 88);
  }
  this->uid = uid;
  v11 = (((_BYTE)a2 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->owner_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->owner_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  owner_uid = a2->owner_uid;
  v13 = *(_BYTE *)(((unsigned __int64)&this->owner_uid >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v13 != 0;
  v14 = v13 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v13;
  if ( v14 )
    __asan_report_store4(&this->owner_uid, v11, v14);
  this->owner_uid = owner_uid;
  std::string::basic_string(&this->file_path, &a2->file_path);
  std::string::basic_string(&this->func_name, &a2->func_name);
};

// Line 27: range 000000001385C536-000000001385C5B0
void __cdecl ScriptContext::~ScriptContext(ScriptContext *const this)
{
  std::string::~string(&this->func_name);
  std::string::~string(&this->file_path);
  std::weak_ptr<Monster>::~weak_ptr(&this->monster_wtr);
  std::weak_ptr<Gadget>::~weak_ptr(&this->gadget_wtr);
  std::weak_ptr<Trigger>::~weak_ptr(&this->trigger_wtr);
  std::weak_ptr<Group>::~weak_ptr(&this->group_wtr);
  std::weak_ptr<Scene>::~weak_ptr(&this->scene_wtr);
};

// Line 40: range 00000000149EBE78-00000000149EBEC6
GroupPtr __cdecl ScriptContext::getGroupPtr(const ScriptContext *const this)
{
  __int64 v1; // rsi
  GroupPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)this);
  result._M_ptr = (std::__shared_ptr<Group,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 41: range 00000000149EBF04-00000000149EBF52
TriggerPtr __cdecl ScriptContext::getTriggerPtr(const ScriptContext *const this)
{
  __int64 v1; // rsi
  TriggerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Trigger>::lock((const std::weak_ptr<Trigger> *const)this);
  result._M_ptr = (std::__shared_ptr<Trigger,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 42: range 00000000149EBF54-00000000149EBFA2
GadgetPtr __cdecl ScriptContext::getGadgetPtr(const ScriptContext *const this)
{
  __int64 v1; // rsi
  GadgetPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)this);
  result._M_ptr = (std::__shared_ptr<Gadget,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 43: range 00000000149EBFA4-00000000149EBFF2
MonsterPtr __cdecl ScriptContext::getMonsterPtr(const ScriptContext *const this)
{
  __int64 v1; // rsi
  MonsterPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Monster>::lock((const std::weak_ptr<Monster> *const)this);
  result._M_ptr = (std::__shared_ptr<Monster,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 56: range 0000000014ADF548-0000000014ADF5A0
void __cdecl ScriptLib::ScriptLib(ScriptLib *const this, const ScriptLib *a2)
{
  int (**v2)(...); // rdx

  ScriptLibBase::ScriptLibBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'ScriptLib + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ScriptLibBase = v2;
};

// Line 57: range 00000000158B9B66-00000000158B9BB3
void __cdecl ScriptLib::ScriptLib(ScriptLib *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  ScriptLibBase::ScriptLibBase(this);
  v2 = (int (**)(...))(&`vtable for'ScriptLib + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ScriptLibBase = v2;
};

// Line 356: range 00000000149EBE2C-00000000149EBE76
ScenePtr __cdecl ScriptContext::getScenePtr(const ScriptContext *const this)
{
  __int64 v1; // rsi
  ScenePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = std::weak_ptr<Scene>::lock(&this->scene_wtr);
  result._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1289: range 00000000149F7524-00000000149F75FC
__int64 __fastcall ScriptLib::executeFuncWithErrorNotify<bool,boost::reference_wrapper<Event> const>(
        LuaScript *script,
        const std::string *func_name,
        bool *ret,
        ScriptContext *context,
        boost::reference_wrapper<Event> *a5,
        const boost::reference_wrapper<Event> *args_0)
{
  const boost::reference_wrapper<Event> *v6; // rbx
  const boost::reference_wrapper<ScriptContext> *v8; // [rsp+0h] [rbp-80h]
  boost::reference_wrapper<ScriptContext> v12; // [rsp+38h] [rbp-48h] BYREF
  ScriptContext *v13; // [rsp+40h] [rbp-40h]
  ScriptContext *o; // [rsp+48h] [rbp-38h]
  LuaLogFunc p_log_func; // [rsp+50h] [rbp-30h] BYREF

  std::string::operator=(&context->func_name, func_name);
  v6 = std::forward<boost::reference_wrapper<Event> const>(a5);
  v13 = context;
  o = context;
  v12.t_ = boost::addressof<ScriptContext>(context);
  ScriptLib::getLuaErrLogFunc[abi:cxx11](&p_log_func, context);
  LODWORD(v6) = LuaScript::executeFunc<bool,boost::reference_wrapper<ScriptContext> const,boost::reference_wrapper<Event> const>(
                  script,
                  &p_log_func,
                  func_name,
                  ret,
                  &v12,
                  v6,
                  v8,
                  a5);
  std::function<void ()(std::string const&,std::string const&,std::exception const&)>::~function(&p_log_func);
  return (unsigned int)v6;
};

// Line 1289: range 00000000149F781C-00000000149F78F4
__int64 __fastcall ScriptLib::executeFuncWithErrorNotify<int,boost::reference_wrapper<Event> const>(
        LuaScript *script,
        const std::string *func_name,
        int *ret,
        ScriptContext *context,
        boost::reference_wrapper<Event> *a5,
        const boost::reference_wrapper<Event> *args_0)
{
  const boost::reference_wrapper<Event> *v6; // rbx
  const boost::reference_wrapper<ScriptContext> *v8; // [rsp+0h] [rbp-80h]
  boost::reference_wrapper<ScriptContext> v12; // [rsp+38h] [rbp-48h] BYREF
  ScriptContext *v13; // [rsp+40h] [rbp-40h]
  ScriptContext *o; // [rsp+48h] [rbp-38h]
  LuaLogFunc p_log_func; // [rsp+50h] [rbp-30h] BYREF

  std::string::operator=(&context->func_name, func_name);
  v6 = std::forward<boost::reference_wrapper<Event> const>(a5);
  v13 = context;
  o = context;
  v12.t_ = boost::addressof<ScriptContext>(context);
  ScriptLib::getLuaErrLogFunc[abi:cxx11](&p_log_func, context);
  LODWORD(v6) = LuaScript::executeFunc<int,boost::reference_wrapper<ScriptContext> const,boost::reference_wrapper<Event> const>(
                  script,
                  &p_log_func,
                  func_name,
                  ret,
                  &v12,
                  v6,
                  v8,
                  a5);
  std::function<void ()(std::string const&,std::string const&,std::exception const&)>::~function(&p_log_func);
  return (unsigned int)v6;
};

// Line 1289: range 0000000014A09332-0000000014A0945D
__int64 __fastcall ScriptLib::executeFuncWithErrorNotify<int,boost::reference_wrapper<ScriptContext const> const,unsigned int &,unsigned int &,unsigned int &>(
        LuaScript *script,
        const std::string *func_name,
        int *ret,
        ScriptContext *context,
        boost::reference_wrapper<const ScriptContext> *a5,
        unsigned int *a6,
        unsigned int *args_2,
        unsigned int *args_3)
{
  unsigned int *v8; // r13
  unsigned int *v9; // r12
  unsigned int *v10; // rbx
  const boost::reference_wrapper<const ScriptContext> *v11; // r14
  const boost::reference_wrapper<ScriptContext> *v13; // [rsp-8h] [rbp-98h]
  boost::reference_wrapper<ScriptContext> v18; // [rsp+38h] [rbp-58h] BYREF
  ScriptContext *v19; // [rsp+40h] [rbp-50h]
  ScriptContext *o; // [rsp+48h] [rbp-48h]
  LuaLogFunc p_log_func; // [rsp+50h] [rbp-40h] BYREF

  std::string::operator=(&context->func_name, func_name);
  v8 = std::forward<unsigned int &>(args_3);
  v9 = std::forward<unsigned int &>(args_2);
  v10 = std::forward<unsigned int &>(a6);
  v11 = std::forward<boost::reference_wrapper<ScriptContext const> const>(a5);
  v19 = context;
  o = context;
  v18.t_ = boost::addressof<ScriptContext>(context);
  ScriptLib::getLuaErrLogFunc[abi:cxx11](&p_log_func, context);
  LODWORD(v10) = LuaScript::executeFunc<int,boost::reference_wrapper<ScriptContext> const,boost::reference_wrapper<ScriptContext const> const,unsigned int &,unsigned int &,unsigned int &>(
                   script,
                   &p_log_func,
                   func_name,
                   ret,
                   &v18,
                   v11,
                   v10,
                   v9,
                   v8,
                   v13,
                   (const boost::reference_wrapper<const ScriptContext> *)a6,
                   (unsigned int *)a5,
                   (unsigned int *)context,
                   (unsigned int *)ret);
  std::function<void ()(std::string const&,std::string const&,std::exception const&)>::~function(&p_log_func);
  return (unsigned int)v10;
};

// Line 1289: range 0000000014A0921E-0000000014A09330
__int64 __fastcall ScriptLib::executeFuncWithErrorNotify<int,boost::reference_wrapper<ScriptContext const> const,unsigned int &,unsigned int &>(
        LuaScript *script,
        const std::string *func_name,
        int *ret,
        ScriptContext *context,
        boost::reference_wrapper<const ScriptContext> *a5,
        unsigned int *a6,
        unsigned int *args_2)
{
  unsigned int *v7; // r12
  unsigned int *v8; // rbx
  const boost::reference_wrapper<const ScriptContext> *v9; // r13
  boost::reference_wrapper<ScriptContext> v15; // [rsp+38h] [rbp-58h] BYREF
  ScriptContext *v16; // [rsp+40h] [rbp-50h]
  ScriptContext *o; // [rsp+48h] [rbp-48h]
  LuaLogFunc p_log_func; // [rsp+50h] [rbp-40h] BYREF

  std::string::operator=(&context->func_name, func_name);
  v7 = std::forward<unsigned int &>(args_2);
  v8 = std::forward<unsigned int &>(a6);
  v9 = std::forward<boost::reference_wrapper<ScriptContext const> const>(a5);
  v16 = context;
  o = context;
  v15.t_ = boost::addressof<ScriptContext>(context);
  ScriptLib::getLuaErrLogFunc[abi:cxx11](&p_log_func, context);
  LODWORD(v8) = LuaScript::executeFunc<int,boost::reference_wrapper<ScriptContext> const,boost::reference_wrapper<ScriptContext const> const,unsigned int &,unsigned int &>(
                  script,
                  &p_log_func,
                  func_name,
                  ret,
                  &v15,
                  v9,
                  v8,
                  v7,
                  (const boost::reference_wrapper<ScriptContext> *)a6,
                  a5,
                  (unsigned int *)context,
                  (unsigned int *)ret);
  std::function<void ()(std::string const&,std::string const&,std::exception const&)>::~function(&p_log_func);
  return (unsigned int)v8;
};

// Line 1289: range 0000000014A09124-0000000014A0921C
__int64 __fastcall ScriptLib::executeFuncWithErrorNotify<int,boost::reference_wrapper<ScriptContext const> const,unsigned int &>(
        LuaScript *script,
        const std::string *func_name,
        int *ret,
        ScriptContext *context,
        boost::reference_wrapper<const ScriptContext> *a5,
        unsigned int *a6)
{
  unsigned int *v6; // rbx
  const boost::reference_wrapper<const ScriptContext> *v7; // r12
  const boost::reference_wrapper<ScriptContext> *v9; // [rsp-8h] [rbp-88h]
  boost::reference_wrapper<ScriptContext> v14; // [rsp+38h] [rbp-48h] BYREF
  ScriptContext *v15; // [rsp+40h] [rbp-40h]
  ScriptContext *o; // [rsp+48h] [rbp-38h]
  LuaLogFunc p_log_func; // [rsp+50h] [rbp-30h] BYREF

  std::string::operator=(&context->func_name, func_name);
  v6 = std::forward<unsigned int &>(a6);
  v7 = std::forward<boost::reference_wrapper<ScriptContext const> const>(a5);
  v15 = context;
  o = context;
  v14.t_ = boost::addressof<ScriptContext>(context);
  ScriptLib::getLuaErrLogFunc[abi:cxx11](&p_log_func, context);
  LODWORD(v6) = LuaScript::executeFunc<int,boost::reference_wrapper<ScriptContext> const,boost::reference_wrapper<ScriptContext const> const,unsigned int &>(
                  script,
                  &p_log_func,
                  func_name,
                  ret,
                  &v14,
                  v7,
                  v6,
                  v9,
                  (const boost::reference_wrapper<const ScriptContext> *)a6,
                  (unsigned int *)a5);
  std::function<void ()(std::string const&,std::string const&,std::exception const&)>::~function(&p_log_func);
  return (unsigned int)v6;
};

// Line 1289: range 0000000015A3AE36-0000000015A3AF48
__int64 __fastcall ScriptLib::executeFuncWithErrorNotify<int,float &,float &,float &>(
        LuaScript *script,
        const std::string *func_name,
        int *ret,
        ScriptContext *context,
        float *a5,
        float *a6,
        float *args_2)
{
  float *v7; // r12
  float *v8; // rbx
  float *v9; // r13
  boost::reference_wrapper<ScriptContext> v15; // [rsp+38h] [rbp-58h] BYREF
  ScriptContext *v16; // [rsp+40h] [rbp-50h]
  ScriptContext *o; // [rsp+48h] [rbp-48h]
  LuaLogFunc p_log_func; // [rsp+50h] [rbp-40h] BYREF

  std::string::operator=(&context->func_name, func_name);
  v7 = std::forward<float &>(args_2);
  v8 = std::forward<float &>(a6);
  v9 = std::forward<float &>(a5);
  v16 = context;
  o = context;
  v15.t_ = boost::addressof<ScriptContext>(context);
  ScriptLib::getLuaErrLogFunc[abi:cxx11](&p_log_func, context);
  LODWORD(v8) = LuaScript::executeFunc<int,boost::reference_wrapper<ScriptContext> const,float &,float &,float &>(
                  script,
                  &p_log_func,
                  func_name,
                  ret,
                  &v15,
                  v9,
                  v8,
                  v7,
                  (const boost::reference_wrapper<ScriptContext> *)a6,
                  a5,
                  (float *)context,
                  (float *)ret);
  std::function<void ()(std::string const&,std::string const&,std::exception const&)>::~function(&p_log_func);
  return (unsigned int)v8;
};

// Line 1289: range 0000000015A3AD3C-0000000015A3AE34
__int64 __fastcall ScriptLib::executeFuncWithErrorNotify<int,float &,float &>(
        LuaScript *script,
        const std::string *func_name,
        int *ret,
        ScriptContext *context,
        float *a5,
        float *a6)
{
  float *v6; // rbx
  float *v7; // r12
  const boost::reference_wrapper<ScriptContext> *v9; // [rsp-8h] [rbp-88h]
  boost::reference_wrapper<ScriptContext> v14; // [rsp+38h] [rbp-48h] BYREF
  ScriptContext *v15; // [rsp+40h] [rbp-40h]
  ScriptContext *o; // [rsp+48h] [rbp-38h]
  LuaLogFunc p_log_func; // [rsp+50h] [rbp-30h] BYREF

  std::string::operator=(&context->func_name, func_name);
  v6 = std::forward<float &>(a6);
  v7 = std::forward<float &>(a5);
  v15 = context;
  o = context;
  v14.t_ = boost::addressof<ScriptContext>(context);
  ScriptLib::getLuaErrLogFunc[abi:cxx11](&p_log_func, context);
  LODWORD(v6) = LuaScript::executeFunc<int,boost::reference_wrapper<ScriptContext> const,float &,float &>(
                  script,
                  &p_log_func,
                  func_name,
                  ret,
                  &v14,
                  v7,
                  v6,
                  v9,
                  a6,
                  a5);
  std::function<void ()(std::string const&,std::string const&,std::exception const&)>::~function(&p_log_func);
  return (unsigned int)v6;
};

// Line 1289: range 0000000015A3AC62-0000000015A3AD3A
__int64 __fastcall ScriptLib::executeFuncWithErrorNotify<int,float &>(
        LuaScript *script,
        const std::string *func_name,
        int *ret,
        ScriptContext *context,
        float *a5,
        float *args_0)
{
  float *v6; // rbx
  const boost::reference_wrapper<ScriptContext> *v8; // [rsp+0h] [rbp-80h]
  boost::reference_wrapper<ScriptContext> v12; // [rsp+38h] [rbp-48h] BYREF
  ScriptContext *v13; // [rsp+40h] [rbp-40h]
  ScriptContext *o; // [rsp+48h] [rbp-38h]
  LuaLogFunc p_log_func; // [rsp+50h] [rbp-30h] BYREF

  std::string::operator=(&context->func_name, func_name);
  v6 = std::forward<float &>(a5);
  v13 = context;
  o = context;
  v12.t_ = boost::addressof<ScriptContext>(context);
  ScriptLib::getLuaErrLogFunc[abi:cxx11](&p_log_func, context);
  LODWORD(v6) = LuaScript::executeFunc<int,boost::reference_wrapper<ScriptContext> const,float &>(
                  script,
                  &p_log_func,
                  func_name,
                  ret,
                  &v12,
                  v6,
                  v8,
                  a5);
  std::function<void ()(std::string const&,std::string const&,std::exception const&)>::~function(&p_log_func);
  return (unsigned int)v6;
};

// Line 1289: range 0000000015A3AB9E-0000000015A3AC60
std::enable_if_t_4 __cdecl ScriptLib::executeFuncWithErrorNotify<int>(
        LuaScript *script,
        const std::string *func_name,
        int *ret,
        ScriptContext *context)
{
  const boost::reference_wrapper<ScriptContext> *v4; // r9
  std::enable_if_t_4 v5; // ebx
  boost::reference_wrapper<ScriptContext> v9; // [rsp+28h] [rbp-48h] BYREF
  ScriptContext *v10; // [rsp+30h] [rbp-40h]
  ScriptContext *o; // [rsp+38h] [rbp-38h]
  LuaLogFunc p_log_func; // [rsp+40h] [rbp-30h] BYREF

  std::string::operator=(&context->func_name, func_name);
  v10 = context;
  o = context;
  v9.t_ = boost::addressof<ScriptContext>(context);
  ScriptLib::getLuaErrLogFunc[abi:cxx11](&p_log_func, context);
  v5 = LuaScript::executeFunc<int,boost::reference_wrapper<ScriptContext> const>(
         script,
         &p_log_func,
         func_name,
         ret,
         &v9,
         v4);
  std::function<void ()(std::string const&,std::string const&,std::exception const&)>::~function(&p_log_func);
  return v5;
};

// Line 1291: range 0000000014A0904A-0000000014A09122
__int64 __fastcall ScriptLib::executeFuncWithErrorNotify<int,boost::reference_wrapper<ScriptContext const> const>(
        LuaScript *script,
        const std::string *func_name,
        int *ret,
        ScriptContext *context,
        boost::reference_wrapper<const ScriptContext> *a5,
        const boost::reference_wrapper<const ScriptContext> *args_0)
{
  const boost::reference_wrapper<const ScriptContext> *v6; // rbx
  const boost::reference_wrapper<ScriptContext> *v8; // [rsp+0h] [rbp-80h]
  boost::reference_wrapper<ScriptContext> v12; // [rsp+38h] [rbp-48h] BYREF
  ScriptContext *v13; // [rsp+40h] [rbp-40h]
  ScriptContext *o; // [rsp+48h] [rbp-38h]
  LuaLogFunc p_log_func; // [rsp+50h] [rbp-30h] BYREF

  std::string::operator=(&context->func_name, func_name);
  v6 = std::forward<boost::reference_wrapper<ScriptContext const> const>(a5);
  v13 = context;
  o = context;
  v12.t_ = boost::addressof<ScriptContext>(context);
  ScriptLib::getLuaErrLogFunc[abi:cxx11](&p_log_func, context);
  LODWORD(v6) = LuaScript::executeFunc<int,boost::reference_wrapper<ScriptContext> const,boost::reference_wrapper<ScriptContext const> const>(
                  script,
                  &p_log_func,
                  func_name,
                  ret,
                  &v12,
                  v6,
                  v8,
                  a5);
  std::function<void ()(std::string const&,std::string const&,std::exception const&)>::~function(&p_log_func);
  return (unsigned int)v6;
};

// Line 1298: range 00000000176B9124-00000000176B9237
__int64 __fastcall ScriptLib::executeFuncWithErrorNotify<void,int &,int &,int &>(
        LuaScript *script,
        const std::string *func_name,
        ScriptContext *context,
        int *a4,
        int *a5,
        int *a6)
{
  int *v6; // rbx
  int *v7; // r13
  int *v8; // r12
  const boost::reference_wrapper<ScriptContext> *v10; // [rsp-8h] [rbp-98h]
  boost::reference_wrapper<ScriptContext> v15; // [rsp+38h] [rbp-58h] BYREF
  ScriptContext *v16; // [rsp+40h] [rbp-50h]
  ScriptContext *o; // [rsp+48h] [rbp-48h]
  LuaLogFunc p_log_func; // [rsp+50h] [rbp-40h] BYREF

  std::string::operator=(&context->func_name, func_name);
  v6 = std::forward<int &>(a6);
  v7 = std::forward<int &>(a5);
  v8 = std::forward<int &>(a4);
  v16 = context;
  o = context;
  v15.t_ = boost::addressof<ScriptContext>(context);
  ScriptLib::getLuaErrLogFunc[abi:cxx11](&p_log_func, context);
  LODWORD(v6) = LuaScript::executeFunc<void,boost::reference_wrapper<ScriptContext> const,int &,int &,int &>(
                  script,
                  &p_log_func,
                  func_name,
                  &v15,
                  v8,
                  v7,
                  v6,
                  v10,
                  a6,
                  a5,
                  a4);
  std::function<void ()(std::string const&,std::string const&,std::exception const&)>::~function(&p_log_func);
  return (unsigned int)v6;
};

// Line 1298: range 00000000176B8910-00000000176B8A23
__int64 __fastcall ScriptLib::executeFuncWithErrorNotify<void,int,int,bool &>(
        LuaScript *script,
        const std::string *func_name,
        ScriptContext *context,
        int *a4,
        int *a5,
        bool *a6)
{
  bool *v6; // rbx
  int *v7; // r13
  int *v8; // r12
  const boost::reference_wrapper<ScriptContext> *v10; // [rsp-8h] [rbp-98h]
  boost::reference_wrapper<ScriptContext> v15; // [rsp+38h] [rbp-58h] BYREF
  ScriptContext *v16; // [rsp+40h] [rbp-50h]
  ScriptContext *o; // [rsp+48h] [rbp-48h]
  LuaLogFunc p_log_func; // [rsp+50h] [rbp-40h] BYREF

  std::string::operator=(&context->func_name, func_name);
  v6 = std::forward<bool &>(a6);
  v7 = std::forward<int>(a5);
  v8 = std::forward<int>(a4);
  v16 = context;
  o = context;
  v15.t_ = boost::addressof<ScriptContext>(context);
  ScriptLib::getLuaErrLogFunc[abi:cxx11](&p_log_func, context);
  LODWORD(v6) = LuaScript::executeFunc<void,boost::reference_wrapper<ScriptContext> const,int,int,bool &>(
                  script,
                  &p_log_func,
                  func_name,
                  &v15,
                  v8,
                  v7,
                  v6,
                  v10,
                  (int *)a6,
                  a5,
                  (bool *)a4);
  std::function<void ()(std::string const&,std::string const&,std::exception const&)>::~function(&p_log_func);
  return (unsigned int)v6;
};

// Line 1298: range 000000001721CBF0-000000001721CCD7
__int64 __fastcall ScriptLib::executeFuncWithErrorNotify<void,int,int>(
        LuaScript *script,
        const std::string *func_name,
        ScriptContext *context,
        int *a4,
        int *a5,
        int *args_0)
{
  int *v6; // r12
  int *v7; // rbx
  const boost::reference_wrapper<ScriptContext> *v9; // [rsp+0h] [rbp-80h]
  boost::reference_wrapper<ScriptContext> v13; // [rsp+38h] [rbp-48h] BYREF
  ScriptContext *v14; // [rsp+40h] [rbp-40h]
  ScriptContext *o; // [rsp+48h] [rbp-38h]
  LuaLogFunc p_log_func; // [rsp+50h] [rbp-30h] BYREF

  std::string::operator=(&context->func_name, func_name);
  v6 = std::forward<int>(a5);
  v7 = std::forward<int>(a4);
  v14 = context;
  o = context;
  v13.t_ = boost::addressof<ScriptContext>(context);
  ScriptLib::getLuaErrLogFunc[abi:cxx11](&p_log_func, context);
  LODWORD(v7) = LuaScript::executeFunc<void,boost::reference_wrapper<ScriptContext> const,int,int>(
                  script,
                  &p_log_func,
                  func_name,
                  &v13,
                  v7,
                  v6,
                  v9,
                  a5,
                  a4);
  std::function<void ()(std::string const&,std::string const&,std::exception const&)>::~function(&p_log_func);
  return (unsigned int)v7;
};

// Line 1298: range 00000000176BA500-00000000176BA613
__int64 __fastcall ScriptLib::executeFuncWithErrorNotify<void,unsigned int &,unsigned int &,unsigned int &>(
        LuaScript *script,
        const std::string *func_name,
        ScriptContext *context,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6)
{
  unsigned int *v6; // rbx
  unsigned int *v7; // r13
  unsigned int *v8; // r12
  const boost::reference_wrapper<ScriptContext> *v10; // [rsp-8h] [rbp-98h]
  boost::reference_wrapper<ScriptContext> v15; // [rsp+38h] [rbp-58h] BYREF
  ScriptContext *v16; // [rsp+40h] [rbp-50h]
  ScriptContext *o; // [rsp+48h] [rbp-48h]
  LuaLogFunc p_log_func; // [rsp+50h] [rbp-40h] BYREF

  std::string::operator=(&context->func_name, func_name);
  v6 = std::forward<unsigned int &>(a6);
  v7 = std::forward<unsigned int &>(a5);
  v8 = std::forward<unsigned int &>(a4);
  v16 = context;
  o = context;
  v15.t_ = boost::addressof<ScriptContext>(context);
  ScriptLib::getLuaErrLogFunc[abi:cxx11](&p_log_func, context);
  LODWORD(v6) = LuaScript::executeFunc<void,boost::reference_wrapper<ScriptContext> const,unsigned int &,unsigned int &,unsigned int &>(
                  script,
                  &p_log_func,
                  func_name,
                  &v15,
                  v8,
                  v7,
                  v6,
                  v10,
                  a6,
                  a5,
                  a4);
  std::function<void ()(std::string const&,std::string const&,std::exception const&)>::~function(&p_log_func);
  return (unsigned int)v6;
};

// Line 1298: range 0000000014629EF8-0000000014629FC5
__int64 __fastcall ScriptLib::executeFuncWithErrorNotify<void,unsigned int &>(
        LuaScript *script,
        const std::string *func_name,
        ScriptContext *context,
        unsigned int *a4,
        unsigned int *args_0)
{
  unsigned int *v5; // rbx
  const boost::reference_wrapper<ScriptContext> *v6; // r9
  boost::reference_wrapper<ScriptContext> v10; // [rsp+28h] [rbp-48h] BYREF
  ScriptContext *v11; // [rsp+30h] [rbp-40h]
  ScriptContext *o; // [rsp+38h] [rbp-38h]
  LuaLogFunc p_log_func; // [rsp+40h] [rbp-30h] BYREF

  std::string::operator=(&context->func_name, func_name);
  v5 = std::forward<unsigned int &>(a4);
  v11 = context;
  o = context;
  v10.t_ = boost::addressof<ScriptContext>(context);
  ScriptLib::getLuaErrLogFunc[abi:cxx11](&p_log_func, context);
  LODWORD(v5) = LuaScript::executeFunc<void,boost::reference_wrapper<ScriptContext> const,unsigned int &>(
                  script,
                  &p_log_func,
                  func_name,
                  &v10,
                  v5,
                  v6,
                  a4);
  std::function<void ()(std::string const&,std::string const&,std::exception const&)>::~function(&p_log_func);
  return (unsigned int)v5;
};

// Line 1298: range 0000000017D88464-0000000017D8851B
std::enable_if_t_4 __cdecl ScriptLib::executeFuncWithErrorNotify<void>(
        LuaScript *script,
        const std::string *func_name,
        ScriptContext *context)
{
  const boost::reference_wrapper<ScriptContext> *v3; // r8
  std::enable_if_t_4 v4; // ebx
  boost::reference_wrapper<ScriptContext> v7; // [rsp+28h] [rbp-48h] BYREF
  ScriptContext *v8; // [rsp+30h] [rbp-40h]
  ScriptContext *o; // [rsp+38h] [rbp-38h]
  LuaLogFunc p_log_func; // [rsp+40h] [rbp-30h] BYREF

  std::string::operator=(&context->func_name, func_name);
  v8 = context;
  o = context;
  v7.t_ = boost::addressof<ScriptContext>(context);
  ScriptLib::getLuaErrLogFunc[abi:cxx11](&p_log_func, context);
  v4 = LuaScript::executeFunc<void,boost::reference_wrapper<ScriptContext> const>(
         script,
         &p_log_func,
         func_name,
         &v7,
         v3);
  std::function<void ()(std::string const&,std::string const&,std::exception const&)>::~function(&p_log_func);
  return v4;
};
