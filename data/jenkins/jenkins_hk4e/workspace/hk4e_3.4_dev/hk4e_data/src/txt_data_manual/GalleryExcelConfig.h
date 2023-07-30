// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GalleryExcelConfig.h

// Line 34: range 00000000147583E2-000000001475844A
void __cdecl GalleryBalloonParam::GalleryBalloonParam(GalleryBalloonParam *const this)
{
  __int64 v1; // rsi

  std::map<unsigned int,int>::map(&this->balloon_gadget_score_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->combo_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->combo_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->combo_duration, v1);
  }
  this->combo_duration = 0;
  std::map<unsigned int,float>::map(&this->combo_up_ratio_map);
};

// Line 34: range 0000000014DC13D2-0000000014DC1487
void __cdecl GalleryBalloonParam::GalleryBalloonParam(GalleryBalloonParam *const this, GalleryBalloonParam *a2)
{
  uint32_t combo_duration; // ecx
  char v3; // al
  GalleryBalloonParam *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  std::map<unsigned int,int>::map(&this->balloon_gadget_score_map, &a2->balloon_gadget_score_map);
  if ( *(_BYTE *)(((unsigned __int64)&v4->combo_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v4->combo_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->combo_duration);
  }
  combo_duration = a2->combo_duration;
  v3 = *(_BYTE *)(((unsigned __int64)&this->combo_duration >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->combo_duration, a2);
  }
  this->combo_duration = combo_duration;
  std::map<unsigned int,float>::map(&this->combo_up_ratio_map, &v4->combo_up_ratio_map);
};

// Line 34: range 0000000014DC0F8E-0000000014DC1066
void __cdecl GalleryBalloonParam::GalleryBalloonParam(GalleryBalloonParam *const this, const GalleryBalloonParam *a2)
{
  uint32_t combo_duration; // ecx
  char v3; // al
  const GalleryBalloonParam *v4; // [rsp+0h] [rbp-20h]

  v4 = a2;
  std::map<unsigned int,int>::map(&this->balloon_gadget_score_map, &a2->balloon_gadget_score_map);
  if ( *(_BYTE *)(((unsigned __int64)&v4->combo_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v4->combo_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->combo_duration);
  }
  combo_duration = a2->combo_duration;
  v3 = *(_BYTE *)(((unsigned __int64)&this->combo_duration >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->combo_duration, a2);
  }
  this->combo_duration = combo_duration;
  std::map<unsigned int,float>::map(&this->combo_up_ratio_map, &v4->combo_up_ratio_map);
};

// Line 34: range 000000001475844C-0000000014758476
void __cdecl GalleryBalloonParam::~GalleryBalloonParam(GalleryBalloonParam *const this)
{
  std::map<unsigned int,float>::~map(&this->combo_up_ratio_map);
  std::map<unsigned int,int>::~map(&this->balloon_gadget_score_map);
};

// Line 42: range 0000000014758478-0000000014758516
void __cdecl GalleryFallParam::GalleryFallParam(GalleryFallParam *const this)
{
  __int64 v1; // rsi

  std::map<unsigned int,unsigned int>::map(&this->ball_gadget_score_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->final_flower_ring_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->final_flower_ring_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->final_flower_ring_gadget_id, v1);
  }
  this->final_flower_ring_gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->remain_time_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->remain_time_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->remain_time_score, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->remain_time_score = 0;
};

// Line 42: range 0000000014DC18DE-0000000014DC19FD
void __cdecl GalleryFallParam::GalleryFallParam(GalleryFallParam *const this, GalleryFallParam *a2)
{
  uint32_t final_flower_ring_gadget_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t remain_time_score; // ecx
  char v6; // dl
  GalleryFallParam *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  std::map<unsigned int,unsigned int>::map(&this->ball_gadget_score_map, &a2->ball_gadget_score_map);
  if ( *(_BYTE *)(((unsigned __int64)&v7->final_flower_ring_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v7->final_flower_ring_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->final_flower_ring_gadget_id);
  }
  final_flower_ring_gadget_id = a2->final_flower_ring_gadget_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->final_flower_ring_gadget_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->final_flower_ring_gadget_id, a2);
  }
  this->final_flower_ring_gadget_id = final_flower_ring_gadget_id;
  v4 = (((_BYTE)v7 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v7->remain_time_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->remain_time_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v7->remain_time_score);
  }
  remain_time_score = v7->remain_time_score;
  v6 = *(_BYTE *)(((unsigned __int64)&this->remain_time_score >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->remain_time_score, v4);
  }
  this->remain_time_score = remain_time_score;
};

