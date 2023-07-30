// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Allocator/MemoryMacros.cpp

// Line 30: range 000000000CB76C6F-000000000CB76CBA
void *__cdecl operator new(
        size_t size,
        size_t align,
        const char *areaName,
        const char *objectName,
        const char *file,
        int line)
{
  return malloc_internal(size, align, kAllocateOptionNone, file, line);
};

// Line 43: range 000000000CB76CBB-000000000CB76D02
void *__cdecl operator new(size_t size, size_t align, const char *objectName, const char *file, int line)
{
  return malloc_internal(size, align, kAllocateOptionNone, file, line);
};

// Line 53: range 000000000CB76D03-000000000CB76D45
void *__cdecl operator new(size_t size, size_t align, const char *file, int line)
{
  return malloc_internal(size, align, kAllocateOptionNone, file, line);
};

// Line 59: range 000000000CB76D46-000000000CB76D91
void *__cdecl operator new[](
        size_t size,
        size_t align,
        const char *areaName,
        const char *objectName,
        const char *file,
        int line)
{
  return malloc_internal(size, align, kAllocateOptionNone, file, line);
};

// Line 71: range 000000000CB76D92-000000000CB76DD4
void *__cdecl operator new[](size_t size, size_t align, const char *file, int line)
{
  return malloc_internal(size, align, kAllocateOptionNone, file, line);
};

// Line 76: range 000000000CB76DD5-000000000CB76E02
void __cdecl operator delete(void *p, size_t a2, const char *a3, const char *a4, const char *a5, int a6)
{
  free_alloc_internal(p);
};

// Line 77: range 000000000CB76E03-000000000CB76E27
void __cdecl operator delete(void *p, size_t a2, const char *a3, int a4)
{
  free_alloc_internal(p);
};

// Line 78: range 000000000CB76E28-000000000CB76E55
void __cdecl operator delete[](void *p, size_t a2, const char *a3, const char *a4, const char *a5, int a6)
{
  free_alloc_internal(p);
};

// Line 79: range 000000000CB76E56-000000000CB76E7A
void __cdecl operator delete[](void *p, size_t a2, const char *a3, int a4)
{
  free_alloc_internal(p);
};

// Line 82: range 000000000CB76E7B-000000000CB76EA4
void __cdecl operator delete(void *p, size_t a2, const char *a3, const char *a4, int a5)
{
  free_alloc_internal(p);
};

// Line 85: range 000000000CB76EA5-000000000CB76ED4
void *__cdecl malloc_internal(size_t size, size_t align, AllocateOptions allocateOptions, const char *file, int line)
{
  return memalign(align, size);
};

// Line 90: range 000000000CB76ED5-000000000CB76F3C
void *__cdecl calloc_internal(
        size_t count,
        size_t size,
        size_t align,
        AllocateOptions allocateOptions,
        const char *file,
        int line)
{
  void *ptr; // [rsp+38h] [rbp-8h]

  ptr = memalign(align, count * size);
  if ( ptr )
    memset(ptr, 0, count * size);
  return ptr;
};

// Line 98: range 000000000CB76F3D-000000000CB76F70
void *__cdecl realloc_internal(
        void *ptr,
        size_t size,
        size_t align,
        AllocateOptions allocateOptions,
        const char *file,
        int line)
{
  return realloc(ptr, size);
};

// Line 103: range 000000000CB76F71-000000000CB76F8B
void __cdecl free_alloc_internal(void *ptr)
{
  free(ptr);
};
