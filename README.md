# A-Look-at-Capacitive-Water-Overflow-Sensor
A sensor that can detect the water in a beaker, container or tank from outside based on capacitance measurement.

Detection of Water overflow in a tank is one of the main topics when it comes to energy saving applications and all. There are a lot of already available solutions which contain water level indicators, usually some copper wires are dipped into the tank. When water touches the wire end it completes the circuit and the signal propagates throughout. Although it is widely used and safe, installing this type of thing in a water tank is tedious work. Overall we need a solution which is like plug and play. After going through some of the online available options, I got my hands on one of the Non-contact Capacitive Liquid Level Sensor for Containers. This is provided by DF ROBOT. 

![Image](https://github.com/user-attachments/assets/ab024ed2-51fd-48e0-b4f2-479e26e4e40a)

Capacitive Water Sensor:

This is a non-contact liquid level sensor with status indicator and adjustable sensitivity. It can be used in liquid detection of non-metallic container or pipe(outer diameter>11mm), suitable for all types of detection of curved or flat surfaces, arcs, cylindrical containers, or piping fluids. The status feedback of the sensor can be given in real-time. Besides that, the sensor comes with a 4 pin sensor adaptor that can directly collect digital signal, convenient for connecting with Arduino or other main-controllers. This liquid level sensor can be widely used in liquid detection of a tank, water dispenser, etc.

![Image](https://github.com/user-attachments/assets/2b2c734d-5144-489c-855c-b95636d26bb0)

Power Supply: 5~12V

Output Mode: switch quantity (high-level output)

Response Time: 500ms

Operating Temperature: -5~105°C

Liquid Level Error: ±1.5mm

Thickness Range(TR): ≤20mm

Suitable Container OD: ≥11mm

Response Time: 500ms

Waterproof Performance: IP65

This non-contact liquid level sensor is developed on advanced signal process technology by high-speed signal processing chip. It can measure the liquid level of a closed container without the influence of corrosive liquids like strong acid and alkali, or other impurities. Do we really need an Arduino with this, the answer is NO. This sensor outputs a digital output means:

Water Detected: 1

Water Not Detected: 0

Features:

High stability and sensitivity
Adjustable sensitivity
With status indicator
Accurate detection can detect the liquid level of boiling water

Working Principle:

![Image](https://github.com/user-attachments/assets/51744aae-373a-4cbf-bd19-5a9123891242)

A Non-contact liquid level sensor is used for detecting whether there is liquid by water induction capacitor. When there is no liquid approaching the sensor, there will be some static capacitance to ground on the sensor due to the presence of distributed capacitance. When the liquid level rises slowly to approach the sensor, the liquid parasitic capacitor will be coupled to the static capacitance so that the final capacitance value will increase. The changed capacitance signal will be input to the control IC for signal conversion, by which to transform the changed capacitance value into the variation of a certain electric signal. Then the degree of the variation can be detected and determined through specific algorithms. When the variation exceeds a threshold value, it means the liquid level reaches the sensing point.

![Image](https://github.com/user-attachments/assets/bb3b098d-91dc-4a26-a348-16babb7d9794)

Connection with Arduino:

![Image](https://github.com/user-attachments/assets/610846e7-124f-4da0-a426-56e246e7618f)

The connections to Arduino are rather simple, if it detects some output the serial will plot the working 1 otherwise zero. At the circuit end, the change in capacitance is an analog phenomenon. But a comparator inside it will convert the signal into digital having some inbuilt reference. The connection diagram is given above, usually it requires a single output wire but comes with a module which makes it easy to plug into any microcontroller board. Or the data may be directly sent to the water tank motor controlled through a wireless radio connection which turns off the motor after filling the tank, that’s the topic for some other day. See how I made this Arduino board using PCBWAY PCB manufacturing services.  

https://www.pcbway.com/?from=circuitkicker

![Image](https://github.com/user-attachments/assets/688382c0-ca5b-446c-ab69-71984634e333)

Working and Testing:

![Image](https://github.com/user-attachments/assets/59db35f4-2835-4d48-9c5a-dfbbec904a79)

I have tested the sensor in many scenarios, and I found it reacts to every change in capacitance, not only the water. And that’s why the sensor is prohibited to use with metal containers, as the change in capacitance can not be interpreted there, as metal offers a maximum parallel plate capacitance so the proper detection of water can not be done in that case. It reacts to very little volume of water as I am using a simple bottle for displaying purposes. And the sensor also reacts to the hand, as there it forms a parasitic capacitor with the body.

![Image](https://github.com/user-attachments/assets/acbc5918-b1cc-4554-9b05-56cdfff738dd)

Looking for a truly flexible PCB solution? PCBWay offers industry-leading flexible PCB manufacturing with fast turnaround, low minimum order quantities, and precision quality. Whether it's single-layer or multi-layer flex, their advanced capabilities and expert support ensure your designs come to life exactly as you envision. Try PCBWay's flexible PCB service today reliable, affordable, and tailor-made for innovation!

![Image](https://github.com/user-attachments/assets/e529f302-c0ea-487d-854d-6d56ac62a1bb)

