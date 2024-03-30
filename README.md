# Traffic-Light-Simulator

Gather the following materials from the IoT kit:
1 x ESP32
1 x USB Cable
3 x LED
1 x 330-ohm Resistor
1 x Jumper Wires
1 x battery
1 x Battery Socket

The first and foremost thing to do is to mount the ESP32 on the breadboard across both the sides of the middle breakers.

Mounting the Components
● Mount LED’s & Resistor:
○ Insert three LEDs into the breadboard & three resistors.
○ Connect the longer leg of the LED to one end of the resistor as shown below.
○ Do the same for other three LEDs.

The third step is to wire everything up:
Provide +ve (5V) and GND (-ve) to the LED and the resistor respectively.
● Connect the other end of the resistor with ESP32 pins D25, D26, D27, D31, D32 respectively. Just below the resistor pin, insert the male jumper wire.

Note: All the pins in the breadboard component rails are internally connected to each other

● Connect the negative part (shorter leg) of the LED to the GND terminal of the ESP32. Take a male jumper wire and connect it just below the shorter leg of the LED and drag it to the GND (-ve) terminal of the ESP32. Do the same for the other four LEDs too.

Now, it's time for programming.
Open the Arduino IDE software on your computer. Code in the Arduino language will control your circuit.

Step-1 The first and most important thing is to declare the global variables
● Define variables along with their data types.
● int, const int is called data types, data type int is used to store an integer value.
● As we have a total of five LEDs, define an array of LEDs named arr_pin.
● We must initialize the PIN numbers. In ESP32, the LED on the board is connected to pin numbers 25, 26, 27, 32 and 33. However, we can choose any number on the breadboard.
● i and j will be used for the for loop.

Step-2: The next task is to initialize under setup() function
● Range-based for loop for array of LED’s. For loop is used for iteration , its same as we did in other programing language like python, java etc
● To configure these pins, we use the pinMode() function.
● PinMode() configures the specified pin(arr_pin) to behave either as an input or an output. As we want to act as output we are writing OUTPUT here
● Syntax: pinMode(pin, mode)
● Pin: Which pin do we need to set
● mode: Set the mode INPUT, OUTPUT,
● Set a delay of 200ms.

Step-3: Execution of the main task. Blink an LED from higher to lower
All the main processes need to be set under void loop().
● For loop used to on and off LED’S pin
● The pin needs to be programmed to be either ON or OFF, we can command it to be ON (output 5 volts), or OFF (output 0 volts).
● To make it on and off we need to use a function called digitalWrite().

Step-4 Blink an LED from highest pin to the lowest
● for loop used to on and off LED’S pin
● The pin needs to be programmed to be either ON or OFF, we can command it to be ON (output 5 volts), or OFF (output 0 volts).
● To make it on and off we need to use a function called digitalWrite()
● Set up a delay

Let’s upload the program to check if we are able to program our ESP32 module.
For uploading, we need a USB cable.
Take the USB cable, from IoT kit.
Insert one end of the USB cables in the ESP32 USB port and another end in the Computer’s USB port.
Now select the port for communication:
1. Go to Tools.
2. Select the Serial Port
3. Select the Port No
Note: We can find the port number by accessing the device manager on Windows

Everything is ready now. The Arduino board is now ready to communicate with your PC. Instructions will be sent to the ESP32 board from your PC.
Click on the tick to verify the syntax
OR
Click on Sketch >>Verify/Compile
When you hit the tick button, the program you have written in the Arduino IDE will be compiled for any errors.

Now, the next thing is to upload the program,
Click on the arrow to upload the program.
OR
Click on Sketch >>Upload

If you look at your ESP32, you can see the 2 LEDs near Tx and Rx blinking. This is an indication of successful communication between your PC and ESP32 board.
If the program has been uploaded successfully, you will see a message like Done Uploading. If the uploading process was not successful, you will see an error message accordingly.

Now You will see the LED blinking pattern from lower to highest and higher to lower.
This is how we can create blinking patterns with an LED and a microcontroller.
