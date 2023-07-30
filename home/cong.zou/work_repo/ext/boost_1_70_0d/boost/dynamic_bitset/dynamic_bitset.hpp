// File: /home/cong.zou/work_repo/ext/boost_1_70_0d/boost/dynamic_bitset/dynamic_bitset.hpp

// Line 694: range 000000001530D1A0-000000001530D24E
void __fastcall boost::dynamic_bitset<unsigned long,std::allocator<unsigned long>>::~dynamic_bitset(
        boost::dynamic_bitset<long unsigned int,std::allocator<long unsigned int> > *const this)
{
  std::_Vector_base<long unsigned int>::pointer M_start; // r8
  std::_Vector_base<long unsigned int>::pointer M_finish; // rax
  boost::dynamic_bitset<long unsigned int,std::allocator<long unsigned int> >::size_type v3; // rcx
  unsigned __int64 v4; // rax

  M_start = this->m_bits._M_impl._M_start;
  M_finish = this->m_bits._M_impl._M_finish;
  v3 = this->m_num_bits & 0x3F;
  if ( (this->m_num_bits & 0x3F) != 0 )
  {
    if ( M_start == M_finish )
      __assert_fail(
        "size() > 0 && num_blocks() > 0",
        "../boost/../boost_1_70_0d/boost/dynamic_bitset/dynamic_bitset.hpp",
        0x7DAu,
        "const Block& boost::dynamic_bitset<Block, Allocator>::m_highest_block() const [with Block = long unsigned int; A"
        "llocator = std::allocator<long unsigned int>]");
    if ( ((-1LL << v3) & *(M_finish - 1)) != 0 )
      goto LABEL_9;
  }
  v4 = M_finish - M_start;
  if ( v4 > this->m_bits._M_impl._M_end_of_storage - M_start || v4 != (v3 != 0) + (this->m_num_bits >> 6) )
LABEL_9:
    __assert_fail(
      "m_check_invariants()",
      "../boost/../boost_1_70_0d/boost/dynamic_bitset/dynamic_bitset.hpp",
      0x2B9u,
      "boost::dynamic_bitset<Block, Allocator>::~dynamic_bitset() [with Block = long unsigned int; Allocator = std::alloc"
      "ator<long unsigned int>]");
  if ( M_start )
    operator delete(this->m_bits._M_impl._M_start);
};
