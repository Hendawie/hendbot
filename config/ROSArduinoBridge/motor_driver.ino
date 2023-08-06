/***************************************************************
   Motor driver definitions
   
   Add a "#elif defined" block to this file to include support
   for a particular motor driver.  Then add the appropriate
   #define near the top of the main ROSArduinoBridge.ino file.
   
   *************************************************************/

#ifdef USE_BASE
   
#ifdef CYTRON_MDD10A_DRIVER
  void initMotorController() {
  }
  
  void setMotorSpeed(int i, int spd) {
    unsigned char reverse = 0;
  
    if (spd < 0)
    {
      spd = -spd;
      reverse = 1;
    }
    if (spd > 255)
      spd = 255;
    
    if (i == LEFT) { 
      if (reverse == 0) {
        digitalWrite(LEFT_MOTOR_DIR_PIN, LOW);
        analogWrite(LEFT_MOTOR_PWM_PIN, spd);
      } else {
        digitalWrite(LEFT_MOTOR_DIR_PIN, HIGH);
        analogWrite(LEFT_MOTOR_PWM_PIN, spd);
      }
    }
    else { //if (i == RIGHT)
      if (reverse == 0) {
        digitalWrite(RIGHT_MOTOR_DIR_PIN, LOW);
        analogWrite(RIGHT_MOTOR_PWM_PIN, spd);
      } else {
        digitalWrite(RIGHT_MOTOR_DIR_PIN, HIGH);
        analogWrite(RIGHT_MOTOR_PWM_PIN, spd);
      }
    }
  }

  void setMotorSpeeds(int leftSpeed, int rightSpeed) {
    setMotorSpeed(LEFT, leftSpeed);
    setMotorSpeed(RIGHT, rightSpeed);
  }
#else
  #error A motor driver must be selected!
#endif

#endif
