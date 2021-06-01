// C++ code

// Funçao Map

#define led 3
#define pot A0	
//potenciomentro na porta analogica 0
//lem portas analogicas leem de 0 ate 1023
//enquanto as PWM de 0 a 255

void setup(){
  pinMode(led, OUTPUT);
  pinMode(pot, INPUT);
}

void loop(){
  //vamos tentar relacionar as duas portas
  //lendo o valor da porta analogica pot 
  //e escrevendo esse valor dividido por 4 na led
  //para que o led varie a intensidade de luz de acordo com a variaçao do potenciometro
  //ja que a relaçao entre a analogica e pwm é de 1/4
  //analogWrite(led, analogRead(pot)/4);
  
  // Usando Map
  // o map faz essa relaçao entre as portas automaticamente
  analogWrite(led, map(analogRead(pot), 0, 1023, 0, 255));
  // sintaxe do map
  // map(leitura, min_val_entrada, max_val_entrada,
  // min_val_saida, min_val_saida);
  // map vai ler o valor do potenciometro que é porta analogica
  // e entao os minimos e maximos valores das portas analogicas sao passados
  //esses sao valores de entrada
  // e os minimos e maximos valores das portas pwm sao os ultimos parametros
  //esses sao os valores de saida
  //o map vai ler os valores de entrada e retornar valores proporcionais na escala dos de saida
  //map é bastante usado para usar diferentes funçoes 
  //para cada faixa de dados recebidos por um sensor por exemplo
}