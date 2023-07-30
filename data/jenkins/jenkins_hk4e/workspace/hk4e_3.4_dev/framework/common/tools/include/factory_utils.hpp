// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/framework/common/tools/include/factory_utils.hpp

// Line 25: range 0000000016240F6C-0000000016240F86
void __cdecl common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::Factory(
        common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo> *const this)
{
  std::unordered_map<data::ChessCardEffectType,std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>>::unordered_map(&this->creators_map_);
};

// Line 25: range 0000000016240F88-0000000016240FA2
void __cdecl common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::~Factory(
        common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo> *const this)
{
  std::unordered_map<data::ChessCardEffectType,std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>>::~unordered_map(&this->creators_map_);
};

// Line 25: range 000000001624964E-0000000016249668
void __cdecl common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::Factory(
        common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo> *const this)
{
  std::unordered_map<data::IrodoriChessCardEffectType,std::function<std::shared_ptr<IrodoriChessEffectBase> ()(IrodoriChessCardInfo &)>>::unordered_map(&this->creators_map_);
};

// Line 25: range 000000001624966A-0000000016249684
void __cdecl common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::~Factory(
        common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo> *const this)
{
  std::unordered_map<data::IrodoriChessCardEffectType,std::function<std::shared_ptr<IrodoriChessEffectBase> ()(IrodoriChessCardInfo &)>>::~unordered_map(&this->creators_map_);
};

// Line 25: range 0000000014418556-0000000014418570
void __cdecl common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::Factory(
        common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp&,Player&,unsigned int> *const this)
{
  std::unordered_map<std::type_index,std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>>::unordered_map(&this->creators_map_);
};

// Line 25: range 0000000014418572-000000001441858C
void __cdecl common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::~Factory(
        common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp&,Player&,unsigned int> *const this)
{
  std::unordered_map<std::type_index,std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>>::~unordered_map(&this->creators_map_);
};

