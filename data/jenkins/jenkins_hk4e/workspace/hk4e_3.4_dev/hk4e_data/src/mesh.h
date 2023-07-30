// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/mesh.h

// Line 31: range 000000000CFDE836-000000000CFDE861
MeshAllocator<SceneGridConfig>::pointer_type __cdecl MeshAllocator<SceneGridConfig>::create(
        MeshAllocator<SceneGridConfig> *const this)
{
  SceneGridConfig *v1; // rbx

  v1 = (SceneGridConfig *)operator new(0xA0uLL);
  SceneGridConfig::SceneGridConfig(v1);
  return v1;
};

// Line 32: range 000000000D4A9D8A-000000000D4A9E10
void __cdecl MeshAllocator<SceneGridConfig>::destory(
        MeshAllocator<SceneGridConfig> *const this,
        MeshAllocator<SceneGridConfig>::pointer_type *grid_ptr)
{
  MeshAllocator<SceneGridConfig>::pointer_type v2; // rbx
  MeshAllocator<SceneGridConfig>::pointer_type *grid_ptra; // [rsp+0h] [rbp-20h]

  grid_ptra = grid_ptr;
  if ( *(_BYTE *)(((unsigned __int64)grid_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(grid_ptr);
  v2 = *grid_ptr;
  if ( *grid_ptr )
  {
    SceneGridConfig::~SceneGridConfig(*grid_ptr);
    grid_ptr = (MeshAllocator<SceneGridConfig>::pointer_type *)160;
    operator delete(v2, 0xA0uLL);
  }
  if ( *(_BYTE *)(((unsigned __int64)grid_ptra >> 3) + 0x7FFF8000) )
    __asan_report_store8(grid_ptra, grid_ptr);
  *grid_ptra = 0LL;
};

// Line 83: range 000000000D45CDDA-000000000D45CE7B
// local variable allocation has failed, the output may be wrong!
void __cdecl Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>::Mesh(
        Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig> > *const this,
        int32_t length_,
        int32_t width_)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, *(_QWORD *)&length_);
  }
  this->length = length_;
  if ( *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->width, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->width = width_;
  std::unordered_map<int,SceneGridConfig *>::unordered_map(&this->grid_map_);
};
