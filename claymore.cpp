#include <NewPing.h>
#include <stdlib.h>
#define MAX_DISTANCE 280

//display
int a;
int b;
int c;
int d;
int parteInteira;
int parteFracionaria;
int displayshow;
int i = 0;

//Ultrassonico
int trig = 12;
int echo = 11;

//rele
int rele = 4;


//Distancias e tempo
float dist;
float distMetros;

NewPing sonarA(trig, echo, MAX_DISTANCE);

void setup() {

  //display
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

  //rele
  pinMode(rele, OUTPUT);
  
  //Led e Buzzer
  pinMode(LED_BUILTIN, OUTPUT);
  
  Serial.begin(9600);
}

void distancia(){
  dist = sonarA.ping() / US_ROUNDTRIP_CM; // Send ping, get ping time in microseconds (uS).
  while(dist == 0){
    dist = sonarA.ping() / US_ROUNDTRIP_CM;  
  }

  distMetros = dist/100;

  //para display
  parteInteira = (int)distMetros; 
  parteFracionaria = (distMetros - parteInteira) * 10;
  
  Serial.print("Distancia:");
  Serial.print(parteInteira);
  Serial.print(".");
  Serial.print(parteFracionaria);
  Serial.print("\n");
  
}

void piscar(){

  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);                 
  digitalWrite(LED_BUILTIN, LOW);  
  delay(3*dist);
  
}

void BOOM(){
  digitalWrite(rele, HIGH);
  Serial.print("BOOM");
  delay(5000);
  digitalWrite(rele, LOW);
  exit(0);
}

//funcoes display
void v0(){
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
}
void v1(){
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
}
void v2(){
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
}
void v3(){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
}
void v4(){
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
}
void v5(){
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
}
void v6(){
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
}
void v7(){
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
}
void v8(){
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
}
void v9(){
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
}
void display1Config(){
    a = 10;
    b = 9;
    c = 0;
    d = 0;
}

void display2Config(){
    a = 8;
    b = 7;
    c = 6;
    d = 5;
}

void selectDisplay(){
    if (i == 0){
        displayshow = parteInteira;
        display1Config();
        i++;
        delayMicroseconds(10);
    }else {
        if ( i == 1){
            displayshow = parteFracionaria;
            display2Config();
            i = i - 1;
        }
    }
}


void display(){

    selectDisplay();
    
    switch (displayshow){
        

        case 0:
            v0();
        break;

        case 1:
            v1();
        break;

        case 2:
            v2();
        break;

        case 3:
            v3();
        break;

        case 4:
            v4();
        break;

        case 5:
            v5();
        break;

        case 6:
            v6();
        break;

        case 7:
            v7();
        break;

        case 8:
            v8();
        break;
        case 9:
            v8();
        break;

    }
}

void loop() {
  distancia();
  display();
  piscar();
  if(dist <= 20){
    BOOM();
  }
} 
