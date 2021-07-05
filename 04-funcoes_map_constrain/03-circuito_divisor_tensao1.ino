#define an0 A0


void setup(){
  pinMode(an0, INPUT);
  Serial.begin(9600);
}

void loop(){
  Serial.println(analogRead(an0));
}

//nesse experimento relacionamos a tensao com a variaçao decimal da saida das portas
//logo cada variaçao decimal vai ser equivalente a uma pequena faixa da tensao
//por exemplo, o decimal 0 vai valer 0V e o decimal 1023 sera 5V
//o objetivo é colocar 2 resistores e variar seus valores
//para a tensao de saida que é a que fica no nó entre eles varie
//podemos notar que o circuito é igual ao do esquema da foto anexada
//o fio amarelo esta conectado entre os dois resistores e ligado a saida do arduino
//onde seu valor de tensao sera lido e exibido no erial
//podemos ver no multimetro tambem conectado no circuito o valor da tensao em V