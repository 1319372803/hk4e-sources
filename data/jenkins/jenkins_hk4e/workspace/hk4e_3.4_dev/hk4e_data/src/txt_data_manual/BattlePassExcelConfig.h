// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/BattlePassExcelConfig.h

// Line 23: range 0000000012EAB096-0000000012EAB177
void __cdecl BattlePassRewardTag::BattlePassRewardTag(
        BattlePassRewardTag *const this,
        proto::BattlePassUnlockStatus unlock_status,
        uint32_t level,
        uint32_t reward_id)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->unlock_status = unlock_status;
  if ( *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->level = level;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_id, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->reward_id = reward_id;
};

// Line 36: range 0000000012EAB178-0000000012EAB37C
std::size_t __cdecl std::hash<BattlePassRewardTag>::operator()(
        const std::hash<BattlePassRewardTag> *const this,
        const BattlePassRewardTag *tag)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::size_t v5; // r14
  std::size_t v6; // r14
  std::size_t result; // rax
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = std::hash<BattlePassRewardTag>::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(tag);
  }
  v5 = std::hash<unsigned long>::operator()(
         (const std::hash<long unsigned int> *const)(v2 + 32),
         901547 * tag->unlock_status);
  if ( *(_BYTE *)(((unsigned __int64)&tag->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)tag + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tag->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&tag->level);
  }
  v6 = std::hash<unsigned long>::operator()((const std::hash<long unsigned int> *const)(v2 + 48), 999451 * tag->level) ^ v5;
  if ( *(_BYTE *)(((unsigned __int64)&tag->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)tag + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tag->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&tag->reward_id);
  }
  result = v6 ^ std::hash<unsigned long>::operator()(
                  (const std::hash<long unsigned int> *const)(v2 + 64),
                  tag->reward_id);
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

// Line 44: range 0000000012EAB37E-0000000012EAB538
bool __cdecl std::equal_to<BattlePassRewardTag>::operator()(
        const std::equal_to<BattlePassRewardTag> *const this,
        const BattlePassRewardTag *lhs,
        const BattlePassRewardTag *rhs)
{
  proto::BattlePassUnlockStatus unlock_status; // ecx
  uint32_t level; // ecx
  uint32_t reward_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(lhs);
  }
  unlock_status = lhs->unlock_status;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rhs);
  }
  if ( unlock_status != rhs->unlock_status )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->level);
  }
  level = lhs->level;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->level);
  }
  if ( level != rhs->level )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->reward_id);
  }
  reward_id = lhs->reward_id;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->reward_id);
  }
  return reward_id == rhs->reward_id;
};
