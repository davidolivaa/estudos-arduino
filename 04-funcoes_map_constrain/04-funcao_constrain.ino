//

#define pot A0
int val=0;

void setup(){
  pinMode(pot, INPUT);
  Serial.begin(9600); //velocidadde padrao
}

void loop(){
  val=analogRead(pot);
  val=constrain(val, 500, 800); //val sera sobreescrito pelo retorno de constrain
  //funçao prima da map
  //constrain limita a saida a um intervalo de valores 
  //logo os valores lidos que sejam menores ou maiores que esse intervalo
  //serao ignorados e nao serao exibidos no serial
  //mesmo o potenciometro ainda podendo variar e o analogRead conseguir ler o valor na saida analogica
  //o constrain so trabalhara com esse intervalo determinado
  
  Serial.println(val);
  delay(250);
  
}