//Circuito com diodo

//Aqui temos um transistor com conectores em posiçoes diferentes
//temos tambem um diodo que é diferente dos resistores
//==> ele necessita estar na direçao certa, senao a corrente nao passa

#define motor 2
int tmp=500;

void setup(){
  pinMode(motor, OUTPUT);
}

void loop(){
  digitalWrite(motor, HIGH);
  delay(tmp); // Wait for 1000 millisecond(s)
  digitalWrite(motor, LOW);
  delay(tmp); // Wait for 1000 millisecond(s)
}