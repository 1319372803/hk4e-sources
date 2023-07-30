// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/map_field.h

// Line 119: range 000000000C05C1B0-000000000C05C1C0
void __fastcall google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedFieldNoLock(
        const google::protobuf::internal::MapFieldBase *const this)
{
  ;
};

// Line 212: range 000000000C0D34BE-000000000C0D49FF
void __fastcall google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::~MapField(
        google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this)
{
  unsigned __int64 p_map; // rbp
  unsigned __int64 v2; // r12
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // r14
  __int64 v5; // rdx
  google::protobuf::Arena *v6; // rax
  unsigned __int64 *v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // rdx
  char v10; // al
  google::protobuf::internal::LogMessage_0 *v11; // rax
  unsigned __int64 v12; // r15
  std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> >::const_iterator v13; // r13
  void *v14; // r15
  google::protobuf::Map<unsigned int,unsigned int>::InnerMap *v15; // r13
  unsigned __int64 v16; // [rsp+8h] [rbp-90h]
  google::protobuf::internal::LogFinisher v17; // [rsp+1Fh] [rbp-79h] BYREF
  google::protobuf::internal::LogMessage_0 v18; // [rsp+20h] [rbp-78h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
  }
  else
  {
    this->_vptr_MapFieldBase = (int (**)(...))(&`vtable for'google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>
                                             + 2);
    p_map = (unsigned __int64)&this->impl_.map_;
    google::protobuf::Map<unsigned int,unsigned int>::clear(&this->impl_.map_);
    if ( !*(_BYTE *)(((unsigned __int64)&this->impl_.map_ >> 3) + 0x7FFF8000) )
    {
      if ( this->impl_.map_.arena_ )
        goto LABEL_4;
      goto LABEL_8;
    }
  }
  __asan_report_load8();
LABEL_8:
  if ( *(_BYTE *)(((p_map + 16) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
  }
  else
  {
    p_map = *(_QWORD *)(p_map + 16);
    if ( !p_map )
      goto LABEL_4;
    if ( !*(_BYTE *)(((p_map + 32) >> 3) + 0x7FFF8000) )
    {
      if ( *(_QWORD *)(p_map + 32) )
      {
        v3 = 0LL;
        goto LABEL_23;
      }
      goto LABEL_77;
    }
  }
  __asan_report_load8();
LABEL_15:
  __asan_report_load8();
LABEL_16:
  __asan_report_load8();
LABEL_17:
  __asan_report_load8();
LABEL_18:
  __asan_report_load8();
  while ( 1 )
  {
    if ( !v2 )
      goto LABEL_22;
    if ( *(_BYTE *)(((v5 + 8 * (v3 ^ 1)) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load8();
LABEL_40:
      v16 = v3 + 1;
      v8 = 8 * (v3 + 1);
      v9 = v8 + v5;
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
        v10 = 0;
        goto LABEL_45;
      }
      if ( v2 != *(_QWORD *)v9 || (v3 & 1) != 0 )
      {
        google::protobuf::internal::LogMessage::LogMessage(
          &v18,
          LOGLEVEL_FATAL_0,
          "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/map.h",
          508);
        v11 = google::protobuf::internal::LogMessage::operator<<(
                &v18,
                "CHECK failed: table_[b] == table_[b + 1] && (b & 1) == 0: ");
        google::protobuf::internal::LogFinisher::operator=(&v17, v11);
        google::protobuf::internal::LogMessage::~LogMessage(&v18);
      }
      if ( *(_BYTE *)(((p_map + 32) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load8();
      }
      else
      {
        v12 = *(_QWORD *)(p_map + 32) + v8;
        if ( !*(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        {
          *(_QWORD *)v12 = 0LL;
          v4 += *(_QWORD *)(p_map + 32);
          if ( !*(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
          {
            *(_QWORD *)v4 = 0LL;
            if ( !*(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
            {
              v13._M_node = *(std::_Rb_tree_const_iterator<unsigned int*>::_Base_ptr *)(v2 + 32);
              goto LABEL_60;
            }
LABEL_56:
            __asan_report_load8();
LABEL_57:
            __asan_report_load8();
LABEL_58:
            __asan_report_load8();
            while ( 1 )
            {
              v13._M_node = (std::_Rb_tree_const_iterator<unsigned int*>::_Base_ptr)v4;
              if ( v4 == v2 + 16 )
                break;
LABEL_60:
              if ( *(_BYTE *)(((unsigned __int64)&v13._M_node[1] >> 3) + 0x7FFF8000) )
                goto LABEL_57;
              v14 = *(void **)&v13._M_node[1]._M_color;
              v4 = std::_Rb_tree_increment(v13._M_node);
              std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::_M_erase_aux(
                (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *const)v2,
                v13);
              if ( *(_BYTE *)(((p_map + 40) >> 3) + 0x7FFF8000) )
                goto LABEL_58;
              if ( !*(_QWORD *)(p_map + 40) )
                operator delete(v14, 0x18uLL);
            }
            if ( *(_BYTE *)(((p_map + 40) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load8();
            }
            else
            {
              v15 = *(google::protobuf::Map<unsigned int,unsigned int>::InnerMap **)(p_map + 40);
              if ( !*(_BYTE *)(((v2 + 24) >> 3) + 0x7FFF8000) )
              {
                std::_Rb_tree<unsigned int *,unsigned int *,std::_Identity<unsigned int *>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int *>>::_M_erase(
                  (std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> > *const)v2,
                  *(std::_Rb_tree<unsigned int*,unsigned int*,std::_Identity<unsigned int*>,google::protobuf::Map<unsigned int,unsigned int>::InnerMap::KeyCompare,google::protobuf::Map<unsigned int,unsigned int>::MapAllocator<unsigned int*> >::_Link_type *)(v2 + 24));
                if ( v15 )
                {
LABEL_67:
                  v3 = v16;
                  goto LABEL_22;
                }
LABEL_70:
                operator delete((void *)v2, 0x38uLL);
                goto LABEL_67;
              }
            }
            __asan_report_load8();
            goto LABEL_70;
          }
LABEL_55:
          __asan_report_store8();
          goto LABEL_56;
        }
      }
      __asan_report_store8();
      goto LABEL_55;
    }
    if ( v2 == *(_QWORD *)(v5 + 8 * (v3 ^ 1)) )
      goto LABEL_40;
LABEL_22:
    ++v3;
LABEL_23:
    if ( *(_BYTE *)(((p_map + 8) >> 3) + 0x7FFF8000) )
      goto LABEL_15;
    v6 = *(google::protobuf::Arena **)(p_map + 8);
    if ( (unsigned __int64)v6 <= v3 )
      break;
    if ( *(_BYTE *)(((p_map + 32) >> 3) + 0x7FFF8000) )
      goto LABEL_16;
    v5 = *(_QWORD *)(p_map + 32);
    v4 = 8 * v3;
    v7 = (unsigned __int64 *)(v5 + 8 * v3);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      goto LABEL_17;
    v2 = *v7;
    if ( *v7 )
    {
      if ( *(_BYTE *)(((v5 + 8 * (v3 ^ 1)) >> 3) + 0x7FFF8000) )
        goto LABEL_18;
      if ( v2 != *(_QWORD *)(v5 + 8 * (v3 ^ 1)) )
      {
        *v7 = 0LL;
        while ( !*(_BYTE *)(((v2 + 16) >> 3) + 0x7FFF8000) )
        {
          v4 = *(_QWORD *)(v2 + 16);
          if ( *(_BYTE *)(((p_map + 40) >> 3) + 0x7FFF8000) )
            goto LABEL_32;
          if ( !*(_QWORD *)(p_map + 40) )
            operator delete((void *)v2, 0x18uLL);
LABEL_33:
          if ( !v4 )
            goto LABEL_22;
          v2 = v4;
        }
        __asan_report_load8();
LABEL_32:
        __asan_report_load8();
        goto LABEL_33;
      }
    }
  }
  if ( *(_BYTE *)((p_map >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    goto LABEL_79;
  }
  *(_QWORD *)p_map = 0LL;
  if ( *(_BYTE *)(((p_map + 24) >> 3) + 0x7FFF8000) )
  {
LABEL_79:
    __asan_report_store8();
    goto LABEL_80;
  }
  *(_QWORD *)(p_map + 24) = v6;
  if ( *(_BYTE *)(((p_map + 32) >> 3) + 0x7FFF8000) )
  {
LABEL_80:
    __asan_report_load8();
    goto LABEL_81;
  }
  if ( *(_BYTE *)(((p_map + 40) >> 3) + 0x7FFF8000) )
  {
LABEL_81:
    __asan_report_load8();
    v10 = 1;
LABEL_45:
    if ( v10 )
      google::protobuf::internal::LogMessage::~LogMessage(&v18);
    std::terminate();
  }
  if ( !*(_QWORD *)(p_map + 40) )
    operator delete(*(void **)(p_map + 32), 8LL * *(_QWORD *)(p_map + 8));
LABEL_77:
  operator delete((void *)p_map, 0x30uLL);
LABEL_4:
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store8();
    google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::~MapField((google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ExtMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const)this);
  }
  else
  {
    this->_vptr_MapFieldBase = (int (**)(...))(&`vtable for'google::protobuf::internal::TypeDefinedMapFieldBase<unsigned int,unsigned int>
                                             + 2);
    google::protobuf::internal::MapFieldBase::~MapFieldBase(this);
  }
};

