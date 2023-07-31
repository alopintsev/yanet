#include "config.release.h"

#undef YANET_CONFIG_ACL_NETWORK_LPM4_EXTENDED_CHUNKS_SIZE
#define YANET_CONFIG_ACL_NETWORK_LPM4_EXTENDED_CHUNKS_SIZE (16 * 1024)

#undef YANET_CONFIG_ACL_NETWORK_DESTINATION_HT_SIZE
#define YANET_CONFIG_ACL_NETWORK_DESTINATION_HT_SIZE (16 * 1024 * 1024)

#undef YANET_CONFIG_ACL_NETWORK_SOURCE_LPM6_CHUNKS_SIZE
#define YANET_CONFIG_ACL_NETWORK_SOURCE_LPM6_CHUNKS_SIZE (20 * 1024)

#undef YANET_CONFIG_ACL_NETWORK_DESTINATION_LPM6_CHUNKS_SIZE
#define YANET_CONFIG_ACL_NETWORK_DESTINATION_LPM6_CHUNKS_SIZE (20 * 1024)

#undef YANET_CONFIG_ACL_NETWORK_TABLE_SIZE
#define YANET_CONFIG_ACL_NETWORK_TABLE_SIZE (256 * 1024 * 1024)

#undef YANET_CONFIG_ACL_TRANSPORT_LAYERS_SIZE
#define YANET_CONFIG_ACL_TRANSPORT_LAYERS_SIZE (2048)

#undef YANET_CONFIG_ACL_TRANSPORT_HT_SIZE
#define YANET_CONFIG_ACL_TRANSPORT_HT_SIZE (128 * 1024 * 1024)

#undef YANET_CONFIG_ACL_TOTAL_HT_SIZE
#define YANET_CONFIG_ACL_TOTAL_HT_SIZE (256 * 1024 * 1024)

#undef YANET_CONFIG_ACL_VALUES_SIZE
#define YANET_CONFIG_ACL_VALUES_SIZE (8 * 1024 * 1024)

#undef YANET_CONFIG_ACL_STATES4_HT_SIZE
#define YANET_CONFIG_ACL_STATES4_HT_SIZE (4 * 1024 * 1024)

#undef YANET_CONFIG_ACL_STATES6_HT_SIZE
#define YANET_CONFIG_ACL_STATES6_HT_SIZE (64 * 1024 * 1024)

#undef YANET_CONFIG_NAT64STATEFUL_HT_SIZE
#define YANET_CONFIG_NAT64STATEFUL_HT_SIZE (64 * 1024)
