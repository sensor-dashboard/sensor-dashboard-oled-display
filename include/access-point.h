#ifndef ACCESS_POINT_H_INCLUDED
#define ACCESS_POINT_H_INCLUDED

#include <Arduino.h>
#ifdef ESP32
  #include <HTTPClient.h>
  #include <WiFi.h>
#elif ESP8266
  #include <ESP8266HTTPClient.h>
  #include <ESP8266WiFi.h>
#endif

#include "eeprom-handler.h"
#include "common.h"

// Set web server port number to 80
extern WiFiServer server;

#define CFG_ONBOARD_WIFI_SSID xstr(ONBOARD_WIFI_SSID)
#define CFG_ONBOARD_WIFI_PASSWORD xstr(ONBOARD_WIFI_PASSWORD)

bool setupAP();
void sendSuccessResponse(WiFiClient client);
void sendBadRequestResponse(WiFiClient client);
void listenForConfig();
bool cleanupAP();

#endif