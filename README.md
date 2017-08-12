# Arduino Voltmeter

## How it Works 
Analog input from pin A0 is received through a voltage divider circuit to allow for the Arduino board to handle higher voltages. 
This is because the arduino analog pins can handle a maximum voltage of 5V, so a voltage divider is neccesary to be able to handle 
higher voltages. 

A 1:100 voltage divider is used. This means the received voltage to the board will be 100x less than it actually is. 
The voltage divider equation is then used to convert voltage received to the actual input voltage. This voltage is then displayed on a 
16x2 LCD screen for the user to see.

## Circuit Drawing 

![circuit drawing](https://user-images.githubusercontent.com/29009445/29237394-67cf517e-7eeb-11e7-873b-d3c9f35daff8.png)

Voltmeter in action: -insert youtube link-