// Line 248: range 000000000C6575E8-000000000C657611
const google::protobuf::Map<std::string,std::string > *__cdecl google::protobuf::internal::MapField<proto::DataVersionConfig::DataVersionConfig_ClientMd5Entry,std::string,std::string,(google::protobuf::internal::WireFormatLite::FieldType)9,(google::protobuf::internal::WireFormatLite::FieldType)9,0>::GetMap(
        const google::protobuf::internal::MapField<proto::DataVersionConfig::DataVersionConfig_ClientMd5Entry,std::string,std::string,(google::protobuf::internal::WireFormatLite::FieldType)9,(google::protobuf::internal::WireFormatLite::FieldType)9,0> *const this)
{
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  return google::protobuf::internal::MapFieldLite<proto::DataVersionConfig::DataVersionConfig_ClientMd5Entry,std::string,std::string,(google::protobuf::internal::WireFormatLite::FieldType)9,(google::protobuf::internal::WireFormatLite::FieldType)9,0>::GetMap(&this->impl_);
};

// Line 248: range 000000000C6576BA-000000000C6576E3
const google::protobuf::Map<std::string,std::string > *__cdecl google::protobuf::internal::MapField<proto::DataVersionConfig::DataVersionConfig_ClientSilenceMd5Entry,std::string,std::string,(google::protobuf::internal::WireFormatLite::FieldType)9,(google::protobuf::internal::WireFormatLite::FieldType)9,0>::GetMap(
        const google::protobuf::internal::MapField<proto::DataVersionConfig::DataVersionConfig_ClientSilenceMd5Entry,std::string,std::string,(google::protobuf::internal::WireFormatLite::FieldType)9,(google::protobuf::internal::WireFormatLite::FieldType)9,0> *const this)
{
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  return google::protobuf::internal::MapFieldLite<proto::DataVersionConfig::DataVersionConfig_ClientSilenceMd5Entry,std::string,std::string,(google::protobuf::internal::WireFormatLite::FieldType)9,(google::protobuf::internal::WireFormatLite::FieldType)9,0>::GetMap(&this->impl_);
};

