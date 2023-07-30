// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_ext/boost_1_70_0d/boost/beast/http/impl/status.ipp

// Line 133: range 0000000019D03AD5-0000000019D03E72
boost::beast::string_view __fastcall boost::beast::http::obsolete_reason(boost::beast::http::status v)
{
  boost::beast::string_view result; // rax

  if ( (unsigned int)v <= unavailable_for_legal_reasons )
  {
    if ( (unsigned int)v >= continue_ )
    {
      switch ( v )
      {
        case continue_:
          result.ptr_ = "Continue";
          result.len_ = 8LL;
          break;
        case switching_protocols:
          result.ptr_ = "Switching Protocols";
          result.len_ = 19LL;
          break;
        case processing:
          result.ptr_ = "Processing";
          result.len_ = 10LL;
          break;
        case ok:
          result.ptr_ = "OK";
          result.len_ = 2LL;
          break;
        case created:
          result.ptr_ = "Created";
          result.len_ = 7LL;
          break;
        case accepted:
          result.ptr_ = "Accepted";
          result.len_ = 8LL;
          break;
        case non_authoritative_information:
          result.ptr_ = "Non-Authoritative Information";
          result.len_ = 29LL;
          break;
        case no_content:
          result.ptr_ = "No Content";
          result.len_ = 10LL;
          break;
        case reset_content:
          result.ptr_ = "Reset Content";
          result.len_ = 13LL;
          break;
        case partial_content:
          result.ptr_ = "Partial Content";
          result.len_ = 15LL;
          break;
        case multi_status:
          result.ptr_ = "Multi-Status";
          result.len_ = 12LL;
          break;
        case already_reported:
          result.ptr_ = "Already Reported";
          result.len_ = 16LL;
          break;
        case im_used:
          result.ptr_ = "IM Used";
          result.len_ = 7LL;
          break;
        case multiple_choices:
          result.ptr_ = "Multiple Choices";
          result.len_ = 16LL;
          break;
        case moved_permanently:
          result.ptr_ = "Moved Permanently";
          result.len_ = 17LL;
          break;
        case found:
          result.ptr_ = "Found";
          result.len_ = 5LL;
          break;
        case see_other:
          result.ptr_ = "See Other";
          result.len_ = 9LL;
          break;
        case not_modified:
          result.ptr_ = "Not Modified";
          result.len_ = 12LL;
          break;
        case use_proxy:
          result.ptr_ = "Use Proxy";
          result.len_ = 9LL;
          break;
        case temporary_redirect:
          result.ptr_ = "Temporary Redirect";
          result.len_ = 18LL;
          break;
        case permanent_redirect:
          result.ptr_ = "Permanent Redirect";
          result.len_ = 18LL;
          break;
        case bad_request:
          result.ptr_ = "Bad Request";
          result.len_ = 11LL;
          break;
        case unauthorized:
          result.ptr_ = "Unauthorized";
          result.len_ = 12LL;
          break;
        case payment_required:
          result.ptr_ = "Payment Required";
          result.len_ = 16LL;
          break;
        case forbidden:
          result.ptr_ = "Forbidden";
          result.len_ = 9LL;
          break;
        case not_found_1:
          result.ptr_ = "Not Found";
          result.len_ = 9LL;
          break;
        case method_not_allowed:
          result.ptr_ = "Method Not Allowed";
          result.len_ = 18LL;
          break;
        case not_acceptable:
          result.ptr_ = "Not Acceptable";
          result.len_ = 14LL;
          break;
        case proxy_authentication_required:
          result.ptr_ = "Proxy Authentication Required";
          result.len_ = 29LL;
          break;
        case request_timeout:
          result.ptr_ = "Request Timeout";
          result.len_ = 15LL;
          break;
        case conflict:
          result.ptr_ = "Conflict";
          result.len_ = 8LL;
          break;
        case gone:
          result.ptr_ = "Gone";
          result.len_ = 4LL;
          break;
        case length_required:
          result.ptr_ = "Length Required";
          result.len_ = 15LL;
          break;
        case precondition_failed:
          result.ptr_ = "Precondition Failed";
          result.len_ = 19LL;
          break;
        case payload_too_large:
          result.ptr_ = "Payload Too Large";
          result.len_ = 17LL;
          break;
        case uri_too_long:
          result.ptr_ = "URI Too Long";
          result.len_ = 12LL;
          break;
        case unsupported_media_type:
          result.ptr_ = "Unsupported Media Type";
          result.len_ = 22LL;
          break;
        case range_not_satisfiable:
          result.ptr_ = "Range Not Satisfiable";
          result.len_ = 21LL;
          break;
        case expectation_failed:
          result.ptr_ = "Expectation Failed";
          result.len_ = 18LL;
          break;
        case misdirected_request:
          result.ptr_ = "Misdirected Request";
          result.len_ = 19LL;
          break;
        case unprocessable_entity:
          result.ptr_ = "Unprocessable Entity";
          result.len_ = 20LL;
          break;
        case locked:
          result.ptr_ = "Locked";
          result.len_ = 6LL;
          break;
        case failed_dependency:
          result.ptr_ = "Failed Dependency";
          result.len_ = 17LL;
          break;
        case upgrade_required:
          result.ptr_ = "Upgrade Required";
          result.len_ = 16LL;
          break;
        case precondition_required:
          result.ptr_ = "Precondition Required";
          result.len_ = 21LL;
          break;
        case too_many_requests:
          result.ptr_ = "Too Many Requests";
          result.len_ = 17LL;
          break;
        case request_header_fields_too_large:
          result.ptr_ = "Request Header Fields Too Large";
          result.len_ = 31LL;
          break;
        case connection_closed_without_response:
          result.ptr_ = "Connection Closed Without Response";
          result.len_ = 34LL;
          break;
        case unavailable_for_legal_reasons:
          result.ptr_ = "Unavailable For Legal Reasons";
          result.len_ = 29LL;
          break;
        default:
          goto LABEL_69;
      }
      return result;
    }
LABEL_69:
    result.ptr_ = "<unknown-status>";
    result.len_ = 16LL;
    return result;
  }
  if ( (unsigned int)v > network_connect_timeout_error || (unsigned int)v < client_closed_request )
    goto LABEL_69;
  switch ( v )
  {
    case client_closed_request:
      result.ptr_ = "Client Closed Request";
      result.len_ = 21LL;
      break;
    case internal_server_error:
      result.ptr_ = "Internal Server Error";
      result.len_ = 21LL;
      break;
    case not_implemented:
      result.ptr_ = "Not Implemented";
      result.len_ = 15LL;
      break;
    case bad_gateway:
      result.ptr_ = "Bad Gateway";
      result.len_ = 11LL;
      break;
    case service_unavailable:
      result.ptr_ = "Service Unavailable";
      result.len_ = 19LL;
      break;
    case gateway_timeout:
      result.ptr_ = "Gateway Timeout";
      result.len_ = 15LL;
      break;
    case http_version_not_supported:
      result.ptr_ = "HTTP Version Not Supported";
      result.len_ = 26LL;
      break;
    case variant_also_negotiates:
      result.ptr_ = "Variant Also Negotiates";
      result.len_ = 23LL;
      break;
    case insufficient_storage:
      result.ptr_ = "Insufficient Storage";
      result.len_ = 20LL;
      break;
    case loop_detected:
      result.ptr_ = "Loop Detected";
      result.len_ = 13LL;
      break;
    case not_extended:
      result.ptr_ = "Not Extended";
      result.len_ = 12LL;
      break;
    case network_authentication_required:
      result.ptr_ = "Network Authentication Required";
      result.len_ = 31LL;
      break;
    case network_connect_timeout_error:
      result.ptr_ = "Network Connect Timeout Error";
      result.len_ = 29LL;
      break;
    default:
      goto LABEL_69;
  }
  return result;
};