// Line 42: range 0000000014DC14F4-0000000014DC1613
void __cdecl GalleryFallParam::GalleryFallParam(GalleryFallParam *const this, const GalleryFallParam *a2)
{
  uint32_t final_flower_ring_gadget_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t remain_time_score; // ecx
  char v6; // dl
  const GalleryFallParam *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  std::map<unsigned int,unsigned int>::map(&this->ball_gadget_score_map, &a2->ball_gadget_score_map);
  if ( *(_BYTE *)(((unsigned __int64)&v7->final_flower_ring_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v7->final_flower_ring_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->final_flower_ring_gadget_id);
  }
  final_flower_ring_gadget_id = a2->final_flower_ring_gadget_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->final_flower_ring_gadget_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->final_flower_ring_gadget_id, a2);
  }
  this->final_flower_ring_gadget_id = final_flower_ring_gadget_id;
  v4 = (((_BYTE)v7 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v7->remain_time_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->remain_time_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v7->remain_time_score);
  }
  remain_time_score = v7->remain_time_score;
  v6 = *(_BYTE *)(((unsigned __int64)&this->remain_time_score >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->remain_time_score, v4);
  }
  this->remain_time_score = remain_time_score;
};

// Line 42: range 0000000014758518-0000000014758532
void __cdecl GalleryFallParam::~GalleryFallParam(GalleryFallParam *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->ball_gadget_score_map);
};

// Line 50: range 0000000014758534-000000001475858B
void __cdecl GalleryFlowerParam::GalleryFlowerParam(GalleryFlowerParam *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->target_score = 0;
  std::map<unsigned int,float>::map(&this->score_coef_map);
};

// Line 50: range 0000000014DC1DCE-0000000014DC1E66
void __cdecl GalleryFlowerParam::GalleryFlowerParam(GalleryFlowerParam *const this, GalleryFlowerParam *a2)
{
  uint32_t target_score; // ecx
  char v3; // al
  GalleryFlowerParam *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  target_score = a2->target_score;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->target_score = target_score;
  std::map<unsigned int,float>::map(&this->score_coef_map, &v4->score_coef_map);
};

// Line 50: range 0000000014DC1A6A-0000000014DC1B02
void __cdecl GalleryFlowerParam::GalleryFlowerParam(GalleryFlowerParam *const this, const GalleryFlowerParam *a2)
{
  uint32_t target_score; // ecx
  char v3; // al
  const GalleryFlowerParam *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  target_score = a2->target_score;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->target_score = target_score;
  std::map<unsigned int,float>::map(&this->score_coef_map, &v4->score_coef_map);
};

// Line 50: range 000000001475858C-00000000147585AA
void __cdecl GalleryFlowerParam::~GalleryFlowerParam(GalleryFlowerParam *const this)
{
  std::map<unsigned int,float>::~map(&this->score_coef_map);
};

// Line 56: range 0000000014758678-000000001475870D
void __cdecl BuoyantCombaLevelParam::BuoyantCombaLevelParam(BuoyantCombaLevelParam *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->revise_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score_ratio, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->score_ratio = 1;
};

// Line 63: range 0000000014758600-000000001475863A
void __cdecl BuoyantCombatParam::BuoyantCombatParam(BuoyantCombatParam *const this)
{
  std::map<unsigned int,unsigned int>::map(&this->normal_monster_score_map);
  std::map<unsigned int,unsigned int>::map(&this->special_monster_score_map);
  std::vector<BuoyantCombaLevelParam>::vector(&this->level_param_vec);
};

// Line 63: range 0000000014DC23AE-0000000014DC2409
void __cdecl BuoyantCombatParam::BuoyantCombatParam(BuoyantCombatParam *const this, BuoyantCombatParam *a2)
{
  std::map<unsigned int,unsigned int>::map(&this->normal_monster_score_map, &a2->normal_monster_score_map);
  std::map<unsigned int,unsigned int>::map(&this->special_monster_score_map, &a2->special_monster_score_map);
  std::vector<BuoyantCombaLevelParam>::vector(&this->level_param_vec, &a2->level_param_vec);
};