// Line 248: range 000000000C657828-000000000C657851
const google::protobuf::Map<unsigned int,proto::GameplayRecommendationAvatarConfig> *__cdecl google::protobuf::internal::MapField<proto::GameplayRecommendationConfig::GameplayRecommendationConfig_AvatarConfigMapEntry,unsigned int,proto::GameplayRecommendationAvatarConfig,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)11,0>::GetMap(
        const google::protobuf::internal::MapField<proto::GameplayRecommendationConfig::GameplayRecommendationConfig_AvatarConfigMapEntry,unsigned int,proto::GameplayRecommendationAvatarConfig,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)11,0> *const this)
{
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  return google::protobuf::internal::MapFieldLite<proto::GameplayRecommendationConfig::GameplayRecommendationConfig_AvatarConfigMapEntry,unsigned int,proto::GameplayRecommendationAvatarConfig,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)11,0>::GetMap(&this->impl_);
};

// Line 248: range 000000000C6577D4-000000000C6577FD
const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig> *__cdecl google::protobuf::internal::MapField<proto::GameplayRecommendationAvatarConfig::GameplayRecommendationAvatarConfig_ReliquaryConfigMapEntry,unsigned int,proto::GameplayRecommendationReliquaryConfig,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)11,0>::GetMap(
        const google::protobuf::internal::MapField<proto::GameplayRecommendationAvatarConfig::GameplayRecommendationAvatarConfig_ReliquaryConfigMapEntry,unsigned int,proto::GameplayRecommendationReliquaryConfig,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)11,0> *const this)
{
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  return google::protobuf::internal::MapFieldLite<proto::GameplayRecommendationAvatarConfig::GameplayRecommendationAvatarConfig_ReliquaryConfigMapEntry,unsigned int,proto::GameplayRecommendationReliquaryConfig,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)11,0>::GetMap(&this->impl_);
};

