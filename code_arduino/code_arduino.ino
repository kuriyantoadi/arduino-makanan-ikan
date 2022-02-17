#include <Servo.h> // menyertakan library servo ke dalam program
Servo myservo;     // variable untuk menyimpan posisi data
int pos = 00;

void setup(){
 // myservo.attach(1); //sinyal data kabel motor servo dikonekan di pin 3 Arduino
}

void loop(){
 delay(1000); //delay di bawah

 for(pos = 00; pos < 180; pos += 1)  //fungsi perulangan yang akan dijadikan PWM dengan kenaikan 1
 {
  myservo.write(pos); //prosedur penulisan data PWM ke motor servo
  delay(15); //waktu tunda 15 ms       titik A
 }

 delay(1000); //delay di bawah

 for(pos = 180; pos>=1; pos-=1)  //fungsi perulangan yang akan dijadikan PWM dengan penurunan 1
 {
  myservo.write(pos);
  delay(2);                      // titik B
 }

  delay(2000); //delay di atas

}
