# reva_hack-2021
A simple, yet innovative idea on which I bet anyone could bet on!
Innovative game-changing idea for making one task easier the sports world.
Vision: Our project aims to make more easy, the no-ball decision given in international world cricket sport.
Mission: We aim to patent this technology which would be a very much easier alternative to existing boring methods of no-ball detection in bowling.

Area of application: International Cricket Sport


Aim: To detect whether a bowled ball is no-ball or not

Apparatus required: Arduino UNO, TTP229-16 Channel Capacitive Touch Sensor (41nos.), USB power to Arduino, (Customised conduction sensor), (Shoes manufactured with customised conductive flexible sole), encrypted signal transmitter and receiver, crease paint

Theory: refer file foot-checker.ino for code on theory, which is, whenever a sensor comes in detecting region of sensor, program outputs HIGH and vice versa.

Procedure: Above mentioned TTP229-16 sensor series is connected to pin 2 on Arduino board, encrypted signal transmitter is connected to pin 9 on Arduino board. The program for the Arduino board is in the file 'foot-checker.ino'. Encrypted signal receiver is connected to Arduino board at third umpire location and gives output indication whenever signal received is 'LOW', implies that when indicator is ON, the bowled ball is a no-ball.

