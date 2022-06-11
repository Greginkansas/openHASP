/* MIT License - Copyright (c) 2022 Ben Suffolk, ben@vanilla.net
   For full license information read the LICENSE file in the project folder */

#ifndef HASP_ETHERNET_SPI_H
#define HASP_ETHERNET_SPI_H

#include "ArduinoJson.h"

void ethernetSetup();
IRAM_ATTR void ethernetLoop(void);

bool ethernetEverySecond();
bool ethernetEvery5Seconds();
void ethernet_get_statusupdate(char* buffer, size_t len);

void ethernet_get_info(JsonDocument& doc);

#endif