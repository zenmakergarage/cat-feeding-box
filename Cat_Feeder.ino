#define BLYNK_TEMPLATE_ID "XXXX"
#define BLYNK_DEVICE_NAME "XXXX"
#define BLYNK_AUTH_TOKEN "XXXXX"

#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>



char auth[] = BLYNK_AUTH_TOKEN;

// Set password to "" for open networks.
char ssid[] = "XXXX";
char pass[] = "XXXX";
                    
    

void setup()
{
  Serial.begin(9600);
  Serial.println("Pleae wait....");
  Blynk.begin(auth, ssid, pass);

  
}

void loop()
{
  Blynk.run(); 




}
