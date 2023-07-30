// File: /home/date/jenkins/jenkins2_server_code/workspace/hk4e_ext/protobuf_3_4_1/include/google/protobuf/stubs/scoped_ptr.h

// Line 177: range 000000000C0CC44A-000000000C0CC4BF
google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> *__fastcall google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,google::protobuf::MapPair<unsigned int,unsigned int> const*>>::operator[](
        const google::protobuf::internal::scoped_array<google::protobuf::internal::SortItem<unsigned int,const google::protobuf::MapPair<unsigned int,unsigned int>*> > *const this,
        std::ptrdiff_t i)
{
  if ( i < 0 )
  {
    __asan_handle_no_return(this);
    __assert_fail(
      "i >= 0",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/"
      "stubs/scoped_ptr.h",
      0xB2u,
      "C& google::protobuf::internal::scoped_array<C>::operator[](std::ptrdiff_t) const [with C = google::protobuf::inter"
      "nal::SortItem<unsigned int, const google::protobuf::MapPair<unsigned int, unsigned int>*>; std::ptrdiff_t = long int]");
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load8();
LABEL_7:
    __asan_handle_no_return(this);
    __assert_fail(
      "array_ != __null",
      "/home/date/jenkins/jenkins2_server_code/workspace/hk4e_3.2_dev/../hk4e_ext/protobuf_3_4_1/include/google/protobuf/"
      "stubs/scoped_ptr.h",
      0xB3u,
      "C& google::protobuf::internal::scoped_array<C>::operator[](std::ptrdiff_t) const [with C = google::protobuf::inter"
      "nal::SortItem<unsigned int, const google::protobuf::MapPair<unsigned int, unsigned int>*>; std::ptrdiff_t = long int]");
  }
  if ( !this->array_ )
    goto LABEL_7;
  return &this->array_[i];
};
