#ifndef STATION_H_INCLUDED
#define STATION_H_INCLUDED

#include <Arduino.h>
#ifdef ESP32
  #include <HTTPClient.h>
  #include <WiFi.h>
#elif ESP8266
  #include <ESP8266HTTPClient.h>
  #include <ESP8266WiFi.h>
#endif

#include <Arduino.h>
#include <ArduinoJson.h>
#include "common.h"
#include "eeprom-handler.h"

#define CFG_SENSOR_DASHBOARD_URL xstr(SENSOR_DASHBOARD_URL)
#define WIFI_CONNECT_RETRIES 50

bool setupWiFi();
StaticJsonDocument<800> readMeasurements();

#endif