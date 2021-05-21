// C++ code

//vamos aprender a ler uma porta
//nesse exercicio é usado um potenciometro
//que é um resistor variavel
//o que permite alterar tensao e corrente do circuito

#define an5 A5

void setup(){
  pinMode(an5, INPUT);
  Serial.begin(9600);
  //metodo serial conecta com o monitor serial, onde sera a saida
  //9600 é a velocidade de comunicaçao com a porta serial
}

void loop(){
  Serial.println(analogRead(an5)); 
  //analogRead retorna o valor da porta lida
  // println vai printar no monitor
  delay(100);
}