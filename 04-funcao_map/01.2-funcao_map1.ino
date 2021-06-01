//Codigo incompleto

//Explicaçao Circuito
//Conforme o potenciometro varia o codigo faz o arduino ler um valor diferente da porta A0
//com esse valor ele liga os leds aos poucos
//repare que so tem um resistor porque ele esta ligado ao ground e depois ao negativo
//que esta ligado a todos os leds
//logo a carga que vem passa pelo resistor e consequentemente todos os leds ja estao ligados nele

// Funçao Map

int leds[] = {2, 3, 4, 5, 6, 7};
#define pot A0	
int val;


void setup(){
  //loop pra definir todos os leds de uma vez so como saida
  for(int i=0; 1<6; i++){
    pinMode(leds[i], OUTPUT);
  }
  pinMode(pot, INPUT);
  
}

void acender(int x){
  // funçao que recebe um valor intermediario 
  //relacionado entre a leitura das portas e a quantidade de leds
  //para conforme o potenciometro variar uma quantidade proporcional de leds acender
  //logo quando o potenciometro girr metade, metae dos leds vao acender
  
  int i;
  
  for(i=0; i<x; i++){
    digitalWrite(leds[i], HIGH);
  }
  for(i=x; i<6; i++){
    digitalWrite(leds[i], LOW);
  }
}


void loop(){
  val = analogRead(pot); 
  //val recebe o valor do potenciomentro
  
  acender(map(val, 0, 1023, 0, 6));
  //chamada de acender envia um valor x pra acender 
  //que recebe do metodo map
  //o metodo map vai relacionar os valores minimos e maximos 
  //da porta analogica com os valores da quantidade de vetores
}