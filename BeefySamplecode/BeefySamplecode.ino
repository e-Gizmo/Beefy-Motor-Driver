/*
      e-Gizmo Beefy Motor Driver Sample code
 
 This sketch can simply run your motor in one
 direction.
 
 Wiring Connections:
 gizDuinoPLUS MCU ===> BeefyMotorDriver
            GND   ===> GND
            RESET ===> RESET
            +5V   ===> SR
             D3   ===> PH
             +5V  ===> PWL
     PWM PIN/D4   ===> PWH
 
 by
 e-Gizmo Mechatronix Central
 Feb 13, 2017
 http://www.e-gizmo.com
 
 */
int PH_PIN = 3; // Direction pin
int PWH_PIN = 4; // Speed control/PWM pin

void setup(){
  pinMode(PH_PIN, OUTPUT);
  pinMode(PWH_PIN, OUTPUT);

}
void loop(){
  digitalWrite(PH_PIN, HIGH);
  analogWrite(PWH_PIN, 180);
}


