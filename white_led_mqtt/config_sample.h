/*
 * This is a sample configuration file for the "mqtt_esp8266" light.
 *
 * Change the settings below and save the file as "config.h"
 * You can then upload the code using the Arduino IDE.
 */

// Pins
#define CONFIG_PIN_WHITE 2 // For STRIP

// WiFi
#define CONFIG_WIFI_SSID "{Wifi-SSID}}"
#define CONFIG_WIFI_PASS "{Wifi-Password}"

// MQTT
#define CONFIG_MQTT_HOST "{mqtt-ip}"
#define CONFIG_MQTT_PORT 1883 // Usually 1883
#define CONFIG_MQTT_USER "{user}"
#define CONFIG_MQTT_PASS "{password}"
#define CONFIG_MQTT_CLIENT_ID "ESP_WHITE_LED" // Must be unique on the MQTT network

#define CONFIG_DEFAULT_TRANSITION_TIME 1

// MQTT Topics
//Led strip
#define CONFIG_LED_TOPIC_STATE "home/pokoj/postel/led"
#define CONFIG_LED_TOPIC_SET "home/pokoj/postel/led/set"

#define CONFIG_MQTT_PAYLOAD_ON "ON"
#define CONFIG_MQTT_PAYLOAD_OFF "OFF"

// Miscellaneous
// Default number of flashes if no value was given
#define CONFIG_DEFAULT_FLASH_LENGTH 2
// Number of seconds for one transition in colorfade mode
#define CONFIG_COLORFADE_TIME_SLOW 10
#define CONFIG_COLORFADE_TIME_FAST 3

// Reverse the LED logic
// false: 0 (off) - 255 (bright)
// true: 255 (off) - 0 (bright)
#define CONFIG_INVERT_LED_LOGIC false

// Set the mode for the built-in LED on some boards.
// -1 = Do nothing. Leave the pin in its default state.
//  0 = Explicitly set the LED_BUILTIN to LOW.
//  1 = Explicitly set the LED_BUILTIN to HIGH. (Off for Wemos D1 Mini)
#define CONFIG_LED_BUILTIN_MODE 1

// Enables Serial and print statements
#define CONFIG_DEBUG false
