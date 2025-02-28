/**
 * OnDemandConfigPortal.ino
 * example of running the configPortal AP manually, independantly from the captiveportal
 * trigger pin will start a configPortal AP for 120 seconds then turn it off.
 * 
 */

#include <Arduino.h>

#include <AsyncWiFiManager.h> // https://github.com/tzapu/AsyncWiFiManager

// select which pin will trigger the configuration portal when set to LOW
#define TRIGGER_PIN 0

int timeout = 120; // seconds to run for

void setup() {
  WiFi.mode(WIFI_STA); // explicitly set mode, esp defaults to STA+AP  
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("\n Starting");
  pinMode(TRIGGER_PIN, INPUT_PULLUP);
}

void loop() {
  // is configuration portal requested?
  if ( digitalRead(TRIGGER_PIN) == LOW) {
    AsyncWiFiManager wm;    

    //reset settings - for testing
    //AsyncWiFiManager.resetSettings();
  
    // set configportal timeout
    wm.setConfigPortalTimeout(timeout);

    // set wifi connect retries
    // wm.setConnectRetries(2);

    if (!wm.startConfigPortal("OnDemandAP")) {
      Serial.println("failed to connect and hit timeout");
      delay(3000);
      //reset and try again, or maybe put it to deep sleep
      ESP.restart();
      delay(5000);
    }

    //if you get here you have connected to the WiFi
    Serial.println("connected...yeey :)");

  }

  // put your main code here, to run repeatedly:
}
