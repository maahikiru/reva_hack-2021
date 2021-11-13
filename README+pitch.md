# reva_hack-2021
none of the following is a code in this file

IDEA PITCH:
A simple, yet innovative idea on which I bet anyone could bet on!
Innovative game-changing idea for making one task easier the sports world.

Vision: Our project aims to make more easy, the no-ball decision given in international world cricket sport.
Mission: We aim to patent this technology which would be a very much easier alternative to existing boring methods of no-ball detection in bowling.

Area of application: International Cricket Sport

PROCESS:{

Aim: To detect whether a bowled ball is no-ball or not

Apparatus required: Arduino UNO, TTP229-16 Channel Capacitive Touch Sensor (41nos.), USB power to Arduino, (Customised conduction sensor), (Shoes manufactured with customised conductive flexible sole), encrypted signal transmitter and receiver, crease paint

Theory: refer file foot-checker.ino for code on theory, which is, whenever a sensor comes in detecting region of sensor, program outputs HIGH and vice versa.

Procedure: Above mentioned TTP229-16 sensor series is connected to pin 2 on Arduino board, encrypted signal transmitter is connected to pin 9 on Arduino board. The program for the Arduino board is in the file 'foot-checker.ino'. Encrypted signal receiver is connected to Arduino board at third umpire location and gives output indication whenever signal received is 'LOW', implies that when indicator is ON, the bowled ball is a no-ball. The primary Arduino board is placed at proper position from the wickets at bowling end, below the ground, then crease is painted using crease paints.
}

Some more details:
wicket to crease distance=1.22m to 1.83m=1220mm to 1830mm
TTP229-16 sensor length=64.5mm
crease length=2.64m=2640mm
no. of minimum sensors required=crease length/sensor length, rounded off to next integer=41
average bowling speed=90kmph=25m/s
required minimum frequency of sensing delay=40ms
programmed frequency of sensing delay=20ms

*project prototype is ready and includes this much*

additions to make this project into a viable real-life product:
>using conduction sensors instead of touch sensors,
>along with shoes with flexible conducting soles, to detect foot on sensor
>using broadcasting module with Arduino to send signal to third umpire
>using web developed program alongside Arduino to output third umpire's decision on scoreboard
