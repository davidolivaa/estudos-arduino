// C++ code

//componente fotoresistor ldr

#define ldr A0
//#define led 2
int led = 2;
int vldr=0;


void setup()
{
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600); //conexao com o serial monitor
}

void loop(){
  vldr = analogRead(ldr); //le o valor do ldr
  
  //dependendo da intensidade de luz captada pelo sensor
  //o led vai ligar ou nao
  if(vldr<700){
    digitalWrite(led, HIGH);
  } else{
    digitalWrite(led, LOW);
  }
  Serial.println(vldr); 
  //printa na tela/serial monitor os valores captados pelo sensor
  
  delay(100);
}