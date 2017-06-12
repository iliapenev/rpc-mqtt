/*
 * Copyright (c) 2014-2016 Cesanta Software Limited
 * All rights reserved
 */

#ifndef CS_FW_SRC_MGOS_MG_RPC_CHANNEL_MQTT_H_
#define CS_FW_SRC_MGOS_MG_RPC_CHANNEL_MQTT_H_

#include <stdbool.h>

#include "mg_rpc_channel.h"

#include "common/mg_str.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct mg_rpc_channel *mg_rpc_channel_mqtt(const struct mg_str device_id);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* CS_FW_SRC_MGOS_MG_RPC_CHANNEL_MQTT_H_ */
