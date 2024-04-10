//Wheelchair Project

//set inputs and outputs

DDRD=0b00111110;
DDRB=0b00001111;
DDRC=0b00000000;

    //left stepper motor (pins 2-5)

    //right stepper motor (pins 8-11)
    
    //piezo buzzer (pin 1)
  
    //joystick (pins 6,7,12,13)

    //ultrasonic sensor 1 (pins A0 and A1)

    //ultrasonic sensor 2 (pins A2 and A3)

while(1){
  
//Read inputs from joystick
forward=digitalRead(7);
backward=digitalRead(13);
left=digitalRead(12);
right=digitalRead(6);


//user pushes joystick forward (pin 7)////////////////////


while(forward==1){

  //let both motors run forward
  PORTD=
  PORTB=

  //check for obstacles
    //read sensors

    if(sensor detects obstacle within 2 feet){

      while(obstacle is within 2 feet){
        
        //sound buzzer

        PORTD=
        
        //sensor checks distance from obstacle
        
      }

      
    }

  
    


}


   

//user pushes joystick backward (pin 13) /////////////////////////

while(backward==1){

  //let both motors run backward

  PORTD=
  PORTB=

    //check for obstacles

 //if any of the sensors detects an obstacle within 2 feet, actuate the piezo buzzer until user moves away from obstacle

}



//user pushes joystick to the left (pin 12)//////////////////////

while(left==1){

  //let right motor run and left motor stationary

  PORTB=

  //check for obstacles

    //if any of the sensors detects an obstacle within 2 feet, actuate the piezo buzzer until user moves away from obstacle

}


//user pushes joystick to the right (pin 6)////////////////////

while(right==1){

  //let left motor run and right motor stationary

  PORTD=

  //check for obstacles

    //if any of the sensors detects an obstacle within 2 feet, actuate the piezo buzzer until user moves away from obstacle

}

//user pushes joystick front left//////////////////////




//user pushes joystick from right///////////////////////


//user pushes joystick back left///////////////////////


//user pushes joystick back right//////////////////////





}
