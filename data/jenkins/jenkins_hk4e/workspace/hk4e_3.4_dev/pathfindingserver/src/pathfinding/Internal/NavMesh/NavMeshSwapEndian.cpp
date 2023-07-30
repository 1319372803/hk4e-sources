// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/NavMesh/NavMeshSwapEndian.cpp

// Line 30: range 000000000CD73D19-000000000CD73DB4
void __cdecl swapByte(unsigned __int8 *a, unsigned __int8 *b)
{
  unsigned __int8 tmp; // [rsp+1Fh] [rbp-1h]

  if ( *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)a & 7) >= *(_BYTE *)(((unsigned __int64)a >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(a);
  }
  tmp = *a;
  if ( *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)b & 7) >= *(_BYTE *)(((unsigned __int64)b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(b);
  }
  *a = *b;
  *b = tmp;
};

// Line 37: range 000000000CD73DB5-000000000CD73DE2
void __cdecl swapEndian(unsigned __int16 *v)
{
  swapByte((unsigned __int8 *)v, (unsigned __int8 *)v + 1);
};

// Line 49: range 000000000CD73DE3-000000000CD73E2B
void __cdecl swapEndian(unsigned int *v)
{
  swapByte((unsigned __int8 *)v, (unsigned __int8 *)v + 3);
  swapByte((unsigned __int8 *)v + 1, (unsigned __int8 *)v + 2);
};

// Line 55: range 000000000CD73E2C-000000000CD73E74
void __cdecl swapEndian(int *v)
{
  swapByte((unsigned __int8 *)v, (unsigned __int8 *)v + 3);
  swapByte((unsigned __int8 *)v + 1, (unsigned __int8 *)v + 2);
};

// Line 67: range 000000000CD73E75-000000000CD73EBD
void __cdecl swapEndian(float *v)
{
  swapByte((unsigned __int8 *)v, (unsigned __int8 *)v + 3);
  swapByte((unsigned __int8 *)v + 1, (unsigned __int8 *)v + 2);
};