// Line 63: range 0000000014DC2004-0000000014DC2097
void __cdecl BuoyantCombatParam::BuoyantCombatParam(BuoyantCombatParam *const this, const BuoyantCombatParam *a2)
{
  std::map<unsigned int,unsigned int>::map(&this->normal_monster_score_map, &a2->normal_monster_score_map);
  std::map<unsigned int,unsigned int>::map(&this->special_monster_score_map, &a2->special_monster_score_map);
  std::vector<BuoyantCombaLevelParam>::vector(&this->level_param_vec, &a2->level_param_vec);
};

// Line 63: range 000000001475863C-0000000014758676
void __cdecl BuoyantCombatParam::~BuoyantCombatParam(BuoyantCombatParam *const this)
{
  std::vector<BuoyantCombaLevelParam>::~vector(&this->level_param_vec);
  std::map<unsigned int,unsigned int>::~map(&this->special_monster_score_map);
  std::map<unsigned int,unsigned int>::~map(&this->normal_monster_score_map);
};

// Line 71: range 000000001475870E-0000000014758738
void __cdecl SumoCombatParam::SumoCombatParam(SumoCombatParam *const this)
{
  std::map<unsigned int,unsigned int>::map(&this->normal_monster_score_map);
  std::map<unsigned int,unsigned int>::map(&this->special_monster_score_map);
};

// Line 71: range 0000000014DC27A4-0000000014DC27E4
void __cdecl SumoCombatParam::SumoCombatParam(SumoCombatParam *const this, SumoCombatParam *a2)
{
  std::map<unsigned int,unsigned int>::map(&this->normal_monster_score_map, &a2->normal_monster_score_map);
  std::map<unsigned int,unsigned int>::map(&this->special_monster_score_map, &a2->special_monster_score_map);
};

// Line 71: range 0000000014DC2476-0000000014DC24D9
void __cdecl SumoCombatParam::SumoCombatParam(SumoCombatParam *const this, const SumoCombatParam *a2)
{
  std::map<unsigned int,unsigned int>::map(&this->normal_monster_score_map, &a2->normal_monster_score_map);
  std::map<unsigned int,unsigned int>::map(&this->special_monster_score_map, &a2->special_monster_score_map);
};

// Line 71: range 000000001475873A-0000000014758764
void __cdecl SumoCombatParam::~SumoCombatParam(SumoCombatParam *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->special_monster_score_map);
  std::map<unsigned int,unsigned int>::~map(&this->normal_monster_score_map);
};

// Line 94: range 0000000014758766-0000000014758790
void __cdecl GalleryCrystalLinkParam::GalleryCrystalLinkParam(GalleryCrystalLinkParam *const this)
{
  std::map<unsigned int,unsigned int>::map(&this->normal_monster_score_map);
  std::map<unsigned int,unsigned int>::map(&this->special_monster_score_map);
};

// Line 94: range 0000000014DC34F0-0000000014DC3530
void __cdecl GalleryCrystalLinkParam::GalleryCrystalLinkParam(
        GalleryCrystalLinkParam *const this,
        GalleryCrystalLinkParam *a2)
{
  std::map<unsigned int,unsigned int>::map(&this->normal_monster_score_map, &a2->normal_monster_score_map);
  std::map<unsigned int,unsigned int>::map(&this->special_monster_score_map, &a2->special_monster_score_map);
};

// Line 94: range 0000000014DC31C2-0000000014DC3225
void __cdecl GalleryCrystalLinkParam::GalleryCrystalLinkParam(
        GalleryCrystalLinkParam *const this,
        const GalleryCrystalLinkParam *a2)
{
  std::map<unsigned int,unsigned int>::map(&this->normal_monster_score_map, &a2->normal_monster_score_map);
  std::map<unsigned int,unsigned int>::map(&this->special_monster_score_map, &a2->special_monster_score_map);
};

// Line 94: range 0000000014758792-00000000147587BC
void __cdecl GalleryCrystalLinkParam::~GalleryCrystalLinkParam(GalleryCrystalLinkParam *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->special_monster_score_map);
  std::map<unsigned int,unsigned int>::~map(&this->normal_monster_score_map);
};

// Line 101: range 00000000147587BE-00000000147587E8
void __cdecl GalleryLuminanceStoneChallengeParam::GalleryLuminanceStoneChallengeParam(
        GalleryLuminanceStoneChallengeParam *const this)
{
  std::map<unsigned int,unsigned int>::map(&this->normal_monster_score_map);
  std::map<unsigned int,unsigned int>::map(&this->special_monster_score_map);
};

