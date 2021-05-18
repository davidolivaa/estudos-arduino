// define é mais apropriado pra definir as portas do que variaveis
// diferente das vars que armazenam valores na memoria
// o @define nao usa a memoria para armazenar ou buscar valores
// @define subtsitui a palavra que representa o objeto que esta ligado na porta
// pelo seu valor diretamente nos metodos 
// é um valor fixo
// variaveis sao melhores pra quando é necessario armazenar e mudar os valores

#define led_verde 10
#define led_amarelo 9
#define led_vermelho 8

void setup() { 
  pinMode(led_verde, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_vermelho, OUTPUT);
}


// usando funçoes o codigo fica mais enxuto e mais facil de reaproveitar
void sinal_aberto(int tempo){
  digitalWrite(led_verde, HIGH); 
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_vermelho, LOW);
  delay(tempo*1000);
}

void sinal_fechado(int tempo){
  digitalWrite(led_verde, LOW); 
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_vermelho, HIGH);
  delay(tempo*1000); 
}

void sinal_atencao(int tempo){
  digitalWrite(led_verde, LOW); 
  digitalWrite(led_amarelo, HIGH);
  digitalWrite(led_vermelho, LOW);
  delay(tempo*1000);
}

void loop() {
  sinal_aberto(3);
  sinal_fechado(2);
  sinal_atencao(1);
}