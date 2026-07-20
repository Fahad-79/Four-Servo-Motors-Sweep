#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

const int servoPin1 = 3;
const int servoPin2 = 5;
const int servoPin3 = 6;
const int servoPin4 = 9;

const unsigned long sweepDuration = 2000; // ثانيتان
const int stepDelay = 5;

void setAllServos(int angle) {
  servo1.write(angle);
  servo2.write(angle);
  servo3.write(angle);
  servo4.write(angle);
}

void setup() {
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);
  servo4.attach(servoPin4);

  unsigned long startTime = millis();

  // تشغيل حركة Sweep لمدة ثانيتين فقط
  while (millis() - startTime < sweepDuration) {

    // الحركة من 0 إلى 180 درجة
    for (int angle = 0; angle <= 180; angle++) {

      if (millis() - startTime >= sweepDuration) {
        break;
      }

      setAllServos(angle);
      delay(stepDelay);
    }

    // العودة من 180 إلى 0 درجة
    for (int angle = 180; angle >= 0; angle--) {

      if (millis() - startTime >= sweepDuration) {
        break;
      }

      setAllServos(angle);
      delay(stepDelay);
    }
  }

  // بعد انتهاء الثانيتين تثبت جميع المحركات عند 90 درجة
  setAllServos(90);
}

void loop() {
  // المحافظة على جميع المحركات عند زاوية 90
  setAllServos(90);
  delay(20);
}