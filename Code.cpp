#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <ArduinoJson.h>

/*** WiFi Credentials ***/
const char *ssid = "YOUR_WIFI_SSID";
const char *password = "YOUR_WIFI_PASSWORD";

/*** OpenWeatherMap ***/
const String apiKey = "YOUR_OPENWEATHERMAP_API_KEY"; 
const String city = "YOUR_CITY_NAME"; 
const String country = "YOUR_COUNTRY_CODE"; // e.g, "IN"
String apiUrl = "http://api.openweathermap.org/data/2.5/forecast?q=" + city + "," + country + "&appid=" + apiKey;  //URL for forecast

/*** Hardware Pins ***/
#define SOIL_PIN A0 
#define PUMP_PIN D5 

/*** Thresholds ***/
#define MOISTURE_THRESHOLD 500  // Tune according to your sensor (0-1023)
#define IRRIGATION_TIME 10000  // 10 seconds
#define UPDATE_INTERVAL 1800000  // 30 mins

void setup() {
  Serial.begin(9600); // Start Serial communication at 9600 baud rate
  pinMode(PUMP_PIN, OUTPUT);
  digitalWrite(PUMP_PIN, LOW);

  // Begin&nbsp; WiFi “Connecting”
  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");

  // Wait till connected to the Wi-fi
  while(WiFi.status() != WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }
  Serial.println("Connected!");
}

void loop() {
  int moisture = analogRead(SOIL_PIN);
  Serial.println("Soil Moisture: " + String(moisture));

  bool rainExpected = checkWeatherRain();
  if(moisture < MOISTURE_THRESHOLD && !rainExpected) { // if moisture less than threshold and rain not expected
    Serial.println("Irrigation ON");
    digitalWrite(PUMP_PIN, HIGH);
    delay(IRRIGATION_TIME);