// Line 73: range 000000000CC5FA8F-000000000CC5FEB9
bool __cdecl NavMeshHeaderSwapEndian(unsigned __int8 *data)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  bool result; // al
  float *v5; // rax
  float *v6; // rax
  float *v7; // rax
  float *v8; // rax
  float *v9; // rax
  float *v10; // rax
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 15 swappedMagic:76 64 4 17 swappedVersion:77";
  *(_QWORD *)(v1 + 16) = NavMeshHeaderSwapEndian;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116348;
  *(_DWORD *)(v1 + 48) = 1145979222;
  *(_DWORD *)(v1 + 64) = 17;
  swapEndian((int *)(v1 + 48));
  swapEndian((int *)(v1 + 64));
  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data);
  }
  if ( *(_DWORD *)data == 1145979222 )
  {
    if ( *(_BYTE *)(((unsigned __int64)(data + 4) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 4) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(data + 4);
    }
    if ( *((_DWORD *)data + 1) == 17 )
      goto LABEL_17;
  }
  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data);
  }
  if ( *(_DWORD *)data != *(_DWORD *)(v1 + 48) )
    goto LABEL_16;
  if ( *(_BYTE *)(((unsigned __int64)(data + 4) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data + 4);
  }
  if ( *((_DWORD *)data + 1) == *(_DWORD *)(v1 + 64) )
  {
LABEL_17:
    swapEndian((int *)data);
    swapEndian((int *)data + 1);
    swapEndian((int *)data + 2);
    swapEndian((int *)data + 3);
    swapEndian((unsigned int *)data + 4);
    swapEndian((int *)data + 5);
    swapEndian((int *)data + 6);
    swapEndian((int *)data + 7);
    swapEndian((int *)data + 8);
    swapEndian((int *)data + 9);
    swapEndian((int *)data + 10);
    v5 = Vector3f::operator[]((Vector3f *const)(data + 44), 0);
    swapEndian(v5);
    v6 = Vector3f::operator[]((Vector3f *const)(data + 44), 1);
    swapEndian(v6);
    v7 = Vector3f::operator[]((Vector3f *const)(data + 44), 2);
    swapEndian(v7);
    v8 = Vector3f::operator[]((Vector3f *const)(data + 56), 0);
    swapEndian(v8);
    v9 = Vector3f::operator[]((Vector3f *const)(data + 56), 1);
    swapEndian(v9);
    v10 = Vector3f::operator[]((Vector3f *const)(data + 56), 2);
    swapEndian(v10);
    swapEndian((float *)data + 17);
    result = 1;
  }
  else
  {
LABEL_16:
    result = 0;
  }
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 115: range 000000000CC5FEBA-000000000CC60604
bool __cdecl NavMeshDataSwapEndian(unsigned __int8 *data, const int dataSize)
{
  int i; // [rsp+18h] [rbp-98h]
  int i_0; // [rsp+1Ch] [rbp-94h]
  int j; // [rsp+20h] [rbp-90h]
  int i_1; // [rsp+24h] [rbp-8Ch]
  int i_2; // [rsp+28h] [rbp-88h]
  int i_3; // [rsp+2Ch] [rbp-84h]
  int i_4; // [rsp+30h] [rbp-80h]
  int j_0; // [rsp+34h] [rbp-7Ch]
  uint32_t headerSize; // [rsp+38h] [rbp-78h]
  uint32_t vertsSize; // [rsp+3Ch] [rbp-74h]
  signed int polysSize; // [rsp+40h] [rbp-70h]
  signed int detailMeshesSize; // [rsp+44h] [rbp-6Ch]
  signed int detailVertsSize; // [rsp+48h] [rbp-68h]
  signed int detailTrisSize; // [rsp+4Ch] [rbp-64h]
  int swapSize; // [rsp+54h] [rbp-5Ch]
  NavMeshPoly *polys; // [rsp+70h] [rbp-40h]
  NavMeshPolyDetail *detailMeshes; // [rsp+78h] [rbp-38h]
  float *detailVerts; // [rsp+80h] [rbp-30h]
  NavMeshPolyDetailIndex *detailTris; // [rsp+88h] [rbp-28h]
  NavMeshBVNode *bvTree; // [rsp+90h] [rbp-20h]
  NavMeshPoly *p; // [rsp+98h] [rbp-18h]
  NavMeshPolyDetail *pd; // [rsp+A0h] [rbp-10h]
  NavMeshBVNode *node; // [rsp+A8h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data);
  }
  if ( *(_DWORD *)data != 1145979222 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)(data + 4) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data + 4);
  }
  if ( *((_DWORD *)data + 1) != 17 )
    return 0;
  headerSize = Align4(0x48u);
  if ( *(_BYTE *)(((unsigned __int64)(data + 24) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 24) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data + 24);
  }
  vertsSize = Align4(12 * *((_DWORD *)data + 6));
  if ( *(_BYTE *)(((unsigned __int64)(data + 20) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 20) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data + 20);
  }
  polysSize = Align4(32 * *((_DWORD *)data + 5));
  if ( *(_BYTE *)(((unsigned __int64)(data + 28) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 28) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data + 28);
  }
  detailMeshesSize = Align4(12 * *((_DWORD *)data + 7));
  if ( *(_BYTE *)(((unsigned __int64)(data + 32) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 32) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data + 32);
  }
  detailVertsSize = Align4(12 * *((_DWORD *)data + 8));
  if ( *(_BYTE *)(((unsigned __int64)(data + 36) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 36) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data + 36);
  }
  detailTrisSize = Align4(8 * *((_DWORD *)data + 9));
  if ( *(_BYTE *)(((unsigned __int64)(data + 40) >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)data + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 40) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(data + 40);
  }
  polys = (NavMeshPoly *)&data[headerSize + vertsSize];
  detailMeshes = (NavMeshPolyDetail *)((char *)polys + polysSize);
  detailVerts = (float *)((char *)&detailMeshes->vertBase + detailMeshesSize);
  detailTris = (NavMeshPolyDetailIndex *)((char *)detailVerts + detailVertsSize);
  bvTree = (NavMeshBVNode *)((char *)detailTris + detailTrisSize);
  swapSize = Align4(16 * *((_DWORD *)data + 10)) + (_DWORD)bvTree - (_DWORD)data;
  for ( i = 0; ; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)(data + 24) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)data + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 24) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(data + 24);
    }
    if ( i >= 3 * *((_DWORD *)data + 6) )
      break;
    swapEndian((float *)&data[4 * i + headerSize]);
  }
  for ( i_0 = 0; ; ++i_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)(data + 20) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)data + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 20) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(data + 20);
    }
    if ( i_0 >= *((_DWORD *)data + 5) )
      break;
    p = &polys[i_0];
    for ( j = 0; j <= 5; ++j )
    {
      swapEndian(&p->verts[j]);
      swapEndian(&p->neis[j]);
    }
    swapEndian(&p->flags);
  }
  for ( i_1 = 0; ; ++i_1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)(data + 28) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)data + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 28) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(data + 28);
    }
    if ( i_1 >= *((_DWORD *)data + 7) )
      break;
    pd = &detailMeshes[i_1];
    swapEndian(&pd->vertBase);
    swapEndian(&pd->triBase);
    swapEndian(&pd->vertCount);
    swapEndian(&pd->triCount);
  }
  for ( i_2 = 0; ; ++i_2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)(data + 32) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)data + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 32) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(data + 32);
    }
    if ( i_2 >= 3 * *((_DWORD *)data + 8) )
      break;
    swapEndian(&detailVerts[i_2]);
  }
  for ( i_3 = 0; ; ++i_3 )
  {
    if ( *(_BYTE *)(((unsigned __int64)(data + 36) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)data + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 36) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(data + 36);
    }
    if ( i_3 >= 4 * *((_DWORD *)data + 9) )
      break;
    swapEndian(&detailTris[i_3]);
  }
  for ( i_4 = 0; ; ++i_4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)(data + 40) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)data + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(data + 40) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(data + 40);
    }
    if ( i_4 >= *((_DWORD *)data + 10) )
      break;
    node = &bvTree[i_4];
    for ( j_0 = 0; j_0 <= 2; ++j_0 )
    {
      swapEndian(&node->bmin[j_0]);
      swapEndian(&node->bmax[j_0]);
    }
    swapEndian(&node->i);
  }
  return swapSize == dataSize;
};
