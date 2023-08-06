#ifdef CYTRON_MDD10A_DRIVER

  #define RIGHT_MOTOR_DIR_PIN 7
  #define RIGHT_MOTOR_PWM_PIN 6
  #define LEFT_MOTOR_DIR_PIN  4
  #define LEFT_MOTOR_PWM_PIN  9
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
