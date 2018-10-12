void setup() {
  pinMode(3,OUTPUT); //PWM LEFT
  pinMode(5,OUTPUT); //PWM RIGHT *CHANGE PIN
  pinMode(6,OUTPUT); //1A RIGHT 
  pinMode(7,OUTPUT); //2A LEFT
  pinMode(8,OUTPUT); //3A RIGHT
  pinMode(9,OUTPUT); //4A RIGHT
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW); //ground
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW); //ground
  analogWrite(3,0); //0% PWM
  analogWrite(5,0); //0% PWM *CHANGE PIN
}

void loop() {
  analogWrite(3,127); //50% PWM
  analogWrite(5,127); //50% PWM
  /* For future: When we have inputs, we can change 
   * speed of the wheel by changing PWM &
   * to turn we can make PWM higher on one side and lower on the other.
   */
   // if receive from button (turn right) [digitalRead(buttonPin)]
   //     PWM pin left -> 0
   //     PWM pin right -> 50
   // if receive from button (turn left) [digitalRead(buttonPin)]
   //     PWM pin left -> 50
   //     PWM pin right -> 0
   // if receive from button (start/end)
   //    if already start: PWM pin -> 50
   //    if already nothing: PWM pin --> 0
   // FOR AUTONOMOUS: Taking in data thru digitalRead(dataPin) and will move accordingly
}
