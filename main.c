#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif
#define PIN        12
#define NUMPIXELS 24

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int delayval = 300;
int point=1;
int pause = random(23);


void setup() {
    Serial.begin(9600);

    #if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
        clock_prescale_set(clock_div_1);
        pinMode(3, INPUT);
    #endif
        pixels.begin();
}

void loop() {
    Serial.println(point);

    pixels.setPixelColor(pause, pixels.Color(123, 55, 0));
    pixels.show();
    int i;
    for(i=0; i<NUMPIXELS; i++) {

        pixels.setPixelColor(i, pixels.Color(255, 150, 255));
        pixels.show();

        pixels.setPixelColor(i, pixels.Color(0, 0, 0));

        delay(delayval);
        if (i == pause) 
        {
            pixels.setPixelColor(pause, pixels.Color(123, 55, 0));
            pixels.show();    	
        }
        if (digitalRead(3) == HIGH) {
            if(pause == i) 
            {
                for (int j = 0; j<NUMPIXELS; j++) 
                {
                pixels.setPixelColor(j, pixels.Color(0, 255, 0));
                pixels.show();
                }
                delay(500);
                pixels.clear();
                pause = random(23);
                point++;
                delayval = delayval - point * 10;
                if (delayval < 0) 
                    delayval = 50; 
            }
            else 
            {
                int k;
                for (k = 0; k<NUMPIXELS; k++) 
                {
                    pixels.setPixelColor(k, pixels.Color(255, 0, 0));
                    pixels.show();  
                }
                pixels.clear();
                point = 0;
                delayval = 300;
            }
            break;
        }
    
  }
}