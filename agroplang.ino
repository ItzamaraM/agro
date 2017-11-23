//Declare pins
int buzzer =13;
int flama =A0;
int gas=A1;
int danger = 50;
int peligro = 1023;
int freq= 250;
int valFlama, valHumo;

//Initialize ios
void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(flama, INPUT);
  pinMode(gas, INPUT);
  Serial.begin(9600);
}

//Method Callbacks
void loop() {
  readValues();
  showValues();
  alarm();
  
  delay(500);

}

//Read sensor values
void readValues() {
  valHumo= analogRead(gas);
  valFlama= analogRead(flama);

}

//Show sensor Values
void showValues(){
  Serial.print("El valor de la flama: ");
  Serial.println(valFlama);
  Serial.print("El valor del humo es: ");
  Serial.println(valHumo);

}

//alarm
void alarm(){
  if (valFlama <= danger && valFlama <= danger){
    tone(buzzer, freq);
  } else {
    noTone(buzzer);
  
  }
}




  
  
  
