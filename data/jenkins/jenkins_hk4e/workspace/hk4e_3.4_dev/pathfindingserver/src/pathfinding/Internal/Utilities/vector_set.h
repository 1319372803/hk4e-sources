// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Utilities/vector_set.h

// Line 18: range 000000000CD5A88C-000000000CD5A8A6
void __cdecl vector_set<int,std::less<int>,stl_allocator<int,16>>::~vector_set(
        vector_set<int,std::less<int>,stl_allocator<int,16> > *const this)
{
  sorted_vector<int,std::less<int>,stl_allocator<int,16>>::~sorted_vector(&this->c);
};

// Line 37: range 000000000CDACA60-000000000CDACA8D
void __cdecl vector_set<int,std::less<int>,stl_allocator<int,16>>::vector_set(
        vector_set<int,std::less<int>,stl_allocator<int,16> > *const this,
        const std::less<int> *comp,
        const stl_allocator<int,16> *a)
{
  sorted_vector<int,std::less<int>,stl_allocator<int,16>>::sorted_vector(&this->c, comp, a);
};

// Line 62: range 000000000CE4D332-000000000CE4D34C
void __cdecl vector_set<int,std::less<int>,stl_allocator<int,16>>::sort_clear_duplicates(
        vector_set<int,std::less<int>,stl_allocator<int,16> > *const this)
{
  sorted_vector<int,std::less<int>,stl_allocator<int,16>>::sort_clear_duplicates(&this->c);
};

// Line 70: range 000000000CDBA8F2-000000000CDBA92B
void __cdecl vector_set<int,std::less<int>,stl_allocator<int,16>>::assign_clear_duplicates<int const*>(
        vector_set<int,std::less<int>,stl_allocator<int,16> > *const this,
        const int *first,
        const int *last)
{
  std::vector<int,stl_allocator<int,16>>::assign<int const*,void>(&this->c.c, first, last);
  vector_set<int,std::less<int>,stl_allocator<int,16>>::sort_clear_duplicates(this);
};

// Line 76: range 000000000CDC4954-000000000CDC496D
bool __cdecl vector_set<int,std::less<int>,stl_allocator<int,16>>::empty(
        const vector_set<int,std::less<int>,stl_allocator<int,16> > *const this)
{
  return sorted_vector<int,std::less<int>,stl_allocator<int,16>>::empty(&this->c);
};

// Line 80: range 000000000CDBAF4A-000000000CDBAF63
vector_set<int,std::less<int>,stl_allocator<int,16> >::iterator __cdecl vector_set<int,std::less<int>,stl_allocator<int,16>>::end(
        vector_set<int,std::less<int>,stl_allocator<int,16> > *const this)
{
  return sorted_vector<int,std::less<int>,stl_allocator<int,16>>::end(&this->c);
};

// Line 90: range 000000000CDC5E18-000000000CDC5E3C
std::pair<__gnu_cxx::__normal_iterator<int*,std::vector<int,stl_allocator<int,16> > >,bool> __cdecl vector_set<int,std::less<int>,stl_allocator<int,16>>::insert(
        vector_set<int,std::less<int>,stl_allocator<int,16> > *const this,
        const vector_set<int,std::less<int>,stl_allocator<int,16> >::value_type *x)
{
  return sorted_vector<int,std::less<int>,stl_allocator<int,16>>::insert_one(&this->c, x);
};

// Line 95: range 000000000CDC4C1A-000000000CDC4C34
void __cdecl vector_set<int,std::less<int>,stl_allocator<int,16>>::clear(
        vector_set<int,std::less<int>,stl_allocator<int,16> > *const this)
{
  sorted_vector<int,std::less<int>,stl_allocator<int,16>>::clear(&this->c);
};

// Line 100: range 000000000CDBAF24-000000000CDBAF48
vector_set<int,std::less<int>,stl_allocator<int,16> >::iterator __cdecl vector_set<int,std::less<int>,stl_allocator<int,16>>::find(
        vector_set<int,std::less<int>,stl_allocator<int,16> > *const this,
        const vector_set<int,std::less<int>,stl_allocator<int,16> >::key_type *x)
{
  return sorted_vector<int,std::less<int>,stl_allocator<int,16>>::find<int>(&this->c, x);
};

// Line 102: range 000000000CEA81C2-000000000CEA81E6
vector_set<int,std::less<int>,stl_allocator<int,16> >::size_type __cdecl vector_set<int,std::less<int>,stl_allocator<int,16>>::count(
        const vector_set<int,std::less<int>,stl_allocator<int,16> > *const this,
        const vector_set<int,std::less<int>,stl_allocator<int,16> >::key_type *x)
{
  return sorted_vector<int,std::less<int>,stl_allocator<int,16>>::count_one<int>(&this->c, x);
};
