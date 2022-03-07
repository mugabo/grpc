/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/admin/v3/clusters.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "envoy/admin/v3/clusters.upb.h"
#include "envoy/admin/v3/metrics.upb.h"
#include "envoy/config/cluster/v3/circuit_breaker.upb.h"
#include "envoy/config/core/v3/address.upb.h"
#include "envoy/config/core/v3/base.upb.h"
#include "envoy/config/core/v3/health_check.upb.h"
#include "envoy/type/v3/percent.upb.h"
#include "udpa/annotations/status.upb.h"
#include "udpa/annotations/versioning.upb.h"

#include "upb/port_def.inc"

static const upb_MiniTable_Sub envoy_admin_v3_Clusters_submsgs[1] = {
  {.submsg = &envoy_admin_v3_ClusterStatus_msginit},
};

static const upb_MiniTable_Field envoy_admin_v3_Clusters__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_admin_v3_Clusters_msginit = {
  &envoy_admin_v3_Clusters_submsgs[0],
  &envoy_admin_v3_Clusters__fields[0],
  UPB_SIZE(8, 8), 1, upb_ExtMode_NonExtendable, 1, 255, 0,
};

static const upb_MiniTable_Sub envoy_admin_v3_ClusterStatus_submsgs[3] = {
  {.submsg = &envoy_admin_v3_HostStatus_msginit},
  {.submsg = &envoy_config_cluster_v3_CircuitBreakers_msginit},
  {.submsg = &envoy_type_v3_Percent_msginit},
};

static const upb_MiniTable_Field envoy_admin_v3_ClusterStatus__fields[7] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {2, UPB_SIZE(1, 1), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {3, UPB_SIZE(20, 40), 1, 2, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {4, UPB_SIZE(32, 64), 0, 0, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {5, UPB_SIZE(24, 48), 2, 2, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {6, UPB_SIZE(28, 56), 3, 1, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {7, UPB_SIZE(12, 24), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_admin_v3_ClusterStatus_msginit = {
  &envoy_admin_v3_ClusterStatus_submsgs[0],
  &envoy_admin_v3_ClusterStatus__fields[0],
  UPB_SIZE(40, 80), 7, upb_ExtMode_NonExtendable, 7, 255, 0,
};

static const upb_MiniTable_Sub envoy_admin_v3_HostStatus_submsgs[5] = {
  {.submsg = &envoy_admin_v3_HostHealthStatus_msginit},
  {.submsg = &envoy_admin_v3_SimpleMetric_msginit},
  {.submsg = &envoy_config_core_v3_Address_msginit},
  {.submsg = &envoy_config_core_v3_Locality_msginit},
  {.submsg = &envoy_type_v3_Percent_msginit},
};

static const upb_MiniTable_Field envoy_admin_v3_HostStatus__fields[9] = {
  {1, UPB_SIZE(20, 32), 1, 2, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {2, UPB_SIZE(40, 72), 0, 1, 11, kUpb_FieldMode_Array | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {3, UPB_SIZE(24, 40), 2, 0, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {4, UPB_SIZE(28, 48), 3, 4, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {5, UPB_SIZE(4, 4), 0, 0, 13, kUpb_FieldMode_Scalar | (upb_FieldRep_4Byte << upb_FieldRep_Shift)},
  {6, UPB_SIZE(12, 16), 0, 0, 9, kUpb_FieldMode_Scalar | (upb_FieldRep_StringView << upb_FieldRep_Shift)},
  {7, UPB_SIZE(8, 8), 0, 0, 13, kUpb_FieldMode_Scalar | (upb_FieldRep_4Byte << upb_FieldRep_Shift)},
  {8, UPB_SIZE(32, 56), 4, 4, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
  {9, UPB_SIZE(36, 64), 5, 3, 11, kUpb_FieldMode_Scalar | (upb_FieldRep_Pointer << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_admin_v3_HostStatus_msginit = {
  &envoy_admin_v3_HostStatus_submsgs[0],
  &envoy_admin_v3_HostStatus__fields[0],
  UPB_SIZE(48, 80), 9, upb_ExtMode_NonExtendable, 9, 255, 0,
};

static const upb_MiniTable_Field envoy_admin_v3_HostHealthStatus__fields[8] = {
  {1, UPB_SIZE(4, 4), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {2, UPB_SIZE(5, 5), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {3, UPB_SIZE(0, 0), 0, 0, 5, kUpb_FieldMode_Scalar | (upb_FieldRep_4Byte << upb_FieldRep_Shift)},
  {4, UPB_SIZE(6, 6), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {5, UPB_SIZE(7, 7), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {6, UPB_SIZE(8, 8), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {7, UPB_SIZE(9, 9), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
  {8, UPB_SIZE(10, 10), 0, 0, 8, kUpb_FieldMode_Scalar | (upb_FieldRep_1Byte << upb_FieldRep_Shift)},
};

const upb_MiniTable envoy_admin_v3_HostHealthStatus_msginit = {
  NULL,
  &envoy_admin_v3_HostHealthStatus__fields[0],
  UPB_SIZE(16, 16), 8, upb_ExtMode_NonExtendable, 8, 255, 0,
};

static const upb_MiniTable *messages_layout[4] = {
  &envoy_admin_v3_Clusters_msginit,
  &envoy_admin_v3_ClusterStatus_msginit,
  &envoy_admin_v3_HostStatus_msginit,
  &envoy_admin_v3_HostHealthStatus_msginit,
};

const upb_MiniTable_File envoy_admin_v3_clusters_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  4,
  0,
  0,
};

#include "upb/port_undef.inc"
