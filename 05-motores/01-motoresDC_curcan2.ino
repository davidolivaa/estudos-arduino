//circuito com transistor e pilha

//O transistor liga e ou desliga o motor
//Se o pino base receber uma tensao(vinda de alguma porta do arduino)
//==>o transistor permite a passagem da corrente
//Se o pino da base NAO receber tensao (a porta do arduino sendo LOW)
//==>o transistor bloqueia a passagem de corrente

//O motor esta ligado a pilha no positivo e o negativo ligado ao transistor
//o transistor esta ligado ao negativo da pilha
//mas o transistor so permitira a passagem da corrente se receber uma tensao 
//==> vinda do arduino
//precisamos fazer isso porque mesmo quando o motor é desligado
//==>ele continua girando um pouco antes de parar 
//==> o que causa uma tensao de pico que prejudica o arduino


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