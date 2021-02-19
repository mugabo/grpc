/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/extensions/transport_sockets/tls/v3/secret.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/extensions/transport_sockets/tls/v3/secret.upbdefs.h"

extern upb_def_init envoy_config_core_v3_base_proto_upbdefinit;
extern upb_def_init envoy_config_core_v3_config_source_proto_upbdefinit;
extern upb_def_init envoy_extensions_transport_sockets_tls_v3_common_proto_upbdefinit;
extern upb_def_init udpa_core_v1_resource_locator_proto_upbdefinit;
extern upb_def_init udpa_annotations_migrate_proto_upbdefinit;
extern upb_def_init udpa_annotations_sensitive_proto_upbdefinit;
extern upb_def_init udpa_annotations_status_proto_upbdefinit;
extern upb_def_init udpa_annotations_versioning_proto_upbdefinit;
extern const upb_msglayout envoy_extensions_transport_sockets_tls_v3_GenericSecret_msginit;
extern const upb_msglayout envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_msginit;
extern const upb_msglayout envoy_extensions_transport_sockets_tls_v3_Secret_msginit;

static const upb_msglayout *layouts[3] = {
  &envoy_extensions_transport_sockets_tls_v3_GenericSecret_msginit,
  &envoy_extensions_transport_sockets_tls_v3_SdsSecretConfig_msginit,
  &envoy_extensions_transport_sockets_tls_v3_Secret_msginit,
};

