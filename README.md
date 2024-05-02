# Neopixel-Ring-Game


NeoPixel LED Game
This project uses an Arduino with NeoPixel LEDs to create a simple interactive game. The LEDs display a moving point that the player must stop at the correct position to score points.

**Requirements**
Arduino board compatible with the Adafruit NeoPixel library
Adafruit NeoPixel library
NeoPixel LED strip


**Installation and Setup**
Install the Adafruit NeoPixel library in your Arduino IDE if you haven't already.
Connect your NeoPixel LED strip to the Arduino board according to your hardware setup.
Upload the code to your Arduino board.

**Usage**
Open the serial monitor to view debug information (optional but recommended).
The LED strip will display a moving point. \n
Press the button (connected to pin 3) to stop the point at the correct position.
If you stop the point at the correct position, you score points and the game continues with increased difficulty.
If you press the button at the wrong time, the game resets.

**Circuit Diagram**
![image](https://github.com/nidanurefe/Neopixel-Ring-Game/assets/114649782/09032c8c-e5bf-441f-9c4c-ca94f372c357)

Troubleshooting
If the LEDs do not light up or behave unexpectedly, check your wiring and connections.
Ensure that you have selected the correct board and port in the Arduino IDE.
Adjust the delayval variable in the code to change the speed of the moving point.