// Line 248: range 000000000C657780-000000000C6577A9
const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryConfig> *__cdecl google::protobuf::internal::MapField<proto::GameplayRecommendationReliquaryMapConfig::GameplayRecommendationReliquaryMapConfig_ReliquaryConfigMapEntry,unsigned int,proto::GameplayRecommendationReliquaryConfig,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)11,0>::GetMap(
        const google::protobuf::internal::MapField<proto::GameplayRecommendationReliquaryMapConfig::GameplayRecommendationReliquaryMapConfig_ReliquaryConfigMapEntry,unsigned int,proto::GameplayRecommendationReliquaryConfig,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)11,0> *const this)
{
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  return google::protobuf::internal::MapFieldLite<proto::GameplayRecommendationReliquaryMapConfig::GameplayRecommendationReliquaryMapConfig_ReliquaryConfigMapEntry,unsigned int,proto::GameplayRecommendationReliquaryConfig,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)11,0>::GetMap(&this->impl_);
};

// Line 248: range 000000000C6577FE-000000000C657827
const google::protobuf::Map<unsigned int,proto::GameplayRecommendationReliquaryMapConfig> *__cdecl google::protobuf::internal::MapField<proto::GameplayRecommendationAvatarConfig::GameplayRecommendationAvatarConfig_ElementReliquaryConfigMapEntry,unsigned int,proto::GameplayRecommendationReliquaryMapConfig,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)11,0>::GetMap(
        const google::protobuf::internal::MapField<proto::GameplayRecommendationAvatarConfig::GameplayRecommendationAvatarConfig_ElementReliquaryConfigMapEntry,unsigned int,proto::GameplayRecommendationReliquaryMapConfig,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)11,0> *const this)
{
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  return google::protobuf::internal::MapFieldLite<proto::GameplayRecommendationAvatarConfig::GameplayRecommendationAvatarConfig_ElementReliquaryConfigMapEntry,unsigned int,proto::GameplayRecommendationReliquaryMapConfig,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)11,0>::GetMap(&this->impl_);
};

// Line 248: range 000000000C6577AA-000000000C6577D3
const google::protobuf::Map<unsigned int,proto::GameplayRecommendationSkillConfig> *__cdecl google::protobuf::internal::MapField<proto::GameplayRecommendationAvatarConfig::GameplayRecommendationAvatarConfig_SkillConfigMapEntry,unsigned int,proto::GameplayRecommendationSkillConfig,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)11,0>::GetMap(
        const google::protobuf::internal::MapField<proto::GameplayRecommendationAvatarConfig::GameplayRecommendationAvatarConfig_SkillConfigMapEntry,unsigned int,proto::GameplayRecommendationSkillConfig,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)11,0> *const this)
{
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  return google::protobuf::internal::MapFieldLite<proto::GameplayRecommendationAvatarConfig::GameplayRecommendationAvatarConfig_SkillConfigMapEntry,unsigned int,proto::GameplayRecommendationSkillConfig,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)11,0>::GetMap(&this->impl_);
};