// Line 101: range 0000000014DC3942-0000000014DC39F7
void __cdecl GalleryLuminanceStoneChallengeParam::GalleryLuminanceStoneChallengeParam(
        GalleryLuminanceStoneChallengeParam *const this,
        GalleryLuminanceStoneChallengeParam *a2)
{
  std::map<unsigned int,unsigned int> *p_special_monster_score_map; // rsi
  uint32_t clean_mud_score; // ecx
  char v4; // al

  std::map<unsigned int,unsigned int>::map(&this->normal_monster_score_map, &a2->normal_monster_score_map);
  p_special_monster_score_map = &a2->special_monster_score_map;
  std::map<unsigned int,unsigned int>::map(&this->special_monster_score_map, p_special_monster_score_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->clean_mud_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->clean_mud_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->clean_mud_score);
  }
  clean_mud_score = a2->clean_mud_score;
  v4 = *(_BYTE *)(((unsigned __int64)&this->clean_mud_score >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_special_monster_score_map) = v4 != 0;
    __asan_report_store4(&this->clean_mud_score, p_special_monster_score_map);
  }
  this->clean_mud_score = clean_mud_score;
};

// Line 101: range 0000000014DC359E-0000000014DC3676
void __cdecl GalleryLuminanceStoneChallengeParam::GalleryLuminanceStoneChallengeParam(
        GalleryLuminanceStoneChallengeParam *const this,
        const GalleryLuminanceStoneChallengeParam *a2)
{
  std::map<unsigned int,unsigned int> *p_special_monster_score_map; // rsi
  uint32_t clean_mud_score; // ecx
  char v4; // al

  std::map<unsigned int,unsigned int>::map(&this->normal_monster_score_map, &a2->normal_monster_score_map);
  p_special_monster_score_map = &a2->special_monster_score_map;
  std::map<unsigned int,unsigned int>::map(&this->special_monster_score_map, p_special_monster_score_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->clean_mud_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->clean_mud_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->clean_mud_score);
  }
  clean_mud_score = a2->clean_mud_score;
  v4 = *(_BYTE *)(((unsigned __int64)&this->clean_mud_score >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_special_monster_score_map) = v4 != 0;
    __asan_report_store4(&this->clean_mud_score, p_special_monster_score_map);
  }
  this->clean_mud_score = clean_mud_score;
};

// Line 101: range 00000000147587EA-0000000014758814
void __cdecl GalleryLuminanceStoneChallengeParam::~GalleryLuminanceStoneChallengeParam(
        GalleryLuminanceStoneChallengeParam *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->special_monster_score_map);
  std::map<unsigned int,unsigned int>::~map(&this->normal_monster_score_map);
};

// Line 108: range 0000000014758816-0000000014758840
void __cdecl GalleryInstableSprayParam::GalleryInstableSprayParam(GalleryInstableSprayParam *const this)
{
  std::map<unsigned int,unsigned int>::map(&this->normal_monster_score_map);
  std::map<unsigned int,unsigned int>::map(&this->special_monster_score_map);
};

// Line 108: range 0000000014DC3D92-0000000014DC3DD2
void __cdecl GalleryInstableSprayParam::GalleryInstableSprayParam(
        GalleryInstableSprayParam *const this,
        GalleryInstableSprayParam *a2)
{
  std::map<unsigned int,unsigned int>::map(&this->normal_monster_score_map, &a2->normal_monster_score_map);
  std::map<unsigned int,unsigned int>::map(&this->special_monster_score_map, &a2->special_monster_score_map);
};

// Line 108: range 0000000014DC3A64-0000000014DC3AC7
void __cdecl GalleryInstableSprayParam::GalleryInstableSprayParam(
        GalleryInstableSprayParam *const this,
        const GalleryInstableSprayParam *a2)
{
  std::map<unsigned int,unsigned int>::map(&this->normal_monster_score_map, &a2->normal_monster_score_map);
  std::map<unsigned int,unsigned int>::map(&this->special_monster_score_map, &a2->special_monster_score_map);
};

// Line 108: range 0000000014758842-000000001475886C
void __cdecl GalleryInstableSprayParam::~GalleryInstableSprayParam(GalleryInstableSprayParam *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->special_monster_score_map);
  std::map<unsigned int,unsigned int>::~map(&this->normal_monster_score_map);
};