// Line 30: range 0000000016240FA3-0000000016241018
common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo> *__cdecl common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::instance()
{
  if ( !(_BYTE)`guard variable for'common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::instance(void)::inst
    && __cxa_guard_acquire(&`guard variable for'common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::instance(void)::inst) )
  {
    common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::Factory(&common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::instance(void)::inst);
    __cxa_guard_release(&`guard variable for'common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::instance(void)::inst);
    __cxa_atexit(
      (void (__fastcall *)(void *))common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::~Factory,
      &common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::instance(void)::inst,
      &_dso_handle);
  }
  return &common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::instance(void)::inst;
};

// Line 30: range 0000000016249685-00000000162496FA
common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo> *__cdecl common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::instance()
{
  if ( !(_BYTE)`guard variable for'common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::instance(void)::inst
    && __cxa_guard_acquire(&`guard variable for'common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::instance(void)::inst) )
  {
    common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::Factory(&common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::instance(void)::inst);
    __cxa_guard_release(&`guard variable for'common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::instance(void)::inst);
    __cxa_atexit(
      (void (__fastcall *)(void *))common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::~Factory,
      &common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::instance(void)::inst,
      &_dso_handle);
  }
  return &common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::instance(void)::inst;
};

// Line 30: range 000000001441858D-0000000014418602
common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp&,Player&,unsigned int> *__cdecl common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::instance()
{
  if ( !(_BYTE)`guard variable for'common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::instance(void)::inst
    && __cxa_guard_acquire(&`guard variable for'common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::instance(void)::inst) )
  {
    common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::Factory(&common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::instance(void)::inst);
    __cxa_guard_release(&`guard variable for'common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::instance(void)::inst);
    __cxa_atexit(
      (void (__fastcall *)(void *))common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::~Factory,
      &common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::instance(void)::inst,
      &_dso_handle);
  }
  return &common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::instance(void)::inst;
};

// Line 36: range 000000001624101A-0000000016241205
common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo> *__fastcall common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::create(
        common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo> *const this,
        std::unordered_map<data::ChessCardEffectType,std::function<std::shared_ptr<CardEffectBase>(CardInfo&)>> *t,
        CardInfo *args_0,
        std::remove_reference<CardInfo&>::type *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  CardInfo *v7; // rsi
  int v10; // [rsp+Ch] [rbp-A4h]
  std::__detail::_Node_iterator_base<std::pair<const data::ChessCardEffectType,std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> >,false> __y; // [rsp+20h] [rbp-90h] BYREF
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> *creator; // [rsp+28h] [rbp-88h]
  char v13[128]; // [rsp+30h] [rbp-80h] BYREF

  v10 = (int)args_0;
  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 4 t:36 64 8 7 iter:38";
  *(_QWORD *)(v4 + 16) = common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::create;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116352;
  *(_DWORD *)(v4 + 48) = v10;
  *(std::unordered_map<data::ChessCardEffectType,std::function<std::shared_ptr<CardEffectBase>(CardInfo&)>>::iterator *)(v4 + 64) = std::unordered_map<data::ChessCardEffectType,std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>>::find(t, (const std::unordered_map<data::ChessCardEffectType,std::function<std::shared_ptr<CardEffectBase>(CardInfo&)>>::key_type *)(v4 + 48));
  __y._M_cur = std::unordered_map<data::ChessCardEffectType,std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>>::end(t)._M_cur;
  if ( std::__detail::operator!=<std::pair<data::ChessCardEffectType const,std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const data::ChessCardEffectType,std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> >,false> *)(v4 + 64),
         &__y)
    && (creator = &std::__detail::_Node_iterator<std::pair<data::ChessCardEffectType const,std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<const data::ChessCardEffectType,std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> >,false,false> *const)(v4 + 64))->second,
        std::operator!=<std::shared_ptr<CardEffectBase>,CardInfo &>(creator, 0LL)) )
  {
    v7 = std::forward<CardInfo &>(a4);
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, v7);
    std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::operator()(
      (const std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> *const)this,
      (CardInfo *)creator);
  }
  else
  {
    std::shared_ptr<CardEffectBase>::shared_ptr((std::shared_ptr<CardEffectBase> *const)this, 0LL);
  }
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 36: range 00000000162496FC-00000000162498E7
common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo> *__fastcall common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::create(
        common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo> *const this,
        std::unordered_map<data::IrodoriChessCardEffectType,std::function<std::shared_ptr<IrodoriChessEffectBase>(IrodoriChessCardInfo&)>> *t,
        IrodoriChessCardInfo *args_0,
        std::remove_reference<IrodoriChessCardInfo&>::type *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  IrodoriChessCardInfo *v7; // rsi
  int v10; // [rsp+Ch] [rbp-A4h]
  std::__detail::_Node_iterator_base<std::pair<const data::IrodoriChessCardEffectType,std::function<std::shared_ptr<IrodoriChessEffectBase>(IrodoriChessCardInfo&)> >,false> __y; // [rsp+20h] [rbp-90h] BYREF
  std::function<std::shared_ptr<IrodoriChessEffectBase>(IrodoriChessCardInfo&)> *creator; // [rsp+28h] [rbp-88h]
  char v13[128]; // [rsp+30h] [rbp-80h] BYREF

  v10 = (int)args_0;
  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 4 t:36 64 8 7 iter:38";
  *(_QWORD *)(v4 + 16) = common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::create;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116352;
  *(_DWORD *)(v4 + 48) = v10;
  *(std::unordered_map<data::IrodoriChessCardEffectType,std::function<std::shared_ptr<IrodoriChessEffectBase>(IrodoriChessCardInfo&)>>::iterator *)(v4 + 64) = std::unordered_map<data::IrodoriChessCardEffectType,std::function<std::shared_ptr<IrodoriChessEffectBase> ()(IrodoriChessCardInfo &)>>::find(t, (const std::unordered_map<data::IrodoriChessCardEffectType,std::function<std::shared_ptr<IrodoriChessEffectBase>(IrodoriChessCardInfo&)>>::key_type *)(v4 + 48));
  __y._M_cur = std::unordered_map<data::IrodoriChessCardEffectType,std::function<std::shared_ptr<IrodoriChessEffectBase> ()(IrodoriChessCardInfo &)>>::end(t)._M_cur;
  if ( std::__detail::operator!=<std::pair<data::IrodoriChessCardEffectType const,std::function<std::shared_ptr<IrodoriChessEffectBase> ()(IrodoriChessCardInfo &)>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const data::IrodoriChessCardEffectType,std::function<std::shared_ptr<IrodoriChessEffectBase>(IrodoriChessCardInfo&)> >,false> *)(v4 + 64),
         &__y)
    && (creator = &std::__detail::_Node_iterator<std::pair<data::IrodoriChessCardEffectType const,std::function<std::shared_ptr<IrodoriChessEffectBase> ()(IrodoriChessCardInfo &)>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<const data::IrodoriChessCardEffectType,std::function<std::shared_ptr<IrodoriChessEffectBase>(IrodoriChessCardInfo&)> >,false,false> *const)(v4 + 64))->second,
        std::operator!=<std::shared_ptr<IrodoriChessEffectBase>,IrodoriChessCardInfo &>(creator, 0LL)) )
  {
    v7 = std::forward<IrodoriChessCardInfo &>(a4);
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, v7);
    std::function<std::shared_ptr<IrodoriChessEffectBase> ()(IrodoriChessCardInfo &)>::operator()(
      (const std::function<std::shared_ptr<IrodoriChessEffectBase>(IrodoriChessCardInfo&)> *const)this,
      (IrodoriChessCardInfo *)creator);
  }
  else
  {
    std::shared_ptr<IrodoriChessEffectBase>::shared_ptr((std::shared_ptr<IrodoriChessEffectBase> *const)this, 0LL);
  }
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 36: range 000000001441869C-00000000144188C5
common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp&,Player&,unsigned int> *__fastcall common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::create(
        common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t,
        PlayerWidgetComp *args_0,
        std::remove_reference<PlayerWidgetComp&>::type *args_1,
        std::remove_reference<Player&>::type *args_2,
        std::remove_reference<unsigned int&>::type *a6)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // r12
  unsigned int *v9; // r13
  Player *v10; // rdi
  std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> >,false> __y; // [rsp+30h] [rbp-A0h] BYREF
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> *creator; // [rsp+38h] [rbp-98h]
  char v19[144]; // [rsp+40h] [rbp-90h] BYREF

  v6 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 8 7 iter:38 64 8 4 t:36";
  *(_QWORD *)(v6 + 16) = common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::create;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -202116352;
  *(_QWORD *)(v6 + 64) = args_0;
  *(std::unordered_map<std::type_index,std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)>>::iterator *)(v6 + 32) = std::unordered_map<std::type_index,std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>>::find((std::unordered_map<std::type_index,std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)>> *const)t._M_target, (const std::unordered_map<std::type_index,std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)>>::key_type *)(v6 + 64));
  __y._M_cur = std::unordered_map<std::type_index,std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>>::end((std::unordered_map<std::type_index,std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)>> *const)t._M_target)._M_cur;
  if ( std::__detail::operator!=<std::pair<std::type_index const,std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> >,false> *)(v6 + 32),
         &__y)
    && (creator = &std::__detail::_Node_iterator<std::pair<std::type_index const,std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<const std::type_index,std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> >,false,false> *const)(v6 + 32))->second,
        std::operator!=<std::shared_ptr<WidgetBase>,PlayerWidgetComp &,Player &,unsigned int &>(creator, 0LL)) )
  {
    std::forward<unsigned int &>(a6);
    v9 = (unsigned int *)std::forward<Player &>(args_2);
    v10 = (Player *)std::forward<PlayerWidgetComp &>(args_1);
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      v10 = (Player *)this;
      __asan_report_store16(this, 0LL);
    }
    std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::operator()(
      (const std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> *const)this,
      (PlayerWidgetComp *)creator,
      v10,
      v9);
  }
  else
  {
    std::shared_ptr<WidgetBase>::shared_ptr((std::shared_ptr<WidgetBase> *const)this, 0LL);
  }
  if ( v19 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 50: range 000000001625DD8F-000000001625DE76
void __fastcall common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(
        data::ChessCardEffectType t,
        common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::Creator *p_creator)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo> *v5; // rax
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> *v6; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 4 t:50";
  *(_QWORD *)(v2 + 16) = common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = t;
  v5 = common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::instance();
  v6 = std::unordered_map<data::ChessCardEffectType,std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>>::operator[](
         &v5->creators_map_,
         (const std::unordered_map<data::ChessCardEffectType,std::function<std::shared_ptr<CardEffectBase>(CardInfo&)>>::key_type *)(v2 + 32));
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::operator=(v6, p_creator);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 50: range 000000001626740F-00000000162674F6
void __fastcall common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::registerCreator(
        data::IrodoriChessCardEffectType t,
        common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::Creator *p_creator)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo> *v5; // rax
  std::function<std::shared_ptr<IrodoriChessEffectBase>(IrodoriChessCardInfo&)> *v6; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 4 t:50";
  *(_QWORD *)(v2 + 16) = common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::registerCreator;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = t;
  v5 = common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::instance();
  v6 = std::unordered_map<data::IrodoriChessCardEffectType,std::function<std::shared_ptr<IrodoriChessEffectBase> ()(IrodoriChessCardInfo &)>>::operator[](
         &v5->creators_map_,
         (const std::unordered_map<data::IrodoriChessCardEffectType,std::function<std::shared_ptr<IrodoriChessEffectBase>(IrodoriChessCardInfo&)>>::key_type *)(v2 + 32));
  std::function<std::shared_ptr<IrodoriChessEffectBase> ()(IrodoriChessCardInfo &)>::operator=(v6, p_creator);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 50: range 00000000162728F9-00000000162729E2
void __fastcall common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
        std::type_index t,
        common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp&,Player&,unsigned int>::Creator *p_creator)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp&,Player&,unsigned int> *v5; // rax
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> *v6; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:50";
  *(_QWORD *)(v2 + 16) = common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  v5 = common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::instance();
  v6 = std::unordered_map<std::type_index,std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>>::operator[](
         &v5->creators_map_,
         (const std::unordered_map<std::type_index,std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)>>::key_type *)(v2 + 32));
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::operator=(v6, p_creator);
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 000000001623F818-000000001623F875
void __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectAddGearNum,CardInfo>::FactoryRegister(
        common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectAddGearNum,CardInfo> *const this,
        data::ChessCardEffectType t)
{
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::function<common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectAddGearNum,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectAddGearNum,CardInfo>::FactoryRegister::<lambda(CardInfo&)>)t);
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(t, &p_creator);
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::~function(&p_creator);
};

// Line 62: range 0000000016240082-00000000162400DF
void __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeCountNoCost,CardInfo>::FactoryRegister(
        common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeCountNoCost,CardInfo> *const this,
        data::ChessCardEffectType t)
{
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::function<common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeCountNoCost,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeCountNoCost,CardInfo>::FactoryRegister::<lambda(CardInfo&)>)t);
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(t, &p_creator);
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::~function(&p_creator);
};

// Line 62: range 0000000016240C9A-0000000016240CF7
void __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeForceCurse,CardInfo>::FactoryRegister(
        common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeForceCurse,CardInfo> *const this,
        data::ChessCardEffectType t)
{
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::function<common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeForceCurse,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeForceCurse,CardInfo>::FactoryRegister::<lambda(CardInfo&)>)t);
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(t, &p_creator);
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::~function(&p_creator);
};

// Line 62: range 0000000016240AA8-0000000016240B05
void __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeStackServerGlobalValue,CardInfo>::FactoryRegister(
        common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeStackServerGlobalValue,CardInfo> *const this,
        data::ChessCardEffectType t)
{
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::function<common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeStackServerGlobalValue,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeStackServerGlobalValue,CardInfo>::FactoryRegister::<lambda(CardInfo&)>)t);
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(t, &p_creator);
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::~function(&p_creator);
};

// Line 62: range 00000000162406C4-0000000016240721
void __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardsCountStackServerGlobalValue,CardInfo>::FactoryRegister(
        common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardsCountStackServerGlobalValue,CardInfo> *const this,
        data::ChessCardEffectType t)
{
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::function<common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardsCountStackServerGlobalValue,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardsCountStackServerGlobalValue,CardInfo>::FactoryRegister::<lambda(CardInfo&)>)t);
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(t, &p_creator);
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::~function(&p_creator);
};

// Line 62: range 000000001624049C-00000000162404F9
void __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectFreeCardOnRefresh,CardInfo>::FactoryRegister(
        common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectFreeCardOnRefresh,CardInfo> *const this,
        data::ChessCardEffectType t)
{
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::function<common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectFreeCardOnRefresh,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectFreeCardOnRefresh,CardInfo>::FactoryRegister::<lambda(CardInfo&)>)t);
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(t, &p_creator);
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::~function(&p_creator);
};

// Line 62: range 000000001623F92C-000000001623F989
void __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectGrantPoints,CardInfo>::FactoryRegister(
        common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectGrantPoints,CardInfo> *const this,
        data::ChessCardEffectType t)
{
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::function<common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectGrantPoints,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectGrantPoints,CardInfo>::FactoryRegister::<lambda(CardInfo&)>)t);
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(t, &p_creator);
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::~function(&p_creator);
};

// Line 62: range 000000001623FA40-000000001623FA9D
void __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectKillGears,CardInfo>::FactoryRegister(
        common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectKillGears,CardInfo> *const this,
        data::ChessCardEffectType t)
{
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::function<common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectKillGears,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectKillGears,CardInfo>::FactoryRegister::<lambda(CardInfo&)>)t);
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(t, &p_creator);
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::~function(&p_creator);
};

// Line 62: range 000000001623F4DC-000000001623F539
void __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyBuildCost,CardInfo>::FactoryRegister(
        common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyBuildCost,CardInfo> *const this,
        data::ChessCardEffectType t)
{
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::function<common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyBuildCost,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyBuildCost,CardInfo>::FactoryRegister::<lambda(CardInfo&)>)t);
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(t, &p_creator);
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::~function(&p_creator);
};

// Line 62: range 0000000016240196-00000000162401F3
void __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyCandidateCards,CardInfo>::FactoryRegister(
        common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyCandidateCards,CardInfo> *const this,
        data::ChessCardEffectType t)
{
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::function<common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyCandidateCards,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyCandidateCards,CardInfo>::FactoryRegister::<lambda(CardInfo&)>)t);
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(t, &p_creator);
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::~function(&p_creator);
};

// Line 62: range 000000001623FF6E-000000001623FFCB
void __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyCardCost,CardInfo>::FactoryRegister(
        common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyCardCost,CardInfo> *const this,
        data::ChessCardEffectType t)
{
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::function<common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyCardCost,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyCardCost,CardInfo>::FactoryRegister::<lambda(CardInfo&)>)t);
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(t, &p_creator);
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::~function(&p_creator);
};

// Line 62: range 000000001623F704-000000001623F761
void __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyKillPoints,CardInfo>::FactoryRegister(
        common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyKillPoints,CardInfo> *const this,
        data::ChessCardEffectType t)
{
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::function<common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyKillPoints,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyKillPoints,CardInfo>::FactoryRegister::<lambda(CardInfo&)>)t);
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(t, &p_creator);
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::~function(&p_creator);
};

// Line 62: range 0000000016240388-00000000162403E5
void __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyQualityProb,CardInfo>::FactoryRegister(
        common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyQualityProb,CardInfo> *const this,
        data::ChessCardEffectType t)
{
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::function<common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyQualityProb,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyQualityProb,CardInfo>::FactoryRegister::<lambda(CardInfo&)>)t);
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(t, &p_creator);
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::~function(&p_creator);
};

// Line 62: range 00000000162405B0-000000001624060D
void __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyRefreshCost,CardInfo>::FactoryRegister(
        common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyRefreshCost,CardInfo> *const this,
        data::ChessCardEffectType t)
{
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::function<common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyRefreshCost,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyRefreshCost,CardInfo>::FactoryRegister::<lambda(CardInfo&)>)t);
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(t, &p_creator);
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::~function(&p_creator);
};

// Line 62: range 000000001623F5F0-000000001623F64D
void __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyRefund,CardInfo>::FactoryRegister(
        common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyRefund,CardInfo> *const this,
        data::ChessCardEffectType t)
{
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::function<common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyRefund,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyRefund,CardInfo>::FactoryRegister::<lambda(CardInfo&)>)t);
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(t, &p_creator);
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::~function(&p_creator);
};

// Line 62: range 000000001623FD7C-000000001623FDD9
void __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPickCardLTEServerGlobalValue,CardInfo>::FactoryRegister(
        common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPickCardLTEServerGlobalValue,CardInfo> *const this,
        data::ChessCardEffectType t)
{
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::function<common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPickCardLTEServerGlobalValue,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPickCardLTEServerGlobalValue,CardInfo>::FactoryRegister::<lambda(CardInfo&)>)t);
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(t, &p_creator);
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::~function(&p_creator);
};

// Line 62: range 000000001623FC68-000000001623FCC5
void __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPointsOnRoundEnd,CardInfo>::FactoryRegister(
        common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPointsOnRoundEnd,CardInfo> *const this,
        data::ChessCardEffectType t)
{
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::function<common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPointsOnRoundEnd,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPointsOnRoundEnd,CardInfo>::FactoryRegister::<lambda(CardInfo&)>)t);
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(t, &p_creator);
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::~function(&p_creator);
};

// Line 62: range 00000000162408B6-0000000016240913
void __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPointsStackServerGlobalValue,CardInfo>::FactoryRegister(
        common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPointsStackServerGlobalValue,CardInfo> *const this,
        data::ChessCardEffectType t)
{
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::function<common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPointsStackServerGlobalValue,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPointsStackServerGlobalValue,CardInfo>::FactoryRegister::<lambda(CardInfo&)>)t);
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(t, &p_creator);
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::~function(&p_creator);
};

// Line 62: range 000000001623FB54-000000001623FBB1
void __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectRandomRemove,CardInfo>::FactoryRegister(
        common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectRandomRemove,CardInfo> *const this,
        data::ChessCardEffectType t)
{
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::function<common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectRandomRemove,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectRandomRemove,CardInfo>::FactoryRegister::<lambda(CardInfo&)>)t);
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(t, &p_creator);
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::~function(&p_creator);
};

// Line 62: range 000000001623F09A-000000001623F0F7
void __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectServerGlobalValue,CardInfo>::FactoryRegister(
        common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectServerGlobalValue,CardInfo> *const this,
        data::ChessCardEffectType t)
{
  std::function<std::shared_ptr<CardEffectBase>(CardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::function<common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectServerGlobalValue,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectServerGlobalValue,CardInfo>::FactoryRegister::<lambda(CardInfo&)>)t);
  common::tools::Factory<CardEffectBase,data::ChessCardEffectType,CardInfo>::registerCreator(t, &p_creator);
  std::function<std::shared_ptr<CardEffectBase> ()(CardInfo &)>::~function(&p_creator);
};

// Line 62: range 0000000016248F7C-0000000016248FD9
void __cdecl common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddAbilityGroup,IrodoriChessCardInfo>::FactoryRegister(
        common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddAbilityGroup,IrodoriChessCardInfo> *const this,
        data::IrodoriChessCardEffectType t)
{
  std::function<std::shared_ptr<IrodoriChessEffectBase>(IrodoriChessCardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<IrodoriChessEffectBase> ()(IrodoriChessCardInfo &)>::function<common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddAbilityGroup,IrodoriChessCardInfo>::FactoryRegister(data::IrodoriChessCardEffectType)::{lambda(IrodoriChessCardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddAbilityGroup,IrodoriChessCardInfo>::FactoryRegister::<lambda(IrodoriChessCardInfo&)>)t);
  common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::registerCreator(
    t,
    &p_creator);
  std::function<std::shared_ptr<IrodoriChessEffectBase> ()(IrodoriChessCardInfo &)>::~function(&p_creator);
};

// Line 62: range 0000000016249288-00000000162492E5
void __cdecl common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddGearNum,IrodoriChessCardInfo>::FactoryRegister(
        common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddGearNum,IrodoriChessCardInfo> *const this,
        data::IrodoriChessCardEffectType t)
{
  std::function<std::shared_ptr<IrodoriChessEffectBase>(IrodoriChessCardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<IrodoriChessEffectBase> ()(IrodoriChessCardInfo &)>::function<common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddGearNum,IrodoriChessCardInfo>::FactoryRegister(data::IrodoriChessCardEffectType)::{lambda(IrodoriChessCardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddGearNum,IrodoriChessCardInfo>::FactoryRegister::<lambda(IrodoriChessCardInfo&)>)t);
  common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::registerCreator(
    t,
    &p_creator);
  std::function<std::shared_ptr<IrodoriChessEffectBase> ()(IrodoriChessCardInfo &)>::~function(&p_creator);
};

// Line 62: range 0000000016248C76-0000000016248CD3
void __cdecl common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddServerGlobalValue,IrodoriChessCardInfo>::FactoryRegister(
        common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddServerGlobalValue,IrodoriChessCardInfo> *const this,
        data::IrodoriChessCardEffectType t)
{
  std::function<std::shared_ptr<IrodoriChessEffectBase>(IrodoriChessCardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<IrodoriChessEffectBase> ()(IrodoriChessCardInfo &)>::function<common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddServerGlobalValue,IrodoriChessCardInfo>::FactoryRegister(data::IrodoriChessCardEffectType)::{lambda(IrodoriChessCardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddServerGlobalValue,IrodoriChessCardInfo>::FactoryRegister::<lambda(IrodoriChessCardInfo&)>)t);
  common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::registerCreator(
    t,
    &p_creator);
  std::function<std::shared_ptr<IrodoriChessEffectBase> ()(IrodoriChessCardInfo &)>::~function(&p_creator);
};

// Line 62: range 000000001624939C-00000000162493F9
void __cdecl common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddTargetGearNum,IrodoriChessCardInfo>::FactoryRegister(
        common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddTargetGearNum,IrodoriChessCardInfo> *const this,
        data::IrodoriChessCardEffectType t)
{
  std::function<std::shared_ptr<IrodoriChessEffectBase>(IrodoriChessCardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<IrodoriChessEffectBase> ()(IrodoriChessCardInfo &)>::function<common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddTargetGearNum,IrodoriChessCardInfo>::FactoryRegister(data::IrodoriChessCardEffectType)::{lambda(IrodoriChessCardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddTargetGearNum,IrodoriChessCardInfo>::FactoryRegister::<lambda(IrodoriChessCardInfo&)>)t);
  common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::registerCreator(
    t,
    &p_creator);
  std::function<std::shared_ptr<IrodoriChessEffectBase> ()(IrodoriChessCardInfo &)>::~function(&p_creator);
};

// Line 62: range 0000000016248E68-0000000016248EC5
void __cdecl common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectModifyRefundByCost,IrodoriChessCardInfo>::FactoryRegister(
        common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectModifyRefundByCost,IrodoriChessCardInfo> *const this,
        data::IrodoriChessCardEffectType t)
{
  std::function<std::shared_ptr<IrodoriChessEffectBase>(IrodoriChessCardInfo&)> p_creator; // [rsp+20h] [rbp-30h] BYREF

  std::function<std::shared_ptr<IrodoriChessEffectBase> ()(IrodoriChessCardInfo &)>::function<common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectModifyRefundByCost,IrodoriChessCardInfo>::FactoryRegister(data::IrodoriChessCardEffectType)::{lambda(IrodoriChessCardInfo &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectModifyRefundByCost,IrodoriChessCardInfo>::FactoryRegister::<lambda(IrodoriChessCardInfo&)>)t);
  common::tools::Factory<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessCardInfo>::registerCreator(
    t,
    &p_creator);
  std::function<std::shared_ptr<IrodoriChessEffectBase> ()(IrodoriChessCardInfo &)>::~function(&p_creator);
};

// Line 62: range 0000000017A1CE92-0000000017A1CFA4
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAbilityGroupGenerator,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAbilityGroupGenerator,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAbilityGroupGenerator,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAbilityGroupGenerator,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAbilityGroupGenerator,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 0000000017A1D160-0000000017A1D272
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetActivityGacha,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetActivityGacha,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetActivityGacha,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetActivityGacha,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetActivityGacha,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 0000000017A1D3F2-0000000017A1D504
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAranaraController,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAranaraController,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAranaraController,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAranaraController,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAranaraController,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 0000000017A1D648-0000000017A1D75A
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAttachAbilityGroup,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAttachAbilityGroup,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAttachAbilityGroup,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAttachAbilityGroup,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAttachAbilityGroup,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 0000000016251318-000000001625142A
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetBackground,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetBackground,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetBackground,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetBackground,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetBackground,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 00000000162517B8-00000000162518CA
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCamera,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCamera,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCamera,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCamera,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCamera,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 0000000016251ABA-0000000016251BCC
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCaptureAnimal,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCaptureAnimal,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCaptureAnimal,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCaptureAnimal,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCaptureAnimal,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 00000000162521E4-00000000162522F6
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetClientCollector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetClientCollector,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetClientCollector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetClientCollector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetClientCollector,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 00000000162524B2-00000000162525C4
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetClientDetector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetClientDetector,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetClientDetector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetClientDetector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetClientDetector,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 00000000162526CC-00000000162527DE
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCoinCollect,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCoinCollect,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCoinCollect,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCoinCollect,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCoinCollect,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 0000000016252962-0000000016252A74
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetDigScanner,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetDigScanner,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetDigScanner,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetDigScanner,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetDigScanner,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 0000000016252B5E-0000000016252C70
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetFireworksLauncher,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetFireworksLauncher,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetFireworksLauncher,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetFireworksLauncher,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetFireworksLauncher,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 000000001625154E-0000000016251660
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetFishing,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetFishing,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetFishing,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetFishing,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetFishing,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 0000000016252D1E-0000000016252E30
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetGadgetBuilder,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetGadgetBuilder,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetGadgetBuilder,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetGadgetBuilder,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetGadgetBuilder,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 0000000016254950-0000000016254A62
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetLightStone,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetLightStone,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetLightStone,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetLightStone,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetLightStone,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 0000000016254EE0-0000000016254FF2
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetLunchBox,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetLunchBox,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetLunchBox,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetLunchBox,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetLunchBox,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 0000000016255136-0000000016255248
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetOneoffGatherPointDetector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetOneoffGatherPointDetector,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetOneoffGatherPointDetector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetOneoffGatherPointDetector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetOneoffGatherPointDetector,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 00000000162556DE-00000000162557F0
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetOpenPage,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetOpenPage,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetOpenPage,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetOpenPage,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetOpenPage,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 0000000016255934-0000000016255A46
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetQuickHitTree,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetQuickHitTree,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetQuickHitTree,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetQuickHitTree,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetQuickHitTree,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 0000000016255BE4-0000000016255CF6
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetRockBoardDetector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetRockBoardDetector,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetRockBoardDetector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetRockBoardDetector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetRockBoardDetector,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 0000000016255E76-0000000016255F88
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetScanCamera,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetScanCamera,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetScanCamera,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetScanCamera,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetScanCamera,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 0000000016256108-000000001625621A
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTakePhoto,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTakePhoto,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTakePhoto,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTakePhoto,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTakePhoto,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 00000000162534E2-00000000162535F4
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTeapotCreator,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTeapotCreator,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTeapotCreator,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTeapotCreator,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTeapotCreator,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 000000001625639A-00000000162564AC
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetThunderBirdFeather,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetThunderBirdFeather,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetThunderBirdFeather,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetThunderBirdFeather,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetThunderBirdFeather,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 00000000162566D8-00000000162567EA
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetToyCrystal,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetToyCrystal,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetToyCrystal,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetToyCrystal,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetToyCrystal,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 0000000016256A22-0000000016256B34
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetToyInstrument,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetToyInstrument,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetToyInstrument,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetToyInstrument,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetToyInstrument,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 0000000016256DFA-0000000016256F0C
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTreasureMapDetector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTreasureMapDetector,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTreasureMapDetector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTreasureMapDetector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTreasureMapDetector,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 00000000162571EC-00000000162572FE
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetUseAttachAbilityTrigger,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetUseAttachAbilityTrigger,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetUseAttachAbilityTrigger,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetUseAttachAbilityTrigger,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetUseAttachAbilityTrigger,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 62: range 00000000162574F0-0000000016257602
void __fastcall common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetWeatherWizard,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(
        common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetWeatherWizard,PlayerWidgetComp&,Player&,unsigned int> *const this,
        std::type_index t)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::function<std::shared_ptr<WidgetBase>(PlayerWidgetComp&,Player&,unsigned int&)> p_creator; // [rsp+20h] [rbp-80h] BYREF
  char v6[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 4 t:62";
  *(_QWORD *)(v2 + 16) = common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetWeatherWizard,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(std::type_index *)(v2 + 32) = t;
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::function<common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetWeatherWizard,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1},void,void>(
    &p_creator,
    (common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetWeatherWizard,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)>)t._M_target);
  common::tools::Factory<WidgetBase,std::type_index,PlayerWidgetComp &,Player &,unsigned int>::registerCreator(
    *(std::type_index *)(v2 + 32),
    &p_creator);
  std::function<std::shared_ptr<WidgetBase> ()(PlayerWidgetComp &,Player &,unsigned int &)>::~function(&p_creator);
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 64: range 000000001623F762-000000001623F7DA
std::shared_ptr<CardEffectBase> __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectAddGearNum,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectAddGearNum,CardInfo>::FactoryRegister::<lambda(CardInfo&)> *const this,
        CardInfo *args_0)
{
  std::remove_reference<CardInfo&>::type *v2; // rdx
  CardInfo *v3; // rsi
  std::shared_ptr<CardEffectBase> result; // rax
  std::shared_ptr<EffectAddGearNum> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<CardInfo &>(v2);
  common::tools::perf::make_shared<EffectAddGearNum,CardInfo &>((CardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<CardEffectBase,EffectAddGearNum>((const std::shared_ptr<EffectAddGearNum> *)this);
  std::shared_ptr<EffectAddGearNum>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 000000001623FFCC-0000000016240044
std::shared_ptr<CardEffectBase> __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeCountNoCost,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeCountNoCost,CardInfo>::FactoryRegister::<lambda(CardInfo&)> *const this,
        CardInfo *args_0)
{
  std::remove_reference<CardInfo&>::type *v2; // rdx
  CardInfo *v3; // rsi
  std::shared_ptr<CardEffectBase> result; // rax
  std::shared_ptr<EffectCardTypeCountNoCost> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<CardInfo &>(v2);
  common::tools::perf::make_shared<EffectCardTypeCountNoCost,CardInfo &>((CardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<CardEffectBase,EffectCardTypeCountNoCost>((const std::shared_ptr<EffectCardTypeCountNoCost> *)this);
  std::shared_ptr<EffectCardTypeCountNoCost>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 0000000016240BE4-0000000016240C5C
std::shared_ptr<CardEffectBase> __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeForceCurse,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeForceCurse,CardInfo>::FactoryRegister::<lambda(CardInfo&)> *const this,
        CardInfo *args_0)
{
  std::remove_reference<CardInfo&>::type *v2; // rdx
  CardInfo *v3; // rsi
  std::shared_ptr<CardEffectBase> result; // rax
  std::shared_ptr<EffectCardTypeForceCurse> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<CardInfo &>(v2);
  common::tools::perf::make_shared<EffectCardTypeForceCurse,CardInfo &>((CardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<CardEffectBase,EffectCardTypeForceCurse>((const std::shared_ptr<EffectCardTypeForceCurse> *)this);
  std::shared_ptr<EffectCardTypeForceCurse>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 00000000162409F2-0000000016240A6A
std::shared_ptr<CardEffectBase> __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeStackServerGlobalValue,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardTypeStackServerGlobalValue,CardInfo>::FactoryRegister::<lambda(CardInfo&)> *const this,
        CardInfo *args_0)
{
  std::remove_reference<CardInfo&>::type *v2; // rdx
  CardInfo *v3; // rsi
  std::shared_ptr<CardEffectBase> result; // rax
  std::shared_ptr<EffectCardTypeStackServerGlobalValue> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<CardInfo &>(v2);
  common::tools::perf::make_shared<EffectCardTypeStackServerGlobalValue,CardInfo &>((CardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<CardEffectBase,EffectCardTypeStackServerGlobalValue>((const std::shared_ptr<EffectCardTypeStackServerGlobalValue> *)this);
  std::shared_ptr<EffectCardTypeStackServerGlobalValue>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 000000001624060E-0000000016240686
std::shared_ptr<CardEffectBase> __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardsCountStackServerGlobalValue,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectCardsCountStackServerGlobalValue,CardInfo>::FactoryRegister::<lambda(CardInfo&)> *const this,
        CardInfo *args_0)
{
  std::remove_reference<CardInfo&>::type *v2; // rdx
  CardInfo *v3; // rsi
  std::shared_ptr<CardEffectBase> result; // rax
  std::shared_ptr<EffectCardsCountStackServerGlobalValue> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<CardInfo &>(v2);
  common::tools::perf::make_shared<EffectCardsCountStackServerGlobalValue,CardInfo &>((CardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<CardEffectBase,EffectCardsCountStackServerGlobalValue>((const std::shared_ptr<EffectCardsCountStackServerGlobalValue> *)this);
  std::shared_ptr<EffectCardsCountStackServerGlobalValue>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 00000000162403E6-000000001624045E
std::shared_ptr<CardEffectBase> __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectFreeCardOnRefresh,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectFreeCardOnRefresh,CardInfo>::FactoryRegister::<lambda(CardInfo&)> *const this,
        CardInfo *args_0)
{
  std::remove_reference<CardInfo&>::type *v2; // rdx
  CardInfo *v3; // rsi
  std::shared_ptr<CardEffectBase> result; // rax
  std::shared_ptr<EffectFreeCardOnRefresh> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<CardInfo &>(v2);
  common::tools::perf::make_shared<EffectFreeCardOnRefresh,CardInfo &>((CardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<CardEffectBase,EffectFreeCardOnRefresh>((const std::shared_ptr<EffectFreeCardOnRefresh> *)this);
  std::shared_ptr<EffectFreeCardOnRefresh>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 000000001623F876-000000001623F8EE
std::shared_ptr<CardEffectBase> __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectGrantPoints,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectGrantPoints,CardInfo>::FactoryRegister::<lambda(CardInfo&)> *const this,
        CardInfo *args_0)
{
  std::remove_reference<CardInfo&>::type *v2; // rdx
  CardInfo *v3; // rsi
  std::shared_ptr<CardEffectBase> result; // rax
  std::shared_ptr<EffectGrantPoints> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<CardInfo &>(v2);
  common::tools::perf::make_shared<EffectGrantPoints,CardInfo &>((CardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<CardEffectBase,EffectGrantPoints>((const std::shared_ptr<EffectGrantPoints> *)this);
  std::shared_ptr<EffectGrantPoints>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 000000001623F98A-000000001623FA02
std::shared_ptr<CardEffectBase> __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectKillGears,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectKillGears,CardInfo>::FactoryRegister::<lambda(CardInfo&)> *const this,
        CardInfo *args_0)
{
  std::remove_reference<CardInfo&>::type *v2; // rdx
  CardInfo *v3; // rsi
  std::shared_ptr<CardEffectBase> result; // rax
  std::shared_ptr<EffectKillGears> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<CardInfo &>(v2);
  common::tools::perf::make_shared<EffectKillGears,CardInfo &>((CardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<CardEffectBase,EffectKillGears>((const std::shared_ptr<EffectKillGears> *)this);
  std::shared_ptr<EffectKillGears>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 000000001623F426-000000001623F49E
std::shared_ptr<CardEffectBase> __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyBuildCost,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyBuildCost,CardInfo>::FactoryRegister::<lambda(CardInfo&)> *const this,
        CardInfo *args_0)
{
  std::remove_reference<CardInfo&>::type *v2; // rdx
  CardInfo *v3; // rsi
  std::shared_ptr<CardEffectBase> result; // rax
  std::shared_ptr<EffectModifyBuildCost> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<CardInfo &>(v2);
  common::tools::perf::make_shared<EffectModifyBuildCost,CardInfo &>((CardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<CardEffectBase,EffectModifyBuildCost>((const std::shared_ptr<EffectModifyBuildCost> *)this);
  std::shared_ptr<EffectModifyBuildCost>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 00000000162400E0-0000000016240158
std::shared_ptr<CardEffectBase> __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyCandidateCards,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyCandidateCards,CardInfo>::FactoryRegister::<lambda(CardInfo&)> *const this,
        CardInfo *args_0)
{
  std::remove_reference<CardInfo&>::type *v2; // rdx
  CardInfo *v3; // rsi
  std::shared_ptr<CardEffectBase> result; // rax
  std::shared_ptr<EffectModifyCandidateCards> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<CardInfo &>(v2);
  common::tools::perf::make_shared<EffectModifyCandidateCards,CardInfo &>((CardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<CardEffectBase,EffectModifyCandidateCards>((const std::shared_ptr<EffectModifyCandidateCards> *)this);
  std::shared_ptr<EffectModifyCandidateCards>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 000000001623FEB8-000000001623FF30
std::shared_ptr<CardEffectBase> __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyCardCost,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyCardCost,CardInfo>::FactoryRegister::<lambda(CardInfo&)> *const this,
        CardInfo *args_0)
{
  std::remove_reference<CardInfo&>::type *v2; // rdx
  CardInfo *v3; // rsi
  std::shared_ptr<CardEffectBase> result; // rax
  std::shared_ptr<EffectModifyCardCost> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<CardInfo &>(v2);
  common::tools::perf::make_shared<EffectModifyCardCost,CardInfo &>((CardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<CardEffectBase,EffectModifyCardCost>((const std::shared_ptr<EffectModifyCardCost> *)this);
  std::shared_ptr<EffectModifyCardCost>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 000000001623F64E-000000001623F6C6
std::shared_ptr<CardEffectBase> __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyKillPoints,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyKillPoints,CardInfo>::FactoryRegister::<lambda(CardInfo&)> *const this,
        CardInfo *args_0)
{
  std::remove_reference<CardInfo&>::type *v2; // rdx
  CardInfo *v3; // rsi
  std::shared_ptr<CardEffectBase> result; // rax
  std::shared_ptr<EffectModifyKillPoints> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<CardInfo &>(v2);
  common::tools::perf::make_shared<EffectModifyKillPoints,CardInfo &>((CardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<CardEffectBase,EffectModifyKillPoints>((const std::shared_ptr<EffectModifyKillPoints> *)this);
  std::shared_ptr<EffectModifyKillPoints>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 00000000162402D2-000000001624034A
std::shared_ptr<CardEffectBase> __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyQualityProb,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyQualityProb,CardInfo>::FactoryRegister::<lambda(CardInfo&)> *const this,
        CardInfo *args_0)
{
  std::remove_reference<CardInfo&>::type *v2; // rdx
  CardInfo *v3; // rsi
  std::shared_ptr<CardEffectBase> result; // rax
  std::shared_ptr<EffectModifyQualityProb> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<CardInfo &>(v2);
  common::tools::perf::make_shared<EffectModifyQualityProb,CardInfo &>((CardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<CardEffectBase,EffectModifyQualityProb>((const std::shared_ptr<EffectModifyQualityProb> *)this);
  std::shared_ptr<EffectModifyQualityProb>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 00000000162404FA-0000000016240572
std::shared_ptr<CardEffectBase> __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyRefreshCost,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyRefreshCost,CardInfo>::FactoryRegister::<lambda(CardInfo&)> *const this,
        CardInfo *args_0)
{
  std::remove_reference<CardInfo&>::type *v2; // rdx
  CardInfo *v3; // rsi
  std::shared_ptr<CardEffectBase> result; // rax
  std::shared_ptr<EffectModifyRefreshCost> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<CardInfo &>(v2);
  common::tools::perf::make_shared<EffectModifyRefreshCost,CardInfo &>((CardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<CardEffectBase,EffectModifyRefreshCost>((const std::shared_ptr<EffectModifyRefreshCost> *)this);
  std::shared_ptr<EffectModifyRefreshCost>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 000000001623F53A-000000001623F5B2
std::shared_ptr<CardEffectBase> __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyRefund,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectModifyRefund,CardInfo>::FactoryRegister::<lambda(CardInfo&)> *const this,
        CardInfo *args_0)
{
  std::remove_reference<CardInfo&>::type *v2; // rdx
  CardInfo *v3; // rsi
  std::shared_ptr<CardEffectBase> result; // rax
  std::shared_ptr<EffectModifyRefund> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<CardInfo &>(v2);
  common::tools::perf::make_shared<EffectModifyRefund,CardInfo &>((CardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<CardEffectBase,EffectModifyRefund>((const std::shared_ptr<EffectModifyRefund> *)this);
  std::shared_ptr<EffectModifyRefund>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 000000001623FCC6-000000001623FD3E
std::shared_ptr<CardEffectBase> __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPickCardLTEServerGlobalValue,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPickCardLTEServerGlobalValue,CardInfo>::FactoryRegister::<lambda(CardInfo&)> *const this,
        CardInfo *args_0)
{
  std::remove_reference<CardInfo&>::type *v2; // rdx
  CardInfo *v3; // rsi
  std::shared_ptr<CardEffectBase> result; // rax
  std::shared_ptr<EffectPickCardLTEServerGlobalValue> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<CardInfo &>(v2);
  common::tools::perf::make_shared<EffectPickCardLTEServerGlobalValue,CardInfo &>((CardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<CardEffectBase,EffectPickCardLTEServerGlobalValue>((const std::shared_ptr<EffectPickCardLTEServerGlobalValue> *)this);
  std::shared_ptr<EffectPickCardLTEServerGlobalValue>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 000000001623FBB2-000000001623FC2A
std::shared_ptr<CardEffectBase> __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPointsOnRoundEnd,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPointsOnRoundEnd,CardInfo>::FactoryRegister::<lambda(CardInfo&)> *const this,
        CardInfo *args_0)
{
  std::remove_reference<CardInfo&>::type *v2; // rdx
  CardInfo *v3; // rsi
  std::shared_ptr<CardEffectBase> result; // rax
  std::shared_ptr<EffectPointsOnRoundEnd> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<CardInfo &>(v2);
  common::tools::perf::make_shared<EffectPointsOnRoundEnd,CardInfo &>((CardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<CardEffectBase,EffectPointsOnRoundEnd>((const std::shared_ptr<EffectPointsOnRoundEnd> *)this);
  std::shared_ptr<EffectPointsOnRoundEnd>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 0000000016240800-0000000016240878
std::shared_ptr<CardEffectBase> __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPointsStackServerGlobalValue,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectPointsStackServerGlobalValue,CardInfo>::FactoryRegister::<lambda(CardInfo&)> *const this,
        CardInfo *args_0)
{
  std::remove_reference<CardInfo&>::type *v2; // rdx
  CardInfo *v3; // rsi
  std::shared_ptr<CardEffectBase> result; // rax
  std::shared_ptr<EffectPointsStackServerGlobalValue> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<CardInfo &>(v2);
  common::tools::perf::make_shared<EffectPointsStackServerGlobalValue,CardInfo &>((CardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<CardEffectBase,EffectPointsStackServerGlobalValue>((const std::shared_ptr<EffectPointsStackServerGlobalValue> *)this);
  std::shared_ptr<EffectPointsStackServerGlobalValue>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 000000001623FA9E-000000001623FB16
std::shared_ptr<CardEffectBase> __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectRandomRemove,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectRandomRemove,CardInfo>::FactoryRegister::<lambda(CardInfo&)> *const this,
        CardInfo *args_0)
{
  std::remove_reference<CardInfo&>::type *v2; // rdx
  CardInfo *v3; // rsi
  std::shared_ptr<CardEffectBase> result; // rax
  std::shared_ptr<EffectRandomRemove> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<CardInfo &>(v2);
  common::tools::perf::make_shared<EffectRandomRemove,CardInfo &>((CardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<CardEffectBase,EffectRandomRemove>((const std::shared_ptr<EffectRandomRemove> *)this);
  std::shared_ptr<EffectRandomRemove>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 000000001623EFC8-000000001623F040
std::shared_ptr<CardEffectBase> __cdecl common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectServerGlobalValue,CardInfo>::FactoryRegister(data::ChessCardEffectType)::{lambda(CardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<CardEffectBase,data::ChessCardEffectType,EffectServerGlobalValue,CardInfo>::FactoryRegister::<lambda(CardInfo&)> *const this,
        CardInfo *args_0)
{
  std::remove_reference<CardInfo&>::type *v2; // rdx
  CardInfo *v3; // rsi
  std::shared_ptr<CardEffectBase> result; // rax
  std::shared_ptr<EffectServerGlobalValue> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<CardInfo &>(v2);
  common::tools::perf::make_shared<EffectServerGlobalValue,CardInfo &>((CardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<CardEffectBase,EffectServerGlobalValue>((const std::shared_ptr<EffectServerGlobalValue> *)this);
  std::shared_ptr<EffectServerGlobalValue>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<CardEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 0000000016248EC6-0000000016248F3E
std::shared_ptr<IrodoriChessEffectBase> __cdecl common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddAbilityGroup,IrodoriChessCardInfo>::FactoryRegister(data::IrodoriChessCardEffectType)::{lambda(IrodoriChessCardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddAbilityGroup,IrodoriChessCardInfo>::FactoryRegister::<lambda(IrodoriChessCardInfo&)> *const this,
        IrodoriChessCardInfo *args_0)
{
  std::remove_reference<IrodoriChessCardInfo&>::type *v2; // rdx
  IrodoriChessCardInfo *v3; // rsi
  std::shared_ptr<IrodoriChessEffectBase> result; // rax
  std::shared_ptr<IrodoriChessEffectAddAbilityGroup> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<IrodoriChessCardInfo &>(v2);
  common::tools::perf::make_shared<IrodoriChessEffectAddAbilityGroup,IrodoriChessCardInfo &>(
    (IrodoriChessCardInfo *)&v5,
    v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<IrodoriChessEffectBase,IrodoriChessEffectAddAbilityGroup>((const std::shared_ptr<IrodoriChessEffectAddAbilityGroup> *)this);
  std::shared_ptr<IrodoriChessEffectAddAbilityGroup>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<IrodoriChessEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 00000000162491D2-000000001624924A
std::shared_ptr<IrodoriChessEffectBase> __cdecl common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddGearNum,IrodoriChessCardInfo>::FactoryRegister(data::IrodoriChessCardEffectType)::{lambda(IrodoriChessCardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddGearNum,IrodoriChessCardInfo>::FactoryRegister::<lambda(IrodoriChessCardInfo&)> *const this,
        IrodoriChessCardInfo *args_0)
{
  std::remove_reference<IrodoriChessCardInfo&>::type *v2; // rdx
  IrodoriChessCardInfo *v3; // rsi
  std::shared_ptr<IrodoriChessEffectBase> result; // rax
  std::shared_ptr<IrodoriChessEffectAddGearNum> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<IrodoriChessCardInfo &>(v2);
  common::tools::perf::make_shared<IrodoriChessEffectAddGearNum,IrodoriChessCardInfo &>((IrodoriChessCardInfo *)&v5, v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<IrodoriChessEffectBase,IrodoriChessEffectAddGearNum>((const std::shared_ptr<IrodoriChessEffectAddGearNum> *)this);
  std::shared_ptr<IrodoriChessEffectAddGearNum>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<IrodoriChessEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 0000000016248BA4-0000000016248C1C
std::shared_ptr<IrodoriChessEffectBase> __cdecl common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddServerGlobalValue,IrodoriChessCardInfo>::FactoryRegister(data::IrodoriChessCardEffectType)::{lambda(IrodoriChessCardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddServerGlobalValue,IrodoriChessCardInfo>::FactoryRegister::<lambda(IrodoriChessCardInfo&)> *const this,
        IrodoriChessCardInfo *args_0)
{
  std::remove_reference<IrodoriChessCardInfo&>::type *v2; // rdx
  IrodoriChessCardInfo *v3; // rsi
  std::shared_ptr<IrodoriChessEffectBase> result; // rax
  std::shared_ptr<IrodoriChessEffectAddServerGlobalValue> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<IrodoriChessCardInfo &>(v2);
  common::tools::perf::make_shared<IrodoriChessEffectAddServerGlobalValue,IrodoriChessCardInfo &>(
    (IrodoriChessCardInfo *)&v5,
    v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<IrodoriChessEffectBase,IrodoriChessEffectAddServerGlobalValue>((const std::shared_ptr<IrodoriChessEffectAddServerGlobalValue> *)this);
  std::shared_ptr<IrodoriChessEffectAddServerGlobalValue>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<IrodoriChessEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 00000000162492E6-000000001624935E
std::shared_ptr<IrodoriChessEffectBase> __cdecl common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddTargetGearNum,IrodoriChessCardInfo>::FactoryRegister(data::IrodoriChessCardEffectType)::{lambda(IrodoriChessCardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectAddTargetGearNum,IrodoriChessCardInfo>::FactoryRegister::<lambda(IrodoriChessCardInfo&)> *const this,
        IrodoriChessCardInfo *args_0)
{
  std::remove_reference<IrodoriChessCardInfo&>::type *v2; // rdx
  IrodoriChessCardInfo *v3; // rsi
  std::shared_ptr<IrodoriChessEffectBase> result; // rax
  std::shared_ptr<IrodoriChessEffectAddTargetGearNum> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<IrodoriChessCardInfo &>(v2);
  common::tools::perf::make_shared<IrodoriChessEffectAddTargetGearNum,IrodoriChessCardInfo &>(
    (IrodoriChessCardInfo *)&v5,
    v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<IrodoriChessEffectBase,IrodoriChessEffectAddTargetGearNum>((const std::shared_ptr<IrodoriChessEffectAddTargetGearNum> *)this);
  std::shared_ptr<IrodoriChessEffectAddTargetGearNum>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<IrodoriChessEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 0000000016248DB2-0000000016248E2A
std::shared_ptr<IrodoriChessEffectBase> __cdecl common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectModifyRefundByCost,IrodoriChessCardInfo>::FactoryRegister(data::IrodoriChessCardEffectType)::{lambda(IrodoriChessCardInfo&)#1}::operator()(
        const common::tools::FactoryRegister<IrodoriChessEffectBase,data::IrodoriChessCardEffectType,IrodoriChessEffectModifyRefundByCost,IrodoriChessCardInfo>::FactoryRegister::<lambda(IrodoriChessCardInfo&)> *const this,
        IrodoriChessCardInfo *args_0)
{
  std::remove_reference<IrodoriChessCardInfo&>::type *v2; // rdx
  IrodoriChessCardInfo *v3; // rsi
  std::shared_ptr<IrodoriChessEffectBase> result; // rax
  std::shared_ptr<IrodoriChessEffectModifyRefundByCost> v5; // [rsp+20h] [rbp-10h] BYREF

  v3 = std::forward<IrodoriChessCardInfo &>(v2);
  common::tools::perf::make_shared<IrodoriChessEffectModifyRefundByCost,IrodoriChessCardInfo &>(
    (IrodoriChessCardInfo *)&v5,
    v3);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v3);
  std::dynamic_pointer_cast<IrodoriChessEffectBase,IrodoriChessEffectModifyRefundByCost>((const std::shared_ptr<IrodoriChessEffectModifyRefundByCost> *)this);
  std::shared_ptr<IrodoriChessEffectModifyRefundByCost>::~shared_ptr(&v5);
  result._M_ptr = (std::__shared_ptr<IrodoriChessEffectBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 0000000017A1CDAA-0000000017A1CE55
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAbilityGroupGenerator,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAbilityGroupGenerator,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetAbilityGroupGenerator> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetAbilityGroupGenerator,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetAbilityGroupGenerator>((const std::shared_ptr<WidgetAbilityGroupGenerator> *)this);
  std::shared_ptr<WidgetAbilityGroupGenerator>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 0000000017A1D30A-0000000017A1D3B5
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAranaraController,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAranaraController,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetAranaraController> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetAranaraController,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetAranaraController>((const std::shared_ptr<WidgetAranaraController> *)this);
  std::shared_ptr<WidgetAranaraController>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 0000000017A1D59C-0000000017A1D647
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAttachAbilityGroup,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetAttachAbilityGroup,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetAttachAbilityGroup> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetAttachAbilityGroup,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetAttachAbilityGroup>((const std::shared_ptr<WidgetAttachAbilityGroup> *)this);
  std::shared_ptr<WidgetAttachAbilityGroup>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 000000001625126C-0000000016251317
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetBackground,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetBackground,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetBackground> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetBackground,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetBackground>((const std::shared_ptr<WidgetBackground> *)this);
  std::shared_ptr<WidgetBackground>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 00000000162516D0-000000001625177B
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCamera,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCamera,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetCamera> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetCamera,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetCamera>((const std::shared_ptr<WidgetCamera> *)this);
  std::shared_ptr<WidgetCamera>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 0000000016251A0E-0000000016251AB9
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCaptureAnimal,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCaptureAnimal,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetCaptureAnimal> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetCaptureAnimal,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetCaptureAnimal>((const std::shared_ptr<WidgetCaptureAnimal> *)this);
  std::shared_ptr<WidgetCaptureAnimal>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 00000000162520FC-00000000162521A7
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetClientCollector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetClientCollector,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetClientCollector> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetClientCollector,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetClientCollector>((const std::shared_ptr<WidgetClientCollector> *)this);
  std::shared_ptr<WidgetClientCollector>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 00000000162523CA-0000000016252475
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetClientDetector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetClientDetector,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetClientDetector> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetClientDetector,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetClientDetector>((const std::shared_ptr<WidgetClientDetector> *)this);
  std::shared_ptr<WidgetClientDetector>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 00000000162525E4-000000001625268F
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCoinCollect,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetCoinCollect,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetCoinCollect> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetCoinCollect,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetCoinCollect>((const std::shared_ptr<WidgetCoinCollect> *)this);
  std::shared_ptr<WidgetCoinCollect>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 000000001625287A-0000000016252925
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetDigScanner,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetDigScanner,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetDigScanner> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetDigScanner,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetDigScanner>((const std::shared_ptr<WidgetDigScanner> *)this);
  std::shared_ptr<WidgetDigScanner>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 0000000016252A76-0000000016252B21
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetFireworksLauncher,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetFireworksLauncher,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetFireworksLauncher> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetFireworksLauncher,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetFireworksLauncher>((const std::shared_ptr<WidgetFireworksLauncher> *)this);
  std::shared_ptr<WidgetFireworksLauncher>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 0000000016252C72-0000000016252D1D
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetGadgetBuilder,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetGadgetBuilder,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetGadgetBuilder> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetGadgetBuilder,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetGadgetBuilder>((const std::shared_ptr<WidgetGadgetBuilder> *)this);
  std::shared_ptr<WidgetGadgetBuilder>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 00000000162548A4-000000001625494F
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetLightStone,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetLightStone,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetLightStone> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetLightStone,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetLightStone>((const std::shared_ptr<WidgetLightStone> *)this);
  std::shared_ptr<WidgetLightStone>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 0000000016254DF8-0000000016254EA3
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetLunchBox,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetLunchBox,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetLunchBox> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetLunchBox,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetLunchBox>((const std::shared_ptr<WidgetLunchBox> *)this);
  std::shared_ptr<WidgetLunchBox>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 000000001625508A-0000000016255135
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetOneoffGatherPointDetector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetOneoffGatherPointDetector,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetOneoffGatherPointDetector> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetOneoffGatherPointDetector,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetOneoffGatherPointDetector>((const std::shared_ptr<WidgetOneoffGatherPointDetector> *)this);
  std::shared_ptr<WidgetOneoffGatherPointDetector>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 00000000162555F6-00000000162556A1
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetOpenPage,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetOpenPage,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetOpenPage> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetOpenPage,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetOpenPage>((const std::shared_ptr<WidgetOpenPage> *)this);
  std::shared_ptr<WidgetOpenPage>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 0000000016255888-0000000016255933
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetQuickHitTree,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetQuickHitTree,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetQuickHitTree> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetQuickHitTree,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetQuickHitTree>((const std::shared_ptr<WidgetQuickHitTree> *)this);
  std::shared_ptr<WidgetQuickHitTree>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 0000000016255AFC-0000000016255BA7
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetRockBoardDetector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetRockBoardDetector,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetRockBoardDetector> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetRockBoardDetector,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetRockBoardDetector>((const std::shared_ptr<WidgetRockBoardDetector> *)this);
  std::shared_ptr<WidgetRockBoardDetector>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 0000000016255D8E-0000000016255E39
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetScanCamera,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetScanCamera,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetScanCamera> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetScanCamera,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetScanCamera>((const std::shared_ptr<WidgetScanCamera> *)this);
  std::shared_ptr<WidgetScanCamera>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 0000000016256020-00000000162560CB
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTakePhoto,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTakePhoto,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetTakePhoto> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetTakePhoto,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetTakePhoto>((const std::shared_ptr<WidgetTakePhoto> *)this);
  std::shared_ptr<WidgetTakePhoto>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 00000000162562B2-000000001625635D
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetThunderBirdFeather,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetThunderBirdFeather,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetThunderBirdFeather> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetThunderBirdFeather,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetThunderBirdFeather>((const std::shared_ptr<WidgetThunderBirdFeather> *)this);
  std::shared_ptr<WidgetThunderBirdFeather>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 00000000162565F0-000000001625669B
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetToyCrystal,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetToyCrystal,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetToyCrystal> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetToyCrystal,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetToyCrystal>((const std::shared_ptr<WidgetToyCrystal> *)this);
  std::shared_ptr<WidgetToyCrystal>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 000000001625693A-00000000162569E5
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetToyInstrument,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetToyInstrument,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetToyInstrument> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetToyInstrument,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetToyInstrument>((const std::shared_ptr<WidgetToyInstrument> *)this);
  std::shared_ptr<WidgetToyInstrument>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 0000000016256D12-0000000016256DBD
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTreasureMapDetector,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTreasureMapDetector,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetTreasureMapDetector> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetTreasureMapDetector,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetTreasureMapDetector>((const std::shared_ptr<WidgetTreasureMapDetector> *)this);
  std::shared_ptr<WidgetTreasureMapDetector>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 0000000016257104-00000000162571AF
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetUseAttachAbilityTrigger,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetUseAttachAbilityTrigger,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetUseAttachAbilityTrigger> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetUseAttachAbilityTrigger,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetUseAttachAbilityTrigger>((const std::shared_ptr<WidgetUseAttachAbilityTrigger> *)this);
  std::shared_ptr<WidgetUseAttachAbilityTrigger>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 64: range 0000000016257444-00000000162574EF
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetWeatherWizard,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetWeatherWizard,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetWeatherWizard> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetWeatherWizard,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetWeatherWizard>((const std::shared_ptr<WidgetWeatherWizard> *)this);
  std::shared_ptr<WidgetWeatherWizard>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 0000000017A1D078-0000000017A1D123
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetActivityGacha,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetActivityGacha,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetActivityGacha> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetActivityGacha,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetActivityGacha>((const std::shared_ptr<WidgetActivityGacha> *)this);
  std::shared_ptr<WidgetActivityGacha>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 0000000016251466-0000000016251511
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetFishing,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetFishing,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetFishing> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetFishing,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetFishing>((const std::shared_ptr<WidgetFishing> *)this);
  std::shared_ptr<WidgetFishing>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1016: range 00000000162533FA-00000000162534A5
std::shared_ptr<WidgetBase> __cdecl common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTeapotCreator,PlayerWidgetComp &,Player &,unsigned int>::FactoryRegister(std::type_index)::{lambda(PlayerWidgetComp &,Player &,unsigned int &)#1}::operator()(
        const common::tools::FactoryRegister<WidgetBase,std::type_index,WidgetTeapotCreator,PlayerWidgetComp&,Player&,unsigned int>::FactoryRegister::<lambda(PlayerWidgetComp&, Player&, unsigned int&)> *const this,
        PlayerWidgetComp *args_0,
        Player *args_1,
        unsigned int *args_2)
{
  std::remove_reference<unsigned int&>::type *v4; // r8
  unsigned int *v5; // r12
  unsigned int *v6; // rbx
  Player *v7; // rsi
  Player *v8; // r8
  unsigned int *v9; // r9
  std::shared_ptr<WidgetBase> result; // rax
  std::shared_ptr<WidgetTeapotCreator> v13; // [rsp+30h] [rbp-20h] BYREF

  v5 = std::forward<unsigned int &>(v4);
  v6 = (unsigned int *)std::forward<Player &>((std::remove_reference<Player&>::type *)args_2);
  v7 = (Player *)std::forward<PlayerWidgetComp &>((std::remove_reference<PlayerWidgetComp&>::type *)args_1);
  common::tools::perf::make_shared<WidgetTeapotCreator,PlayerWidgetComp &,Player &,unsigned int &>(
    (PlayerWidgetComp *)&v13,
    v7,
    v6,
    (PlayerWidgetComp *)v5,
    v8,
    v9);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v7);
  std::dynamic_pointer_cast<WidgetBase,WidgetTeapotCreator>((const std::shared_ptr<WidgetTeapotCreator> *)this);
  std::shared_ptr<WidgetTeapotCreator>::~shared_ptr(&v13);
  result._M_ptr = (std::__shared_ptr<WidgetBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};