static const char descriptor[1400] = {'\n', '6', 'e', 'n', 'v', 'o', 'y', '/', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', '/', 't', 'r', 'a', 'n', 's', 'p', 
'o', 'r', 't', '_', 's', 'o', 'c', 'k', 'e', 't', 's', '/', 't', 'l', 's', '/', 'v', '3', '/', 's', 'e', 'c', 'r', 'e', 't', 
'.', 'p', 'r', 'o', 't', 'o', '\022', ')', 'e', 'n', 'v', 'o', 'y', '.', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', '.', 
't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', '_', 's', 'o', 'c', 'k', 'e', 't', 's', '.', 't', 'l', 's', '.', 'v', '3', '\032', 
'\037', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 'e', '/', 'v', '3', '/', 'b', 'a', 's', 
'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '(', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 
'e', '/', 'v', '3', '/', 'c', 'o', 'n', 'f', 'i', 'g', '_', 's', 'o', 'u', 'r', 'c', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', 
'6', 'e', 'n', 'v', 'o', 'y', '/', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', '/', 't', 'r', 'a', 'n', 's', 'p', 'o', 
'r', 't', '_', 's', 'o', 'c', 'k', 'e', 't', 's', '/', 't', 'l', 's', '/', 'v', '3', '/', 'c', 'o', 'm', 'm', 'o', 'n', '.', 
'p', 'r', 'o', 't', 'o', '\032', '#', 'u', 'd', 'p', 'a', '/', 'c', 'o', 'r', 'e', '/', 'v', '1', '/', 'r', 'e', 's', 'o', 'u', 
'r', 'c', 'e', '_', 'l', 'o', 'c', 'a', 't', 'o', 'r', '.', 'p', 'r', 'o', 't', 'o', '\032', '\036', 'u', 'd', 'p', 'a', '/', 'a', 
'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'm', 'i', 'g', 'r', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', 
' ', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 'e', 'n', 's', 'i', 't', 'i', 
'v', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 
's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '!', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 
't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', 'e', 'r', 's', 'i', 'o', 'n', 'i', 'n', 'g', '.', 'p', 'r', 'o', 't', 'o', '\"', 
'y', '\n', '\r', 'G', 'e', 'n', 'e', 'r', 'i', 'c', 'S', 'e', 'c', 'r', 'e', 't', '\022', '@', '\n', '\006', 's', 'e', 'c', 'r', 'e', 
't', '\030', '\001', ' ', '\001', '(', '\013', '2', ' ', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 
'r', 'e', '.', 'v', '3', '.', 'D', 'a', 't', 'a', 'S', 'o', 'u', 'r', 'c', 'e', 'B', '\006', '\270', '\267', '\213', '\244', '\002', '\001', 'R', 
'\006', 's', 'e', 'c', 'r', 'e', 't', ':', '&', '\232', '\305', '\210', '\036', '!', '\n', '\037', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', 
'.', 'v', '2', '.', 'a', 'u', 't', 'h', '.', 'G', 'e', 'n', 'e', 'r', 'i', 'c', 'S', 'e', 'c', 'r', 'e', 't', '\"', '\223', '\002', 
'\n', '\017', 'S', 'd', 's', 'S', 'e', 'c', 'r', 'e', 't', 'C', 'o', 'n', 'f', 'i', 'g', '\022', '*', '\n', '\004', 'n', 'a', 'm', 'e', 
'\030', '\001', ' ', '\001', '(', '\t', 'B', '\026', '\362', '\230', '\376', '\217', '\005', '\020', '\022', '\016', 'n', 'a', 'm', 'e', '_', 's', 'p', 'e', 'c', 
'i', 'f', 'i', 'e', 'r', 'R', '\004', 'n', 'a', 'm', 'e', '\022', 'g', '\n', '\024', 's', 'd', 's', '_', 'r', 'e', 's', 'o', 'u', 'r', 
'c', 'e', '_', 'l', 'o', 'c', 'a', 't', 'o', 'r', '\030', '\003', ' ', '\001', '(', '\013', '2', '\035', '.', 'u', 'd', 'p', 'a', '.', 'c', 
'o', 'r', 'e', '.', 'v', '1', '.', 'R', 'e', 's', 'o', 'u', 'r', 'c', 'e', 'L', 'o', 'c', 'a', 't', 'o', 'r', 'B', '\026', '\362', 
'\230', '\376', '\217', '\005', '\020', '\022', '\016', 'n', 'a', 'm', 'e', '_', 's', 'p', 'e', 'c', 'i', 'f', 'i', 'e', 'r', 'R', '\022', 's', 'd', 
's', 'R', 'e', 's', 'o', 'u', 'r', 'c', 'e', 'L', 'o', 'c', 'a', 't', 'o', 'r', '\022', 'A', '\n', '\n', 's', 'd', 's', '_', 'c', 
'o', 'n', 'f', 'i', 'g', '\030', '\002', ' ', '\001', '(', '\013', '2', '\"', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 
'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'C', 'o', 'n', 'f', 'i', 'g', 'S', 'o', 'u', 'r', 'c', 'e', 'R', '\t', 's', 
'd', 's', 'C', 'o', 'n', 'f', 'i', 'g', ':', '(', '\232', '\305', '\210', '\036', '#', '\n', '!', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 
'i', '.', 'v', '2', '.', 'a', 'u', 't', 'h', '.', 'S', 'd', 's', 'S', 'e', 'c', 'r', 'e', 't', 'C', 'o', 'n', 'f', 'i', 'g', 
'\"', '\373', '\003', '\n', '\006', 'S', 'e', 'c', 'r', 'e', 't', '\022', '\022', '\n', '\004', 'n', 'a', 'm', 'e', '\030', '\001', ' ', '\001', '(', '\t', 
'R', '\004', 'n', 'a', 'm', 'e', '\022', 'd', '\n', '\017', 't', 'l', 's', '_', 'c', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 
'\030', '\002', ' ', '\001', '(', '\013', '2', '9', '.', 'e', 'n', 'v', 'o', 'y', '.', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', 
'.', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', '_', 's', 'o', 'c', 'k', 'e', 't', 's', '.', 't', 'l', 's', '.', 'v', '3', 
'.', 'T', 'l', 's', 'C', 'e', 'r', 't', 'i', 'f', 'i', 'c', 'a', 't', 'e', 'H', '\000', 'R', '\016', 't', 'l', 's', 'C', 'e', 'r', 
't', 'i', 'f', 'i', 'c', 'a', 't', 'e', '\022', 'q', '\n', '\023', 's', 'e', 's', 's', 'i', 'o', 'n', '_', 't', 'i', 'c', 'k', 'e', 
't', '_', 'k', 'e', 'y', 's', '\030', '\003', ' ', '\001', '(', '\013', '2', '?', '.', 'e', 'n', 'v', 'o', 'y', '.', 'e', 'x', 't', 'e', 
'n', 's', 'i', 'o', 'n', 's', '.', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', '_', 's', 'o', 'c', 'k', 'e', 't', 's', '.', 
't', 'l', 's', '.', 'v', '3', '.', 'T', 'l', 's', 'S', 'e', 's', 's', 'i', 'o', 'n', 'T', 'i', 'c', 'k', 'e', 't', 'K', 'e', 
'y', 's', 'H', '\000', 'R', '\021', 's', 'e', 's', 's', 'i', 'o', 'n', 'T', 'i', 'c', 'k', 'e', 't', 'K', 'e', 'y', 's', '\022', 'x', 
'\n', '\022', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'i', 'o', 'n', '_', 'c', 'o', 'n', 't', 'e', 'x', 't', '\030', '\004', ' ', '\001', '(', 
'\013', '2', 'G', '.', 'e', 'n', 'v', 'o', 'y', '.', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', '.', 't', 'r', 'a', 'n', 
's', 'p', 'o', 'r', 't', '_', 's', 'o', 'c', 'k', 'e', 't', 's', '.', 't', 'l', 's', '.', 'v', '3', '.', 'C', 'e', 'r', 't', 
'i', 'f', 'i', 'c', 'a', 't', 'e', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'i', 'o', 'n', 'C', 'o', 'n', 't', 'e', 'x', 't', 'H', 
'\000', 'R', '\021', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'i', 'o', 'n', 'C', 'o', 'n', 't', 'e', 'x', 't', '\022', 'a', '\n', '\016', 'g', 
'e', 'n', 'e', 'r', 'i', 'c', '_', 's', 'e', 'c', 'r', 'e', 't', '\030', '\005', ' ', '\001', '(', '\013', '2', '8', '.', 'e', 'n', 'v', 
'o', 'y', '.', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', '.', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', '_', 's', 
'o', 'c', 'k', 'e', 't', 's', '.', 't', 'l', 's', '.', 'v', '3', '.', 'G', 'e', 'n', 'e', 'r', 'i', 'c', 'S', 'e', 'c', 'r', 
'e', 't', 'H', '\000', 'R', '\r', 'g', 'e', 'n', 'e', 'r', 'i', 'c', 'S', 'e', 'c', 'r', 'e', 't', ':', '\037', '\232', '\305', '\210', '\036', 
'\032', '\n', '\030', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'a', 'u', 't', 'h', '.', 'S', 'e', 'c', 'r', 
'e', 't', 'B', '\006', '\n', '\004', 't', 'y', 'p', 'e', 'B', 'P', '\n', '7', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 
'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', '.', 't', 'r', 'a', 'n', 's', 
'p', 'o', 'r', 't', '_', 's', 'o', 'c', 'k', 'e', 't', 's', '.', 't', 'l', 's', '.', 'v', '3', 'B', '\013', 'S', 'e', 'c', 'r', 
'e', 't', 'P', 'r', 'o', 't', 'o', 'P', '\001', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\002', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[9] = {
  &envoy_config_core_v3_base_proto_upbdefinit,
  &envoy_config_core_v3_config_source_proto_upbdefinit,
  &envoy_extensions_transport_sockets_tls_v3_common_proto_upbdefinit,
  &udpa_core_v1_resource_locator_proto_upbdefinit,
  &udpa_annotations_migrate_proto_upbdefinit,
  &udpa_annotations_sensitive_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  NULL
};

upb_def_init envoy_extensions_transport_sockets_tls_v3_secret_proto_upbdefinit = {
  deps,
  layouts,
  "envoy/extensions/transport_sockets/tls/v3/secret.proto",
  UPB_STRVIEW_INIT(descriptor, 1400)
};