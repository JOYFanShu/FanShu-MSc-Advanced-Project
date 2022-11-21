#include "FastLED.h"            // 此示例程序需要使用FastLED库
#define NUM_LEDS 100      /* The amount of pixels/leds you have */
#define DATA_PIN 10      /* The pin your data line is connected to */
#define LED_TYPE WS2812B /* I assume you have WS2812B leds, if not just change it to whatever you have */
#define BRIGHTNESS 100   /* Control the brightness of your leds */
#define SATURATION 255 
CRGB leds[NUM_LEDS];

#define trigPin 11
#define echoPin 12


void setup() {
Serial.begin (9600);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
}


void loop() {
long duration, distance;
digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor

if (distance >= 100) {

  Serial.print(distance);
  Serial.println(" cm");
  fill_solid(leds, 120, CRGB::Black);
  FastLED.show(); 
  delay(25);
  
}

if (distance < 100) {
      Serial.print(distance);
      Serial.println(" cm");
      for (int j = 0; j < 255; j++) {
    for (int i = 0; i < NUM_LEDS; i++) {
      leds[i] = CHSV(i - (j * 2), SATURATION, BRIGHTNESS); /* The higher the value 4 the less fade there is and vice versa */ 
    }
    FastLED.show();
    delay(25);
      
}

delay(100);

}
}
