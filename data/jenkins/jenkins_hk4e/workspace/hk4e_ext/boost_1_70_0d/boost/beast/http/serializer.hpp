// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/serializer.hpp

// Line 56: range 0000000019D0987E-0000000019D09E03
void __fastcall boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::~serializer(
        boost::beast::http::serializer<true,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const this)
{
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *p_pv; // rdx
  unsigned __int8 *p_i; // rdi
  unsigned __int8 *v4; // rdi
  unsigned __int8 *v5; // rdi
  boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy f; // [rsp+8h] [rbp-10h] BYREF

  p_pv = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&this->pv_;
  p_i = &this->pv_.i_;
  if ( *(char *)(((unsigned __int64)p_i >> 3) + 0x7FFF8000) < 0 )
  {
    __asan_report_load1(p_i);
LABEL_4:
    __asan_handle_no_return(p_i);
    __assert_fail(
      "i < N",
      "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail/mp_with_index.hpp",
      0x17Du,
      "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(std::size_t, F"
      "&&) [with long unsigned int N = 9; F = boost::beast::detail::variant<boost::beast::buffers_prefix_view<const boost"
      "::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer"
      ", boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std::allocator<char> >::w"
      "riter::field_range, boost::beast::http::chunk_crlf> > >&>, boost::beast::buffers_prefix_view<const boost::beast::b"
      "uffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boos"
      "t::asio::const_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::basic_fields<std:"
      ":allocator<char> >::writer::field_range, boost::beast::http::chunk_crlf> >, boost::asio::const_buffer> >&>, boost:"
      ":beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::asio::const_buffer>&>, boost::beast::buffers"
      "_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<b"
      "oost::beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boo"
      "st::beast::http::basic_fields<std::allocator<char> >::writer::field_range, boost::beast::http::chunk_crlf> >, boos"
      "t::beast::http::detail::chunk_size, boost::asio::const_buffer, boost::beast::http::chunk_crlf, boost::asio::const_"
      "buffer, boost::beast::http::chunk_crlf> >&>, boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<"
      "boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size, boost::asio::const_buffer, boost::beast::ht"
      "tp::chunk_crlf, boost::asio::const_buffer, boost::beast::http::chunk_crlf> >&>, boost::beast::buffers_prefix_view<"
      "const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size, boost::a"
      "sio::const_buffer, boost::beast::http::chunk_crlf, boost::asio::const_buffer, boost::beast::http::chunk_crlf, boos"
      "t::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::chunk_crlf> >&>, boost::beast::buffers_prefi"
      "x_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::"
      "beast::buffers_cat_view<boost::asio::const_buffer, boost::asio::const_buffer, boost::asio::const_buffer, boost::be"
      "ast::http::basic_fields<std::allocator<char> >::writer::field_range, boost::beast::http::chunk_crlf> >, boost::bea"
      "st::http::detail::chunk_size, boost::asio::const_buffer, boost::beast::http::chunk_crlf, boost::asio::const_buffer"
      ", boost::beast::http::chunk_crlf, boost::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::chunk_"
      "crlf> >&>, boost::beast::buffers_prefix_view<const boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boo"
      "st::asio::const_buffer, boost::asio::const_buffer, boost::beast::http::chunk_crlf> >&> >::destroy; decltype (declv"
      "al<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11::mp_size_t<0> = std::integral_constant<long un"
      "signed int, 0>; std::size_t = long unsigned int]");
  }
  switch ( this->pv_.i_ )
  {
    case 0u:
    case 3u:
      goto LABEL_7;
    case 1u:
      f.self = p_pv + 2;
      if ( *(char *)(((unsigned __int64)&p_pv[2].i_ >> 3) + 0x7FFF8000) < 0 )
      {
        __asan_report_load1(&p_pv[2].i_);
LABEL_10:
        f.self = p_pv + 2;
        if ( *(char *)(((unsigned __int64)&p_pv[3].i_ >> 3) + 0x7FFF8000) < 0 )
        {
          __asan_report_load1(&p_pv[3].i_);
LABEL_13:
          f.self = p_pv + 2;
          if ( *(char *)(((unsigned __int64)&p_pv[3].i_ >> 3) + 0x7FFF8000) < 0 )
          {
            __asan_report_load1(&p_pv[3].i_);
LABEL_16:
            f.self = p_pv + 2;
            if ( *(char *)(((unsigned __int64)&p_pv[2].i_ >> 3) + 0x7FFF8000) < 0 )
            {
              __asan_report_load1(&p_pv[2].i_);
LABEL_19:
              v5 = &p_pv[2].i_;
              if ( *(char *)(((unsigned __int64)&p_pv[2].i_ >> 3) + 0x7FFF8000) < 0 )
              {
                __asan_report_load1(v5);
LABEL_23:
                f.self = p_pv + 2;
                if ( *(char *)(((unsigned __int64)&p_pv[3].i_ >> 3) + 0x7FFF8000) < 0 )
                {
                  __asan_report_load1(&p_pv[3].i_);
LABEL_26:
                  f.self = p_pv + 2;
                  v4 = &p_pv[2].i_;
                  if ( *(char *)(((unsigned __int64)&p_pv[2].i_ >> 3) + 0x7FFF8000) < 0 )
                  {
                    __asan_report_load1(v4);
                    goto LABEL_29;
                  }
                  boost::mp11::mp_with_index<5ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                    p_pv[2].i_,
                    (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&f);
                }
                else
                {
                  boost::mp11::mp_with_index<11ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                    p_pv[3].i_,
                    (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&f);
                }
              }
              else if ( p_pv[2].i_ > 9u )
              {
                __asan_handle_no_return(v5);
                __assert_fail(
                  "i < N",
                  "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/mp11/detail"
                  "/mp_with_index.hpp",
                  0x17Du,
                  "constexpr decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) boost::mp11::mp_with_index(st"
                  "d::size_t, F&&) [with long unsigned int N = 10; F = boost::beast::detail::variant<const boost::asio::c"
                  "onst_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::c"
                  "onst_buffer*, const boost::asio::const_buffer*, const boost::asio::const_buffer*, const boost::asio::c"
                  "onst_buffer*, const boost::asio::const_buffer*, boost::beast::detail::buffers_cat_view_iterator_base::"
                  "past_end>::destroy; decltype (declval<F>()(declval<boost::mp11::mp_size_t<0> >())) = void; boost::mp11"
                  "::mp_size_t<0> = std::integral_constant<long unsigned int, 0>; std::size_t = long unsigned int]");
              }
            }
            else
            {
              boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
                p_pv[2].i_,
                (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&f);
            }
          }
          else
          {
            boost::mp11::mp_with_index<8ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
              p_pv[3].i_,
              (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&f);
          }
        }
        else
        {
          boost::mp11::mp_with_index<4ul,boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
            p_pv[3].i_,
            (boost::beast::detail::variant<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf>::const_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy *)&f);
        }
      }
      else
      {
        boost::mp11::mp_with_index<7ul,boost::beast::detail::variant<boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::asio::const_buffer const*,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_iterator,boost::asio::const_buffer const*,boost::beast::detail::buffers_cat_view_iterator_base::past_end>::destroy>(
          p_pv[2].i_,
          &f);
      }
LABEL_7:
      f.self = (boost::beast::detail::variant<const boost::asio::const_buffer*,const boost::asio::const_buffer*,const boost::asio::const_buffer*,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_iterator,const boost::asio::const_buffer*,boost::beast::detail::buffers_cat_view_iterator_base::past_end> *)&this->v_;
      v4 = &this->v_.i_;
      if ( *(char *)(((unsigned __int64)&this->v_.i_ >> 3) + 0x7FFF8000) >= 0 )
      {
        boost::mp11::mp_with_index<9ul,boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::asio::const_buffer>>,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char>>::writer::field_range,boost::beast::http::chunk_crlf>>,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf>>>::destroy>(
          this->v_.i_,
          (boost::beast::detail::variant<boost::beast::buffers_suffix<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> > >,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::asio::const_buffer> >,boost::beast::buffers_suffix<boost::asio::const_buffer>,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::beast::detail::buffers_ref<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::basic_fields<std::allocator<char> >::writer::field_range,boost::beast::http::chunk_crlf> >,boost::beast::http::detail::chunk_size,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::beast::http::chunk_crlf,boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> >,boost::beast::buffers_suffix<boost::beast::buffers_cat_view<boost::asio::const_buffer,boost::asio::const_buffer,boost::beast::http::chunk_crlf> > >::destroy *)&f);
        return;
      }
LABEL_29:
      __asan_report_load1(v4);
      boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char>>,boost::beast::http::basic_fields<std::allocator<char>>>::~serializer((boost::beast::http::serializer<false,boost::beast::http::basic_string_body<char,std::char_traits<char>,std::allocator<char> >,boost::beast::http::basic_fields<std::allocator<char> > > *const)v4);
      return;
    case 2u:
      goto LABEL_10;
    case 4u:
      goto LABEL_13;
    case 5u:
      goto LABEL_16;
    case 6u:
      goto LABEL_19;
    case 7u:
      goto LABEL_23;
    case 8u:
      goto LABEL_26;
    default:
      goto LABEL_4;
  }
};
