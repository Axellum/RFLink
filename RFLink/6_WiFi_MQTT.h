// ************************************* //
// * Arduino Project RFLink-esp        * //
// * https://github.com/couin3/RFLink  * //
// * 2018..2020 Stormteam - Marc RIVES * //
// * More details in RFLink.ino file   * //
// ************************************* //

#ifndef WiFi_MQTT_h
#define WiFi_MQTT_h

#include <Arduino.h>

extern char MQTTbuffer[PRINT_BUFFER_SIZE]; // Buffer for MQTT message

#if defined(MQTT_ENABLED) && (defined(ESP32) || defined(ESP8266))
void setup_WIFI();
void setup_MQTT();
void reconnect();
void publishMsg();
void checkMQTTloop();
#else
void setup_WIFI_OFF();
#endif

#endif