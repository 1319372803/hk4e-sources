// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/impl/verb.ipp

// Line 24: range 0000000019B836FB-0000000019B8391A
boost::beast::string_view __fastcall boost::beast::http::to_string(boost::beast::http::verb v)
{
  __int64 v1; // rbx
  boost::beast::string_view result; // rax
  _QWORD v3[3]; // [rsp-18h] [rbp-18h] BYREF

  switch ( v )
  {
    case unknown_2:
      result.ptr_ = "<unknown>";
      result.len_ = 9LL;
      break;
    case delete_:
      result.ptr_ = "DELETE";
      result.len_ = 6LL;
      break;
    case get:
      result.ptr_ = (const char *)&off_1B5D7DA0;
      result.len_ = 3LL;
      break;
    case head:
      result.ptr_ = "HEAD";
      result.len_ = 4LL;
      break;
    case post:
      result.ptr_ = "POST";
      result.len_ = 4LL;
      break;
    case put:
      result.ptr_ = (const char *)&off_1B5D7E60;
      result.len_ = 3LL;
      break;
    case connect:
      result.ptr_ = "CONNECT";
      result.len_ = 7LL;
      break;
    case options:
      result.ptr_ = "OPTIONS";
      result.len_ = 7LL;
      break;
    case trace:
      result.ptr_ = "TRACE";
      result.len_ = 5LL;
      break;
    case copy:
      result.ptr_ = "COPY";
      result.len_ = 4LL;
      break;
    case lock:
      result.ptr_ = "LOCK";
      result.len_ = 4LL;
      break;
    case mkcol:
      result.ptr_ = "MKCOL";
      result.len_ = 5LL;
      break;
    case move:
      result.ptr_ = "MOVE";
      result.len_ = 4LL;
      break;
    case propfind:
      result.ptr_ = "PROPFIND";
      result.len_ = 8LL;
      break;
    case proppatch:
      result.ptr_ = "PROPPATCH";
      result.len_ = 9LL;
      break;
    case search:
      result.ptr_ = "SEARCH";
      result.len_ = 6LL;
      break;
    case unlock:
      result.ptr_ = "UNLOCK";
      result.len_ = 6LL;
      break;
    case bind:
      result.ptr_ = "BIND";
      result.len_ = 4LL;
      break;
    case rebind:
      result.ptr_ = "REBIND";
      result.len_ = 6LL;
      break;
    case unbind:
      result.ptr_ = "UNBIND";
      result.len_ = 6LL;
      break;
    case acl:
      result.ptr_ = (const char *)&off_1B5D8220;
      result.len_ = 3LL;
      break;
    case report:
      result.ptr_ = "REPORT";
      result.len_ = 6LL;
      break;
    case mkactivity:
      result.ptr_ = "MKACTIVITY";
      result.len_ = 10LL;
      break;
    case checkout:
      result.ptr_ = "CHECKOUT";
      result.len_ = 8LL;
      break;
    case merge:
      result.ptr_ = "MERGE";
      result.len_ = 5LL;
      break;
    case msearch:
      result.ptr_ = "M-SEARCH";
      result.len_ = 8LL;
      break;
    case notify:
      result.ptr_ = "NOTIFY";
      result.len_ = 6LL;
      break;
    case subscribe:
      result.ptr_ = "SUBSCRIBE";
      result.len_ = 9LL;
      break;
    case unsubscribe:
      result.ptr_ = "UNSUBSCRIBE";
      result.len_ = 11LL;
      break;
    case patch:
      result.ptr_ = "PATCH";
      result.len_ = 5LL;
      break;
    case purge:
      result.ptr_ = "PURGE";
      result.len_ = 5LL;
      break;
    case mkcalendar:
      result.ptr_ = "MKCALENDAR";
      result.len_ = 10LL;
      break;
    case link:
      result.ptr_ = "LINK";
      result.len_ = 4LL;
      break;
    case unlink:
      result.ptr_ = "UNLINK";
      result.len_ = 6LL;
      break;
    default:
      v3[2] = v1;
      std::invalid_argument::invalid_argument((std::invalid_argument *)v3, "unknown verb");
      __asan_handle_no_return(v3);
      boost::exception_detail::throw_exception_<std::invalid_argument>(
        (const std::invalid_argument *)v3,
        "boost::beast::string_view boost::beast::http::to_string(boost::beast::http::verb)",
        "/data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/../hk4e_ext/boost/../boost_1_70_0d/boost/beast/http/impl/verb.ipp",
        70);
      return result;
  }
  return result;
};
