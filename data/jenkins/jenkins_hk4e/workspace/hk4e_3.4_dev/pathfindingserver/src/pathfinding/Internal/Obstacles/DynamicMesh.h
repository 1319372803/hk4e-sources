// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Obstacles/DynamicMesh.h

// Line 15: range 000000000CD752A8-000000000CD752F2
void __cdecl DynamicMesh::~DynamicMesh(DynamicMesh *const this)
{
  VertexWelder<2048>::~VertexWelder(&this->m_Welder);
  dynamic_array<int,false,4ul>::~dynamic_array(&this->m_Data);
  dynamic_array<Vector3f,false,4ul>::~dynamic_array(&this->m_Vertices);
  dynamic_array<DynamicMesh::Poly,false,2ul>::~dynamic_array(&this->m_Polygons);
};

// Line 92: range 000000000CD73EEA-000000000CD73F03
size_t __cdecl DynamicMesh::PolyCount(const DynamicMesh *const this)
{
  return dynamic_array<DynamicMesh::Poly,false,2ul>::size(&this->m_Polygons);
};

// Line 97: range 000000000CD73F04-000000000CD73F21
size_t __cdecl DynamicMesh::VertCount(const DynamicMesh *const this)
{
  return dynamic_array<Vector3f,false,4ul>::size(&this->m_Vertices);
};

// Line 102: range 000000000CD73F22-000000000CD73FDA
Vector3f __cdecl DynamicMesh::GetVertex(const DynamicMesh *const this, size_t i)
{
  unsigned __int64 n; // rax
  float v3; // xmm1_4
  __int64 v4; // xmm0_8
  Vector3f result; // 0:xmm0_8.8,8:xmm1_4.4

  n = (unsigned __int64)dynamic_array<Vector3f,false,4ul>::operator[](&this->m_Vertices, i);
  if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0 && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
  {
    n = __asan_report_load_n(n, 12LL);
  }
  v3 = *(float *)(n + 8);
  v4 = *(_QWORD *)n;
  result.x = *(float *)&v4;
  result.y = *((float *)&v4 + 1);
  result.z = v3;
  return result;
};

// Line 107: range 000000000CD73FDC-000000000CD740F9
void __cdecl DynamicMesh::SetVertex(DynamicMesh *const this, size_t i, const Vector3f *v)
{
  Vector3f *v3; // rax
  Vector3f *v4; // rdx

  v3 = dynamic_array<Vector3f,false,4ul>::operator[](&this->m_Vertices, i);
  v4 = v3;
  if ( ((unsigned __int8)v3 & 7) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v3->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v3 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v3->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3, 12LL);
  }
  if ( ((unsigned __int8)v & 7) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(v, 12LL);
  }
  *(_QWORD *)&v4->x = *(_QWORD *)&v->x;
  v4->z = v->z;
};

// Line 112: range 000000000CD740FA-000000000CD7411E
const DynamicMesh::Poly *__cdecl DynamicMesh::GetPoly(const DynamicMesh *const this, size_t i)
{
  return dynamic_array<DynamicMesh::Poly,false,2ul>::operator[](&this->m_Polygons, i);
};

// Line 117: range 000000000CD74120-000000000CD74148
const DynamicMesh::DataType *__cdecl DynamicMesh::GetData(const DynamicMesh *const this, size_t i)
{
  return dynamic_array<int,false,4ul>::operator[](&this->m_Data, i);
};
