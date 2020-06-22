#ifndef _MODBUS_STATIC_H
#define _MODBUS_STATIC_H

#include "modbus-private.h"
#include "modbus-rtu-private.h"
#include "modbus-tcp-private.h"

static modbus_t _sys_mb = {0};
static modbus_rtu_t _sys_mb_rtu = {0};
static modbus_tcp_t _sys_mb_tcp = {0};

#endif