// Line 248: range 000000000C657612-000000000C65763B
const google::protobuf::Map<unsigned int,std::string > *__cdecl google::protobuf::internal::MapField<proto::DataVersionConfig::DataVersionConfig_ClientPlatformMd5Entry,unsigned int,std::string,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)9,0>::GetMap(
        const google::protobuf::internal::MapField<proto::DataVersionConfig::DataVersionConfig_ClientPlatformMd5Entry,unsigned int,std::string,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)9,0> *const this)
{
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  return google::protobuf::internal::MapFieldLite<proto::DataVersionConfig::DataVersionConfig_ClientPlatformMd5Entry,unsigned int,std::string,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)9,0>::GetMap(&this->impl_);
};

// Line 248: range 000000000C6576E4-000000000C65770D
const google::protobuf::Map<unsigned int,std::string > *__cdecl google::protobuf::internal::MapField<proto::DataVersionConfig::DataVersionConfig_ClientSilencePlatformMd5Entry,unsigned int,std::string,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)9,0>::GetMap(
        const google::protobuf::internal::MapField<proto::DataVersionConfig::DataVersionConfig_ClientSilencePlatformMd5Entry,unsigned int,std::string,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)9,0> *const this)
{
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  return google::protobuf::internal::MapFieldLite<proto::DataVersionConfig::DataVersionConfig_ClientSilencePlatformMd5Entry,unsigned int,std::string,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)9,0>::GetMap(&this->impl_);
};

// Line 248: range 000000000C0CAF2A-000000000C0CAF38
const google::protobuf::Map<unsigned int,unsigned int> *__fastcall google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::GetMap(
        const google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this)
{
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  return &this->impl_.map_;
};

// Line 253: range 000000000C65763C-000000000C657679
google::protobuf::Map<unsigned int,std::string > *__cdecl google::protobuf::internal::MapField<proto::DataVersionConfig::DataVersionConfig_ClientPlatformMd5Entry,unsigned int,std::string,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)9,0>::MutableMap(
        google::protobuf::internal::MapField<proto::DataVersionConfig::DataVersionConfig_ClientPlatformMd5Entry,unsigned int,std::string,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)9,0> *const this)
{
  google::protobuf::Map<unsigned int,std::string > *result; // [rsp+18h] [rbp-8h]

  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  result = google::protobuf::internal::MapFieldLite<proto::DataVersionConfig::DataVersionConfig_ClientPlatformMd5Entry,unsigned int,std::string,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)9,0>::MutableMap(&this->impl_);
  google::protobuf::internal::MapFieldBase::SetMapDirty(this);
  return result;
};

// Line 253: range 000000000C65770E-000000000C65774B
google::protobuf::Map<unsigned int,std::string > *__cdecl google::protobuf::internal::MapField<proto::DataVersionConfig::DataVersionConfig_ClientSilencePlatformMd5Entry,unsigned int,std::string,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)9,0>::MutableMap(
        google::protobuf::internal::MapField<proto::DataVersionConfig::DataVersionConfig_ClientSilencePlatformMd5Entry,unsigned int,std::string,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)9,0> *const this)
{
  google::protobuf::Map<unsigned int,std::string > *result; // [rsp+18h] [rbp-8h]

  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  result = google::protobuf::internal::MapFieldLite<proto::DataVersionConfig::DataVersionConfig_ClientSilencePlatformMd5Entry,unsigned int,std::string,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)9,0>::MutableMap(&this->impl_);
  google::protobuf::internal::MapFieldBase::SetMapDirty(this);
  return result;
};

// Line 253: range 000000000C0CAFDE-000000000C0CB001
google::protobuf::Map<unsigned int,unsigned int> *__fastcall google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0>::MutableMap(
        google::protobuf::internal::MapField<proto::PacketHead::PacketHead_ServiceAppIdMapEntry,unsigned int,unsigned int,(google::protobuf::internal::WireFormatLite::FieldType)13,(google::protobuf::internal::WireFormatLite::FieldType)13,0> *const this)
{
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(this);
  google::protobuf::internal::MapFieldBase::SetMapDirty(this);
  return &this->impl_.map_;
};
